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
#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028090c
#define UINT_0028090c (*(uint *)(0x28090cU))
#undef UINT_00280968
#define UINT_00280968 (*(uint *)(0x280968U))
#undef str_10008ca8
#define str_10008ca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_10008cd2
#define str_10008cd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_10008ce3
#define str_10008ce3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#define local_b90 (*(int *)(pf_stack_frame + 192))
#define iStack_bfc (*(int *)(pf_stack_frame + 84))
#define local_b8c (*(int *)(pf_stack_frame + 196))
#define iStack_bec (*(int *)(pf_stack_frame + 100))
#define local_b88 (*(int *)(pf_stack_frame + 200))
#define auStack_be4 (*(undefined1 (*)[3044])(pf_stack_frame + 108))
#define local_b84 (*(int *)(pf_stack_frame + 204))
#define iStack_bd4 (*(int *)(pf_stack_frame + 124))
#define local_b80 (*(int *)(pf_stack_frame + 208))
#define auStack_bcc (*(undefined1 (*)[3020])(pf_stack_frame + 132))
#define local_b7c (*(int *)(pf_stack_frame + 212))
#define local_b78 (*(int *)(pf_stack_frame + 216))
#define local_b74 (*(int *)(pf_stack_frame + 220))
#define local_b70 (*(int *)(pf_stack_frame + 224))
#define local_b6c (*(int *)(pf_stack_frame + 228))
#define iStack_ba8 (*(int *)(pf_stack_frame + 168))
#define local_b10 (*(undefined1 (*)[2832])(pf_stack_frame + 320))
#define local_b0c (*(uint *)(pf_stack_frame + 324))
#define local_7d0 (*(int *)(pf_stack_frame + 1152))
#define local_7cc (*(uint *)(pf_stack_frame + 1156))
#define local_7c8 (*(int *)(pf_stack_frame + 1160))
#define local_7c4 (*(int *)(pf_stack_frame + 1164))
#define local_7c0 (*(int *)(pf_stack_frame + 1168))
#define iStack_b68 (*(int *)(pf_stack_frame + 232))
#define local_5ec (*(uint *)(pf_stack_frame + 1636))
#define local_5e8 (*(int *)(pf_stack_frame + 1640))
#define local_5e4 (*(char *)(pf_stack_frame + 1644))
#define local_5e0 (*(int *)(pf_stack_frame + 1648))
#define uStack_b08 (*(uint *)(pf_stack_frame + 328))
#define iStack_ae4 (*(int *)(pf_stack_frame + 364))
#define local_5a0 (*(char *)(pf_stack_frame + 1712))
#define local_28c (*(undefined1 (*)[652])(pf_stack_frame + 2500))
#define uStack_7bc (*(uint *)(pf_stack_frame + 1172))
#define local_25c (*(byte *)(pf_stack_frame + 2548))
#define uStack_7b4 (*(undefined4 *)(pf_stack_frame + 1180))
#define iStack_600 (*(int *)(pf_stack_frame + 1616))
#define local_258 (*(int *)(pf_stack_frame + 2552))
#define local_254 (*(int *)(pf_stack_frame + 2556))
#define iStack_5dc (*(int *)(pf_stack_frame + 1652))
#define uStack_59c (*(uint *)(pf_stack_frame + 1716))
#define uStack_43c (*(undefined1 *)(pf_stack_frame + 2068))
#define uStack_27c (*(uint *)(pf_stack_frame + 2516))
#define iStack_250 (*(int *)(pf_stack_frame + 2560))
#define local_c34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_c30 (*(int *)(pf_stack_frame + 32))
#define local_c2c (*(uint *)(pf_stack_frame + 36))
#define local_c28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_c24 (*(uint *)(pf_stack_frame + 44))
#define local_c20 (*(uint *)(pf_stack_frame + 48))
#define local_c1c (*(uint *)(pf_stack_frame + 52))
#define local_c18 (*(int *)(pf_stack_frame + 56))
#define local_c14 (*(uint *)(pf_stack_frame + 60))
#define local_c10 (*(uint *)(pf_stack_frame + 64))
#define local_c04 (*(int *)(pf_stack_frame + 76))
#define local_c00 (*(int *)(pf_stack_frame + 80))
#define local_bbc (*(char *)(pf_stack_frame + 148))
#define local_bb8 (*(undefined1 (*)[3000])(pf_stack_frame + 152))
#define local_bb4 (*(int *)(pf_stack_frame + 156))
#define local_bb0 (*(int *)(pf_stack_frame + 160))
#define local_bac (*(int *)(pf_stack_frame + 164))
#define uStack_c0c (*(uint *)(pf_stack_frame + 68))
#define local_b94 (*(int *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000830
 */

undefined4 recovered_10000830(void)

{
  unsigned char pf_stack_frame[3184] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int coordinate;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;

  thunk_memset(local_b10,0,0x884);
  thunk_pf_app_window_spec(local_28c,str_10008cd2,DAT_10009094,DAT_10009098);
  uStack_27c = thunk_terror_ui_colour(0);
  local_25c = local_25c | 1;
  uVar5 = thunk_terror_ui_window_open(local_b10,local_28c);
  if (uVar5 != 0) {
    local_7d0 = iStack_ae4;
    if (iStack_ae4 != 0) {
      DAT_10009094 = local_b0c;
      DAT_10009098 = uStack_b08;
      local_7cc = 0;
      uStack_7bc = 0xffffffff;
      uStack_7b4 = 0xffffffff;
      terror_ui_window_set_custom_menus(local_b10,str_10008ce3);
      recovered_100015c0((int)local_b10);
      recovered_100028b0(local_b10);
      while( true ) {
        terror_ui_window_begin_frame(local_b10);
        thunk_memset(local_28c,0,0x278);
        uVar7 = uStack_b08;
        uVar5 = local_b0c;
        uVar6 = thunk_terror_ui_window_query(local_b10,local_28c);
        if (((uVar6 == 0) || (uVar4 = thunk_terror_ui_window_info_requests_close(local_28c), uVar4 != '\0')) ||
           (uVar6 = thunk_terror_ui_window_sync_buffer(local_b10,local_28c), uVar6 == 0)) break;
        local_7d0 = iStack_ae4;
        DAT_10009094 = local_b0c;
        DAT_10009098 = uStack_b08;
        if ((local_b0c != uVar5) || (uStack_b08 != uVar7)) {
          recovered_100028b0(local_b10);
        }
        if (((local_258 != 0) && (local_258 != local_7c0)) &&
           (local_7c0 = local_258, local_254 == 1)) {
          if (iStack_250 == 2) {
            recovered_10006900((int)local_b10);
LAB_10000ac2:
            recovered_100028b0(local_b10);
          }
          else if (iStack_250 == 1) {
            recovered_100066f0((int)local_b10);
          }
          else if ((iStack_250 == 0) && (1 < uStack_7bc + 1)) {
            iVar11 = Ram00280800;
            if ((iVar11 == 0x50414d57) &&
               ((((iVar11 = Ram00280804, iVar11 != 0 && (uVar5 = Ram00280808, 0xb < uVar5)) &&
                 (uVar5 = Ram00280808, 0x10f < uVar5)) &&
                (pcVar1 = (code *)UINT_0028090c, pcVar1 != (code *)0x0)))) {
              (*pcVar1)(uStack_7bc);
            }
            uStack_7bc = 0xffffffff;
            uStack_43c = 0;
            recovered_100015c0((int)local_b10);
            goto LAB_10000ac2;
          }
        }
        thunk_memset(&local_c14,0,0x30);
        uVar7 = terror_ui_window_pointer_state_ex(local_b10,&local_c14);
        coordinate = iStack_bfc;
        iVar11 = local_c00;
        uVar5 = local_c14;
        if (uVar7 != 0) {
          local_c1c = local_c10;
          local_c24 = uStack_c0c;
          iVar8 = iStack_bec - local_5e8;
          local_5e8 = iStack_bec;
          local_c18 = local_c04;
          if (((local_c14 & 2) != 0 && iVar8 != 0) &&
             (iStack_bfc - 0x7cU < 0xc6 &&
              (local_c00 < (int)(DAT_10009094 - 0x10) && 0xf < local_c00))) {
            local_c20 = local_5ec;
            lVar3 = (longlong)iVar8 * -3 + (ulonglong)local_5ec;
            iVar8 = (int)((ulonglong)lVar3 >> 0x20);
            uVar7 = uStack_59c - 0xb;
            if (uStack_59c < 0xb) {
              uVar7 = 0;
            }
            uVar6 = (uint)lVar3;
            if (lVar3 < 0) {
              uVar6 = 0;
            }
            uVar9 = (uint)(uVar7 < (uint)lVar3);
            iVar2 = -iVar8;
            if ((SBORROW4(0,iVar8) != SBORROW4(iVar2,uVar9)) != (int)(iVar2 - uVar9) < 0) {
              uVar6 = uVar7;
            }
            if (local_5ec != uVar6) {
              local_5ec = uVar6;
              recovered_100028b0(local_b10);
            }
          }
          if (local_5e4 == '\x01') {
            if ((local_c1c & 1) == 0) {
              local_5e4 = '\0';
            }
            else if (coordinate != iStack_5dc) {
              local_c28 = 0xb;
              local_c34 = 0;
              local_c30 = uStack_59c - 0xb;
              if (uStack_59c < 0xb) {
                local_c30 = 0;
              }
              local_c2c = local_5ec;
              thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_10009094 - 0x20,0xc6,&local_c34,(void *)0x0,
                                 auStack_bcc);
              local_c28 = 0xb;
              local_c34 = 0;
              local_c30 = uStack_59c - 0xb;
              if (uStack_59c < 0xb) {
                local_c30 = 0;
              }
              local_c2c = local_5ec;
              iStack_5dc = coordinate;
              if (local_bbc == '\x01') {
                uVar7 = thunk_terror_ui_scrollbar_value_from_point(local_bb8,&local_c34,coordinate,local_5e0);
                uVar6 = uStack_59c - 0xb;
                if (uStack_59c < 0xb) {
                  uVar6 = 0;
                }
                uVar9 = 0;
                if (0 < (int)uVar7) {
                  uVar9 = uVar7;
                }
                iVar8 = -((int)uVar7 >> 0x1f);
                if ((SBORROW4(0,(int)uVar7 >> 0x1f) != SBORROW4(iVar8,(uint)(uVar6 < uVar7))) !=
                    (int)(iVar8 - (uint)(uVar6 < uVar7)) < 0) {
                  uVar9 = uVar6;
                }
                if (local_5ec != uVar9) {
                  local_5ec = uVar9;
                  recovered_100028b0(local_b10);
                }
              }
            }
          }
          if ((((local_c24 & 1) != 0) && ((uVar5 & 2) != 0)) && (local_c18 != local_7c4)) {
            local_7c4 = local_c18;
            local_c28 = 0xb;
            local_c34 = 0;
            local_c30 = uStack_59c - 0xb;
            if (uStack_59c < 0xb) {
              local_c30 = 0;
            }
            local_c2c = local_5ec;
            thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_10009094 - 0x20,0xc6,&local_c34,(void *)0x0,auStack_bcc
                              );
            if ((((local_bbc == '\x01') && (local_bb4 <= iVar11)) &&
                (iVar11 < local_bb4 + local_bac)) &&
               ((local_bb0 <= coordinate && (coordinate < local_bb0 + iStack_ba8)))) {
              if ((((iVar11 < local_b94) || (local_b94 + local_b8c <= iVar11)) ||
                  (coordinate < local_b90)) || (local_b90 + local_b88 <= coordinate)) {
                if (((iVar11 < local_b84) || (local_b84 + local_b7c <= iVar11)) ||
                   ((coordinate < local_b80 || (local_b80 + local_b78 <= coordinate)))) {
                  local_c24 = CONCAT31(PF_PART3(local_c24, 1),local_b74 <= iVar11);
                  if ((coordinate < local_b70 + iStack_b68 &&
                      (local_b70 <= coordinate && local_b74 <= iVar11)) &&
                      iVar11 < local_b74 + local_b6c) {
                    local_5e4 = '\x01';
                    iStack_5dc = coordinate;
                    local_5e0 = coordinate - local_b70;
                  }
                  else {
                    local_c28 = 0xb;
                    local_c34 = 0;
                    local_c30 = uStack_59c - 0xb;
                    if (uStack_59c < 0xb) {
                      local_c30 = 0;
                    }
                    local_c2c = local_5ec;
                    uVar5 = thunk_terror_ui_scrollbar_value_from_point(local_bb8,&local_c34,coordinate,iStack_b68 / 2);
                    uVar7 = uStack_59c - 0xb;
                    if (uStack_59c < 0xb) {
                      uVar7 = 0;
                    }
                    uVar6 = 0;
                    if (0 < (int)uVar5) {
                      uVar6 = uVar5;
                    }
                    iVar11 = -((int)uVar5 >> 0x1f);
                    if ((SBORROW4(0,(int)uVar5 >> 0x1f) != SBORROW4(iVar11,(uint)(uVar7 < uVar5)))
                        != (int)(iVar11 - (uint)(uVar7 < uVar5)) < 0) {
                      uVar6 = uVar7;
                    }
                    if (local_5ec != uVar6) {
                      local_5ec = uVar6;
                    }
                  }
                }
                else {
                  uVar5 = uStack_59c - 0xb;
                  if (uStack_59c < 0xb) {
                    uVar5 = 0;
                  }
                  if (local_5ec < uVar5) {
                    uVar5 = local_5ec + 1;
                  }
                  if (local_5ec != uVar5) {
                    local_5ec = uVar5;
                  }
                }
              }
              else {
                iVar11 = (local_5ec != 0) - 1;
                uVar5 = uStack_59c - 0xb;
                if (uStack_59c < 0xb) {
                  uVar5 = 0;
                }
                uVar7 = local_5ec - 1;
                if (iVar11 < 0) {
                  uVar7 = 0;
                }
                uVar6 = (uint)(uVar5 < local_5ec - 1);
                if ((SBORROW4(0,iVar11) != SBORROW4(-iVar11,uVar6)) != (int)(-iVar11 - uVar6) < 0) {
                  uVar7 = uVar5;
                }
                if (local_5ec != uVar7) {
                  local_5ec = uVar7;
                }
              }
            }
            else {
              uVar5 = iVar11 - 0x5c;
              if (coordinate - 0x1eU < 0xffffffee || uVar5 < 0xffffffb4) {
                if (coordinate - 0x34U < 0xffffffee || uVar5 < 0xffffffb4) {
                  if (coordinate - 0x4aU < 0xffffffee || uVar5 < 0xffffffb4) {
                    if (((coordinate - 0x7cU < 0xc6) && (0xf < iVar11)) &&
                       (iVar11 < (int)(DAT_10009094 - 0x10))) {
                      uVar5 = (byte)((char)coordinate + 0x84) / 0x12 + local_5ec;
                      if (uVar5 < uStack_59c) {
                        uStack_7bc = *(uint *)(iStack_600 + uVar5 * 0x1b8);
                        goto LAB_10001232;
                      }
                    }
                    else {
                      if (((local_7cc & 0xfffffffe) == 2) &&
                         (coordinate - 0x188U < 0x16 && iVar11 - 0x46U < 0xfa)) {
                        recovered_10006c00((int)local_b10);
                        goto LAB_10000fc6;
                      }
                      uVar7 = coordinate - 0x164;
                      uVar5 = 0;
                      if (((iVar11 - 0xc6U < 0x74 && uVar7 < 0x18) ||
                          (uVar5 = 1, iVar11 - 0x13aU < 0x88 && uVar7 < 0x18)) ||
                         ((uVar5 = 2, iVar11 - 0x1c2U < 0x74 && uVar7 < 0x18 ||
                          ((uVar5 = 3, iVar11 - 0x24aU < 0x74 && uVar7 < 0x18 ||
                           (uVar5 = 4, iVar11 - 0x2beU < 0x74 && uVar7 < 0x18)))))) {
                        local_7cc = uVar5;
                        goto LAB_10001232;
                      }
                    }
                    goto LAB_10001239;
                  }
                  recovered_10006900((int)local_b10);
                }
                else {
                  recovered_100066f0((int)local_b10);
                }
              }
              else {
                if (uStack_7bc + 1 < 2) goto LAB_10001239;
                iVar11 = Ram00280800;
                if (((iVar11 == 0x50414d57) && (iVar11 = Ram00280804, iVar11 != 0)) &&
                   ((uVar5 = Ram00280808, 0xb < uVar5 &&
                    ((uVar5 = Ram00280808, 0x10f < uVar5 &&
                     (pcVar1 = (code *)UINT_0028090c, pcVar1 != (code *)0x0)))))) {
                  (*pcVar1)(uStack_7bc);
                }
                uStack_7bc = 0xffffffff;
                uStack_43c = 0;
LAB_10000fc6:
                recovered_100015c0((int)local_b10);
              }
            }
LAB_10001232:
            recovered_100028b0(local_b10);
          }
        }
LAB_10001239:
        thunk_memset(auStack_be4,0,0x18);
        iVar11 = Ram00280800;
        bVar12 = true;
        if (iVar11 == 0x50414d57) {
          iVar11 = Ram00280804;
          if (iVar11 != 0) {
            uVar5 = Ram00280808;
            if (uVar5 < 0xc) goto LAB_100012c0;
            uVar5 = Ram00280808;
            if ((0x16b < uVar5) && (pcVar1 = (code *)UINT_00280968, pcVar1 != (code *)0x0)) {
              uVar5 = (*pcVar1)(auStack_be4);
              bVar12 = uVar5 == 0;
            }
          }
          if (local_5a0 != '\x01') goto LAB_10000930;
LAB_100012ee:
          if ((!bVar12) && (0x11 < (uint)(iStack_bd4 - local_7c8))) goto LAB_10000930;
        }
        else {
LAB_100012c0:
          if (local_5a0 == '\x01') goto LAB_100012ee;
LAB_10000930:
          recovered_100015c0((int)local_b10);
          recovered_100028b0(local_b10);
        }
        thunk_terror_ui_yield_frames(4);
      }
      thunk_terror_ui_window_close(local_b10);
      uVar10 = 0;
      goto LAB_10001375;
    }
    thunk_terror_ui_window_close(local_b10);
  }
  iVar11 = Ram00280800;
  uVar10 = 1;
  if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00280804, iVar11 != 0)) &&
      (uVar5 = Ram00280808, 0xb < uVar5)) &&
     ((uVar5 = Ram00280808, 0x2b < uVar5 && (pcVar1 = (code *)UINT_00280828, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(str_10008ca8);
  }
LAB_10001375:
  recovered_10001390((int)local_b10);
  return uVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009094
#undef DAT_10009098
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280828
#undef UINT_0028090c
#undef UINT_00280968
#undef str_10008ca8
#undef str_10008cd2
#undef str_10008ce3
#undef local_b90
#undef iStack_bfc
#undef local_b8c
#undef iStack_bec
#undef local_b88
#undef auStack_be4
#undef local_b84
#undef iStack_bd4
#undef local_b80
#undef auStack_bcc
#undef local_b7c
#undef local_b78
#undef local_b74
#undef local_b70
#undef local_b6c
#undef iStack_ba8
#undef local_b10
#undef local_b0c
#undef local_7d0
#undef local_7cc
#undef local_7c8
#undef local_7c4
#undef local_7c0
#undef iStack_b68
#undef local_5ec
#undef local_5e8
#undef local_5e4
#undef local_5e0
#undef uStack_b08
#undef iStack_ae4
#undef local_5a0
#undef local_28c
#undef uStack_7bc
#undef local_25c
#undef uStack_7b4
#undef iStack_600
#undef local_258
#undef local_254
#undef iStack_5dc
#undef uStack_59c
#undef uStack_43c
#undef uStack_27c
#undef iStack_250
#undef local_c34
#undef local_c30
#undef local_c2c
#undef local_c28
#undef local_c24
#undef local_c20
#undef local_c1c
#undef local_c18
#undef local_c14
#undef local_c10
#undef local_c04
#undef local_c00
#undef local_bbc
#undef local_bb8
#undef local_bb4
#undef local_bb0
#undef local_bac
#undef uStack_c0c
#undef local_b94

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
 * Address: 0x10001390
 */

void recovered_10001390(int reg_ecx)

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
    (*pcVar3)(*(void **)(reg_ecx + 0x500));
  }
  iVar1 = Ram00280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
     ((uVar2 = Ram00280808, 0xb < uVar2 &&
      ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)
       ))))) {
    (*pcVar3)(*(void **)(reg_ecx + 0x504));
  }
  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(*(void **)(reg_ecx + 0x510));
  }
  iVar1 = Ram00280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
     ((uVar2 = Ram00280808, 0xb < uVar2 &&
      ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)
       ))))) {
    (*pcVar3)(*(void **)(reg_ecx + 0x514));
  }
  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(*(void **)(reg_ecx + 0x518));
  }
  iVar1 = Ram00280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
     ((uVar2 = Ram00280808, 0xb < uVar2 &&
      ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0)
       ))))) {
    (*pcVar3)(*(void **)(reg_ecx + 0x51c));
  }
  *(undefined4 *)(reg_ecx + 0x500) = 0;
  *(undefined4 *)(reg_ecx + 0x504) = 0;
  *(undefined4 *)(reg_ecx + 0x510) = 0;
  *(undefined4 *)(reg_ecx + 0x514) = 0;
  *(undefined4 *)(reg_ecx + 0x518) = 0;
  *(undefined4 *)(reg_ecx + 0x51c) = 0;
  *(undefined4 *)(reg_ecx + 0x520) = 0;
  *(undefined4 *)(reg_ecx + 0x50c) = 0;
  *(undefined4 *)(reg_ecx + 0x508) = 0;
  *(undefined4 *)(reg_ecx + 0x524) = 0;
  *(undefined4 *)(reg_ecx + 0x578) = 0;
  *(undefined4 *)(reg_ecx + 0x574) = 0;
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
#undef UINT_002808b8
#define UINT_002808b8 (*(uint *)(0x2808b8U))
#undef UINT_00280904
#define UINT_00280904 (*(uint *)(0x280904U))
#undef UINT_00280908
#define UINT_00280908 (*(uint *)(0x280908U))
#undef UINT_00280910
#define UINT_00280910 (*(uint *)(0x280910U))
#define local_2e0 (*(void * *)(pf_stack_frame + 16))
#define local_2dc (*(void * *)(pf_stack_frame + 20))
#define local_2d8 (*(int * *)(pf_stack_frame + 24))
#define local_2d4 (*(int *)(pf_stack_frame + 28))
#define local_2d0 (*(uint *)(pf_stack_frame + 32))
#define local_2cc (*(int *)(pf_stack_frame + 36))
#define local_2c8 (*(uint *)(pf_stack_frame + 40))
#define local_2bc (*(uint *)(pf_stack_frame + 52))
#define local_2b8 (*(int *)(pf_stack_frame + 56))
#define local_2b4 (*(int *)(pf_stack_frame + 60))
#define local_2b0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_2ac (*(uint *)(pf_stack_frame + 68))
#define local_2a8 (*(uint *)(pf_stack_frame + 72))
#define local_2a4 (*(int *)(pf_stack_frame + 76))
#define local_2a0 (*(uint *)(pf_stack_frame + 80))
#define local_29c (*(uint *)(pf_stack_frame + 84))
#define local_298 (*(int *)(pf_stack_frame + 88))
#define local_294 (*(byte *)(pf_stack_frame + 92))
#define local_26c (*(uint *)(pf_stack_frame + 132))
#define local_268 (*(uint *)(pf_stack_frame + 136))
#define local_264 (*(uint *)(pf_stack_frame + 140))
#define local_260 (*(uint *)(pf_stack_frame + 144))
#define local_25c (*(uint *)(pf_stack_frame + 148))
#define local_258 (*(uint *)(pf_stack_frame + 152))
#define local_254 (*(uint *)(pf_stack_frame + 156))
#define local_250 (*(uint *)(pf_stack_frame + 160))
#define local_20c (*(int (*)[131])(pf_stack_frame + 228))
#define local_1c8 (*(undefined1 (*)[456])(pf_stack_frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c0
 */

void recovered_100015c0(int reg_ecx)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  int *piVar12;
  void *src;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  ushort *puVar17;
  uint uVar18;
  int *piVar19;
  int *dst;
  int iVar20;
  undefined2 uVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  ulonglong uVar25;
  ulonglong uVar26;

  bVar24 = 0;
  local_2a0 = 0;
  local_2ac = 0;
  if (reg_ecx != 0) {
    bVar23 = *(int *)(reg_ecx + 0x354) == -1;
    thunk_memset(local_20c,0,0x44);
    thunk_memset(&local_298,0,0x8c);
    iVar14 = Ram00280800;
    if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
        (uVar8 = Ram00280808, 0xb < uVar8)) &&
       (((uVar8 = Ram00280808, 0x10b < uVar8 &&
         (pcVar5 = (code *)UINT_00280908, pcVar5 != (code *)0x0)) &&
        (uVar8 = (*pcVar5)(local_20c), uVar8 != 0)))) {
      if ((*(byte *)(reg_ecx + 0x570) != 1) ||
         (uVar8 = local_20c[0] - *(int *)(reg_ecx + 0x3a4), uVar8 == 0)) {
        uVar8 = (uint)*(byte *)(reg_ecx + 0x570);
      }
      iVar14 = Ram00280800;
      if (((((iVar14 != 0x50414d57) || (iVar14 = Ram00280804, iVar14 == 0)) ||
           (uVar9 = Ram00280808, uVar9 < 0xc)) ||
          ((uVar9 = Ram00280808, uVar9 < 0xbc ||
           (pcVar5 = (code *)UINT_002808b8, pcVar5 == (code *)0x0)))) ||
         (uVar9 = (*pcVar5)(), uVar9 == 0)) {
        uVar9 = 1;
      }
      *(uint *)(reg_ecx + 0x57c) = uVar9;
      *(undefined4 *)(reg_ecx + 0x580) = 0;
      *(undefined4 *)(reg_ecx + 0x584) = 0;
      recovered_10006ce0(reg_ecx);
      if (((*(int *)(reg_ecx + 0x35c) < 0) || (iVar14 = Ram00280800, iVar14 != 0x50414d57)) ||
         (((iVar14 = Ram00280804, iVar14 == 0 ||
           (((uVar9 = Ram00280808, uVar9 < 0xc || (uVar9 = Ram00280808, uVar9 < 0x114)) ||
            (pcVar5 = (code *)UINT_00280910, pcVar5 == (code *)0x0)))) ||
          (uVar9 = (*pcVar5)(*(int *)(reg_ecx + 0x35c),&local_298), uVar9 == 0)))) {
        thunk_memset((void *)(reg_ecx + 1000),0,0x8c);
      }
      else {
        thunk_memcpy((void *)(reg_ecx + 1000),&local_298,0x8c);
      }
      iVar14 = Ram00280800;
      if (((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
           ((uVar9 = Ram00280808, 0xb < uVar9 &&
            ((uVar9 = Ram00280808, 0x107 < uVar9 &&
             (pcVar5 = (code *)UINT_00280904, pcVar5 != (code *)0x0)))))) &&
          (uVar9 = (*pcVar5)((void *)0x0,0,&local_2a0), uVar9 != 0)) && (-1 < (int)local_2a0)) {
        uVar9 = *(uint *)(reg_ecx + 0x520);
        if (uVar9 < local_2a0) {
          uVar11 = 0x10;
          if (uVar9 != 0) {
            uVar11 = uVar9;
          }
          do {
            uVar9 = uVar11;
            uVar11 = uVar9 * 2;
          } while (uVar9 < local_2a0);
          if (0x94f209 < uVar9) {
            return;
          }
          iVar14 = Ram00280800;
          local_2dc = (void *)0x0;
          pvVar10 = (void *)0x0;
          if ((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) {
            uVar11 = Ram00280808;
            pvVar10 = (void *)0x0;
            if (0xb < uVar11) {
              uVar11 = Ram00280808;
              pvVar10 = (void *)0x0;
              if ((0x4f < uVar11) && (pcVar5 = (code *)UINT_0028084c, pcVar5 != (code *)0x0)) {
                pvVar10 = (*pcVar5)(uVar9 * 0x1b8);
              }
            }
          }
          iVar14 = Ram00280800;
          if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
              (uVar11 = Ram00280808, 0xb < uVar11)) &&
             ((uVar11 = Ram00280808, 0x4f < uVar11 &&
              (pcVar5 = (code *)UINT_0028084c, pcVar5 != (code *)0x0)))) {
            local_2dc = (*pcVar5)(uVar9 << 4);
          }
          iVar14 = Ram00280800;
          local_2d8 = (int *)0x0;
          local_2e0 = (void *)0x0;
          if (iVar14 == 0x50414d57) {
            iVar14 = Ram00280804;
            local_2e0 = (void *)0x0;
            if (iVar14 != 0) {
              uVar11 = Ram00280808;
              local_2e0 = (void *)0x0;
              if (0xb < uVar11) {
                uVar11 = Ram00280808;
                local_2e0 = (void *)0x0;
                if (0x4f < uVar11) {
                  pcVar5 = (code *)UINT_0028084c;
                  local_2e0 = (void *)0x0;
                  if (pcVar5 != (code *)0x0) {
                    local_2e0 = (*pcVar5)(uVar9 * 0x1c);
                  }
                }
              }
            }
          }
          iVar14 = Ram00280800;
          if (((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
             ((uVar11 = Ram00280808, 0xb < uVar11 &&
              ((uVar11 = Ram00280808, 0x4f < uVar11 &&
               (pcVar5 = (code *)UINT_0028084c, pcVar5 != (code *)0x0)))))) {
            local_2d8 = (*pcVar5)(uVar9 * 0x1b4);
          }
          if ((((pvVar10 == (void *)0x0) || (local_2dc == (void *)0x0)) ||
              (local_2e0 == (void *)0x0)) || (local_2d8 == (int *)0x0)) {
            iVar14 = Ram00280800;
            if (((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
               ((uVar8 = Ram00280808, 0xb < uVar8 &&
                ((uVar8 = Ram00280808, 0x53 < uVar8 &&
                 (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))) {
              (*pcVar5)(pvVar10);
            }
            iVar14 = Ram00280800;
            if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
                (uVar8 = Ram00280808, 0xb < uVar8)) &&
               ((uVar8 = Ram00280808, 0x53 < uVar8 &&
                (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))) {
              (*pcVar5)(local_2dc);
            }
            iVar14 = Ram00280800;
            if (((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
               ((uVar8 = Ram00280808, 0xb < uVar8 &&
                ((uVar8 = Ram00280808, 0x53 < uVar8 &&
                 (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))) {
              (*pcVar5)(local_2e0);
            }
            iVar14 = Ram00280800;
            if (iVar14 != 0x50414d57) {
              return;
            }
            iVar14 = Ram00280804;
            if (iVar14 == 0) {
              return;
            }
            uVar8 = Ram00280808;
            if (uVar8 < 0xc) {
              return;
            }
            uVar8 = Ram00280808;
            if (uVar8 < 0x54) {
              return;
            }
            pcVar5 = (code *)UINT_00280850;
            if (pcVar5 == (code *)0x0) {
              return;
            }
            (*pcVar5)(local_2d8);
            return;
          }
          thunk_memset(pvVar10,0,uVar9 * 0x1b8);
          thunk_memset(local_2dc,0,uVar9 << 4);
          thunk_memset(local_2e0,0,uVar9 * 0x1c);
          if (*(int *)(reg_ecx + 0x520) != 0) {
            thunk_memcpy(pvVar10,*(void **)(reg_ecx + 0x510),*(int *)(reg_ecx + 0x520) * 0x1b8
                              );
            thunk_memcpy(local_2dc,*(void **)(reg_ecx + 0x514),*(int *)(reg_ecx + 0x520) << 4)
            ;
            thunk_memcpy(local_2e0,*(void **)(reg_ecx + 0x518),
                               *(int *)(reg_ecx + 0x520) * 0x1c);
          }
          iVar14 = Ram00280800;
          if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
              (uVar11 = Ram00280808, 0xb < uVar11)) &&
             ((uVar11 = Ram00280808, 0x53 < uVar11 &&
              (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))) {
            (*pcVar5)(*(void **)(reg_ecx + 0x510));
          }
          iVar14 = Ram00280800;
          if (((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
             ((uVar11 = Ram00280808, 0xb < uVar11 &&
              ((uVar11 = Ram00280808, 0x53 < uVar11 &&
               (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))) {
            (*pcVar5)(*(void **)(reg_ecx + 0x514));
          }
          iVar14 = Ram00280800;
          if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
              (uVar11 = Ram00280808, 0xb < uVar11)) &&
             ((uVar11 = Ram00280808, 0x53 < uVar11 &&
              (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))) {
            (*pcVar5)(*(void **)(reg_ecx + 0x518));
          }
          iVar14 = Ram00280800;
          if (((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
             ((uVar11 = Ram00280808, 0xb < uVar11 &&
              ((uVar11 = Ram00280808, 0x53 < uVar11 &&
               (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))) {
            (*pcVar5)(*(void **)(reg_ecx + 0x51c));
          }
          *(void **)(reg_ecx + 0x510) = pvVar10;
          *(void **)(reg_ecx + 0x514) = local_2dc;
          *(void **)(reg_ecx + 0x518) = local_2e0;
          *(int **)(reg_ecx + 0x51c) = local_2d8;
          *(uint *)(reg_ecx + 0x520) = uVar9;
        }
        else {
          local_2d8 = *(int **)(reg_ecx + 0x51c);
        }
        iVar14 = Ram00280800;
        if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00280804, iVar14 != 0)) &&
            (uVar11 = Ram00280808, 0xb < uVar11)) &&
           ((uVar11 = Ram00280808, 0x107 < uVar11 &&
            (pcVar5 = (code *)UINT_00280904, pcVar5 != (code *)0x0)))) {
          uVar11 = (*pcVar5)(local_2d8,uVar9,&local_2ac);
          uVar9 = local_2ac;
          if ((uVar11 != 0) && (local_2dc = *(void **)(reg_ecx + 0x520), local_2ac <= local_2dc)) {
            if (local_2dc != (void *)0x0) {
              uVar11 = 0;
              do {
                iVar14 = *(int *)(reg_ecx + 0x518);
                iVar20 = uVar11 * 0x1c;
                if (*(char *)(iVar14 + 0x18 + iVar20) != '\0') {
                  if (uVar9 != 0) {
                    piVar12 = local_2d8;
                    uVar13 = uVar9;
                    do {
                      if (*piVar12 == *(int *)(iVar14 + iVar20)) goto LAB_10001d77;
                      piVar12 = piVar12 + 0x6d;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  thunk_memset((void *)(iVar14 + iVar20),0,0x1c);
                  local_2dc = *(void **)(reg_ecx + 0x520);
                }
LAB_10001d77:
                uVar11 = uVar11 + 1;
              } while (uVar11 < local_2dc);
            }
            if (local_2ac == 0) {
              local_2b0 = 0;
              local_2b4 = 0;
              local_2bc = 0;
              local_2b8 = 0;
              uVar9 = 0;
            }
            else {
              local_29c = uVar8 + (uVar8 == 0);
              local_2bc = 0;
              local_2b8 = 0;
              local_2a8 = 0;
              local_2a4 = 0;
              local_2d0 = 0;
              do {
                local_2dc = (void *)0x0;
                if (*(char *)(reg_ecx + 0x570) == '\x01') {
                  uVar9 = *(uint *)(reg_ecx + 0x520);
                  local_2dc = (void *)0x0;
                  if (uVar9 != 0) {
                    pcVar15 = *(char **)(reg_ecx + 0x514);
                    bVar22 = true;
                    uVar11 = 1;
                    do {
                      if ((*pcVar15 == '\x01') &&
                         (*(int *)(pcVar15 + 4) == local_2d8[local_2d0 * 0x6d])) {
                        local_2dc = (void *)0x0;
                        if (bVar22) {
                          local_2dc = (void *)(local_2d8[local_2d0 * 0x6d + 5] -
                                              *(int *)(pcVar15 + 0xc));
                        }
                        goto LAB_10001e9f;
                      }
                      bVar22 = uVar11 < uVar9;
                      iVar14 = (1 - uVar9) + uVar11;
                      uVar11 = uVar11 + 1;
                      pcVar15 = pcVar15 + 0x10;
                    } while (iVar14 != 1);
                    local_2dc = (void *)0x0;
                  }
                }
LAB_10001e9f:
                piVar12 = local_2d8 + local_2d0 * 0x6d;
                thunk_memcpy((void *)(*(int *)(reg_ecx + 0x510) + local_2d0 * 0x1b8),piVar12,
                                   0x1b4);
                iVar14 = local_2d8[local_2d0 * 0x6d];
                iVar20 = *(int *)(reg_ecx + 0x520);
                if (iVar20 == 0) {
LAB_10001f23:
                  dst = *(int **)(reg_ecx + 0x518);
                }
                else {
                  piVar19 = (int *)0x0;
                  dst = *(int **)(reg_ecx + 0x518);
                  do {
                    piVar16 = dst;
                    if (((char)dst[6] != '\0') && (piVar16 = (int *)0x0, *dst == iVar14)) {
                      local_2c8 = iVar14;
                      goto LAB_10001f46;
                    }
                    if (piVar19 == (int *)0x0) {
                      piVar19 = piVar16;
                    }
                    dst = dst + 7;
                    iVar20 = iVar20 + -1;
                  } while (iVar20 != 0);
                  dst = piVar19;
                  if (piVar19 == (int *)0x0) goto LAB_10001f23;
                }
                thunk_memset(dst,0,0x1c);
                *dst = iVar14;
                local_2c8 = *piVar12;
LAB_10001f46:
                uVar9 = *(uint *)(reg_ecx + 0x57c);
                uVar25 = thunk___udivdi3(ZEXT48(local_2dc) * 1000,
                                            (ulonglong)(uVar9 + (uVar9 == 0)) * (ulonglong)local_29c
                                           );
                uVar9 = (uint)uVar25;
                if (999 < uVar9) {
                  uVar9 = 1000;
                }
                uVar21 = (undefined2)uVar9;
                if ((int)(uVar25 >> 0x20) != 0) {
                  uVar21 = 1000;
                }
                if (iVar14 != local_2c8) {
                  thunk_memset(dst,0,0x1c);
                  *dst = local_2c8;
                }
                bVar6 = *(byte *)((int)dst + 0x19);
                *(undefined2 *)((int)dst + (uint)bVar6 * 2 + 4) = uVar21;
                *(byte *)((int)dst + 0x19) = bVar6 + 1 + ((byte)((bVar6 + 1) / 5) & 0xfe) * -5;
                bVar6 = *(byte *)(dst + 6);
                if (bVar6 < 10) {
                  bVar6 = bVar6 + 1;
                  *(byte *)(dst + 6) = bVar6;
                }
                puVar17 = (ushort *)(dst + 1);
                uVar11 = 0;
                uVar9 = (uint)bVar6;
                do {
                  uVar11 = uVar11 + *puVar17;
                  puVar17 = puVar17 + 1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                *(uint *)(*(int *)(reg_ecx + 0x510) + 0x1b4 + local_2d0 * 0x1b8) = uVar11 / bVar6;
                uVar9 = piVar12[1];
                uVar13 = uVar9 >> 0x10 & 0xff;
                uVar11 = uVar9 >> 2 & 1;
                if (uVar13 != 0) {
                  uVar11 = uVar13;
                }
                *(int *)(reg_ecx + 0x580) = *(int *)(reg_ecx + 0x580) + uVar11;
                iVar14 = piVar12[2] - uVar11;
                if ((uint)piVar12[2] < uVar11) {
                  iVar14 = 0;
                }
                *(int *)(reg_ecx + 0x584) = *(int *)(reg_ecx + 0x584) + iVar14;
                uVar11 = -(uVar9 & 1) & (uint)local_2dc;
                bVar22 = CARRY4(local_2a8,uVar11);
                local_2a8 = local_2a8 + uVar11;
                local_2a4 = local_2a4 + (uint)bVar22;
                if ((uVar9 & 1) != 0) {
                  local_2dc = (void *)0x0;
                }
                bVar22 = CARRY4(local_2bc,(uint)local_2dc);
                local_2bc = local_2bc + (int)local_2dc;
                local_2b8 = local_2b8 + (uint)bVar22;
                bVar23 = (bool)(bVar23 | *piVar12 == *(int *)(reg_ecx + 0x354));
                local_2d0 = local_2d0 + 1;
              } while (local_2d0 < local_2ac);
              uVar25 = (ulonglong)local_2bc;
              local_2bc = (uint)(uVar25 * 1000);
              local_2b8 = local_2b8 * 1000 + (int)(uVar25 * 1000 >> 0x20);
              local_2b0 = (undefined4)((ulonglong)local_2a8 * 1000);
              local_2b4 = local_2a4 * 1000 + (int)((ulonglong)local_2a8 * 1000 >> 0x20);
              uVar9 = local_2ac;
            }
            *(uint *)(reg_ecx + 0x574) = uVar9;
            uVar11 = uVar9 - 0xb;
            if (uVar9 < 0xb) {
              uVar11 = 0;
            }
            if (uVar11 < *(uint *)(reg_ecx + 0x524)) {
              *(uint *)(reg_ecx + 0x524) = uVar11;
            }
            pvVar10 = *(void **)(reg_ecx + 0x510);
            if (1 < uVar9 && pvVar10 != (void *)0x0) {
              local_2c8 = uVar9 >> 1;
              do {
                if (local_2c8 == 0) {
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) break;
                  src = (void *)(uVar9 * 0x1b8 + (int)pvVar10);
                  thunk_memcpy(local_1c8,src,0x1b4);
                  local_2e0 = *(void **)((int)pvVar10 + uVar9 * 0x1b8 + 0x1b4);
                  thunk_memcpy(src,pvVar10,0x1b8);
                  local_2c8 = 0;
                }
                else {
                  local_2c8 = local_2c8 - 1;
                  thunk_memcpy(local_1c8,(void *)(local_2c8 * 0x1b8 + (int)pvVar10),0x1b4);
                  local_2e0 = *(void **)((int)pvVar10 + local_2c8 * 0x1b8 + 0x1b4);
                }
                uVar11 = local_2c8;
                if (local_2c8 < uVar9 >> 1) {
                  uVar13 = local_2c8;
                  do {
                    uVar11 = uVar13 * 2 + 1;
                    uVar18 = uVar13 * 2 + 2;
                    if (uVar18 < uVar9) {
                      if (*(uint *)((int)pvVar10 + uVar11 * 0x1b8 + 0x1b4) <=
                          *(uint *)((int)pvVar10 + uVar18 * 0x1b8 + 0x1b4)) {
                        uVar18 = uVar11;
                      }
                      uVar11 = uVar18;
                    }
                    if (local_2e0 <= *(uint *)((int)pvVar10 + uVar11 * 0x1b8 + 0x1b4)) {
                      uVar11 = uVar13;
                      break;
                    }
                    thunk_memcpy((void *)(uVar13 * 0x1b8 + (int)pvVar10),
                                       (void *)(uVar11 * 0x1b8 + (int)pvVar10),0x1b8);
                    uVar13 = uVar11;
                  } while (uVar11 < uVar9 >> 1);
                }
                thunk_memcpy((void *)(uVar11 * 0x1b8 + (int)pvVar10),local_1c8,0x1b4);
                *(void **)((int)pvVar10 + uVar11 * 0x1b8 + 0x1b4) = local_2e0;
              } while( true );
            }
            if (!bVar23) {
              *(undefined4 *)(reg_ecx + 0x354) = 0xffffffff;
              *(undefined1 *)(reg_ecx + 0x6d4) = 0;
            }
            iVar14 = *(int *)(reg_ecx + 0x538);
            uVar11 = uVar8 + (uVar8 == 0);
            uVar25 = thunk___udivdi3(CONCAT44(local_2b8,local_2bc),
                                        (ulonglong)
                                        (*(int *)(reg_ecx + 0x57c) +
                                        (uint)(*(int *)(reg_ecx + 0x57c) == 0)) * (ulonglong)uVar11)
            ;
            uVar9 = (uint)uVar25;
            if (999 < uVar9) {
              uVar9 = 1000;
            }
            uVar21 = (undefined2)uVar9;
            if ((int)(uVar25 >> 0x20) != 0) {
              uVar21 = 1000;
            }
            if (iVar14 != 1) {
              thunk_memset((undefined4 *)(reg_ecx + 0x538),0,0x1c);
              *(undefined4 *)(reg_ecx + 0x538) = 1;
            }
            bVar6 = *(byte *)(reg_ecx + 0x551);
            *(undefined2 *)(reg_ecx + 0x53c + (uint)bVar6 * 2) = uVar21;
            *(byte *)(reg_ecx + 0x551) = bVar6 + 1 + ((byte)((bVar6 + 1) / 5) & 0xfe) * -5;
            bVar6 = *(byte *)(reg_ecx + 0x550);
            if (bVar6 < 10) {
              bVar6 = bVar6 + 1;
              *(byte *)(reg_ecx + 0x550) = bVar6;
            }
            puVar17 = (ushort *)(reg_ecx + 0x53c);
            uVar13 = 0;
            uVar9 = (uint)bVar6;
            do {
              uVar13 = uVar13 + *puVar17;
              puVar17 = puVar17 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            *(uint *)(reg_ecx + 0x588) = uVar13 / bVar6;
            uVar25 = thunk___udivdi3(CONCAT44(local_2b4,local_2b0),
                                        (ulonglong)
                                        (*(int *)(reg_ecx + 0x57c) +
                                        (uint)(*(int *)(reg_ecx + 0x57c) == 0)) * (ulonglong)uVar11)
            ;
            uVar9 = (uint)uVar25;
            if (999 < uVar9) {
              uVar9 = 1000;
            }
            uVar21 = (undefined2)uVar9;
            if ((int)(uVar25 >> 0x20) != 0) {
              uVar21 = 1000;
            }
            if (*(int *)(reg_ecx + 0x554) != 0) {
              thunk_memset((undefined4 *)(reg_ecx + 0x554),0,0x1c);
              *(undefined4 *)(reg_ecx + 0x554) = 0;
            }
            bVar6 = *(byte *)(reg_ecx + 0x56d);
            *(undefined2 *)(reg_ecx + 0x558 + (uint)bVar6 * 2) = uVar21;
            *(byte *)(reg_ecx + 0x56d) = bVar6 + 1 + ((byte)((bVar6 + 1) / 5) & 0xfe) * -5;
            bVar6 = *(byte *)(reg_ecx + 0x56c);
            if (bVar6 < 10) {
              bVar6 = bVar6 + 1;
              *(byte *)(reg_ecx + 0x56c) = bVar6;
            }
            puVar17 = (ushort *)(reg_ecx + 0x558);
            uVar11 = 0;
            uVar9 = (uint)bVar6;
            do {
              uVar11 = uVar11 + *puVar17;
              puVar17 = puVar17 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            uVar11 = uVar11 / bVar6;
            uVar9 = 1000 - *(int *)(reg_ecx + 0x588);
            if (uVar11 < uVar9) {
              uVar9 = uVar11;
            }
            *(uint *)(reg_ecx + 0x58c) = uVar9;
            *(uint *)(reg_ecx + 0x590) = 1000 - (uVar9 + *(int *)(reg_ecx + 0x588));
            thunk_memmove((void *)(reg_ecx + 0x5b4),(void *)(reg_ecx + 0x5b5),0x47);
            thunk_memmove((void *)(reg_ecx + 0x5fc),(void *)(reg_ecx + 0x5fd),0x47);
            *(char *)(reg_ecx + 0x5fb) = (char)(*(uint *)(reg_ecx + 0x588) / 10);
            *(char *)(reg_ecx + 0x643) = (char)(*(uint *)(reg_ecx + 0x58c) / 10);
            if (((*(char *)(reg_ecx + 0x571) == '\x01') && (uVar8 != 0)) &&
               (local_298 == *(int *)(reg_ecx + 0x474))) {
              uVar13 = local_26c - *(uint *)(reg_ecx + 0x4a0);
              uVar9 = (uint)(local_26c < *(uint *)(reg_ecx + 0x4a0));
              uVar11 = local_268 - *(uint *)(reg_ecx + 0x4a4);
              iVar14 = uVar11 - uVar9;
              if (local_268 < *(uint *)(reg_ecx + 0x4a4) || uVar11 < uVar9) {
                iVar14 = 0;
                uVar13 = 0;
              }
              uVar25 = thunk___udivdi3(CONCAT44((int)((ulonglong)uVar13 * 0x12 >> 0x20) +
                                                   iVar14 * 0x12,(int)((ulonglong)uVar13 * 0x12)),
                                          (ulonglong)uVar8);
              *(uint *)(reg_ecx + 0x594) = -(uint)((int)(uVar25 >> 0x20) != 0) | (uint)uVar25;
              uVar13 = local_264 - *(uint *)(reg_ecx + 0x4a8);
              uVar9 = (uint)(local_264 < *(uint *)(reg_ecx + 0x4a8));
              uVar11 = local_260 - *(uint *)(reg_ecx + 0x4ac);
              iVar14 = uVar11 - uVar9;
              if (local_260 < *(uint *)(reg_ecx + 0x4ac) || uVar11 < uVar9) {
                iVar14 = 0;
                uVar13 = 0;
              }
              uVar25 = thunk___udivdi3(CONCAT44((int)((ulonglong)uVar13 * 0x12 >> 0x20) +
                                                   iVar14 * 0x12,(int)((ulonglong)uVar13 * 0x12)),
                                          (ulonglong)uVar8);
              *(uint *)(reg_ecx + 0x598) = -(uint)((int)(uVar25 >> 0x20) != 0) | (uint)uVar25;
              uVar13 = local_25c - *(uint *)(reg_ecx + 0x4b0);
              uVar9 = (uint)(local_25c < *(uint *)(reg_ecx + 0x4b0));
              uVar11 = local_258 - *(uint *)(reg_ecx + 0x4b4);
              iVar14 = uVar11 - uVar9;
              if (local_258 < *(uint *)(reg_ecx + 0x4b4) || uVar11 < uVar9) {
                iVar14 = 0;
                uVar13 = 0;
              }
              uVar25 = thunk___udivdi3(CONCAT44((int)((ulonglong)uVar13 * 0x12 >> 0x20) +
                                                   iVar14 * 0x12,(int)((ulonglong)uVar13 * 0x12)),
                                          (ulonglong)uVar8);
              uVar18 = (uint)(uVar25 >> 0x20);
              *(ulonglong *)(reg_ecx + 0x59c) = uVar25;
              uVar13 = local_254 - *(uint *)(reg_ecx + 0x4b8);
              uVar9 = (uint)(local_254 < *(uint *)(reg_ecx + 0x4b8));
              uVar11 = local_250 - *(uint *)(reg_ecx + 0x4bc);
              iVar14 = uVar11 - uVar9;
              if (local_250 < *(uint *)(reg_ecx + 0x4bc) || uVar11 < uVar9) {
                iVar14 = 0;
                uVar13 = 0;
              }
              uVar26 = thunk___udivdi3(CONCAT44((int)((ulonglong)uVar13 * 0x12 >> 0x20) +
                                                   iVar14 * 0x12,(int)((ulonglong)uVar13 * 0x12)),
                                          (ulonglong)uVar8);
              uVar11 = (uint)(uVar26 >> 0x20);
              *(ulonglong *)(reg_ecx + 0x5a4) = uVar26;
              uVar8 = *(uint *)(reg_ecx + 0x5ac);
              uVar9 = *(uint *)(reg_ecx + 0x5b0);
              if ((uVar9 < uVar18 || uVar9 - uVar18 < (uint)(uVar8 < (uint)uVar25)) ||
                 (uVar25 = *(ulonglong *)(reg_ecx + 0x5ac),
                 uVar9 < uVar11 || uVar9 - uVar11 < (uint)(uVar8 < (uint)uVar26))) {
                uVar8 = (uint)(uVar25 >> 0x20);
                if (uVar8 < uVar11 || uVar8 - uVar11 < (uint)((uint)uVar25 < (uint)uVar26)) {
                  uVar25 = uVar26;
                }
                *(ulonglong *)(reg_ecx + 0x5ac) = uVar25;
              }
            }
            else {
              *(undefined4 *)(reg_ecx + 0x594) = 0;
              *(undefined4 *)(reg_ecx + 0x598) = 0;
              *(undefined4 *)(reg_ecx + 0x5a0) = 0;
              *(undefined4 *)(reg_ecx + 0x59c) = 0;
              *(undefined4 *)(reg_ecx + 0x5a8) = 0;
              *(undefined4 *)(reg_ecx + 0x5a4) = 0;
            }
            thunk_memmove((void *)(reg_ecx + 0x644),(void *)(reg_ecx + 0x645),0x47);
            thunk_memmove((void *)(reg_ecx + 0x68c),(void *)(reg_ecx + 0x68d),0x47);
            iVar14 = *(int *)(reg_ecx + 0x5b0);
            puVar1 = (ulonglong *)(reg_ecx + 0x5ac);
            iVar20 = *(int *)puVar1;
            uVar25 = *puVar1;
            if (iVar20 == 0 && iVar14 == 0 ||
                *(uint *)(reg_ecx + 0x59c) == 0 && *(int *)(reg_ecx + 0x5a0) == 0) {
              uVar7 = 0;
            }
            else {
              lVar4 = (ulonglong)*(uint *)(reg_ecx + 0x59c) * 100;
              uVar26 = thunk___udivdi3(CONCAT44(*(int *)(reg_ecx + 0x5a0) * 100 +
                                                   (int)((ulonglong)lVar4 >> 0x20),(int)lVar4),
                                          *puVar1);
              uVar8 = (uint)uVar26;
              if (99 < uVar8) {
                uVar8 = 100;
              }
              uVar7 = (undefined1)uVar8;
              if ((int)(uVar26 >> 0x20) != 0) {
                uVar7 = 100;
              }
            }
            *(undefined1 *)(reg_ecx + 0x68b) = uVar7;
            if (*(uint *)(reg_ecx + 0x5a4) == 0 && *(int *)(reg_ecx + 0x5a8) == 0 ||
                iVar20 == 0 && iVar14 == 0) {
              uVar7 = 0;
            }
            else {
              lVar4 = (ulonglong)*(uint *)(reg_ecx + 0x5a4) * 100;
              uVar25 = thunk___udivdi3(CONCAT44(*(int *)(reg_ecx + 0x5a8) * 100 +
                                                   (int)((ulonglong)lVar4 >> 0x20),(int)lVar4),
                                          uVar25);
              uVar8 = (uint)uVar25;
              if (99 < uVar8) {
                uVar8 = 100;
              }
              uVar7 = (undefined1)uVar8;
              if ((int)(uVar25 >> 0x20) != 0) {
                uVar7 = 100;
              }
            }
            *(undefined1 *)(reg_ecx + 0x6d3) = uVar7;
            piVar12 = local_20c;
            piVar19 = (int *)(reg_ecx + 0x3a4);
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *piVar19 = *piVar12;
              piVar12 = piVar12 + (uint)bVar24 * -2 + 1;
              piVar19 = piVar19 + (uint)bVar24 * -2 + 1;
            }
            piVar12 = local_20c;
            piVar19 = (int *)(reg_ecx + 0x360);
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *piVar19 = *piVar12;
              piVar12 = piVar12 + (uint)bVar24 * -2 + 1;
              piVar19 = piVar19 + (uint)bVar24 * -2 + 1;
            }
            *(int *)(reg_ecx + 0x348) = local_20c[0];
            thunk_memcpy((void *)(reg_ecx + 0x474),&local_298,0x8c);
            *(undefined1 *)(reg_ecx + 0x570) = 1;
            *(byte *)(reg_ecx + 0x571) = local_294 & 1;
            if (*(int *)(reg_ecx + 0x520) != 0) {
              thunk_memset(*(void **)(reg_ecx + 0x514),0,*(int *)(reg_ecx + 0x520) << 4);
              local_2cc = *(int *)(reg_ecx + 0x574);
              if (local_2cc != 0) {
                local_2d4 = *(int *)(reg_ecx + 0x520);
                iVar14 = 0xc;
                iVar20 = 0x14;
                do {
                  bVar23 = local_2d4 == 0;
                  local_2d4 = local_2d4 + -1;
                  if (bVar23) {
                    return;
                  }
                  iVar2 = *(int *)(reg_ecx + 0x514);
                  *(undefined1 *)(iVar2 + -0xc + iVar14) = 1;
                  iVar3 = *(int *)(reg_ecx + 0x510);
                  *(undefined4 *)(iVar2 + -8 + iVar14) = *(undefined4 *)(iVar3 + -0x14 + iVar20);
                  *(undefined4 *)(iVar2 + -4 + iVar14) = *(undefined4 *)(iVar3 + -4 + iVar20);
                  *(undefined4 *)(iVar2 + iVar14) = *(undefined4 *)(iVar3 + iVar20);
                  iVar14 = iVar14 + 0x10;
                  iVar20 = iVar20 + 0x1b8;
                  local_2cc = local_2cc + -1;
                } while (local_2cc != 0);
              }
            }
          }
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
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808b8
#undef UINT_00280904
#undef UINT_00280908
#undef UINT_00280910
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2cc
#undef local_2c8
#undef local_2bc
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_2a8
#undef local_2a4
#undef local_2a0
#undef local_29c
#undef local_298
#undef local_294
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_20c
#undef local_1c8

#undef DAT_10008d93
#define DAT_10008d93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x259U)))
#undef DAT_10008d9c
#define DAT_10008d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x262U)))
#undef DAT_10008d9e
#define DAT_10008d9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_10008da1
#define DAT_10008da1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef DAT_10008da4
#define DAT_10008da4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef DAT_10008f90
#define DAT_10008f90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x456U)))
#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef PTR_DAT_1000907c
#define PTR_DAT_1000907c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x542U)))
#undef PTR_str_10008d30_1000905c
#define PTR_str_10008d30_1000905c (*(char * *)(((uintptr_t)pf_module_state + 0x522U)))
#undef str_10008cd2
#define str_10008cd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_10008d96
#define str_10008d96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25cU)))
#undef str_10008da7
#define str_10008da7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_10008db6
#define str_10008db6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10008e07
#define str_10008e07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10008e1a
#define str_10008e1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e0U)))
#undef str_10008e2e
#define str_10008e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#undef str_10008e5b
#define str_10008e5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x321U)))
#undef str_10008e6a
#define str_10008e6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_10008e7b
#define str_10008e7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x341U)))
#undef str_10008e89
#define str_10008e89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_10008e98
#define str_10008e98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#undef str_10008ea6
#define str_10008ea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_10008eb7
#define str_10008eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_10008ec9
#define str_10008ec9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10008ede
#define str_10008ede (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a4U)))
#undef str_10008eff
#define str_10008eff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#define local_1ac (*(undefined * *)(pf_stack_frame + 36))
#define local_1a0 (*(undefined * *)(pf_stack_frame + 48))
#define local_19c (*(undefined * *)(pf_stack_frame + 52))
#define local_198 (*(int *)(pf_stack_frame + 56))
#define local_194 (*(int *)(pf_stack_frame + 60))
#define local_18c (*(int *)(pf_stack_frame + 68))
#define local_184 (*(uint *)(pf_stack_frame + 76))
#define local_180 (*(undefined2 *)(pf_stack_frame + 80))
#define local_178 (*(int *)(pf_stack_frame + 88))
#define local_170 (*(uint *)(pf_stack_frame + 96))
#define local_158 (*(char *)(pf_stack_frame + 120))
#define local_154 (*(undefined4 *)(pf_stack_frame + 124))
#define local_150 (*(int *)(pf_stack_frame + 128))
#define local_14c (*(undefined4 *)(pf_stack_frame + 132))
#define local_148 (*(undefined4 *)(pf_stack_frame + 136))
#define local_114 (*(undefined4 *)(pf_stack_frame + 188))
#define local_110 (*(undefined2 *)(pf_stack_frame + 192))
#define local_10e (*(undefined1 *)(pf_stack_frame + 194))
#define local_d0 (*(undefined2 *)(pf_stack_frame + 256))
#define local_ce (*(undefined1 *)(pf_stack_frame + 258))
#define local_c0 (*(char *)(pf_stack_frame + 272))
#define local_bc (*(undefined1 (*)[188])(pf_stack_frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

/* WARNING: Removing unreachable block (ram,0x100059a2) */
/* WARNING: Removing unreachable block (ram,0x10005997) */
/* WARNING: Removing unreachable block (ram,0x100058cf) */
/* WARNING: Removing unreachable block (ram,0x100058c4) */
/* WARNING: Removing unreachable block (ram,0x10005809) */
/* WARNING: Removing unreachable block (ram,0x10005803) */
/* WARNING: Removing unreachable block (ram,0x10005636) */
/* WARNING: Removing unreachable block (ram,0x1000562b) */
/* WARNING: Removing unreachable block (ram,0x100054d4) */
/* WARNING: Removing unreachable block (ram,0x100054c9) */
/* WARNING: Removing unreachable block (ram,0x10005364) */
/* WARNING: Removing unreachable block (ram,0x10005359) */
/* WARNING: Removing unreachable block (ram,0x10005219) */
/* WARNING: Removing unreachable block (ram,0x1000520e) */
/* WARNING: Removing unreachable block (ram,0x100050d0) */
/* WARNING: Removing unreachable block (ram,0x100050ca) */
/* WARNING: Removing unreachable block (ram,0x1000612f) */
/* WARNING: Removing unreachable block (ram,0x10006124) */
/* WARNING: Removing unreachable block (ram,0x10005fb4) */
/* WARNING: Removing unreachable block (ram,0x10005fa9) */
/* WARNING: Removing unreachable block (ram,0x10005e39) */
/* WARNING: Removing unreachable block (ram,0x10005e33) */
/* WARNING: Removing unreachable block (ram,0x100039ad) */
/* WARNING: Removing unreachable block (ram,0x10005e36) */
/* WARNING: Removing unreachable block (ram,0x10005e3c) */
/* WARNING: Removing unreachable block (ram,0x10005fb1) */
/* WARNING: Removing unreachable block (ram,0x10005fb7) */
/* WARNING: Removing unreachable block (ram,0x1000612c) */
/* WARNING: Removing unreachable block (ram,0x10006132) */
/* WARNING: Removing unreachable block (ram,0x100050cd) */
/* WARNING: Removing unreachable block (ram,0x100050d3) */
/* WARNING: Removing unreachable block (ram,0x10005216) */
/* WARNING: Removing unreachable block (ram,0x1000521c) */
/* WARNING: Removing unreachable block (ram,0x10005361) */
/* WARNING: Removing unreachable block (ram,0x10005367) */
/* WARNING: Removing unreachable block (ram,0x100054d1) */
/* WARNING: Removing unreachable block (ram,0x100054d7) */
/* WARNING: Removing unreachable block (ram,0x10005633) */
/* WARNING: Removing unreachable block (ram,0x10005639) */
/* WARNING: Removing unreachable block (ram,0x10005806) */
/* WARNING: Removing unreachable block (ram,0x1000580c) */
/* WARNING: Removing unreachable block (ram,0x100058cc) */
/* WARNING: Removing unreachable block (ram,0x100058d2) */
/* WARNING: Removing unreachable block (ram,0x1000599f) */
/* WARNING: Removing unreachable block (ram,0x100059a5) */
/* WARNING: Removing unreachable block (ram,0x100039b5) */
/* WARNING: Removing unreachable block (ram,0x100039b8) */
/* WARNING: Removing unreachable block (ram,0x100039bb) */
/* WARNING: Removing unreachable block (ram,0x1000348c) */
/* WARNING: Removing unreachable block (ram,0x10003494) */
/* WARNING: Removing unreachable block (ram,0x10003497) */
/* WARNING: Removing unreachable block (ram,0x1000349a) */

void recovered_100028b0(void *reg_ecx)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  ulonglong *puVar1;
  void *pixels;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong arg3;
  undefined5 uVar4;
  ulonglong arg3_00;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  sbyte sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  bool bVar33;
  ulonglong uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  char cVar42;
  undefined1 uVar43;

  uVar14 = DAT_10009098;
  uVar26 = DAT_10009094;
  uVar38 = 0x10;
  uVar7 = thunk_terror_ui_colour(0);
  uVar31 = DAT_10009098;
  uVar9 = DAT_10009094;
  uVar28 = (int)DAT_10009098 >> 0x1f & DAT_10009098;
  uVar8 = DAT_10009094;
  if ((int)uVar26 < (int)DAT_10009094) {
    uVar8 = uVar26;
  }
  if ((int)uVar26 < 0) {
    uVar8 = 0;
  }
  uVar26 = DAT_10009098;
  if ((int)uVar14 < (int)DAT_10009098) {
    uVar26 = uVar14;
  }
  if ((int)uVar14 < 0) {
    uVar26 = 0;
  }
  if ((int)uVar28 < (int)uVar26) {
    uVar14 = (int)DAT_10009094 >> 0x1f & DAT_10009094;
    local_1a0 = (undefined *)(DAT_10009094 * (uintptr_t)uVar28 * 4);
    iVar32 = DAT_10009094 * 4;
    do {
      uVar25 = uVar14;
      if ((int)uVar14 < (int)uVar8) {
        do {
          if ((((reg_ecx != (void *)0x0) && ((int)uVar28 < (int)uVar31)) &&
              (-1 < (int)(uVar25 | uVar28))) &&
             ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar25 < (int)uVar9)))) {
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + uVar25 * 4) =
                 (char)(uVar7 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 1 + uVar25 * 4) =
                 (char)(uVar7 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 2 + uVar25 * 4) =
                 (char)uVar7;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 3 + uVar25 * 4) = 0xff
            ;
          }
          uVar25 = uVar25 + 1;
        } while (uVar8 != uVar25);
      }
      uVar28 = uVar28 + 1;
      local_1a0 = (undefined *)((int)local_1a0 + iVar32);
    } while (uVar28 != uVar26);
  }
  local_178 = 0;
  if (((reg_ecx != (void *)0x0) && (iVar32 = *(int *)((int)reg_ecx + 0x354), iVar32 != -1)) &&
     (iVar15 = *(int *)((int)reg_ecx + 0x574), iVar15 != 0)) {
    piVar20 = *(int **)((int)reg_ecx + 0x510);
    do {
      if (*piVar20 == iVar32) {
        local_114 = CONCAT31((int3)((uint)iVar32 >> 8),iVar32 != 0);
        local_158 = '\x01';
        goto LAB_10002a54;
      }
      piVar20 = piVar20 + 0x6e;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  local_158 = '\0';
  local_114 = 0;
LAB_10002a54:
  uVar8 = thunk_terror_ui_colour(0x15);
  uVar7 = thunk_terror_ui_colour(0x2d);
  uVar14 = DAT_10009098;
  uVar26 = DAT_10009094;
  uVar31 = 0;
  if ((int)DAT_10009094 < 0) {
    uVar31 = DAT_10009094;
  }
  uVar28 = 0;
  if (0 < (int)DAT_10009094) {
    uVar28 = DAT_10009094;
  }
  iVar32 = DAT_10009094 * 4;
  uVar25 = 0;
  do {
    uVar21 = uVar25 + 1;
    uVar22 = uVar14;
    if ((int)uVar21 < (int)uVar14) {
      uVar22 = uVar21;
    }
    if ((int)uVar25 < (int)uVar14) {
      iVar16 = 0x58 - uVar25;
      iVar29 = uVar25 * (uVar7 >> 0x10 & 0xff);
      iVar30 = uVar25 * (uVar7 >> 8 & 0xff);
      iVar27 = uVar25 * (uVar7 & 0xff);
      iVar15 = local_178;
      do {
        uVar17 = uVar31;
        if ((int)uVar31 < (int)uVar28) {
          do {
            if ((((reg_ecx != (void *)0x0) && ((int)uVar25 < (int)uVar14)) && (-1 < (int)uVar17)) &&
               ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar17 < (int)uVar26)))) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + uVar17 * 4) =
                   (char)((iVar29 + iVar16 * (uVar8 >> 0x10 & 0xff) & 0xffff) / 0x58);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 1 + uVar17 * 4) =
                   (char)((iVar30 + iVar16 * (uVar8 >> 8 & 0xff) & 0xffff) / 0x58);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 2 + uVar17 * 4) =
                   (char)((iVar27 + iVar16 * (uVar8 & 0xff) & 0xffff) / 0x58);
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 3 + uVar17 * 4) = 0xff;
            }
            uVar17 = uVar17 + 1;
          } while (uVar28 != uVar17);
        }
        uVar25 = uVar25 + 1;
        iVar15 = iVar15 + iVar32;
      } while (uVar25 != uVar22);
    }
    local_178 = local_178 + iVar32;
    uVar25 = uVar21;
  } while (uVar21 != 0x58);
  uVar8 = thunk_terror_ui_colour(3);
  uVar14 = DAT_10009094;
  uVar7 = (int)DAT_10009094 >> 0x1f & DAT_10009094;
  uVar31 = DAT_10009094;
  if ((int)uVar26 < (int)DAT_10009094) {
    uVar31 = uVar26;
  }
  if ((int)uVar26 < 0) {
    uVar31 = 0;
  }
  if ((int)uVar7 < (int)uVar31 && 0x57 < (int)DAT_10009098) {
    iVar32 = DAT_10009094 * 0x15c;
    do {
      if ((reg_ecx != (void *)0x0) &&
         (((int)uVar7 < (int)uVar14 && -1 < (int)uVar7) && *(int *)((int)reg_ecx + 0x340) != 0)) {
        *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar32 + uVar7 * 4) = (char)(uVar8 >> 0x10);
        *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar32 + 1 + uVar7 * 4) = (char)(uVar8 >> 8);
        *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar32 + 2 + uVar7 * 4) = (char)uVar8;
        *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + iVar32 + 3 + uVar7 * 4) = 0xff;
      }
      uVar7 = uVar7 + 1;
    } while (uVar31 != uVar7);
  }
  local_184 = 0x10;
  recovered_10007160((int)reg_ecx,0x10,0xc,0x4c,0x12,((uintptr_t)pf_module_state + 0x1e3U),(char)local_114);
  recovered_10007160((int)reg_ecx,0x10,0x22,0x4c,0x12,((uintptr_t)pf_module_state + 0x1e8U),local_158);
  recovered_10007160((int)reg_ecx,0x10,0x38,0x4c,0x12,((uintptr_t)pf_module_state + 0x1eeU),local_158);
  uVar8 = thunk_terror_ui_colour(0x1f);
  uVar14 = DAT_10009098;
  uVar26 = DAT_10009094;
  uVar31 = 0x68;
  if ((int)DAT_10009094 < 0x68) {
    uVar31 = DAT_10009094;
  }
  uVar7 = uVar9 - 0x10;
  if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
    uVar7 = DAT_10009094;
  }
  if ((int)uVar9 < 0x10) {
    uVar7 = 0;
  }
  uVar28 = 0x4a;
  if ((int)DAT_10009098 < 0x4a) {
    uVar28 = DAT_10009098;
  }
  if (0xc < (int)DAT_10009098) {
    local_19c = (undefined *)(DAT_10009094 * 0x30);
    iVar32 = DAT_10009094 * 4;
    uVar25 = 0xc;
    do {
      uVar21 = uVar31;
      if ((int)uVar31 < (int)uVar7) {
        do {
          if ((((reg_ecx != (void *)0x0) && ((int)uVar25 < (int)uVar14)) && (-1 < (int)uVar21)) &&
             ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar21 < (int)uVar26)))) {
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar21 * 4) =
                 (char)(uVar8 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar21 * 4) =
                 (char)(uVar8 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar21 * 4) =
                 (char)uVar8;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar21 * 4) = 0xff
            ;
          }
          uVar21 = uVar21 + 1;
        } while (uVar7 != uVar21);
      }
      uVar25 = uVar25 + 1;
      local_19c = (undefined *)((int)local_19c + iVar32);
    } while (uVar25 != uVar28);
  }
  uVar26 = thunk_terror_ui_colour(3);
  uVar12 = (undefined1)(uVar26 >> 0x10);
  uVar6 = (undefined1)(uVar26 >> 8);
  local_d0 = CONCAT11(uVar6,uVar12);
  local_ce = (undefined1)uVar26;
  uVar40 = 0;
  recovered_10007500((int)reg_ecx,0x68,0xc,uVar9 - 0x78,0x3e,
                     CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
  uVar26 = thunk_terror_ui_colour(1);
  local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
  local_ce = (undefined1)uVar26;
  uVar38 = (undefined1)(uVar9 - 0x88 >> 0x18);
  recovered_10007940((int)reg_ecx,0x70,0x27,(int)reg_ecx + 0x6d4,
                     CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),uVar9 - 0x88);
  uVar26 = DAT_10009094;
  iVar32 = DAT_10009094 - 0x20;
  uVar31 = thunk_terror_ui_colour(0x1f);
  uVar14 = DAT_10009098;
  uVar9 = DAT_10009094;
  if ((int)DAT_10009094 < 0x10) {
    local_184 = DAT_10009094;
  }
  uVar8 = uVar26 - 0x10;
  if ((int)DAT_10009094 <= (int)(uVar26 - 0x10)) {
    uVar8 = DAT_10009094;
  }
  if ((int)uVar26 < 0x10) {
    uVar8 = 0;
  }
  uVar7 = 0x156;
  if ((int)DAT_10009098 < 0x156) {
    uVar7 = DAT_10009098;
  }
  if (0x6a < (int)DAT_10009098) {
    iVar16 = DAT_10009094 * 0x1a8;
    iVar15 = DAT_10009094 * 4;
    uVar28 = 0x6a;
    do {
      uVar25 = local_184;
      if ((int)local_184 < (int)uVar8) {
        do {
          if (((reg_ecx != (void *)0x0) && ((int)uVar28 < (int)uVar14)) &&
             ((-1 < (int)uVar25 &&
              ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar25 < (int)uVar9)))))) {
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar16 + uVar25 * 4) = (char)(uVar31 >> 0x10)
            ;
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar16 + 1 + uVar25 * 4) =
                 (char)(uVar31 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar16 + 2 + uVar25 * 4) = (char)uVar31;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + iVar16 + 3 + uVar25 * 4) = 0xff;
          }
          uVar25 = uVar25 + 1;
        } while (uVar8 != uVar25);
      }
      uVar28 = uVar28 + 1;
      iVar16 = iVar16 + iVar15;
    } while (uVar28 != uVar7);
  }
  uVar9 = thunk_terror_ui_colour(3);
  uVar12 = (undefined1)(uVar9 >> 0x10);
  uVar6 = (undefined1)(uVar9 >> 8);
  local_d0 = CONCAT11(uVar6,uVar12);
  local_ce = (undefined1)uVar9;
  uVar40 = 0;
  recovered_10007500((int)reg_ecx,0x10,0x6a,iVar32,0xec,
                     CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
  uVar8 = thunk_terror_ui_colour(0x2a);
  uVar14 = DAT_10009098;
  uVar9 = DAT_10009094;
  uVar31 = 0x11;
  if ((int)DAT_10009094 < 0x11) {
    uVar31 = DAT_10009094;
  }
  uVar7 = uVar26 - 0x11;
  uVar28 = DAT_10009094;
  if ((int)uVar7 < (int)DAT_10009094) {
    uVar28 = uVar7;
  }
  if ((int)uVar26 < 0x11) {
    uVar28 = 0;
  }
  uVar25 = 0x7d;
  if ((int)DAT_10009098 < 0x7d) {
    uVar25 = DAT_10009098;
  }
  if (0x6b < (int)DAT_10009098) {
    local_19c = (undefined *)(DAT_10009094 * 0x1ac);
    iVar32 = DAT_10009094 * 4;
    uVar21 = 0x6b;
    do {
      uVar22 = uVar31;
      if ((int)uVar31 < (int)uVar28) {
        do {
          if ((((reg_ecx != (void *)0x0) && ((int)uVar21 < (int)uVar14)) && (-1 < (int)uVar22)) &&
             ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar22 < (int)uVar9)))) {
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar22 * 4) =
                 (char)(uVar8 >> 0x10);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar22 * 4) =
                 (char)(uVar8 >> 8);
            *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar22 * 4) =
                 (char)uVar8;
            *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar22 * 4) = 0xff
            ;
          }
          uVar22 = uVar22 + 1;
        } while (uVar28 != uVar22);
      }
      uVar21 = uVar21 + 1;
      local_19c = (undefined *)((int)local_19c + iVar32);
    } while (uVar21 != uVar25);
  }
  iVar32 = 0;
  do {
    iVar15 = (&DAT_10008f90)[iVar32];
    puVar11 = (&PTR_str_10008d30_1000905c)[iVar32];
    if (iVar32 == 2) {
      uVar9 = thunk_terror_ui_colour(4);
      local_d0 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
      local_ce = (undefined1)uVar9;
      uVar38 = 0;
      recovered_10007940((int)reg_ecx,iVar15 + 0x13,0x70,(int)puVar11,
                         CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x78);
LAB_10003318:
      uVar9 = iVar15 + 0xe;
      uVar28 = thunk_terror_ui_colour(0x15);
      uVar31 = DAT_10009098;
      uVar14 = DAT_10009094;
      uVar8 = DAT_10009094;
      if ((int)uVar9 < (int)DAT_10009094) {
        uVar8 = uVar9;
      }
      uVar25 = iVar15 + 0xfU;
      if ((int)DAT_10009094 <= (int)(iVar15 + 0xfU)) {
        uVar25 = DAT_10009094;
      }
      uVar21 = 0x7d;
      if ((int)DAT_10009098 < 0x7d) {
        uVar21 = DAT_10009098;
      }
      if (0x6b < (int)DAT_10009098) {
        local_1a0 = (undefined *)(DAT_10009094 * 0x1ac);
        iVar15 = DAT_10009094 * 4;
        uVar22 = 0x6b;
        do {
          uVar17 = uVar8;
          if ((int)uVar9 < (int)uVar14) {
            do {
              if (((reg_ecx != (void *)0x0) && ((int)uVar22 < (int)uVar31)) &&
                 ((-1 < (int)uVar17 &&
                  ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar17 < (int)uVar14)))))) {
                *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + uVar17 * 4) =
                     (char)(uVar28 >> 0x10);
                *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 1 + uVar17 * 4) =
                     (char)(uVar28 >> 8);
                *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 2 + uVar17 * 4) =
                     (char)uVar28;
                *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 3 + uVar17 * 4) =
                     0xff;
              }
              uVar17 = uVar17 + 1;
            } while (uVar25 != uVar17);
          }
          uVar22 = uVar22 + 1;
          local_1a0 = (undefined *)((int)local_1a0 + iVar15);
        } while (uVar22 != uVar21);
      }
    }
    else {
      uVar9 = thunk_terror_ui_colour(1);
      local_d0 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
      local_ce = (undefined1)uVar9;
      uVar38 = 0;
      recovered_10007940((int)reg_ecx,iVar15 + 0x13,0x70,(int)puVar11,
                         CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x78);
      if (iVar32 != 0) goto LAB_10003318;
    }
    iVar32 = iVar32 + 1;
  } while (iVar32 != 8);
  local_178 = 0x1f0;
  uVar9 = 0;
  do {
    uVar14 = *(int *)((int)reg_ecx + 0x524) + uVar9;
    if ((uVar14 < *(uint *)((int)reg_ecx + 0x574)) &&
       (*(int *)(*(int *)((int)reg_ecx + 0x510) + uVar14 * 0x1b8) == *(int *)((int)reg_ecx + 0x354))
       ) {
      local_170 = 0xe;
      uVar31 = 0x2b;
    }
    else {
      uVar31 = 0x2c;
      if ((uVar9 & 1) == 0) {
        uVar31 = 0x1f;
      }
      local_170 = 1;
    }
    uVar8 = uVar9 * 0x12 + 0x7c;
    uVar21 = thunk_terror_ui_colour(uVar31);
    uVar28 = DAT_10009098;
    uVar31 = DAT_10009094;
    uVar25 = 0x11;
    if ((int)DAT_10009094 < 0x11) {
      uVar25 = DAT_10009094;
    }
    uVar22 = DAT_10009094;
    if ((int)uVar7 < (int)DAT_10009094) {
      uVar22 = uVar7;
    }
    if ((int)uVar26 < 0x11) {
      uVar22 = 0;
    }
    uVar17 = uVar9 * 0x12 + 0x8e;
    if ((int)DAT_10009098 <= (int)uVar17) {
      uVar17 = DAT_10009098;
    }
    if ((int)uVar8 < (int)DAT_10009098) {
      iVar15 = DAT_10009094 * local_178;
      iVar32 = DAT_10009094 * 4;
      do {
        uVar23 = uVar25;
        if ((int)uVar25 < (int)uVar22) {
          do {
            if ((((-1 < (int)uVar23) && (*(int *)((int)reg_ecx + 0x340) != 0)) &&
                ((int)uVar23 < (int)uVar31)) && ((int)uVar8 < (int)uVar28)) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + uVar23 * 4) =
                   (char)(uVar21 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 1 + uVar23 * 4) =
                   (char)(uVar21 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 2 + uVar23 * 4) = (char)uVar21;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + iVar15 + 3 + uVar23 * 4) = 0xff;
            }
            uVar23 = uVar23 + 1;
          } while (uVar22 != uVar23);
        }
        uVar8 = uVar8 + 1;
        iVar15 = iVar15 + iVar32;
      } while (uVar8 != uVar17);
    }
    if (uVar14 < *(uint *)((int)reg_ecx + 0x574)) {
      iVar32 = *(int *)((int)reg_ecx + 0x510);
      iVar15 = uVar14 * 0x1b8;
      uVar14 = thunk_terror_ui_colour(local_170);
      uVar5 = local_154;
      PF_PART2(local_154, 0) = CONCAT11((char)(uVar14 >> 8),(char)(uVar14 >> 0x10));
      PF_PART1(local_154, 3) = SUB41(uVar5,3);
      PF_PART3(local_154, 0) = CONCAT12((char)uVar14,(undefined2)local_154);
      uVar6 = 0x10;
      uVar38 = uVar6;
      thunk_snprintf((char *)&local_d0,0x40,&DAT_10008d93,*(uint *)(iVar32 + iVar15));
      iVar16 = uVar9 * 0x12 + 0x81;
      recovered_10007940((int)reg_ecx,0x25,iVar16,(int)&local_d0,CONCAT13(uVar38,(int3)local_154),
                         0x46);
      recovered_10007940((int)reg_ecx,0x6d,iVar16,iVar32 + 0x40 + iVar15,
                         CONCAT13(uVar38,(int3)local_154),0xb4);
      uVar14 = *(uint *)(iVar32 + 0x1b4 + iVar15);
      thunk_snprintf((char *)&local_d0,0x40,str_10008d96,uVar14 / 10,uVar14 % 10);
      recovered_10007940((int)reg_ecx,0x140,iVar16,(int)&local_d0,CONCAT13(uVar38,(int3)local_154),
                         0x2a);
      uVar14 = *(uint *)(iVar32 + 4 + iVar15);
      uVar31 = *(uint *)(iVar32 + 8 + iVar15);
      uVar8 = uVar14 >> 0x10 & 0xff;
      uVar14 = uVar14 >> 2 & 1;
      if (uVar8 != 0) {
        uVar14 = uVar8;
      }
      uVar8 = uVar31 - uVar14;
      if (uVar31 < uVar14) {
        uVar8 = 0;
      }
      uVar38 = uVar6;
      thunk_snprintf((char *)&local_d0,0x40,&DAT_10008d93,uVar14);
      recovered_10007940((int)reg_ecx,0x18e,iVar16,(int)&local_d0,CONCAT13(uVar38,(int3)local_154),
                         0x2e);
      thunk_snprintf((char *)&local_d0,0x40,&DAT_10008d93,uVar8);
      uVar40 = 0x2e;
      uVar41 = 0;
      uVar38 = 0;
      uVar43 = 0;
      uVar35 = (undefined2)local_154;
      uVar12 = PF_PART1(local_154, 2);
      recovered_10007940((int)reg_ecx,0x1e8,iVar16,(int)&local_d0,CONCAT13(uVar6,(int3)local_154),
                         0x2e);
      uVar14 = *(uint *)(iVar32 + 0x20 + iVar15);
      uVar31 = *(uint *)(iVar32 + 0x24 + iVar15);
      uVar8 = 0x3fffffff;
      if (uVar31 == 0 && (uint)(0x3fffffff < uVar14) <= -uVar31) {
        uVar8 = 0xfffff;
        if (uVar31 != 0 || -uVar31 < (uint)(0xfffff < uVar14)) {
          sVar13 = 0x14;
          local_19c = &DAT_10008da1;
          goto LAB_10003990;
        }
        if ((uVar14 < 0x400) <= uVar31) {
          uVar8 = 0x3ff;
          sVar13 = 10;
          local_19c = &DAT_10008da4;
          goto LAB_10003990;
        }
        puVar11 = &DAT_10008d9c;
        pcVar19 = str_10008db6;
      }
      else {
        sVar13 = 0x1e;
        local_19c = &DAT_10008d9e;
LAB_10003990:
        lVar2 = (ulonglong)(uVar8 & uVar14) * 100;
        uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar14 = uVar14 >> sVar13 | uVar31 << 0x20 - sVar13;
        uVar31 = uVar31 >> sVar13;
        puVar11 = (undefined *)((uint)lVar2 >> sVar13 | uVar8 << 0x20 - sVar13);
        uVar8 = uVar8 >> sVar13;
        pcVar19 = str_10008da7;
        uVar40 = SUB41(local_19c,0);
        uVar41 = (undefined1)((uint)local_19c >> 8);
        uVar38 = 0;
        uVar43 = (undefined1)((uint)local_19c >> 0x18);
        uVar35 = (undefined2)uVar8;
        uVar12 = (undefined1)(uVar8 >> 0x10);
        uVar6 = (undefined1)(uVar8 >> 0x18);
      }
      pf_activity_bytes_format((char *)&local_d0,0x40,pcVar19,CONCAT44(uVar31,uVar14),
                         CONCAT17(uVar6,CONCAT16(uVar12,CONCAT24(uVar35,puVar11))),
                         (void *)CONCAT13(uVar43,CONCAT12(uVar38,CONCAT11(uVar41,uVar40))));
      iVar32 = iVar32 + iVar15;
      uVar40 = 0x54;
      uVar41 = 0;
      uVar38 = 0;
      uVar43 = 0;
      uVar35 = (undefined2)local_154;
      uVar12 = PF_PART1(local_154, 2);
      recovered_10007940((int)reg_ecx,0x22a,iVar16,(int)&local_d0,CONCAT13(uVar6,(int3)local_154),
                         0x54);
      uVar14 = *(uint *)(iVar32 + 0x28);
      uVar31 = *(uint *)(iVar32 + 0x2c);
      uVar8 = 0x3fffffff;
      if (uVar31 == 0 && (uint)(0x3fffffff < uVar14) <= -uVar31) {
        uVar8 = 0xfffff;
        if (uVar31 != 0 || -uVar31 < (uint)(0xfffff < uVar14)) {
          sVar13 = 0x14;
          puVar11 = &DAT_10008da1;
          goto LAB_10003467;
        }
        if ((uVar14 < 0x400) <= uVar31) {
          uVar8 = 0x3ff;
          sVar13 = 10;
          puVar11 = &DAT_10008da4;
          goto LAB_10003467;
        }
        puVar10 = &DAT_10008d9c;
        pcVar19 = str_10008db6;
      }
      else {
        sVar13 = 0x1e;
        puVar11 = &DAT_10008d9e;
LAB_10003467:
        lVar2 = (ulonglong)(uVar8 & uVar14) * 100;
        uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar14 = uVar14 >> sVar13 | uVar31 << 0x20 - sVar13;
        uVar31 = uVar31 >> sVar13;
        puVar10 = (undefined *)((uint)lVar2 >> sVar13 | uVar8 << 0x20 - sVar13);
        uVar8 = uVar8 >> sVar13;
        pcVar19 = str_10008da7;
        uVar40 = SUB41(puVar11,0);
        uVar41 = (undefined1)((uint)puVar11 >> 8);
        uVar38 = 0;
        uVar43 = (undefined1)((uint)puVar11 >> 0x18);
        uVar35 = (undefined2)uVar8;
        uVar12 = (undefined1)(uVar8 >> 0x10);
        uVar6 = (undefined1)(uVar8 >> 0x18);
      }
      pf_activity_bytes_format((char *)&local_d0,0x40,pcVar19,CONCAT44(uVar31,uVar14),
                         CONCAT17(uVar6,CONCAT16(uVar12,CONCAT24(uVar35,puVar10))),
                         (void *)CONCAT13(uVar43,CONCAT12(uVar38,CONCAT11(uVar41,uVar40))));
      recovered_10007940((int)reg_ecx,0x28a,iVar16,(int)&local_d0,CONCAT13(uVar6,(int3)local_154),
                         0x60);
      uVar38 = 0;
      recovered_10007940((int)reg_ecx,0x2f7,iVar16,iVar32 + 0xa0,CONCAT13(uVar6,(int3)local_154),
                         0x60);
    }
    uVar9 = uVar9 + 1;
    local_178 = local_178 + 0x48;
  } while (uVar9 != 0xb);
  local_148 = 0xb;
  local_154 = 0;
  local_150 = *(uint *)((int)reg_ecx + 0x574) - 0xb;
  local_170 = 0;
  if (*(uint *)((int)reg_ecx + 0x574) < 0xb) {
    local_150 = 0;
  }
  local_14c = *(undefined4 *)((int)reg_ecx + 0x524);
  thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_10009094 - 0x20,0xc6,&local_154,(void *)0x0,&local_d0);
  if (local_c0 != '\0') {
    terror_ui_scrollbar_draw(reg_ecx,local_bc,0x20);
  }
  uVar26 = 0;
  do {
    iVar32 = 0x74;
    if (uVar26 == 1) {
      iVar32 = 0x88;
    }
    iVar15 = 0xda;
    if (2 < uVar26) {
      iVar15 = 0xee;
    }
    if (uVar26 < 2) {
      iVar15 = 0xc6;
    }
    uVar14 = uVar26 * 0x74 + iVar15;
    uVar9 = 2;
    if (uVar26 == *(uint *)((int)reg_ecx + 0x344)) {
      uVar9 = 0x2b;
    }
    uVar7 = thunk_terror_ui_colour(uVar9);
    uVar31 = DAT_10009098;
    uVar9 = DAT_10009094;
    uVar8 = DAT_10009094;
    if ((int)uVar14 < (int)DAT_10009094) {
      uVar8 = uVar14;
    }
    uVar28 = 0x17c;
    if ((int)DAT_10009098 < 0x17c) {
      uVar28 = DAT_10009098;
    }
    if (0x164 < (int)DAT_10009098) {
      local_198 = DAT_10009094 * 0x590;
      iVar16 = DAT_10009094 * 4;
      uVar25 = iVar15 + iVar32 + local_170;
      if ((int)DAT_10009094 < (int)uVar25) {
        uVar25 = DAT_10009094;
      }
      uVar21 = 0x164;
      do {
        uVar22 = uVar8;
        if ((int)uVar14 < (int)uVar9) {
          do {
            if ((((int)uVar21 < (int)uVar31) && (-1 < (int)uVar22)) &&
               ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar22 < (int)uVar9)))) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + local_198 + uVar22 * 4) =
                   (char)(uVar7 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + local_198 + 1 + uVar22 * 4) =
                   (char)(uVar7 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + local_198 + 2 + uVar22 * 4) = (char)uVar7;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + local_198 + 3 + uVar22 * 4) = 0xff;
            }
            uVar22 = uVar22 + 1;
          } while (uVar25 != uVar22);
        }
        uVar21 = uVar21 + 1;
        local_198 = local_198 + iVar16;
      } while (uVar21 != uVar28);
    }
    uVar9 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar9 >> 0x10);
    uVar6 = (undefined1)(uVar9 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar9;
    uVar40 = 0;
    recovered_10007500((int)reg_ecx,uVar14,0x164,iVar32,0x18,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    puVar11 = (&PTR_DAT_1000907c)[uVar26];
    uVar9 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    local_ce = (undefined1)uVar9;
    uVar38 = (undefined1)(iVar32 - 0x16U >> 0x18);
    recovered_10007940((int)reg_ecx,uVar14 + 0xf,0x16c,(int)puVar11,
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),iVar32 - 0x16U);
    uVar9 = DAT_10009094;
    uVar26 = uVar26 + 1;
    local_170 = local_170 + 0x74;
  } while (uVar26 != 5);
  iVar32 = DAT_10009094 - 0x20;
  switch((uintptr_t)(*(undefined4 *)((int)reg_ecx + 0x344))) {
  case 0:
    uVar8 = thunk_terror_ui_colour(0x2d);
    uVar14 = DAT_10009098;
    uVar26 = DAT_10009094;
    uVar31 = 0x10;
    if ((int)DAT_10009094 < 0x10) {
      uVar31 = DAT_10009094;
    }
    uVar7 = uVar9 - 0x10;
    if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
      uVar7 = DAT_10009094;
    }
    uVar28 = 0;
    if (0xf < (int)uVar9) {
      uVar28 = uVar7;
    }
    uVar9 = 0x1f8;
    if ((int)DAT_10009098 < 0x1f8) {
      uVar9 = DAT_10009098;
    }
    if (0x17a < (int)DAT_10009098) {
      local_19c = (undefined *)(DAT_10009094 * 0x5e8);
      iVar15 = DAT_10009094 * 4;
      uVar7 = 0x17a;
      do {
        uVar25 = uVar31;
        if ((int)uVar31 < (int)uVar28) {
          do {
            if ((((int)uVar7 < (int)uVar14) && (-1 < (int)uVar25)) &&
               ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar25 < (int)uVar26)))) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar25 * 4) =
                   (char)(uVar8 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar25 * 4) =
                   (char)(uVar8 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar25 * 4) =
                   (char)uVar8;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar25 * 4) =
                   0xff;
            }
            uVar25 = uVar25 + 1;
          } while (uVar28 != uVar25);
        }
        uVar7 = uVar7 + 1;
        local_19c = (undefined *)((int)local_19c + iVar15);
      } while (uVar7 != uVar9);
    }
    uVar26 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar26 >> 0x10);
    uVar6 = (undefined1)(uVar26 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar26;
    uVar40 = 0;
    recovered_10007500((int)reg_ecx,0x10,0x17a,iVar32,0x7e,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x56,0x19c,((uintptr_t)pf_module_state + 0x2b3U),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x46);
    thunk_snprintf((char *)&local_d0,0x40,str_10008d96,*(uint *)((int)reg_ecx + 0x588) / 10,
                       *(uint *)((int)reg_ecx + 0x588) % 10);
    uVar26 = thunk_terror_ui_colour(0x11);
    uVar5 = local_154;
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART1(local_154, 3) = SUB41(uVar5,3);
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0xab,0x19c,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x46);
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x56,0x1b4,((uintptr_t)pf_module_state + 0x2bbU),
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x50);
    thunk_snprintf((char *)&local_d0,0x40,str_10008d96,*(uint *)((int)reg_ecx + 0x58c) / 10,
                       *(uint *)((int)reg_ecx + 0x58c) % 10);
    uVar26 = thunk_terror_ui_colour(0x12);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0xab,0x1b4,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x46);
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x56,0x1cc,((uintptr_t)pf_module_state + 0x2c5U),
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x46);
    thunk_snprintf((char *)&local_d0,0x40,str_10008d96,*(uint *)((int)reg_ecx + 0x590) / 10,
                       *(uint *)((int)reg_ecx + 0x590) % 10);
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    uVar38 = (undefined1)((uint)&local_d0 >> 0x18);
    recovered_10007940((int)reg_ecx,0xab,0x1cc,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x46);
    uVar26 = thunk_terror_ui_colour(0x23);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007c30((int)reg_ecx,0xfe,0x196,
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)));
    uVar26 = thunk_terror_ui_colour(0x12);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007c30((int)reg_ecx,0xfe,0x1ae,
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)));
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e07,*(uint *)((int)reg_ecx + 0x580));
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x15a,0x19c,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)),0xaa);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e1a,*(uint *)((int)reg_ecx + 0x584));
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x15a,0x1b4,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)),0xaa);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e2e,*(uint *)((int)reg_ecx + 900));
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x15a,0x1cc,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)),0x78);
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x23e,0x18c,((uintptr_t)pf_module_state + 0x302U),
                       CONCAT13(uVar38,CONCAT12((char)uVar26,(undefined2)local_154)),0x50);
    iVar32 = (int)reg_ecx + 0x5b4;
    iVar15 = (int)reg_ecx + 0x5fc;
    uVar26 = 0x222;
    cVar42 = '\x01';
    uVar36 = (undefined2)iVar15;
    uVar12 = (undefined1)((uint)iVar15 >> 0x10);
    uVar40 = (undefined1)((uint)iVar15 >> 0x18);
    uVar35 = (undefined2)iVar32;
    uVar38 = (undefined1)((uint)iVar32 >> 0x10);
    uVar6 = (undefined1)((uint)iVar32 >> 0x18);
    uVar9 = 0x62;
    break;
  case 1:
    uVar26 = *(uint *)((int)reg_ecx + 0x364);
    uVar14 = *(uint *)((int)reg_ecx + 0x368);
    uVar34 = *(ulonglong *)((int)reg_ecx + 0x364);
    uVar31 = *(uint *)((int)reg_ecx + 0x36c);
    uVar28 = uVar31 - uVar26;
    uVar8 = *(uint *)((int)reg_ecx + 0x370);
    uVar4 = *(undefined5 *)((int)reg_ecx + 0x36c);
    uVar7 = (uVar8 - uVar14) - (uint)(uVar31 < uVar26);
    if (uVar8 < uVar14 || uVar8 - uVar14 < (uint)(uVar31 < uVar26)) {
      uVar7 = 0;
      uVar28 = 0;
    }
    uVar17 = thunk_terror_ui_colour(0x2d);
    uVar21 = DAT_10009098;
    uVar25 = DAT_10009094;
    uVar22 = 0x10;
    if ((int)DAT_10009094 < 0x10) {
      uVar22 = DAT_10009094;
    }
    uVar23 = uVar9 - 0x10;
    if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
      uVar23 = DAT_10009094;
    }
    if ((int)uVar9 < 0x10) {
      uVar23 = 0;
    }
    uVar9 = 0x1f8;
    if ((int)DAT_10009098 < 0x1f8) {
      uVar9 = DAT_10009098;
    }
    if (0x17a < (int)DAT_10009098) {
      local_19c = (undefined *)(DAT_10009094 * 0x5e8);
      iVar15 = DAT_10009094 * 4;
      uVar24 = 0x17a;
      do {
        uVar18 = uVar22;
        if ((int)uVar22 < (int)uVar23) {
          do {
            if (((((int)uVar24 < (int)uVar21) && (-1 < (int)uVar18)) &&
                (*(int *)((int)reg_ecx + 0x340) != 0)) && ((int)uVar18 < (int)uVar25)) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar18 * 4) =
                   (char)(uVar17 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar18 * 4) =
                   (char)(uVar17 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar18 * 4) =
                   (char)uVar17;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar18 * 4) =
                   0xff;
            }
            uVar18 = uVar18 + 1;
          } while (uVar23 != uVar18);
        }
        uVar24 = uVar24 + 1;
        local_19c = (undefined *)((int)local_19c + iVar15);
      } while (uVar24 != uVar9);
    }
    uVar9 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar9 >> 0x10);
    uVar6 = (undefined1)(uVar9 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar9;
    uVar40 = 0;
    recovered_10007500((int)reg_ecx,0x10,0x17a,iVar32,0x7e,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    uVar9 = 0x3fffffff;
    if (uVar14 == 0 && (uint)(0x3fffffff < uVar26) <= -uVar14) {
      uVar9 = 0xfffff;
      if (uVar14 != 0 || -uVar14 < (uint)(0xfffff < uVar26)) {
        sVar13 = 0x14;
        puVar11 = &DAT_10008da1;
        goto LAB_10005e06;
      }
      if ((uVar26 < 0x400) <= uVar14) {
        uVar9 = 0x3ff;
        sVar13 = 10;
        puVar11 = &DAT_10008da4;
        goto LAB_10005e06;
      }
      thunk_snprintf((char *)&local_d0,0x40,str_10008db6,uVar34,&DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      puVar11 = &DAT_10008d9e;
LAB_10005e06:
      lVar2 = (ulonglong)(uVar9 & uVar26) * 100;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar25 = uVar9 >> sVar13;
      uVar40 = (undefined1)(uVar25 >> 0x18);
      thunk_snprintf((char *)&local_d0,0x40,str_10008da7,
                         CONCAT44(uVar14 >> sVar13,uVar26 >> sVar13 | uVar14 << 0x20 - sVar13),
                         CONCAT17(uVar40,CONCAT16((char)(uVar25 >> 0x10),
                                                  CONCAT24((short)uVar25,
                                                           (uint)lVar2 >> sVar13 |
                                                           uVar9 << 0x20 - sVar13))),puVar11);
    }
    uVar26 = thunk_terror_ui_colour(1);
    uVar5 = local_154;
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART1(local_154, 3) = SUB41(uVar5,3);
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x5c,0x19c,((uintptr_t)pf_module_state + 0x30cU),
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x3c);
    uVar26 = thunk_terror_ui_colour(0x11);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    uVar6 = (undefined1)uVar26;
    PF_PART3(local_154, 0) = CONCAT12(uVar6,(undefined2)local_154);
    uVar12 = 0x6e;
    uVar41 = 0;
    uVar38 = 0;
    uVar43 = 0;
    uVar35 = (undefined2)local_154;
    recovered_10007940((int)reg_ecx,0x94,0x19c,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12(uVar6,(undefined2)local_154)),0x6e);
    uVar26 = 0x3fffffff;
    if (uVar7 == 0 && (uint)(0x3fffffff < uVar28) <= -uVar7) {
      uVar26 = 0xfffff;
      if (uVar7 != 0 || -uVar7 < (uint)(0xfffff < uVar28)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_10005f8c;
      }
      if ((uVar28 < 0x400) <= uVar7) {
        uVar26 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_10005f8c;
      }
      puVar11 = &DAT_10008d9c;
      pcVar19 = str_10008db6;
      uVar26 = uVar28;
      uVar9 = uVar7;
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_10005f8c:
      lVar2 = (ulonglong)(uVar26 & uVar28) * 100;
      uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
      puVar11 = (undefined *)((uint)lVar2 >> sVar13 | uVar26 << 0x20 - sVar13);
      uVar26 = uVar26 >> sVar13;
      pcVar19 = str_10008da7;
      uVar12 = SUB41(local_1ac,0);
      uVar41 = (undefined1)((uint)local_1ac >> 8);
      uVar38 = 0;
      uVar43 = (undefined1)((uint)local_1ac >> 0x18);
      uVar35 = (undefined2)uVar26;
      uVar6 = (undefined1)(uVar26 >> 0x10);
      uVar40 = (undefined1)(uVar26 >> 0x18);
      uVar26 = uVar28 >> sVar13 | uVar7 << 0x20 - sVar13;
      uVar9 = uVar7 >> sVar13;
    }
    pf_activity_bytes_format((char *)&local_d0,0x40,pcVar19,CONCAT44(uVar9,uVar26),
                       CONCAT17(uVar40,CONCAT16(uVar6,CONCAT24(uVar35,puVar11))),
                       (void *)CONCAT13(uVar43,CONCAT12(uVar38,CONCAT11(uVar41,uVar12))));
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x312U),
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x3c);
    uVar26 = thunk_terror_ui_colour(4);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    uVar6 = (undefined1)uVar26;
    PF_PART3(local_154, 0) = CONCAT12(uVar6,(undefined2)local_154);
    uVar12 = 0x6e;
    uVar41 = 0;
    uVar38 = 0;
    uVar43 = 0;
    uVar35 = (undefined2)local_154;
    recovered_10007940((int)reg_ecx,0x94,0x1b4,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12(uVar6,(undefined2)local_154)),0x6e);
    uVar26 = 0x3fffffff;
    if (uVar8 == 0 && (uint)(0x3fffffff < uVar31) <= -uVar8) {
      uVar26 = 0xfffff;
      if (uVar8 != 0 || -uVar8 < (uint)(0xfffff < uVar31)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_10006107;
      }
      if ((uVar31 < 0x400) <= uVar8) {
        uVar26 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_10006107;
      }
      puVar11 = &DAT_10008d9c;
      pcVar19 = str_10008db6;
      uVar26 = uVar31;
      uVar9 = uVar8;
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_10006107:
      lVar2 = (ulonglong)(uVar26 & uVar31) * 100;
      uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
      puVar11 = (undefined *)((uint)lVar2 >> sVar13 | uVar26 << 0x20 - sVar13);
      uVar26 = uVar26 >> sVar13;
      pcVar19 = str_10008da7;
      uVar12 = SUB41(local_1ac,0);
      uVar41 = (undefined1)((uint)local_1ac >> 8);
      uVar38 = 0;
      uVar43 = (undefined1)((uint)local_1ac >> 0x18);
      uVar35 = (undefined2)uVar26;
      uVar6 = (undefined1)(uVar26 >> 0x10);
      uVar40 = (undefined1)(uVar26 >> 0x18);
      uVar26 = uVar31 >> sVar13 | uVar8 << 0x20 - sVar13;
      uVar9 = uVar8 >> sVar13;
    }
    pf_activity_bytes_format((char *)&local_d0,0x40,pcVar19,CONCAT44(uVar9,uVar26),
                       CONCAT17(uVar40,CONCAT16(uVar6,CONCAT24(uVar35,puVar11))),
                       (void *)CONCAT13(uVar43,CONCAT12(uVar38,CONCAT11(uVar41,uVar12))));
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x15a,0x19c,((uintptr_t)pf_module_state + 0x318U),
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x50);
    uVar26 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x1a2,0x19c,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),0x6e);
    uVar14 = thunk_terror_ui_colour(0x23);
    uVar9 = DAT_10009098;
    uVar26 = DAT_10009094;
    local_19c = (undefined *)(DAT_10009094 * 0x660);
    iVar32 = DAT_10009094 * 4;
    iVar15 = -0x20;
    do {
      uVar25 = 0x214;
      do {
        if ((((uVar25 - 0x234) * (uVar25 - 0x234) + iVar15 * iVar15 < 0x401) &&
            (reg_ecx != (void *)0x0)) &&
           (((-1 < (int)(uVar25 | iVar15 + 0x1b8U) &&
             ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar25 < (int)uVar26)))) &&
            ((int)(iVar15 + 0x1b8U) < (int)uVar9)))) {
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar25 * 4) =
               (char)(uVar14 >> 0x10);
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar25 * 4) =
               (char)(uVar14 >> 8);
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar25 * 4) = (char)uVar14
          ;
          *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar25 * 4) = 0xff;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0x255);
      iVar15 = iVar15 + 1;
      local_19c = (undefined *)((int)local_19c + iVar32);
    } while (iVar15 != 0x21);
    if (uVar31 != 0 || uVar8 != 0) {
      iVar32 = uVar7 * 100 + (int)((ulonglong)(uintptr_t)uVar28 * 100 >> 0x20);
      uVar40 = (undefined1)(uVar31 >> 0x18);
      uVar34 = thunk___udivdi3(CONCAT17((char)((uint)iVar32 >> 0x18),
                                           CONCAT16((char)((uint)iVar32 >> 0x10),
                                                    CONCAT24((short)iVar32,
                                                             (int)((ulonglong)(uintptr_t)uVar28 * 100)))),
                                  CONCAT17((char)(uVar8 >> 0x18),
                                           CONCAT16((char)(uVar8 >> 0x10),
                                                    CONCAT15((char)(uVar8 >> 8),uVar4))));
      if ((uint)((uint)uVar34 < 0xb) <= (uint)(uVar34 >> 0x20)) {
        iVar32 = -0x20;
        local_198 = 0x198;
        do {
          iVar15 = 0x234;
          do {
            if (((((uint)((iVar15 + -0x234) * (iVar15 + -0x234) + iVar32 * iVar32) < 0x401) &&
                 (uVar26 = thunk_terror_ui_colour(4), reg_ecx != (void *)0x0)) &&
                (*(int *)((int)reg_ecx + 0x340) != 0)) &&
               ((iVar15 < (int)DAT_10009094 && (iVar32 + 0x1b8 < (int)DAT_10009098)))) {
              iVar16 = DAT_10009094 * local_198 + iVar15;
              *(char *)(*(int *)((int)reg_ecx + 0x340) + iVar16 * 4) = (char)(uVar26 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + iVar16 * 4) = (char)(uVar26 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + iVar16 * 4) = (char)uVar26;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + iVar16 * 4) = 0xff;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x255);
          local_198 = local_198 + 1;
          bVar33 = iVar32 != 0;
          iVar32 = iVar32 + 1;
        } while (bVar33);
      }
    }
    uVar26 = thunk_terror_ui_colour(1);
    uVar5 = local_154;
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    PF_PART1(local_154, 3) = SUB41(uVar5,3);
    PF_PART3(local_154, 0) = CONCAT12((char)uVar26,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x20c,0x1e2,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar26,(undefined2)local_154)),100);
    goto LAB_10006490;
  case 2:
    uVar34 = *(ulonglong *)((int)reg_ecx + 0x414);
    uVar3 = *(ulonglong *)((int)reg_ecx + 0x41c);
    uVar26 = *(uint *)((int)reg_ecx + 0x428);
    uVar14 = *(uint *)((int)reg_ecx + 0x424);
    arg3 = *(ulonglong *)((int)reg_ecx + 0x424);
    uVar31 = *(uint *)((int)reg_ecx + 0x430);
    uVar8 = *(uint *)((int)reg_ecx + 0x42c);
    arg3_00 = *(ulonglong *)((int)reg_ecx + 0x42c);
    uVar21 = thunk_terror_ui_colour(0x2d);
    uVar28 = DAT_10009098;
    uVar7 = DAT_10009094;
    uVar25 = 0x10;
    if ((int)DAT_10009094 < 0x10) {
      uVar25 = DAT_10009094;
    }
    uVar22 = uVar9 - 0x10;
    if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
      uVar22 = DAT_10009094;
    }
    if ((int)uVar9 < 0x10) {
      uVar22 = 0;
    }
    uVar9 = 0x1f8;
    if ((int)DAT_10009098 < 0x1f8) {
      uVar9 = DAT_10009098;
    }
    if (0x17a < (int)DAT_10009098) {
      local_1a0 = (undefined *)(DAT_10009094 * 0x5e8);
      iVar15 = DAT_10009094 * 4;
      uVar17 = 0x17a;
      do {
        uVar23 = uVar25;
        if ((int)uVar25 < (int)uVar22) {
          do {
            if ((((int)uVar17 < (int)uVar28) && (-1 < (int)uVar23)) &&
               ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar23 < (int)uVar7)))) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + uVar23 * 4) =
                   (char)(uVar21 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 1 + uVar23 * 4) =
                   (char)(uVar21 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 2 + uVar23 * 4) =
                   (char)uVar21;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_1a0 + 3 + uVar23 * 4) =
                   0xff;
            }
            uVar23 = uVar23 + 1;
          } while (uVar22 != uVar23);
        }
        uVar17 = uVar17 + 1;
        local_1a0 = (undefined *)((int)local_1a0 + iVar15);
      } while (uVar17 != uVar9);
    }
    uVar9 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar9 >> 0x10);
    uVar6 = (undefined1)(uVar9 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar9;
    uVar40 = 0;
    recovered_10007500((int)reg_ecx,0x10,0x17a,iVar32,0x7e,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    recovered_100087b0((int)reg_ecx);
    thunk_snprintf((char *)&local_d0,0x40,str_10008e5b,uVar34);
    uVar9 = thunk_terror_ui_colour(1);
    uVar5 = local_154;
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    PF_PART1(local_154, 3) = SUB41(uVar5,3);
    PF_PART3(local_154, 0) = CONCAT12((char)uVar9,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x58,0x1a8,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar9,(undefined2)local_154)),0x82);
    thunk_snprintf((char *)&local_d0,0x40,str_10008e6a,uVar3);
    uVar9 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar9,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x58,0x1be,(int)&local_d0,
                       CONCAT13(uVar40,CONCAT12((char)uVar9,(undefined2)local_154)),0x8c);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e7b,*(uint *)((int)reg_ecx + 0x594));
    uVar9 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar9,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x58,0x1d4,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12((char)uVar9,(undefined2)local_154)),0x82);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e89,*(uint *)((int)reg_ecx + 0x598));
    uVar9 = thunk_terror_ui_colour(1);
    PF_PART2(local_154, 0) = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    PF_PART3(local_154, 0) = CONCAT12((char)uVar9,(undefined2)local_154);
    recovered_10007940((int)reg_ecx,0x58,0x1ea,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12((char)uVar9,(undefined2)local_154)),0x8c);
    uVar9 = 0x3fffffff;
    if (uVar26 == 0 && (uint)(0x3fffffff < uVar14) <= -uVar26) {
      uVar9 = 0xfffff;
      if (uVar26 != 0 || -uVar26 < (uint)(0xfffff < uVar14)) {
        sVar13 = 0x14;
        puVar11 = &DAT_10008da1;
        goto LAB_10005099;
      }
      if ((uVar14 < 0x400) <= uVar26) {
        uVar9 = 0x3ff;
        sVar13 = 10;
        puVar11 = &DAT_10008da4;
        goto LAB_10005099;
      }
      thunk_snprintf((char *)&local_154,0x40,str_10008db6,arg3,&DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      puVar11 = &DAT_10008d9e;
LAB_10005099:
      lVar2 = (ulonglong)(uVar9 & uVar14) * 100;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar7 = uVar9 >> sVar13;
      thunk_snprintf((char *)&local_154,0x40,str_10008da7,
                         CONCAT44(uVar26 >> sVar13,uVar14 >> sVar13 | uVar26 << 0x20 - sVar13),
                         CONCAT17((char)(uVar7 >> 0x18),
                                  CONCAT16((char)(uVar7 >> 0x10),
                                           CONCAT24((short)uVar7,
                                                    (uint)lVar2 >> sVar13 | uVar9 << 0x20 - sVar13))
                                 ),puVar11);
    }
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008e98,&local_154);
    uVar26 = thunk_terror_ui_colour(1);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x12e,0x1a8,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12(local_10e,local_110)),0xaa);
    uVar26 = 0x3fffffff;
    if (uVar31 == 0 && (uint)(0x3fffffff < uVar8) <= -uVar31) {
      uVar26 = 0xfffff;
      if (uVar31 != 0 || -uVar31 < (uint)(0xfffff < uVar8)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_100051ef;
      }
      if ((uVar8 < 0x400) <= uVar31) {
        uVar26 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_100051ef;
      }
      thunk_snprintf((char *)&local_154,0x40,str_10008db6,arg3_00,&DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_100051ef:
      lVar2 = (ulonglong)(uVar26 & uVar8) * 100;
      uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar9 = uVar26 >> sVar13;
      thunk_snprintf((char *)&local_154,0x40,str_10008da7,
                         CONCAT44(uVar31 >> sVar13,uVar8 >> sVar13 | uVar31 << 0x20 - sVar13),
                         CONCAT17((char)(uVar9 >> 0x18),
                                  CONCAT16((char)(uVar9 >> 0x10),
                                           CONCAT24((short)uVar9,
                                                    (uint)lVar2 >> sVar13 | uVar26 << 0x20 - sVar13)
                                          )),local_1ac);
    }
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008ea6,&local_154);
    uVar26 = thunk_terror_ui_colour(1);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x12e,0x1be,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12(local_10e,local_110)),0xb4);
    uVar26 = *(uint *)((int)reg_ecx + 0x59c);
    uVar9 = *(uint *)((int)reg_ecx + 0x5a0);
    uVar14 = 0x3fffffff;
    if (uVar9 == 0 && (uint)(0x3fffffff < uVar26) <= -uVar9) {
      uVar14 = 0xfffff;
      if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar26)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_1000533c;
      }
      if ((uVar26 < 0x400) <= uVar9) {
        uVar14 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_1000533c;
      }
      thunk_snprintf((char *)&local_110,0x20,str_10008db6,*(ulonglong *)((int)reg_ecx + 0x59c),
                         &DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_1000533c:
      lVar2 = (ulonglong)(uVar14 & uVar26) * 100;
      uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar31 = uVar14 >> sVar13;
      thunk_snprintf((char *)&local_110,0x20,str_10008da7,
                         CONCAT44(uVar9 >> sVar13,uVar26 >> sVar13 | uVar9 << 0x20 - sVar13),
                         CONCAT17((char)(uVar31 >> 0x18),
                                  CONCAT16((char)(uVar31 >> 0x10),
                                           CONCAT24((short)uVar31,
                                                    (uint)lVar2 >> sVar13 | uVar14 << 0x20 - sVar13)
                                          )),local_1ac);
    }
    thunk_snprintf((char *)&local_154,0x40,str_10008eff,&local_110);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008eb7,&local_154);
    uVar26 = thunk_terror_ui_colour(0x11);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x12e,0x1d4,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12(local_10e,local_110)),0xbe);
    uVar26 = *(uint *)((int)reg_ecx + 0x5a4);
    uVar9 = *(uint *)((int)reg_ecx + 0x5a8);
    uVar14 = 0x3fffffff;
    if (uVar9 == 0 && (uint)(0x3fffffff < uVar26) <= -uVar9) {
      uVar14 = 0xfffff;
      if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar26)) {
        sVar13 = 0x14;
        local_1a0 = &DAT_10008da1;
        goto LAB_100054ac;
      }
      if ((uVar26 < 0x400) <= uVar9) {
        uVar14 = 0x3ff;
        sVar13 = 10;
        local_1a0 = &DAT_10008da4;
        goto LAB_100054ac;
      }
      thunk_snprintf((char *)&local_110,0x20,str_10008db6,*(ulonglong *)((int)reg_ecx + 0x5a4),
                         &DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1a0 = &DAT_10008d9e;
LAB_100054ac:
      lVar2 = (ulonglong)(uVar14 & uVar26) * 100;
      uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar31 = uVar14 >> sVar13;
      thunk_snprintf((char *)&local_110,0x20,str_10008da7,
                         CONCAT44(uVar9 >> sVar13,uVar26 >> sVar13 | uVar9 << 0x20 - sVar13),
                         CONCAT17((char)(uVar31 >> 0x18),
                                  CONCAT16((char)(uVar31 >> 0x10),
                                           CONCAT24((short)uVar31,
                                                    (uint)lVar2 >> sVar13 | uVar14 << 0x20 - sVar13)
                                          )),local_1a0);
    }
    thunk_snprintf((char *)&local_154,0x40,str_10008eff,&local_110);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008ec9,&local_154);
    uVar26 = thunk_terror_ui_colour(0x12);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x12e,0x1ea,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12(local_10e,local_110)),200);
    uVar26 = *(uint *)((int)reg_ecx + 0x5ac);
    uVar9 = *(uint *)((int)reg_ecx + 0x5b0);
    uVar14 = 0x3fffffff;
    if (uVar9 == 0 && (uint)(0x3fffffff < uVar26) <= -uVar9) {
      uVar14 = 0xfffff;
      if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar26)) {
        sVar13 = 0x14;
        local_1a0 = &DAT_10008da1;
        goto LAB_1000560e;
      }
      if ((uVar26 < 0x400) <= uVar9) {
        uVar14 = 0x3ff;
        sVar13 = 10;
        local_1a0 = &DAT_10008da4;
        goto LAB_1000560e;
      }
      thunk_snprintf((char *)&local_110,0x20,str_10008db6,*(ulonglong *)((int)reg_ecx + 0x5ac),
                         &DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1a0 = &DAT_10008d9e;
LAB_1000560e:
      lVar2 = (ulonglong)(uVar14 & uVar26) * 100;
      uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar31 = uVar14 >> sVar13;
      thunk_snprintf((char *)&local_110,0x20,str_10008da7,
                         CONCAT44(uVar9 >> sVar13,uVar26 >> sVar13 | uVar9 << 0x20 - sVar13),
                         CONCAT17((char)(uVar31 >> 0x18),
                                  CONCAT16((char)(uVar31 >> 0x10),
                                           CONCAT24((short)uVar31,
                                                    (uint)lVar2 >> sVar13 | uVar14 << 0x20 - sVar13)
                                          )),local_1a0);
    }
    thunk_snprintf((char *)&local_154,0x40,str_10008eff,&local_110);
    uVar38 = 0x10;
    thunk_snprintf((char *)&local_d0,0x40,str_10008ede,&local_154);
    uVar26 = thunk_terror_ui_colour(1);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x232,0x18c,(int)&local_d0,
                       CONCAT13(uVar38,CONCAT12(local_10e,local_110)),0x82);
    uVar38 = (undefined1)((uint)((int)reg_ecx + 0x644) >> 0x18);
    recovered_10007f70((int)reg_ecx,0x224,0x6a,(int)reg_ecx + 0x644,(int)reg_ecx + 0x68c,'\0');
    uVar26 = thunk_terror_ui_colour(0x23);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007c30((int)reg_ecx,0x1de,0x1ce,CONCAT13(uVar38,CONCAT12(local_10e,local_110)));
    uVar26 = thunk_terror_ui_colour(0x12);
    local_110 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_10e = (undefined1)uVar26;
    recovered_10007c30((int)reg_ecx,0x1de,0x1e6,CONCAT13(uVar38,CONCAT12(local_10e,local_110)));
    goto LAB_10006490;
  case 3:
    uVar26 = *(uint *)((int)reg_ecx + 0x410);
    puVar1 = (ulonglong *)((int)reg_ecx + 0x40c);
    uVar14 = *(uint *)puVar1;
    uVar3 = *puVar1;
    uVar4 = *(undefined5 *)puVar1;
    uVar31 = *(uint *)((int)reg_ecx + 0x404);
    uVar28 = uVar14 - uVar31;
    uVar8 = *(uint *)((int)reg_ecx + 0x408);
    uVar34 = *(ulonglong *)((int)reg_ecx + 0x404);
    uVar7 = (uVar26 - uVar8) - (uint)(uVar14 < uVar31);
    if (uVar26 < uVar8 || uVar26 - uVar8 < (uint)(uVar14 < uVar31)) {
      uVar7 = 0;
      uVar28 = 0;
    }
    uVar17 = thunk_terror_ui_colour(0x2d);
    uVar21 = DAT_10009098;
    uVar25 = DAT_10009094;
    uVar22 = 0x10;
    if ((int)DAT_10009094 < 0x10) {
      uVar22 = DAT_10009094;
    }
    uVar23 = uVar9 - 0x10;
    if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
      uVar23 = DAT_10009094;
    }
    if ((int)uVar9 < 0x10) {
      uVar23 = 0;
    }
    uVar9 = 0x1f8;
    if ((int)DAT_10009098 < 0x1f8) {
      uVar9 = DAT_10009098;
    }
    if (0x17a < (int)DAT_10009098) {
      local_19c = (undefined *)(DAT_10009094 * 0x5e8);
      iVar15 = DAT_10009094 * 4;
      uVar24 = 0x17a;
      do {
        uVar18 = uVar22;
        if ((int)uVar22 < (int)uVar23) {
          do {
            if (((((int)uVar24 < (int)uVar21) && (-1 < (int)uVar18)) &&
                (*(int *)((int)reg_ecx + 0x340) != 0)) && ((int)uVar18 < (int)uVar25)) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar18 * 4) =
                   (char)(uVar17 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar18 * 4) =
                   (char)(uVar17 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar18 * 4) =
                   (char)uVar17;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar18 * 4) =
                   0xff;
            }
            uVar18 = uVar18 + 1;
          } while (uVar23 != uVar18);
        }
        uVar24 = uVar24 + 1;
        local_19c = (undefined *)((int)local_19c + iVar15);
      } while (uVar24 != uVar9);
    }
    uVar9 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar9 >> 0x10);
    uVar6 = (undefined1)(uVar9 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar9;
    uVar35 = 0x7e;
    uVar40 = 0;
    uVar41 = 0;
    recovered_10007500((int)reg_ecx,0x10,0x17a,iVar32,0x7e,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    uVar6 = 0xc1;
    uVar12 = 0x44;
    uVar38 = 0;
    uVar43 = 0x10;
    recovered_100087b0((int)reg_ecx);
    uVar9 = 0x3fffffff;
    if (uVar8 == 0 && (uint)(0x3fffffff < uVar31) <= -uVar8) {
      uVar9 = 0xfffff;
      if (uVar8 != 0 || -uVar8 < (uint)(0xfffff < uVar31)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_100057dc;
      }
      if ((uVar31 < 0x400) <= uVar8) {
        uVar9 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_100057dc;
      }
      thunk_snprintf((char *)&local_d0,0x40,str_10008db6,uVar34,&DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_100057dc:
      lVar2 = (ulonglong)(uVar9 & uVar31) * 100;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar25 = uVar9 >> sVar13;
      uVar6 = SUB41(local_1ac,0);
      uVar12 = (undefined1)((uint)local_1ac >> 8);
      uVar38 = 0;
      uVar43 = (undefined1)((uint)local_1ac >> 0x18);
      uVar35 = (undefined2)uVar25;
      uVar40 = (undefined1)(uVar25 >> 0x10);
      uVar41 = (undefined1)(uVar25 >> 0x18);
      thunk_snprintf((char *)&local_d0,0x40,str_10008da7,
                         CONCAT44(uVar8 >> sVar13,uVar31 >> sVar13 | uVar8 << 0x20 - sVar13),
                         CONCAT17(uVar41,CONCAT16(uVar40,CONCAT24(uVar35,(uint)lVar2 >> sVar13 |
                                                                         uVar9 << 0x20 - sVar13))),
                         local_1ac);
    }
    uVar9 = 0x3fffffff;
    if (uVar7 == 0 && (uint)(0x3fffffff < uVar28) <= -uVar7) {
      uVar9 = 0xfffff;
      if (uVar7 != 0 || -uVar7 < (uint)(0xfffff < uVar28)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_100058a5;
      }
      if ((uVar28 < 0x400) <= uVar7) {
        uVar9 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_100058a5;
      }
      pcVar19 = str_10008db6;
      uVar36 = 0x8d9c;
      uVar37 = 0;
      uVar39 = 0x10;
      uVar9 = uVar28;
      uVar25 = uVar7;
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_100058a5:
      lVar2 = (ulonglong)(uVar9 & uVar28) * 100;
      uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar9 = (uint)lVar2 >> sVar13 | uVar25 << 0x20 - sVar13;
      uVar25 = uVar25 >> sVar13;
      pcVar19 = str_10008da7;
      uVar6 = SUB41(local_1ac,0);
      uVar12 = (undefined1)((uint)local_1ac >> 8);
      uVar38 = 0;
      uVar43 = (undefined1)((uint)local_1ac >> 0x18);
      uVar35 = (undefined2)uVar25;
      uVar40 = (undefined1)(uVar25 >> 0x10);
      uVar41 = (undefined1)(uVar25 >> 0x18);
      uVar36 = (undefined2)uVar9;
      uVar37 = (undefined1)(uVar9 >> 0x10);
      uVar39 = (undefined1)(uVar9 >> 0x18);
      uVar9 = uVar28 >> sVar13 | uVar7 << 0x20 - sVar13;
      uVar25 = uVar7 >> sVar13;
    }
    pf_activity_bytes_format((char *)&local_154,0x40,pcVar19,CONCAT44(uVar25,uVar9),
                       CONCAT17(uVar41,CONCAT16(uVar40,CONCAT24(uVar35,CONCAT13(uVar39,CONCAT12(
                                                  uVar37,uVar36))))),
                       (void *)CONCAT13(uVar43,CONCAT12(uVar38,CONCAT11(uVar12,uVar6))));
    uVar9 = 0x3fffffff;
    if (uVar26 == 0 && (uint)(0x3fffffff < uVar14) <= -uVar26) {
      uVar9 = 0xfffff;
      if (uVar26 != 0 || -uVar26 < (uint)(0xfffff < uVar14)) {
        sVar13 = 0x14;
        local_1ac = &DAT_10008da1;
        goto LAB_10005972;
      }
      if ((uVar14 < 0x400) <= uVar26) {
        uVar9 = 0x3ff;
        sVar13 = 10;
        local_1ac = &DAT_10008da4;
        goto LAB_10005972;
      }
      thunk_snprintf((char *)&local_110,0x40,str_10008db6,uVar3,&DAT_10008d9c);
    }
    else {
      sVar13 = 0x1e;
      local_1ac = &DAT_10008d9e;
LAB_10005972:
      lVar2 = (ulonglong)(uVar9 & uVar14) * 100;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar25 = uVar9 >> sVar13;
      uVar41 = (undefined1)(uVar25 >> 0x18);
      thunk_snprintf((char *)&local_110,0x40,str_10008da7,
                         CONCAT44(uVar26 >> sVar13,uVar14 >> sVar13 | uVar26 << 0x20 - sVar13),
                         CONCAT17(uVar41,CONCAT16((char)(uVar25 >> 0x10),
                                                  CONCAT24((short)uVar25,
                                                           (uint)lVar2 >> sVar13 |
                                                           uVar9 << 0x20 - sVar13))),local_1ac);
    }
    uVar9 = thunk_terror_ui_colour(1);
    local_180 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    recovered_10007940((int)reg_ecx,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x3ccU),
                       CONCAT13(uVar41,CONCAT12((char)uVar9,local_180)),0x82);
    uVar9 = thunk_terror_ui_colour(4);
    local_180 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    recovered_10007940((int)reg_ecx,0xce,0x1c2,(int)&local_154,
                       CONCAT13(uVar41,CONCAT12((char)uVar9,local_180)),0x78);
    uVar9 = thunk_terror_ui_colour(1);
    local_180 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    recovered_10007940((int)reg_ecx,0x4e,0x1da,((uintptr_t)pf_module_state + 0x3dcU),
                       CONCAT13(uVar41,CONCAT12((char)uVar9,local_180)),100);
    uVar9 = thunk_terror_ui_colour(0x11);
    local_180 = CONCAT11((char)(uVar9 >> 8),(char)(uVar9 >> 0x10));
    recovered_10007940((int)reg_ecx,0xce,0x1da,(int)&local_d0,
                       CONCAT13(uVar41,CONCAT12((char)uVar9,local_180)),0x78);
    uVar21 = thunk_terror_ui_colour(0x23);
    uVar25 = DAT_10009098;
    uVar9 = DAT_10009094;
    local_19c = (undefined *)(DAT_10009094 * 0x6b0);
    iVar32 = DAT_10009094 * 4;
    iVar15 = -0x20;
    do {
      uVar22 = 0x214;
      do {
        if (((((uVar22 - 0x234) * (uVar22 - 0x234) + iVar15 * iVar15 < 0x401) &&
             (reg_ecx != (void *)0x0)) &&
            ((-1 < (int)(uVar22 | iVar15 + 0x1ccU) &&
             ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar22 < (int)uVar9)))))) &&
           ((int)(iVar15 + 0x1ccU) < (int)uVar25)) {
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar22 * 4) =
               (char)(uVar21 >> 0x10);
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar22 * 4) =
               (char)(uVar21 >> 8);
          *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar22 * 4) = (char)uVar21
          ;
          *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar22 * 4) = 0xff;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != 0x255);
      iVar15 = iVar15 + 1;
      local_19c = (undefined *)((int)local_19c + iVar32);
    } while (iVar15 != 0x21);
    if ((uVar14 != 0 || uVar26 != 0) && (uVar8 < uVar26 || uVar8 - uVar26 < (uint)(uVar31 < uVar14))
       ) {
      iVar32 = uVar7 << 6;
      uVar41 = (undefined1)(uVar14 >> 0x18);
      uVar34 = thunk___udivdi3(CONCAT17((char)((uint)iVar32 >> 0x18),
                                           CONCAT16((char)((uint)iVar32 >> 0x10),
                                                    CONCAT24((ushort)iVar32 |
                                                             (ushort)(uVar28 >> 0x1a),uVar28 << 6)))
                                  ,CONCAT17((char)(uVar26 >> 0x18),
                                            CONCAT16((char)(uVar26 >> 0x10),
                                                     CONCAT15((char)(uVar26 >> 8),uVar4))));
      local_194 = -0x20;
      local_18c = 0x1ac;
      do {
        if (-1 < (int)uVar34) {
          uVar26 = 0x214;
          do {
            iVar32 = uVar26 - 0x234;
            if (((((uint)(iVar32 * iVar32 + local_194 * local_194) < 0x401) &&
                 (uVar9 = thunk_terror_ui_colour(4), reg_ecx != (void *)0x0)) &&
                (-1 < (int)(uVar26 | local_194 + 0x1ccU) && *(int *)((int)reg_ecx + 0x340) != 0)) &&
               (((int)uVar26 < (int)DAT_10009094 && ((int)(local_194 + 0x1ccU) < (int)DAT_10009098))
               )) {
              iVar15 = DAT_10009094 * local_18c + uVar26;
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (uintptr_t)(uintptr_t)iVar15 * 4) = (char)(uVar9 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + 1 + (uintptr_t)(uintptr_t)iVar15 * 4) = (char)(uVar9 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + 2 + (uintptr_t)(uintptr_t)iVar15 * 4) = (char)uVar9;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + 3 + (uintptr_t)(uintptr_t)iVar15 * 4) = 0xff;
            }
            uVar26 = uVar26 + 1;
          } while (iVar32 < (int)uVar34 + -0x20);
        }
        local_194 = local_194 + 1;
        local_18c = local_18c + 1;
      } while (local_194 != 0x21);
    }
    uVar26 = thunk_terror_ui_colour(1);
    local_180 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    recovered_10007940((int)reg_ecx,0x212,0x1f6,(int)&local_110,
                       CONCAT13(uVar41,CONCAT12((char)uVar26,local_180)),0x78);
    goto LAB_10006490;
  default:
    uVar8 = thunk_terror_ui_colour(0x2d);
    uVar14 = DAT_10009098;
    uVar26 = DAT_10009094;
    uVar31 = 0x10;
    if ((int)DAT_10009094 < 0x10) {
      uVar31 = DAT_10009094;
    }
    uVar7 = uVar9 - 0x10;
    if ((int)DAT_10009094 <= (int)(uVar9 - 0x10)) {
      uVar7 = DAT_10009094;
    }
    uVar28 = 0;
    if (0xf < (int)uVar9) {
      uVar28 = uVar7;
    }
    uVar9 = 0x1f8;
    if ((int)DAT_10009098 < 0x1f8) {
      uVar9 = DAT_10009098;
    }
    if (0x17a < (int)DAT_10009098) {
      local_19c = (undefined *)(DAT_10009094 * 0x5e8);
      iVar15 = DAT_10009094 * 4;
      uVar7 = 0x17a;
      do {
        uVar25 = uVar31;
        if ((int)uVar31 < (int)uVar28) {
          do {
            if ((((int)uVar7 < (int)uVar14) && (-1 < (int)uVar25)) &&
               ((*(int *)((int)reg_ecx + 0x340) != 0 && ((int)uVar25 < (int)uVar26)))) {
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + uVar25 * 4) =
                   (char)(uVar8 >> 0x10);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 1 + uVar25 * 4) =
                   (char)(uVar8 >> 8);
              *(char *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 2 + uVar25 * 4) =
                   (char)uVar8;
              *(undefined1 *)(*(int *)((int)reg_ecx + 0x340) + (int)local_19c + 3 + uVar25 * 4) =
                   0xff;
            }
            uVar25 = uVar25 + 1;
          } while (uVar28 != uVar25);
        }
        uVar7 = uVar7 + 1;
        local_19c = (undefined *)((int)local_19c + iVar15);
      } while (uVar7 != uVar9);
    }
    uVar26 = thunk_terror_ui_colour(3);
    uVar12 = (undefined1)(uVar26 >> 0x10);
    uVar6 = (undefined1)(uVar26 >> 8);
    local_d0 = CONCAT11(uVar6,uVar12);
    local_ce = (undefined1)uVar26;
    uVar40 = 0;
    recovered_10007500((int)reg_ecx,0x10,0x17a,iVar32,0x7e,
                       CONCAT13(uVar38,CONCAT12(local_ce,CONCAT11(uVar6,uVar12))));
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x58,0x1a2,((uintptr_t)pf_module_state + 0x3e8U),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x6e);
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x58,0x1ba,((uintptr_t)pf_module_state + 0x3f6U),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x78);
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x130,0x1a2,((uintptr_t)pf_module_state + 0x405U),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0xa0);
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x130,0x1ba,((uintptr_t)pf_module_state + 0x41cU),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x8c);
    uVar26 = thunk_terror_ui_colour(1);
    local_d0 = CONCAT11((char)(uVar26 >> 8),(char)(uVar26 >> 0x10));
    local_ce = (undefined1)uVar26;
    recovered_10007940((int)reg_ecx,0x230,0x18c,((uintptr_t)pf_module_state + 0x42fU),
                       CONCAT13(uVar40,CONCAT12(local_ce,local_d0)),0x82);
    uVar26 = 0x224;
    cVar42 = '\0';
    uVar36 = 0;
    uVar12 = 0;
    uVar40 = 0;
    uVar35 = 0;
    uVar38 = 0;
    uVar6 = 0;
    uVar9 = 0x6a;
  }
  recovered_10007f70((int)reg_ecx,uVar26,uVar9,CONCAT13(uVar6,CONCAT12(uVar38,uVar35)),
                     CONCAT13(uVar40,CONCAT12(uVar12,uVar36)),cVar42);
LAB_10006490:
  uVar14 = DAT_10009098;
  uVar9 = DAT_10009094;
  pixels = *(void **)((int)reg_ecx + 0x340);
  uVar26 = DAT_10009094 * 4;
  uVar31 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present(reg_ecx,str_10008cd2,pixels,uVar9,uVar14,uVar26,uVar31);
  return;
}

#undef DAT_10008d93
#undef DAT_10008d9c
#undef DAT_10008d9e
#undef DAT_10008da1
#undef DAT_10008da4
#undef DAT_10008f90
#undef DAT_10009094
#undef DAT_10009098
#undef PTR_DAT_1000907c
#undef PTR_str_10008d30_1000905c
#undef str_10008cd2
#undef str_10008d96
#undef str_10008da7
#undef str_10008db6
#undef str_10008e07
#undef str_10008e1a
#undef str_10008e2e
#undef str_10008e5b
#undef str_10008e6a
#undef str_10008e7b
#undef str_10008e89
#undef str_10008e98
#undef str_10008ea6
#undef str_10008eb7
#undef str_10008ec9
#undef str_10008ede
#undef str_10008eff
#undef local_1ac
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_18c
#undef local_184
#undef local_180
#undef local_178
#undef local_170
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_114
#undef local_110
#undef local_10e
#undef local_d0
#undef local_ce
#undef local_c0
#undef local_bc

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
 * Address: 0x100066a0
 */

void recovered_100066a0(void *reg_ecx)

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
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f0
 */

void recovered_100066f0(int reg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  void *records;
  int *piVar4;
  void *pvVar5;
  uint uVar6;

  local_20 = 0;
  local_1c = 0;
  if (((reg_ecx == 0) || (*(int *)(reg_ecx + 0x354) == -1)) ||
     (iVar3 = *(int *)(reg_ecx + 0x574), iVar3 == 0)) {
    return;
  }
  piVar4 = *(int **)(reg_ecx + 0x510);
  while (*piVar4 != *(int *)(reg_ecx + 0x354)) {
    piVar4 = piVar4 + 0x6e;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  }
  uVar2 = thunk_terror_ui_window_list((void *)0x0,0,&local_20);
  if (0x67b23a < local_20 || uVar2 == 0) {
    return;
  }
  if (local_20 == 0) {
    uVar2 = 0;
    pvVar5 = (void *)0x0;
LAB_100067f1:
    records = pvVar5;
    uVar2 = thunk_terror_ui_window_list(records,uVar2,&local_1c);
    if ((uVar2 != 0) && (local_1c <= local_20)) {
      local_18 = records;
      if (local_1c != 0) {
        piVar4 = (int *)((int)records + 0x30);
        uVar6 = 0;
        uVar2 = local_1c;
        do {
          if (piVar4[-0xb] == *(int *)(reg_ecx + 0x354)) {
            thunk_terror_ui_window_configure(piVar4[-0xc],piVar4[-1],*piVar4,0xe,10);
            uVar2 = local_1c;
          }
          uVar6 = uVar6 + 1;
          piVar4 = piVar4 + 0x9e;
        } while (uVar6 < uVar2);
      }
      iVar3 = Ram00280800;
      if (iVar3 != 0x50414d57) {
        return;
      }
      iVar3 = Ram00280804;
      if (iVar3 == 0) {
        return;
      }
      uVar2 = Ram00280808;
      if (uVar2 < 0xc) {
        return;
      }
      uVar2 = Ram00280808;
      if (uVar2 < 0x54) {
        return;
      }
      pcVar1 = (code *)UINT_00280850;
      records = local_18;
      goto joined_r0x100068e9;
    }
  }
  else {
    iVar3 = Ram00280800;
    records = (void *)0x0;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
       ((uVar2 = Ram00280808, 0xb < uVar2 && (uVar2 = Ram00280808, 0x4f < uVar2)))) {
      pcVar1 = (code *)UINT_0028084c;
      pvVar5 = (void *)0x0;
      if (pcVar1 != (code *)0x0) {
        pvVar5 = (*pcVar1)(local_20 * 0x278);
      }
    }
    else {
      pvVar5 = (void *)0x0;
    }
    uVar2 = local_20;
    if (pvVar5 != (void *)0x0 || local_20 == 0) goto LAB_100067f1;
  }
  iVar3 = Ram00280800;
  if (iVar3 != 0x50414d57) {
    return;
  }
  iVar3 = Ram00280804;
  if (iVar3 == 0) {
    return;
  }
  uVar2 = Ram00280808;
  if (uVar2 < 0xc) {
    return;
  }
  uVar2 = Ram00280808;
  if (uVar2 < 0x54) {
    return;
  }
  pcVar1 = (code *)UINT_00280850;
joined_r0x100068e9:
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*pcVar1)(records);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef DAT_10008d00
#define DAT_10008d00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef DAT_10008d09
#define DAT_10008d09 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram00280a20
#define Ram00280a20 (*(uint32_t *)(0x280a20U))
#undef str_10008d02
#define str_10008d02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10008d0d
#define str_10008d0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#define acStack_207 (*(char (*)[519])(pf_stack_frame + 57))
#define local_224 (*(uint *)(pf_stack_frame + 28))
#define local_220 (*(uint *)(pf_stack_frame + 32))
#define local_21c (*(uint *)(pf_stack_frame + 36))
#define local_20c (*(undefined4 *)(pf_stack_frame + 52))
#define local_208 (*(char *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006900
 */

void recovered_10006900(int reg_ecx)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulonglong arg3;
  bool bVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;

  if (reg_ecx == 0) {
    return;
  }
  if ((*(int *)(reg_ecx + 0x354) != -1) && (iVar6 = *(int *)(reg_ecx + 0x574), iVar6 != 0)) {
    pcVar8 = (char *)(*(int *)(reg_ecx + 0x510) + 0xc0);
    do {
      if (*(int *)(pcVar8 + -0xc0) == *(int *)(reg_ecx + 0x354)) {
        pcVar7 = &DAT_10008d00;
        if (*pcVar8 != '\0') {
          pcVar7 = pcVar8;
        }
        local_20c = str_10008d02;
        if ((pcVar8[-0xbc] & 1U) == 0) {
          local_20c = &DAT_10008d09;
        }
        arg3 = *(ulonglong *)(pcVar8 + -0x90);
        acStack_207[0x7f] = 0;
        iVar6 = Ram00280800;
        if ((((iVar6 != 0x50414d57) || (iVar6 = Ram00280804, iVar6 == 0)) ||
            (uVar3 = Ram00280808, uVar3 < 0xc)) ||
           ((uVar3 = Ram00280808, uVar3 < 0x224 || (iVar6 = Ram00280a20, iVar6 == 0))))
        goto LAB_10006a1f;
        pcVar1 = (code *)Ram00280a20;
        iVar6 = (*pcVar1)(*(undefined4 *)(pcVar8 + -0x84),&local_208,0x80);
        if (local_208 == '\0' || iVar6 < 0) goto LAB_10006a1f;
        local_220 = 1;
        local_224 = 0;
        iVar6 = -0x7f;
        cVar4 = local_208;
        goto LAB_10006a86;
      }
      pcVar8 = pcVar8 + 0x1b8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)(reg_ecx + 0x6d4) = 0;
  return;
LAB_10006bd7:
  uVar3 = 0x173;
  if (local_224 < 0x173) {
    uVar3 = local_224;
  }
  acStack_207[uVar3 + 0x7f] = '\0';
  goto LAB_10006a1f;
  while( true ) {
    if (cVar4 == '\\') {
      if (local_224 == 0) goto LAB_10006a1f;
      local_220 = local_220 + 1;
      local_224 = 0;
      if (6 < local_220) goto LAB_10006a1f;
    }
    else {
      if (((9 < (byte)(cVar4 - 0x30U)) &&
          (uVar5 = CONCAT11(cVar4,cVar4) & 0xdfff, cVar4 = (char)uVar5,
          0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU))) && ((cVar4 != '_' && (cVar4 != '-'))))
      goto LAB_10006a1f;
      local_224 = local_224 + 1;
    }
    cVar4 = acStack_207[iVar6 + 0x7f];
    iVar6 = iVar6 + 1;
    if (cVar4 == '\0') break;
LAB_10006a86:
    if (iVar6 == 0) goto LAB_10006a1f;
  }
  if (1 < local_220 && local_224 != 0) {
    acStack_207[0x7f] = 0x5b;
    local_224 = 3;
    do {
      uVar3 = local_224;
      if (uVar3 - 1 < 0x174) {
        acStack_207[uVar3 + 0x7d] = local_208;
      }
      local_208 = acStack_207[uVar3 - 3];
      local_224 = uVar3 + 1;
    } while (local_208 != '\0');
    if (uVar3 < 0x174) {
      acStack_207[uVar3 + 0x7e] = ']';
    }
    if (local_224 < 0x174) {
      acStack_207[uVar3 + 0x7f] = '\\';
    }
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 == '\\');
    bVar2 = true;
    do {
      if (cVar4 == '\\') {
        if (!bVar2) {
          bVar2 = true;
          goto joined_r0x10006bc8;
        }
        bVar2 = true;
        local_21c = local_224;
      }
      else {
        if (cVar4 == '\0') goto LAB_10006bd7;
        bVar2 = false;
joined_r0x10006bc8:
        local_21c = local_224 + 1;
        if (local_21c < 0x174) {
          local_21c = local_224 + 1;
          acStack_207[local_224 + 0x7f] = cVar4;
        }
      }
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_224 = local_21c;
    } while( true );
  }
LAB_10006a1f:
  thunk_snprintf((char *)(reg_ecx + 0x6d4),0x1b0,str_10008d0d,arg3,acStack_207 + 0x7f,local_20c,
                     *(uint *)(pcVar8 + -0x88));
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef DAT_10008d00
#undef DAT_10008d09
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280a20
#undef str_10008d02
#undef str_10008d0d
#undef acStack_207
#undef local_224
#undef local_220
#undef local_21c
#undef local_20c
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c00
 */

void recovered_10006c00(int reg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  if (reg_ecx != 0) {
    recovered_10006ce0(reg_ecx);
    if (*(uint *)(reg_ecx + 0x578) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar2 = (*(int *)(reg_ecx + 0x358) + 1U) % *(uint *)(reg_ecx + 0x578);
      *(uint *)(reg_ecx + 0x358) = uVar2;
      uVar1 = *(undefined4 *)(*(int *)(reg_ecx + 0x500) + 0x14 + uVar2 * 0x1c);
    }
    *(undefined4 *)(reg_ecx + 0x35c) = uVar1;
    thunk_memset((void *)(reg_ecx + 0x644),0,0x48);
    thunk_memset((void *)(reg_ecx + 0x68c),0,0x48);
    *(undefined1 *)(reg_ecx + 0x571) = 0;
    *(undefined4 *)(reg_ecx + 0x594) = 0;
    *(undefined4 *)(reg_ecx + 0x598) = 0;
    *(undefined4 *)(reg_ecx + 0x5a0) = 0;
    *(undefined4 *)(reg_ecx + 0x59c) = 0;
    *(undefined4 *)(reg_ecx + 0x5a8) = 0;
    *(undefined4 *)(reg_ecx + 0x5a4) = 0;
    *(undefined4 *)(reg_ecx + 0x5b0) = 0;
    *(undefined4 *)(reg_ecx + 0x5ac) = 0;
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809d0
#define DAT_002809d0 (*(uint8_t *)(0x2809d0U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram002809d0
#define Ram002809d0 (*(uint32_t *)(0x2809d0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(code * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

void recovered_10006ce0(int reg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  void *ptr;
  int *piVar3;
  void *ptr_00;
  uint uVar4;

  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar2 = Ram00280800;
  if (((((iVar2 != 0x50414d57) || (iVar2 = Ram00280804, iVar2 == 0)) ||
       (uVar4 = Ram00280808, uVar4 < 0xc)) ||
      ((uVar4 = Ram00280808, uVar4 < 0x1d4 || (pcVar1 = (code *)Ram002809d0, pcVar1 == (code *)0x0))
      )) || (iVar2 = (*pcVar1)(0,0,0,0,&local_20,&local_28), 0x9249249 < local_20 || iVar2 == 0)) {
    *(undefined4 *)(reg_ecx + 0x578) = 0;
    *(undefined4 *)(reg_ecx + 0x35c) = 0xffffffff;
    *(undefined4 *)(reg_ecx + 0x358) = 0;
    return;
  }
  if (*(uint *)(reg_ecx + 0x508) < local_20) {
LAB_10006dba:
    iVar2 = Ram00280800;
    ptr = (void *)0x0;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
       ((uVar4 = Ram00280808, 0xb < uVar4 &&
        ((uVar4 = Ram00280808, 0x4f < uVar4 &&
         (pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0)))))) {
      ptr = (*pcVar1)(local_20 * 0x1c);
    }
  }
  else {
    if (local_28 <= *(uint *)(reg_ecx + 0x50c)) {
      iVar2 = Ram00280800;
      if (iVar2 != 0x50414d57) {
        return;
      }
      iVar2 = Ram00280804;
      if (iVar2 == 0) {
        return;
      }
      uVar4 = Ram00280808;
      if (uVar4 < 0xc) {
        return;
      }
      uVar4 = Ram00280808;
      if (uVar4 < 0x1d4) {
        return;
      }
      local_18 = (code *)Ram002809d0;
      if (local_18 == (code *)0x0) {
        return;
      }
      iVar2 = (*local_18)(*(undefined4 *)(reg_ecx + 0x500),*(uint *)(reg_ecx + 0x508),
                          *(undefined4 *)(reg_ecx + 0x504),*(uint *)(reg_ecx + 0x50c),&local_24,
                          &local_1c);
      if (iVar2 == 0) {
        return;
      }
      if (*(uint *)(reg_ecx + 0x508) < local_24) {
        return;
      }
      if (*(uint *)(reg_ecx + 0x50c) < local_1c) {
        return;
      }
      goto LAB_1000707d;
    }
    if (local_20 != 0) goto LAB_10006dba;
    ptr = (void *)0x0;
  }
  ptr_00 = (void *)0x0;
  if ((((local_28 != 0) && (iVar2 = Ram00280800, iVar2 == 0x50414d57)) &&
      (iVar2 = Ram00280804, iVar2 != 0)) &&
     (((uVar4 = Ram00280808, 0xb < uVar4 && (uVar4 = Ram00280808, 0x4f < uVar4)) &&
      (pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0)))) {
    ptr_00 = (*pcVar1)(local_28);
  }
  if (((((ptr == (void *)0x0 && local_20 != 0) || (ptr_00 == (void *)0x0 && local_28 != 0)) ||
       ((iVar2 = Ram00280800, iVar2 != 0x50414d57 ||
        (((iVar2 = Ram00280804, iVar2 == 0 || (uVar4 = Ram00280808, uVar4 < 0xc)) ||
         (uVar4 = Ram00280808, uVar4 < 0x1d4)))))) ||
      ((pcVar1 = (code *)Ram002809d0, pcVar1 == (code *)0x0 ||
       (local_18 = pcVar1, iVar2 = (*pcVar1)(ptr,local_20,ptr_00,local_28,&local_24,&local_1c),
       iVar2 == 0)))) || ((local_20 < local_24 || (local_28 < local_1c)))) {
    iVar2 = Ram00280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00280804, iVar2 != 0)) &&
       ((uVar4 = Ram00280808, 0xb < uVar4 &&
        ((uVar4 = Ram00280808, 0x53 < uVar4 &&
         (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))))) {
      (*pcVar1)(ptr);
    }
    iVar2 = Ram00280800;
    if (iVar2 != 0x50414d57) {
      return;
    }
    iVar2 = Ram00280804;
    if (iVar2 == 0) {
      return;
    }
    uVar4 = Ram00280808;
    if (uVar4 < 0xc) {
      return;
    }
    uVar4 = Ram00280808;
    if (uVar4 < 0x54) {
      return;
    }
    pcVar1 = (code *)UINT_00280850;
    if (pcVar1 == (code *)0x0) {
      return;
    }
    (*pcVar1)(ptr_00);
    return;
  }
  recovered_100066a0(*(void **)(reg_ecx + 0x500));
  recovered_100066a0(*(void **)(reg_ecx + 0x504));
  *(void **)(reg_ecx + 0x500) = ptr;
  *(void **)(reg_ecx + 0x504) = ptr_00;
  *(uint *)(reg_ecx + 0x508) = local_20;
  *(uint *)(reg_ecx + 0x50c) = local_28;
LAB_1000707d:
  *(uint *)(reg_ecx + 0x578) = local_24;
  if (local_24 != 0) {
    piVar3 = (int *)(*(int *)(reg_ecx + 0x500) + 0x14);
    uVar4 = 0;
    do {
      if (*piVar3 == *(int *)(reg_ecx + 0x35c)) {
        *(uint *)(reg_ecx + 0x358) = uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 7;
    } while (local_24 != uVar4);
  }
  iVar2 = recovered_10007110();
  if (local_24 != 0) {
    piVar3 = (int *)(*(int *)(reg_ecx + 0x500) + 0x14);
    uVar4 = 0;
    do {
      if (*piVar3 == iVar2) {
        *(int *)(reg_ecx + 0x35c) = iVar2;
        *(uint *)(reg_ecx + 0x358) = uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 7;
    } while (local_24 != uVar4);
    *(undefined4 *)(reg_ecx + 0x35c) = *(undefined4 *)(*(int *)(reg_ecx + 0x500) + 0x14);
    *(undefined4 *)(reg_ecx + 0x358) = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809d0
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram002809d0
#undef UINT_0028084c
#undef UINT_00280850
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
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007110
 */

int recovered_10007110(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  iVar3 = Ram00280800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
      (uVar1 = Ram00280808, 0xb < uVar1)) &&
     ((uVar1 = Ram00280808, 0xbf < uVar1 && (pcVar2 = (code *)UINT_002808bc, pcVar2 != (code *)0x0))
     )) {
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_002808bc

#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x55eU)))
#define in_stack_ffffffac (*(undefined4 *)(pf_stack_frame + 28))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_44 (*(int *)(pf_stack_frame + 44))
#define local_38 (*(undefined2 *)(pf_stack_frame + 56))
#define local_34 (*(undefined2 *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007160
 */

void recovered_10007160(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,int param_6,
                       char param_7)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;

  uVar9 = (undefined1)((uint)in_stack_ffffffac >> 0x18);
  uVar5 = 0x3b;
  if (param_7 != '\0') {
    uVar5 = 2;
  }
  uVar3 = thunk_terror_ui_colour(uVar5);
  uVar2 = DAT_10009098;
  uVar5 = DAT_10009094;
  uVar4 = DAT_10009094;
  if ((int)reg_edx < (int)DAT_10009094) {
    uVar4 = reg_edx;
  }
  if ((int)reg_edx < 0) {
    uVar4 = 0;
  }
  local_4c = DAT_10009098;
  if ((int)param_3 < (int)DAT_10009098) {
    local_4c = param_3;
  }
  if ((int)param_3 < 0) {
    local_4c = 0;
  }
  uVar8 = param_4 + reg_edx;
  uVar6 = DAT_10009094;
  if ((int)uVar8 < (int)DAT_10009094) {
    uVar6 = uVar8;
  }
  if ((int)uVar8 < 0) {
    uVar6 = 0;
  }
  uVar7 = param_5 + param_3;
  uVar8 = DAT_10009098;
  if ((int)uVar7 < (int)DAT_10009098) {
    uVar8 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar8 = 0;
  }
  if ((int)local_4c < (int)uVar8) {
    local_44 = local_4c * (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    do {
      uVar7 = uVar4;
      if ((int)uVar4 < (int)uVar6) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar7 < (int)uVar5 && -1 < (int)(uVar7 | local_4c)) &&
              (int)local_4c < (int)uVar2) && *(int *)(reg_ecx + 0x340) != 0)) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + uVar7 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 1 + uVar7 * 4) = (char)(uVar3 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 2 + uVar7 * 4) = (char)uVar3;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 3 + uVar7 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      local_4c = local_4c + 1;
      local_44 = local_44 + iVar1;
    } while (local_4c != uVar8);
  }
  uVar5 = thunk_terror_ui_colour(3);
  local_34 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  recovered_10007500(reg_ecx,reg_edx,param_3,param_4,param_5,
                     CONCAT22(CONCAT11(uVar9,(char)uVar5),local_34));
  uVar9 = (undefined1)((uint)param_5 >> 0x18);
  uVar3 = thunk_terror_ui_colour(0x1f);
  uVar2 = DAT_10009098;
  uVar5 = DAT_10009094;
  uVar4 = reg_edx + 1;
  if ((int)DAT_10009094 <= (int)(reg_edx + 1)) {
    uVar4 = DAT_10009094;
  }
  if ((int)reg_edx < -1) {
    uVar4 = 0;
  }
  local_4c = param_3 + 1;
  if ((int)DAT_10009098 <= (int)(param_3 + 1)) {
    local_4c = DAT_10009098;
  }
  if ((int)param_3 < -1) {
    local_4c = 0;
  }
  uVar6 = (reg_edx - 1) + param_4;
  uVar8 = DAT_10009094;
  if ((int)uVar6 < (int)DAT_10009094) {
    uVar8 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar8 = 0;
  }
  uVar6 = param_3 + 2;
  if ((int)DAT_10009098 <= (int)(param_3 + 2)) {
    uVar6 = DAT_10009098;
  }
  if ((int)param_3 < -2) {
    uVar6 = 0;
  }
  if ((int)local_4c < (int)uVar6) {
    local_44 = local_4c * (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    do {
      uVar7 = uVar4;
      if ((int)uVar4 < (int)uVar8) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar7 < (int)uVar5 && -1 < (int)(uVar7 | local_4c)) &&
              (int)local_4c < (int)uVar2) && *(int *)(reg_ecx + 0x340) != 0)) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + uVar7 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 1 + uVar7 * 4) = (char)(uVar3 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 2 + uVar7 * 4) = (char)uVar3;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 3 + uVar7 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      local_4c = local_4c + 1;
      local_44 = local_44 + iVar1;
    } while (local_4c != uVar6);
  }
  uVar5 = 0x32;
  if (param_7 != '\0') {
    uVar5 = 1;
  }
  uVar5 = thunk_terror_ui_colour(uVar5);
  local_38 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  recovered_10007940(reg_ecx,reg_edx + 9,param_3 + 6,param_6,
                     CONCAT22(CONCAT11(uVar9,(char)uVar5),local_38),param_4 - 0x10);
  return;
}

#undef DAT_10009094
#undef DAT_10009098
#undef in_stack_ffffffac
#undef local_4c
#undef local_44
#undef local_38
#undef local_34

#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x55eU)))
#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007500
 */

void recovered_10007500(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;

  uVar2 = DAT_10009098;
  uVar1 = DAT_10009094;
  uVar6 = DAT_10009094;
  if ((int)reg_edx < (int)DAT_10009094) {
    uVar6 = reg_edx;
  }
  if ((int)reg_edx < 0) {
    uVar6 = 0;
  }
  local_38 = DAT_10009098;
  if ((int)param_3 < (int)DAT_10009098) {
    local_38 = param_3;
  }
  if ((int)param_3 < 0) {
    local_38 = 0;
  }
  uVar9 = param_4 + reg_edx;
  uVar3 = DAT_10009094;
  if ((int)uVar9 < (int)DAT_10009094) {
    uVar3 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar3 = 0;
  }
  uVar4 = param_3 + 1;
  if ((int)DAT_10009098 <= (int)(param_3 + 1)) {
    uVar4 = DAT_10009098;
  }
  if ((int)param_3 < -1) {
    uVar4 = 0;
  }
  if ((int)local_38 < (int)uVar4) {
    local_40 = local_38 * (uintptr_t)DAT_10009094 * 4;
    iVar10 = (uintptr_t)DAT_10009094 * 4;
    uVar7 = local_38;
    do {
      uVar5 = uVar6;
      if ((int)uVar6 < (int)uVar3) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar5 < (int)uVar1 && -1 < (int)(uVar5 | uVar7)) && (int)uVar7 < (int)uVar2) &&
              *(int *)(reg_ecx + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_40 + uVar5 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_40 + 1 + uVar5 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_40 + 2 + uVar5 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_40 + 3 + uVar5 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      uVar7 = uVar7 + 1;
      local_40 = local_40 + iVar10;
    } while (uVar7 != uVar4);
  }
  uVar4 = param_5 + param_3;
  uVar7 = param_5 + -1 + param_3;
  if ((int)uVar2 <= (int)uVar7) {
    uVar7 = uVar2;
  }
  uVar5 = uVar2;
  if ((int)uVar4 < (int)uVar2) {
    uVar5 = uVar4;
  }
  if ((int)uVar4 < 1) {
    uVar7 = 0;
  }
  if ((int)uVar4 < 0) {
    uVar5 = 0;
  }
  if ((int)uVar7 < (int)uVar5) {
    iVar10 = uVar7 * (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    do {
      uVar4 = uVar6;
      if ((int)uVar6 < (int)uVar3) {
        do {
          if ((((reg_ecx != 0) && (-1 < (int)(uVar4 | uVar7))) && (*(int *)(reg_ecx + 0x340) != 0))
             && (((int)uVar4 < (int)uVar1 && ((int)uVar7 < (int)uVar2)))) {
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar10 + uVar4 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar10 + 1 + uVar4 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar10 + 2 + uVar4 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar10 + 3 + uVar4 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    } while (uVar7 != uVar5);
  }
  uVar4 = reg_edx + 1;
  if ((int)uVar1 <= (int)(reg_edx + 1)) {
    uVar4 = uVar1;
  }
  uVar7 = 0;
  if (-2 < (int)reg_edx) {
    uVar7 = uVar4;
  }
  if ((int)local_38 < (int)uVar5) {
    local_2c = local_38 * (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    uVar4 = local_38;
    do {
      uVar8 = uVar6;
      if ((int)uVar6 < (int)uVar7) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar8 < (int)uVar1 && -1 < (int)(uVar8 | uVar4)) && (int)uVar4 < (int)uVar2) &&
              *(int *)(reg_ecx + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_2c + uVar8 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_2c + 1 + uVar8 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_2c + 2 + uVar8 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_2c + 3 + uVar8 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      uVar4 = uVar4 + 1;
      local_2c = local_2c + (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    } while (uVar4 != uVar5);
    uVar6 = uVar9 - 1;
    if ((int)uVar1 <= (int)(uVar9 - 1)) {
      uVar6 = uVar1;
    }
    uVar4 = 0;
    if (0 < (int)uVar9) {
      uVar4 = uVar6;
    }
    local_30 = local_38 * (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    do {
      uVar6 = uVar4;
      if ((int)uVar4 < (int)uVar3) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar6 < (int)uVar1 && -1 < (int)(uVar6 | local_38)) &&
              (int)local_38 < (int)uVar2) && *(int *)(reg_ecx + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_30 + uVar6 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_30 + 1 + uVar6 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_30 + 2 + uVar6 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_30 + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      local_38 = local_38 + 1;
      local_30 = local_30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar1 * 4;
    } while (local_38 != uVar5);
  }
  return;
}

#undef DAT_10009094
#undef DAT_10009098
#undef local_40
#undef local_38
#undef local_30
#undef local_2c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009094
#define DAT_10009094 (*(int *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(int *)(((uintptr_t)pf_module_state + 0x55eU)))
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
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(uint *)(pf_stack_frame + 72))
#define local_4c (*(int *)(pf_stack_frame + 20))
#define local_2c (*(void * (*)[11])(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007940
 */

void recovered_10007940(int reg_ecx,int reg_edx,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  if ((((reg_ecx != 0) && (param_6 != 0)) && (param_4 != 0)) && (*(int *)(reg_ecx + 0x340) != 0)) {
    thunk_memset(local_2c,0,0x18);
    iVar3 = Ram00280800;
    if (((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
         ((uVar6 = Ram00280808, 0xb < uVar6 &&
          ((uVar6 = Ram00280808, 0x17b < uVar6 &&
           (pcVar4 = (code *)UINT_00280978, pcVar4 != (code *)0x0)))))) &&
        (uVar6 = (*pcVar4)((char *)param_4,0xffffffff,1,
                           (param_5 >> 0x10 & 0xff) * 0x100 + 0xff +
                           ((param_5 >> 8 & 0xff) << 0x10 | param_5 << 0x18),local_2c),
        iVar5 = DAT_10009098, iVar3 = DAT_10009094, uVar6 != 0)) && (local_2c[0] != (void *)0x0)) {
      if (local_20 * 4 <= local_18) {
        uVar6 = param_6;
        if (local_20 < param_6) {
          uVar6 = local_20;
        }
        if ((int)param_6 < 1) {
          uVar6 = local_20;
        }
        if (local_1c != 0) {
          local_4c = DAT_10009094 * (uintptr_t)param_3 * 4 + 3;
          iVar1 = DAT_10009094 * 4;
          uVar8 = 0;
          do {
            if (((-1 < (int)(uVar8 + param_3)) && ((int)(uVar8 + param_3) < iVar5)) && (uVar6 != 0))
            {
              uVar9 = uVar6;
              iVar11 = reg_edx;
              iVar12 = (int)local_2c[0] + 1;
              do {
                if (iVar11 < iVar3 && -1 < iVar11) {
                  iVar13 = local_18 * uVar8;
                  uVar7 = (uint)*(byte *)(iVar12 + 2 + iVar13);
                  if (uVar7 != 0) {
                    iVar10 = *(int *)(reg_ecx + 0x340) + local_4c;
                    if (uVar7 == 0xff) {
                      *(undefined1 *)(iVar10 + -3 + iVar11 * 4) =
                           *(undefined1 *)(iVar12 + -1 + iVar13);
                      *(undefined1 *)(iVar10 + -2 + iVar11 * 4) = *(undefined1 *)(iVar12 + iVar13);
                      *(undefined1 *)(iVar10 + -1 + iVar11 * 4) =
                           *(undefined1 *)(iVar12 + 1 + iVar13);
                    }
                    else {
                      uVar2 = uVar7 ^ 0xff;
                      *(char *)(iVar10 + -3 + iVar11 * 4) =
                           (char)((ulonglong)
                                  (*(byte *)(iVar12 + -1 + iVar13) * uVar7 + 0x7f +
                                  *(byte *)(iVar10 + -3 + iVar11 * 4) * uVar2) * 0x1010102 >> 0x20);
                      *(char *)(iVar10 + -2 + iVar11 * 4) =
                           (char)((ulonglong)
                                  (*(byte *)(iVar12 + iVar13) * uVar7 + 0x7f +
                                  *(byte *)(iVar10 + -2 + iVar11 * 4) * uVar2) * 0x1010102 >> 0x20);
                      *(char *)(iVar10 + -1 + iVar11 * 4) =
                           (char)((ulonglong)
                                  (*(byte *)(iVar12 + 1 + iVar13) * uVar7 + 0x7f +
                                  *(byte *)(iVar10 + -1 + iVar11 * 4) * uVar2) * 0x1010102 >> 0x20);
                    }
                    *(undefined1 *)(iVar10 + iVar11 * 4) = 0xff;
                  }
                }
                iVar11 = iVar11 + 1;
                iVar12 = iVar12 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar8 = uVar8 + 1;
            local_4c = local_4c + iVar1;
          } while (uVar8 < local_1c);
        }
      }
      iVar3 = Ram00280800;
      if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
         ((uVar6 = Ram00280808, 0xb < uVar6 &&
          ((uVar6 = Ram00280808, 0x53 < uVar6 &&
           (pcVar4 = (code *)UINT_00280850, pcVar4 != (code *)0x0)))))) {
        (*pcVar4)(local_2c[0]);
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009094
#undef DAT_10009098
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_20
#undef local_1c
#undef local_18
#undef local_4c
#undef local_2c

#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(uint *)(((uintptr_t)pf_module_state + 0x55eU)))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(int *)(pf_stack_frame + 44))
#define local_38 (*(undefined2 *)(pf_stack_frame + 56))
#define in_stack_ffffffac (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c30
 */

void recovered_10007c30(int reg_ecx,uint reg_edx,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;

  uVar9 = (undefined1)((uint)in_stack_ffffffac >> 0x18);
  uVar3 = thunk_terror_ui_colour(0x2a);
  uVar2 = DAT_10009098;
  uVar6 = DAT_10009094;
  uVar7 = DAT_10009094;
  if ((int)reg_edx < (int)DAT_10009094) {
    uVar7 = reg_edx;
  }
  if ((int)reg_edx < 0) {
    uVar7 = 0;
  }
  local_48 = DAT_10009098;
  if ((int)param_3 < (int)DAT_10009098) {
    local_48 = param_3;
  }
  if ((int)param_3 < 0) {
    local_48 = 0;
  }
  uVar4 = reg_edx + 0x12;
  if ((int)DAT_10009094 <= (int)(reg_edx + 0x12)) {
    uVar4 = DAT_10009094;
  }
  if ((int)reg_edx < -0x12) {
    uVar4 = 0;
  }
  uVar5 = param_3 + 0x12;
  if ((int)DAT_10009098 <= (int)(param_3 + 0x12)) {
    uVar5 = DAT_10009098;
  }
  if ((int)param_3 < -0x12) {
    uVar5 = 0;
  }
  if ((int)local_48 < (int)uVar5) {
    local_44 = local_48 * (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    do {
      uVar8 = uVar7;
      if ((int)uVar7 < (int)uVar4) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar8 < (int)uVar6 && -1 < (int)(uVar8 | local_48)) &&
              (int)local_48 < (int)uVar2) && *(int *)(reg_ecx + 0x340) != 0)) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + uVar8 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 1 + uVar8 * 4) = (char)(uVar3 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + 2 + uVar8 * 4) = (char)uVar3;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 3 + uVar8 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
      }
      local_48 = local_48 + 1;
      local_44 = local_44 + iVar1;
    } while (local_48 != uVar5);
  }
  uVar6 = thunk_terror_ui_colour(3);
  local_38 = CONCAT11((char)(uVar6 >> 8),(char)(uVar6 >> 0x10));
  recovered_10007500(reg_ecx,reg_edx,param_3,0x12,0x12,
                     CONCAT22(CONCAT11(uVar9,(char)uVar6),local_38));
  uVar2 = DAT_10009098;
  uVar6 = DAT_10009094;
  uVar7 = reg_edx + 5;
  if ((int)DAT_10009094 <= (int)(reg_edx + 5)) {
    uVar7 = DAT_10009094;
  }
  if ((int)reg_edx < -5) {
    uVar7 = 0;
  }
  local_48 = param_3 + 5;
  if ((int)DAT_10009098 <= (int)(param_3 + 5)) {
    local_48 = DAT_10009098;
  }
  if ((int)param_3 < -5) {
    local_48 = 0;
  }
  uVar3 = reg_edx + 0xd;
  if ((int)DAT_10009094 <= (int)(reg_edx + 0xd)) {
    uVar3 = DAT_10009094;
  }
  if ((int)reg_edx < -0xd) {
    uVar3 = 0;
  }
  uVar4 = param_3 + 0xd;
  if ((int)DAT_10009098 <= (int)(param_3 + 0xd)) {
    uVar4 = DAT_10009098;
  }
  if ((int)param_3 < -0xd) {
    uVar4 = 0;
  }
  if ((int)local_48 < (int)uVar4) {
    local_44 = local_48 * (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_10009094 * 4;
    do {
      uVar5 = uVar7;
      if ((int)uVar7 < (int)uVar3) {
        do {
          if ((reg_ecx != 0) &&
             ((((int)uVar5 < (int)uVar6 && -1 < (int)(uVar5 | local_48)) &&
              (int)local_48 < (int)uVar2) && *(int *)(reg_ecx + 0x340) != 0)) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_44 + uVar5 * 4) = (char)param_4;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 1 + uVar5 * 4) = PF_PART1(param_4, 1);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 2 + uVar5 * 4) = PF_PART1(param_4, 2);
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_44 + 3 + uVar5 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      local_48 = local_48 + 1;
      local_44 = local_44 + iVar1;
    } while (local_48 != uVar4);
  }
  return;
}

#undef DAT_10009094
#undef DAT_10009098
#undef local_48
#undef local_44
#undef local_38
#undef in_stack_ffffffac

#undef DAT_10009094
#define DAT_10009094 (*(uint *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(int *)(((uintptr_t)pf_module_state + 0x55eU)))
#define in_stack_ffffff8c (*(undefined4 *)(pf_stack_frame + 28))
#define local_60 (*(uint *)(pf_stack_frame + 48))
#define local_5c (*(uint *)(pf_stack_frame + 52))
#define local_54 (*(uint *)(pf_stack_frame + 60))
#define local_3c (*(undefined2 *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f70
 */

void recovered_10007f70(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,char param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 uVar20;

  uVar20 = (undefined1)((uint)in_stack_ffffff8c >> 0x18);
  uVar1 = thunk_terror_ui_colour(0x45);
  iVar9 = DAT_10009098;
  uVar2 = DAT_10009094;
  uVar7 = DAT_10009094;
  if ((int)reg_edx < (int)DAT_10009094) {
    uVar7 = reg_edx;
  }
  if ((int)reg_edx < 0) {
    uVar7 = 0;
  }
  uVar12 = param_3 + reg_edx;
  uVar15 = DAT_10009094;
  if ((int)uVar12 < (int)DAT_10009094) {
    uVar15 = uVar12;
  }
  if ((int)uVar12 < 0) {
    uVar15 = 0;
  }
  iVar17 = 0x1e6;
  if (DAT_10009098 < 0x1e6) {
    iVar17 = DAT_10009098;
  }
  if (0x19e < DAT_10009098) {
    local_5c = DAT_10009094 * 0x678;
    iVar18 = DAT_10009094 * 4;
    iVar8 = 0x19e;
    do {
      uVar12 = uVar7;
      if ((int)uVar7 < (int)uVar15) {
        do {
          if ((((reg_ecx != 0) && (iVar8 < iVar9)) && (-1 < (int)uVar12)) &&
             ((*(int *)(reg_ecx + 0x340) != 0 && ((int)uVar12 < (int)uVar2)))) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_5c + uVar12 * 4) = (char)(uVar1 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_5c + 1 + uVar12 * 4) = (char)(uVar1 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_5c + 2 + uVar12 * 4) = (char)uVar1;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_5c + 3 + uVar12 * 4) = 0xff;
          }
          uVar12 = uVar12 + 1;
        } while (uVar15 != uVar12);
      }
      iVar8 = iVar8 + 1;
      local_5c = local_5c + iVar18;
    } while (iVar8 != iVar17);
  }
  uVar2 = thunk_terror_ui_colour(0x46);
  local_3c = CONCAT11((char)(uVar2 >> 8),(char)(uVar2 >> 0x10));
  recovered_10007500(reg_ecx,reg_edx,0x19e,param_3,0x48,
                     CONCAT22(CONCAT11(uVar20,(char)uVar2),local_3c));
  if (0 < (int)param_3) {
    uVar2 = param_3 - 1;
    uVar7 = 0;
    do {
      iVar9 = uVar7 * 0x47;
      local_5c = 0x1e4;
      if (param_4 != 0) {
        local_5c = 0x1e4 - ((uint)*(byte *)(param_4 + iVar9 / (int)uVar2) * 0x570ac >> 0x13);
      }
      if (param_5 == 0) {
        local_54 = 0x1e4;
      }
      else {
        local_54 = 0x1e4 - ((uint)*(byte *)(param_5 + iVar9 / (int)uVar2) * 0x570ac >> 0x13);
      }
      uVar1 = reg_edx + uVar7;
      if (param_6 == '\0') {
        if (uVar7 != 0) {
          uVar12 = (iVar9 - 0x47U) / uVar2;
          local_60 = 0x1e4;
          uVar15 = 0x1e4;
          if (param_4 != 0) {
            uVar15 = 0x1e4 - ((uint)*(byte *)(param_4 + uVar12) * 0x570ac >> 0x13);
          }
          if (param_5 != 0) {
            local_60 = 0x1e4 - ((uint)*(byte *)(param_5 + uVar12) * 0x570ac >> 0x13);
          }
          if (param_4 != 0) {
            bVar19 = uVar15 < local_5c;
            iVar9 = uVar15 - local_5c;
            if (local_5c <= uVar15) {
              iVar9 = -(uVar15 - local_5c);
            }
            uVar12 = uVar1 - 1;
            uVar5 = thunk_terror_ui_colour(0x23);
            iVar17 = DAT_10009098;
            uVar3 = DAT_10009094;
            iVar18 = iVar9 + 1;
            while( true ) {
              if (((reg_ecx != 0) && (-1 < (int)(uVar12 | uVar15) && *(int *)(reg_ecx + 0x340) != 0)
                  ) && (((int)uVar12 < (int)uVar3 && ((int)uVar15 < iVar17)))) {
                iVar8 = uVar15 * uVar3 + uVar12;
                *(char *)(*(int *)(reg_ecx + 0x340) + iVar8 * 4) = (char)(uVar5 >> 0x10);
                *(char *)(*(int *)(reg_ecx + 0x340) + 1 + iVar8 * 4) = (char)(uVar5 >> 8);
                *(char *)(*(int *)(reg_ecx + 0x340) + 2 + iVar8 * 4) = (char)uVar5;
                *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 3 + iVar8 * 4) = 0xff;
              }
              if ((uVar15 == local_5c) && (uVar12 == uVar1)) break;
              iVar8 = 0;
              if (iVar9 <= iVar18 * 2) {
                iVar8 = iVar9;
              }
              uVar12 = uVar12 + (iVar9 <= iVar18 * 2);
              uVar4 = 0;
              if (iVar18 < 1) {
                uVar4 = bVar19 - 1 | 1;
              }
              uVar15 = uVar15 + uVar4;
              iVar18 = (uint)(iVar18 < 1) + iVar18 + iVar8;
            }
          }
          if (param_5 != 0) {
            bVar19 = local_60 < local_54;
            iVar9 = local_60 - local_54;
            if (local_54 <= local_60) {
              iVar9 = -(local_60 - local_54);
            }
            uVar12 = uVar1 - 1;
            uVar3 = thunk_terror_ui_colour(0x12);
            iVar18 = DAT_10009098;
            uVar15 = DAT_10009094;
            iVar17 = iVar9 + 1;
            while( true ) {
              if ((((reg_ecx != 0) &&
                   (-1 < (int)(uVar12 | local_60) && *(int *)(reg_ecx + 0x340) != 0)) &&
                  ((int)uVar12 < (int)uVar15)) && ((int)local_60 < iVar18)) {
                iVar8 = local_60 * uVar15 + uVar12;
                *(char *)(*(int *)(reg_ecx + 0x340) + iVar8 * 4) = (char)(uVar3 >> 0x10);
                *(char *)(*(int *)(reg_ecx + 0x340) + 1 + iVar8 * 4) = (char)(uVar3 >> 8);
                *(char *)(*(int *)(reg_ecx + 0x340) + 2 + iVar8 * 4) = (char)uVar3;
                *(undefined1 *)(*(int *)(reg_ecx + 0x340) + 3 + iVar8 * 4) = 0xff;
              }
              if ((local_60 == local_54) && (uVar12 == uVar1)) break;
              iVar8 = 0;
              if (iVar9 <= (uintptr_t)iVar17 * 2) {
                iVar8 = iVar9;
              }
              uVar12 = uVar12 + (iVar9 <= (uintptr_t)iVar17 * 2);
              uVar5 = 0;
              if (iVar17 < 1) {
                uVar5 = bVar19 - 1 | 1;
              }
              local_60 = local_60 + uVar5;
              iVar17 = (uint)(iVar17 < 1) + iVar17 + iVar8;
            }
          }
        }
      }
      else if (uVar7 != uVar2 && uVar7 != 0) {
        iVar9 = (iVar9 + -0x47) / (int)(param_3 - 3);
        uVar12 = 0;
        if (param_5 != 0) {
          bVar6 = *(byte *)(param_5 + iVar9);
          if (99 < bVar6) {
            bVar6 = 100;
          }
          uVar12 = (uint)bVar6;
        }
        uVar15 = 0;
        if (param_4 != 0) {
          uVar3 = (uint)*(byte *)(param_4 + iVar9);
          uVar15 = 100 - uVar12;
          if (uVar3 <= 100 - uVar12) {
            uVar15 = uVar3;
          }
        }
        iVar17 = 0x1e5 - (uVar12 * 0x599a2 >> 0x13);
        uVar4 = thunk_terror_ui_colour(0x12);
        iVar9 = DAT_10009098;
        uVar3 = DAT_10009094;
        uVar5 = DAT_10009094;
        if ((int)uVar1 < (int)DAT_10009094) {
          uVar5 = uVar1;
        }
        if ((int)uVar1 < 0) {
          uVar5 = 0;
        }
        uVar16 = uVar1 + 1;
        uVar10 = DAT_10009094;
        if ((int)uVar16 < (int)DAT_10009094) {
          uVar10 = uVar16;
        }
        if ((int)uVar1 < -1) {
          uVar10 = 0;
        }
        iVar18 = 0x1e5;
        if (DAT_10009098 < 0x1e5) {
          iVar18 = DAT_10009098;
        }
        if (iVar17 < iVar18) {
          iVar8 = DAT_10009094 * 4;
          iVar13 = iVar8 * iVar17;
          iVar11 = iVar17;
          do {
            uVar14 = uVar5;
            if ((int)uVar5 < (int)uVar10) {
              do {
                if (((reg_ecx != 0) && (-1 < (int)uVar14)) &&
                   ((*(int *)(reg_ecx + 0x340) != 0 &&
                    (((int)uVar14 < (int)uVar3 && (iVar11 < iVar9)))))) {
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar13 + uVar14 * 4) = (char)(uVar4 >> 0x10)
                  ;
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar13 + 1 + uVar14 * 4) =
                       (char)(uVar4 >> 8);
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar13 + 2 + uVar14 * 4) = (char)uVar4;
                  *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar13 + 3 + uVar14 * 4) = 0xff;
                }
                uVar14 = uVar14 + 1;
              } while (uVar10 != uVar14);
            }
            iVar11 = iVar11 + 1;
            iVar13 = iVar13 + iVar8;
          } while (iVar11 != iVar18);
        }
        local_60 = 0x1e5 - (((uVar15 + uVar12) * 0x46 >> 2) * 0x147b >> 0x11);
        uVar3 = thunk_terror_ui_colour(0x23);
        iVar9 = DAT_10009098;
        uVar12 = DAT_10009094;
        uVar15 = DAT_10009094;
        if ((int)uVar1 < (int)DAT_10009094) {
          uVar15 = uVar1;
        }
        if ((int)uVar1 < 0) {
          uVar15 = 0;
        }
        if ((int)DAT_10009094 <= (int)uVar16) {
          uVar16 = DAT_10009094;
        }
        if ((int)uVar1 < -1) {
          uVar16 = 0;
        }
        if (DAT_10009098 <= iVar17) {
          iVar17 = DAT_10009098;
        }
        if ((int)local_60 < iVar17) {
          iVar18 = DAT_10009094 * 4;
          iVar8 = iVar18 * local_60;
          do {
            uVar1 = uVar15;
            if ((int)uVar15 < (int)uVar16) {
              do {
                if ((((reg_ecx != 0) && (-1 < (int)uVar1)) && (*(int *)(reg_ecx + 0x340) != 0)) &&
                   (((int)uVar1 < (int)uVar12 && ((int)local_60 < iVar9)))) {
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar8 + uVar1 * 4) = (char)(uVar3 >> 0x10);
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar8 + 1 + uVar1 * 4) = (char)(uVar3 >> 8);
                  *(char *)(*(int *)(reg_ecx + 0x340) + iVar8 + 2 + uVar1 * 4) = (char)uVar3;
                  *(undefined1 *)(*(int *)(reg_ecx + 0x340) + iVar8 + 3 + uVar1 * 4) = 0xff;
                }
                uVar1 = uVar1 + 1;
              } while (uVar16 != uVar1);
            }
            local_60 = local_60 + 1;
            iVar8 = iVar8 + iVar18;
          } while (local_60 != iVar17);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  return;
}

#undef DAT_10009094
#undef DAT_10009098
#undef in_stack_ffffff8c
#undef local_60
#undef local_5c
#undef local_54
#undef local_3c

#undef DAT_10009094
#define DAT_10009094 (*(int *)(((uintptr_t)pf_module_state + 0x55aU)))
#undef DAT_10009098
#define DAT_10009098 (*(int *)(((uintptr_t)pf_module_state + 0x55eU)))
#undef str_10008ee7
#define str_10008ee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3adU)))
#define local_4c (*(int *)(pf_stack_frame + 52))
#define local_44 (*(undefined2 *)(pf_stack_frame + 60))
#define local_40 (*(undefined2 *)(pf_stack_frame + 64))
#define local_3c (*(undefined2 *)(pf_stack_frame + 68))
#define in_stack_ffffff9c (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087b0
 */

void recovered_100087b0(int reg_ecx)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;

  uVar12 = (undefined1)((uint)in_stack_ffffff9c >> 0x18);
  pcVar6 = str_10008ee7;
  if (*(char *)(reg_ecx + 0x434) != '\0') {
    pcVar6 = (char *)(reg_ecx + 0x434);
  }
  uVar4 = thunk_terror_ui_colour(2);
  iVar3 = DAT_10009098;
  iVar2 = DAT_10009094;
  iVar7 = 0x46;
  if (DAT_10009094 < 0x46) {
    iVar7 = DAT_10009094;
  }
  iVar9 = 0x140;
  if (DAT_10009094 < 0x140) {
    iVar9 = DAT_10009094;
  }
  iVar5 = 0x19e;
  if (DAT_10009098 < 0x19e) {
    iVar5 = DAT_10009098;
  }
  if (0x188 < DAT_10009098) {
    local_4c = DAT_10009094 * 0x620;
    iVar1 = DAT_10009094 * 4;
    iVar8 = 0x188;
    do {
      iVar10 = iVar7;
      if (0x46 < iVar2) {
        do {
          if ((((iVar8 < iVar3) && (-1 < iVar10)) && (*(int *)(reg_ecx + 0x340) != 0)) &&
             (iVar10 < iVar2)) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + iVar10 * 4) = (char)(uVar4 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + 1 + iVar10 * 4) = (char)(uVar4 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + 2 + iVar10 * 4) = (char)uVar4;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_4c + 3 + iVar10 * 4) = 0xff;
          }
          iVar10 = iVar10 + 1;
        } while (iVar9 != iVar10);
      }
      iVar8 = iVar8 + 1;
      local_4c = local_4c + iVar1;
    } while (iVar8 != iVar5);
  }
  uVar4 = thunk_terror_ui_colour(3);
  local_3c = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  uVar11 = 0;
  recovered_10007500(reg_ecx,0x46,0x188,0xfa,0x16,CONCAT22(CONCAT11(uVar12,(char)uVar4),local_3c));
  uVar4 = thunk_terror_ui_colour(1);
  local_40 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  uVar4 = CONCAT22(CONCAT11(uVar11,(char)uVar4),local_40);
  recovered_10007940(reg_ecx,0x4f,399,(int)pcVar6,uVar4,0xd8);
  uVar12 = (undefined1)(uVar4 >> 0x18);
  uVar4 = thunk_terror_ui_colour(4);
  iVar3 = DAT_10009098;
  iVar2 = DAT_10009094;
  iVar7 = 0x12e;
  if (DAT_10009094 < 0x12e) {
    iVar7 = DAT_10009094;
  }
  iVar9 = 0x13f;
  if (DAT_10009094 < 0x13f) {
    iVar9 = DAT_10009094;
  }
  iVar5 = 0x19d;
  if (DAT_10009098 < 0x19d) {
    iVar5 = DAT_10009098;
  }
  if (0x189 < DAT_10009098) {
    local_4c = DAT_10009094 * 0x624;
    iVar1 = DAT_10009094 * 4;
    iVar8 = 0x189;
    do {
      iVar10 = iVar7;
      if (0x12e < iVar2) {
        do {
          if (((reg_ecx != 0) && (iVar8 < iVar3)) &&
             ((-1 < iVar10 && ((*(int *)(reg_ecx + 0x340) != 0 && (iVar10 < iVar2)))))) {
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + iVar10 * 4) = (char)(uVar4 >> 0x10);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + 1 + iVar10 * 4) = (char)(uVar4 >> 8);
            *(char *)(*(int *)(reg_ecx + 0x340) + local_4c + 2 + iVar10 * 4) = (char)uVar4;
            *(undefined1 *)(*(int *)(reg_ecx + 0x340) + local_4c + 3 + iVar10 * 4) = 0xff;
          }
          iVar10 = iVar10 + 1;
        } while (iVar9 != iVar10);
      }
      iVar8 = iVar8 + 1;
      local_4c = local_4c + iVar1;
    } while (iVar8 != iVar5);
  }
  uVar4 = thunk_terror_ui_colour(1);
  local_44 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  recovered_10007940(reg_ecx,0x133,399,((uintptr_t)pf_module_state + 0x3c3U),CONCAT22(CONCAT11(uVar12,(char)uVar4),local_44),8)
  ;
  return;
}

#undef DAT_10009094
#undef DAT_10009098
#undef str_10008ee7
#undef local_4c
#undef local_44
#undef local_40
#undef local_3c
#undef in_stack_ffffff9c
