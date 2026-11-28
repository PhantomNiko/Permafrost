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
#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028090c
#define UINT_0028090c (*(uint *)(0x28090cU))
#undef UINT_00280968
#define UINT_00280968 (*(uint *)(0x280968U))
#undef str_10009452
#define str_10009452 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_1000947c
#define str_1000947c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b5U)))
#undef str_1000948d
#define str_1000948d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c6U)))
#define local_c90 (*(undefined1 (*)[3216])(pf_stack_frame + 16))
#define local_c7c (*(uint *)(pf_stack_frame + 36))
#define local_c5c (*(int *)(pf_stack_frame + 68))
#define local_c58 (*(int *)(pf_stack_frame + 72))
#define local_c54 (*(int *)(pf_stack_frame + 76))
#define local_c50 (*(byte *)(pf_stack_frame + 80))
#define local_a18 (*(undefined1 (*)[2584])(pf_stack_frame + 648))
#define local_a14 (*(uint *)(pf_stack_frame + 652))
#define local_a10 (*(uint *)(pf_stack_frame + 656))
#define local_9e8 (*(long *)(pf_stack_frame + 696))
#define local_6c8 (*(long *)(pf_stack_frame + 1496))
#define local_6c0 (*(uint *)(pf_stack_frame + 1504))
#define local_6bc (*(int *)(pf_stack_frame + 1508))
#define local_6b8 (*(int *)(pf_stack_frame + 1512))
#define local_6b4 (*(int *)(pf_stack_frame + 1516))
#define local_6b0 (*(uint *)(pf_stack_frame + 1520))
#define local_6a8 (*(undefined4 *)(pf_stack_frame + 1528))
#define local_4e8 (*(long *)(pf_stack_frame + 1976))
#define local_4c4 (*(uint *)(pf_stack_frame + 2012))
#define local_4c0 (*(int *)(pf_stack_frame + 2016))
#define local_4bc (*(char *)(pf_stack_frame + 2020))
#define local_4b8 (*(int *)(pf_stack_frame + 2024))
#define local_4b4 (*(uint *)(pf_stack_frame + 2028))
#define local_478 (*(char *)(pf_stack_frame + 2088))
#define local_474 (*(uint *)(pf_stack_frame + 2092))
#define local_310 (*(undefined1 *)(pf_stack_frame + 2448))
#define local_15c (*(undefined1 (*)[348])(pf_stack_frame + 2884))
#define local_14c (*(char *)(pf_stack_frame + 2900))
#define local_148 (*(undefined1 (*)[328])(pf_stack_frame + 2904))
#define local_a0 (*(undefined1 (*)[160])(pf_stack_frame + 3072))
#define local_90 (*(int *)(pf_stack_frame + 3088))
#define local_88 (*(uint *)(pf_stack_frame + 3096))
#define local_84 (*(uint *)(pf_stack_frame + 3100))
#define local_80 (*(uint *)(pf_stack_frame + 3104))
#define local_78 (*(int *)(pf_stack_frame + 3112))
#define local_74 (*(uint *)(pf_stack_frame + 3116))
#define local_70 (*(uint *)(pf_stack_frame + 3120))
#define local_60 (*(int *)(pf_stack_frame + 3136))
#define local_58 (*(ulong *)(pf_stack_frame + 3144))
#define local_50 (*(ulong *)(pf_stack_frame + 3152))
#define local_48 (*(long *)(pf_stack_frame + 3160))
#define local_40 (*(ulong *)(pf_stack_frame + 3168))
#define local_38 (*(long *)(pf_stack_frame + 3176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e0
 */

long recovered_100005e0(void)

{
  unsigned char pf_stack_frame[3264] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;

  thunk_memset(local_a18,0,0x8b8);
  thunk_pf_app_window_spec(local_c90,str_1000947c,DAT_1000b0a8,DAT_1000b0ac);
  local_c7c = thunk_terror_ui_colour(0);
  local_c50 = local_c50 | 1;
  uVar2 = thunk_terror_ui_window_open(local_a18,local_c90);
  if (uVar2 != 0) {
    local_6c8 = local_9e8;
    if (local_9e8 != 0) {
      DAT_1000b0a8 = local_a14;
      DAT_1000b0ac = local_a10;
      local_6c0 = 0;
      local_6b0 = 0xffffffff;
      local_6a8 = 0xffffffff;
      terror_ui_window_set_custom_menus(local_a18,str_1000948d);
      recovered_10001300((long)local_a18);
      recovered_10002680((long)local_a18);
      terror_ui_window_begin_frame(local_a18);
      local_38 = 0;
      thunk_memset(local_c90,0,0x278);
      uVar10 = local_a10;
      uVar2 = local_a14;
      uVar3 = thunk_terror_ui_window_query(local_a18,local_c90);
      if (uVar3 != 0) {
        do {
          uVar1 = thunk_terror_ui_window_info_requests_close(local_c90);
          if ((uVar1 != '\0') || (uVar3 = thunk_terror_ui_window_sync_buffer(local_a18,local_c90), uVar3 == 0))
          break;
          local_6c8 = local_9e8;
          DAT_1000b0a8 = local_a14;
          DAT_1000b0ac = local_a10;
          if ((local_a14 != uVar2) || (local_a10 != uVar10)) {
            recovered_10002680((long)local_a18);
          }
          if (((local_c5c != 0) && (local_c5c != local_6b4)) &&
             (local_6b4 = local_c5c, local_c58 == 1)) {
            if (local_c54 == 2) {
              recovered_10006e50((long)local_a18);
LAB_10000893:
              recovered_10002680((long)local_a18);
            }
            else if (local_c54 == 1) {
              recovered_10006c90((long)local_a18);
            }
            else if ((local_c54 == 0) && (1 < local_6b0 + 1)) {
              iVar6 = Ram0000000000280800;
              if (((iVar6 == 0x50414d57) &&
                  ((iVar6 = Ram0000000000280804, iVar6 != 0 &&
                   (uVar2 = Ram0000000000280808, 0xb < uVar2)))) &&
                 (uVar2 = Ram0000000000280808, 0x10f < uVar2)) {
                uVar2 = UINT_0028090c;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(local_6b0);
                }
              }
              local_6b0 = 0xffffffff;
              local_310 = 0;
              recovered_10001300((long)local_a18);
              goto LAB_10000893;
            }
          }
          thunk_memset(&local_88,0,0x30);
          uVar4 = terror_ui_window_pointer_state_ex(local_a18,&local_88);
          iVar6 = local_78;
          uVar3 = local_80;
          uVar10 = local_84;
          uVar2 = local_88;
          if (uVar4 != 0) {
            uVar9 = (ulong)local_74;
            iVar5 = local_60 - local_4c0;
            local_4c0 = local_60;
            uVar4 = local_70;
            if (((local_88 & 2) != 0 && iVar5 != 0) &&
               (local_70 - 0x7c < 0xc6 &&
                ((int)local_74 < (int)(DAT_1000b0a8 - 0x10) && 0xf < (int)local_74))) {
              uVar11 = (ulong)local_4c4 + (long)iVar5 * -3;
              uVar8 = (ulong)(local_474 - 0xb);
              if (local_474 < 0xb) {
                uVar8 = 0;
              }
              uVar7 = 0;
              if (0 < (long)uVar11) {
                uVar7 = uVar11;
              }
              uVar7 = uVar7 & 0xffffffff;
              if ((long)uVar8 < (long)uVar11) {
                uVar7 = uVar8;
              }
              if (local_4c4 != (uint)uVar7) {
                local_4c4 = (uint)uVar7;
                local_58 = (ulong)local_70;
                local_50 = uVar9;
                recovered_10002680((long)local_a18);
                uVar4 = (uint)local_58;
                uVar9 = local_50;
              }
            }
            if (local_4bc == '\x01') {
              if ((uVar10 & 1) == 0) {
                local_4bc = '\0';
              }
              else if (uVar4 != local_4b4) {
                local_48 = (ulong)(local_474 - 0xb) << 0x20;
                local_38 = 0;
                if (local_474 < 0xc) {
                  local_48 = 0;
                }
                local_40 = (ulong)local_4c4 | 0xb00000000;
                local_50 = uVar9;
                thunk_terror_ui_scrollbars_layout(0x7c00000010,(ulong)(DAT_1000b0a8 - 0x20) | 0xc600000000,
                                   &local_48,(void *)0x0,local_15c);
                local_48 = (ulong)(local_474 - 0xb) << 0x20;
                if (local_474 < 0xc) {
                  local_48 = local_38;
                }
                local_40 = (ulong)local_4c4 | 0xb00000000;
                local_4b4 = uVar4;
                if (local_14c == '\x01') {
                  iVar5 = thunk_terror_ui_scrollbar_value_from_point(local_148,&local_48,uVar4,local_4b8);
                  uVar9 = (ulong)iVar5;
                  uVar8 = (ulong)(local_474 - 0xb);
                  if (local_474 < 0xb) {
                    uVar8 = 0;
                  }
                  uVar11 = 0;
                  if (0 < (long)uVar9) {
                    uVar11 = uVar9;
                  }
                  uVar11 = uVar11 & 0xffffffff;
                  if ((long)uVar8 < (long)uVar9) {
                    uVar11 = uVar8;
                  }
                  if (local_4c4 != (uint)uVar11) {
                    local_4c4 = (uint)uVar11;
                    recovered_10002680((long)local_a18);
                  }
                }
                uVar9 = local_50;
              }
            }
            if ((((uVar3 & 1) != 0) && ((uVar2 & 2) != 0)) && (iVar6 != local_6b8)) {
              local_6b8 = iVar6;
              local_48 = (ulong)(local_474 - 0xb) << 0x20;
              if (local_474 < 0xc) {
                local_48 = 0;
              }
              local_40 = (ulong)local_4c4 | 0xb00000000;
              thunk_terror_ui_scrollbars_layout(0x7c00000010,(ulong)(DAT_1000b0a8 - 0x20) | 0xc600000000,&local_48,
                                 (void *)0x0,local_15c);
              iVar6 = (int)uVar9;
              if (((local_14c == '\x01') &&
                  ((PF_PART4(local_148, 8) <= (int)uVar4 && PF_PART4(local_148, 4) <= iVar6) &&
                   iVar6 < PF_PART4(local_148, 4) + PF_PART4(local_148, 12))) &&
                 ((int)uVar4 < PF_PART4(local_148, 16) + PF_PART4(local_148, 8))) {
                if ((((int)uVar4 < PF_PART4(local_148, 40) || iVar6 < PF_PART4(local_148, 36)) ||
                     PF_PART4(local_148, 36) + PF_PART4(local_148, 44) <= iVar6) ||
                   (PF_PART4(local_148, 48) + PF_PART4(local_148, 40) <= (int)uVar4)) {
                  if (((PF_PART4(local_148, 56) <= (int)uVar4 && PF_PART4(local_148, 52) <= iVar6) &&
                       iVar6 < PF_PART4(local_148, 52) + PF_PART4(local_148, 60)) &&
                     ((int)uVar4 < PF_PART4(local_148, 64) + PF_PART4(local_148, 56))) {
                    uVar9 = (ulong)(local_474 - 0xb);
                    if (local_474 < 0xb) {
                      uVar9 = 0;
                    }
                    uVar8 = (ulong)local_4c4 + 1;
                    if (uVar9 <= (ulong)local_4c4 + 1) {
                      uVar8 = uVar9;
                    }
                    goto LAB_10000de1;
                  }
                  if ((PF_PART4(local_148, 68) <= iVar6) && (iVar6 < PF_PART4(local_148, 76) + PF_PART4(local_148, 68)))
                  {
                    iVar6 = PF_PART4(local_148, 72);
                    if ((iVar6 <= (int)uVar4) && ((int)uVar4 < iVar6 + PF_PART4(local_148, 80))) {
                      local_4bc = '\x01';
                      local_4b8 = uVar4 - iVar6;
                      local_4b4 = uVar4;
                      goto LAB_10000fb1;
                    }
                  }
                  local_48 = (ulong)(local_474 - 0xb) << 0x20;
                  if (local_474 < 0xc) {
                    local_48 = 0;
                  }
                  local_40 = (ulong)local_4c4 | 0xb00000000;
                  iVar6 = thunk_terror_ui_scrollbar_value_from_point(local_148,&local_48,uVar4,PF_PART4(local_148, 80) / 2);
                  uVar9 = (ulong)iVar6;
                  local_38 = 0;
                  uVar8 = (ulong)(local_474 - 0xb);
                  if (local_474 < 0xb) {
                    uVar8 = 0;
                  }
                  uVar11 = 0;
                  if (0 < (long)uVar9) {
                    uVar11 = uVar9;
                  }
                  uVar11 = uVar11 & 0xffffffff;
                  if ((long)uVar8 < (long)uVar9) {
                    uVar11 = uVar8;
                  }
                  uVar2 = (uint)uVar11;
                  if (local_4c4 == uVar2) goto LAB_10000fb1;
                }
                else {
                  uVar11 = (ulong)local_4c4 - 1;
                  uVar9 = (ulong)(local_474 - 0xb);
                  if (local_474 < 0xb) {
                    uVar9 = 0;
                  }
                  uVar8 = 0;
                  if (0 < (long)uVar11) {
                    uVar8 = uVar11;
                  }
                  uVar8 = uVar8 & 0xffffffff;
                  if ((long)uVar9 < (long)uVar11) {
                    uVar8 = uVar9;
                  }
LAB_10000de1:
                  uVar2 = (uint)uVar8;
                  if (local_4c4 == uVar2) goto LAB_10000fb1;
                }
                local_4c4 = uVar2;
              }
              else {
                uVar2 = iVar6 - 0x5c;
                if (uVar4 - 0x1e < 0xffffffee || uVar2 < 0xffffffb4) {
                  if (uVar4 - 0x34 < 0xffffffee || uVar2 < 0xffffffb4) {
                    if (uVar4 - 0x4a < 0xffffffee || uVar2 < 0xffffffb4) {
                      if (((uVar4 - 0x7c < 0xc6) && (0xf < iVar6)) &&
                         (iVar6 < (int)(DAT_1000b0a8 - 0x10))) {
                        uVar2 = (byte)((char)uVar4 + 0x84) / 0x12 + local_4c4;
                        if (uVar2 < local_474) {
                          local_6b0 = *(uint *)(local_4e8 + (ulong)uVar2 * 0x1b8);
                          goto LAB_10000fb1;
                        }
                      }
                      else {
                        if (((local_6c0 & 0xfffffffe) == 2) &&
                           (uVar4 - 0x188 < 0x16 && iVar6 - 0x46U < 0xfa)) {
                          recovered_10007110((long)local_a18);
                          goto LAB_10000d58;
                        }
                        uVar4 = uVar4 - 0x164;
                        uVar2 = 0;
                        if (((iVar6 - 0xc6U < 0x74 && uVar4 < 0x18) ||
                            (uVar2 = 1, iVar6 - 0x13aU < 0x88 && uVar4 < 0x18)) ||
                           ((uVar2 = 2, iVar6 - 0x1c2U < 0x74 && uVar4 < 0x18 ||
                            ((uVar2 = 3, iVar6 - 0x24aU < 0x74 && uVar4 < 0x18 ||
                             (uVar2 = 4, iVar6 - 0x2beU < 0x74 && uVar4 < 0x18)))))) {
                          local_6c0 = uVar2;
                          goto LAB_10000fb1;
                        }
                      }
                      goto LAB_10000fb9;
                    }
                    recovered_10006e50((long)local_a18);
                  }
                  else {
                    recovered_10006c90((long)local_a18);
                  }
                }
                else {
                  if (local_6b0 + 1 < 2) goto LAB_10000fb9;
                  iVar6 = Ram0000000000280800;
                  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                     ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
                      (uVar2 = Ram0000000000280808, 0x10f < uVar2)))) {
                    uVar2 = UINT_0028090c;
                    if ((code *)(ulong)uVar2 != (code *)0x0) {
                      (*(code *)(ulong)uVar2)(local_6b0);
                    }
                  }
                  local_6b0 = 0xffffffff;
                  local_310 = 0;
LAB_10000d58:
                  recovered_10001300((long)local_a18);
                }
              }
LAB_10000fb1:
              recovered_10002680((long)local_a18);
            }
          }
LAB_10000fb9:
          thunk_memset(local_a0,0,0x18);
          iVar6 = Ram0000000000280800;
          bVar12 = true;
          if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
              (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000280808, 0x16b < uVar2)) {
            uVar2 = UINT_00280968;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              uVar2 = (*(code *)(ulong)uVar2)(local_a0);
              bVar12 = uVar2 == 0;
            }
          }
          if ((local_478 != '\x01') || ((!bVar12 && (0x11 < (uint)(local_90 - local_6bc))))) {
            recovered_10001300((long)local_a18);
            recovered_10002680((long)local_a18);
          }
          thunk_terror_ui_yield_frames(4);
          terror_ui_window_begin_frame(local_a18);
          thunk_memset(local_c90,0,0x278);
          uVar10 = local_a10;
          uVar2 = local_a14;
          uVar3 = thunk_terror_ui_window_query(local_a18,local_c90);
        } while (uVar3 != 0);
      }
      thunk_terror_ui_window_close(local_a18);
      goto LAB_100010b7;
    }
    thunk_terror_ui_window_close(local_a18);
  }
  iVar6 = Ram0000000000280800;
  local_38 = 1;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x2b < uVar2)))) {
    uVar2 = UINT_00280828;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10009452);
    }
  }
LAB_100010b7:
  recovered_100010e0((long)local_a18);
  return local_38;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280828
#undef UINT_0028090c
#undef UINT_00280968
#undef str_10009452
#undef str_1000947c
#undef str_1000948d
#undef local_c90
#undef local_c7c
#undef local_c5c
#undef local_c58
#undef local_c54
#undef local_c50
#undef local_a18
#undef local_a14
#undef local_a10
#undef local_9e8
#undef local_6c8
#undef local_6c0
#undef local_6bc
#undef local_6b8
#undef local_6b4
#undef local_6b0
#undef local_6a8
#undef local_4e8
#undef local_4c4
#undef local_4c0
#undef local_4bc
#undef local_4b8
#undef local_4b4
#undef local_478
#undef local_474
#undef local_310
#undef local_15c
#undef local_14c
#undef local_148
#undef local_a0
#undef local_90
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_74
#undef local_70
#undef local_60
#undef local_58
#undef local_50
#undef local_48
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

void recovered_100010e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x518));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x520));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x530));
    }
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x538));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x540));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x548));
    }
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x5a4) = 0;
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
#undef UINT_002808b8
#define UINT_002808b8 (*(uint *)(0x2808b8U))
#undef UINT_00280904
#define UINT_00280904 (*(uint *)(0x280904U))
#undef UINT_00280908
#define UINT_00280908 (*(uint *)(0x280908U))
#undef UINT_00280910
#define UINT_00280910 (*(uint *)(0x280910U))
#define uStack_d8 (*(undefined4 *)(pf_stack_frame + 600))
#define uStack_d4 (*(undefined8 *)(pf_stack_frame + 604))
#define uStack_c4 (*(undefined8 *)(pf_stack_frame + 620))
#define uStack_b4 (*(undefined8 *)(pf_stack_frame + 636))
#define uStack_a4 (*(undefined8 *)(pf_stack_frame + 652))
#define local_320 (*(undefined1 (*)[800])(pf_stack_frame + 16))
#define local_168 (*(int *)(pf_stack_frame + 456))
#define local_164 (*(byte *)(pf_stack_frame + 460))
#define local_13c (*(ulong *)(pf_stack_frame + 500))
#define local_134 (*(ulong *)(pf_stack_frame + 508))
#define local_12c (*(ulong *)(pf_stack_frame + 516))
#define local_124 (*(ulong *)(pf_stack_frame + 524))
#define local_dc (*(int *)(pf_stack_frame + 596))
#define local_cc (*(undefined8 *)(pf_stack_frame + 612))
#define local_bc (*(undefined8 *)(pf_stack_frame + 628))
#define local_ac (*(undefined8 *)(pf_stack_frame + 644))
#define local_9c (*(undefined4 *)(pf_stack_frame + 660))
#define local_98 (*(long *)(pf_stack_frame + 664))
#define local_90 (*(ulong *)(pf_stack_frame + 672))
#define local_88 (*(long *)(pf_stack_frame + 680))
#define local_80 (*(long *)(pf_stack_frame + 688))
#define local_74 (*(uint *)(pf_stack_frame + 700))
#define local_70 (*(void * *)(pf_stack_frame + 704))
#define local_68 (*(uint * *)(pf_stack_frame + 712))
#define local_5c (*(uint *)(pf_stack_frame + 724))
#define local_58 (*(ulong *)(pf_stack_frame + 728))
#define local_4c (*(uint *)(pf_stack_frame + 740))
#define local_48 (*(void * *)(pf_stack_frame + 744))
#define local_40 (*(int * *)(pf_stack_frame + 752))
#define local_38 (*(void * *)(pf_stack_frame + 760))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

void recovered_10001300(long param_1)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  void *src;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  pf_u112 auVar4;
  pf_u112 auVar5;
  pf_u112 auVar6;
  pf_u112 auVar7;
  pf_u112 auVar8;
  pf_u112 auVar9;
  pf_u112 auVar10;
  pf_u112 auVar11;
  pf_u112 auVar12;
  pf_u112 auVar13;
  pf_u112 auVar14;
  pf_u112 auVar15;
  pf_u112 auVar16;
  pf_u112 auVar17;
  pf_u112 auVar18;
  pf_u112 auVar19;
  pf_u112 auVar20;
  pf_u112 auVar21;
  pf_u112 auVar22;
  pf_u112 auVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  void *pvVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  char *pcVar33;
  int *piVar34;
  long lVar35;
  long lVar36;
  int *piVar37;
  uint *puVar38;
  ulong uVar39;
  long lVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar49;
  int iVar50;
  uint128 auVar48;
  int iVar51;
  uint128 auVar52;
  uint128 auVar53;
  ushort uVar55;
  uint128 auVar54;
  uint128 auVar56;

  local_74 = 0;
  local_5c = 0;
  if (param_1 == 0) {
    return;
  }
  bVar42 = *(int *)(param_1 + 0x368) == -1;
  thunk_memset(&local_dc,0,0x44);
  thunk_memset(&local_168,0,0x8c);
  iVar27 = Ram0000000000280800;
  if (iVar27 != 0x50414d57) {
    return;
  }
  iVar27 = Ram0000000000280804;
  if (iVar27 == 0) {
    return;
  }
  uVar25 = Ram0000000000280808;
  if (uVar25 < 0xc) {
    return;
  }
  uVar25 = Ram0000000000280808;
  if (uVar25 < 0x10c) {
    return;
  }
  uVar25 = UINT_00280908;
  if ((code *)(ulong)uVar25 == (code *)0x0) {
    return;
  }
  uVar25 = (*(code *)(ulong)uVar25)(&local_dc);
  if (uVar25 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x5a0) != 1) ||
     (uVar25 = local_dc - *(int *)(param_1 + 0x3b8), uVar25 == 0)) {
    uVar25 = (uint)*(byte *)(param_1 + 0x5a0);
  }
  iVar27 = Ram0000000000280800;
  if ((((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
      (uVar26 = Ram0000000000280808, 0xb < uVar26)) && (uVar26 = Ram0000000000280808, 0xbb < uVar26)
     ) {
    uVar26 = UINT_002808b8;
    if (((code *)(ulong)uVar26 == (code *)0x0) || (uVar26 = (*(code *)(ulong)uVar26)(), uVar26 == 0)
       ) goto LAB_10001435;
  }
  else {
LAB_10001435:
    uVar26 = 1;
  }
  puVar38 = (uint *)(param_1 + 0x5ac);
  *puVar38 = uVar26;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  recovered_100071c0(param_1);
  if (((*(int *)(param_1 + 0x370) < 0) || (iVar27 = Ram0000000000280800, iVar27 != 0x50414d57)) ||
     ((iVar27 = Ram0000000000280804, iVar27 == 0 ||
      ((uVar26 = Ram0000000000280808, uVar26 < 0xc || (uVar26 = Ram0000000000280808, uVar26 < 0x114)
       ))))) {
LAB_100014c2:
    thunk_memset((void *)(param_1 + 0x3fc),0,0x8c);
  }
  else {
    uVar26 = UINT_00280910;
    if (((code *)(ulong)uVar26 == (code *)0x0) ||
       (uVar26 = (*(code *)(ulong)uVar26)(*(int *)(param_1 + 0x370),&local_168), uVar26 == 0))
    goto LAB_100014c2;
    thunk_memcpy((void *)(param_1 + 0x3fc),&local_168,0x8c);
  }
  iVar27 = Ram0000000000280800;
  if (iVar27 != 0x50414d57) {
    return;
  }
  iVar27 = Ram0000000000280804;
  if (iVar27 == 0) {
    return;
  }
  uVar26 = Ram0000000000280808;
  if (uVar26 < 0xc) {
    return;
  }
  uVar26 = Ram0000000000280808;
  if (uVar26 < 0x108) {
    return;
  }
  uVar26 = UINT_00280904;
  if ((code *)(ulong)uVar26 == (code *)0x0) {
    return;
  }
  uVar26 = (*(code *)(ulong)uVar26)((void *)0x0,0,&local_74);
  if (uVar26 == 0) {
    return;
  }
  if ((int)local_74 < 0) {
    return;
  }
  uVar26 = *(uint *)(param_1 + 0x550);
  if (uVar26 < local_74) {
    uVar28 = 0x10;
    if (uVar26 != 0) {
      uVar28 = uVar26;
    }
    do {
      uVar26 = uVar28;
      uVar28 = uVar26 * 2;
    } while (uVar26 < local_74);
    uVar30 = (ulong)uVar26;
    local_58 = uVar30 * 0x1b8;
    iVar27 = Ram0000000000280800;
    local_68 = puVar38;
    local_4c = uVar25;
    if ((((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
        (uVar25 = Ram0000000000280808, 0xb < uVar25)) &&
       (uVar25 = Ram0000000000280808, 0x4f < uVar25)) {
      uVar25 = UINT_0028084c;
      if ((code *)(ulong)uVar25 == (code *)0x0) goto LAB_100015d2;
      local_38 = (*(code *)(ulong)uVar25)(local_58);
    }
    else {
LAB_100015d2:
      local_38 = (void *)0x0;
    }
    local_70 = (void *)(uVar30 << 4);
    iVar27 = Ram0000000000280800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
       ((uVar25 = Ram0000000000280808, 0xb < uVar25 && (uVar25 = Ram0000000000280808, 0x4f < uVar25)
        ))) {
      uVar25 = UINT_0028084c;
      if ((code *)(ulong)uVar25 == (code *)0x0) goto LAB_1000162d;
      local_48 = (*(code *)(ulong)uVar25)((ulong)local_70);
    }
    else {
LAB_1000162d:
      local_48 = (void *)0x0;
    }
    iVar27 = Ram0000000000280800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
       ((uVar25 = Ram0000000000280808, 0xb < uVar25 && (uVar25 = Ram0000000000280808, 0x4f < uVar25)
        ))) {
      uVar25 = UINT_0028084c;
      if ((code *)(ulong)uVar25 == (code *)0x0) goto LAB_1000168e;
      local_40 = (*(code *)(ulong)uVar25)(uVar30 * 0x1c);
    }
    else {
LAB_1000168e:
      local_40 = (int *)0x0;
    }
    iVar27 = Ram0000000000280800;
    if ((((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
        (uVar25 = Ram0000000000280808, 0xb < uVar25)) &&
       (uVar25 = Ram0000000000280808, 0x4f < uVar25)) {
      uVar25 = UINT_0028084c;
      if ((code *)(ulong)uVar25 == (code *)0x0) goto LAB_100016dd;
      pvVar29 = (*(code *)(ulong)uVar25)(uVar30 * 0x1b4);
    }
    else {
LAB_100016dd:
      pvVar29 = (void *)0x0;
    }
    PF_PART4(auVar48, 0) = -(uint)((int)local_38 == 0 && (int)((ulong)local_38 >> 0x20) == 0);
    PF_PART4(auVar48, 4) = -(uint)((int)((ulong)local_48 >> 0x20) == 0 && (int)local_48 == 0);
    PF_PART4(auVar48, 8) = -(uint)((int)local_40 == 0 && (int)((ulong)local_40 >> 0x20) == 0);
    PF_PART4(auVar48, 12) = -(uint)((int)pvVar29 == 0 && (int)((ulong)pvVar29 >> 0x20) == 0);
    iVar27 = movmskps((int)pvVar29,auVar48);
    if (iVar27 != 0) {
      iVar27 = Ram0000000000280800;
      if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
         ((uVar25 = Ram0000000000280808, 0xb < uVar25 &&
          (uVar25 = Ram0000000000280808, 0x53 < uVar25)))) {
        uVar25 = UINT_00280850;
        if ((code *)(ulong)uVar25 != (code *)0x0) {
          (*(code *)(ulong)uVar25)(local_38);
        }
      }
      iVar27 = Ram0000000000280800;
      if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
         ((uVar25 = Ram0000000000280808, 0xb < uVar25 &&
          (uVar25 = Ram0000000000280808, 0x53 < uVar25)))) {
        uVar25 = UINT_00280850;
        if ((code *)(ulong)uVar25 != (code *)0x0) {
          (*(code *)(ulong)uVar25)(local_48);
        }
      }
      iVar27 = Ram0000000000280800;
      if ((((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
          (uVar25 = Ram0000000000280808, 0xb < uVar25)) &&
         (uVar25 = Ram0000000000280808, 0x53 < uVar25)) {
        uVar25 = UINT_00280850;
        if ((code *)(ulong)uVar25 != (code *)0x0) {
          (*(code *)(ulong)uVar25)(local_40);
        }
      }
      iVar27 = Ram0000000000280800;
      if (iVar27 != 0x50414d57) {
        return;
      }
      iVar27 = Ram0000000000280804;
      if (iVar27 == 0) {
        return;
      }
      uVar25 = Ram0000000000280808;
      if (uVar25 < 0xc) {
        return;
      }
      uVar25 = Ram0000000000280808;
      if (uVar25 < 0x54) {
        return;
      }
      uVar25 = UINT_00280850;
      if ((code *)(ulong)uVar25 == (code *)0x0) {
        return;
      }
      (*(code *)(ulong)uVar25)(pvVar29);
      return;
    }
    thunk_memset(local_38,0,local_58);
    thunk_memset(local_48,0,(ulong)local_70);
    thunk_memset(local_40,0,uVar30 * 0x1c);
    if ((ulong)*(uint *)(param_1 + 0x550) != 0) {
      thunk_memcpy(local_38,*(void **)(param_1 + 0x530),
                         (ulong)*(uint *)(param_1 + 0x550) * 0x1b8);
      thunk_memcpy(local_48,*(void **)(param_1 + 0x538),(ulong)*(uint *)(param_1 + 0x550) << 4
                        );
      thunk_memcpy(local_40,*(void **)(param_1 + 0x540),
                         (ulong)*(uint *)(param_1 + 0x550) * 0x1c);
    }
    iVar27 = Ram0000000000280800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
       ((uVar25 = Ram0000000000280808, 0xb < uVar25 && (uVar25 = Ram0000000000280808, 0x53 < uVar25)
        ))) {
      uVar25 = UINT_00280850;
      if ((code *)(ulong)uVar25 != (code *)0x0) {
        (*(code *)(ulong)uVar25)(*(void **)(param_1 + 0x530));
      }
    }
    iVar27 = Ram0000000000280800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
       ((uVar25 = Ram0000000000280808, 0xb < uVar25 && (uVar25 = Ram0000000000280808, 0x53 < uVar25)
        ))) {
      uVar25 = UINT_00280850;
      if ((code *)(ulong)uVar25 != (code *)0x0) {
        (*(code *)(ulong)uVar25)(*(void **)(param_1 + 0x538));
      }
    }
    iVar27 = Ram0000000000280800;
    if ((((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
        (uVar25 = Ram0000000000280808, 0xb < uVar25)) &&
       (uVar25 = Ram0000000000280808, 0x53 < uVar25)) {
      uVar25 = UINT_00280850;
      if ((code *)(ulong)uVar25 != (code *)0x0) {
        (*(code *)(ulong)uVar25)(*(void **)(param_1 + 0x540));
      }
    }
    iVar27 = Ram0000000000280800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram0000000000280804, iVar27 != 0)) &&
       ((uVar25 = Ram0000000000280808, 0xb < uVar25 && (uVar25 = Ram0000000000280808, 0x53 < uVar25)
        ))) {
      uVar25 = UINT_00280850;
      if ((code *)(ulong)uVar25 != (code *)0x0) {
        (*(code *)(ulong)uVar25)(*(void **)(param_1 + 0x548));
      }
    }
    *(void **)(param_1 + 0x530) = local_38;
    *(void **)(param_1 + 0x538) = local_48;
    *(int **)(param_1 + 0x540) = local_40;
    *(void **)(param_1 + 0x548) = pvVar29;
    *(uint *)(param_1 + 0x550) = uVar26;
    puVar38 = local_68;
    uVar25 = local_4c;
  }
  else {
    pvVar29 = *(void **)(param_1 + 0x548);
  }
  iVar27 = Ram0000000000280800;
  if (iVar27 != 0x50414d57) {
    return;
  }
  iVar27 = Ram0000000000280804;
  if (iVar27 == 0) {
    return;
  }
  uVar28 = Ram0000000000280808;
  if (uVar28 < 0xc) {
    return;
  }
  uVar28 = Ram0000000000280808;
  if (uVar28 < 0x108) {
    return;
  }
  uVar28 = UINT_00280904;
  if ((code *)(ulong)uVar28 == (code *)0x0) {
    return;
  }
  local_70 = pvVar29;
  uVar28 = (*(code *)(ulong)uVar28)(pvVar29,uVar26,&local_5c);
  uVar26 = local_5c;
  if (uVar28 == 0) {
    return;
  }
  uVar30 = (ulong)local_5c;
  uVar28 = *(uint *)(param_1 + 0x550);
  if (uVar28 < local_5c) {
    return;
  }
  local_68 = puVar38;
  local_4c = uVar25;
  if (uVar28 != 0) {
    uVar39 = 0;
    do {
      lVar40 = *(long *)(param_1 + 0x540);
      lVar36 = uVar39 * 0x1c;
      if (*(char *)(lVar40 + 0x18 + lVar36) != '\0') {
        if (uVar26 != 0) {
          lVar35 = 0;
          do {
            if (*(int *)((long)local_70 + lVar35) == *(int *)(lVar40 + lVar36)) goto LAB_10001ac2;
            lVar35 = lVar35 + 0x1b4;
          } while (uVar30 * 0x1b4 != lVar35);
        }
        thunk_memset((void *)(lVar40 + lVar36),0,0x1c);
        uVar28 = *(uint *)(param_1 + 0x550);
      }
LAB_10001ac2:
      uVar39 = uVar39 + 1;
    } while (uVar39 < uVar28);
  }
  if (local_5c == 0) {
    local_68 = (uint *)0x0;
    local_58 = 0;
    local_38 = (void *)0x0;
  }
  else {
    local_90 = (ulong)(local_4c + (local_4c == 0));
    local_48 = (void *)0x0;
    local_80 = 0;
    local_88 = 0;
    do {
      pvVar29 = local_70;
      if ((*(char *)(param_1 + 0x5a0) == '\x01') &&
         (uVar30 = (ulong)*(uint *)(param_1 + 0x550), uVar30 != 0)) {
        pcVar33 = *(char **)(param_1 + 0x538);
        bVar41 = true;
        uVar39 = 1;
        do {
          if ((*pcVar33 == '\x01') &&
             (*(int *)(pcVar33 + 4) == *(int *)((long)local_70 + (long)local_48 * 0x1b4))) {
            if (bVar41) {
              local_38 = (void *)(ulong)(uint)(*(int *)((long)local_70 +
                                                       (long)local_48 * 0x1b4 + 0x14) -
                                              *(int *)(pcVar33 + 0xc));
              goto LAB_10001c56;
            }
            break;
          }
          bVar41 = uVar39 < uVar30;
          pcVar33 = pcVar33 + 0x10;
          bVar43 = uVar39 != uVar30;
          uVar39 = uVar39 + 1;
        } while (bVar43);
      }
      local_38 = (void *)0x0;
LAB_10001c56:
      local_98 = (long)local_48 * 0x1b8;
      lVar40 = (long)local_48 * 0x1b4;
      local_40 = (int *)((long)local_70 + lVar40);
      thunk_memcpy((void *)(*(long *)(param_1 + 0x530) + local_98),local_40,0x1b4);
      iVar27 = *(int *)((long)pvVar29 + lVar40);
      uVar30 = (ulong)*(uint *)(param_1 + 0x550);
      if (uVar30 == 0) {
LAB_10001cdb:
        piVar37 = *(int **)(param_1 + 0x540);
      }
      else {
        piVar31 = (int *)0x0;
        piVar37 = *(int **)(param_1 + 0x540);
        do {
          piVar34 = piVar37;
          if ((char)piVar37[6] != '\0') {
            if (*piVar37 == iVar27) {
              local_58 = CONCAT44(PF_PART4(local_58, 4),iVar27);
              goto LAB_10001cfd;
            }
            piVar34 = (int *)0x0;
          }
          if (piVar31 == (int *)0x0) {
            piVar31 = piVar34;
          }
          piVar37 = piVar37 + 7;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
        piVar37 = piVar31;
        if (piVar31 == (int *)0x0) goto LAB_10001cdb;
      }
      thunk_memset(piVar37,0,0x1c);
      *piVar37 = iVar27;
      local_58 = CONCAT44(PF_PART4(local_58, 4),*local_40);
LAB_10001cfd:
      uVar39 = (*local_68 + (uint)(*local_68 == 0)) * local_90;
      uVar30 = (long)local_38 * 1000;
      if ((uVar30 | uVar39) >> 0x20 == 0) {
        uVar30 = (uVar30 & 0xffffffff) / (uVar39 & 0xffffffff);
      }
      else {
        uVar30 = uVar30 / uVar39;
      }
      if (999 < uVar30) {
        uVar30 = 1000;
      }
      if (iVar27 != (int)local_58) {
        thunk_memset(piVar37,0,0x1c);
        *piVar37 = (int)local_58;
      }
      bVar24 = *(byte *)((long)piVar37 + 0x19);
      *(short *)((long)piVar37 + (ulong)bVar24 * 2 + 4) = (short)uVar30;
      *(byte *)((long)piVar37 + 0x19) = bVar24 + ((byte)((bVar24 + 1) / 5) & 0xfe) * -5 + '\x01';
      bVar24 = *(byte *)(piVar37 + 6);
      if (bVar24 < 10) {
        bVar24 = bVar24 + 1;
        *(byte *)(piVar37 + 6) = bVar24;
      }
      uVar25 = (uint)bVar24;
      if (bVar24 < 8) {
        uVar30 = 0;
        uVar39 = 0;
LAB_10001e0b:
        do {
          uVar39 = (ulong)((int)uVar39 + (uint)*(ushort *)((long)piVar37 + uVar30 * 2 + 4));
          uVar30 = uVar30 + 1;
        } while (bVar24 != uVar30);
      }
      else {
        uVar30 = (ulong)(uVar25 & 0xf8);
        iVar27 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        uVar39 = 0;
        iVar47 = 0;
        iVar49 = 0;
        iVar50 = 0;
        iVar51 = 0;
        do {
          uVar32 = *(ulong *)((long)piVar37 + uVar39 + 4);
          uVar2 = *(ulong *)((long)piVar37 + uVar39 + 0xc);
          PF_PART4(auVar6, 8) = 0;
          PF_PART8(auVar6, 0) = uVar32;
          PF_PART2(auVar6, 12) = (short)(uVar32 >> 0x30);
          PF_PART2(auVar10, 8) = (short)(uVar32 >> 0x20);
          PF_PART8(auVar10, 0) = uVar32;
          PF_PART4(auVar10, 10) = PF_PART4(auVar6, 10);
          PF_PART8(auVar16, 6) = 0;
          PF_PART6(auVar16, 0) = PF_PART6(auVar10, 8);
          PF_PART2(auVar14, 4) = (short)(uVar32 >> 0x10);
          PF_PART4(auVar14, 0) = (uint)uVar32;
          PF_PART8(auVar14, 6) = SUB148(auVar16 << 0x40,6);
          iVar27 = iVar27 + ((uint)uVar32 & 0xffff);
          iVar44 = iVar44 + PF_PART4(auVar14, 4);
          iVar45 = iVar45 + PF_PART4(auVar10, 8);
          iVar46 = iVar46 + (PF_PART4(auVar6, 10) >> 0x10);
          PF_PART4(auVar7, 8) = 0;
          PF_PART8(auVar7, 0) = uVar2;
          PF_PART2(auVar7, 12) = (short)(uVar2 >> 0x30);
          PF_PART2(auVar11, 8) = (short)(uVar2 >> 0x20);
          PF_PART8(auVar11, 0) = uVar2;
          PF_PART4(auVar11, 10) = PF_PART4(auVar7, 10);
          PF_PART8(auVar17, 6) = 0;
          PF_PART6(auVar17, 0) = PF_PART6(auVar11, 8);
          PF_PART2(auVar15, 4) = (short)(uVar2 >> 0x10);
          PF_PART4(auVar15, 0) = (uint)uVar2;
          PF_PART8(auVar15, 6) = SUB148(auVar17 << 0x40,6);
          iVar47 = iVar47 + ((uint)uVar2 & 0xffff);
          iVar49 = iVar49 + PF_PART4(auVar15, 4);
          iVar50 = iVar50 + PF_PART4(auVar11, 8);
          iVar51 = iVar51 + (PF_PART4(auVar7, 10) >> 0x10);
          uVar39 = uVar39 + 0x10;
        } while ((uVar25 * 2 & 0xfffffff0) != uVar39);
        uVar39 = (ulong)(uint)(iVar51 + iVar46 + iVar49 + iVar44 + iVar50 + iVar45 + iVar47 + iVar27
                              );
        if ((uVar25 & 0xf8) != uVar25) goto LAB_10001e0b;
      }
      *(int *)(*(long *)(param_1 + 0x530) + 0x1b4 + local_98) = (int)(uVar39 / bVar24);
      uVar25 = local_40[1];
      uVar28 = uVar25 >> 0x10 & 0xff;
      uVar26 = uVar25 >> 2 & 1;
      if (uVar28 != 0) {
        uVar26 = uVar28;
      }
      *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + uVar26;
      iVar27 = local_40[2] - uVar26;
      if ((uint)local_40[2] < uVar26) {
        iVar27 = 0;
      }
      *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + iVar27;
      if ((uVar25 & 1) == 0) {
        pvVar29 = local_38;
        local_38 = (void *)0;
      }
      else {
        pvVar29 = (void *)0x0;
      }
      local_88 = local_88 + (long)local_38;
      local_80 = local_80 + (long)pvVar29;
      bVar42 = (bool)(bVar42 | *local_40 == *(int *)(param_1 + 0x368));
      local_48 = (void *)((long)local_48 + 1);
      local_38 = (void *)(ulong)local_5c;
    } while (local_48 < local_38);
    local_58 = local_80 * 1000;
    local_68 = (uint *)(local_88 * 1000);
  }
  uVar25 = (uint)local_38;
  *(uint *)(param_1 + 0x5a4) = uVar25;
  uVar26 = uVar25 - 0xb;
  if (uVar25 < 0xb) {
    uVar26 = 0;
  }
  if (uVar26 < *(uint *)(param_1 + 0x554)) {
    *(uint *)(param_1 + 0x554) = uVar26;
  }
  pvVar29 = *(void **)(param_1 + 0x530);
  if (1 < uVar25 && pvVar29 != (void *)0x0) {
    local_40 = (int *)((ulong)local_38 >> 1);
    do {
      if ((int)local_40 == 0) {
        uVar25 = (int)local_38 - 1;
        local_38 = (void *)(ulong)uVar25;
        if (uVar25 == 0) break;
        lVar40 = (long)local_38 * 0x1b8;
        src = (void *)((long)pvVar29 + lVar40);
        thunk_memcpy(local_320,src,0x1b4);
        local_48 = (void *)CONCAT44(PF_PART4(local_48, 4),*(undefined4 *)((long)pvVar29 + lVar40 + 0x1b4));
        thunk_memcpy(src,pvVar29,0x1b8);
        local_40 = (int *)0x0;
      }
      else {
        local_40 = (int *)(ulong)((int)local_40 - 1);
        lVar40 = (long)local_40 * 0x1b8;
        thunk_memcpy(local_320,(void *)((long)pvVar29 + lVar40),0x1b4);
        local_48 = (void *)CONCAT44(PF_PART4(local_48, 4),*(undefined4 *)((long)pvVar29 + lVar40 + 0x1b4));
      }
      uVar25 = (uint)((ulong)local_38 >> 1) & 0x7fffffff;
      piVar37 = (int *)((ulong)local_40 & 0xffffffff);
      if ((uint)local_40 < uVar25) {
        piVar31 = local_40;
        do {
          uVar28 = (int)(uintptr_t)piVar31 * 2 + 1;
          piVar37 = (int *)(ulong)uVar28;
          uVar26 = (int)(uintptr_t)piVar31 * 2 + 2;
          if (uVar26 < (uint)local_38) {
            if (*(uint *)((long)pvVar29 + (long)(uintptr_t)piVar37 * 0x1b8 + 0x1b4) <=
                *(uint *)((long)pvVar29 + (ulong)uVar26 * 0x1b8 + 0x1b4)) {
              uVar26 = uVar28;
            }
            piVar37 = (int *)(ulong)uVar26;
          }
          if ((uint)local_48 <= *(uint *)((long)pvVar29 + (long)(uintptr_t)piVar37 * 0x1b8 + 0x1b4)) {
            piVar37 = (int *)((ulong)piVar31 & 0xffffffff);
            break;
          }
          thunk_memcpy((void *)(((ulong)piVar31 & 0xffffffff) * 0x1b8 + (long)pvVar29),
                             (void *)((long)(uintptr_t)piVar37 * 0x1b8 + (long)pvVar29),0x1b8);
          piVar31 = piVar37;
        } while ((uint)piVar37 < uVar25);
      }
      thunk_memcpy((void *)((long)pvVar29 + (long)(uintptr_t)piVar37 * 0x1b8),local_320,0x1b4);
      *(uint *)((long)pvVar29 + (long)(uintptr_t)piVar37 * 0x1b8 + 0x1b4) = (uint)local_48;
    } while( true );
  }
  if (!bVar42) {
    *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x708) = 0;
  }
  piVar37 = (int *)(param_1 + 0x568);
  uVar39 = (ulong)(local_4c + (local_4c == 0));
  uVar30 = (*(int *)(param_1 + 0x5ac) + (uint)(*(int *)(param_1 + 0x5ac) == 0)) * uVar39;
  if ((local_58 | uVar30) >> 0x20 == 0) {
    uVar30 = (local_58 & 0xffffffff) / (uVar30 & 0xffffffff);
  }
  else {
    uVar30 = local_58 / uVar30;
  }
  uVar32 = 1000;
  if (uVar30 < 1000) {
    uVar32 = uVar30;
  }
  if (*piVar37 != 1) {
    thunk_memset(piVar37,0,0x1c);
    *piVar37 = 1;
  }
  bVar24 = *(byte *)(param_1 + 0x581);
  *(short *)(param_1 + 0x56c + (ulong)bVar24 * 2) = (short)uVar32;
  *(byte *)(param_1 + 0x581) = bVar24 + ((byte)((bVar24 + 1) / 5) & 0xfe) * -5 + '\x01';
  bVar24 = *(byte *)(param_1 + 0x580);
  if (bVar24 < 10) {
    bVar24 = bVar24 + 1;
    *(byte *)(param_1 + 0x580) = bVar24;
  }
  uVar25 = (uint)bVar24;
  if (bVar24 < 8) {
    uVar30 = 0;
    uVar26 = 0;
LAB_10002130:
    do {
      uVar26 = uVar26 + *(ushort *)(param_1 + 0x56c + uVar30 * 2);
      uVar30 = uVar30 + 1;
    } while (bVar24 != uVar30);
  }
  else {
    uVar30 = (ulong)(uVar25 & 0xf8);
    uVar32 = 0;
    iVar27 = 0;
    iVar44 = 0;
    iVar45 = 0;
    iVar46 = 0;
    auVar48 = (uint128)0x0;
    do {
      uVar2 = *(ulong *)(param_1 + 0x56c + uVar32);
      uVar1 = *(ulong *)(param_1 + 0x574 + uVar32);
      uVar55 = (ushort)(uVar2 >> 0x30);
      PF_PART4(auVar20, 8) = 0;
      PF_PART8(auVar20, 0) = uVar2;
      PF_PART2(auVar20, 12) = uVar55;
      PF_PART2(auVar22, 8) = (short)(uVar2 >> 0x20);
      PF_PART8(auVar22, 0) = uVar2;
      PF_PART4(auVar22, 10) = PF_PART4(auVar20, 10);
      PF_PART4(auVar54, 0) = (uint)uVar2;
      PF_PART2(auVar54, 4) = (short)(uVar2 >> 0x10);
      PF_PART10(auVar54, 6) = (unkuint10)PF_PART6(auVar22, 8) << 0x10;
      PF_PART4(auVar52, 0) = PF_PART4(auVar48, 0) + (PF_PART4(auVar54, 0) & 0xffff);
      PF_PART4(auVar52, 4) = PF_PART4(auVar48, 4) + PF_PART4(auVar54, 4);
      PF_PART4(auVar52, 8) = PF_PART4(auVar48, 8) + PF_PART4(auVar22, 8);
      PF_PART4(auVar52, 12) = PF_PART4(auVar48, 12) + (uint)uVar55;
      uVar55 = (ushort)(uVar1 >> 0x30);
      PF_PART4(auVar21, 8) = 0;
      PF_PART8(auVar21, 0) = uVar1;
      PF_PART2(auVar21, 12) = uVar55;
      PF_PART2(auVar23, 8) = (short)(uVar1 >> 0x20);
      PF_PART8(auVar23, 0) = uVar1;
      PF_PART4(auVar23, 10) = PF_PART4(auVar21, 10);
      PF_PART4(auVar56, 0) = (uint)uVar1;
      PF_PART2(auVar56, 4) = (short)(uVar1 >> 0x10);
      PF_PART10(auVar56, 6) = (unkuint10)PF_PART6(auVar23, 8) << 0x10;
      iVar27 = iVar27 + (PF_PART4(auVar56, 0) & 0xffff);
      iVar44 = iVar44 + PF_PART4(auVar56, 4);
      iVar45 = iVar45 + PF_PART4(auVar23, 8);
      iVar46 = iVar46 + (uint)uVar55;
      uVar32 = uVar32 + 0x10;
      auVar48 = auVar52;
    } while ((uVar25 * 2 & 0xfffffff0) != uVar32);
    uVar26 = iVar46 + PF_PART4(auVar52, 12) + iVar44 + PF_PART4(auVar52, 4) +
             iVar45 + PF_PART4(auVar52, 8) + iVar27 + PF_PART4(auVar52, 0);
    if ((uVar25 & 0xf8) != uVar25) goto LAB_10002130;
  }
  *(uint *)(param_1 + 0x5b8) = uVar26 / uVar25;
  piVar37 = (int *)(param_1 + 0x584);
  uVar39 = (*(int *)(param_1 + 0x5ac) + (uint)(*(int *)(param_1 + 0x5ac) == 0)) * uVar39;
  if (((ulong)local_68 | uVar39) >> 0x20 == 0) {
    uVar39 = ((ulong)local_68 & 0xffffffff) / (uVar39 & 0xffffffff);
  }
  else {
    uVar39 = (ulong)local_68 / uVar39;
  }
  uVar30 = 1000;
  if (uVar39 < 1000) {
    uVar30 = uVar39;
  }
  if (*piVar37 != 0) {
    thunk_memset(piVar37,0,0x1c);
    *piVar37 = 0;
  }
  bVar24 = *(byte *)(param_1 + 0x59d);
  *(short *)(param_1 + 0x588 + (ulong)bVar24 * 2) = (short)uVar30;
  *(byte *)(param_1 + 0x59d) = bVar24 + ((byte)((bVar24 + 1) / 5) & 0xfe) * -5 + '\x01';
  bVar24 = *(byte *)(param_1 + 0x59c);
  if (bVar24 < 10) {
    bVar24 = bVar24 + 1;
    *(byte *)(param_1 + 0x59c) = bVar24;
  }
  uVar25 = (uint)bVar24;
  if (bVar24 < 8) {
    uVar30 = 0;
    uVar26 = 0;
  }
  else {
    uVar30 = (ulong)(uVar25 & 0xf8);
    uVar39 = 0;
    iVar27 = 0;
    iVar44 = 0;
    iVar45 = 0;
    iVar46 = 0;
    auVar48 = (uint128)0x0;
    do {
      uVar32 = *(ulong *)(param_1 + 0x588 + uVar39);
      uVar2 = *(ulong *)(param_1 + 0x590 + uVar39);
      PF_PART4(auVar4, 8) = 0;
      PF_PART8(auVar4, 0) = uVar32;
      PF_PART2(auVar4, 12) = (short)(uVar32 >> 0x30);
      PF_PART2(auVar8, 8) = (short)(uVar32 >> 0x20);
      PF_PART8(auVar8, 0) = uVar32;
      PF_PART4(auVar8, 10) = PF_PART4(auVar4, 10);
      PF_PART8(auVar18, 6) = 0;
      PF_PART6(auVar18, 0) = PF_PART6(auVar8, 8);
      PF_PART2(auVar12, 4) = (short)(uVar32 >> 0x10);
      PF_PART4(auVar12, 0) = (uint)uVar32;
      PF_PART8(auVar12, 6) = SUB148(auVar18 << 0x40,6);
      PF_PART4(auVar53, 0) = PF_PART4(auVar48, 0) + ((uint)uVar32 & 0xffff);
      PF_PART4(auVar53, 4) = PF_PART4(auVar48, 4) + PF_PART4(auVar12, 4);
      PF_PART4(auVar53, 8) = PF_PART4(auVar48, 8) + PF_PART4(auVar8, 8);
      PF_PART4(auVar53, 12) = PF_PART4(auVar48, 12) + (PF_PART4(auVar4, 10) >> 0x10);
      PF_PART4(auVar5, 8) = 0;
      PF_PART8(auVar5, 0) = uVar2;
      PF_PART2(auVar5, 12) = (short)(uVar2 >> 0x30);
      PF_PART2(auVar9, 8) = (short)(uVar2 >> 0x20);
      PF_PART8(auVar9, 0) = uVar2;
      PF_PART4(auVar9, 10) = PF_PART4(auVar5, 10);
      PF_PART8(auVar19, 6) = 0;
      PF_PART6(auVar19, 0) = PF_PART6(auVar9, 8);
      PF_PART2(auVar13, 4) = (short)(uVar2 >> 0x10);
      PF_PART4(auVar13, 0) = (uint)uVar2;
      PF_PART8(auVar13, 6) = SUB148(auVar19 << 0x40,6);
      iVar27 = iVar27 + ((uint)uVar2 & 0xffff);
      iVar44 = iVar44 + PF_PART4(auVar13, 4);
      iVar45 = iVar45 + PF_PART4(auVar9, 8);
      iVar46 = iVar46 + (PF_PART4(auVar5, 10) >> 0x10);
      uVar39 = uVar39 + 0x10;
      auVar48 = auVar53;
    } while ((uVar25 * 2 & 0xfffffff0) != uVar39);
    uVar26 = iVar46 + PF_PART4(auVar53, 12) + iVar44 + PF_PART4(auVar53, 4) +
             iVar45 + PF_PART4(auVar53, 8) + iVar27 + PF_PART4(auVar53, 0);
    if ((uVar25 & 0xf8) == uVar25) goto LAB_10002273;
  }
  do {
    uVar26 = uVar26 + *(ushort *)(param_1 + 0x588 + uVar30 * 2);
    uVar30 = uVar30 + 1;
  } while (bVar24 != uVar30);
LAB_10002273:
  uVar25 = 1000 - *(int *)(param_1 + 0x5b8);
  if (uVar26 / bVar24 < uVar25) {
    uVar25 = uVar26 / bVar24;
  }
  *(uint *)(param_1 + 0x5bc) = uVar25;
  *(uint *)(param_1 + 0x5c0) = 1000 - (uVar25 + *(int *)(param_1 + 0x5b8));
  thunk_memmove((void *)(param_1 + 0x5e8),(void *)(param_1 + 0x5e9),0x47);
  thunk_memmove((void *)(param_1 + 0x630),(void *)(param_1 + 0x631),0x47);
  *(char *)(param_1 + 0x62f) = (char)(*(uint *)(param_1 + 0x5b8) / 10);
  *(char *)(param_1 + 0x677) = (char)(*(uint *)(param_1 + 0x5bc) / 10);
  if (((*(char *)(param_1 + 0x5a1) == '\x01') && (local_4c != 0)) &&
     (local_168 == *(int *)(param_1 + 0x488))) {
    lVar40 = 0;
    if (*(ulong *)(param_1 + 0x4b4) <= local_13c) {
      lVar40 = local_13c - *(ulong *)(param_1 + 0x4b4);
    }
    uVar30 = lVar40 * 0x12;
    uVar39 = (ulong)local_4c;
    if (uVar30 >> 0x20 == 0) {
      uVar30 = uVar30 & 0xffffffff;
    }
    uVar32 = 0xffffffff;
    if (uVar30 / uVar39 < 0xffffffff) {
      uVar32 = uVar30 / uVar39;
    }
    *(int *)(param_1 + 0x5c4) = (int)uVar32;
    lVar40 = 0;
    if (*(ulong *)(param_1 + 0x4bc) <= local_134) {
      lVar40 = local_134 - *(ulong *)(param_1 + 0x4bc);
    }
    uVar30 = lVar40 * 0x12;
    if (uVar30 >> 0x20 == 0) {
      uVar30 = uVar30 & 0xffffffff;
    }
    uVar32 = 0xffffffff;
    if (uVar30 / uVar39 < 0xffffffff) {
      uVar32 = uVar30 / uVar39;
    }
    *(int *)(param_1 + 0x5c8) = (int)uVar32;
    lVar40 = 0;
    if (*(ulong *)(param_1 + 0x4c4) <= local_12c) {
      lVar40 = local_12c - *(ulong *)(param_1 + 0x4c4);
    }
    uVar30 = lVar40 * 0x12;
    if (uVar30 >> 0x20 == 0) {
      uVar30 = uVar30 & 0xffffffff;
    }
    uVar30 = uVar30 / uVar39;
    *(ulong *)(param_1 + 0x5d0) = uVar30;
    lVar40 = 0;
    if (*(ulong *)(param_1 + 0x4cc) <= local_124) {
      lVar40 = local_124 - *(ulong *)(param_1 + 0x4cc);
    }
    uVar32 = lVar40 * 0x12;
    if (uVar32 >> 0x20 == 0) {
      uVar32 = uVar32 & 0xffffffff;
    }
    uVar32 = uVar32 / uVar39;
    *(ulong *)(param_1 + 0x5d8) = uVar32;
    uVar39 = *(ulong *)(param_1 + 0x5e0);
    if ((uVar39 < uVar30) || (uVar30 = uVar39, uVar39 < uVar32)) {
      if (uVar30 < uVar32) {
        uVar30 = uVar32;
      }
      *(ulong *)(param_1 + 0x5e0) = uVar30;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x5c4) = 0;
    *(uint128 *)(param_1 + 0x5d0) = (uint128)0x0;
  }
  thunk_memmove((void *)(param_1 + 0x678),(void *)(param_1 + 0x679),0x47);
  thunk_memmove((void *)(param_1 + 0x6c0),(void *)(param_1 + 0x6c1),0x47);
  uVar30 = *(ulong *)(param_1 + 0x5e0);
  if (uVar30 == 0 || *(long *)(param_1 + 0x5d0) == 0) {
    uVar32 = 0;
  }
  else {
    uVar39 = *(long *)(param_1 + 0x5d0) * 100;
    if ((uVar39 | uVar30) >> 0x20 == 0) {
      uVar39 = (uVar39 & 0xffffffff) / (uVar30 & 0xffffffff);
    }
    else {
      uVar39 = uVar39 / uVar30;
    }
    uVar32 = 100;
    if (uVar39 < 100) {
      uVar32 = uVar39;
    }
  }
  *(char *)(param_1 + 0x6bf) = (char)uVar32;
  if (*(long *)(param_1 + 0x5d8) == 0 || uVar30 == 0) {
    uVar30 = 0;
  }
  else {
    uVar39 = *(long *)(param_1 + 0x5d8) * 100;
    if ((uVar39 | uVar30) >> 0x20 == 0) {
      uVar39 = (uVar39 & 0xffffffff) / (uVar30 & 0xffffffff);
    }
    else {
      uVar39 = uVar39 / uVar30;
    }
    uVar30 = 100;
    if (uVar39 < 100) {
      uVar30 = uVar39;
    }
  }
  *(char *)(param_1 + 0x707) = (char)uVar30;
  *(undefined4 *)(param_1 + 0x3f8) = local_9c;
  *(undefined8 *)(param_1 + 1000) = local_ac;
  *(undefined8 *)(param_1 + 0x3f0) = uStack_a4;
  *(undefined8 *)(param_1 + 0x3d8) = local_bc;
  *(undefined8 *)(param_1 + 0x3e0) = uStack_b4;
  *(undefined8 *)(param_1 + 0x3c8) = local_cc;
  *(undefined8 *)(param_1 + 0x3d0) = uStack_c4;
  *(ulong *)(param_1 + 0x3b8) = CONCAT44(uStack_d8,local_dc);
  *(undefined8 *)(param_1 + 0x3c0) = uStack_d4;
  *(ulong *)(param_1 + 0x374) = CONCAT44(uStack_d8,local_dc);
  *(undefined8 *)(param_1 + 0x37c) = uStack_d4;
  *(undefined8 *)(param_1 + 900) = local_cc;
  *(undefined8 *)(param_1 + 0x38c) = uStack_c4;
  *(undefined8 *)(param_1 + 0x394) = local_bc;
  *(undefined8 *)(param_1 + 0x39c) = uStack_b4;
  *(undefined8 *)(param_1 + 0x3a4) = local_ac;
  *(undefined8 *)(param_1 + 0x3ac) = uStack_a4;
  *(undefined4 *)(param_1 + 0x3b4) = local_9c;
  *(int *)(param_1 + 0x35c) = local_dc;
  thunk_memcpy((void *)(param_1 + 0x488),&local_168,0x8c);
  *(undefined1 *)(param_1 + 0x5a0) = 1;
  *(byte *)(param_1 + 0x5a1) = local_164 & 1;
  if ((ulong)*(uint *)(param_1 + 0x550) != 0) {
    thunk_memset(*(void **)(param_1 + 0x538),0,(ulong)*(uint *)(param_1 + 0x550) << 4);
    uVar25 = *(uint *)(param_1 + 0x5a4);
    if ((ulong)uVar25 != 0) {
      uVar26 = *(uint *)(param_1 + 0x550);
      lVar40 = 8;
      lVar36 = 0;
      do {
        if ((ulong)uVar26 * 0x1b8 == lVar36) {
          return;
        }
        lVar35 = *(long *)(param_1 + 0x538);
        *(undefined1 *)(lVar35 + -8 + lVar40) = 1;
        lVar3 = *(long *)(param_1 + 0x530);
        *(undefined4 *)(lVar35 + -4 + lVar40) = *(undefined4 *)(lVar3 + lVar36);
        *(undefined8 *)(lVar35 + lVar40) = *(undefined8 *)(lVar3 + 0x10 + lVar36);
        lVar36 = lVar36 + 0x1b8;
        lVar40 = lVar40 + 0x10;
      } while ((ulong)uVar25 * 0x1b8 != lVar36);
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
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808b8
#undef UINT_00280904
#undef UINT_00280908
#undef UINT_00280910
#undef uStack_d8
#undef uStack_d4
#undef uStack_c4
#undef uStack_b4
#undef uStack_a4
#undef local_320
#undef local_168
#undef local_164
#undef local_13c
#undef local_134
#undef local_12c
#undef local_124
#undef local_dc
#undef local_cc
#undef local_bc
#undef local_ac
#undef local_9c
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_74
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1000953d
#define DAT_1000953d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_10009546
#define DAT_10009546 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_10009548
#define DAT_10009548 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000954b
#define DAT_1000954b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000954e
#define DAT_1000954e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_10009730
#define DAT_10009730 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x469U)))
#undef DAT_10009750
#define DAT_10009750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x489U)))
#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
#undef PTR_str_100094da_1000a010
#define PTR_str_100094da_1000a010 (*(char * *)(((uintptr_t)pf_module_state + 0xd49U)))
#undef str_1000947c
#define str_1000947c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b5U)))
#undef str_10009540
#define str_10009540 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x279U)))
#undef str_10009551
#define str_10009551 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_10009560
#define str_10009560 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_100095b1
#define str_100095b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_100095c4
#define str_100095c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fdU)))
#undef str_100095d8
#define str_100095d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x311U)))
#undef str_10009605
#define str_10009605 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33eU)))
#undef str_10009614
#define str_10009614 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_10009625
#define str_10009625 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#undef str_10009633
#define str_10009633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_10009642
#define str_10009642 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37bU)))
#undef str_10009650
#define str_10009650 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_10009661
#define str_10009661 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39aU)))
#undef str_10009673
#define str_10009673 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3acU)))
#undef str_10009688
#define str_10009688 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c1U)))
#undef str_100096a9
#define str_100096a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#define local_1b8 (*(char (*)[440])(pf_stack_frame + 24))
#define local_1a8 (*(char *)(pf_stack_frame + 40))
#define local_1a4 (*(undefined1 (*)[420])(pf_stack_frame + 44))
#define local_f8 (*(char (*)[248])(pf_stack_frame + 216))
#define local_b8 (*(long *)(pf_stack_frame + 280))
#define local_b0 (*(ulong *)(pf_stack_frame + 288))
#define local_78 (*(ulong *)(pf_stack_frame + 344))
#define local_70 (*(ulong *)(pf_stack_frame + 352))
#define local_68 (*(ulong *)(pf_stack_frame + 360))
#define local_60 (*(undefined8 *)(pf_stack_frame + 368))
#define local_58 (*(undefined8 *)(pf_stack_frame + 376))
#define local_50 (*(ulong *)(pf_stack_frame + 384))
#define local_48 (*(ulong *)(pf_stack_frame + 392))
#define local_40 (*(ulong *)(pf_stack_frame + 400))
#define local_38 (*(undefined * *)(pf_stack_frame + 408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10002680(long param_1)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  long *plVar1;
  void *pixels;
  uint3 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  sbyte sVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;

  uVar14 = DAT_1000b0ac;
  uVar6 = DAT_1000b0a8;
  uVar5 = thunk_terror_ui_colour(0);
  uVar23 = DAT_1000b0ac;
  uVar7 = DAT_1000b0a8;
  local_38 = (undefined *)(ulong)DAT_1000b0a8;
  uVar11 = (int)DAT_1000b0ac >> 0x1f & DAT_1000b0ac;
  uVar27 = DAT_1000b0a8;
  if ((int)uVar6 < (int)DAT_1000b0a8) {
    uVar27 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar27 = 0;
  }
  uVar6 = DAT_1000b0ac;
  if ((int)uVar14 < (int)DAT_1000b0ac) {
    uVar6 = uVar14;
  }
  if ((int)uVar14 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar11 < (int)uVar6) {
    uVar14 = (int)DAT_1000b0a8 >> 0x1f & DAT_1000b0a8;
    do {
      if ((int)uVar14 < (int)uVar27) {
        uVar26 = uVar14;
        do {
          if ((((param_1 != 0) && ((int)uVar11 < (int)uVar23)) && (-1 < (int)(uVar26 | uVar11))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar26 < (int)uVar7)))) {
            lVar24 = (ulong)uVar26 + (ulong)uVar11 * (long)local_38;
            *(char *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = (char)(uVar5 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar5 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = (char)uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar26 = uVar26 + 1;
        } while (uVar27 != uVar26);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
  }
  if (((param_1 != 0) && (iVar19 = *(int *)(param_1 + 0x368), iVar19 != -1)) &&
     ((ulong)*(uint *)(param_1 + 0x5a4) != 0)) {
    lVar24 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x530) + lVar24) == iVar19) {
        uVar2 = (uint3)((uint)iVar19 >> 8);
        local_58 = CONCAT44(PF_PART4(local_58, 4),CONCAT31(uVar2,iVar19 != 0));
        local_60 = CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((uint7)uVar2,1));
        goto LAB_100027e3;
      }
      lVar24 = lVar24 + 0x1b8;
    } while ((ulong)*(uint *)(param_1 + 0x5a4) * 0x1b8 != lVar24);
  }
  local_60 = (ulong)PF_PART4(local_60, 4) << 0x20;
  local_58 = (ulong)PF_PART4(local_58, 4) << 0x20;
LAB_100027e3:
  uVar6 = thunk_terror_ui_colour(0x15);
  uVar27 = uVar6 >> 0x10 & 0xff;
  uVar7 = thunk_terror_ui_colour(0x2d);
  uVar23 = (uVar6 & 0xff) * 0x58;
  PF_PART4(local_40, 0) = (uVar7 & 0xff) - (uVar6 & 0xff);
  uVar14 = uVar6 >> 8 & 0xff;
  lVar24 = 0x58;
  lVar28 = 0;
  local_50 = (ulong)(uint)(int)(short)(((ushort)(uVar7 >> 8) & 0xff) - (short)uVar14);
  local_68 = (ulong)(uint)(int)(short)(((ushort)(uVar7 >> 0x10) & 0xff) - (short)uVar27);
  uVar6 = uVar27 * 0x58;
  uVar7 = uVar14 * 0x58;
  do {
    local_48 = CONCAT44(PF_PART4(local_48, 4),(int)local_68 + uVar6);
    iVar19 = (int)local_50;
    recovered_10007620(param_1,lVar28,(ulong)DAT_1000b0a8 | 0x100000000,
                       (uVar6 & 0xffff) / 0x58 & 0xff |
                       (uVar7 & 0xffff) * 0xba2f >> 0xe & 0xff00 | uVar23 / 0x58 << 0x10);
    uVar14 = DAT_1000b0a8;
    lVar28 = lVar28 + 0x100000000;
    uVar23 = uVar23 + (uint)local_40;
    lVar24 = lVar24 + -1;
    uVar6 = (uint)local_48;
    uVar7 = uVar7 + iVar19;
  } while (lVar24 != 0);
  uVar23 = thunk_terror_ui_colour(3);
  uVar6 = DAT_1000b0a8;
  uVar25 = (ulong)DAT_1000b0a8;
  uVar7 = DAT_1000b0a8;
  if ((int)uVar14 < (int)DAT_1000b0a8) {
    uVar7 = uVar14;
  }
  if ((int)uVar14 < 0) {
    uVar7 = 0;
  }
  if ((0x57 < (int)DAT_1000b0ac) &&
     (uVar14 = (int)DAT_1000b0a8 >> 0x1f & DAT_1000b0a8, (int)uVar14 < (int)uVar7)) {
    do {
      if ((param_1 != 0) &&
         (((int)uVar14 < (int)uVar6 && -1 < (int)uVar14) && *(long *)(param_1 + 0x350) != 0)) {
        lVar24 = (ulong)uVar14 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x57;
        *(char *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
        *(char *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
        *(char *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
      }
      uVar14 = uVar14 + 1;
    } while (uVar7 != uVar14);
  }
  recovered_10007740(param_1,0xc00000010,((uintptr_t)pf_module_state + 0x200U),(uint)(byte)local_58);
  uVar6 = (uint)(byte)local_60;
  recovered_10007740(param_1,0x2200000010,((uintptr_t)pf_module_state + 0x205U),(uint)(byte)local_60);
  recovered_10007740(param_1,0x3800000010,((uintptr_t)pf_module_state + 0x20bU),uVar6);
  uVar14 = thunk_terror_ui_colour(0x1f);
  uVar6 = DAT_1000b0a8;
  uVar25 = (ulong)DAT_1000b0a8;
  uVar7 = 0x68;
  if ((int)DAT_1000b0a8 < 0x68) {
    uVar7 = DAT_1000b0a8;
  }
  uVar12 = (ulong)(int)DAT_1000b0ac;
  uVar27 = (int)local_38 - 0x10;
  local_48 = CONCAT44(PF_PART4(local_48, 4),uVar27);
  uVar23 = DAT_1000b0a8;
  if ((int)uVar27 < (int)DAT_1000b0a8) {
    uVar23 = uVar27;
  }
  if ((int)local_38 < 0x10) {
    uVar23 = 0;
  }
  if (0xc < (long)uVar12) {
    uVar15 = 0x4a;
    if (DAT_1000b0ac < 0x4a) {
      uVar15 = (ulong)DAT_1000b0ac;
    }
    uVar21 = 0xc;
    do {
      if ((int)uVar7 < (int)uVar23) {
        uVar27 = uVar7;
        do {
          if ((((param_1 != 0) && (uVar21 < uVar12)) && (-1 < (int)uVar27)) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar27 < (int)uVar6)))) {
            lVar24 = (ulong)uVar27 + uVar21 * uVar25;
            *(char *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = (char)(uVar14 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar14 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = (char)uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar23 != uVar27);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar15);
  }
  uVar23 = thunk_terror_ui_colour(3);
  uVar7 = DAT_1000b0ac;
  uVar6 = DAT_1000b0a8;
  uVar3 = (undefined1)(uVar23 >> 0x10);
  uVar25 = (ulong)DAT_1000b0a8;
  uVar14 = 0x68;
  if ((int)DAT_1000b0a8 < 0x68) {
    uVar14 = DAT_1000b0a8;
  }
  uVar27 = DAT_1000b0a8;
  if ((int)(uint)local_48 < (int)DAT_1000b0a8) {
    uVar27 = (uint)local_48;
  }
  uVar12 = (ulong)(int)DAT_1000b0ac;
  uVar5 = uVar27;
  if ((int)(uint)local_38 < 0x10) {
    uVar5 = 0;
  }
  uVar4 = (undefined1)uVar23;
  uVar20 = (undefined1)(uVar23 >> 8);
  if (0xc < (long)uVar12) {
    if ((int)uVar14 < (int)uVar5) {
      uVar23 = uVar14;
      do {
        if ((param_1 != 0) &&
           (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *(long *)(param_1 + 0x350) != 0)) {
          lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0xc;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
        }
        uVar23 = uVar23 + 1;
      } while (uVar5 != uVar23);
    }
    if ((0x49 < (int)uVar7) && ((int)uVar14 < (int)uVar5)) {
      uVar23 = uVar14;
      do {
        if ((param_1 != 0) &&
           (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *(long *)(param_1 + 0x350) != 0)) {
          lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x49;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
        }
        uVar23 = uVar23 + 1;
      } while (uVar5 != uVar23);
    }
    uVar15 = 0x4a;
    if (uVar7 < 0x4a) {
      uVar15 = (ulong)uVar7;
    }
    lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x30 + (ulong)uVar14 * 4;
    uVar21 = 0xc;
    do {
      if (((0x68 < (int)uVar6) && (param_1 != 0)) &&
         (*(long *)(param_1 + 0x350) != 0 && uVar21 < uVar12)) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar24) = uVar3;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar24) = uVar20;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar24) = uVar4;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar24) = 0xff;
      }
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
      PF_PART4(local_40, 0) = uVar14;
    } while (uVar15 != uVar21);
  }
  uVar23 = (uint)local_38 - 0x11;
  uVar14 = uVar6;
  if ((int)uVar23 < (int)uVar6) {
    uVar14 = uVar23;
  }
  if ((int)uVar23 < 0) {
    uVar14 = 0;
  }
  if ((int)(uint)local_48 < 0) {
    uVar27 = 0;
  }
  if (0xc < (int)uVar7) {
    uVar15 = 0x4a;
    if (uVar7 < 0x4a) {
      uVar15 = (ulong)uVar7;
    }
    uVar21 = 0xc;
    do {
      if ((int)uVar14 < (int)uVar27) {
        uVar7 = uVar14;
        do {
          if (((param_1 != 0) && (uVar21 < uVar12)) &&
             ((-1 < (int)uVar7 && ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar7 < (int)uVar6)))))
             ) {
            lVar24 = (ulong)uVar7 + uVar21 * uVar25;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar27 != uVar7);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar15);
  }
  uVar6 = thunk_terror_ui_colour(1);
  recovered_10007d70(param_1,0x70,0x27,param_1 + 0x708,
                     (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,
                     (int)local_38 - 0x88);
  uVar6 = DAT_1000b0a8;
  uVar12 = (ulong)DAT_1000b0a8;
  uVar23 = thunk_terror_ui_colour(0x1f);
  uVar7 = DAT_1000b0a8;
  uVar25 = (ulong)DAT_1000b0a8;
  uVar14 = 0x10;
  if ((int)DAT_1000b0a8 < 0x10) {
    uVar14 = DAT_1000b0a8;
  }
  uVar15 = (ulong)(int)DAT_1000b0ac;
  uVar5 = uVar6 - 0x10;
  local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar5);
  uVar27 = DAT_1000b0a8;
  if ((int)uVar5 < (int)DAT_1000b0a8) {
    uVar27 = uVar5;
  }
  if ((int)uVar6 < 0x10) {
    uVar27 = 0;
  }
  if (0x6a < (long)uVar15) {
    uVar21 = 0x156;
    if (DAT_1000b0ac < 0x156) {
      uVar21 = (ulong)DAT_1000b0ac;
    }
    uVar22 = 0x6a;
    do {
      if ((int)uVar14 < (int)uVar27) {
        uVar6 = uVar14;
        do {
          if ((((param_1 != 0) && (uVar22 < uVar15)) && (-1 < (int)uVar6)) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar6 < (int)uVar7)))) {
            lVar24 = (ulong)uVar6 + uVar22 * uVar25;
            *(char *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar27 != uVar6);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar21);
  }
  local_58 = uVar12;
  uVar23 = thunk_terror_ui_colour(3);
  uVar7 = DAT_1000b0ac;
  uVar6 = DAT_1000b0a8;
  uVar3 = (undefined1)(uVar23 >> 0x10);
  uVar25 = (ulong)DAT_1000b0a8;
  uVar14 = 0x10;
  if ((int)DAT_1000b0a8 < 0x10) {
    uVar14 = DAT_1000b0a8;
  }
  uVar27 = DAT_1000b0a8;
  if ((int)(uint)local_38 < (int)DAT_1000b0a8) {
    uVar27 = (uint)local_38;
  }
  uVar12 = (ulong)(int)DAT_1000b0ac;
  uVar5 = 0;
  if (0xf < (int)(uint)local_58) {
    uVar5 = uVar27;
  }
  uVar4 = (undefined1)uVar23;
  uVar20 = (undefined1)(uVar23 >> 8);
  if (0x6a < (long)uVar12) {
    local_48 = CONCAT44(PF_PART4(local_48, 4),uVar14);
    if ((int)uVar14 < (int)uVar5) {
      uVar23 = uVar14;
      do {
        if ((param_1 != 0) &&
           (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *(long *)(param_1 + 0x350) != 0)) {
          lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x6a;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
        }
        uVar23 = uVar23 + 1;
      } while (uVar5 != uVar23);
    }
    if (0x155 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
      uVar23 = uVar14;
      do {
        if ((param_1 != 0) &&
           (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *(long *)(param_1 + 0x350) != 0)) {
          lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x155;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
        }
        uVar23 = uVar23 + 1;
      } while (uVar5 != uVar23);
    }
    uVar15 = 0x156;
    if (uVar7 < 0x156) {
      uVar15 = (ulong)uVar7;
    }
    lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x1a8 + (ulong)uVar14 * 4;
    uVar21 = 0x6a;
    do {
      if (((0x10 < (int)uVar6) && (param_1 != 0)) &&
         (*(long *)(param_1 + 0x350) != 0 && uVar21 < uVar12)) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar24) = uVar3;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar24) = uVar20;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar24) = uVar4;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar24) = 0xff;
      }
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
    } while (uVar15 != uVar21);
  }
  uVar23 = (uint)local_58 - 0x11;
  uVar14 = uVar6;
  if ((int)uVar23 < (int)uVar6) {
    uVar14 = uVar23;
  }
  local_70 = CONCAT44(PF_PART4(local_70, 4),uVar23);
  if ((int)uVar23 < 0) {
    uVar14 = 0;
  }
  if ((int)(uint)local_38 < 0) {
    uVar27 = 0;
  }
  if (0x6a < (int)uVar7) {
    uVar15 = 0x156;
    if (uVar7 < 0x156) {
      uVar15 = (ulong)uVar7;
    }
    uVar21 = 0x6a;
    do {
      if ((int)uVar14 < (int)uVar27) {
        uVar7 = uVar14;
        do {
          if (((param_1 != 0) && (uVar21 < uVar12)) &&
             ((-1 < (int)uVar7 && ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar7 < (int)uVar6)))))
             ) {
            lVar24 = (ulong)uVar7 + uVar21 * uVar25;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar27 != uVar7);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar15);
  }
  uVar14 = thunk_terror_ui_colour(0x2a);
  uVar6 = DAT_1000b0a8;
  uVar25 = (ulong)DAT_1000b0a8;
  uVar7 = 0x11;
  if ((int)DAT_1000b0a8 < 0x11) {
    uVar7 = DAT_1000b0a8;
  }
  uVar12 = (ulong)(int)DAT_1000b0ac;
  uVar23 = DAT_1000b0a8;
  if ((int)(uint)local_70 < (int)DAT_1000b0a8) {
    uVar23 = (uint)local_70;
  }
  if ((int)(uint)local_58 < 0x11) {
    uVar23 = 0;
  }
  if (0x6b < (long)uVar12) {
    uVar15 = 0x7d;
    if (DAT_1000b0ac < 0x7d) {
      uVar15 = (ulong)DAT_1000b0ac;
    }
    uVar21 = 0x6b;
    do {
      if ((int)uVar7 < (int)uVar23) {
        uVar27 = uVar7;
        do {
          if ((((param_1 != 0) && (uVar21 < uVar12)) && (-1 < (int)uVar27)) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar27 < (int)uVar6)))) {
            lVar24 = (ulong)uVar27 + uVar21 * uVar25;
            *(char *)(*(long *)(param_1 + 0x350) + (uintptr_t)lVar24 * 4) = (char)(uVar14 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar14 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + (uintptr_t)lVar24 * 4) = (char)uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar23 != uVar27);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar15);
  }
  plVar1 = (long *)(param_1 + 0x350);
  uVar25 = 0;
  do {
    iVar19 = (&DAT_10009730)[uVar25];
    local_38 = (&PTR_str_100094da_1000a010)[uVar25];
    local_40 = uVar25;
    if (uVar25 == 2) {
      uVar6 = thunk_terror_ui_colour(4);
      recovered_10007d70(param_1,iVar19 + 0x13U,0x70,(long)local_38,
                         (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
LAB_1000321a:
      uVar6 = iVar19 + 0xe;
      uVar23 = thunk_terror_ui_colour(0x15);
      uVar7 = DAT_1000b0a8;
      uVar25 = (ulong)DAT_1000b0a8;
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar6);
      uVar14 = DAT_1000b0a8;
      if ((int)uVar6 < (int)DAT_1000b0a8) {
        uVar14 = uVar6;
      }
      local_48 = CONCAT44(PF_PART4(local_48, 4),uVar14);
      uVar12 = (ulong)(int)DAT_1000b0ac;
      uVar27 = iVar19 + 0xfU;
      if ((int)DAT_1000b0a8 <= (int)(iVar19 + 0xfU)) {
        uVar27 = DAT_1000b0a8;
      }
      if (0x6b < (long)uVar12) {
        uVar15 = 0x7d;
        if (DAT_1000b0ac < 0x7d) {
          uVar15 = (ulong)DAT_1000b0ac;
        }
        uVar21 = 0x6b;
        do {
          if ((int)uVar6 < (int)uVar7) {
            uVar5 = uVar14;
            do {
              if (((param_1 != 0) && (uVar21 < uVar12)) &&
                 ((-1 < (int)uVar5 && ((*plVar1 != 0 && ((int)uVar5 < (int)uVar7)))))) {
                lVar24 = (ulong)uVar5 + uVar21 * uVar25;
                *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
                *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
                *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
                *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
              }
              uVar5 = uVar5 + 1;
            } while (uVar27 != uVar5);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar15);
      }
    }
    else {
      uVar6 = thunk_terror_ui_colour(1);
      recovered_10007d70(param_1,iVar19 + 0x13U,0x70,(long)local_38,
                         (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
      if (uVar25 != 0) goto LAB_1000321a;
    }
    uVar25 = local_40 + 1;
  } while (uVar25 != 8);
  uVar25 = 0;
  do {
    uVar6 = *(int *)(param_1 + 0x554) + (int)uVar25;
    local_68 = (ulong)uVar6;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar6);
    if ((uVar6 < *(uint *)(param_1 + 0x5a4)) &&
       (*(int *)(*(long *)(param_1 + 0x530) + local_68 * 0x1b8) == *(int *)(param_1 + 0x368))) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),0xe);
      uVar6 = 0x2b;
    }
    else {
      uVar6 = 0x2c;
      if ((uVar25 & 1) == 0) {
        uVar6 = 0x1f;
      }
      local_60 = CONCAT44(PF_PART4(local_60, 4),1);
    }
    uVar23 = thunk_terror_ui_colour(uVar6);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar12 = ((uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 9 << 0x21) + 0x7c00000011;
    uVar15 = uVar12 >> 0x20;
    uVar21 = (ulong)DAT_1000b0a8;
    uVar14 = 0x11;
    if ((int)DAT_1000b0a8 < 0x11) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_70 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_70;
    }
    if ((int)(uint)local_58 < 0x11) {
      uVar27 = 0;
    }
    iVar19 = (int)(uVar12 >> 0x20);
    uVar5 = iVar19 + 0x12;
    if ((int)DAT_1000b0ac <= (int)uVar5) {
      uVar5 = DAT_1000b0ac;
    }
    local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar5);
    if (iVar19 < (int)DAT_1000b0ac) {
      do {
        uVar11 = (uint)uVar15;
        if ((int)uVar14 < (int)uVar27) {
          uVar26 = uVar14;
          do {
            if ((((param_1 != 0) && (-1 < (int)(uVar26 | uVar11))) && (*plVar1 != 0)) &&
               (((int)uVar26 < (int)uVar6 && ((int)uVar11 < (int)uVar7)))) {
              lVar24 = (ulong)uVar26 + uVar15 * uVar21;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar26 = uVar26 + 1;
          } while (uVar27 != uVar26);
        }
        uVar15 = (ulong)(uVar11 + 1);
      } while (uVar11 + 1 != uVar5);
    }
    local_48 = uVar25;
    if ((uint)local_40 < *(uint *)(param_1 + 0x5a4)) {
      uVar25 = *(ulong *)(param_1 + 0x530);
      puVar29 = (undefined *)(local_68 * 0x1b8);
      local_50 = uVar25;
      local_38 = puVar29;
      uVar6 = thunk_terror_ui_colour((uint)local_60);
      uVar6 = (uVar6 & 0xff0000) >> 0x10 | uVar6 & 0xff00 | uVar6 << 0x10;
      thunk_snprintf(local_1b8,0x40,&DAT_1000953d,*(uint *)(puVar29 + uVar25));
      iVar19 = (int)local_48 * 0x12 + 0x81;
      local_68 = CONCAT44(PF_PART4(local_68, 4),uVar6);
      recovered_10007d70(param_1,0x25,iVar19,(long)local_1b8,uVar6,0x46);
      puVar29 = local_38;
      recovered_10007d70(param_1,0x6d,iVar19,(long)(local_38 + local_50 + 0x40),uVar6,0xb4);
      uVar25 = local_50;
      thunk_snprintf(local_1b8,0x40,str_10009540,*(uint *)(puVar29 + local_50 + 0x1b4) / 10,
                         *(uint *)(puVar29 + local_50 + 0x1b4) % 10);
      local_40 = CONCAT44(PF_PART4(local_40, 4),iVar19);
      uVar6 = (uint)local_68;
      recovered_10007d70(param_1,0x140,iVar19,(long)local_1b8,(uint)local_68,0x2a);
      uVar14 = *(uint *)(local_38 + uVar25 + 4) >> 0x10 & 0xff;
      uVar7 = *(uint *)(local_38 + uVar25 + 4) >> 2 & 1;
      if (uVar14 != 0) {
        uVar7 = uVar14;
      }
      uVar14 = *(uint *)(local_38 + uVar25 + 8) - uVar7;
      if (*(uint *)(local_38 + uVar25 + 8) < uVar7) {
        uVar14 = 0;
      }
      thunk_snprintf(local_1b8,0x40,&DAT_1000953d,uVar7);
      recovered_10007d70(param_1,0x18e,iVar19,(long)local_1b8,uVar6,0x2e);
      uVar12 = local_50;
      thunk_snprintf(local_1b8,0x40,&DAT_1000953d,uVar14);
      recovered_10007d70(param_1,0x1e8,(uint)local_40,(long)local_1b8,uVar6,0x2e);
      uVar25 = *(ulong *)(local_38 + uVar12 + 0x20);
      if (uVar25 < 0x40000000) {
        if (0xfffff < uVar25) {
          uVar7 = 0xfffff;
          sVar8 = 0x14;
          puVar29 = &DAT_1000954b;
          goto LAB_10003720;
        }
        if (0x3ff < uVar25) {
          uVar7 = 0x3ff;
          sVar8 = 10;
          puVar29 = &DAT_1000954e;
          goto LAB_10003720;
        }
        thunk_snprintf(local_1b8,0x40,str_10009560,uVar25,&DAT_10009546);
      }
      else {
        uVar7 = 0x3fffffff;
        sVar8 = 0x1e;
        puVar29 = &DAT_10009548;
LAB_10003720:
        thunk_snprintf(local_1b8,0x40,str_10009551,uVar25 >> sVar8,
                           (ulong)(uVar7 & (uint)uVar25) * 100 >> sVar8,puVar29);
      }
      puVar29 = local_38;
      recovered_10007d70(param_1,0x22a,(uint)local_40,(long)local_1b8,uVar6,0x54);
      uVar25 = *(ulong *)(puVar29 + uVar12 + 0x28);
      if (uVar25 < 0x40000000) {
        if (0xfffff < uVar25) {
          uVar7 = 0xfffff;
          sVar8 = 0x14;
          puVar17 = &DAT_1000954b;
          goto LAB_10003311;
        }
        if (0x3ff < uVar25) {
          uVar7 = 0x3ff;
          sVar8 = 10;
          puVar17 = &DAT_1000954e;
          goto LAB_10003311;
        }
        thunk_snprintf(local_1b8,0x40,str_10009560,uVar25,&DAT_10009546);
      }
      else {
        uVar7 = 0x3fffffff;
        sVar8 = 0x1e;
        puVar17 = &DAT_10009548;
LAB_10003311:
        thunk_snprintf(local_1b8,0x40,str_10009551,uVar25 >> sVar8,
                           (ulong)(uVar7 & (uint)uVar25) * 100 >> sVar8,puVar17);
      }
      iVar19 = (uint)local_40;
      recovered_10007d70(param_1,0x28a,(uint)local_40,(long)local_1b8,uVar6,0x60);
      recovered_10007d70(param_1,0x2f7,iVar19,(long)(puVar29 + uVar12 + 0xa0),uVar6,0x60);
    }
    uVar25 = local_48 + 1;
  } while (uVar25 != 0xb);
  local_b8 = (ulong)(*(uint *)(param_1 + 0x5a4) - 0xb) << 0x20;
  if (*(uint *)(param_1 + 0x5a4) < 0xc) {
    local_b8 = 0;
  }
  local_b0 = (ulong)*(uint *)(param_1 + 0x554) | 0xb00000000;
  thunk_terror_ui_scrollbars_layout(0x7c00000010,(ulong)(DAT_1000b0a8 - 0x20) | 0xc600000000,&local_b8,(void *)0x0,
                     local_1b8);
  if (local_1a8 != '\0') {
    terror_ui_scrollbar_draw((void *)param_1,local_1a4,0x20);
  }
  local_78 = 0x1800000088;
  uVar25 = 0;
  do {
    uVar12 = 0x1800000074;
    if (uVar25 == 1) {
      uVar12 = local_78;
    }
    uVar15 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x74 + 0xda;
    if (uVar25 < 2) {
      uVar15 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x74 + 0xc6;
    }
    uVar21 = (ulong)((int)uVar15 + 0x14);
    if (uVar25 < 3) {
      uVar21 = uVar15;
    }
    uVar6 = 2;
    if (uVar25 == *(uint *)(param_1 + 0x358)) {
      uVar6 = 0x2b;
    }
    local_60 = uVar25;
    uVar23 = thunk_terror_ui_colour(uVar6);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    local_70 = uVar21 >> 0x20;
    uVar5 = (uint)(uVar21 >> 0x20) | 0x164;
    local_68 = (ulong)uVar5;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar27 = (uint)uVar21;
    uVar14 = DAT_1000b0a8;
    if ((int)uVar27 < (int)DAT_1000b0a8) {
      uVar14 = uVar27;
    }
    if ((int)uVar27 < 0) {
      uVar14 = 0;
    }
    uVar11 = DAT_1000b0ac;
    if ((int)uVar5 < (int)DAT_1000b0ac) {
      uVar11 = uVar5;
    }
    uVar27 = uVar27 + (int)uVar12;
    uVar26 = DAT_1000b0a8;
    if ((int)uVar27 < (int)DAT_1000b0a8) {
      uVar26 = uVar27;
    }
    if ((int)uVar27 < 0) {
      uVar26 = 0;
    }
    uVar18 = uVar5 + 0x18;
    local_58 = CONCAT44(PF_PART4(local_58, 4),uVar18);
    uVar13 = DAT_1000b0ac;
    if ((int)uVar18 < (int)DAT_1000b0ac) {
      uVar13 = uVar18;
    }
    if ((int)uVar5 < -0x18) {
      uVar13 = 0;
    }
    if ((int)uVar11 < (int)uVar13) {
      do {
        if ((int)uVar14 < (int)uVar26) {
          uVar5 = uVar14;
          do {
            if (((param_1 != 0) && ((int)uVar11 < (int)uVar7)) &&
               ((-1 < (int)(uVar5 | uVar11) && ((*plVar1 != 0 && ((int)uVar5 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar5 + uVar11 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar5 = uVar5 + 1;
          } while (uVar26 != uVar5);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar13);
    }
    local_50 = uVar12;
    local_40 = uVar21;
    PF_PART4(local_38, 0) = uVar13;
    PF_PART4(local_48, 0) = uVar27;
    uVar23 = thunk_terror_ui_colour(3);
    uVar25 = local_60;
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar12 = (ulong)DAT_1000b0a8;
    uVar27 = (uint)local_40;
    uVar14 = DAT_1000b0a8;
    if ((int)uVar27 < (int)DAT_1000b0a8) {
      uVar14 = uVar27;
    }
    if ((int)uVar27 < 0) {
      uVar14 = 0;
    }
    local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar14);
    puVar29 = (undefined *)(ulong)DAT_1000b0ac;
    uVar11 = (uint)local_68;
    uVar5 = DAT_1000b0ac;
    if ((int)uVar11 < (int)DAT_1000b0ac) {
      uVar5 = uVar11;
    }
    uVar26 = DAT_1000b0a8;
    if ((int)(uint)local_48 < (int)DAT_1000b0a8) {
      uVar26 = (uint)local_48;
    }
    if ((int)(uint)local_48 < 0) {
      uVar26 = 0;
    }
    uVar13 = uVar11 + 1;
    if ((int)DAT_1000b0ac <= (int)(uVar11 + 1)) {
      uVar13 = DAT_1000b0ac;
    }
    if ((int)uVar11 < -1) {
      uVar13 = 0;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    uVar23 = uVar5;
    if ((int)uVar5 < (int)uVar13) {
      do {
        if ((int)uVar14 < (int)uVar26) {
          uVar18 = uVar14;
          do {
            if ((((param_1 != 0) && ((int)uVar23 < (int)uVar7)) && (-1 < (int)(uVar18 | uVar23))) &&
               ((*plVar1 != 0 && ((int)uVar18 < (int)uVar6)))) {
              lVar24 = (ulong)uVar18 + uVar23 * uVar12;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar18 = uVar18 + 1;
          } while (uVar26 != uVar18);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar13);
    }
    uVar13 = (uint)local_70 | 0x17b;
    uVar23 = uVar7;
    if ((int)uVar13 < (int)uVar7) {
      uVar23 = uVar13;
    }
    uVar18 = uVar13 + 1;
    if ((int)uVar7 <= (int)(uVar13 + 1)) {
      uVar18 = uVar7;
    }
    if ((int)uVar13 < -1) {
      uVar18 = 0;
    }
    local_48 = CONCAT44(PF_PART4(local_48, 4),uVar18);
    if ((int)uVar23 < (int)uVar18) {
      do {
        if ((int)uVar14 < (int)uVar26) {
          uVar13 = uVar14;
          do {
            if (((param_1 != 0) && ((int)uVar23 < (int)uVar7)) &&
               ((-1 < (int)(uVar13 | uVar23) && ((*plVar1 != 0 && ((int)uVar13 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar13 + uVar23 * uVar12;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar13 = uVar13 + 1;
          } while (uVar26 != uVar13);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar18);
    }
    uVar23 = uVar27 | 1;
    if ((int)uVar6 <= (int)(uVar27 | 1)) {
      uVar23 = uVar6;
    }
    if ((int)uVar27 < 0) {
      uVar23 = 0;
    }
    uVar26 = (uint)local_58;
    if ((int)uVar7 <= (int)(uint)local_58) {
      uVar26 = uVar7;
    }
    if ((int)uVar11 < -0x18) {
      uVar26 = 0;
    }
    if ((int)uVar5 < (int)uVar26) {
      do {
        if ((int)uVar14 < (int)uVar23) {
          uVar11 = uVar14;
          do {
            if ((((param_1 != 0) && ((int)uVar5 < (int)uVar7)) && (-1 < (int)(uVar11 | uVar5))) &&
               ((*plVar1 != 0 && ((int)uVar11 < (int)uVar6)))) {
              lVar24 = (ulong)uVar11 + uVar5 * uVar12;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar11 = uVar11 + 1;
          } while (uVar23 != uVar11);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar26);
    }
    uVar23 = (uVar27 + (int)local_50) - 1;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    uVar5 = (int)local_50 + uVar27;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar23 < -1) {
      uVar5 = 0;
    }
    if (0x164 < (int)uVar7) {
      local_38 = (undefined *)0x17c;
      if (uVar7 < 0x17c) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x164;
      do {
        if ((int)uVar14 < (int)uVar5) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar12;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    iVar19 = *(int *)(&DAT_10009750 + local_60 * 4);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,uVar27 + 0xf,0x16c,(long)(&DAT_10009750 + iVar19),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,
                       (int)local_50 - 0x16);
    uVar6 = DAT_1000b0a8;
    uVar25 = uVar25 + 1;
  } while (uVar25 != 5);
  local_48 = (ulong)DAT_1000b0a8;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x358))) {
  case 0:
    uVar23 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000b0a8;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = uVar6 - 0x10;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar5);
    uVar27 = DAT_1000b0a8;
    if ((int)uVar5 < (int)DAT_1000b0a8) {
      uVar27 = uVar5;
    }
    if ((int)uVar6 < 0x10) {
      uVar27 = 0;
    }
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)0x1f8;
      if (DAT_1000b0ac < 0x1f8) {
        local_38 = (undefined *)(ulong)DAT_1000b0ac;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar6 = uVar14;
          do {
            if ((((puVar17 < puVar29) && (-1 < (int)uVar6)) && (*plVar1 != 0)) &&
               ((int)uVar6 < (int)uVar7)) {
              lVar24 = (ulong)uVar6 + (long)puVar17 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar27 != uVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar23 = thunk_terror_ui_colour(3);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_40 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_40;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = 0;
    if (0xf < (int)(uint)local_48) {
      uVar5 = uVar27;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar23 >> 8);
      local_50 = CONCAT44(PF_PART4(local_50, 4),uVar14);
      if ((int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x17a;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      if (0x1f7 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x1f7;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      puVar17 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        puVar17 = (undefined *)(ulong)uVar7;
      }
      lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x5e8 + (ulong)uVar14 * 4;
      puVar30 = (undefined *)0x17a;
      do {
        if (((0x10 < (int)uVar6) && (param_1 != 0)) && (*plVar1 != 0 && puVar30 < puVar29)) {
          *(undefined1 *)(*plVar1 + lVar24) = uVar3;
          *(undefined1 *)(*plVar1 + 1 + lVar24) = uVar20;
          *(undefined1 *)(*plVar1 + 2 + lVar24) = uVar4;
          *(undefined1 *)(*plVar1 + 3 + lVar24) = 0xff;
        }
        puVar30 = puVar30 + 1;
        lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
      } while (puVar17 != puVar30);
    }
    uVar23 = (uint)local_48 - 0x11;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    if ((int)(uint)local_40 < 0) {
      uVar27 = 0;
    }
    if (0x17a < (int)uVar7) {
      local_38 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar25;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar27 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x2d0U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x46);
    thunk_snprintf(local_1b8,0x40,str_10009540,*(uint *)(param_1 + 0x5b8) / 10,
                       *(uint *)(param_1 + 0x5b8) % 10);
    uVar6 = thunk_terror_ui_colour(0x11);
    recovered_10007d70(param_1,0xab,0x19c,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x46);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x2d8U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x50);
    thunk_snprintf(local_1b8,0x40,str_10009540,*(uint *)(param_1 + 0x5bc) / 10,
                       *(uint *)(param_1 + 0x5bc) % 10);
    uVar6 = thunk_terror_ui_colour(0x12);
    recovered_10007d70(param_1,0xab,0x1b4,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x46);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x2e2U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x46);
    thunk_snprintf(local_1b8,0x40,str_10009540,*(uint *)(param_1 + 0x5c0) / 10,
                       *(uint *)(param_1 + 0x5c0) % 10);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0xab,0x1cc,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x46);
    uVar6 = thunk_terror_ui_colour(0x23);
    recovered_10008060(param_1,0xfe,0x196,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00);
    uVar6 = thunk_terror_ui_colour(0x12);
    recovered_10008060(param_1,0xfe,0x1ae,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00);
    thunk_snprintf(local_1b8,0x40,str_100095b1,*(uint *)(param_1 + 0x5b0));
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x15a,0x19c,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xaa);
    thunk_snprintf(local_1b8,0x40,str_100095c4,*(uint *)(param_1 + 0x5b4));
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x15a,0x1b4,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xaa);
    thunk_snprintf(local_1b8,0x40,str_100095d8,*(uint *)(param_1 + 0x398));
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x15a,0x1cc,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x31fU),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x50);
    recovered_100085a0(param_1,0x222,0x62,param_1 + 0x5e8,param_1 + 0x630,'\x01');
    break;
  case 1:
    local_60 = *(ulong *)(param_1 + 0x378);
    local_40 = *(ulong *)(param_1 + 0x380);
    local_68 = 0;
    if (local_60 <= local_40) {
      local_68 = local_40 - local_60;
    }
    uVar23 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000b0a8;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = uVar6 - 0x10;
    local_50 = CONCAT44(PF_PART4(local_50, 4),uVar5);
    uVar27 = DAT_1000b0a8;
    if ((int)uVar5 < (int)DAT_1000b0a8) {
      uVar27 = uVar5;
    }
    if ((int)uVar6 < 0x10) {
      uVar27 = 0;
    }
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)0x1f8;
      if (DAT_1000b0ac < 0x1f8) {
        local_38 = (undefined *)(ulong)DAT_1000b0ac;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar6 = uVar14;
          do {
            if ((((puVar17 < puVar29) && (-1 < (int)uVar6)) && (*plVar1 != 0)) &&
               ((int)uVar6 < (int)uVar7)) {
              lVar24 = (ulong)uVar6 + (long)puVar17 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar27 != uVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar23 = thunk_terror_ui_colour(3);
    uVar12 = local_40;
    uVar25 = local_68;
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar15 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_50 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_50;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = 0;
    if (0xf < (int)(uint)local_48) {
      uVar5 = uVar27;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar23 >> 8);
      local_58 = CONCAT44(PF_PART4(local_58, 4),uVar14);
      if ((int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)uVar15 * 0x17a;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      if (0x1f7 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)uVar15 * 0x1f7;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      puVar17 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        puVar17 = (undefined *)(ulong)uVar7;
      }
      lVar24 = (uintptr_t)uVar15 * 0x5e8 + (ulong)uVar14 * 4;
      puVar30 = (undefined *)0x17a;
      do {
        if (((0x10 < (int)uVar6) && (param_1 != 0)) && (*plVar1 != 0 && puVar30 < puVar29)) {
          *(undefined1 *)(*plVar1 + lVar24) = uVar3;
          *(undefined1 *)(*plVar1 + 1 + lVar24) = uVar20;
          *(undefined1 *)(*plVar1 + 2 + lVar24) = uVar4;
          *(undefined1 *)(*plVar1 + 3 + lVar24) = 0xff;
        }
        puVar30 = puVar30 + 1;
        lVar24 = lVar24 + (uintptr_t)uVar15 * 4;
      } while (puVar17 != puVar30);
    }
    uVar23 = (uint)local_48 - 0x11;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    if ((int)(uint)local_50 < 0) {
      uVar27 = 0;
    }
    if (0x17a < (int)uVar7) {
      local_38 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar15;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar27 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    if (local_60 < 0x40000000) {
      if (0xfffff < local_60) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_100062b0;
      }
      if (0x3ff < local_60) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_100062b0;
      }
      thunk_snprintf(local_1b8,0x40,str_10009560,local_60,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_100062b0:
      thunk_snprintf(local_1b8,0x40,str_10009551,local_60 >> sVar8,
                         (ulong)(uVar6 & (uint)local_60) * 100 >> sVar8,puVar29);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x329U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x3c);
    uVar6 = thunk_terror_ui_colour(0x11);
    recovered_10007d70(param_1,0x94,0x19c,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x6e);
    if (uVar25 < 0x40000000) {
      if (0xfffff < uVar25) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_100063bf;
      }
      if (0x3ff < uVar25) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_100063bf;
      }
      thunk_snprintf(local_1b8,0x40,str_10009560,uVar25,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_100063bf:
      thunk_snprintf(local_1b8,0x40,str_10009551,uVar25 >> sVar8,
                         (ulong)(uVar6 & (uint)uVar25) * 100 >> sVar8,puVar29);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x32fU),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x3c);
    uVar6 = thunk_terror_ui_colour(4);
    recovered_10007d70(param_1,0x94,0x1b4,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x6e);
    if (uVar12 < 0x40000000) {
      if (0xfffff < uVar12) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_100064ce;
      }
      if (0x3ff < uVar12) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_100064ce;
      }
      thunk_snprintf(local_1b8,0x40,str_10009560,uVar12,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_100064ce:
      thunk_snprintf(local_1b8,0x40,str_10009551,uVar12 >> sVar8,
                         (ulong)(uVar6 & (uint)uVar12) * 100 >> sVar8,puVar29);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x335U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x50);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x1a2,0x19c,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x6e);
    uVar14 = thunk_terror_ui_colour(0x23);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    lVar24 = (ulong)DAT_1000b0a8 * 0x660;
    local_38 = (undefined *)((ulong)DAT_1000b0a8 * 4);
    iVar19 = -0x20;
    do {
      lVar28 = 0;
      do {
        iVar16 = (int)lVar28 + -0x20;
        if ((((((uint)(iVar16 * iVar16 + iVar19 * iVar19) < 0x401) && (param_1 != 0)) &&
             (uVar23 = (int)lVar28 + 0x214, -1 < (int)(uVar23 | iVar19 + 0x1b8U))) &&
            ((*plVar1 != 0 && ((int)uVar23 < (int)uVar6)))) && ((int)(iVar19 + 0x1b8U) < (int)uVar7)
           ) {
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x850) = (char)(uVar14 >> 0x10);
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x851) = (char)(uVar14 >> 8);
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x852) = (char)uVar14;
          *(undefined1 *)(lVar24 + lVar28 * 4 + *plVar1 + 0x853) = 0xff;
        }
        lVar28 = lVar28 + 1;
      } while ((int)lVar28 != 0x41);
      iVar19 = iVar19 + 1;
      lVar24 = lVar24 + (long)local_38;
    } while (iVar19 != 0x21);
    if (local_40 != 0) {
      uVar25 = local_68 * 100;
      if ((uVar25 | local_40) >> 0x20 == 0) {
        uVar25 = (uVar25 & 0xffffffff) / (local_40 & 0xffffffff);
      }
      else {
        uVar25 = uVar25 / local_40;
      }
      if (10 < uVar25) {
        uVar25 = 0xffffffe0;
        lVar24 = 0x198;
        do {
          iVar19 = (int)uVar25;
          local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),iVar19 + 0x1b8);
          lVar28 = 0x234;
          local_48 = uVar25;
          do {
            if ((((lVar28 + -0x234) * (lVar28 + -0x234) + (ulong)(uint)(iVar19 * iVar19) < 0x401) &&
                (uVar6 = thunk_terror_ui_colour(4), param_1 != 0)) &&
               ((*plVar1 != 0 &&
                ((lVar28 < (int)DAT_1000b0a8 && ((int)(uint)local_38 < (int)DAT_1000b0ac)))))) {
              lVar9 = (int)DAT_1000b0a8 * lVar24 + lVar28;
              *(char *)(*plVar1 + lVar9 * 4) = (char)(uVar6 >> 0x10);
              *(char *)(*plVar1 + 1 + lVar9 * 4) = (char)(uVar6 >> 8);
              *(char *)(*plVar1 + 2 + lVar9 * 4) = (char)uVar6;
              *(undefined1 *)(*plVar1 + 3 + lVar9 * 4) = 0xff;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0x255);
          uVar25 = (ulong)((int)local_48 + 1);
          lVar24 = lVar24 + 1;
        } while ((int)local_48 != 0);
      }
    }
    uVar6 = thunk_terror_ui_colour(1);
    uVar7 = (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00;
    pcVar10 = local_1b8;
    uVar6 = 0x20c;
    iVar19 = 0x1e2;
    uVar14 = 100;
    goto LAB_10006a09;
  case 2:
    local_58 = *(ulonglong *)(param_1 + 0x428);
    local_60 = *(ulonglong *)(param_1 + 0x430);
    local_68 = *(ulong *)(param_1 + 0x438);
    local_50 = *(ulong *)(param_1 + 0x440);
    uVar23 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000b0a8;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = uVar6 - 0x10;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar5);
    uVar27 = DAT_1000b0a8;
    if ((int)uVar5 < (int)DAT_1000b0a8) {
      uVar27 = uVar5;
    }
    if ((int)uVar6 < 0x10) {
      uVar27 = 0;
    }
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)0x1f8;
      if (DAT_1000b0ac < 0x1f8) {
        local_38 = (undefined *)(ulong)DAT_1000b0ac;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar6 = uVar14;
          do {
            if ((((puVar17 < puVar29) && (-1 < (int)uVar6)) && (*plVar1 != 0)) &&
               ((int)uVar6 < (int)uVar7)) {
              lVar24 = (ulong)uVar6 + (long)puVar17 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar27 != uVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar23 = thunk_terror_ui_colour(3);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_40 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_40;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = 0;
    if (0xf < (int)(uint)local_48) {
      uVar5 = uVar27;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar23 >> 8);
      local_70 = CONCAT44(PF_PART4(local_70, 4),uVar14);
      if ((int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x17a;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      if (0x1f7 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x1f7;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      puVar17 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        puVar17 = (undefined *)(ulong)uVar7;
      }
      lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x5e8 + (ulong)uVar14 * 4;
      puVar30 = (undefined *)0x17a;
      do {
        if (((0x10 < (int)uVar6) && (param_1 != 0)) && (*plVar1 != 0 && puVar30 < puVar29)) {
          *(undefined1 *)(*plVar1 + lVar24) = uVar3;
          *(undefined1 *)(*plVar1 + 1 + lVar24) = uVar20;
          *(undefined1 *)(*plVar1 + 2 + lVar24) = uVar4;
          *(undefined1 *)(*plVar1 + 3 + lVar24) = 0xff;
        }
        puVar30 = puVar30 + 1;
        lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
      } while (puVar17 != puVar30);
    }
    uVar23 = (uint)local_48 - 0x11;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    if ((int)(uint)local_40 < 0) {
      uVar27 = 0;
    }
    if (0x17a < (int)uVar7) {
      local_38 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar25;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar27 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    recovered_10008cc0(param_1);
    thunk_snprintf(local_1b8,0x40,str_10009605,local_58);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1a8,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x82);
    thunk_snprintf(local_1b8,0x40,str_10009614,local_60);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1be,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x8c);
    thunk_snprintf(local_1b8,0x40,str_10009625,*(uint *)(param_1 + 0x5c4));
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1d4,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x82);
    thunk_snprintf(local_1b8,0x40,str_10009633,*(uint *)(param_1 + 0x5c8));
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1ea,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x8c);
    if (local_68 < 0x40000000) {
      if (0xfffff < local_68) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005713;
      }
      if (0x3ff < local_68) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005713;
      }
      thunk_snprintf((char *)&local_b8,0x40,str_10009560,local_68,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005713:
      thunk_snprintf((char *)&local_b8,0x40,str_10009551,local_68 >> sVar8,
                         (ulong)(uVar6 & (uint)local_68) * 100 >> sVar8,puVar29);
    }
    thunk_snprintf(local_1b8,0x40,str_10009642,&local_b8);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x12e,0x1a8,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xaa);
    if (local_50 < 0x40000000) {
      if (0xfffff < local_50) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005800;
      }
      if (0x3ff < local_50) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005800;
      }
      thunk_snprintf((char *)&local_b8,0x40,str_10009560,local_50,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005800:
      thunk_snprintf((char *)&local_b8,0x40,str_10009551,local_50 >> sVar8,
                         (ulong)(uVar6 & (uint)local_50) * 100 >> sVar8,puVar29);
    }
    thunk_snprintf(local_1b8,0x40,str_10009650,&local_b8);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x12e,0x1be,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xb4);
    uVar25 = *(ulong *)(param_1 + 0x5d0);
    if (uVar25 < 0x40000000) {
      if (0xfffff < uVar25) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_100058ed;
      }
      if (0x3ff < uVar25) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_100058ed;
      }
      thunk_snprintf(local_f8,0x20,str_10009560,uVar25,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_100058ed:
      thunk_snprintf(local_f8,0x20,str_10009551,uVar25 >> sVar8,
                         (ulong)(uVar6 & (uint)uVar25) * 100 >> sVar8,puVar29);
    }
    thunk_snprintf((char *)&local_b8,0x40,str_100096a9,local_f8);
    thunk_snprintf(local_1b8,0x40,str_10009661,&local_b8);
    uVar6 = thunk_terror_ui_colour(0x11);
    recovered_10007d70(param_1,0x12e,0x1d4,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xbe);
    uVar25 = *(ulong *)(param_1 + 0x5d8);
    if (uVar25 < 0x40000000) {
      if (0xfffff < uVar25) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_100059f2;
      }
      if (0x3ff < uVar25) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_100059f2;
      }
      thunk_snprintf(local_f8,0x20,str_10009560,uVar25,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_100059f2:
      thunk_snprintf(local_f8,0x20,str_10009551,uVar25 >> sVar8,
                         (ulong)(uVar6 & (uint)uVar25) * 100 >> sVar8,puVar29);
    }
    thunk_snprintf((char *)&local_b8,0x40,str_100096a9,local_f8);
    thunk_snprintf(local_1b8,0x40,str_10009673,&local_b8);
    uVar6 = thunk_terror_ui_colour(0x12);
    recovered_10007d70(param_1,0x12e,0x1ea,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,200);
    uVar25 = *(ulong *)(param_1 + 0x5e0);
    if (uVar25 < 0x40000000) {
      if (0xfffff < uVar25) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005af0;
      }
      if (0x3ff < uVar25) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005af0;
      }
      thunk_snprintf(local_f8,0x20,str_10009560,uVar25,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005af0:
      thunk_snprintf(local_f8,0x20,str_10009551,uVar25 >> sVar8,
                         (ulong)(uVar6 & (uint)uVar25) * 100 >> sVar8,puVar29);
    }
    thunk_snprintf((char *)&local_b8,0x40,str_100096a9,local_f8);
    thunk_snprintf(local_1b8,0x40,str_10009688,&local_b8);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x232,0x18c,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x82);
    recovered_100085a0(param_1,0x224,0x6a,param_1 + 0x678,param_1 + 0x6c0,'\0');
    uVar6 = thunk_terror_ui_colour(0x23);
    recovered_10008060(param_1,0x1de,0x1ce,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00);
    uVar6 = thunk_terror_ui_colour(0x12);
    recovered_10008060(param_1,0x1de,0x1e6,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00);
    break;
  case 3:
    local_68 = *(ulong *)(param_1 + 0x418);
    local_40 = *(ulong *)(param_1 + 0x420);
    local_60 = 0;
    if (local_68 <= local_40) {
      local_60 = local_40 - local_68;
    }
    uVar23 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000b0a8;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = uVar6 - 0x10;
    local_50 = CONCAT44(PF_PART4(local_50, 4),uVar5);
    uVar27 = DAT_1000b0a8;
    if ((int)uVar5 < (int)DAT_1000b0a8) {
      uVar27 = uVar5;
    }
    if ((int)uVar6 < 0x10) {
      uVar27 = 0;
    }
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)0x1f8;
      if (DAT_1000b0ac < 0x1f8) {
        local_38 = (undefined *)(ulong)DAT_1000b0ac;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar6 = uVar14;
          do {
            if ((((puVar17 < puVar29) && (-1 < (int)uVar6)) && (*plVar1 != 0)) &&
               ((int)uVar6 < (int)uVar7)) {
              lVar24 = (ulong)uVar6 + (long)puVar17 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar27 != uVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar23 = thunk_terror_ui_colour(3);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_50 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_50;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = 0;
    if (0xf < (int)(uint)local_48) {
      uVar5 = uVar27;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar23 >> 8);
      local_58 = CONCAT44(PF_PART4(local_58, 4),uVar14);
      if ((int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x17a;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      if (0x1f7 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x1f7;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      puVar17 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        puVar17 = (undefined *)(ulong)uVar7;
      }
      lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x5e8 + (ulong)uVar14 * 4;
      puVar30 = (undefined *)0x17a;
      do {
        if (((0x10 < (int)uVar6) && (param_1 != 0)) && (*plVar1 != 0 && puVar30 < puVar29)) {
          *(undefined1 *)(*plVar1 + lVar24) = uVar3;
          *(undefined1 *)(*plVar1 + 1 + lVar24) = uVar20;
          *(undefined1 *)(*plVar1 + 2 + lVar24) = uVar4;
          *(undefined1 *)(*plVar1 + 3 + lVar24) = 0xff;
        }
        puVar30 = puVar30 + 1;
        lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
      } while (puVar17 != puVar30);
    }
    uVar23 = (uint)local_48 - 0x11;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    if ((int)(uint)local_50 < 0) {
      uVar27 = 0;
    }
    if (0x17a < (int)uVar7) {
      local_38 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar25;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar27 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    recovered_10008cc0(param_1);
    if (local_68 < 0x40000000) {
      if (0xfffff < local_68) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005d30;
      }
      if (0x3ff < local_68) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005d30;
      }
      thunk_snprintf(local_1b8,0x40,str_10009560,local_68,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005d30:
      thunk_snprintf(local_1b8,0x40,str_10009551,local_68 >> sVar8,
                         (ulong)(uVar6 & (uint)local_68) * 100 >> sVar8,puVar29);
    }
    if (local_60 < 0x40000000) {
      if (0xfffff < local_60) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005db7;
      }
      if (0x3ff < local_60) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005db7;
      }
      thunk_snprintf((char *)&local_b8,0x40,str_10009560,local_60,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005db7:
      thunk_snprintf((char *)&local_b8,0x40,str_10009551,local_60 >> sVar8,
                         (ulong)(uVar6 & (uint)local_60) * 100 >> sVar8,puVar29);
    }
    if (local_40 < 0x40000000) {
      if (0xfffff < local_40) {
        puVar29 = &DAT_1000954b;
        uVar6 = 0xfffff;
        sVar8 = 0x14;
        goto LAB_10005e3e;
      }
      if (0x3ff < local_40) {
        puVar29 = &DAT_1000954e;
        uVar6 = 0x3ff;
        sVar8 = 10;
        goto LAB_10005e3e;
      }
      thunk_snprintf(local_f8,0x40,str_10009560,local_40,&DAT_10009546);
    }
    else {
      puVar29 = &DAT_10009548;
      uVar6 = 0x3fffffff;
      sVar8 = 0x1e;
LAB_10005e3e:
      thunk_snprintf(local_f8,0x40,str_10009551,local_40 >> sVar8,
                         (ulong)(uVar6 & (uint)local_40) * 100 >> sVar8,puVar29);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x3e9U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x82);
    uVar6 = thunk_terror_ui_colour(4);
    recovered_10007d70(param_1,0xce,0x1c2,(long)&local_b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x3f9U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,100);
    uVar6 = thunk_terror_ui_colour(0x11);
    recovered_10007d70(param_1,0xce,0x1da,(long)local_1b8,
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
    uVar14 = thunk_terror_ui_colour(0x23);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    lVar24 = (ulong)DAT_1000b0a8 * 0x6b0;
    local_38 = (undefined *)((ulong)DAT_1000b0a8 * 4);
    iVar19 = -0x20;
    do {
      lVar28 = 0;
      do {
        iVar16 = (int)lVar28 + -0x20;
        if ((((((uint)(iVar16 * iVar16 + iVar19 * iVar19) < 0x401) && (param_1 != 0)) &&
             (uVar23 = (int)lVar28 + 0x214, -1 < (int)(uVar23 | iVar19 + 0x1ccU))) &&
            ((*plVar1 != 0 && ((int)uVar23 < (int)uVar6)))) && ((int)(iVar19 + 0x1ccU) < (int)uVar7)
           ) {
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x850) = (char)(uVar14 >> 0x10);
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x851) = (char)(uVar14 >> 8);
          *(char *)(lVar24 + lVar28 * 4 + *plVar1 + 0x852) = (char)uVar14;
          *(undefined1 *)(lVar24 + lVar28 * 4 + *plVar1 + 0x853) = 0xff;
        }
        lVar28 = lVar28 + 1;
      } while ((int)lVar28 != 0x41);
      iVar19 = iVar19 + 1;
      lVar24 = lVar24 + (long)local_38;
    } while (iVar19 != 0x21);
    if ((local_40 != 0) && (local_68 < local_40)) {
      local_50 = local_60 << 6;
      if ((local_50 | local_40) >> 0x20 == 0) {
        local_50 = (local_50 & 0xffffffff) / (local_40 & 0xffffffff);
      }
      else {
        local_50 = local_50 / local_40;
      }
      iVar19 = (int)local_50;
      local_48 = 0xffffffe0;
      local_40 = 0x1ac;
      do {
        if (-1 < (int)local_50) {
          iVar16 = (int)local_48;
          local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),iVar16 + 0x1cc);
          lVar24 = 0x214;
          do {
            uVar6 = (uint)lVar24;
            if (((uVar6 - 0x234) * (uVar6 - 0x234) + iVar16 * iVar16 < 0x401) &&
               (uVar7 = thunk_terror_ui_colour(4), param_1 != 0)) {
              if ((-1 < (int)(uVar6 | (uint)local_38) && *plVar1 != 0) &&
                 (((int)uVar6 < (int)DAT_1000b0a8 && ((int)(uint)local_38 < (int)DAT_1000b0ac)))) {
                lVar28 = DAT_1000b0a8 * local_40 + lVar24;
                *(char *)(*plVar1 + lVar28 * 4) = (char)(uVar7 >> 0x10);
                *(char *)(*plVar1 + 1 + lVar28 * 4) = (char)(uVar7 >> 8);
                *(char *)(*plVar1 + 2 + lVar28 * 4) = (char)uVar7;
                *(undefined1 *)(*plVar1 + 3 + lVar28 * 4) = 0xff;
              }
            }
            lVar24 = lVar24 + 1;
          } while ((int)(uVar6 - 0x234) < iVar19 + -0x20);
        }
        uVar6 = (int)local_48 + 1;
        local_48 = (ulong)uVar6;
        local_40 = local_40 + 1;
      } while (uVar6 != 0x21);
    }
    uVar6 = thunk_terror_ui_colour(1);
    uVar7 = (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00;
    pcVar10 = local_f8;
    uVar6 = 0x212;
    iVar19 = 0x1f6;
    uVar14 = 0x78;
LAB_10006a09:
    recovered_10007d70(param_1,uVar6,iVar19,(long)pcVar10,uVar7,uVar14);
    break;
  default:
    uVar23 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000b0a8;
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = uVar6 - 0x10;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar5);
    uVar27 = DAT_1000b0a8;
    if ((int)uVar5 < (int)DAT_1000b0a8) {
      uVar27 = uVar5;
    }
    if ((int)uVar6 < 0x10) {
      uVar27 = 0;
    }
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)0x1f8;
      if (DAT_1000b0ac < 0x1f8) {
        local_38 = (undefined *)(ulong)DAT_1000b0ac;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar6 = uVar14;
          do {
            if ((((puVar17 < puVar29) && (-1 < (int)uVar6)) && (*plVar1 != 0)) &&
               ((int)uVar6 < (int)uVar7)) {
              lVar24 = (ulong)uVar6 + (long)puVar17 * uVar25;
              *(char *)(*plVar1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 0x10);
              *(char *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = (char)(uVar23 >> 8);
              *(char *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = (char)uVar23;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar27 != uVar6);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar23 = thunk_terror_ui_colour(3);
    uVar7 = DAT_1000b0ac;
    uVar6 = DAT_1000b0a8;
    uVar3 = (undefined1)(uVar23 >> 0x10);
    uVar25 = (ulong)DAT_1000b0a8;
    uVar14 = 0x10;
    if ((int)DAT_1000b0a8 < 0x10) {
      uVar14 = DAT_1000b0a8;
    }
    uVar27 = DAT_1000b0a8;
    if ((int)(uint)local_40 < (int)DAT_1000b0a8) {
      uVar27 = (uint)local_40;
    }
    puVar29 = (undefined *)(long)(int)DAT_1000b0ac;
    uVar5 = 0;
    if (0xf < (int)(uint)local_48) {
      uVar5 = uVar27;
    }
    uVar4 = (undefined1)uVar23;
    uVar20 = (undefined1)(uVar23 >> 8);
    if (0x17a < (long)puVar29) {
      local_38 = (undefined *)CONCAT44(PF_PART4(local_38, 4),uVar23 >> 8);
      local_50 = CONCAT44(PF_PART4(local_50, 4),uVar14);
      if ((int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x17a;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      if (0x1f7 < (int)uVar7 && (int)uVar14 < (int)uVar5) {
        uVar23 = uVar14;
        do {
          if ((param_1 != 0) && (((int)uVar23 < (int)uVar6 && -1 < (int)uVar23) && *plVar1 != 0)) {
            lVar24 = (ulong)uVar23 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x1f7;
            *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
            *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
            *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
            *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar5 != uVar23);
      }
      puVar17 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        puVar17 = (undefined *)(ulong)uVar7;
      }
      lVar24 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 0x5e8 + (ulong)uVar14 * 4;
      puVar30 = (undefined *)0x17a;
      do {
        if (((0x10 < (int)uVar6) && (param_1 != 0)) && (*plVar1 != 0 && puVar30 < puVar29)) {
          *(undefined1 *)(*plVar1 + lVar24) = uVar3;
          *(undefined1 *)(*plVar1 + 1 + lVar24) = uVar20;
          *(undefined1 *)(*plVar1 + 2 + lVar24) = uVar4;
          *(undefined1 *)(*plVar1 + 3 + lVar24) = 0xff;
        }
        puVar30 = puVar30 + 1;
        lVar24 = lVar24 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar25 * 4;
      } while (puVar17 != puVar30);
    }
    uVar23 = (uint)local_48 - 0x11;
    uVar14 = uVar6;
    if ((int)uVar23 < (int)uVar6) {
      uVar14 = uVar23;
    }
    if ((int)uVar23 < 0) {
      uVar14 = 0;
    }
    if ((int)(uint)local_40 < 0) {
      uVar27 = 0;
    }
    if (0x17a < (int)uVar7) {
      local_38 = (undefined *)0x1f8;
      if (uVar7 < 0x1f8) {
        local_38 = (undefined *)(ulong)uVar7;
      }
      puVar17 = (undefined *)0x17a;
      do {
        if ((int)uVar14 < (int)uVar27) {
          uVar7 = uVar14;
          do {
            if (((param_1 != 0) && (puVar17 < puVar29)) &&
               ((-1 < (int)uVar7 && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar6)))))) {
              lVar24 = (ulong)uVar7 + (long)puVar17 * uVar25;
              *(undefined1 *)(*plVar1 + (uintptr_t)lVar24 * 4) = uVar3;
              *(undefined1 *)(*plVar1 + 1 + (uintptr_t)lVar24 * 4) = uVar20;
              *(undefined1 *)(*plVar1 + 2 + (uintptr_t)lVar24 * 4) = uVar4;
              *(undefined1 *)(*plVar1 + 3 + (uintptr_t)lVar24 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar27 != uVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != local_38);
    }
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x405U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x6e);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x413U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x78);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x422U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0xa0);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x439U),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x8c);
    uVar6 = thunk_terror_ui_colour(1);
    recovered_10007d70(param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x44cU),
                       (uVar6 & 0xff0000) >> 0x10 | uVar6 << 0x10 | uVar6 & 0xff00,0x82);
    recovered_100085a0(param_1,0x224,0x6a,0,0,'\0');
  }
  uVar14 = DAT_1000b0ac;
  uVar7 = DAT_1000b0a8;
  pixels = *(void **)(param_1 + 0x350);
  uVar6 = DAT_1000b0a8 * 4;
  uVar23 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present((void *)param_1,str_1000947c,pixels,uVar7,uVar14,uVar6,uVar23);
  return;
}

#undef DAT_1000953d
#undef DAT_10009546
#undef DAT_10009548
#undef DAT_1000954b
#undef DAT_1000954e
#undef DAT_10009730
#undef DAT_10009750
#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef PTR_str_100094da_1000a010
#undef str_1000947c
#undef str_10009540
#undef str_10009551
#undef str_10009560
#undef str_100095b1
#undef str_100095c4
#undef str_100095d8
#undef str_10009605
#undef str_10009614
#undef str_10009625
#undef str_10009633
#undef str_10009642
#undef str_10009650
#undef str_10009661
#undef str_10009673
#undef str_10009688
#undef str_100096a9
#undef local_1b8
#undef local_1a8
#undef local_1a4
#undef local_f8
#undef local_b8
#undef local_b0
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c40
 */

void recovered_10006c40(void *in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006c81. Too many branches */
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
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c90
 */

void recovered_10006c90(long param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  void *records;
  long lVar4;
  ulong uVar5;
  int *piVar6;

  local_2c = 0;
  local_30 = 0;
  if (((param_1 == 0) || (*(int *)(param_1 + 0x368) == -1)) ||
     ((ulong)*(uint *)(param_1 + 0x5a4) == 0)) {
    return;
  }
  lVar4 = 0;
  while (*(int *)(*(long *)(param_1 + 0x530) + lVar4) != *(int *)(param_1 + 0x368)) {
    lVar4 = lVar4 + 0x1b8;
    if ((ulong)*(uint *)(param_1 + 0x5a4) * 0x1b8 == lVar4) {
      return;
    }
  }
  uVar3 = 0;
  uVar2 = thunk_terror_ui_window_list((void *)0x0,0,&local_2c);
  if (uVar2 == 0) {
    return;
  }
  if (local_2c == 0) {
    records = (void *)0x0;
  }
  else {
    iVar1 = Ram0000000000280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x4f < uVar3))))
    {
      uVar3 = UINT_0028084c;
      if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_10006d77;
      records = (*(code *)(ulong)uVar3)((ulong)local_2c * 0x278);
    }
    else {
LAB_10006d77:
      records = (void *)0x0;
    }
    uVar3 = local_2c;
    if ((local_2c != 0) && (records == (void *)0x0)) {
      records = (void *)0x0;
      goto LAB_10006e00;
    }
  }
  uVar3 = thunk_terror_ui_window_list(records,uVar3,&local_30);
  if (((uVar3 != 0) && (local_30 <= local_2c)) && (local_30 != 0)) {
    piVar6 = (int *)((long)records + 0x30);
    uVar5 = 0;
    uVar3 = local_30;
    do {
      if (piVar6[-0xb] == *(int *)(param_1 + 0x368)) {
        thunk_terror_ui_window_configure(piVar6[-0xc],piVar6[-1],*piVar6,0xe,10);
        uVar3 = local_30;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0x9e;
    } while (uVar5 < uVar3);
  }
LAB_10006e00:
  iVar1 = Ram0000000000280800;
  if (iVar1 != 0x50414d57) {
    return;
  }
  iVar1 = Ram0000000000280804;
  if (iVar1 == 0) {
    return;
  }
  uVar3 = Ram0000000000280808;
  if (uVar3 < 0xc) {
    return;
  }
  uVar3 = Ram0000000000280808;
  if (uVar3 < 0x54) {
    return;
  }
  uVar3 = UINT_00280850;
  if (uVar3 == 0) {
    return;
  }
  (*(code *)(ulong)uVar3)(records);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef local_30
#undef local_2c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef DAT_100094aa
#define DAT_100094aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e3U)))
#undef DAT_100094b3
#define DAT_100094b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a20
#define Ram0000000000280a20 (*(uint32_t *)(0x280a20U))
#undef str_100094ac
#define str_100094ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_100094b7
#define str_100094b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#define abStack_ba (*(byte (*)[186])(pf_stack_frame + 406))
#define abStack_23a (*(byte (*)[570])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

void recovered_10006e50(long param_1)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  ulonglong arg3;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  char *arg5;
  byte bVar10;
  byte *pbVar11;

  if (param_1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x368) != -1) && (uVar6 = (ulong)*(uint *)(param_1 + 0x5a4), uVar6 != 0))
  {
    pbVar8 = (byte *)(*(long *)(param_1 + 0x530) + 0xc0);
    do {
      if (*(int *)(pbVar8 + -0xc0) == *(int *)(param_1 + 0x368)) {
        pbVar11 = &DAT_100094aa;
        if (*pbVar8 != 0) {
          pbVar11 = pbVar8;
        }
        arg5 = str_100094ac;
        if ((pbVar8[-0xbc] & 1) == 0) {
          arg5 = &DAT_100094b3;
        }
        arg3 = *(ulonglong *)(pbVar8 + -0x90);
        abStack_23a[2] = 0;
        iVar4 = Ram0000000000280800;
        if ((((iVar4 != 0x50414d57) || (iVar4 = Ram0000000000280804, iVar4 == 0)) ||
            (uVar1 = Ram0000000000280808, uVar1 < 0xc)) ||
           ((uVar1 = Ram0000000000280808, uVar1 < 0x224 || (iVar4 = Ram0000000000280a20, iVar4 == 0)
            ))) goto LAB_10006f78;
        uVar1 = Ram0000000000280a20;
        iVar4 = (*(code *)(ulong)uVar1)(*(undefined4 *)(pbVar8 + -0x84),abStack_ba + 2,0x80);
        if (abStack_ba[2] == 0 || iVar4 < 0) goto LAB_10006f78;
        lVar7 = 1;
        lVar9 = 0;
        uVar6 = 1;
        bVar10 = abStack_ba[2];
        goto LAB_10006fcd;
      }
      pbVar8 = pbVar8 + 0x1b8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x708) = 0;
  return;
LAB_100070ed:
  uVar5 = 0x173;
  if (uVar6 < 0x173) {
    uVar5 = uVar6;
  }
  abStack_23a[uVar5 + 2] = 0;
  goto LAB_10006f78;
  while( true ) {
    if (bVar10 == 0x5c) {
      if ((lVar9 == 0) || (uVar6 = uVar6 + 1, 6 < uVar6)) goto LAB_10006f78;
      lVar9 = 0;
    }
    else {
      if (((9 < (byte)(bVar10 - 0x30U)) && (0x19 < (byte)((bVar10 & 0xdf) + 0xbf))) &&
         ((bVar10 != 0x5f && (bVar10 != 0x2d)))) goto LAB_10006f78;
      lVar9 = lVar9 + 1;
    }
    bVar10 = abStack_ba[lVar7 + 2];
    lVar7 = lVar7 + 1;
    if (bVar10 == 0) break;
LAB_10006fcd:
    if (lVar7 == 0x80) goto LAB_10006f78;
  }
  if (1 < uVar6 && lVar9 != 0) {
    abStack_23a[2] = 0x5b;
    uVar6 = 3;
    do {
      uVar5 = uVar6;
      if (uVar5 - 1 < 0x174) {
        abStack_23a[uVar5] = abStack_ba[2];
      }
      abStack_ba[2] = abStack_ba[uVar5];
      uVar6 = uVar5 + 1;
    } while (abStack_ba[2] != 0);
    if (uVar5 < 0x174) {
      abStack_23a[uVar5 + 1] = 0x5d;
    }
    if (uVar6 < 0x174) {
      abStack_23a[uVar5 + 2] = 0x5c;
    }
    do {
      bVar10 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar10 == 0x5c);
    bVar2 = true;
    do {
      if (bVar10 == 0x5c) {
        bVar3 = true;
        if (!bVar2) goto joined_r0x100070e2;
        uVar5 = uVar6;
        bVar2 = bVar3;
      }
      else {
        if (bVar10 == 0) goto LAB_100070ed;
        bVar3 = false;
joined_r0x100070e2:
        uVar5 = uVar6 + 1;
        bVar2 = bVar3;
        if (uVar6 + 1 < 0x174) {
          abStack_23a[uVar6 + 2] = bVar10;
          uVar5 = uVar6 + 1;
        }
      }
      uVar6 = uVar5;
      bVar10 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while( true );
  }
LAB_10006f78:
  thunk_snprintf((char *)(param_1 + 0x708),0x1b0,str_100094b7,arg3,abStack_23a + 2,arg5,
                     *(uint *)(pbVar8 + -0x88));
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef DAT_100094aa
#undef DAT_100094b3
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a20
#undef str_100094ac
#undef str_100094b7
#undef abStack_ba
#undef abStack_23a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007110
 */

void recovered_10007110(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;

  if (param_1 != 0) {
    recovered_100071c0(param_1);
    if (*(uint *)(param_1 + 0x5a8) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar1 = (ulong)(*(int *)(param_1 + 0x36c) + 1) % (ulong)*(uint *)(param_1 + 0x5a8);
      *(int *)(param_1 + 0x36c) = (int)uVar1;
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x518) + 0x1c + uVar1 * 0x28);
    }
    *(undefined4 *)(param_1 + 0x370) = uVar2;
    thunk_memset((void *)(param_1 + 0x678),0,0x48);
    thunk_memset((void *)(param_1 + 0x6c0),0,0x48);
    *(undefined1 *)(param_1 + 0x5a1) = 0;
    *(undefined8 *)(param_1 + 0x5c4) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    *(undefined8 *)(param_1 + 0x5e0) = 0;
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
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram00000000002809d0
#define Ram00000000002809d0 (*(uint32_t *)(0x2809d0U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071c0
 */

void recovered_100071c0(long param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  void *ptr;
  void *ptr_00;
  int *piVar4;
  ulong uVar5;

  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  iVar2 = Ram0000000000280800;
  if ((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
      (uVar1 = Ram0000000000280808, uVar1 < 0xc)) || (uVar1 = Ram0000000000280808, uVar1 < 0x1d4)) {
LAB_100072c4:
    *(undefined4 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x36c) = 0xffffffff00000000;
    return;
  }
  uVar1 = Ram00000000002809d0;
  if (((code *)(ulong)uVar1 == (code *)0x0) ||
     (iVar2 = (*(code *)(ulong)uVar1)(0,0,0,0,&local_2c,&local_24), iVar2 == 0)) goto LAB_100072c4;
  if (*(uint *)(param_1 + 0x528) < local_2c) {
LAB_10007278:
    iVar2 = Ram0000000000280800;
    if (((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
       ((uVar1 = Ram0000000000280808, uVar1 < 0xc || (uVar1 = Ram0000000000280808, uVar1 < 0x50))))
    goto LAB_100072ea;
    uVar1 = UINT_0028084c;
    if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_100072ea;
    ptr = (*(code *)(ulong)uVar1)((ulong)local_2c * 0x28);
  }
  else {
    if (local_24 <= *(uint *)(param_1 + 0x52c)) {
      iVar2 = Ram0000000000280800;
      if (iVar2 != 0x50414d57) {
        return;
      }
      iVar2 = Ram0000000000280804;
      if (iVar2 == 0) {
        return;
      }
      uVar1 = Ram0000000000280808;
      if (uVar1 < 0xc) {
        return;
      }
      uVar1 = Ram0000000000280808;
      if (uVar1 < 0x1d4) {
        return;
      }
      uVar1 = Ram00000000002809d0;
      if ((code *)(ulong)uVar1 == (code *)0x0) {
        return;
      }
      iVar2 = (*(code *)(ulong)uVar1)
                        (*(undefined8 *)(param_1 + 0x518),*(uint *)(param_1 + 0x528),
                         *(undefined8 *)(param_1 + 0x520),*(uint *)(param_1 + 0x52c),&local_28,
                         &local_30);
      if (iVar2 == 0) {
        return;
      }
      if (*(uint *)(param_1 + 0x528) < local_28) {
        return;
      }
      if (*(uint *)(param_1 + 0x52c) < local_30) {
        return;
      }
      goto LAB_10007530;
    }
    if ((ulong)local_2c != 0) goto LAB_10007278;
LAB_100072ea:
    ptr = (void *)0x0;
  }
  if (((((ulong)local_24 == 0) || (iVar2 = Ram0000000000280800, iVar2 != 0x50414d57)) ||
      (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
     ((uVar1 = Ram0000000000280808, uVar1 < 0xc || (uVar1 = Ram0000000000280808, uVar1 < 0x50)))) {
LAB_10007337:
    ptr_00 = (void *)0x0;
  }
  else {
    uVar1 = UINT_0028084c;
    if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_10007337;
    ptr_00 = (*(code *)(ulong)uVar1)((ulong)local_24);
  }
  if ((((local_2c == 0) || (ptr != (void *)0x0)) && ((local_24 == 0 || (ptr_00 != (void *)0x0)))) &&
     ((((iVar2 = Ram0000000000280800, iVar2 == 0x50414d57 &&
        (iVar2 = Ram0000000000280804, iVar2 != 0)) && (uVar1 = Ram0000000000280808, 0xb < uVar1)) &&
      (uVar1 = Ram0000000000280808, 0x1d3 < uVar1)))) {
    uVar1 = Ram00000000002809d0;
    if ((((code *)(ulong)uVar1 != (code *)0x0) &&
        (iVar2 = (*(code *)(ulong)uVar1)(ptr,local_2c,ptr_00,local_24,&local_28,&local_30),
        iVar2 != 0)) && ((local_28 <= local_2c && (local_30 <= local_24)))) {
      recovered_10006c40(*(void **)(param_1 + 0x518));
      recovered_10006c40(*(void **)(param_1 + 0x520));
      *(void **)(param_1 + 0x518) = ptr;
      *(void **)(param_1 + 0x520) = ptr_00;
      *(uint *)(param_1 + 0x528) = local_2c;
      *(uint *)(param_1 + 0x52c) = local_24;
LAB_10007530:
      *(uint *)(param_1 + 0x5a8) = local_28;
      if (local_28 != 0) {
        piVar4 = (int *)(*(long *)(param_1 + 0x518) + 0x1c);
        uVar5 = 0;
        do {
          if (*piVar4 == *(int *)(param_1 + 0x370)) {
            *(int *)(param_1 + 0x36c) = (int)uVar5;
            return;
          }
          uVar5 = uVar5 + 1;
          piVar4 = piVar4 + 10;
        } while (local_28 != uVar5);
      }
      iVar2 = Ram0000000000280800;
      iVar3 = -1;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar1 = Ram0000000000280808, 0xb < uVar1)) && (uVar1 = Ram0000000000280808, 0xbf < uVar1)
         ) {
        uVar1 = UINT_002808bc;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          iVar3 = (*(code *)(ulong)uVar1)();
        }
      }
      if (local_28 == 0) {
        return;
      }
      piVar4 = (int *)(*(long *)(param_1 + 0x518) + 0x1c);
      uVar5 = 0;
      do {
        if (*piVar4 == iVar3) {
          *(int *)(param_1 + 0x370) = iVar3;
          *(int *)(param_1 + 0x36c) = (int)uVar5;
          return;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 10;
      } while (local_28 != uVar5);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(*(long *)(param_1 + 0x518) + 0x1c);
      *(undefined4 *)(param_1 + 0x36c) = 0;
      return;
    }
  }
  iVar2 = Ram0000000000280800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000280808, 0xb < uVar1 && (uVar1 = Ram0000000000280808, 0x53 < uVar1)))) {
    uVar1 = UINT_00280850;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      (*(code *)(ulong)uVar1)(ptr);
    }
  }
  iVar2 = Ram0000000000280800;
  if (iVar2 != 0x50414d57) {
    return;
  }
  iVar2 = Ram0000000000280804;
  if (iVar2 == 0) {
    return;
  }
  uVar1 = Ram0000000000280808;
  if (uVar1 < 0xc) {
    return;
  }
  uVar1 = Ram0000000000280808;
  if (uVar1 < 0x54) {
    return;
  }
  uVar1 = UINT_00280850;
  if ((code *)(ulong)uVar1 == (code *)0x0) {
    return;
  }
  (*(code *)(ulong)uVar1)(ptr_00);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809d0
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram00000000002809d0
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808bc
#undef local_28
#undef local_24
#undef local_30
#undef local_2c

#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

void recovered_10007620(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;

  uVar2 = DAT_1000b0ac;
  uVar1 = DAT_1000b0a8;
  uVar3 = (ulong)DAT_1000b0a8;
  uVar9 = (uint)param_2;
  uVar6 = DAT_1000b0a8;
  if ((int)uVar9 < (int)DAT_1000b0a8) {
    uVar6 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar6 = 0;
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar7 = DAT_1000b0ac;
  if ((int)uVar5 < (int)DAT_1000b0ac) {
    uVar7 = uVar5;
  }
  uVar9 = (int)param_3 + uVar9;
  if (param_2 < 0) {
    uVar7 = 0;
  }
  uVar4 = DAT_1000b0a8;
  if ((int)uVar9 < (int)DAT_1000b0a8) {
    uVar4 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar4 = 0;
  }
  uVar5 = (int)((ulong)param_3 >> 0x20) + uVar5;
  uVar9 = DAT_1000b0ac;
  if ((int)uVar5 < (int)DAT_1000b0ac) {
    uVar9 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar9 = 0;
  }
  if ((int)uVar7 < (int)uVar9) {
    do {
      if ((int)uVar6 < (int)uVar4) {
        uVar5 = uVar6;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar5 | uVar7))) && (*(long *)(param_1 + 0x350) != 0))
             && (((int)uVar5 < (int)uVar1 && ((int)uVar7 < (int)uVar2)))) {
            lVar8 = (ulong)uVar5 + uVar7 * uVar3;
            *(char *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = (char)param_4;
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = (char)((uint)param_4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = (char)((uint)param_4 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  return;
}

#undef DAT_1000b0a8
#undef DAT_1000b0ac

#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
#define local_54 (*(char *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

void recovered_10007740(long param_1,ulong param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;

  uVar4 = 0x3b;
  if (param_4 != 0) {
    uVar4 = 2;
  }
  uVar3 = thunk_terror_ui_colour(uVar4);
  uVar2 = DAT_1000b0ac;
  uVar4 = DAT_1000b0a8;
  uVar5 = (ulong)DAT_1000b0a8;
  uVar7 = (uint)param_2;
  uVar6 = DAT_1000b0a8;
  if ((int)uVar7 < (int)DAT_1000b0a8) {
    uVar6 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar6 = 0;
  }
  uVar13 = (uint)(param_2 >> 0x20);
  uVar8 = DAT_1000b0ac;
  if ((int)uVar13 < (int)DAT_1000b0ac) {
    uVar8 = uVar13;
  }
  if ((long)param_2 < 0) {
    uVar8 = 0;
  }
  uVar10 = uVar7 + 0x4c;
  uVar9 = DAT_1000b0a8;
  if ((int)uVar10 < (int)DAT_1000b0a8) {
    uVar9 = uVar10;
  }
  if ((int)uVar7 < -0x4c) {
    uVar9 = 0;
  }
  uVar14 = uVar13 + 0x12;
  uVar12 = DAT_1000b0ac;
  if ((int)uVar14 < (int)DAT_1000b0ac) {
    uVar12 = uVar14;
  }
  if ((long)param_2 < -0x1200000000) {
    uVar12 = 0;
  }
  if ((int)uVar8 < (int)uVar12) {
    do {
      if ((int)uVar6 < (int)uVar9) {
        uVar16 = uVar6;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar16 | uVar8))) && (*(long *)(param_1 + 0x350) != 0)
              ) && (((int)uVar16 < (int)uVar4 && ((int)uVar8 < (int)uVar2)))) {
            lVar17 = (ulong)uVar16 + uVar8 * uVar5;
            *(char *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = (char)(uVar3 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = (char)uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar12);
  }
  uVar3 = thunk_terror_ui_colour(3);
  uVar2 = DAT_1000b0ac;
  uVar4 = DAT_1000b0a8;
  uVar1 = (undefined1)(uVar3 >> 0x10);
  uVar5 = (ulong)DAT_1000b0a8;
  uVar6 = DAT_1000b0a8;
  if ((int)uVar7 < (int)DAT_1000b0a8) {
    uVar6 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar6 = 0;
  }
  uVar8 = DAT_1000b0ac;
  if ((int)uVar13 < (int)DAT_1000b0ac) {
    uVar8 = uVar13;
  }
  if ((long)param_2 < 0) {
    uVar8 = 0;
  }
  uVar9 = DAT_1000b0a8;
  if ((int)uVar10 < (int)DAT_1000b0a8) {
    uVar9 = uVar10;
  }
  uVar12 = uVar9;
  if ((int)uVar7 < -0x4c) {
    uVar12 = 0;
  }
  uVar16 = uVar13 + 1;
  if ((int)DAT_1000b0ac <= (int)(uVar13 + 1)) {
    uVar16 = DAT_1000b0ac;
  }
  if ((long)param_2 < -0x100000000) {
    uVar16 = 0;
  }
  uVar18 = (undefined1)uVar3;
  uVar15 = (undefined1)(uVar3 >> 8);
  if ((int)uVar8 < (int)uVar16) {
    uVar3 = uVar8;
    do {
      if ((int)uVar6 < (int)uVar12) {
        uVar11 = uVar6;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar3))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar11 < (int)uVar4 && ((int)uVar3 < (int)uVar2)))))) {
            lVar17 = (ulong)uVar11 + uVar3 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = uVar15;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = uVar18;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar16);
  }
  lVar17 = (param_2 & 0xffffffff00000000) + 0x1100000000;
  uVar16 = (uint)((ulong)lVar17 >> 0x20);
  uVar3 = uVar2;
  if ((int)uVar16 < (int)uVar2) {
    uVar3 = uVar16;
  }
  if (lVar17 < 0) {
    uVar3 = 0;
  }
  uVar11 = uVar16 + 1;
  if ((int)uVar2 <= (int)(uVar16 + 1)) {
    uVar11 = uVar2;
  }
  if ((int)uVar16 < -1) {
    uVar11 = 0;
  }
  if ((int)uVar3 < (int)uVar11) {
    do {
      if ((int)uVar6 < (int)uVar12) {
        uVar16 = uVar6;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar16 | uVar3))) && (*(long *)(param_1 + 0x350) != 0)
              ) && (((int)uVar16 < (int)uVar4 && ((int)uVar3 < (int)uVar2)))) {
            lVar17 = (ulong)uVar16 + uVar3 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = uVar15;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = uVar18;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar16 = uVar16 + 1;
        } while (uVar12 != uVar16);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar11);
  }
  uVar12 = uVar7 + 1;
  uVar3 = uVar4;
  if ((int)uVar12 < (int)uVar4) {
    uVar3 = uVar12;
  }
  if ((int)uVar7 < -1) {
    uVar3 = 0;
  }
  if ((int)uVar2 <= (int)uVar14) {
    uVar14 = uVar2;
  }
  if ((long)param_2 < -0x1200000000) {
    uVar14 = 0;
  }
  uVar16 = uVar8;
  if ((int)uVar8 < (int)uVar14) {
    do {
      if ((int)uVar6 < (int)uVar3) {
        uVar11 = uVar6;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar16))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar11 < (int)uVar4 && ((int)uVar16 < (int)uVar2)))))) {
            lVar17 = (ulong)uVar11 + uVar16 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = uVar15;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = uVar18;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar14);
  }
  uVar3 = uVar7 + 0x4b;
  uVar6 = uVar4;
  if ((int)uVar3 < (int)uVar4) {
    uVar6 = uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar10 < 0) {
    uVar9 = 0;
  }
  if ((int)uVar8 < (int)uVar14) {
    do {
      if ((int)uVar6 < (int)uVar9) {
        uVar10 = uVar6;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar10 | uVar8))) && (*(long *)(param_1 + 0x350) != 0)
              ) && (((int)uVar10 < (int)uVar4 && ((int)uVar8 < (int)uVar2)))) {
            lVar17 = (ulong)uVar10 + uVar8 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = uVar15;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = uVar18;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar14);
  }
  uVar8 = thunk_terror_ui_colour(0x1f);
  uVar2 = DAT_1000b0ac;
  uVar4 = DAT_1000b0a8;
  lVar17 = (param_2 & 0xffffffff00000000) + 0x100000000;
  uVar5 = (ulong)DAT_1000b0a8;
  uVar6 = DAT_1000b0a8;
  if ((int)uVar12 < (int)DAT_1000b0a8) {
    uVar6 = uVar12;
  }
  if ((int)uVar12 < 0) {
    uVar6 = 0;
  }
  uVar10 = (uint)((ulong)lVar17 >> 0x20);
  uVar9 = DAT_1000b0ac;
  if ((int)uVar10 < (int)DAT_1000b0ac) {
    uVar9 = uVar10;
  }
  if (lVar17 < 0) {
    uVar9 = 0;
  }
  uVar12 = DAT_1000b0a8;
  if ((int)uVar3 < (int)DAT_1000b0a8) {
    uVar12 = uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar12 = 0;
  }
  uVar3 = uVar10 + 1;
  if ((int)DAT_1000b0ac <= (int)(uVar10 + 1)) {
    uVar3 = DAT_1000b0ac;
  }
  if ((int)uVar10 < -1) {
    uVar3 = 0;
  }
  if ((int)uVar9 < (int)uVar3) {
    do {
      if ((int)uVar6 < (int)uVar12) {
        uVar10 = uVar6;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar10 | uVar9))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar10 < (int)uVar4 && ((int)uVar9 < (int)uVar2)))))) {
            lVar17 = (ulong)uVar10 + uVar9 * uVar5;
            *(char *)(*(long *)(param_1 + 0x350) + lVar17 * 4) = (char)(uVar8 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar17 * 4) = (char)(uVar8 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar17 * 4) = (char)uVar8;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  local_54 = (char)param_4;
  uVar4 = 0x32;
  if (local_54 != '\0') {
    uVar4 = 1;
  }
  uVar4 = thunk_terror_ui_colour(uVar4);
  recovered_10007d70(param_1,uVar7 + 9,uVar13 + 6,param_3,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00,0x3c);
  return;
}

#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef local_54

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(int *)(((uintptr_t)pf_module_state + 0x1de5U)))
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
#define local_60 (*(void * *)(pf_stack_frame + 16))
#define local_54 (*(uint *)(pf_stack_frame + 28))
#define local_50 (*(uint *)(pf_stack_frame + 32))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_3c (*(int *)(pf_stack_frame + 52))
#define local_38 (*(uint *)(pf_stack_frame + 56))
#define local_34 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

void recovered_10007d70(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       )

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;

  if ((((param_1 != 0) && (param_6 != 0)) && (param_4 != 0)) && (*(long *)(param_1 + 0x350) != 0)) {
    local_34 = param_3;
    thunk_memset(&local_60,0,0x18);
    iVar2 = Ram0000000000280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
       ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x17b < uVar3))))
    {
      uVar3 = UINT_00280978;
      if ((((code *)(ulong)uVar3 != (code *)0x0) &&
          (uVar4 = (*(code *)(ulong)uVar3)
                             ((char *)param_4,0xffffffff,1,
                              (param_5 | 0xff000000) >> 0x18 | (param_5 & 0xff0000) >> 8 |
                              (param_5 & 0xff00) << 8 | param_5 << 0x18,&local_60),
          iVar2 = DAT_1000b0ac, uVar3 = DAT_1000b0a8, uVar4 != 0)) && (local_60 != (void *)0x0)) {
        if (local_4c < local_54 * 4) {
          iVar2 = Ram0000000000280800;
        }
        else {
          if (local_50 != 0) {
            uVar4 = param_6;
            if (local_54 < param_6) {
              uVar4 = local_54;
            }
            if ((int)param_6 < 1) {
              uVar4 = local_54;
            }
            local_3c = DAT_1000b0ac;
            uVar9 = (ulong)DAT_1000b0a8;
            uVar11 = 0;
            do {
              uVar5 = (int)uVar11 + local_34;
              if (((-1 < (int)uVar5) && ((int)uVar5 < iVar2)) && (uVar4 != 0)) {
                lVar12 = (long)local_60 + 1;
                uVar13 = (ulong)uVar4;
                uVar14 = param_2;
                do {
                  if ((int)uVar14 < (int)uVar3 && -1 < (int)uVar14) {
                    lVar7 = local_4c * uVar11;
                    uVar6 = (uint)*(byte *)(lVar12 + 2 + lVar7);
                    if (uVar6 != 0) {
                      lVar1 = *(long *)(param_1 + 0x350);
                      lVar10 = (ulong)uVar14 + uVar5 * uVar9;
                      if (uVar6 == 0xff) {
                        *(undefined1 *)(lVar1 + lVar10 * 4) = *(undefined1 *)(lVar12 + -1 + lVar7);
                        *(undefined1 *)(lVar1 + 1 + lVar10 * 4) = *(undefined1 *)(lVar12 + lVar7);
                        *(undefined1 *)(lVar1 + 2 + lVar10 * 4) =
                             *(undefined1 *)(lVar12 + 1 + lVar7);
                      }
                      else {
                        uVar8 = uVar6 ^ 0xff;
                        *(char *)(lVar1 + lVar10 * 4) =
                             (char)((*(byte *)(lVar1 + lVar10 * 4) * uVar8 +
                                     *(byte *)(lVar12 + -1 + lVar7) * uVar6 + 0x7f) / 0xff);
                        *(char *)(lVar1 + 1 + lVar10 * 4) =
                             (char)((*(byte *)(lVar12 + lVar7) * uVar6 +
                                     *(byte *)(lVar1 + 1 + lVar10 * 4) * uVar8 + 0x7f) / 0xff);
                        *(char *)(lVar1 + 2 + lVar10 * 4) =
                             (char)((*(byte *)(lVar12 + 1 + lVar7) * uVar6 +
                                     *(byte *)(lVar1 + 2 + lVar10 * 4) * uVar8 + 0x7f) / 0xff);
                      }
                      *(undefined1 *)(lVar1 + 3 + lVar10 * 4) = 0xff;
                    }
                  }
                  lVar12 = lVar12 + 4;
                  uVar14 = uVar14 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < local_50);
          }
          iVar2 = Ram0000000000280800;
        }
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
           ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
            ((uVar3 = Ram0000000000280808, 0x53 < uVar3 && (uVar3 = UINT_00280850, uVar3 != 0))))))
        {
          local_38 = param_2;
          (*(code *)(ulong)uVar3)(local_60);
        }
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008060
 */

void recovered_10008060(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;

  uVar4 = thunk_terror_ui_colour(0x2a);
  uVar3 = DAT_1000b0ac;
  uVar2 = DAT_1000b0a8;
  uVar5 = (ulong)DAT_1000b0a8;
  uVar12 = DAT_1000b0a8;
  if ((int)param_2 < (int)DAT_1000b0a8) {
    uVar12 = param_2;
  }
  uVar9 = DAT_1000b0ac;
  if ((int)param_3 < (int)DAT_1000b0ac) {
    uVar9 = param_3;
  }
  uVar6 = param_2 + 0x12;
  uVar10 = DAT_1000b0a8;
  if ((int)uVar6 < (int)DAT_1000b0a8) {
    uVar10 = uVar6;
  }
  uVar7 = param_3 + 0x12;
  uVar11 = DAT_1000b0ac;
  if ((int)uVar7 < (int)DAT_1000b0ac) {
    uVar11 = uVar7;
  }
  if ((int)param_3 < -0x12) {
    uVar11 = 0;
  }
  if ((int)uVar9 < (int)uVar11) {
    do {
      if ((int)param_2 < (int)uVar2) {
        uVar15 = uVar12;
        do {
          if ((((param_1 != 0) && ((int)uVar9 < (int)uVar3)) && (-1 < (int)(uVar15 | uVar9))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar15 < (int)uVar2)))) {
            lVar8 = (ulong)uVar15 + uVar9 * uVar5;
            *(char *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = (char)(uVar4 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = (char)(uVar4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = (char)uVar4;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar15 = uVar15 + 1;
        } while (uVar10 != uVar15);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  uVar4 = thunk_terror_ui_colour(3);
  uVar3 = DAT_1000b0ac;
  uVar2 = DAT_1000b0a8;
  uVar1 = (undefined1)(uVar4 >> 0x10);
  uVar5 = (ulong)DAT_1000b0a8;
  uVar12 = DAT_1000b0a8;
  if ((int)param_2 < (int)DAT_1000b0a8) {
    uVar12 = param_2;
  }
  uVar9 = DAT_1000b0ac;
  if ((int)param_3 < (int)DAT_1000b0ac) {
    uVar9 = param_3;
  }
  uVar10 = DAT_1000b0a8;
  if ((int)uVar6 < (int)DAT_1000b0a8) {
    uVar10 = uVar6;
  }
  uVar11 = param_3 + 1;
  if ((int)DAT_1000b0ac <= (int)(param_3 + 1)) {
    uVar11 = DAT_1000b0ac;
  }
  if ((int)param_3 < -1) {
    uVar11 = 0;
  }
  uVar14 = (undefined1)uVar4;
  uVar13 = (undefined1)(uVar4 >> 8);
  if ((int)uVar9 < (int)uVar11) {
    uVar4 = uVar9;
    do {
      if ((int)param_2 < (int)uVar2) {
        uVar15 = uVar12;
        do {
          if (((param_1 != 0) && ((int)uVar4 < (int)uVar3)) &&
             ((-1 < (int)(uVar15 | uVar4) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar15 < (int)uVar2)))))) {
            lVar8 = (ulong)uVar15 + uVar4 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = uVar13;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar15 = uVar15 + 1;
        } while (uVar10 != uVar15);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar11);
  }
  lVar8 = ((ulong)param_3 << 0x20) + 0x1100000000;
  uVar11 = (uint)((ulong)lVar8 >> 0x20);
  uVar4 = uVar3;
  if ((int)uVar11 < (int)uVar3) {
    uVar4 = uVar11;
  }
  if (lVar8 < 0) {
    uVar4 = 0;
  }
  uVar15 = uVar11 + 1;
  if ((int)uVar3 <= (int)(uVar11 + 1)) {
    uVar15 = uVar3;
  }
  if ((int)uVar11 < -1) {
    uVar15 = 0;
  }
  if ((int)uVar4 < (int)uVar15) {
    do {
      if ((int)param_2 < (int)uVar2) {
        uVar11 = uVar12;
        do {
          if ((((param_1 != 0) && ((int)uVar4 < (int)uVar3)) && (-1 < (int)(uVar11 | uVar4))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar11 < (int)uVar2)))) {
            lVar8 = (ulong)uVar11 + uVar4 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = uVar13;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar15);
  }
  uVar4 = param_2 + 1;
  if ((int)uVar2 <= (int)(param_2 + 1)) {
    uVar4 = uVar2;
  }
  if ((int)uVar3 <= (int)uVar7) {
    uVar7 = uVar3;
  }
  if ((int)param_3 < -0x12) {
    uVar7 = 0;
  }
  uVar11 = uVar9;
  if ((int)uVar9 < (int)uVar7) {
    do {
      if ((int)param_2 < (int)uVar2) {
        uVar15 = uVar12;
        do {
          if (((param_1 != 0) && ((int)uVar11 < (int)uVar3)) &&
             ((-1 < (int)(uVar15 | uVar11) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar15 < (int)uVar2)))))) {
            lVar8 = (ulong)uVar15 + uVar11 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = uVar13;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar15 = uVar15 + 1;
        } while (uVar4 != uVar15);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar4 = param_2 + 0x11;
  uVar12 = uVar2;
  if ((int)uVar4 < (int)uVar2) {
    uVar12 = uVar4;
  }
  uVar11 = 0;
  if ((int)uVar4 < 0) {
    uVar12 = uVar11;
  }
  if ((int)uVar6 < 0) {
    uVar10 = uVar11;
  }
  if ((int)uVar9 < (int)uVar7) {
    do {
      if ((int)uVar12 < (int)uVar10) {
        uVar4 = uVar12;
        do {
          if ((((param_1 != 0) && ((int)uVar9 < (int)uVar3)) && (-1 < (int)(uVar4 | uVar9))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar4 < (int)uVar2)))) {
            lVar8 = (ulong)uVar4 + uVar9 * uVar5;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = uVar13;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = uVar14;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar10 != uVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  uVar4 = param_2 + 5;
  uVar12 = uVar2;
  if ((int)uVar4 < (int)uVar2) {
    uVar12 = uVar4;
  }
  uVar9 = param_3 + 5;
  if ((int)uVar3 <= (int)(param_3 + 5)) {
    uVar9 = uVar3;
  }
  uVar10 = param_2 + 0xd;
  if ((int)uVar2 <= (int)(param_2 + 0xd)) {
    uVar10 = uVar2;
  }
  uVar6 = param_3 + 0xd;
  if ((int)uVar3 <= (int)(param_3 + 0xd)) {
    uVar6 = uVar3;
  }
  if ((int)param_3 < -0xd) {
    uVar6 = uVar11;
  }
  if ((int)uVar9 < (int)uVar6) {
    do {
      if ((int)uVar4 < (int)uVar2) {
        uVar11 = uVar12;
        do {
          if (((param_1 != 0) && ((int)uVar9 < (int)uVar3)) &&
             ((-1 < (int)(uVar11 | uVar9) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar11 < (int)uVar2)))))) {
            lVar8 = (ulong)uVar11 + uVar9 * uVar5;
            *(char *)(*(long *)(param_1 + 0x350) + lVar8 * 4) = (char)param_4;
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar8 * 4) = (char)((uint)param_4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar8 * 4) = (char)((uint)param_4 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar8 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar6);
  }
  return;
}

#undef DAT_1000b0a8
#undef DAT_1000b0ac

#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085a0
 */

void recovered_100085a0(long param_1,uint param_2,uint param_3,long param_4,long param_5,
                       char param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;

  uVar2 = thunk_terror_ui_colour(0x45);
  uVar19 = (ulong)param_2 | 0x19e00000000;
  recovered_10007620(param_1,uVar19,(ulong)param_3 | 0x4800000000,
                     (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00);
  uVar3 = thunk_terror_ui_colour(0x46);
  uVar2 = uVar3 >> 0x10 & 0xff | uVar3 & 0xff00 | uVar3 << 0x10;
  lVar7 = (ulong)param_3 + 0x100000000;
  recovered_10007620(param_1,uVar19,lVar7,uVar2);
  recovered_10007620(param_1,(ulong)param_2 | 0x1e500000000,lVar7,uVar2);
  uVar14 = DAT_1000b0ac;
  uVar2 = DAT_1000b0a8;
  uVar19 = (ulong)DAT_1000b0a8;
  uVar18 = DAT_1000b0a8;
  if ((int)param_2 < (int)DAT_1000b0a8) {
    uVar18 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar18 = 0;
  }
  uVar6 = (ulong)(int)DAT_1000b0ac;
  uVar9 = param_2 + 1;
  if ((int)DAT_1000b0a8 <= (int)(param_2 + 1)) {
    uVar9 = DAT_1000b0a8;
  }
  if ((int)param_2 < -1) {
    uVar9 = 0;
  }
  uVar12 = 0x1e6;
  if ((int)DAT_1000b0ac < 0x1e6) {
    uVar12 = DAT_1000b0ac;
  }
  uVar8 = (undefined1)(uVar3 >> 0x10);
  uVar10 = (undefined1)(uVar3 >> 8);
  if (0x19e < (long)uVar6) {
    uVar13 = 0x19e;
    do {
      if ((int)uVar18 < (int)uVar9) {
        uVar17 = uVar18;
        do {
          if ((((param_1 != 0) && (uVar13 < uVar6)) && (-1 < (int)uVar17)) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar17 < (int)uVar2)))) {
            lVar7 = (ulong)uVar17 + uVar13 * uVar19;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 * 4) = uVar8;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar7 * 4) = uVar10;
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar7 * 4) = (char)uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar7 * 4) = 0xff;
          }
          uVar17 = uVar17 + 1;
        } while (uVar9 != uVar17);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
  }
  uVar9 = (param_2 - 1) + param_3;
  uVar18 = uVar2;
  if ((int)uVar9 < (int)uVar2) {
    uVar18 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar18 = 0;
  }
  uVar17 = param_3 + (param_2 - 1) + 1;
  if ((int)uVar2 <= (int)uVar17) {
    uVar17 = uVar2;
  }
  if ((int)uVar9 < -1) {
    uVar17 = 0;
  }
  if (0x19e < (int)uVar14) {
    uVar13 = 0x19e;
    do {
      if ((int)uVar18 < (int)uVar17) {
        uVar14 = uVar18;
        do {
          if (((param_1 != 0) && (uVar13 < uVar6)) &&
             ((-1 < (int)uVar14 && ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar14 < (int)uVar2)))
              ))) {
            lVar7 = (ulong)uVar14 + uVar13 * uVar19;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 * 4) = uVar8;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar7 * 4) = uVar10;
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar7 * 4) = (char)uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar7 * 4) = 0xff;
          }
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
  }
  if (0 < (int)param_3) {
    uVar2 = param_3 - 1;
    uVar19 = 0;
    do {
      iVar4 = (int)(uintptr_t)(uintptr_t)uVar19 * 0x47;
      uVar14 = 0x1e4;
      if (param_4 != 0) {
        bVar1 = *(byte *)(param_4 + iVar4 / (int)uVar2);
        uVar14 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
      }
      if (param_5 == 0) {
        local_3c = 0x1e4;
      }
      else {
        bVar1 = *(byte *)(param_5 + iVar4 / (int)uVar2);
        local_3c = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
      }
      local_38 = param_2 + (int)uVar19;
      if (param_6 == '\0') {
        if (uVar19 != 0) {
          uVar18 = 0x1e4;
          lVar7 = (long)(int)((iVar4 - 0x47U) / uVar2);
          uVar3 = 0x1e4;
          if (param_4 != 0) {
            bVar1 = *(byte *)(param_4 + lVar7);
            uVar3 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
          }
          if (param_5 != 0) {
            bVar1 = *(byte *)(param_5 + lVar7);
            uVar18 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
          }
          if (param_4 != 0) {
            bVar20 = uVar3 < uVar14;
            iVar4 = uVar3 - uVar14;
            if (uVar14 <= uVar3) {
              iVar4 = -(uVar3 - uVar14);
            }
            uVar17 = thunk_terror_ui_colour(0x23);
            uVar12 = DAT_1000b0ac;
            uVar9 = DAT_1000b0a8;
            iVar16 = iVar4 + 1;
            uVar6 = (ulong)DAT_1000b0a8;
            uVar5 = local_38 - 1;
            while( true ) {
              if ((((param_1 != 0) && (-1 < (int)(uVar5 | uVar3) && *(long *)(param_1 + 0x350) != 0)
                   ) && ((int)uVar5 < (int)uVar9)) && ((int)uVar3 < (int)uVar12)) {
                lVar7 = (ulong)uVar5 + uVar3 * uVar6;
                *(char *)(*(long *)(param_1 + 0x350) + lVar7 * 4) = (char)(uVar17 >> 0x10);
                *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar7 * 4) = (char)(uVar17 >> 8);
                *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar7 * 4) = (char)uVar17;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar7 * 4) = 0xff;
              }
              if ((uVar3 == uVar14) && (uVar5 == local_38)) break;
              iVar11 = 0;
              if (iVar4 <= iVar16 * 2) {
                iVar11 = iVar4;
              }
              uVar5 = uVar5 + (iVar4 <= iVar16 * 2);
              uVar15 = 0;
              if (iVar16 < 1) {
                uVar15 = bVar20 - 1 | 1;
              }
              iVar16 = (uint)(iVar16 < 1) + iVar16 + iVar11;
              uVar3 = uVar3 + uVar15;
            }
          }
          if (param_5 != 0) {
            bVar20 = uVar18 < local_3c;
            iVar4 = uVar18 - local_3c;
            if (local_3c <= uVar18) {
              iVar4 = -(uVar18 - local_3c);
            }
            uVar9 = thunk_terror_ui_colour(0x12);
            uVar3 = DAT_1000b0ac;
            uVar14 = DAT_1000b0a8;
            iVar16 = iVar4 + 1;
            uVar6 = (ulong)DAT_1000b0a8;
            uVar12 = local_38 - 1;
            while( true ) {
              if (((param_1 != 0) &&
                  (-1 < (int)(uVar12 | uVar18) && *(long *)(param_1 + 0x350) != 0)) &&
                 (((int)uVar12 < (int)uVar14 && ((int)uVar18 < (int)uVar3)))) {
                lVar7 = (ulong)uVar12 + uVar18 * uVar6;
                *(char *)(*(long *)(param_1 + 0x350) + lVar7 * 4) = (char)(uVar9 >> 0x10);
                *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar7 * 4) = (char)(uVar9 >> 8);
                *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar7 * 4) = (char)uVar9;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar7 * 4) = 0xff;
              }
              if ((uVar18 == local_3c) && (uVar12 == local_38)) break;
              iVar11 = 0;
              if (iVar4 <= iVar16 * 2) {
                iVar11 = iVar4;
              }
              uVar12 = uVar12 + (iVar4 <= iVar16 * 2);
              uVar17 = 0;
              if (iVar16 < 1) {
                uVar17 = bVar20 - 1 | 1;
              }
              iVar16 = (uint)(iVar16 < 1) + iVar16 + iVar11;
              uVar18 = uVar18 + uVar17;
            }
          }
        }
      }
      else if (uVar19 != uVar2 && uVar19 != 0) {
        uVar14 = 0;
        lVar7 = (long)((iVar4 + -0x47) / (int)(param_3 - 3));
        uVar18 = 0;
        if (param_5 != 0) {
          bVar1 = *(byte *)(param_5 + lVar7);
          if (99 < bVar1) {
            bVar1 = 100;
          }
          uVar18 = (uint)bVar1;
        }
        if (param_4 != 0) {
          uVar3 = (uint)*(byte *)(param_4 + lVar7);
          uVar14 = 100 - uVar18;
          if (uVar3 <= 100 - uVar18) {
            uVar14 = uVar3;
          }
        }
        uVar3 = uVar18 * 0x599a2 >> 0x13;
        iVar4 = 0x1e5 - uVar3;
        iVar16 = 0x1e5 - (((uVar14 + uVar18) * 0x46 >> 2) * 0x147b >> 0x11);
        uVar14 = thunk_terror_ui_colour(0x12);
        recovered_10007620(param_1,CONCAT44(iVar4,local_38),((ulong)uVar3 << 0x20) + 1,
                           (uVar14 & 0xff0000) >> 0x10 | uVar14 << 0x10 | uVar14 & 0xff00);
        uVar14 = thunk_terror_ui_colour(0x23);
        recovered_10007620(param_1,CONCAT44(iVar16,local_38),
                           ((ulong)(uint)(iVar4 - iVar16) << 0x20) + 1,
                           (uVar14 & 0xff0000) >> 0x10 | uVar14 << 0x10 | uVar14 & 0xff00);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != (param_3 & 0x7fffffff));
  }
  return;
}

#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef local_3c
#undef local_38

#undef DAT_1000b0a8
#define DAT_1000b0a8 (*(uint *)(((uintptr_t)pf_module_state + 0x1de1U)))
#undef DAT_1000b0ac
#define DAT_1000b0ac (*(uint *)(((uintptr_t)pf_module_state + 0x1de5U)))
#undef str_10009691
#define str_10009691 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cc0
 */

void recovered_10008cc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined1 uVar10;
  undefined1 uVar9;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;

  pcVar7 = str_10009691;
  if (*(char *)(param_1 + 0x448) != '\0') {
    pcVar7 = (char *)(param_1 + 0x448);
  }
  uVar2 = thunk_terror_ui_colour(2);
  uVar4 = DAT_1000b0a8;
  uVar8 = (ulong)(int)DAT_1000b0ac;
  if (0x188 < (long)uVar8) {
    uVar5 = (ulong)DAT_1000b0a8;
    uVar13 = 0x19e;
    if (DAT_1000b0ac < 0x19e) {
      uVar13 = (ulong)DAT_1000b0ac;
    }
    uVar14 = 0x140;
    if ((int)DAT_1000b0a8 < 0x140) {
      uVar14 = (ulong)DAT_1000b0a8;
    }
    uVar18 = 0x46;
    if ((int)DAT_1000b0a8 < 0x46) {
      uVar18 = (ulong)DAT_1000b0a8;
    }
    uVar12 = 0x46;
    if ((int)DAT_1000b0a8 < 0x46) {
      uVar12 = DAT_1000b0a8;
    }
    lVar16 = (uintptr_t)(uintptr_t)(uintptr_t)uVar5 * 0x620 + uVar18 * 4;
    uVar19 = 0x188;
    do {
      if (0x46 < (int)uVar4) {
        lVar17 = 0;
        do {
          if ((((uVar19 < uVar8) && (iVar11 = uVar12 + (int)lVar17, -1 < iVar11)) &&
              (*(long *)(param_1 + 0x350) != 0)) && (iVar11 < (int)uVar4)) {
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + lVar17 * 4) = (char)(uVar2 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + 1 + lVar17 * 4) = (char)(uVar2 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + 2 + lVar17 * 4) = (char)uVar2;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 3 + lVar17 * 4) = 0xff;
          }
          lVar17 = lVar17 + 1;
        } while (uVar14 - uVar18 != lVar17);
      }
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + (uintptr_t)(uintptr_t)(uintptr_t)uVar5 * 4;
    } while (uVar19 != uVar13);
  }
  uVar3 = thunk_terror_ui_colour(3);
  uVar2 = DAT_1000b0ac;
  uVar4 = DAT_1000b0a8;
  uVar12 = 0x46;
  if ((int)DAT_1000b0a8 < 0x46) {
    uVar12 = DAT_1000b0a8;
  }
  uVar6 = 0x188;
  if ((int)DAT_1000b0ac < 0x188) {
    uVar6 = DAT_1000b0ac;
  }
  if (0x188 < (int)DAT_1000b0ac) {
    uVar8 = 0x140;
    if ((int)DAT_1000b0a8 < 0x140) {
      uVar8 = (ulong)DAT_1000b0a8;
    }
    uVar13 = (ulong)DAT_1000b0a8;
    uVar14 = (ulong)uVar12;
    uVar5 = (ulong)uVar6;
    uVar9 = (undefined1)uVar3;
    uVar10 = (undefined1)(uVar3 >> 8);
    uVar1 = (undefined1)(uVar3 >> 0x10);
    if (0x46 < (int)DAT_1000b0a8) {
      uVar3 = 0x46;
      if ((int)DAT_1000b0a8 < 0x46) {
        uVar3 = DAT_1000b0a8;
      }
      lVar16 = uVar14 * 4 + uVar13 * (uintptr_t)(uintptr_t)(uintptr_t)uVar5 * 4;
      lVar17 = 0;
      do {
        if ((param_1 != 0) &&
           (uVar15 = uVar3 + (int)lVar17,
           ((int)uVar15 < (int)uVar4 && -1 < (int)(uVar6 | uVar15)) &&
           *(long *)(param_1 + 0x350) != 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + lVar17 * 4) = uVar1;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 1 + lVar17 * 4) = uVar10;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 2 + lVar17 * 4) = uVar9;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 3 + lVar17 * 4) = 0xff;
        }
        lVar17 = lVar17 + 1;
      } while (uVar8 - uVar14 != lVar17);
    }
    uVar3 = 0x19e;
    if ((int)uVar2 < 0x19e) {
      uVar3 = uVar2;
    }
    if (0x19d < (int)uVar2 && 0x46 < (int)uVar4) {
      uVar15 = 0x46;
      if ((int)uVar4 < 0x46) {
        uVar15 = uVar4;
      }
      lVar16 = uVar13 * 0x674 + uVar14 * 4;
      lVar17 = 0;
      do {
        if ((param_1 != 0) &&
           (iVar11 = uVar15 + (int)lVar17,
           (iVar11 < (int)uVar4 && -1 < iVar11) && *(long *)(param_1 + 0x350) != 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + lVar17 * 4) = uVar1;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 1 + lVar17 * 4) = uVar10;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 2 + lVar17 * 4) = uVar9;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 3 + lVar17 * 4) = 0xff;
        }
        lVar17 = lVar17 + 1;
      } while (uVar8 - uVar14 != lVar17);
    }
    lVar17 = (uVar14 + uVar13 * uVar5) * 4;
    lVar16 = uVar3 - uVar5;
    uVar15 = uVar6;
    do {
      if ((((0x46 < (int)uVar4) && (param_1 != 0)) && ((int)uVar15 < (int)uVar2)) &&
         ((-1 < (int)(uVar12 | uVar15) && (*(long *)(param_1 + 0x350) != 0)))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17) = uVar1;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17) = uVar10;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17) = uVar9;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17) = 0xff;
      }
      lVar17 = lVar17 + uVar13 * 4;
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar8 = 0x13f;
    if ((int)uVar4 < 0x13f) {
      uVar8 = (ulong)uVar4;
    }
    lVar17 = (uVar13 * uVar5 + uVar8) * 4;
    lVar16 = uVar3 - uVar5;
    do {
      if (((0x13f < (int)uVar4) && (param_1 != 0)) &&
         (((int)uVar6 < (int)uVar2 &&
          ((-1 < (int)((uint)uVar8 | uVar6) && (*(long *)(param_1 + 0x350) != 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar17) = uVar1;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar17) = uVar10;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar17) = uVar9;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar17) = 0xff;
      }
      lVar17 = lVar17 + uVar13 * 4;
      uVar6 = uVar6 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar4 = thunk_terror_ui_colour(1);
  recovered_10007d70(param_1,0x4f,399,(long)pcVar7,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00,0xd8);
  uVar2 = thunk_terror_ui_colour(4);
  uVar4 = DAT_1000b0a8;
  uVar8 = (ulong)(int)DAT_1000b0ac;
  if (0x189 < (long)uVar8) {
    uVar5 = (ulong)DAT_1000b0a8;
    uVar13 = 0x19d;
    if (DAT_1000b0ac < 0x19d) {
      uVar13 = (ulong)DAT_1000b0ac;
    }
    uVar14 = 0x13f;
    if ((int)DAT_1000b0a8 < 0x13f) {
      uVar14 = (ulong)DAT_1000b0a8;
    }
    uVar18 = 0x12e;
    if ((int)DAT_1000b0a8 < 0x12e) {
      uVar18 = (ulong)DAT_1000b0a8;
    }
    uVar12 = 0x12e;
    if ((int)DAT_1000b0a8 < 0x12e) {
      uVar12 = DAT_1000b0a8;
    }
    lVar16 = (uintptr_t)(uintptr_t)(uintptr_t)uVar5 * 0x624 + uVar18 * 4;
    uVar19 = 0x189;
    do {
      if (0x12e < (int)uVar4) {
        lVar17 = 0;
        do {
          if ((((param_1 != 0) && (uVar19 < uVar8)) && (iVar11 = uVar12 + (int)lVar17, -1 < iVar11))
             && ((*(long *)(param_1 + 0x350) != 0 && (iVar11 < (int)uVar4)))) {
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + lVar17 * 4) = (char)(uVar2 >> 0x10);
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + 1 + lVar17 * 4) = (char)(uVar2 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + lVar16 + 2 + lVar17 * 4) = (char)uVar2;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar16 + 3 + lVar17 * 4) = 0xff;
          }
          lVar17 = lVar17 + 1;
        } while (uVar14 - uVar18 != lVar17);
      }
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + (uintptr_t)(uintptr_t)(uintptr_t)uVar5 * 4;
    } while (uVar19 != uVar13);
  }
  uVar4 = thunk_terror_ui_colour(1);
  recovered_10007d70(param_1,0x133,399,((uintptr_t)pf_module_state + 0x3e0U),
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00,8);
  return;
}

#undef DAT_1000b0a8
#undef DAT_1000b0ac
#undef str_10009691
