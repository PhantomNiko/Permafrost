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
#undef DAT_10006420
#define DAT_10006420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_100064dd
#define DAT_100064dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_100065e8
#define DAT_100065e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37cU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028082c
#define UINT_0028082c (*(uint *)(0x28082cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef UINT_0028089c
#define UINT_0028089c (*(uint *)(0x28089cU))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef UNK_10006428
#define UNK_10006428 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef _DAT_10006420
#define _DAT_10006420 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef lRam0000000010006428
#define lRam0000000010006428 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_10006440
#define str_10006440 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_10006465
#define str_10006465 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_1000646b
#define str_1000646b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ffU)))
#undef str_10006471
#define str_10006471 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
#undef str_1000647d
#define str_1000647d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1000648c
#define str_1000648c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10006499
#define str_10006499 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22dU)))
#undef str_100065b9
#define str_100065b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_100065cd
#define str_100065cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#undef str_100065db
#define str_100065db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#define local_6894 (*(uint *)(pf_stack_frame + 28))
#define local_688c (*(uint *)(pf_stack_frame + 36))
#define local_6868 (*(void * *)(pf_stack_frame + 72))
#define local_6548 (*(uint *)(pf_stack_frame + 872))
#define local_6544 (*(char *)(pf_stack_frame + 876))
#define local_6543 (*(undefined1 *)(pf_stack_frame + 877))
#define local_6540 (*(undefined1 (*)[25920])(pf_stack_frame + 880))
#define local_6530 (*(ulonglong *)(pf_stack_frame + 896))
#define uStack_300 (*(undefined8 *)(pf_stack_frame + 26032))
#define local_6528 (*(ulonglong *)(pf_stack_frame + 904))
#define local_6510 (*(void * *)(pf_stack_frame + 928))
#define uStack_2f0 (*(undefined8 *)(pf_stack_frame + 26048))
#define local_6508 (*(undefined8 *)(pf_stack_frame + 936))
#define local_6500 (*(undefined1 * *)(pf_stack_frame + 944))
#define uStack_2e0 (*(undefined8 *)(pf_stack_frame + 26064))
#define local_64f8 (*(long *)(pf_stack_frame + 952))
#define local_64f0 (*(ulong *)(pf_stack_frame + 960))
#define iStack_94 (*(int *)(pf_stack_frame + 26652))
#define local_64e0 (*(ulong *)(pf_stack_frame + 976))
#define local_64d8 (*(char (*)[25816])(pf_stack_frame + 984))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 26664))
#define local_3c8 (*(ulong *)(pf_stack_frame + 25832))
#define local_3c0 (*(int *)(pf_stack_frame + 25840))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 26680))
#define local_3bc (*(char (*)[956])(pf_stack_frame + 25844))
#define local_33c (*(undefined4 *)(pf_stack_frame + 25972))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 26696))
#define local_338 (*(uint *)(pf_stack_frame + 25976))
#define local_334 (*(int *)(pf_stack_frame + 25980))
#define local_330 (*(undefined8 *)(pf_stack_frame + 25984))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 26720))
#define local_328 (*(undefined2 *)(pf_stack_frame + 25992))
#define local_326 (*(undefined1 *)(pf_stack_frame + 25994))
#define local_325 (*(undefined2 *)(pf_stack_frame + 25995))
#define local_323 (*(char *)(pf_stack_frame + 25997))
#define local_320 (*(int *)(pf_stack_frame + 26000))
#define local_31c (*(char *)(pf_stack_frame + 26004))
#define local_318 (*(undefined8 *)(pf_stack_frame + 26008))
#define local_308 (*(undefined8 *)(pf_stack_frame + 26024))
#define local_2f8 (*(undefined8 *)(pf_stack_frame + 26040))
#define local_2e8 (*(undefined8 *)(pf_stack_frame + 26056))
#define local_2d8 (*(ulong *)(pf_stack_frame + 26072))
#define local_a0 (*(void * *)(pf_stack_frame + 26640))
#define local_90 (*(int *)(pf_stack_frame + 26656))
#define local_80 (*(undefined8 *)(pf_stack_frame + 26672))
#define local_70 (*(undefined8 *)(pf_stack_frame + 26688))
#define local_60 (*(ulong *)(pf_stack_frame + 26704))
#define local_58 (*(undefined8 *)(pf_stack_frame + 26712))
#define local_48 (*(ulong *)(pf_stack_frame + 26728))
#define local_40 (*(uint *)(pf_stack_frame + 26736))
#define local_3c (*(uint *)(pf_stack_frame + 26740))
#define local_38 (*(uint *)(pf_stack_frame + 26744))
#define local_34 (*(uint *)(pf_stack_frame + 26748))
#define uStack_6890 (*(uint *)(pf_stack_frame + 32))
#define uStack_64e8 (*(ulong *)(pf_stack_frame + 968))
#define acStack_3454 (*(char (*)[13396])(pf_stack_frame + 13404))
#define local_6898 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000590(int argc,char **argv)

{
  unsigned char pf_stack_frame[26832] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pixels;
  byte bVar2;
  uchar uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 extraout_RAX = 0;
  char *pcVar10;
  undefined7 extraout_var = 0;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  char *a;
  bool bVar28;
  uint128 auVar29;

  thunk_memset(&local_6898,0,0x6580);
  if (local_64f8 == 0) {
    iVar6 = Ram0000000000280800;
    if ((((iVar6 != 0x50414d57) || (iVar6 = Ram0000000000280804, iVar6 == 0)) ||
        (uVar5 = Ram0000000000280808, uVar5 < 0xc)) || (uVar5 = Ram0000000000280808, uVar5 < 0x58))
    goto LAB_10002284;
    uVar5 = UINT_00280854;
    if (((code *)(ulong)uVar5 == (code *)0x0) ||
       (puVar13 = (*(code *)(ulong)uVar5)(local_6500,0x400), puVar13 == (undefined1 *)0x0))
    goto LAB_10002284;
    local_64f8 = 0x400;
    local_6500 = puVar13;
  }
  *local_6500 = 0;
  recovered_10004230(0xffffffff,str_1000647d,local_64d8);
  thunk_snprintf(local_3bc,0x80,&DAT_100064da,str_1000648c);
  thunk_pf_app_window_spec(&local_a0,str_10006471,800,0x208);
  local_2d8 = local_60;
  PF_PART4(local_308, 0) = local_90;
  local_2e8 = local_70;
  uStack_2e0 = uStack_68;
  local_2f8 = local_80;
  uStack_2f0 = uStack_78;
  uStack_300 = uStack_88;
  local_318 = local_a0;
  __builtin_memcpy(&local_318,&local_a0,sizeof(TerrorUIWindowSpec));
  uVar5 = thunk_terror_ui_colour(0);
  local_308 = CONCAT44(uVar5,(int)local_308);
  local_2d8 = local_2d8 | 1;
  uVar5 = thunk_terror_ui_window_open(&local_6898,&local_318);
  if (uVar5 != 0) {
    terror_ui_window_set_custom_menus(&local_6898,str_10006499);
    local_6510 = local_6868;
    if (local_6868 != (void *)0x0) {
      local_6508 = 0xa00000006;
      thunk_memset(&local_a0,0,0x18);
      iVar6 = Ram0000000000280800;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
         ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x17b < uVar5))
         )) {
        uVar5 = UINT_00280978;
        if (((code *)(ulong)uVar5 != (code *)0x0) &&
           (uVar5 = (*(code *)(ulong)uVar5)(&DAT_100064dd,0xffffffff,1,0,&local_a0), uVar5 != 0)) {
          if (iStack_94 - 1U < 0x40) {
            local_6508 = CONCAT44(PF_PART4(local_6508, 4),iStack_94 + 1);
          }
          if (local_90 - 1U < 0x40) {
            local_6508 = CONCAT44(local_90,(int)local_6508);
          }
          if ((((local_a0 != (void *)0x0) && (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
              (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
             ((uVar5 = Ram0000000000280808, 0xb < uVar5 &&
              (uVar5 = Ram0000000000280808, 0x53 < uVar5)))) {
            uVar5 = UINT_00280850;
            if ((code *)(ulong)uVar5 != (code *)0x0) {
              (*(code *)(ulong)uVar5)(local_a0);
            }
          }
          thunk_memset(&local_a0,0,0x18);
        }
      }
      local_31c = '\x01';
      recovered_10003150((long)&local_6898);
      pcVar10 = (char *)CONCAT71((int7)((ulong)extraout_RAX >> 8),argv == (char **)0x0);
      if (argc < 2 || argv == (char **)0x0) goto LAB_100008d6;
      a = argv[1];
      if ((a == (char *)0x0) || (*a == '\0')) {
LAB_10000861:
        if (2 < (uint)argc) {
          uVar27 = 2;
          do {
            a = argv[uVar27];
            if ((a != (char *)0x0) && (*a != '\0')) {
              iVar6 = thunk_strncmp(a,str_10006465,5);
              if (iVar6 == 0) goto LAB_100008c3;
              uVar5 = thunk_strncmp(a,str_1000646b,5);
              pcVar10 = (char *)(ulong)uVar5;
              if (uVar5 == 0) goto LAB_100008c3;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < (uint)argc);
        }
      }
      else {
        iVar6 = thunk_strncmp(a,str_10006465,5);
        if ((iVar6 == 0) || (iVar6 = thunk_strncmp(a,str_1000646b,5), iVar6 == 0)) {
LAB_100008c3:
          a = a + 5;
        }
        else {
          pcVar10 = thunk_strchr(a,0x3d);
          if (pcVar10 != (char *)0x0) goto LAB_10000861;
        }
        pcVar10 = (char *)recovered_10002350((long)&local_6898,a);
      }
LAB_100008d6:
      if (local_31c == '\x01') {
        uVar27 = (ulong)(local_338 >> 0xc & 1);
        local_38 = (uint)CONCAT71((int7)((ulong)pcVar10 >> 8),1);
        do {
          terror_ui_window_begin_frame(&local_6898);
          local_58 = CONCAT44(uStack_6890,local_6894);
          uStack_50 = 0;
          thunk_memset(&local_318,0,0x278);
          uVar5 = thunk_terror_ui_window_query(&local_6898,&local_318);
          if (((uVar5 == 0) || (uVar3 = thunk_terror_ui_window_info_requests_close(&local_318), uVar3 != '\0')) ||
             (uVar5 = thunk_terror_ui_window_sync_buffer(&local_6898,&local_318), uVar5 == 0)) break;
          local_40 = (uint)uVar27;
          local_6510 = local_6868;
          local_33c = (undefined4)uStack_2f0;
          PF_PART4(auVar29, 0) = -(uint)(local_6894 == (uint)local_58);
          PF_PART4(auVar29, 4) = PF_PART4(auVar29, 0);
          PF_PART4(auVar29, 8) = -(uint)(uStack_6890 == PF_PART4(local_58, 4));
          PF_PART4(auVar29, 12) = -(uint)(uStack_6890 == PF_PART4(local_58, 4));
          iVar6 = movmskpd(local_6894,auVar29);
          if (iVar6 == 3) {
            uVar25 = 0;
          }
          else {
            recovered_10002800((long)&local_6898);
            uVar25 = CONCAT71((int7)((ulong)argv >> 8),1);
          }
          if ((PF_PART4(local_2e8, 4) == 0) || (PF_PART4(local_2e8, 4) == local_334)) {
LAB_10000ad0:
            uVar27 = uVar25 & 0xffffffff;
            goto switchD_10000a36_default;
          }
          local_334 = PF_PART4(local_2e8, 4);
          if ((int)uStack_2e0 == 2) {
            if (PF_PART4(uStack_2e0, 4) == 2) {
              pcVar10 = recovered_10005040((long)&local_6898);
              cVar4 = (char)pcVar10;
            }
            else if (PF_PART4(uStack_2e0, 4) == 1) {
              uVar23 = recovered_10004e30((long)&local_6898);
              cVar4 = (char)uVar23;
            }
            else {
              if (PF_PART4(uStack_2e0, 4) != 0) goto LAB_10000ad0;
              uVar23 = recovered_10004b60((long)&local_6898);
              cVar4 = (char)uVar23;
            }
            uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
            if (cVar4 == '\0') goto LAB_10000ad0;
            goto switchD_10000a36_default;
          }
          uVar27 = uVar25 & 0xffffffff;
          if ((int)uStack_2e0 != 1) goto switchD_10000a36_default;
          uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
          switch((uintptr_t)(PF_PART4(uStack_2e0, 4))) {
          case 0:
            if (local_6500 != (undefined1 *)0x0) {
              *local_6500 = 0;
              local_64f0 = 0;
              uStack_64e8 = 0;
              local_64e0 = 0;
              local_330 = 0;
              local_326 = 0;
              thunk_snprintf(local_3bc,0x80,&DAT_100064da,str_1000648c);
            }
            break;
          case 1:
            iVar6 = 0;
            goto LAB_10001902;
          case 2:
            recovered_10004970((long)&local_6898);
            break;
          case 3:
            iVar6 = 1;
LAB_10001902:
            recovered_10004870((long)&local_6898,iVar6);
          }
switchD_10000a36_default:
          local_58 = CONCAT44(PF_PART4(local_58, 4),local_33c);
          local_6544 = '\0';
          thunk_memset(&local_318,0,0x1c);
          uVar7 = thunk_terror_ui_window_pointer_state(&local_6898,&local_318);
          uVar5 = uStack_6890;
          if (uVar7 == 0) {
LAB_10000b6c:
            local_323 = '\0';
            local_325 = 0;
          }
          else {
            if ((((ulong)local_318 & 2) == 0) ||
               (0xb < PF_PART4(local_308, 4) - 0xfU || (int)(uint)uStack_300 < 0x3f)) {
              local_6544 = false;
            }
            else {
              uVar7 = 0xac;
              if (0xac < (int)uStack_6890) {
                uVar7 = uStack_6890;
              }
              uVar7 = uVar7 - 0x2a;
              if (uStack_6890 == 0) {
                uVar7 = 0x1de;
              }
              local_6544 = (uint)uStack_300 < uVar7;
            }
            if (((ulong)local_318 & 4) == 0) goto LAB_10000b6c;
            local_34 = (uint)uVar27;
            iVar6 = local_6894 - 1;
            if (local_6894 == 0) {
              iVar6 = 799;
            }
            if (((int32_t)PF_PART4(local_308, 4)) < iVar6) {
              iVar6 = PF_PART4(local_308, 4);
            }
            if (local_308 < 0) {
              iVar6 = 0;
            }
            uVar7 = uStack_6890 - 1;
            if (uStack_6890 == 0) {
              uVar7 = 0x207;
            }
            if ((int)(uint)uStack_300 < (int)uVar7) {
              uVar7 = (uint)uStack_300;
            }
            if ((int)(uint)uStack_300 < 0) {
              uVar7 = 0;
            }
            uVar17 = PF_PART4(local_318, 4) & 1;
            if (((ulong)local_318 & 0x100000000) == 0) {
              local_325 = 0;
              local_323 = '\0';
            }
            else {
              local_3c = uVar17;
              if (local_323 == '\0') {
                uVar17 = 0xa2;
                if (0xa2 < (int)local_6894) {
                  uVar17 = local_6894;
                }
                iVar8 = uVar17 - 10;
                if (local_6894 == 0) {
                  iVar8 = 0x316;
                }
                if ((((iVar6 < 0x48) || ((int)uVar7 < 0xf)) || (iVar8 <= iVar6)) || (0x26 < uVar7))
                {
                  local_48 = 0xac;
                  if (0xac < (int)uStack_6890) {
                    local_48 = (ulong)uStack_6890;
                  }
                  auVar29 = recovered_100057b0((long)&local_6898);
                  uVar27 = local_330;
                  uVar9 = (uint)local_330;
                  uVar17 = iVar6 - 0xf;
                  iVar8 = (int)local_48;
                  if ((uVar17 < 0xc) && (uVar7 - 0x3f < 0xe)) {
                    iVar14 = 1;
                    if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                      if (local_64f0 == 1) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0;
                        do {
                          iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar25] == '\n') +
                                   iVar14;
                          iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar25 + 1] == '\n') +
                                   iVar14;
                          uVar25 = uVar25 + 2;
                        } while ((local_64f0 & 0xfffffffffffffffe) != uVar25);
                      }
                      if ((local_64f0 & 1) != 0) {
                        iVar14 = iVar14 + (uint)(iVar14 != 0x7fffffff && local_6500[uVar25] == '\n')
                        ;
                      }
                    }
                    uVar25 = (ulong)(iVar8 - 0x68);
                    if (uVar5 == 0) {
                      uVar25 = 0x1a0;
                    }
                    uVar23 = (ulong)(PF_PART4(local_6508, 4) + 3);
                    if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                      uVar23 = 0xd;
                    }
                    iVar8 = (int)(uVar25 / uVar23);
                    uVar5 = (iVar14 - iVar8) - (uint)(iVar8 == 0);
                    if ((int)uVar5 < 1) {
                      uVar5 = 0;
                    }
                    if ((int)((uint)local_330 - 1) < (int)uVar5) {
                      uVar5 = (uint)local_330 - 1;
                    }
                    if ((int)(uint)local_330 < 1) {
                      uVar5 = 0;
                    }
LAB_10001b9b:
                    local_330 = CONCAT44(PF_PART4(local_330, 4),uVar5);
                    if ((long)uVar27 < 0) {
                      local_330 = (ulong)uVar5;
                    }
                    bVar16 = 1;
                    if (uVar5 == uVar9) goto LAB_10001bbf;
                    goto LAB_10001e30;
                  }
                  iVar14 = iVar8 + -0x38;
                  if (uVar5 == 0) {
                    iVar14 = 0x1d0;
                  }
                  if (((uVar17 < 0xc) && (iVar14 <= (int)uVar7)) && (uVar7 < iVar14 + 0xeU)) {
                    uVar17 = 0x7ffffffe;
                    if ((int)(uint)local_330 < 0x7ffffffe) {
                      uVar17 = (uint)local_330;
                    }
                    if ((int)uVar17 < 0) {
                      uVar17 = 0xffffffff;
                    }
                    iVar14 = 1;
                    if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                      if (local_64f0 == 1) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0;
                        do {
                          iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar25] == '\n') +
                                   iVar14;
                          iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar25 + 1] == '\n') +
                                   iVar14;
                          uVar25 = uVar25 + 2;
                        } while ((local_64f0 & 0xfffffffffffffffe) != uVar25);
                      }
                      if ((local_64f0 & 1) != 0) {
                        iVar14 = iVar14 + (uint)(iVar14 != 0x7fffffff && local_6500[uVar25] == '\n')
                        ;
                      }
                    }
                    uVar26 = iVar8 - 0x68;
                    if (uVar5 == 0) {
                      uVar26 = 0x1a0;
                    }
                    uVar25 = (ulong)(PF_PART4(local_6508, 4) + 3);
                    if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                      uVar25 = 0xd;
                    }
                    iVar8 = (int)(uVar26 / uVar25);
                    uVar5 = (iVar14 - iVar8) - (uint)(iVar8 == 0);
                    if ((int)uVar5 < 1) {
                      uVar5 = 0;
                    }
                    if ((int)(uVar17 + 1) < (int)uVar5) {
                      uVar5 = uVar17 + 1;
                    }
                    goto LAB_10001b9b;
                  }
                  uVar9 = iVar8 - 0x3f;
                  if (uVar5 == 0) {
                    uVar9 = 0x1c9;
                  }
                  if (((uVar17 < 0xc) && (0x4e < (int)uVar7)) && (uVar7 < uVar9)) {
                    iVar14 = PF_PART4(auVar29, 12);
                    if (((iVar6 < PF_PART4(auVar29, 0)) || ((int)uVar7 < PF_PART4(auVar29, 4))) ||
                       ((PF_PART4(auVar29, 0) + PF_PART4(auVar29, 8) <= iVar6 ||
                        (iVar14 + PF_PART4(auVar29, 4) <= (int)uVar7)))) {
                      iVar20 = iVar8 + -0x8e;
                      if (uVar5 == 0) {
                        iVar20 = 0x17a;
                      }
                      iVar21 = 1;
                      if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                        if (local_64f0 == 1) {
                          uVar25 = 0;
                        }
                        else {
                          uVar25 = 0;
                          do {
                            iVar21 = (uint)(iVar21 != 0x7fffffff && local_6500[uVar25] == '\n') +
                                     iVar21;
                            iVar21 = (uint)(iVar21 != 0x7fffffff && local_6500[uVar25 + 1] == '\n')
                                     + iVar21;
                            uVar25 = uVar25 + 2;
                          } while ((local_64f0 & 0xfffffffffffffffe) != uVar25);
                        }
                        if ((local_64f0 & 1) != 0) {
                          iVar21 = iVar21 + (uint)(iVar21 != 0x7fffffff &&
                                                  local_6500[uVar25] == '\n');
                        }
                      }
                      uVar17 = iVar8 - 0x68;
                      if (uVar5 == 0) {
                        uVar17 = 0x1a0;
                      }
                      uVar25 = (ulong)(PF_PART4(local_6508, 4) + 3);
                      if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                        uVar25 = 0xd;
                      }
                      iVar8 = (int)(uVar17 / uVar25);
                      iVar8 = iVar8 + (uint)(iVar8 == 0);
                      if ((iVar21 - iVar8 == 0 || iVar21 < iVar8) ||
                         (uVar5 = iVar20 - iVar14, (int)uVar5 < 1)) {
                        local_330 = (ulong)PF_PART4(local_330, 4) << 0x20;
                      }
                      else {
                        uVar25 = (ulong)(uint)(iVar21 - iVar8) *
                                 (long)(int)((uVar7 - iVar14 / 2) + -0x4f);
                        if (uVar25 >> 0x20 == 0) {
                          uVar25 = (uVar25 & 0xffffffff) / (ulong)uVar5;
                        }
                        else {
                          uVar25 = (long)uVar25 / (long)(ulong)uVar5;
                        }
                        if (0x7ffffffe < (long)uVar25) {
                          uVar25 = 0x7fffffff;
                        }
                        if ((long)uVar25 < 1) {
                          uVar25 = 0;
                        }
                        iVar14 = 1;
                        if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                          if (local_64f0 == 1) {
                            uVar23 = 0;
                          }
                          else {
                            uVar23 = 0;
                            do {
                              iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar23] == '\n') +
                                       iVar14;
                              iVar14 = (uint)(iVar14 != 0x7fffffff && local_6500[uVar23 + 1] == '\n'
                                             ) + iVar14;
                              uVar23 = uVar23 + 2;
                            } while ((local_64f0 & 0xfffffffffffffffe) != uVar23);
                          }
                          if ((local_64f0 & 1) != 0) {
                            iVar14 = iVar14 + (uint)(iVar14 != 0x7fffffff &&
                                                    local_6500[uVar23] == '\n');
                          }
                        }
                        uVar5 = iVar14 - iVar8;
                        if ((int)uVar5 < 1) {
                          uVar5 = 0;
                        }
                        if ((int)(uint)uVar25 < (int)uVar5) {
                          uVar5 = (uint)uVar25;
                        }
                        local_330 = CONCAT44(PF_PART4(local_330, 4),uVar5);
                        if ((long)uVar27 < 0) {
                          local_330 = (ulong)uVar5;
                        }
                      }
                    }
                    local_325 = CONCAT11(PF_PART1(local_325, 1),1);
                    auVar29 = recovered_100057b0((long)&local_6898);
                    local_320 = uVar7 - PF_PART4(auVar29, 4);
                    goto LAB_10001e2d;
                  }
LAB_10001bbf:
                  uVar11 = recovered_10005530((long)&local_6898,iVar6,uVar7,'\0',0);
                  if ((char)uVar11 == '\0') {
                    iVar8 = local_6894 - 0x14;
                    if (local_6894 == 0) {
                      iVar8 = 0x30c;
                    }
                    bVar16 = 0;
                    if (((iVar6 < 0x41) || ((int)uVar7 < 0x40)) || (iVar8 <= iVar6))
                    goto LAB_10001e30;
                    uVar5 = 0xac;
                    if (0xac < (int)uStack_6890) {
                      uVar5 = uStack_6890;
                    }
                    uVar5 = uVar5 - 0x28;
                    if (uStack_6890 == 0) {
                      uVar5 = 0x1e0;
                    }
                    if (uVar5 <= uVar7) goto LAB_10000c37;
                  }
                  local_325 = CONCAT11(1,(char)local_325);
                }
                else {
                  iVar8 = (int)local_6508;
                  if ((int)local_6508 < 1) {
                    iVar8 = 6;
                  }
                  local_328 = 1;
                  local_64e0 = uStack_64e8;
                  thunk_snprintf(acStack_3454 + 1,0x3085,&DAT_100064da,local_64d8);
                  iVar14 = (iVar6 + -0x4c) / iVar8 + local_3c0;
                  uVar27 = thunk_strlen(acStack_3454 + 1);
                  iVar8 = (int)uVar27;
                  if (iVar14 < (int)uVar27) {
                    iVar8 = iVar14;
                  }
                  if (iVar14 < 0) {
                    iVar8 = 0;
                  }
                  local_3c8 = (ulong)iVar8;
                }
LAB_10001e2d:
                bVar16 = 1;
              }
              else {
LAB_10000c37:
                bVar16 = 0;
              }
LAB_10001e30:
              uVar5 = uStack_6890;
              if ((char)local_325 == '\x01') {
                uVar17 = 0xac;
                if (0xac < (int)uStack_6890) {
                  uVar17 = uStack_6890;
                }
                iVar6 = uVar17 - 0x8e;
                if (uStack_6890 == 0) {
                  iVar6 = 0x17a;
                }
                auVar29 = recovered_100057b0((long)&local_6898);
                iVar8 = 1;
                if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                  if (local_64f0 == 1) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0;
                    do {
                      iVar8 = (uint)(iVar8 != 0x7fffffff && local_6500[uVar27] == '\n') + iVar8;
                      iVar8 = (uint)(iVar8 != 0x7fffffff && local_6500[uVar27 + 1] == '\n') + iVar8;
                      uVar27 = uVar27 + 2;
                    } while ((local_64f0 & 0xfffffffffffffffe) != uVar27);
                  }
                  if ((local_64f0 & 1) != 0) {
                    iVar8 = iVar8 + (uint)(iVar8 != 0x7fffffff && local_6500[uVar27] == '\n');
                  }
                }
                uVar17 = uVar17 - 0x68;
                if (uVar5 == 0) {
                  uVar17 = 0x1a0;
                }
                uVar27 = (ulong)(PF_PART4(local_6508, 4) + 3);
                if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                  uVar27 = 0xd;
                }
                iVar14 = (int)(uVar17 / uVar27);
                iVar14 = iVar14 + (uint)(iVar14 == 0);
                if ((iVar8 - iVar14 == 0 || iVar8 < iVar14) ||
                   (uVar5 = iVar6 - PF_PART4(auVar29, 12), (int)uVar5 < 1)) goto LAB_10001fd2;
                uVar17 = (uint)local_330;
                uVar27 = (ulong)(uint)(iVar8 - iVar14) * (long)(int)((uVar7 - local_320) + -0x4f);
                if (uVar27 >> 0x20 == 0) {
                  uVar27 = (uVar27 & 0xffffffff) / (ulong)uVar5;
                }
                else {
                  uVar27 = (long)uVar27 / (long)(ulong)uVar5;
                }
                if (0x7ffffffe < (long)uVar27) {
                  uVar27 = 0x7fffffff;
                }
                if ((long)uVar27 < 1) {
                  uVar27 = 0;
                }
                iVar6 = 1;
                if ((local_6500 != (undefined1 *)0x0) && (local_64f0 != 0)) {
                  if (local_64f0 == 1) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = 0;
                    do {
                      iVar6 = (uint)(iVar6 != 0x7fffffff && local_6500[uVar25] == '\n') + iVar6;
                      iVar6 = (uint)(iVar6 != 0x7fffffff && local_6500[uVar25 + 1] == '\n') + iVar6;
                      uVar25 = uVar25 + 2;
                    } while ((local_64f0 & 0xfffffffffffffffe) != uVar25);
                  }
                  if ((local_64f0 & 1) != 0) {
                    iVar6 = iVar6 + (uint)(iVar6 != 0x7fffffff && local_6500[uVar25] == '\n');
                  }
                }
                uVar5 = iVar6 - iVar14;
                if ((int)uVar5 < 1) {
                  uVar5 = 0;
                }
                if ((int)(uint)uVar27 < (int)uVar5) {
                  uVar5 = (uint)uVar27;
                }
                bVar28 = (long)local_330 < 0;
                local_330 = CONCAT44((int)(local_330 >> 0x20),uVar5);
                if (bVar28) {
                  local_330 = (ulong)uVar5;
                }
                local_323 = (char)local_3c;
                uVar27 = (ulong)local_34;
                if (bVar16 == 0 && uVar5 == uVar17) goto LAB_10000b7c;
              }
              else {
                if (PF_PART1(local_325, 1) == '\x01') {
                  uVar11 = recovered_10005530((long)&local_6898,iVar6,uVar7,'\x01',1);
                  local_323 = (char)local_3c;
                  bVar16 = bVar16 | (byte)uVar11 & 1;
                }
                else {
LAB_10001fd2:
                  local_323 = (char)local_3c;
                }
                uVar27 = (ulong)local_34;
                if (bVar16 == 0) goto LAB_10000b7c;
              }
              uVar27 = 1;
            }
          }
LAB_10000b7c:
          bVar16 = (byte)uVar27;
          if ((local_58 & 2) != 0) {
            iVar6 = 0;
            local_34 = 0;
            do {
              iVar8 = Ram0000000000280800;
              if ((((iVar8 != 0x50414d57) || (iVar8 = Ram0000000000280804, iVar8 == 0)) ||
                  (uVar5 = Ram0000000000280808, uVar5 < 0xc)) ||
                 (uVar5 = Ram0000000000280808, uVar5 < 0x30)) break;
              uVar5 = UINT_0028082c;
              if ((code *)(ulong)uVar5 == (code *)0x0) break;
              uVar5 = (*(code *)(ulong)uVar5)();
              uVar25 = local_3c8;
              uVar27 = uStack_64e8;
              if (uVar5 == 0) break;
              if (SBORROW4(0,uVar5 & 0x8000ffff)) goto switchD_100011f3_caseD_48;
              cVar15 = (char)uVar5;
              cVar4 = (char)(uVar5 >> 8);
              if ((char)local_328 != '\x01') {
                uVar25 = local_64f0;
                if (local_64e0 < local_64f0) {
                  uVar25 = local_64e0;
                }
                uVar23 = local_64f0;
                if (uStack_64e8 < local_64f0) {
                  uVar23 = uStack_64e8;
                }
                uVar24 = uVar25;
                uVar1 = uVar23;
                if (local_64e0 < uVar23) {
                  uVar24 = uVar23;
                  uVar1 = uVar25;
                }
                uVar22 = uVar24;
                uVar18 = uVar1;
                if (uVar25 == uVar23) {
                  uVar18 = 0;
                  uVar22 = 0;
                }
                if ((uVar5 & 0x40000) != 0) {
                  if (((cVar4 == '\x1e') || (cVar15 == '\x01')) ||
                     ((uVar5 = uVar5 & 0xff, uVar5 == 0x61 || (uVar5 == 0x41)))) {
                    local_64e0 = 0;
                    uStack_64e8 = local_64f0;
                    thunk_snprintf(local_3bc,0x80,&DAT_100064da,str_100065db);
                  }
                  else {
                    if (((cVar4 == '.') || (cVar15 == '\x03')) || ((uVar5 == 99 || (uVar5 == 0x43)))
                       ) {
                      uVar27 = recovered_10004e30((long)&local_6898);
                      cVar4 = (char)uVar27;
                    }
                    else if ((((cVar4 == '/') || (cVar15 == '\x16')) || (uVar5 == 0x76)) ||
                            (uVar5 == 0x56)) {
                      pcVar10 = recovered_10005040((long)&local_6898);
                      cVar4 = (char)pcVar10;
                    }
                    else {
                      if (((cVar4 != '-') && (cVar15 != '\x18')) &&
                         ((uVar5 != 0x78 && (uVar5 != 0x58)))) goto switchD_100011f3_caseD_48;
                      uVar27 = recovered_10004b60((long)&local_6898);
                      cVar4 = (char)uVar27;
                    }
joined_r0x10000f72:
                    if (cVar4 == '\0') goto switchD_100011f3_caseD_48;
                  }
                  goto LAB_10000e25;
                }
                if ((uVar5 & 0x20000) != 0) goto switchD_100011f3_caseD_48;
                if ((byte)(cVar15 - 0x20U) < 0x5f) {
                  local_318 = (void *)CONCAT71(PF_PART7(local_318, 1),cVar15);
                  uVar27 = 1;
                  puVar19 = &local_318;
LAB_10000f68:
                  uVar11 = recovered_100052e0((long)&local_6898,(long)puVar19,uVar27);
                  cVar4 = (char)uVar11;
                  goto joined_r0x10000f72;
                }
                if (cVar15 == '\t') {
                  uVar27 = 4;
                  puVar19 = (undefined8 *)&DAT_100065e8;
                  goto LAB_10000f68;
                }
                if (((cVar4 == '\x0e') || (cVar15 == '\x7f')) || ((uVar5 & 0xff) == 8)) {
                  if ((uVar25 == uVar23) || (uVar24 <= uVar1 || local_6500 == (undefined1 *)0x0)) {
                    if (uStack_64e8 == 0 || local_6500 == (undefined1 *)0x0)
                    goto switchD_100011f3_caseD_48;
                    thunk_memmove(local_6500 + (uStack_64e8 - 1),local_6500 + uStack_64e8,
                                       (local_64f0 - uStack_64e8) + 1);
                    local_64f0 = local_64f0 + _DAT_10006420;
                    uStack_64e8 = uStack_64e8 + lRam0000000010006428;
                  }
                  else {
                    thunk_memmove(local_6500 + uVar1,local_6500 + uVar24,
                                       (local_64f0 - uVar24) + 1);
                    local_64f0 = local_64f0 + (uVar1 - uVar24);
                    uStack_64e8 = uVar1;
                  }
                  local_326 = 1;
                  local_64e0 = uStack_64e8;
                  goto LAB_10000e25;
                }
                if (cVar4 == '\x1c') {
LAB_100011b2:
                  local_318 = (void *)CONCAT71(PF_PART7(local_318, 1),10);
                  uVar11 = recovered_100052e0((long)&local_6898,(long)&local_318,1);
                  cVar4 = (char)uVar11;
                  goto joined_r0x10000f72;
                }
                uVar7 = uVar5 >> 8 & 0xff;
                if (uVar7 == 0x53) {
                  uVar11 = recovered_10005b70((long)&local_6898);
                  cVar4 = (char)uVar11;
                  goto joined_r0x10000f72;
                }
                if ((cVar15 == '\r') || ((uVar5 & 0xff) == 10)) goto LAB_100011b2;
                switch((uintptr_t)(uVar7)) {
                case 0x47:
                  if (local_6500 != (undefined1 *)0x0) {
                    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                      if (local_6500[uVar23 - 1] == '\n') goto LAB_10001464;
                    }
                  }
LAB_10001462:
                  uVar23 = 0;
                  goto LAB_10001464;
                case 0x48:
                  cVar4 = '\x01';
                  goto LAB_1000132f;
                case 0x49:
                  uVar5 = 0xac;
                  if (0xac < (int)uStack_6890) {
                    uVar5 = uStack_6890;
                  }
                  uVar27 = (ulong)(PF_PART4(local_6508, 4) + 3);
                  uVar5 = uVar5 - 0x68;
                  if (uStack_6890 == 0) {
                    uVar5 = 0x1a0;
                  }
                  if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                    uVar27 = 0xd;
                  }
                  iVar8 = (int)(uVar5 / uVar27);
                  iVar8 = ((uint)local_330 - iVar8) - (uint)(iVar8 == 0);
                  goto LAB_100013ed;
                case 0x4b:
                  if (((uVar5 & 0x10000) == 0) && (uVar25 != uVar23)) {
                    bVar28 = true;
                    uStack_64e8 = uVar18;
                  }
                  else {
                    if (uStack_64e8 == 0) break;
                    uStack_64e8 = uStack_64e8 - 1;
LAB_1000144b:
                    bVar28 = true;
                  }
                  goto LAB_10001477;
                case 0x4d:
                  if (((uVar5 & 0x10000) == 0) && (uVar25 != uVar23)) {
                    bVar28 = true;
                    uStack_64e8 = uVar22;
                    goto LAB_10001477;
                  }
                  if (uStack_64e8 < local_64f0) {
                    uStack_64e8 = uStack_64e8 + 1;
                    goto LAB_1000144b;
                  }
                  break;
                case 0x4f:
                  if (local_6500 == (undefined1 *)0x0) goto LAB_10001462;
                  for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                    if (local_6500[uVar23 - 1] == '\n') {
                      if (uVar23 <= local_64f0) goto LAB_100012f5;
                      goto LAB_10001462;
                    }
                  }
                  uVar23 = 0;
LAB_100012f5:
                  if (uVar23 < local_64f0) {
                    do {
                      if (local_6500[uVar23] == '\n') goto LAB_10001464;
                      uVar23 = uVar23 + 1;
                    } while (local_64f0 != uVar23);
                    uVar23 = local_64f0;
                  }
LAB_10001464:
                  bVar28 = uVar23 != uStack_64e8;
                  uStack_64e8 = uVar23;
LAB_10001477:
                  if (((uVar5 & 0x10000) != 0) || (!bVar28)) {
                    if (!bVar28) break;
                  }
                  else {
                    local_64e0 = uStack_64e8;
                  }
LAB_10000e25:
                  recovered_10002800((long)&local_6898);
                  local_34 = (uint)CONCAT71(extraout_var,1);
                  break;
                case 0x50:
                  cVar4 = '\0';
LAB_1000132f:
                  recovered_10005c60((long)&local_6898,cVar4);
                  bVar28 = uStack_64e8 != uVar27;
                  goto LAB_10001477;
                case 0x51:
                  uVar5 = 0xac;
                  if (0xac < (int)uStack_6890) {
                    uVar5 = uStack_6890;
                  }
                  uVar5 = uVar5 - 0x68;
                  if (uStack_6890 == 0) {
                    uVar5 = 0x1a0;
                  }
                  uVar27 = (ulong)(PF_PART4(local_6508, 4) + 3);
                  if (((int32_t)PF_PART4(local_6508, 4)) < 1) {
                    uVar27 = 0xd;
                  }
                  iVar8 = (int)(uVar5 / uVar27);
                  lVar12 = (ulong)(iVar8 + (uint)(iVar8 == 0)) + (long)(int)(uint)local_330;
                  if (0x7ffffffe < lVar12) {
                    lVar12 = 0x7fffffff;
                  }
                  if (lVar12 < 1) {
                    lVar12 = 0;
                  }
                  iVar8 = (int)lVar12;
LAB_100013ed:
                  local_330 = CONCAT44(PF_PART4(local_330, 4),iVar8);
                  recovered_10005a50((long)&local_6898);
                  goto LAB_10000e25;
                }
                goto switchD_100011f3_caseD_48;
              }
              if ((uVar5 & 0x60000) != 0) goto switchD_100011f3_caseD_48;
              if ((byte)(cVar15 - 0x20U) < 0x5f) {
                uVar27 = thunk_strlen(acStack_3454 + 1);
                if (0xffffffffffffcf7a < uVar27 - 0x3084) {
                  thunk_memmove(acStack_3454 + local_3c8 + 2,acStack_3454 + local_3c8 + 1,
                                     (uVar27 - local_3c8) + 1);
                  acStack_3454[local_3c8 + 1] = cVar15;
                  local_3c8 = local_3c8 + 1;
                  goto LAB_10000ed2;
                }
                goto switchD_100011f3_caseD_48;
              }
              if (((cVar4 == '\x0e') || (cVar15 == '\x7f')) || ((uVar5 & 0xff) == 8)) {
                uVar27 = thunk_strlen(acStack_3454 + 1);
                if (uVar27 != 0 && local_3c8 != 0) {
                  thunk_memmove(acStack_3454 + local_3c8,acStack_3454 + local_3c8 + 1,
                                     (uVar27 - local_3c8) + 1);
                  local_3c8 = local_3c8 - 1;
                  goto LAB_10000ed2;
                }
                goto switchD_100011f3_caseD_48;
              }
              bVar2 = PF_PART1(local_328, 1);
              if (((cVar4 == '\x1c') || (cVar15 == '\r')) || ((uVar5 & 0xff) == 10)) {
                if (acStack_3454[1] == '\0') {
                  thunk_snprintf(local_3bc,0x80,&DAT_100064da,str_100065cd);
                }
                else {
                  local_328 = (ushort)PF_PART1(local_328, 1) << 8;
                  if (bVar2 == 1) {
                    thunk_snprintf(local_64d8,0x3085,&DAT_100064da,acStack_3454 + 1);
                    uVar27 = recovered_10004970((long)&local_6898);
                    cVar4 = (char)uVar27;
                  }
                  else {
                    uVar27 = recovered_10002350((long)&local_6898,acStack_3454 + 1);
                    cVar4 = (char)uVar27;
                  }
                  if (cVar4 != '\0') goto LAB_10000ed2;
                }
                goto switchD_100011f3_caseD_48;
              }
              if (cVar15 == '\x1b' || cVar4 == '\x01') {
                local_328 = (ushort)PF_PART1(local_328, 1) << 8;
                thunk_snprintf(local_3bc,0x80,&DAT_100064da,str_100065b9);
                goto LAB_10000ed2;
              }
              switch((uintptr_t)(uVar5 >> 8 & 0xff)) {
              case 0x47:
                local_3c8 = 0;
                goto LAB_10000ed2;
              case 0x4b:
                if (local_3c8 != 0) {
                  local_3c8 = local_3c8 - 1;
                  goto LAB_10000ed2;
                }
                break;
              case 0x4d:
                uVar27 = thunk_strlen(acStack_3454 + 1);
                if (uVar25 < uVar27) {
                  local_3c8 = local_3c8 + 1;
                  goto LAB_10000ed2;
                }
                break;
              case 0x4f:
                local_3c8 = thunk_strlen(acStack_3454 + 1);
LAB_10000ed2:
                uVar5 = 0xa2;
                if (0xa2 < (int)local_6894) {
                  uVar5 = local_6894;
                }
                iVar8 = uVar5 - 0x5a;
                if (local_6894 == 0) {
                  iVar8 = 0x2c6;
                }
                iVar14 = (int)local_6508;
                if ((int)local_6508 < 1) {
                  iVar14 = 6;
                }
                uVar27 = (long)iVar8 / (long)iVar14 & 0xffffffff;
                if ((int)((long)iVar8 / (long)iVar14) < 2) {
                  uVar27 = 1;
                }
                iVar8 = (int)local_3c8;
                if ((int)local_3c8 < local_3c0) {
LAB_10000f2c:
                  local_3c0 = iVar8;
                }
                else if (local_3c0 + (int)uVar27 <= (int)local_3c8) {
                  iVar8 = ((int)local_3c8 - (int)uVar27) + 1;
                  goto LAB_10000f2c;
                }
                local_34 = (uint)CONCAT71((int7)(uVar27 >> 8),1);
                if (local_3c0 < 0) {
                  local_3c0 = 0;
                }
              }
switchD_100011f3_caseD_48:
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0x20);
            if ((local_34 & 1) != 0) {
              bVar16 = 1;
            }
          }
          iVar6 = local_3c0;
          if ((char)local_328 == '\x01') {
            uVar5 = 0xa2;
            if (0xa2 < (int)local_6894) {
              uVar5 = local_6894;
            }
            iVar8 = uVar5 - 0x5a;
            if (local_6894 == 0) {
              iVar8 = 0x2c6;
            }
            iVar14 = (int)local_6508;
            if ((int)local_6508 < 1) {
              iVar14 = 6;
            }
            iVar8 = iVar8 / iVar14;
            if (iVar8 < 2) {
              iVar8 = 1;
            }
            iVar14 = (int)local_3c8;
            if ((int)local_3c8 < local_3c0) {
LAB_10001529:
              local_3c0 = iVar14;
            }
            else if (local_3c0 + iVar8 <= (int)local_3c8) {
              iVar14 = ((int)local_3c8 - iVar8) + 1;
              goto LAB_10001529;
            }
            if (local_3c0 < 0) {
              local_3c0 = 0;
            }
            bVar28 = iVar6 == local_3c0;
          }
          else {
            bVar28 = recovered_10002800((long)&local_6898);
            bVar28 = !bVar28;
          }
          uVar5 = local_6548;
          if (!bVar28) {
            bVar16 = 1;
          }
          uVar27 = (ulong)(local_338 >> 0xc & 1);
          if ((local_58 & 2) == 0) {
            uVar27 = 1;
          }
          argv = (char **)(ulong)bVar16;
          if ((uint)uVar27 != local_40) {
            argv = (char **)0x1;
          }
          if ((local_6544 == '\0') && ((local_325 & 1) == 0)) {
            iVar6 = -1;
            if (local_6548 != 0) goto LAB_100015bc;
            uVar7 = 0;
          }
          else {
            iVar6 = 1;
            uVar7 = local_6548;
            if (local_6548 < 0x20) {
LAB_100015bc:
              local_6548 = iVar6 + local_6548;
              uVar7 = local_6548;
            }
          }
          cVar4 = (char)argv;
          if ((local_38 & 1) == 0) {
            if (0x1f < uVar7) {
              uVar7 = 0x20;
            }
            if (0x1f < uVar5) {
              uVar5 = 0x20;
            }
            if ((cVar4 != '\0') ||
               (0x3ff < (((uVar5 * -0x40 + 0xc00) * uVar5 * 0x20 * uVar5 * 0x20 + 0x80000 >> 0x14) *
                         10 + 0x200 ^
                        ((uVar7 * -0x40 + 0xc00) * uVar7 * 0x20 * uVar7 * 0x20 + 0x80000 >> 0x14) *
                        10 + 0x200))) {
              if ((cVar4 != '\0') ||
                 (uVar3 = terror_ui_scrollbar_restore(local_6540,&local_6898), uVar3 == '\0'))
              goto LAB_100015d0;
              local_6543 = 1;
              recovered_10002ad0((long)&local_6898);
              local_6543 = 0;
              pf_app_terror_ui_window_present_rect(&local_6898,local_6530,local_6528);
              local_38 = 0;
            }
          }
          else {
LAB_100015d0:
            recovered_10003150((long)&local_6898);
            pixels = local_6510;
            uVar17 = local_688c;
            uVar7 = uStack_6890;
            uVar5 = local_6894;
            local_38 = 0;
            local_40 = (uint)uVar27;
            uVar9 = thunk_terror_ui_colour(0);
            uVar27 = (ulong)local_40;
            thunk_terror_ui_window_present(&local_6898,str_10006471,pixels,uVar5,uVar7,uVar17,uVar9);
          }
          local_338 = local_338 + 1;
          if (local_6548 - 1 < 0x1f) {
            uVar5 = 2;
LAB_10000915:
            thunk_terror_ui_yield_frames(uVar5);
          }
          else {
            if ((cVar4 == '\0') && ((local_38 & 1) == 0)) {
              uVar5 = 5;
              if ((local_58 & 2) == 0) {
                uVar5 = 0x14;
              }
              goto LAB_10000915;
            }
            iVar6 = Ram0000000000280800;
            if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                (uVar5 = Ram0000000000280808, 0xb < uVar5)) &&
               (uVar5 = Ram0000000000280808, 0x9f < uVar5)) {
              uVar5 = UINT_0028089c;
              if ((code *)(ulong)uVar5 != (code *)0x0) {
                (*(code *)(ulong)uVar5)();
              }
            }
          }
        } while (local_31c != '\0');
      }
      terror_ui_scrollbar_release(local_6540);
      if (local_6898 != 0) {
        thunk_terror_ui_window_close(&local_6898);
      }
      if (local_6500 == (undefined1 *)0x0) {
        return 0;
      }
      iVar6 = Ram0000000000280800;
      if (iVar6 != 0x50414d57) {
        return 0;
      }
      iVar6 = Ram0000000000280804;
      if (iVar6 == 0) {
        return 0;
      }
      uVar5 = Ram0000000000280808;
      if (uVar5 < 0xc) {
        return 0;
      }
      uVar5 = Ram0000000000280808;
      if (uVar5 < 0x54) {
        return 0;
      }
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 == (code *)0x0) {
        return 0;
      }
      (*(code *)(ulong)uVar5)(local_6500);
      return 0;
    }
    thunk_terror_ui_window_close(&local_6898);
  }
  iVar6 = Ram0000000000280800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
     ((uVar5 = Ram0000000000280808, 0xb < uVar5 &&
      ((uVar5 = Ram0000000000280808, 0x53 < uVar5 && (uVar5 = UINT_00280850, uVar5 != 0)))))) {
    (*(code *)(ulong)uVar5)(local_6500);
  }
  local_6500 = (undefined1 *)0x0;
LAB_10002284:
  iVar6 = Ram0000000000280800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
      (uVar5 = Ram0000000000280808, 0xb < uVar5)) && (uVar5 = Ram0000000000280808, 0x2b < uVar5)) {
    uVar5 = UINT_00280828;
    if ((code *)(ulong)uVar5 != (code *)0x0) {
      (*(code *)(ulong)uVar5)(str_10006440);
    }
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006420
#undef DAT_100064da
#undef DAT_100064dd
#undef DAT_100065e8
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_0028089c
#undef UINT_00280978
#undef UNK_10006428
#undef _DAT_10006420
#undef lRam0000000010006428
#undef str_10006440
#undef str_10006465
#undef str_1000646b
#undef str_10006471
#undef str_1000647d
#undef str_1000648c
#undef str_10006499
#undef str_100065b9
#undef str_100065cd
#undef str_100065db
#undef local_6894
#undef local_688c
#undef local_6868
#undef local_6548
#undef local_6544
#undef local_6543
#undef local_6540
#undef local_6530
#undef uStack_300
#undef local_6528
#undef local_6510
#undef uStack_2f0
#undef local_6508
#undef local_6500
#undef uStack_2e0
#undef local_64f8
#undef local_64f0
#undef iStack_94
#undef local_64e0
#undef local_64d8
#undef uStack_88
#undef local_3c8
#undef local_3c0
#undef uStack_78
#undef local_3bc
#undef local_33c
#undef uStack_68
#undef local_338
#undef local_334
#undef local_330
#undef uStack_50
#undef local_328
#undef local_326
#undef local_325
#undef local_323
#undef local_320
#undef local_31c
#undef local_318
#undef local_308
#undef local_2f8
#undef local_2e8
#undef local_2d8
#undef local_a0
#undef local_90
#undef local_80
#undef local_70
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_6890
#undef uStack_64e8
#undef acStack_3454
#undef local_6898

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
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
#undef str_100064df
#define str_100064df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x273U)))
#undef str_100064eb
#define str_100064eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_100064fb
#define str_100064fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_1000651c
#define str_1000651c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b0U)))
#define local_3154 (*(uint *)(pf_stack_frame + 28))
#define local_3150 (*(char (*)[12624])(pf_stack_frame + 32))
#define local_c8 (*(char (*)[200])(pf_stack_frame + 12456))
#define local_3c (*(uint *)(pf_stack_frame + 12596))
#define local_38 (*(uint *)(pf_stack_frame + 12600))
#define local_34 (*(byte *)(pf_stack_frame + 12604))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002350
 */

ulong recovered_10002350(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12688] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  void *ptr;
  long lVar4;
  ulong uVar5;
  char *arg0;
  char cVar6;
  long lVar7;
  ulong uVar8;

  if (param_1 == 0) {
    uVar8 = 0;
    goto LAB_10002695;
  }
  if (((param_2 == (char *)0x0) || (*(long *)(param_1 + 0x398) == 0)) || (*param_2 == '\0')) {
    arg0 = str_100064df;
  }
  else {
    thunk_memset(&local_3c,0,0xc);
    bVar1 = recovered_10004530(param_2,(int *)&local_3154);
    if (bVar1) {
      iVar2 = Ram0000000000280800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
         ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
          ((uVar3 = Ram0000000000280808, 0x21f < uVar3 && (iVar2 = Ram0000000000280a1c, iVar2 != 0))
          )))) {
        uVar3 = Ram0000000000280a1c;
        iVar2 = (*(code *)(ulong)uVar3)(local_3154,local_3150,&local_3c);
        if (iVar2 != 0) {
LAB_100025ef:
          if (((local_34 & 2) == 0) && (local_3c != 0 || (ulong)local_38 == 0)) {
            uVar8 = (ulong)local_38 + 1;
            lVar4 = recovered_100044e0((void *)(ulong)local_3c,uVar8);
            if (lVar4 != 0) {
              if (local_38 == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = 0;
                uVar5 = 1;
                do {
                  cVar6 = *(char *)(lVar4 + -1 + uVar5);
                  if (cVar6 == '\r') {
                    cVar6 = '\n';
                    if ((local_38 <= uVar5) || (*(char *)(lVar4 + uVar5) != '\n'))
                    goto LAB_100026d4;
                  }
                  else if (((byte)(cVar6 - 0x20U) < 0x5f || (byte)(cVar6 - 9U) < 2) ||
                          (bVar1 = cVar6 != '\0', cVar6 = '?', bVar1)) {
LAB_100026d4:
                    *(char *)(lVar4 + lVar7) = cVar6;
                    lVar7 = lVar7 + 1;
                  }
                  bVar1 = uVar5 < local_38;
                  uVar5 = uVar5 + 1;
                } while (bVar1);
              }
              *(undefined1 *)(lVar4 + lVar7) = 0;
              recovered_10004490(*(void **)(param_1 + 0x398));
              *(long *)(param_1 + 0x398) = lVar4;
              *(ulong *)(param_1 + 0x3a0) = uVar8;
              *(long *)(param_1 + 0x3a8) = lVar7;
              *(undefined8 *)(param_1 + 0x3b0) = 0;
              *(undefined8 *)(param_1 + 0x3b8) = 0;
              *(undefined8 *)(param_1 + 0x6568) = 0;
              *(undefined1 *)(param_1 + 0x6572) = 0;
              recovered_10004230((ulong)local_3154,local_3150,(undefined1 *)(param_1 + 0x3c0));
              thunk_snprintf(local_c8,0x80,str_1000651c,(undefined1 *)(param_1 + 0x3c0));
              thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,local_c8);
              uVar8 = CONCAT71((int7)((ulong)local_c8 >> 8),1);
              goto LAB_10002695;
            }
            recovered_10004490((void *)(ulong)local_3c);
            arg0 = str_100064fb;
            goto LAB_1000268e;
          }
        }
      }
      else {
        iVar2 = Ram0000000000280800;
        if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
            (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000280808, 0xcb < uVar3)) {
          uVar3 = UINT_002808c8;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)(local_3154,local_3150,&local_3c);
LAB_100024ef:
            if (uVar3 != 0) {
              uVar8 = (ulong)local_3c;
              local_3c = 0;
              if ((ulong)local_38 == 0) goto LAB_100025ef;
              if (((uVar8 != 0) && (iVar2 = Ram0000000000280800, iVar2 == 0x50414d57)) &&
                 ((iVar2 = Ram0000000000280804, iVar2 != 0 &&
                  ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
                   (uVar3 = Ram0000000000280808, 0x4f < uVar3)))))) {
                uVar3 = UINT_0028084c;
                if (((code *)(ulong)uVar3 != (code *)0x0) &&
                   (ptr = (*(code *)(ulong)uVar3)((ulong)local_38), ptr != (void *)0x0)) {
                  if ((ulong)local_38 != 0) {
                    if (((ulong)ptr >> 0x20 != 0) || (0xffffffffU - (long)ptr < (ulong)local_38 - 1)
                       ) {
                      iVar2 = Ram0000000000280800;
                      if ((iVar2 == 0x50414d57) &&
                         (((iVar2 = Ram0000000000280804, iVar2 != 0 &&
                           (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
                          (uVar3 = Ram0000000000280808, 0x53 < uVar3)))) {
                        uVar3 = UINT_00280850;
                        if ((code *)(ulong)uVar3 != (code *)0x0) {
                          (*(code *)(ulong)uVar3)(ptr);
                        }
                      }
                      goto LAB_10002612;
                    }
                    uVar5 = 0;
                    do {
                      *(undefined1 *)((long)ptr + uVar5) = *(undefined1 *)(uVar8 + uVar5);
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < local_38);
                  }
                  local_3c = (uint)ptr;
                  goto LAB_100025ef;
                }
              }
            }
          }
        }
        else {
          iVar2 = Ram0000000000280800;
          if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
             ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
              (uVar3 = Ram0000000000280808, 0x37 < uVar3)))) {
            uVar3 = UINT_00280834;
            if ((code *)(ulong)uVar3 != (code *)0x0) {
              uVar3 = (*(code *)(ulong)uVar3)(local_3150,&local_3c);
              goto LAB_100024ef;
            }
          }
        }
      }
    }
LAB_10002612:
    iVar2 = Ram0000000000280800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
        (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x53 < uVar3))
    {
      uVar3 = UINT_00280850;
      if ((code *)(ulong)uVar3 != (code *)0x0) {
        (*(code *)(ulong)uVar3)((void *)(ulong)local_3c);
      }
    }
    arg0 = local_c8;
    thunk_snprintf(arg0,0x80,str_100064eb,param_2);
  }
LAB_1000268e:
  uVar8 = 0;
  thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,arg0);
LAB_10002695:
  return uVar8 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a1c
#undef DAT_100064da
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a1c
#undef UINT_00280834
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808c8
#undef str_100064df
#undef str_100064eb
#undef str_100064fb
#undef str_1000651c
#undef local_3154
#undef local_3150
#undef local_c8
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002800
 */

bool recovered_10002800(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  uVar6 = 0;
  if (param_1 == 0) goto LAB_10002acd;
  uVar1 = *(uint *)(param_1 + 0x6568);
  lVar3 = *(long *)(param_1 + 0x398);
  uVar4 = *(ulong *)(param_1 + 0x3b0);
  if (lVar3 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x3a8);
    if (uVar4 <= *(ulong *)(param_1 + 0x3a8)) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if (uVar7 == 1) {
        uVar6 = 0;
        uVar10 = 0;
      }
      else {
        uVar6 = 0;
        uVar10 = 0;
        do {
          iVar12 = (uVar6 != 0x7fffffff && *(char *)(lVar3 + uVar10) == '\n') + uVar6;
          uVar6 = (uint)(iVar12 != 0x7fffffff && *(char *)(lVar3 + 1 + uVar10) == '\n') + iVar12;
          uVar10 = uVar10 + 2;
        } while ((uVar7 & 0xfffffffffffffffe) != uVar10);
      }
      if ((uVar7 & 1) != 0) {
        uVar6 = (uVar6 != 0x7fffffff && *(char *)(lVar3 + uVar10) == '\n') + uVar6;
      }
    }
    uVar7 = *(ulong *)(param_1 + 0x3a8);
    if (uVar4 < *(ulong *)(param_1 + 0x3a8)) {
      uVar7 = uVar4;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (*(char *)(lVar3 + -1 + uVar7) == '\n') {
        uVar10 = 0;
        if (uVar7 <= uVar4) goto LAB_10002903;
        goto LAB_10002916;
      }
    }
  }
  uVar7 = 0;
LAB_10002903:
  uVar10 = 0x7fffffff;
  if (uVar4 - uVar7 < 0x7fffffff) {
    uVar10 = uVar4 - uVar7;
  }
LAB_10002916:
  iVar11 = (int)uVar10;
  iVar12 = *(int *)(param_1 + 8);
  iVar13 = 0xac;
  if (0xac < iVar12) {
    iVar13 = iVar12;
  }
  iVar2 = *(int *)(param_1 + 0x656c);
  uVar9 = 0x1a0;
  if (iVar12 != 0) {
    uVar9 = iVar13 - 0x68;
  }
  uVar8 = 0xd;
  if (0 < *(int *)(param_1 + 0x394)) {
    uVar8 = *(int *)(param_1 + 0x394) + 3;
  }
  uVar9 = uVar9 / uVar8 + (uint)(uVar9 / uVar8 == 0);
  iVar12 = 0x2cb;
  if (*(int *)(param_1 + 4) != 0) {
    iVar12 = *(int *)(param_1 + 4) + -0x55;
  }
  iVar13 = 6;
  if (0 < *(int *)(param_1 + 0x390)) {
    iVar13 = *(int *)(param_1 + 0x390);
  }
  uVar8 = 1;
  if (1 < iVar12 / iVar13) {
    uVar8 = iVar12 / iVar13;
  }
  uVar5 = uVar6;
  if ((int)uVar6 < (int)uVar1) {
LAB_100029a4:
    *(uint *)(param_1 + 0x6568) = uVar5;
  }
  else {
    uVar5 = uVar1;
    if ((long)((ulong)uVar9 + (long)(int)uVar1) <= (long)(int)uVar6) {
      uVar5 = (uVar6 - uVar9) + 1;
      goto LAB_100029a4;
    }
  }
  iVar12 = iVar11;
  if (iVar11 < iVar2) {
LAB_100029cb:
    *(int *)(param_1 + 0x656c) = iVar12;
  }
  else {
    iVar12 = iVar2;
    if ((long)((ulong)uVar8 + (long)iVar2) <= (long)(uVar10 & 0xffffffff)) {
      iVar12 = (iVar11 - uVar8) + 1;
      goto LAB_100029cb;
    }
  }
  iVar13 = 1;
  if ((lVar3 != 0) && (uVar4 = *(ulong *)(param_1 + 0x3a8), uVar4 != 0)) {
    if (uVar4 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        iVar13 = (uint)(iVar13 != 0x7fffffff && *(char *)(lVar3 + uVar7) == '\n') + iVar13;
        iVar13 = (uint)(iVar13 != 0x7fffffff && *(char *)(lVar3 + 1 + uVar7) == '\n') + iVar13;
        uVar7 = uVar7 + 2;
      } while ((uVar4 & 0xfffffffffffffffe) != uVar7);
    }
    if ((uVar4 & 1) != 0) {
      iVar13 = iVar13 + (uint)(iVar13 != 0x7fffffff && *(char *)(lVar3 + uVar7) == '\n');
    }
  }
  uVar9 = iVar13 - uVar9;
  if ((int)uVar9 < 1) {
    uVar9 = 0;
  }
  if ((int)uVar5 < (int)uVar9) {
    uVar9 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar9 = 0;
  }
  *(uint *)(param_1 + 0x6568) = uVar9;
  if (iVar12 < 0) {
    *(undefined4 *)(param_1 + 0x656c) = 0;
    iVar12 = 0;
  }
  uVar6 = 1;
  if (uVar9 == uVar1) {
    uVar6 = (uint)(iVar12 != iVar2);
  }
LAB_10002acd:
  return SUB41(uVar6,0);
}


#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

void recovered_10002ad0(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint128 auVar14;

  if (param_1 == 0) {
    iVar12 = 0x208;
  }
  else {
    iVar12 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar12 = *(int *)(param_1 + 8);
    }
  }
  if (iVar12 < 0xad) {
    iVar12 = 0xac;
  }
  auVar14 = recovered_100057b0(param_1);
  uVar7 = PF_PART8(auVar14, 0);
  if (param_1 == 0) {
    local_38 = 0x1d00000000f;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar9 = 0xac;
    if (0xac < iVar1) {
      iVar9 = iVar1;
    }
    uVar4 = 0x1ac;
    if (iVar1 != 0) {
      uVar4 = (ulong)(iVar9 - 0x5c);
    }
    local_38 = (uVar4 << 0x20) + 0x240000000f;
  }
  uVar4 = (ulong)(iVar12 - 0x8eU) << 0x20;
  if (*(char *)(param_1 + 0x355) == '\0') {
    uVar2 = (int)(local_38 >> 0x20) + 0xe;
    uVar3 = iVar12 - 0x3fU;
    if (iVar12 - 0x3fU < uVar2) {
      uVar3 = uVar2;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x358),(void *)param_1,0x3f0000000f,
                       (ulong)(uVar3 - 0x3f) << 0x20 | 0xc);
  }
  uVar3 = 0x20;
  if (*(uint *)(param_1 + 0x350) < 0x20) {
    uVar3 = *(uint *)(param_1 + 0x350);
  }
  uVar5 = (uVar3 * -0x40 + 0xc00) * uVar3 * 0x20 * uVar3 * 0x20;
  uVar3 = uVar5 + 0x80000 >> 0x14;
  uVar10 = uVar3 * 10 + 0x200 >> 10;
  uVar11 = (ulong)uVar10;
  uVar2 = thunk_terror_ui_colour(5);
  recovered_10005e00(param_1,0x4f0000000f,CONCAT44(iVar12 - 0x8eU,uVar10) + 2,
                     (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00);
  uVar2 = thunk_terror_ui_colour(8);
  uVar2 = (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00;
  lVar6 = uVar11 + 0x100000002;
  recovered_10005e00(param_1,0x4f0000000f,lVar6,uVar2);
  recovered_10005e00(param_1,uVar4 + 0x4e0000000f,lVar6,uVar2);
  uVar4 = uVar4 | 1;
  recovered_10005e00(param_1,0x4f0000000f,uVar4,uVar2);
  recovered_10005e00(param_1,uVar11 + 0x4f00000010,uVar4,uVar2);
  iVar12 = (int)(uVar11 + 2);
  if (0 < PF_PART4(auVar14, 12)) {
    uVar4 = PF_PART8(auVar14, 8) & 0xffffffff00000000;
    uVar2 = (uint)(0x337ffff < uVar5);
    uVar10 = thunk_terror_ui_colour(6);
    recovered_10005e00(param_1,CONCAT44(PF_PART4(auVar14, 4) + uVar2,
                                        (uint)(0x337ffff < uVar5) + PF_PART4(auVar14, 0)),
                       CONCAT44(PF_PART4(auVar14, 12) + uVar2 * -2,iVar12 + uVar2 * -2),
                       (uVar10 & 0xff0000) >> 0x10 | uVar10 << 0x10 | uVar10 & 0xff00);
    uVar2 = thunk_terror_ui_colour(9);
    uVar2 = (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00;
    recovered_10005e00(param_1,uVar7,lVar6,uVar2);
    recovered_10005e00(param_1,(uVar7 + uVar4 & 0xffffffff00000000) - 0x100000000 |
                               uVar7 & 0xffffffff,lVar6,uVar2);
    uVar4 = uVar4 | 1;
    recovered_10005e00(param_1,uVar7,uVar4,uVar2);
    recovered_10005e00(param_1,(ulong)(uint)(PF_PART4(auVar14, 0) + -1 + iVar12) |
                               uVar7 & 0xffffffff00000000,uVar4,uVar2);
  }
  uVar2 = thunk_terror_ui_colour(7);
  recovered_10005e00(param_1,0x3f0000000f,uVar11 + 0xe00000002,
                     (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00);
  uVar2 = thunk_terror_ui_colour(10);
  uVar2 = (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00;
  recovered_10005e00(param_1,0x3f0000000f,lVar6,uVar2);
  recovered_10005e00(param_1,0x4c0000000f,lVar6,uVar2);
  recovered_10005e00(param_1,0x3f0000000f,0xe00000001,uVar2);
  recovered_10005e00(param_1,uVar11 + 0x3f00000010,0xe00000001,uVar2);
  uVar2 = thunk_terror_ui_colour(0xb);
  uVar5 = uVar3 * 10 + 0x200 >> 10;
  lVar13 = (ulong)(uVar5 + 2 >> 1) + 0x420000000f;
  uVar4 = (ulong)(uVar5 + 3 >> 1);
  uVar7 = 4;
  if (uVar4 < 4) {
    uVar7 = uVar4;
  }
  lVar8 = 0x100000001;
  do {
    recovered_10005e00(param_1,lVar13,lVar8,
                       (uVar2 & 0xff0000) >> 0x10 | uVar2 & 0xff00 | uVar2 << 0x10);
    lVar13 = lVar13 + 0xffffffff;
    lVar8 = lVar8 + 2;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  uVar2 = thunk_terror_ui_colour(7);
  recovered_10005e00(param_1,local_38,uVar11 + 0xe00000002,
                     (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00);
  uVar2 = thunk_terror_ui_colour(10);
  uVar2 = (uVar2 & 0xff0000) >> 0x10 | uVar2 << 0x10 | uVar2 & 0xff00;
  uVar7 = local_38 & 0xffffffff00000000;
  recovered_10005e00(param_1,local_38,lVar6,uVar2);
  recovered_10005e00(param_1,(local_38 & 0xffffffff) + uVar7 + 0xd00000000,lVar6,uVar2);
  recovered_10005e00(param_1,local_38,0xe00000001,uVar2);
  recovered_10005e00(param_1,(uint)(iVar12 + (int)local_38 + -1) | uVar7,0xe00000001,uVar2);
  uVar5 = thunk_terror_ui_colour(0xb);
  uVar10 = (uVar3 * 10 + 0x200 >> 10) + 3 >> 1;
  uVar2 = 4;
  if (uVar10 < 4) {
    uVar2 = uVar10;
  }
  uVar4 = (ulong)(uVar2 * 2);
  lVar6 = uVar7 + 0x500000000;
  uVar2 = uVar3 * 10 + 0x200 >> 10;
  uVar10 = uVar2 + 3 >> 1;
  uVar3 = 4;
  if (uVar10 < 4) {
    uVar3 = uVar10;
  }
  uVar3 = ((uVar2 + 2 >> 1) + (int)local_38) - uVar3;
  do {
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 - 2;
    recovered_10005e00(param_1,(ulong)uVar3 + lVar6,(uVar4 & 0xffffffff) + 0x100000001,
                       (uVar5 & 0xff0000) >> 0x10 | uVar5 & 0xff00 | uVar5 << 0x10);
    lVar6 = lVar6 + 0x100000000;
  } while (uVar4 != 0);
  return;
}

#undef local_38

#undef DAT_00000004
#define DAT_00000004 (*(uint8_t *)(0x4U))
#undef DAT_10006528
#define DAT_10006528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100065f2
#define DAT_100065f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x386U)))
#undef DAT_100065f5
#define DAT_100065f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x389U)))
#undef _DAT_00000004
#define _DAT_00000004 (*(uint *)(0x4U))
#undef str_100065fa
#define str_100065fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38eU)))
#define local_80 (*(ulong *)(pf_stack_frame + 208))
#define local_78 (*(undefined8 *)(pf_stack_frame + 216))
#define local_70 (*(ulong *)(pf_stack_frame + 224))
#define local_68 (*(ulong *)(pf_stack_frame + 232))
#define local_5c (*(uint *)(pf_stack_frame + 244))
#define local_58 (*(ulong *)(pf_stack_frame + 248))
#define local_50 (*(ulong *)(pf_stack_frame + 256))
#define local_48 (*(ulong *)(pf_stack_frame + 264))
#define local_40 (*(ulong *)(pf_stack_frame + 272))
#define local_38 (*(long *)(pf_stack_frame + 280))
#define local_138 (*(char (*)[312])(pf_stack_frame + 24))
#define local_134 (*(char *)(pf_stack_frame + 28))
#define local_a0 (*(ulong *)(pf_stack_frame + 176))
#define local_98 (*(ulong *)(pf_stack_frame + 184))
#define local_90 (*(ulong *)(pf_stack_frame + 192))
#define local_88 (*(ulong *)(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003150(long param_1)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;

  local_38 = param_1;
  if (param_1 == 0) {
    uVar3 = thunk_terror_ui_colour(0);
    recovered_10005e00(0,0,0x20800000320,(uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00
                      );
    uVar3 = _DAT_00000004;
    uVar4 = 800;
  }
  else {
    uVar21 = (ulong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) == 0) {
      uVar21 = 800;
    }
    uVar7 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 8);
    }
    uVar3 = thunk_terror_ui_colour(0);
    param_1 = local_38;
    recovered_10005e00(local_38,0,uVar21 | uVar7 << 0x20,
                       (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = 800;
    if (uVar3 != 0) {
      uVar4 = uVar3;
    }
  }
  uVar19 = 0xa2;
  if (0xa2 < (int)uVar4) {
    uVar19 = uVar4;
  }
  local_40 = (ulong)(uVar19 - 0x52);
  iVar22 = 6;
  if (0 < *(int *)(param_1 + 0x390)) {
    iVar22 = *(int *)(param_1 + 0x390);
  }
  iVar22 = (int)(uVar19 - 0x5a) / iVar22;
  uVar21 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar21 = 800;
  }
  pcVar8 = (char *)(param_1 + 0x3c0);
  if (*(char *)(param_1 + 0x6570) != '\0') {
    pcVar8 = (char *)(param_1 + 0x3445);
  }
  uVar3 = thunk_terror_ui_colour(0x2d);
  recovered_10005e00(param_1,0,uVar21 + 0x3a00000000,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  uVar21 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) == 0) {
    uVar21 = 800;
  }
  uVar3 = thunk_terror_ui_colour(3);
  recovered_10005e00(param_1,0x3900000000,uVar21 | 0x100000000,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  uVar3 = thunk_terror_ui_colour(1);
  uVar21 = local_40;
  iVar6 = 1;
  if (1 < iVar22) {
    iVar6 = iVar22;
  }
  local_48 = CONCAT44(PF_PART4(local_48, 4),iVar6);
  lVar11 = local_40 + 0x1800000000;
  recovered_10005ff0(param_1,0xc,0x12,((uintptr_t)pf_module_state + 0x381U),4,
                     uVar3 & 0xff00 | uVar3 << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar3 = 2;
  if (*(char *)(param_1 + 0x6570) != '\0') {
    uVar3 = 0x1f;
  }
  uVar3 = thunk_terror_ui_colour(uVar3);
  recovered_10005e00(param_1,0xf00000048,lVar11,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  uVar4 = thunk_terror_ui_colour(*(byte *)(param_1 + 0x6570) + 3);
  local_58 = CONCAT44(PF_PART4(local_58, 4),uVar4 >> 0x10);
  uVar19 = uVar4 >> 0x10 & 0xff | uVar4 & 0xff00 | uVar4 << 0x10;
  recovered_10005e00(param_1,0xf00000048,uVar21 + 0x100000000,uVar19);
  recovered_10005e00(param_1,0x2600000048,uVar21 + 0x100000000,uVar19);
  lVar11 = local_38;
  uVar21 = local_40;
  iVar22 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  if (iVar22 == 0) {
    iVar22 = 800;
  }
  iVar6 = 0x48;
  if (iVar22 < 0x48) {
    iVar6 = iVar22;
  }
  if (uVar3 == 0) {
    uVar3 = 0x208;
  }
  if (0xf < (int)uVar3) {
    uVar7 = 0x27;
    if (uVar3 < 0x27) {
      uVar7 = (ulong)uVar3;
    }
    local_50 = (ulong)(uint)(iVar6 * 4);
    uVar15 = 0xf;
    do {
      if (((0x48 < iVar22 && local_38 != 0) && (*(long *)(local_38 + 0x388) != 0)) &&
         ((iVar9 = *(int *)(local_38 + 4), iVar9 == 0 || (iVar6 < iVar9)))) {
        iVar16 = *(int *)(local_38 + 8);
        if (iVar16 == 0) {
          iVar16 = 0x208;
        }
        if ((long)uVar15 < (long)iVar16) {
          uVar12 = (ulong)(uint)(iVar9 * 4);
          if (iVar9 == 0) {
            uVar12 = 0xc80;
          }
          if (*(uint *)(local_38 + 0xc) != 0) {
            uVar12 = (ulong)*(uint *)(local_38 + 0xc);
          }
          lVar17 = uVar12 * uVar15 + local_50;
          *(char *)(*(long *)(local_38 + 0x388) + lVar17) = (char)local_58;
          *(char *)(*(long *)(local_38 + 0x388) + 1 + lVar17) = (char)(uVar4 >> 8);
          *(char *)(*(long *)(local_38 + 0x388) + 2 + lVar17) = (char)uVar4;
          *(undefined1 *)(*(long *)(local_38 + 0x388) + 3 + lVar17) = 0xff;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar7 != uVar15);
  }
  recovered_10005e00(local_38,local_40 + 0xf00000047,0x1800000001,uVar19);
  uVar7 = thunk_strlen(pcVar8);
  iVar22 = *(int *)(lVar11 + 0x64d8);
  if (iVar22 < (int)uVar7) {
    iVar6 = 0x16;
    if (0 < *(int *)(lVar11 + 0x394)) {
      iVar6 = (0x18 - *(int *)(lVar11 + 0x394)) / 2 + 0xf;
    }
    uVar3 = thunk_terror_ui_colour(1);
    lVar11 = local_38;
    uVar7 = 0;
    do {
      if ((pcVar8 + iVar22)[uVar7] == '\0') {
        iVar9 = (int)uVar7;
        break;
      }
      uVar7 = uVar7 + 1;
      iVar9 = (int)local_48;
    } while ((local_48 & 0xffffffff) != uVar7);
    recovered_10005ff0(local_38,0x4c,iVar6,(long)(pcVar8 + iVar22),iVar9,
                       (uVar3 & 0xff0000) >> 0x10 | uVar3 & 0xff00 | uVar3 << 0x10);
  }
  if ((*(char *)(lVar11 + 0x6570) == '\x01') && ((*(byte *)(lVar11 + 0x6561) & 0x10) == 0)) {
    iVar22 = 6;
    if (0 < *(int *)(lVar11 + 0x390)) {
      iVar22 = *(int *)(lVar11 + 0x390);
    }
    uVar3 = iVar22 * (*(int *)(lVar11 + 0x64d0) - *(int *)(lVar11 + 0x64d8));
    if ((-1 < (int)uVar3) && ((int)(uVar3 + 7) < (int)uVar21)) {
      uVar4 = thunk_terror_ui_colour(4);
      recovered_10005e00(lVar11,(ulong)uVar3 + 0x130000004c,0x1000000002,
                         (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00);
    }
  }
  iVar22 = *(int *)(lVar11 + 4);
  iVar6 = *(int *)(lVar11 + 8);
  iVar9 = 0xac;
  if (0xac < iVar6) {
    iVar9 = iVar6;
  }
  uVar21 = 0x1ac;
  if (iVar6 != 0) {
    uVar21 = (ulong)(iVar9 - 0x5c);
  }
  uVar3 = 0x1a0;
  if (iVar6 != 0) {
    uVar3 = iVar9 - 0x68;
  }
  uVar21 = uVar21 << 0x20;
  local_58 = 0x30c;
  if (iVar22 != 0) {
    local_58 = (ulong)(iVar22 - 0x14);
  }
  local_a0 = 0x2cb;
  if (iVar22 != 0) {
    local_a0 = (ulong)(iVar22 - 0x55);
  }
  uVar7 = local_58 | 0x100000000;
  uVar4 = 0xd;
  if (0 < *(int *)(lVar11 + 0x394)) {
    uVar4 = *(int *)(lVar11 + 0x394) + 3;
  }
  local_48 = 0;
  lVar17 = uVar21 + local_58;
  iVar22 = 6;
  if (0 < *(int *)(lVar11 + 0x390)) {
    iVar22 = *(int *)(lVar11 + 0x390);
  }
  uVar19 = (int)local_a0 / iVar22;
  local_5c = 1;
  if (1 < (int)uVar19) {
    local_5c = uVar19;
  }
  lVar1 = *(long *)(lVar11 + 0x398);
  local_40 = CONCAT44(PF_PART4(local_40, 4),uVar3 / uVar4 + (uint)(uVar3 / uVar4 == 0));
  if (lVar1 == 0) {
    uVar12 = *(ulong *)(lVar11 + 0x3b0);
    local_50 = 1;
    uVar15 = 0;
LAB_100038e5:
    local_80 = 0x7fffffff;
    if (uVar12 - uVar15 < 0x7fffffff) {
      local_80 = uVar12 - uVar15;
    }
LAB_100038fb:
    if (local_38 != 0) {
      uVar15 = *(ulong *)(local_38 + 0x3a8);
      uVar18 = *(ulong *)(local_38 + 0x3b8);
      uVar14 = uVar15;
      if (uVar18 < uVar15) {
        uVar14 = uVar18;
      }
      if (uVar12 < uVar15) {
        uVar15 = uVar12;
      }
      if (uVar14 != uVar15) {
        local_68 = uVar14;
        local_70 = uVar15;
        if (uVar18 < uVar15) {
          local_68 = uVar15;
          local_70 = uVar14;
        }
        local_78 = CONCAT71((int7)(uVar15 >> 8),1);
        goto LAB_10003966;
      }
    }
  }
  else {
    uVar15 = *(ulong *)(lVar11 + 0x3a8);
    if (uVar15 == 0) {
      local_50 = 1;
    }
    else {
      if (uVar15 == 1) {
        uVar3 = 1;
        uVar12 = 0;
      }
      else {
        uVar3 = 1;
        uVar12 = 0;
        do {
          iVar22 = (uVar3 != 0x7fffffff && *(char *)(lVar1 + uVar12) == '\n') + uVar3;
          uVar3 = (uint)(iVar22 != 0x7fffffff && *(char *)(lVar1 + 1 + uVar12) == '\n') + iVar22;
          uVar12 = uVar12 + 2;
        } while ((uVar15 & 0xfffffffffffffffe) != uVar12);
      }
      if ((uVar15 & 1) != 0) {
        uVar3 = uVar3 + (uVar3 != 0x7fffffff && *(char *)(lVar1 + uVar12) == '\n');
      }
      local_50 = (ulong)uVar3;
    }
    uVar12 = *(ulong *)(local_38 + 0x3b0);
    if (uVar12 <= uVar15) {
      uVar15 = uVar12;
    }
    if (uVar15 == 0) {
      local_48 = 0;
      uVar15 = 0;
      goto LAB_100038e5;
    }
    if (uVar15 == 1) {
      local_48 = 0;
      uVar18 = 0;
    }
    else {
      local_48 = 0;
      uVar18 = 0;
      do {
        iVar22 = (uint)((int)local_48 != 0x7fffffff && *(char *)(lVar1 + uVar18) == '\n') +
                 (int)local_48;
        local_48 = (ulong)((uint)(iVar22 != 0x7fffffff && *(char *)(lVar1 + 1 + uVar18) == '\n') +
                          iVar22);
        uVar18 = uVar18 + 2;
      } while ((uVar15 & 0xfffffffffffffffe) != uVar18);
    }
    if ((uVar15 & 1) != 0) {
      local_48 = (ulong)((uint)((int)local_48 != 0x7fffffff && *(char *)(lVar1 + uVar18) == '\n') +
                        (int)local_48);
    }
    if (local_38 != 0) {
      do {
        if (*(char *)(lVar1 + -1 + uVar15) == '\n') {
          local_80 = 0;
          if (uVar12 < uVar15) goto LAB_100038fb;
          goto LAB_100038e5;
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar15 = 0;
      goto LAB_100038e5;
    }
    local_80 = 0;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
LAB_10003966:
  uVar3 = thunk_terror_ui_colour(0x1f);
  lVar11 = local_38;
  recovered_10005e00(local_38,0x3a0000000a,lVar17,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  uVar3 = thunk_terror_ui_colour(3);
  uVar3 = (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00;
  recovered_10005e00(lVar11,0x3a0000000a,uVar7,uVar3);
  recovered_10005e00(lVar11,uVar21 + 0x390000000a,uVar7,uVar3);
  recovered_10005e00(lVar11,0x3a0000000a,uVar21 | 1,uVar3);
  recovered_10005e00(lVar11,(ulong)((int)local_58 + 9) | 0x3a00000000,uVar21 | 1,uVar3);
  uVar3 = thunk_terror_ui_colour(0x2a);
  recovered_10005e00(lVar11,0x3b00000017,uVar21 - 0x1ffffffd7,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  uVar3 = thunk_terror_ui_colour(0x15);
  recovered_10005e00(lVar11,0x3b00000040,uVar21 - 0x1ffffffff,
                     (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
  local_88 = (ulong)local_5c;
  local_90 = local_40 & 0xffffffff;
  uVar21 = 0;
  do {
    lVar17 = (long)*(int *)(lVar11 + 0x6568) + uVar21;
    uVar3 = *(int *)(lVar11 + 0x394) + 3;
    if (*(int *)(lVar11 + 0x394) < 1) {
      uVar3 = 0xd;
    }
    if ((long)local_50 <= lVar17) {
      lVar11 = local_38;
      break;
    }
    uVar4 = uVar3 * (int)uVar21;
    local_40 = (ulong)uVar4;
    iVar22 = (int)lVar17;
    if (((int)local_48 == iVar22) && (*(char *)(local_38 + 0x6570) == '\0')) {
      uVar19 = thunk_terror_ui_colour(0x2c);
      recovered_10005e00(local_38,(ulong)(uVar4 + 0x3f) << 0x20 | 0x41,
                         ((ulong)uVar3 << 0x20) + local_a0,
                         (uVar19 & 0xff0000) >> 0x10 | uVar19 << 0x10 | uVar19 & 0xff00);
    }
    iVar6 = 0;
    thunk_snprintf(local_138,0x10,&DAT_100065f2,iVar22 + 1);
    uVar3 = thunk_terror_ui_colour(0x31);
    lVar11 = local_38;
    if (local_138[0] != '\0') {
      if (local_138[1] == '\0') {
        iVar6 = 1;
      }
      else if (local_138[2] == '\0') {
        iVar6 = 2;
      }
      else if (local_138[3] == '\0') {
        iVar6 = 3;
      }
      else {
        iVar6 = 5;
        if (local_134 == '\0') {
          iVar6 = 4;
        }
      }
    }
    iVar9 = (int)local_40 + 0x40;
    local_58 = CONCAT44(PF_PART4(local_58, 4),iVar9);
    recovered_10005ff0(local_38,0x1c,iVar9,(long)local_138,iVar6,
                       (uVar3 & 0xff0000) >> 0x10 | uVar3 & 0xff00 | uVar3 << 0x10);
    lVar17 = *(long *)(lVar11 + 0x398);
    if (iVar22 < 1 || lVar17 == 0) {
      if (lVar17 == 0) {
LAB_10003cf0:
        uVar12 = 0;
LAB_10003cf3:
        uVar18 = 0;
      }
      else {
        uVar7 = *(ulong *)(lVar11 + 0x3a8);
        uVar12 = 0;
LAB_10003c80:
        uVar18 = uVar12;
        if (uVar12 < uVar7) {
          uVar15 = uVar12;
          do {
            uVar18 = uVar15;
            if (*(char *)(lVar17 + uVar15) == '\n') break;
            uVar15 = uVar15 + 1;
            uVar18 = uVar7;
          } while (uVar7 != uVar15);
        }
      }
    }
    else {
      uVar7 = *(ulong *)(lVar11 + 0x3a8);
      if (uVar7 == 0) goto LAB_10003cf0;
      iVar6 = 0;
      uVar15 = 0;
      do {
        if ((*(char *)(lVar17 + uVar15) == '\n') && (iVar6 = iVar6 + 1, iVar6 == iVar22)) {
          uVar12 = uVar15 + 1;
          if (uVar15 < uVar7) goto LAB_10003c80;
          goto LAB_10003cf3;
        }
        uVar15 = uVar15 + 1;
        uVar18 = uVar7;
        uVar12 = uVar7;
      } while (uVar7 != uVar15);
    }
    if ((char)local_78 != '\0') {
      uVar7 = uVar12;
      if (uVar12 < local_70) {
        uVar7 = local_70;
      }
      uVar15 = uVar18;
      if (local_68 < uVar18) {
        uVar15 = local_68;
      }
      if (uVar18 < *(ulong *)(lVar11 + 0x3a8)) {
        bVar2 = (uVar18 < local_68 && local_70 <= uVar18) && *(char *)(lVar17 + uVar18) == '\n';
      }
      else {
        bVar2 = false;
      }
      if ((uVar7 < uVar15) || (bVar2)) {
        uVar7 = uVar7 - uVar12;
        uVar14 = 0x7fffffff;
        if (uVar7 < 0x7fffffff) {
          uVar14 = uVar7;
        }
        uVar15 = uVar15 - uVar12;
        uVar13 = 0x7fffffff;
        if (uVar15 < 0x7fffffff) {
          uVar13 = uVar15;
        }
        if (bVar2 && uVar13 <= uVar7) {
          if (0x7ffffffd < uVar7) {
            uVar7 = 0x7ffffffe;
          }
          uVar13 = (ulong)((int)uVar7 + 1);
        }
        else if (bVar2) {
          if (0x7ffffffd < uVar15) {
            uVar15 = 0x7ffffffe;
          }
          uVar13 = (ulong)((int)uVar15 + 1);
        }
        uVar3 = *(uint *)(lVar11 + 0x656c);
        uVar4 = (uint)uVar14;
        if ((int)(uint)uVar14 <= (int)uVar3) {
          uVar4 = uVar3;
        }
        lVar17 = (long)(int)uVar3 + local_88;
        if (0x7ffffffe < lVar17) {
          lVar17 = 0x7fffffff;
        }
        if (lVar17 < 1) {
          lVar17 = 0;
        }
        uVar19 = (uint)lVar17;
        if ((uint)uVar13 < (uint)lVar17) {
          uVar19 = (uint)uVar13;
        }
        if (uVar4 <= uVar19 && uVar19 - uVar4 != 0) {
          iVar22 = *(int *)(local_38 + 0x390);
          if (iVar22 < 1) {
            iVar22 = 6;
          }
          local_40 = (ulong)((int)local_40 + 0x3f);
          local_98 = (ulong)(*(int *)(local_38 + 0x394) + 3);
          if (*(int *)(local_38 + 0x394) < 1) {
            local_98 = 0xd;
          }
          uVar5 = thunk_terror_ui_colour(0x2b);
          lVar11 = local_38;
          recovered_10005e00(local_38,(ulong)((uVar4 - uVar3) * iVar22 + 0x41) | local_40 << 0x20,
                             (ulong)(iVar22 * (uVar19 - uVar4)) | local_98 << 0x20,
                             (uVar5 & 0xff0000) >> 0x10 | uVar5 << 0x10 | uVar5 & 0xff00);
        }
      }
    }
    if ((ulong)(long)*(int *)(lVar11 + 0x656c) < uVar18 - uVar12) {
      lVar17 = uVar12 + (long)*(int *)(lVar11 + 0x656c);
      uVar18 = uVar18 - lVar17;
      if (0x7ffffffe < uVar18) {
        uVar18 = 0x7fffffff;
      }
      uVar3 = (uint)uVar18;
      if ((int)local_5c < (int)(uint)uVar18) {
        uVar3 = local_5c;
      }
      lVar1 = *(long *)(lVar11 + 0x398);
      uVar4 = thunk_terror_ui_colour(1);
      recovered_10005ff0(lVar11,0x41,(int)local_58,lVar17 + lVar1,uVar3,
                         (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00);
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != local_90);
  if (((*(char *)(lVar11 + 0x6570) == '\0') && ((*(byte *)(lVar11 + 0x655c) & 2) != 0)) &&
     ((*(byte *)(lVar11 + 0x6561) & 0x10) == 0)) {
    iVar22 = *(int *)(lVar11 + 0x6568);
    if ((iVar22 <= (int)local_48) && ((long)(int)local_48 < (long)(local_90 + (long)iVar22))) {
      iVar6 = *(int *)(lVar11 + 0x656c);
      iVar9 = (int)local_80;
      if ((iVar6 <= iVar9) && ((long)(local_80 & 0xffffffff) <= (long)((long)iVar6 + local_88))) {
        iVar16 = *(int *)(lVar11 + 0x394);
        iVar20 = 6;
        if (0 < *(int *)(lVar11 + 0x390)) {
          iVar20 = *(int *)(lVar11 + 0x390);
        }
        iVar22 = (int)local_48 - iVar22;
        iVar10 = 0xd;
        if (0 < iVar16) {
          iVar10 = iVar16 + 3;
        }
        uVar21 = 0xc;
        if (0 < iVar16) {
          uVar21 = (ulong)(iVar16 + 2);
        }
        uVar3 = thunk_terror_ui_colour(4);
        lVar11 = local_38;
        recovered_10005e00(local_38,CONCAT44(iVar10 * iVar22 + 0x3f,iVar20 * (iVar9 - iVar6) + 0x41)
                           ,uVar21 << 0x20 | 2,
                           (uVar3 & 0xff0000) >> 0x10 | uVar3 << 0x10 | uVar3 & 0xff00);
      }
    }
  }
  recovered_10002ad0(lVar11);
  uVar3 = 0x1f0;
  if (*(int *)(lVar11 + 8) != 0) {
    uVar3 = *(int *)(lVar11 + 8) - 0x18;
  }
  uVar21 = 800;
  if (*(uint *)(lVar11 + 4) != 0) {
    uVar21 = (ulong)*(uint *)(lVar11 + 4);
  }
  uVar4 = thunk_terror_ui_colour(0x2d);
  recovered_10005e00(lVar11,(ulong)uVar3 << 0x20,uVar21 | 0x1800000000,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00);
  uVar4 = thunk_terror_ui_colour(3);
  recovered_10005e00(lVar11,(ulong)uVar3 << 0x20,uVar21 | 0x100000000,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00);
  pcVar8 = &DAT_10006528;
  if (*(char *)(lVar11 + 0x6572) != '\0') {
    pcVar8 = str_100065fa;
  }
  uVar7 = 0;
  thunk_snprintf(local_138,0x90,&DAT_100065f5,pcVar8,(void *)(lVar11 + 0x64dc));
  iVar22 = *(int *)(lVar11 + 0x394);
  iVar6 = 6;
  if (0 < *(int *)(lVar11 + 0x390)) {
    iVar6 = *(int *)(lVar11 + 0x390);
  }
  uVar21 = (long)((int)uVar21 + -0x14) / (long)iVar6;
  uVar15 = 1;
  if (1 < (int)uVar21) {
    uVar15 = uVar21 & 0xffffffff;
  }
  uVar4 = thunk_terror_ui_colour(0x31);
  do {
    if (local_138[uVar7] == '\0') {
      uVar15 = uVar7 & 0xffffffff;
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar15 != uVar7);
  if (iVar22 < 1) {
    iVar22 = 7;
  }
  else {
    iVar22 = (0x18 - iVar22) / 2;
  }
  recovered_10005ff0(local_38,10,iVar22 + uVar3,(long)local_138,(int)uVar15,
                     (uVar4 & 0xff0000) >> 0x10 | uVar4 & 0xff00 | uVar4 << 0x10);
  return;
}

#undef DAT_00000004
#undef DAT_10006528
#undef DAT_100065f2
#undef DAT_100065f5
#undef _DAT_00000004
#undef str_100065fa
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_138
#undef local_134
#undef local_a0
#undef local_98
#undef local_90
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
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 16))
#define local_98 (*(byte (*)[152])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004230
 */

void recovered_10004230(ulong param_1,char *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;

  if ((int)param_1 < 0) {
    iVar5 = Ram0000000000280800;
    param_1 = 0xffffffff;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
        (uVar4 = Ram0000000000280808, 0xb < uVar4)) && (uVar4 = Ram0000000000280808, 0xbf < uVar4))
    {
      uVar4 = UINT_002808bc;
      if ((code *)(ulong)uVar4 != (code *)0x0) {
        uStack_a0 = 0x1000428d;
        uVar4 = (*(code *)(ulong)uVar4)();
        param_1 = (ulong)uVar4;
      }
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    iVar5 = Ram0000000000280800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
       ((uVar4 = Ram0000000000280808, 0xb < uVar4 &&
        ((uVar4 = Ram0000000000280808, 0x223 < uVar4 && (iVar5 = Ram0000000000280a20, iVar5 != 0))))
       )) {
      uVar4 = Ram0000000000280a20;
      uStack_a0 = 0x100042f7;
      iVar5 = (*(code *)(ulong)uVar4)(param_1,local_98,0x80);
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
            if ((((9 < (byte)(bVar10 - 0x30U)) && (0x19 < (byte)((bVar10 & 0xdf) + 0xbf))) &&
                (bVar10 != 0x5f)) && (bVar10 != 0x2d)) {
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
              cVar3 = *param_2;
              param_2 = param_2 + 1;
            } while (cVar3 == '\\');
            bVar1 = true;
            do {
              if (cVar3 == '\\') {
                bVar2 = true;
                if (!bVar1) goto joined_r0x10004463;
                uVar6 = uVar8;
                bVar1 = bVar2;
              }
              else {
                if (cVar3 == '\0') break;
                bVar2 = false;
joined_r0x10004463:
                uVar6 = uVar8 + 1;
                bVar1 = bVar2;
                if (uVar8 + 1 < 0x3085) {
                  param_3[uVar8] = cVar3;
                  uVar6 = uVar8 + 1;
                }
              }
              uVar8 = uVar6;
              cVar3 = *param_2;
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
#undef UINT_002808bc
#undef uStack_a0
#undef local_98

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
 * Address: 0x10004490
 */

void recovered_10004490(void *in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100044d1. Too many branches */
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
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

undefined8 recovered_100044e0(void *in_RDI,ulong in_RSI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x57 < uVar2)) {
    uVar2 = UINT_00280854;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI,in_RSI);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_10006526
#define DAT_10006526 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2baU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a20
#define Ram0000000000280a20 (*(uint32_t *)(0x280a20U))
#define local_128 (*(char (*)[296])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

bool recovered_10004530(char *param_1,int *param_2)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;

  bVar2 = param_2 != (int *)0x0 && param_1 != (char *)0x0;
  if (param_2 == (int *)0x0 || param_1 == (char *)0x0) {
    return bVar2;
  }
  *param_2 = -1;
  cVar4 = *param_1;
  if (cVar4 != '[') {
    iVar6 = -1;
    goto LAB_100047f4;
  }
  lVar5 = 1;
  uVar7 = 0;
  pcVar9 = param_1;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    cVar4 = *pcVar9;
    if ((cVar4 == '\0') || (cVar4 == ']')) break;
    if (uVar7 + 1 < 0x80) {
      local_128[uVar7] = cVar4;
      uVar7 = uVar7 + 1;
    }
    lVar5 = lVar5 + 1;
  }
  local_128[uVar7] = '\0';
  uVar7 = (ulong)(cVar4 == ']');
  iVar6 = 0x7fffffff;
  if ((cVar4 == ']') && (lVar5 + 1U < 0x82)) {
    pcVar8 = local_128;
    if (local_128[0] == '[') {
      pcVar8 = local_128 + 1;
    }
    uVar12 = 0;
    for (uVar10 = 3; (cVar4 = pcVar8[uVar10 - 3], cVar4 != '\0' && (cVar4 != ']'));
        uVar10 = uVar10 + 4) {
      local_128[uVar10 + 0x7d] = cVar4;
      cVar4 = pcVar8[uVar10 - 2];
      if ((cVar4 == '\0') || (cVar4 == ']')) {
        uVar10 = uVar10 - 2;
        goto LAB_10004690;
      }
      local_128[uVar10 + 0x7e] = cVar4;
      cVar4 = pcVar8[uVar10 - 1];
      if ((cVar4 == '\0') || (cVar4 == ']')) {
        uVar10 = uVar10 - 1;
        goto LAB_10004690;
      }
      local_128[uVar10 + 0x7f] = cVar4;
      cVar4 = pcVar8[uVar10];
      if ((cVar4 == '\0') || (cVar4 == ']')) goto LAB_10004690;
      if (uVar10 == 0x7f) {
        uVar10 = uVar12 | 3;
        goto LAB_10004690;
      }
      uVar12 = uVar12 + 4;
      local_128[uVar10 + 0x80] = cVar4;
    }
    uVar10 = uVar10 - 3;
LAB_10004690:
    local_128[uVar10 + 0x80] = '\0';
    iVar6 = 0x7fffffff;
    if (local_128[0] == '[') {
      if (cVar4 != ']') goto LAB_100047df;
      cVar4 = local_128[uVar10 + 2];
    }
    if ((cVar4 == '\0') && (local_128[0x80] != 0)) {
      lVar5 = 1;
      lVar11 = 0;
      uVar10 = 1;
      do {
        if (lVar5 == 0x80) goto LAB_100047df;
        if (local_128[0x80] == 0x5c) {
          if ((lVar11 == 0) || (uVar10 = uVar10 + 1, 6 < uVar10)) goto LAB_100047df;
          lVar11 = 0;
        }
        else {
          if ((((9 < (byte)(local_128[0x80] - 0x30U)) &&
               (0x19 < (byte)((local_128[0x80] & 0xdfU) + 0xbf))) && (local_128[0x80] != 0x5f)) &&
             (local_128[0x80] != 0x2d)) goto LAB_100047df;
          lVar11 = lVar11 + 1;
        }
        local_128[0x80] = local_128[lVar5 + 0x80];
        lVar5 = lVar5 + 1;
      } while (local_128[0x80] != 0);
      if (((1 < uVar10 && lVar11 != 0) && (iVar3 = Ram0000000000280800, iVar3 == 0x50414d57)) &&
         ((iVar3 = Ram0000000000280804, iVar3 != 0 &&
          (((uVar1 = Ram0000000000280808, 0xb < uVar1 &&
            (uVar1 = Ram0000000000280808, 0x223 < uVar1)) &&
           (iVar3 = Ram0000000000280a20, iVar3 != 0)))))) {
        uVar1 = Ram0000000000280a20;
        iVar3 = (*(code *)(ulong)uVar1)(0xfffffffe,local_128 + 0x80,0x80);
        iVar6 = 0x7fffffff;
        if (-1 < iVar3) {
          iVar6 = iVar3;
        }
      }
    }
  }
LAB_100047df:
  lVar5 = (pcVar9[uVar7] == '\\') + uVar7;
  param_1 = pcVar9 + lVar5;
  cVar4 = pcVar9[lVar5];
LAB_100047f4:
  if (cVar4 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar7 = uVar10 + 1;
      *(char *)((long)(param_2 + 1) + uVar10) = cVar4;
      if (0x3083 < uVar7) break;
      cVar4 = param_1[uVar10 + 1];
      uVar10 = uVar7;
    } while (cVar4 != '\0');
  }
  *(undefined1 *)((long)param_2 + uVar7 + 4) = 0;
  *param_2 = iVar6;
  if ((char)param_2[1] == '\0') {
    thunk_snprintf((char *)(param_2 + 1),0x3085,&DAT_100064da,&DAT_10006526);
  }
  return bVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef DAT_100064da
#undef DAT_10006526
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a20
#undef local_128

#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef str_10006529
#define str_10006529 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_10006536
#define str_10006536 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

void recovered_10004870(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  int iVar3;
  char *arg3;
  int iVar4;

  thunk_snprintf((char *)(param_1 + 0x3445),0x3085,&DAT_100064da,(void *)(param_1 + 0x3c0));
  uVar2 = thunk_strlen((char *)(param_1 + 0x3445));
  *(ulong *)(param_1 + 0x64d0) = uVar2;
  *(undefined4 *)(param_1 + 0x64d8) = 0;
  *(undefined1 *)(param_1 + 0x6570) = 1;
  *(char *)(param_1 + 0x6571) = (char)param_2;
  arg3 = str_10006536;
  if (param_2 != 0) {
    arg3 = str_10006529;
  }
  thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,arg3);
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
  if (0 < *(int *)(param_1 + 0x390)) {
    iVar4 = *(int *)(param_1 + 0x390);
  }
  iVar3 = 1;
  if (1 < iVar1 / iVar4) {
    iVar3 = iVar1 / iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x64d8);
  iVar1 = *(int *)(param_1 + 0x64d0);
  if (iVar4 <= iVar1) {
    if (iVar1 < iVar4 + iVar3) goto LAB_10004958;
    iVar1 = (iVar1 - iVar3) + 1;
  }
  iVar4 = iVar1;
  *(int *)(param_1 + 0x64d8) = iVar4;
LAB_10004958:
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x64d8) = 0;
  }
  return;
}

#undef DAT_100064da
#undef str_10006529
#undef str_10006536

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
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
#undef str_10006540
#define str_10006540 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d4U)))
#undef str_1000654c
#define str_1000654c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e0U)))
#undef str_1000655c
#define str_1000655c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#define local_a8 (*(char (*)[168])(pf_stack_frame + 12456))
#define local_3134 (*(uint *)(pf_stack_frame + 28))
#define local_3130 (*(char (*)[12592])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004970
 */

ulong recovered_10004970(long param_1)

{
  unsigned char pf_stack_frame[12656] __attribute__((aligned(16))) = {0};

  char *arg3;
  int iVar1;
  bool bVar2;
  uint uVar3;
  char *arg0;
  ulong uVar4;

  if ((*(long *)(param_1 + 0x398) == 0) || (*(char *)(param_1 + 0x3c0) == '\0')) {
    arg0 = str_10006540;
  }
  else {
    arg3 = (char *)(param_1 + 0x3c0);
    bVar2 = recovered_10004530(arg3,(int *)&local_3134);
    if (bVar2) {
      iVar1 = Ram0000000000280800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
          (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0xd3 < uVar3)
         ) {
        uVar3 = UINT_002808d0;
        if ((code *)(ulong)uVar3 != (code *)0x0) {
          uVar3 = (*(code *)(ulong)uVar3)
                            (local_3134,local_3130,*(void **)(param_1 + 0x398),
                             *(uint *)(param_1 + 0x3a8));
LAB_10004a98:
          if (uVar3 != 0) {
            *(undefined1 *)(param_1 + 0x6572) = 0;
            recovered_10004230((ulong)local_3134,local_3130,arg3);
            thunk_snprintf(local_a8,0x80,str_1000655c,arg3);
            thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,local_a8);
            uVar4 = CONCAT71((int7)((ulong)local_a8 >> 8),1);
            goto LAB_10004b41;
          }
        }
      }
      else {
        iVar1 = Ram0000000000280800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
           ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x3b < uVar3)
            ))) {
          uVar3 = UINT_00280838;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)
                              (local_3130,*(void **)(param_1 + 0x398),*(uint *)(param_1 + 0x3a8));
            goto LAB_10004a98;
          }
        }
      }
    }
    arg0 = local_a8;
    thunk_snprintf(arg0,0x80,str_1000654c,arg3);
  }
  uVar4 = 0;
  thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,arg0);
LAB_10004b41:
  return uVar4 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_100064da
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280838
#undef UINT_002808d0
#undef str_10006540
#undef str_1000654c
#undef str_1000655c
#undef local_a8
#undef local_3134
#undef local_3130

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
#undef str_10006565
#define str_10006565 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f9U)))
#undef str_10006573
#define str_10006573 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x307U)))
#undef str_1000657c
#define str_1000657c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b60
 */

ulong recovered_10004b60(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if ((param_1 == 0) || (*(long *)(param_1 + 0x398) == 0)) {
LAB_10004db2:
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x3b8);
    uVar6 = *(ulong *)(param_1 + 0x3a8);
    uVar7 = uVar6;
    if (uVar5 < uVar6) {
      uVar7 = uVar5;
    }
    if (*(ulong *)(param_1 + 0x3b0) < uVar6) {
      uVar6 = *(ulong *)(param_1 + 0x3b0);
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
      iVar2 = Ram0000000000280800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
         (uVar4 = Ram0000000000280808, 0x183 < uVar4)) {
        uVar4 = UINT_00280980;
        if (((code *)(ulong)uVar4 != (code *)0x0) &&
           (uVar4 = (*(code *)(ulong)uVar4)
                              ((char *)(*(long *)(param_1 + 0x398) + uVar3),(uint)uVar5), uVar4 != 0
           )) {
          uVar5 = 0;
          thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,str_10006565);
          lVar1 = *(long *)(param_1 + 0x398);
          if (uVar8 <= uVar3 || lVar1 == 0) goto LAB_10004db4;
          uVar5 = *(ulong *)(param_1 + 0x3a8);
          if (uVar3 <= uVar5) {
            if (uVar5 < uVar8) {
              uVar8 = uVar5;
            }
            if (uVar3 < uVar8) {
              thunk_memmove((void *)(lVar1 + uVar3),(void *)(lVar1 + uVar8),(uVar5 - uVar8) + 1
                                );
              *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + (uVar3 - uVar8);
              *(ulong *)(param_1 + 0x3b0) = uVar3;
              *(ulong *)(param_1 + 0x3b8) = uVar3;
              *(undefined1 *)(param_1 + 0x6572) = 1;
              uVar5 = CONCAT71((int7)(uVar3 - uVar8 >> 8),1);
              goto LAB_10004db4;
            }
          }
          goto LAB_10004db2;
        }
      }
      uVar5 = 0;
      thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,str_1000657c);
      goto LAB_10004db4;
    }
    recovered_10004e30(param_1);
    lVar1 = *(long *)(param_1 + 0x398);
    uVar5 = *(ulong *)(param_1 + 0x3a8);
    if (lVar1 == 0) {
      uVar6 = 0;
LAB_10004d91:
      uVar7 = 0;
LAB_10004d94:
      if (uVar5 <= uVar7) goto LAB_10004da8;
      uVar7 = uVar7 + (*(char *)(lVar1 + uVar7) == '\n');
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x3b0);
      if (uVar5 <= *(ulong *)(param_1 + 0x3b0)) {
        uVar6 = uVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (*(char *)(lVar1 + -1 + uVar6) == '\n') {
          if (uVar5 < uVar6) goto LAB_10004d91;
          goto LAB_10004c04;
        }
      }
      uVar6 = 0;
LAB_10004c04:
      uVar7 = uVar6;
      if (uVar5 <= uVar6) goto LAB_10004d94;
      do {
        if (*(char *)(lVar1 + uVar7) == '\n') goto LAB_10004d94;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      uVar7 = uVar5;
LAB_10004da8:
      if ((uVar5 == 0) && (uVar7 == uVar6)) goto LAB_10004db2;
    }
    thunk_memmove((void *)(lVar1 + uVar6),(void *)(lVar1 + uVar7),(uVar5 - uVar7) + 1);
    uVar5 = (uVar6 - uVar7) + *(long *)(param_1 + 0x3a8);
    *(ulong *)(param_1 + 0x3a8) = uVar5;
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
    }
    *(ulong *)(param_1 + 0x3b0) = uVar5;
    *(ulong *)(param_1 + 0x3b8) = uVar5;
    *(undefined1 *)(param_1 + 0x6572) = 1;
    thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,str_10006573);
    uVar5 = CONCAT71((int7)((ulong)(param_1 + 0x64dc) >> 8),1);
  }
LAB_10004db4:
  return uVar5 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_100064da
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280980
#undef str_10006565
#undef str_10006573
#undef str_1000657c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
#undef str_1000657c
#define str_1000657c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_10006588
#define str_10006588 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31cU)))
#undef str_10006599
#define str_10006599 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e30
 */

ulong recovered_10004e30(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *arg3;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x398), lVar1 == 0)) {
LAB_10004ebb:
    uVar8 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x3b8);
    uVar7 = *(ulong *)(param_1 + 0x3a8);
    uVar5 = uVar7;
    if (uVar6 < uVar7) {
      uVar5 = uVar6;
    }
    uVar8 = *(ulong *)(param_1 + 0x3b0);
    if (uVar7 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar8 = uVar7;
    }
    if (uVar5 == uVar8) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (*(char *)(lVar1 + -1 + uVar5) == '\n') {
          if (uVar5 <= uVar7) goto LAB_10004e92;
          uVar6 = 0;
          goto joined_r0x10004f76;
        }
      }
      uVar5 = 0;
LAB_10004e92:
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
joined_r0x10004f76:
      if (uVar7 < uVar5) goto LAB_10004ebb;
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
      iVar2 = Ram0000000000280800;
      arg3 = str_1000657c;
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram0000000000280804;
        if (((iVar2 != 0) && (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000280808, 0x183 < uVar3)) {
          uVar3 = UINT_00280980;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)((char *)(lVar1 + uVar5),(uint)uVar7);
            pcVar4 = str_10006599;
            goto LAB_1000500d;
          }
        }
        goto LAB_1000501a;
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
      iVar2 = Ram0000000000280800;
      arg3 = str_1000657c;
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram0000000000280804;
        if (((iVar2 != 0) && (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000280808, 0x183 < uVar3)) {
          uVar3 = UINT_00280980;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)((char *)(lVar1 + uVar7),(uint)uVar6);
            pcVar4 = str_10006588;
LAB_1000500d:
            uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),uVar3 != 0);
            arg3 = str_1000657c;
            if (uVar3 != 0) {
              arg3 = pcVar4;
            }
            goto LAB_1000501c;
          }
        }
LAB_1000501a:
        uVar8 = 0;
        arg3 = str_1000657c;
      }
    }
LAB_1000501c:
    thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,arg3);
  }
  return uVar8 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_100064da
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280980
#undef str_1000657c
#undef str_10006588
#undef str_10006599

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_100064da
#define DAT_100064da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
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
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UINT_00280988
#define UINT_00280988 (*(uint *)(0x280988U))
#undef str_100064fb
#define str_100064fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_100065a5
#define str_100065a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_100065b2
#define str_100065b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005040
 */

char * recovered_10005040(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *outText;
  undefined8 uVar4;
  char *arg3;
  uint7 uVar6;
  char *pcVar5;
  char *pcVar7;

  iVar1 = Ram0000000000280800;
  uVar2 = 0;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x18b < uVar3)) {
    uVar3 = UINT_00280988;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar3)();
    }
  }
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (*(long *)(param_1 + 0x398) == 0) {
    return (char *)0x0;
  }
  if (uVar2 == 0) {
    return (char *)0x0;
  }
  if (*(long *)(param_1 + 0x3a0) == 0) {
    return (char *)0x0;
  }
  if (((uVar2 != 0xffffffff) && (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
     ((iVar1 = Ram0000000000280804, iVar1 != 0 &&
      ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x4f < uVar3))))))
  {
    uVar3 = UINT_0028084c;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      outText = (*(code *)(ulong)uVar3)((ulong)uVar2 + 1);
      if (outText == (char *)0x0) {
        pcVar5 = (char *)0x0;
        arg3 = str_100065a5;
        goto LAB_100052aa;
      }
      iVar1 = Ram0000000000280800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
          (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
         (uVar3 = Ram0000000000280808, 0x187 < uVar3)) {
        uVar3 = UINT_00280984;
        if ((((code *)(ulong)uVar3 == (code *)0x0) ||
            (uVar3 = (*(code *)(ulong)uVar3)(outText,uVar2 + 1), uVar3 == 0)) ||
           (uVar4 = recovered_100052e0(param_1,(long)outText,(ulong)uVar3), (char)uVar4 == '\0'))
        goto LAB_10005246;
        iVar1 = Ram0000000000280800;
        uVar6 = (uint7)(uint3)(uVar2 >> 8);
        pcVar5 = (char *)CONCAT71(uVar6,1);
        arg3 = str_100065b2;
        if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
           (uVar2 = Ram0000000000280808, uVar2 < 0xc)) goto LAB_100052aa;
        uVar2 = Ram0000000000280808;
        if (uVar2 < 0x54) goto LAB_100052aa;
        uVar2 = UINT_00280850;
        pcVar7 = str_100064fb + 6;
        arg3 = str_100065b2;
        pcVar5 = (char *)CONCAT71(uVar6,1);
      }
      else {
        *outText = '\0';
LAB_10005246:
        iVar1 = Ram0000000000280800;
        if ((((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
            (uVar2 = Ram0000000000280808, uVar2 < 0xc)) ||
           (uVar2 = Ram0000000000280808, uVar2 < 0x54)) goto LAB_100052a7;
        uVar2 = UINT_00280850;
        arg3 = str_100065a5;
        pcVar7 = (char *)0x0;
        pcVar5 = (char *)0x0;
      }
      if (uVar2 != 0) {
        (*(code *)(ulong)uVar2)(outText);
        pcVar5 = pcVar7;
      }
      goto LAB_100052aa;
    }
  }
LAB_100052a7:
  arg3 = str_100065a5;
  pcVar5 = (char *)0x0;
LAB_100052aa:
  thunk_snprintf((char *)(param_1 + 0x64dc),0x80,&DAT_100064da,arg3);
  return pcVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_100064da
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280984
#undef UINT_00280988
#undef str_100064fb
#undef str_100065a5
#undef str_100065b2

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
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

undefined8 recovered_100052e0(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *ptr;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_1 == 0) {
    return 0;
  }
  ptr = *(void **)(param_1 + 0x398);
  if (param_2 != 0 && ptr != (void *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x3b8);
    uVar4 = *(ulong *)(param_1 + 0x3a8);
    uVar6 = uVar4;
    if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    uVar5 = *(ulong *)(param_1 + 0x3b0);
    if (uVar4 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar5 = uVar4;
    }
    uVar8 = uVar6;
    uVar9 = uVar5;
    if (uVar3 < uVar5) {
      uVar8 = uVar5;
      uVar9 = uVar6;
    }
    lVar7 = uVar8 - uVar9;
    if (uVar6 == uVar5) {
      uVar8 = 0;
      uVar9 = 0;
      lVar7 = 0;
    }
    uVar4 = uVar4 - lVar7;
    if (0xffffffff - uVar4 < param_3 || 0xffffffff < uVar4) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 0x3a0);
    if (uVar4 + param_3 < uVar3) {
joined_r0x1000539a:
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 0x3a8);
        uVar9 = *(ulong *)(param_1 + 0x3b0);
      }
      else {
        thunk_memmove((void *)((long)ptr + uVar9),(void *)((long)ptr + uVar8),
                           (*(long *)(param_1 + 0x3a8) - uVar8) + 1);
        ptr = *(void **)(param_1 + 0x398);
        lVar7 = *(long *)(param_1 + 0x3a8) - lVar7;
        *(long *)(param_1 + 0x3a8) = lVar7;
        *(ulong *)(param_1 + 0x3b0) = uVar9;
        *(ulong *)(param_1 + 0x3b8) = uVar9;
      }
      thunk_memmove((void *)((long)((long)ptr + uVar9) + param_3),(void *)((long)ptr + uVar9),
                         (lVar7 - uVar9) + 1);
      thunk_memcpy((void *)(*(long *)(param_1 + 0x398) + *(long *)(param_1 + 0x3b0)),
                         (void *)param_2,param_3);
      lVar7 = *(long *)(param_1 + 0x3b0) + param_3;
      *(long *)(param_1 + 0x3b0) = lVar7;
      *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + param_3;
      *(long *)(param_1 + 0x3b8) = lVar7;
      *(undefined1 *)(param_1 + 0x6572) = 1;
      return CONCAT71((int7)((ulong)lVar7 >> 8),1);
    }
    uVar6 = 0x400;
    if (uVar3 != 0) {
      uVar6 = uVar3;
    }
    do {
      uVar3 = uVar6;
      uVar6 = uVar3 * 2;
    } while (uVar3 <= uVar4 + param_3);
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x57 < uVar2))
    {
      uVar2 = UINT_00280854;
      if (((code *)(ulong)uVar2 != (code *)0x0) &&
         (ptr = (*(code *)(ulong)uVar2)(ptr,uVar3), ptr != (void *)0x0)) {
        *(void **)(param_1 + 0x398) = ptr;
        *(ulong *)(param_1 + 0x3a0) = uVar3;
        goto joined_r0x1000539a;
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

undefined8 recovered_10005530(long param_1,int param_2,uint param_3,char param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined7 extraout_var = 0;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;

  lVar1 = *(long *)(param_1 + 0x3b0);
  lVar2 = *(long *)(param_1 + 0x3b8);
  iVar11 = *(int *)(param_1 + 8);
  iVar15 = 0xac;
  if (0xac < iVar11) {
    iVar15 = iVar11;
  }
  iVar12 = 0x2cb;
  if (*(int *)(param_1 + 4) != 0) {
    iVar12 = *(int *)(param_1 + 4) + -0x55;
  }
  uVar4 = 0x1ac;
  if (iVar11 != 0) {
    uVar4 = (ulong)(iVar15 - 0x5c);
  }
  iVar11 = (int)((uVar4 << 0x20) + -0xc00000000 >> 0x20);
  if (param_5 == 0) {
    if (param_2 < 0x41) {
      return 0;
    }
    if ((int)param_3 < 0x40) {
      return 0;
    }
    if (iVar12 + 0x41 <= param_2) {
      return 0;
    }
    if (iVar11 + 0x40U <= param_3) {
      return 0;
    }
  }
  else {
    iVar15 = iVar12 + 0x40;
    if (param_2 < iVar12 + 0x40) {
      iVar15 = param_2;
    }
    bVar3 = 0x40 < param_2;
    param_2 = 0x41;
    if (bVar3) {
      param_2 = iVar15;
    }
    uVar9 = iVar11 + 0x3f;
    if (param_3 < uVar9) {
      uVar9 = param_3;
    }
    bVar3 = 0x3f < (int)param_3;
    param_3 = 0x40;
    if (bVar3) {
      param_3 = uVar9;
    }
  }
  iVar11 = 0xd;
  if (0 < *(int *)(param_1 + 0x394)) {
    iVar11 = *(int *)(param_1 + 0x394) + 3;
  }
  uVar13 = (long)((int)(param_3 - 0x40) / iVar11) + (long)*(int *)(param_1 + 0x6568);
  uVar4 = 0x7fffffff;
  if ((long)uVar13 < 0x7fffffff) {
    uVar4 = uVar13;
  }
  if ((long)uVar4 < 1) {
    uVar4 = 0;
  }
  iVar11 = 6;
  if (0 < *(int *)(param_1 + 0x390)) {
    iVar11 = *(int *)(param_1 + 0x390);
  }
  uVar5 = (long)(param_2 + -0x41) / (long)iVar11;
  uVar7 = 0;
  if (0 < (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  uVar7 = uVar7 + (long)*(int *)(param_1 + 0x656c);
  if (0x7ffffffe < (long)uVar7) {
    uVar7 = 0x7fffffff;
  }
  if ((long)uVar7 < 1) {
    uVar7 = 0;
  }
  lVar10 = *(long *)(param_1 + 0x398);
  if ((long)uVar13 < 1 || lVar10 == 0) {
    if (lVar10 != 0) {
      uVar4 = 0;
      uVar8 = *(ulong *)(param_1 + 0x3a8);
LAB_10005685:
      uVar13 = uVar4;
      if (uVar13 < uVar8) {
        uVar4 = uVar13;
        do {
          if (*(char *)(lVar10 + uVar4) == '\n') {
            uVar8 = uVar4;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar8 != uVar4);
      }
      else {
        uVar8 = uVar13;
      }
      goto LAB_10005748;
    }
    uVar5 = 0;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x3a8);
    uVar5 = 0;
    if (uVar13 != 0) {
      uVar14 = 0;
      do {
        uVar8 = uVar13;
        if ((*(char *)(lVar10 + uVar14) == '\n') &&
           (uVar9 = (int)uVar5 + 1, uVar5 = (ulong)uVar9, uVar9 == (uint)uVar4)) {
          uVar4 = uVar14 + 1;
          uVar5 = uVar14 + 1;
          if (uVar13 <= uVar14) goto LAB_1000573c;
          goto LAB_10005685;
        }
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
      goto LAB_10005748;
    }
  }
LAB_1000573c:
  uVar13 = uVar5;
  uVar8 = 0;
LAB_10005748:
  uVar4 = 0x7fffffff;
  if (uVar8 - uVar13 < 0x7fffffff) {
    uVar4 = uVar8 - uVar13;
  }
  if ((int)uVar7 < (int)uVar4) {
    uVar4 = uVar7;
  }
  lVar10 = (uVar4 & 0xffffffff) + uVar13;
  *(long *)(param_1 + 0x3b0) = lVar10;
  *(undefined1 *)(param_1 + 0x6570) = 0;
  if (param_4 == '\0') {
    *(long *)(param_1 + 0x3b8) = lVar10;
  }
  recovered_10002800(param_1);
  uVar6 = CONCAT71(extraout_var,1);
  if (*(long *)(param_1 + 0x3b0) == lVar1) {
    uVar6 = CONCAT71(extraout_var,*(long *)(param_1 + 0x3b8) != lVar2);
  }
  return uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057b0
 */

uint128 recovered_100057b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint128 auVar16;

  if (param_1 == 0) {
    iVar4 = 0x208;
    uVar12 = 0x17a;
    iVar13 = 1;
LAB_100058a4:
    iVar9 = 10;
  }
  else {
    iVar9 = *(int *)(param_1 + 8);
    iVar4 = 0xac;
    if (0xac < iVar9) {
      iVar4 = iVar9;
    }
    uVar12 = 0x17a;
    if (iVar9 != 0) {
      uVar12 = iVar4 - 0x8e;
    }
    lVar11 = *(long *)(param_1 + 0x398);
    iVar13 = 1;
    if ((lVar11 != 0) && (uVar7 = *(ulong *)(param_1 + 0x3a8), uVar7 != 0)) {
      if (uVar7 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          iVar13 = (uint)(iVar13 != 0x7fffffff && *(char *)(lVar11 + uVar10) == '\n') + iVar13;
          iVar13 = (uint)(iVar13 != 0x7fffffff && *(char *)(lVar11 + 1 + uVar10) == '\n') + iVar13;
          uVar10 = uVar10 + 2;
        } while ((uVar7 & 0xfffffffffffffffe) != uVar10);
      }
      if ((uVar7 & 1) != 0) {
        iVar13 = iVar13 + (uint)(iVar13 != 0x7fffffff && *(char *)(lVar11 + uVar10) == '\n');
      }
    }
    iVar4 = 0x208;
    if (iVar9 != 0) {
      iVar4 = iVar9;
    }
    iVar9 = *(int *)(param_1 + 0x394);
    if (iVar9 < 1) goto LAB_100058a4;
  }
  iVar14 = 0xac;
  if (0xac < iVar4) {
    iVar14 = iVar4;
  }
  uVar1 = (iVar14 - 0x68U) / (iVar9 + 3U);
  iVar4 = uVar1 + (uVar1 == 0);
  if (param_1 == 0) {
    iVar9 = 0x208;
    iVar14 = 1;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x398);
    iVar14 = 1;
    if ((lVar11 != 0) && (uVar7 = *(ulong *)(param_1 + 0x3a8), uVar7 != 0)) {
      if (uVar7 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          iVar14 = (uint)(iVar14 != 0x7fffffff && *(char *)(lVar11 + uVar10) == '\n') + iVar14;
          iVar14 = (uint)(iVar14 != 0x7fffffff && *(char *)(lVar11 + 1 + uVar10) == '\n') + iVar14;
          uVar10 = uVar10 + 2;
        } while ((uVar7 & 0xfffffffffffffffe) != uVar10);
      }
      if ((uVar7 & 1) != 0) {
        iVar14 = iVar14 + (uint)(iVar14 != 0x7fffffff && *(char *)(lVar11 + uVar10) == '\n');
      }
    }
    iVar9 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar9 = *(int *)(param_1 + 8);
    }
    iVar8 = *(int *)(param_1 + 0x394);
    if (0 < iVar8) goto LAB_1000599c;
  }
  iVar8 = 10;
LAB_1000599c:
  iVar2 = 0xac;
  if (0xac < iVar9) {
    iVar2 = iVar9;
  }
  lVar11 = 0x4f0000000f;
  uVar1 = (iVar2 - 0x68U) / (iVar8 + 3U);
  uVar15 = (iVar14 - uVar1) - (uint)(uVar1 == 0);
  uVar1 = 0;
  if (0 < (int)uVar15) {
    uVar1 = uVar15;
  }
  uVar7 = 0xc;
  if (iVar4 < iVar13) {
    uVar3 = (int)(iVar4 * uVar12) / iVar13;
    uVar5 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar5 = uVar3;
    }
    uVar6 = 0x12;
    if (0x11 < (int)uVar3) {
      uVar6 = uVar5;
    }
    if ((0 < (int)uVar15) && (uVar12 - uVar6 != 0 && (int)uVar6 <= (int)uVar12)) {
      uVar7 = (long)*(int *)(param_1 + 0x6568) * (long)(int)(uVar12 - uVar6);
      if (uVar7 >> 0x20 == 0) {
        uVar7 = (uVar7 & 0xffffffff) / (ulong)uVar1;
      }
      else {
        uVar7 = (long)uVar7 / (long)(ulong)uVar1;
      }
      lVar11 = (uVar7 << 0x20) + 0x4f0000000f;
    }
    uVar7 = (ulong)uVar6 << 0x20 | 0xc;
  }
  PF_PART8(auVar16, 8) = uVar7;
  PF_PART8(auVar16, 0) = lVar11;
  return auVar16;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a50
 */

void recovered_10005a50(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;

  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x398);
    iVar5 = 1;
    if ((lVar2 != 0) && (uVar3 = *(ulong *)(param_1 + 0x3a8), uVar3 != 0)) {
      if (uVar3 == 1) {
        iVar5 = 1;
        uVar8 = 0;
      }
      else {
        iVar5 = 1;
        uVar8 = 0;
        do {
          iVar5 = (uint)(iVar5 != 0x7fffffff && *(char *)(lVar2 + uVar8) == '\n') + iVar5;
          iVar5 = (uint)(iVar5 != 0x7fffffff && *(char *)(lVar2 + 1 + uVar8) == '\n') + iVar5;
          uVar8 = uVar8 + 2;
        } while ((uVar3 & 0xfffffffffffffffe) != uVar8);
      }
      if ((uVar3 & 1) != 0) {
        iVar5 = iVar5 + (uint)(iVar5 != 0x7fffffff && *(char *)(lVar2 + uVar8) == '\n');
      }
    }
    iVar1 = *(int *)(param_1 + 8);
    iVar6 = 0xac;
    if (0xac < iVar1) {
      iVar6 = iVar1;
    }
    uVar4 = 0x1a0;
    if (iVar1 != 0) {
      uVar4 = iVar6 - 0x68;
    }
    uVar7 = 0xd;
    if (0 < *(int *)(param_1 + 0x394)) {
      uVar7 = *(int *)(param_1 + 0x394) + 3;
    }
    iVar5 = (iVar5 - uVar4 / uVar7) - (uint)(uVar4 / uVar7 == 0);
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x6568);
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x6568) = iVar5;
    if (*(int *)(param_1 + 0x656c) < 0) {
      *(undefined4 *)(param_1 + 0x656c) = 0;
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

undefined8 recovered_10005b70(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  uVar1 = *(ulong *)(param_1 + 0x3b8);
  uVar2 = *(ulong *)(param_1 + 0x3a8);
  uVar3 = *(ulong *)(param_1 + 0x3b0);
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar8 = uVar2;
  if (uVar3 < uVar2) {
    uVar8 = uVar3;
  }
  if (uVar5 == uVar8) {
    lVar7 = *(long *)(param_1 + 0x398);
  }
  else {
    uVar6 = uVar5;
    if (uVar1 < uVar8) {
      uVar6 = uVar8;
      uVar8 = uVar5;
    }
    lVar7 = *(long *)(param_1 + 0x398);
    if (uVar8 < uVar6 && lVar7 != 0) {
      pvVar4 = thunk_memmove((void *)(lVar7 + uVar8),(void *)(lVar7 + uVar6),
                                  (uVar2 - uVar6) + 1);
      *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + (uVar8 - uVar6);
      *(ulong *)(param_1 + 0x3b0) = uVar8;
      goto LAB_10005c38;
    }
  }
  if ((uVar2 < uVar3 || uVar2 - uVar3 == 0) || lVar7 == 0) {
    return 0;
  }
  pvVar4 = thunk_memmove((void *)(lVar7 + uVar3),(void *)(lVar7 + uVar3 + 1),uVar2 - uVar3);
  *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + -1;
  uVar8 = *(ulong *)(param_1 + 0x3b0);
LAB_10005c38:
  *(ulong *)(param_1 + 0x3b8) = uVar8;
  *(undefined1 *)(param_1 + 0x6572) = 1;
  return CONCAT71((int7)((ulong)pvVar4 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

void recovered_10005c60(long param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;

  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x398);
  uVar4 = *(ulong *)(param_1 + 0x3b0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x3a8);
    if (uVar4 < *(ulong *)(param_1 + 0x3a8)) {
      uVar3 = uVar4;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (*(char *)(lVar1 + -1 + uVar3) == '\n') goto LAB_10005cae;
    }
    uVar3 = 0;
LAB_10005cae:
    uVar5 = *(ulong *)(param_1 + 0x3a8);
    if (uVar4 < *(ulong *)(param_1 + 0x3a8)) {
      uVar5 = uVar4;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (*(char *)(lVar1 + -1 + uVar5) == '\n') {
        uVar2 = 0;
        if (uVar4 < uVar5) goto LAB_10005cf7;
        goto LAB_10005ce4;
      }
    }
  }
  uVar5 = 0;
LAB_10005ce4:
  uVar2 = 0x7fffffff;
  if (uVar4 - uVar5 < 0x7fffffff) {
    uVar2 = uVar4 - uVar5;
  }
LAB_10005cf7:
  if (param_2 == '\0') {
    uVar4 = *(ulong *)(param_1 + 0x3a8);
    if (lVar1 == 0) {
      uVar3 = 1;
      uVar5 = 0;
      bVar6 = uVar4 == 0;
      uVar4 = 0;
      if (bVar6) goto LAB_10005df4;
    }
    else {
      if (uVar4 < uVar3) {
        uVar3 = 0;
      }
      else if (uVar3 < uVar4) {
        do {
          if (*(char *)(lVar1 + uVar3) == '\n') goto LAB_10005db0;
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
        goto LAB_10005df4;
      }
LAB_10005db0:
      if (uVar4 <= uVar3) goto LAB_10005df4;
      uVar3 = uVar3 + 1;
      uVar5 = uVar3;
      if (uVar3 < uVar4) {
        do {
          if (*(char *)(lVar1 + uVar5) == '\n') goto LAB_10005dd9;
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        goto LAB_10005dcf;
      }
    }
  }
  else {
    if (uVar3 == 0) {
      uVar4 = 0;
      goto LAB_10005df4;
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        if (lVar1 == 0) {
          uVar3 = 0;
          goto LAB_10005dd6;
        }
        break;
      }
    } while (*(char *)(lVar1 + -1 + uVar3) != '\n');
    uVar4 = *(ulong *)(param_1 + 0x3a8);
    if (uVar4 < uVar3) {
LAB_10005dd6:
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3;
      if (uVar3 < uVar4) {
        do {
          if (*(char *)(lVar1 + uVar5) == '\n') goto LAB_10005dd9;
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
LAB_10005dcf:
        uVar5 = uVar4;
      }
    }
  }
LAB_10005dd9:
  uVar4 = 0x7fffffff;
  if (uVar5 - uVar3 < 0x7fffffff) {
    uVar4 = uVar5 - uVar3;
  }
  if ((int)uVar2 < (int)uVar4) {
    uVar4 = uVar2;
  }
  uVar4 = (uVar4 & 0xffffffff) + uVar3;
LAB_10005df4:
  *(ulong *)(param_1 + 0x3b0) = uVar4;
  return;
}


#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e00
 */

void recovered_10005e00(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

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
          if ((param_1 != 0) && (-1 < (int)(uVar4 | uVar8) && *(long *)(param_1 + 0x388) != 0)) {
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
                *(char *)(*(long *)(param_1 + 0x388) + lVar1) = (char)param_4;
                *(char *)(*(long *)(param_1 + 0x388) + 1 + lVar1) = (char)((uint)param_4 >> 8);
                *(char *)(*(long *)(param_1 + 0x388) + 2 + lVar1) = (char)((uint)param_4 >> 0x10);
                *(undefined1 *)(*(long *)(param_1 + 0x388) + 3 + lVar1) = 0xff;
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
#define local_58 (*(void * *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_3c (*(uint *)(pf_stack_frame + 52))
#define local_38 (*(void * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

void recovered_10005ff0(long param_1,uint param_2,int param_3,long param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

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

  if (param_5 < 1 || param_4 == 0) {
    return;
  }
  local_3c = param_2;
  thunk_memset(&local_58,0,0x18);
  iVar4 = Ram0000000000280800;
  if (iVar4 != 0x50414d57) {
    return;
  }
  iVar4 = Ram0000000000280804;
  if (iVar4 == 0) {
    return;
  }
  uVar5 = Ram0000000000280808;
  if (uVar5 < 0xc) {
    return;
  }
  uVar5 = Ram0000000000280808;
  if (uVar5 < 0x17c) {
    return;
  }
  uVar5 = UINT_00280978;
  if ((code *)(ulong)uVar5 == (code *)0x0) {
    return;
  }
  uVar5 = (*(code *)(ulong)uVar5)
                    ((char *)param_4,param_5,1,
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
               (-1 < (int)(uVar5 | uVar8) && *(long *)(param_1 + 0x388) != 0)) {
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
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + lVar1) =
                       *(undefined1 *)(lVar9 + -3 + lVar12);
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 1 + lVar1) = uVar2;
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 2 + lVar1) = uVar3;
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 3 + lVar1) = 0xff;
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
      if (local_58 == (void *)0x0) goto LAB_1000624d;
    }
    iVar4 = Ram0000000000280800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_58);
      }
    }
  }
LAB_1000624d:
  thunk_memset(&local_58,0,0x18);
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
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
