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
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
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
#undef str_10006db8
#define str_10006db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18fU)))
#undef str_10006ddd
#define str_10006ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10006de9
#define str_10006de9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c0U)))
#undef str_10006df5
#define str_10006df5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ccU)))
#undef str_10006e04
#define str_10006e04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_10006e11
#define str_10006e11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10006f62
#define str_10006f62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_10006f76
#define str_10006f76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_10006f84
#define str_10006f84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35bU)))
#define local_655c (*(int *)(pf_stack_frame + 740))
#define local_6558 (*(uint *)(pf_stack_frame + 744))
#define local_6554 (*(uint *)(pf_stack_frame + 748))
#define local_621c (*(uint *)(pf_stack_frame + 1572))
#define local_6218 (*(char *)(pf_stack_frame + 1576))
#define local_620c (*(int *)(pf_stack_frame + 1588))
#define local_6208 (*(int *)(pf_stack_frame + 1592))
#define local_6204 (*(int *)(pf_stack_frame + 1596))
#define local_61ec (*(void * *)(pf_stack_frame + 1620))
#define local_61e8 (*(int *)(pf_stack_frame + 1624))
#define local_61e4 (*(int *)(pf_stack_frame + 1628))
#define local_61e0 (*(char * *)(pf_stack_frame + 1632))
#define local_61dc (*(int *)(pf_stack_frame + 1636))
#define local_61d8 (*(uint *)(pf_stack_frame + 1640))
#define local_61d4 (*(uint *)(pf_stack_frame + 1644))
#define local_61d0 (*(uint *)(pf_stack_frame + 1648))
#define local_61cc (*(char (*)[25036])(pf_stack_frame + 1652))
#define local_c0 (*(ulong *)(pf_stack_frame + 26496))
#define local_bc (*(ulong *)(pf_stack_frame + 26500))
#define local_b8 (*(char (*)[184])(pf_stack_frame + 26504))
#define local_38 (*(uint *)(pf_stack_frame + 26632))
#define local_34 (*(uint *)(pf_stack_frame + 26636))
#define local_30 (*(int *)(pf_stack_frame + 26640))
#define local_2c (*(uint *)(pf_stack_frame + 26644))
#define local_28 (*(uint *)(pf_stack_frame + 26648))
#define local_1c (*(int *)(pf_stack_frame + 26660))
#define iStack_6814 (*(int *)(pf_stack_frame + 44))
#define iStack_6808 (*(int *)(pf_stack_frame + 56))
#define iStack_67e0 (*(int *)(pf_stack_frame + 96))
#define uStack_67d0 (*(uint *)(pf_stack_frame + 112))
#define uStack_67bc (*(uint *)(pf_stack_frame + 132))
#define uStack_67ac (*(uint *)(pf_stack_frame + 148))
#define iStack_6798 (*(int *)(pf_stack_frame + 168))
#define uStack_6550 (*(uint *)(pf_stack_frame + 752))
#define pvStack_6530 (*(void * *)(pf_stack_frame + 784))
#define uStack_6217 (*(undefined1 *)(pf_stack_frame + 1577))
#define auStack_6214 (*(undefined1 (*)[25108])(pf_stack_frame + 1580))
#define iStack_6200 (*(int *)(pf_stack_frame + 1600))
#define acStack_3148 (*(char (*)[12616])(pf_stack_frame + 14072))
#define uStack_24 (*(undefined2 *)(pf_stack_frame + 26652))
#define uStack_22 (*(undefined1 *)(pf_stack_frame + 26654))
#define uStack_21 (*(undefined2 *)(pf_stack_frame + 26655))
#define cStack_1f (*(char *)(pf_stack_frame + 26657))
#define cStack_18 (*(char *)(pf_stack_frame + 26664))
#define local_6828 (*(int *)(pf_stack_frame + 24))
#define local_6824 (*(int *)(pf_stack_frame + 28))
#define local_6820 (*(int *)(pf_stack_frame + 32))
#define local_681c (*(int *)(pf_stack_frame + 36))
#define local_6818 (*(void * *)(pf_stack_frame + 40))
#define local_680c (*(int *)(pf_stack_frame + 52))
#define local_67e4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_67d4 (*(uint *)(pf_stack_frame + 108))
#define local_67c4 (*(uint *)(pf_stack_frame + 124))
#define local_67c0 (*(int *)(pf_stack_frame + 128))
#define local_67a4 (*(byte *)(pf_stack_frame + 156))
#define local_67a0 (*(int *)(pf_stack_frame + 160))
#define local_679c (*(int *)(pf_stack_frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e0
 */

int recovered_100008e0(int argc,char **argv)

{
  unsigned char pf_stack_frame[26720] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pixels;
  uchar uVar4;
  bool bVar5;
  char cVar15;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  bool bVar22;
  uint uVar23;
  void **ppvVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  char cVar28;
  bool bVar29;
  byte bVar30;
  longlong lVar31;

  bVar30 = 0;
  thunk_memset(&local_655c,0,0x6548);
  if (local_61dc == 0) {
    iVar16 = Ram00280800;
    if ((((iVar16 != 0x50414d57) || (iVar16 = Ram00280804, iVar16 == 0)) ||
        (uVar6 = Ram00280808, uVar6 < 0xc)) ||
       (((uVar6 = Ram00280808, uVar6 < 0x58 ||
         (pcVar1 = (code *)UINT_00280854, pcVar1 == (code *)0x0)) ||
        (pcVar25 = (*pcVar1)(local_61e0,0x400), pcVar25 == (char *)0x0)))) goto LAB_10002504;
    local_61dc = 0x400;
    local_61e0 = pcVar25;
  }
  *local_61e0 = '\0';
  recovered_10004ef0(-1,str_10006df5,local_61cc);
  thunk_snprintf(local_b8,0x80,&DAT_10006e52,str_10006e04);
  thunk_pf_app_window_spec(&local_6818,str_10006de9,800,0x208);
  ppvVar24 = &local_6818;
  puVar21 = &local_67d4;
  for (iVar16 = 0xd; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = (uint)*ppvVar24;
    ppvVar24 = ppvVar24 + (uint)bVar30 * -2 + 1;
    puVar21 = puVar21 + (uint)bVar30 * -2 + 1;
  }
  local_67c4 = thunk_terror_ui_colour(0);
  local_67a4 = local_67a4 | 1;
  uVar6 = thunk_terror_ui_window_open(&local_655c,&local_67d4);
  if (uVar6 != 0) {
    terror_ui_window_set_custom_menus(&local_655c,str_10006e11);
    local_61ec = pvStack_6530;
    if (pvStack_6530 != (void *)0x0) {
      local_61e8 = 6;
      local_61e4 = 10;
      thunk_memset(&local_6818,0,0x18);
      iVar16 = Ram00280800;
      if (((iVar16 == 0x50414d57) && (iVar16 = Ram00280804, iVar16 != 0)) &&
         ((uVar6 = Ram00280808, 0xb < uVar6 &&
          (((uVar6 = Ram00280808, 0x17b < uVar6 &&
            (pcVar1 = (code *)UINT_00280978, pcVar1 != (code *)0x0)) &&
           (uVar6 = (*pcVar1)((char *)((uintptr_t)pf_module_state + 0x22cU),0xffffffff,1,0,&local_6818), uVar6 != 0)))))) {
        if (local_680c - 1U < 0x40) {
          local_61e8 = local_680c + 1;
        }
        if (iStack_6808 - 1U < 0x40) {
          local_61e4 = iStack_6808;
        }
        if (((local_6818 != (void *)0x0) && (iStack_6814 == 0)) &&
           ((((local_6818 != (void *)0x0 &&
              ((iVar16 = Ram00280800, iVar16 == 0x50414d57 && (iVar16 = Ram00280804, iVar16 != 0))))
             && (uVar6 = Ram00280808, 0xb < uVar6)) &&
            ((uVar6 = Ram00280808, 0x53 < uVar6 &&
             (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))))) {
          (*pcVar1)(local_6818);
        }
        thunk_memset(&local_6818,0,0x18);
      }
      cStack_18 = '\x01';
      recovered_10003410(&local_655c);
      if (argc < 2 || argv == (char **)0x0) goto LAB_10000c41;
      pcVar25 = argv[1];
      if ((pcVar25 == (char *)0x0) || (*pcVar25 == '\0')) {
LAB_10000bc1:
        if (2 < (uint)argc) {
          iVar16 = 2;
          do {
            pcVar25 = argv[iVar16];
            if (((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) &&
               ((iVar8 = thunk_strncmp(pcVar25,str_10006ddd,5), iVar8 == 0 ||
                (iVar8 = thunk_strncmp(pcVar25,(char *)((uintptr_t)pf_module_state + 0x1baU),5), iVar8 == 0))))
            goto LAB_10000c30;
            iVar16 = iVar16 + 1;
          } while (iVar16 < argc);
        }
      }
      else {
        iVar16 = thunk_strncmp(pcVar25,str_10006ddd,5);
        if ((iVar16 == 0) ||
           (iVar16 = thunk_strncmp(pcVar25,(char *)((uintptr_t)pf_module_state + 0x1baU),5), iVar16 == 0)) {
LAB_10000c30:
          pcVar25 = pcVar25 + 5;
        }
        else {
          pcVar7 = thunk_strchr(pcVar25,0x3d);
          if (pcVar7 != (char *)0x0) goto LAB_10000bc1;
        }
        recovered_100025c0((int)&local_655c,pcVar25);
      }
LAB_10000c41:
      if (cStack_18 == '\x01') {
        bVar22 = true;
        uVar6 = local_34 >> 0xc & 1;
        do {
          terror_ui_window_begin_frame(&local_655c);
          uVar3 = local_6554;
          uVar13 = local_6558;
          thunk_memset(&local_67d4,0,0x278);
          uVar9 = thunk_terror_ui_window_query(&local_655c,&local_67d4);
          if (((uVar9 == 0) || (uVar4 = thunk_terror_ui_window_info_requests_close(&local_67d4), uVar4 != '\0')) ||
             (uVar9 = thunk_terror_ui_window_sync_buffer(&local_655c,&local_67d4), uVar9 == 0)) break;
          local_61ec = pvStack_6530;
          local_38 = uStack_67ac;
          if ((local_6558 == uVar13) && (local_6554 == uVar3)) {
            bVar29 = false;
          }
          else {
            recovered_10002a70((int)&local_655c);
            bVar29 = true;
          }
          if ((local_67a0 == 0) || (local_67a0 == local_30)) {
LAB_10000e70:
            bVar2 = bVar29;
            goto LAB_10000e74;
          }
          local_30 = local_67a0;
          if (local_679c == 2) {
            if (iStack_6798 == 2) {
              uVar11 = recovered_10005b60((int)&local_655c);
              cVar28 = (char)uVar11;
            }
            else if (iStack_6798 == 1) {
              uVar11 = recovered_10005980((int)&local_655c);
              cVar28 = (char)uVar11;
            }
            else {
              if (iStack_6798 != 0) goto LAB_10000e70;
              uVar11 = recovered_100056f0((int)&local_655c);
              cVar28 = (char)uVar11;
            }
            bVar2 = true;
            if (cVar28 == '\0') goto LAB_10000e70;
            goto LAB_10000e74;
          }
          bVar2 = bVar29;
          if (local_679c != 1) goto LAB_10000e74;
          bVar2 = true;
          switch((uintptr_t)(iStack_6798)) {
          case 0:
            if (local_61e0 != (char *)0x0) {
              *local_61e0 = '\0';
              local_61d8 = 0;
              local_61d4 = 0;
              local_61d0 = 0;
              local_2c = 0;
              local_28 = 0;
              uStack_22 = 0;
              thunk_snprintf(local_b8,0x80,&DAT_10006e52,str_10006e04);
            }
            break;
          case 1:
            iVar16 = 0;
            goto code_r0x10001de1;
          case 2:
            recovered_10005530((int)&local_655c);
            break;
          case 3:
            iVar16 = 1;
code_r0x10001de1:
            recovered_10005420((int)&local_655c,iVar16);
          }
LAB_10000e74:
          uVar3 = local_38;
          local_6218 = '\0';
          thunk_memset(&local_67d4,0,0x1c);
          uVar9 = thunk_terror_ui_window_pointer_state(&local_655c,&local_67d4);
          uVar13 = local_6554;
          if (uVar9 == 0) {
LAB_10000f2f:
            cStack_1f = '\0';
            uStack_21 = 0;
          }
          else {
            if (((local_67d4 & 2) == 0) || (0xb < local_67c0 - 0xfU || (int)uStack_67bc < 0x3f)) {
              local_6218 = false;
            }
            else {
              uVar9 = 0xac;
              if (0xac < (int)local_6554) {
                uVar9 = local_6554;
              }
              uVar9 = uVar9 - 0x2a;
              if (local_6554 == 0) {
                uVar9 = 0x1de;
              }
              local_6218 = uStack_67bc < uVar9;
            }
            if ((local_67d4 & 4) == 0) goto LAB_10000f2f;
            iVar16 = local_6558 - 1;
            if (local_6558 == 0) {
              iVar16 = 799;
            }
            if (local_67c0 < iVar16) {
              iVar16 = local_67c0;
            }
            if (local_67c0 < 0) {
              iVar16 = 0;
            }
            uVar9 = local_6554 - 1;
            if (local_6554 == 0) {
              uVar9 = 0x207;
            }
            if ((int)uStack_67bc < (int)uVar9) {
              uVar9 = uStack_67bc;
            }
            if ((int)uStack_67bc < 0) {
              uVar9 = 0;
            }
            uVar23 = uStack_67d0 & 1;
            if (uVar23 == 0) goto LAB_10000f2f;
            if (cStack_1f == '\0') {
              uVar12 = 0xa2;
              if (0xa2 < (int)local_6558) {
                uVar12 = local_6558;
              }
              iVar8 = uVar12 - 10;
              if (local_6558 == 0) {
                iVar8 = 0x316;
              }
              if ((((iVar16 < 0x48) || ((int)uVar9 < 0xf)) || (iVar8 <= iVar16)) || (0x26 < uVar9))
              {
                uVar12 = 0xac;
                if (0xac < (int)local_6554) {
                  uVar12 = local_6554;
                }
                recovered_10006250(&local_6828,(int)&local_655c);
                uVar19 = local_2c;
                uVar18 = iVar16 - 0xf;
                if ((uVar18 < 0xc) && (uVar9 - 0x3f < 0xe)) {
                  iVar8 = 1;
                  pcVar25 = local_61e0;
                  uVar18 = local_61d8;
                  if (local_61e0 != (char *)0x0) {
                    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                      iVar8 = iVar8 + (uint)(iVar8 != 0x7fffffff && *pcVar25 == '\n');
                      pcVar25 = pcVar25 + 1;
                    }
                  }
                  uVar12 = uVar12 - 0x68;
                  if (uVar13 == 0) {
                    uVar12 = 0x1a0;
                  }
                  uVar13 = local_61e4 + 3;
                  if (local_61e4 < 1) {
                    uVar13 = 0xd;
                  }
                  uVar13 = (iVar8 - uVar12 / uVar13) - (uint)(uVar12 / uVar13 == 0);
                  if ((int)uVar13 < 1) {
                    uVar13 = 0;
                  }
                  if ((int)(local_2c - 1) < (int)uVar13) {
                    uVar13 = local_2c - 1;
                  }
                  if ((int)local_2c < 1) {
                    uVar13 = 0;
                  }
                  local_2c = uVar13;
                  if ((int)local_28 < 0) {
                    local_28 = 0;
                  }
LAB_10001edb:
                  bVar29 = true;
                  if (local_2c != uVar19) goto LAB_1000217a;
                }
                else {
                  iVar8 = uVar12 - 0x38;
                  if (uVar13 == 0) {
                    iVar8 = 0x1d0;
                  }
                  if (((uVar18 < 0xc) && (iVar8 <= (int)uVar9)) && (uVar9 < iVar8 + 0xeU)) {
                    uVar18 = 0x7ffffffe;
                    if ((int)local_2c < 0x7ffffffe) {
                      uVar18 = local_2c;
                    }
                    if ((int)uVar18 < 0) {
                      uVar18 = 0xffffffff;
                    }
                    iVar8 = 1;
                    pcVar25 = local_61e0;
                    uVar26 = local_61d8;
                    if (local_61e0 != (char *)0x0) {
                      for (; uVar26 != 0; uVar26 = uVar26 - 1) {
                        iVar8 = iVar8 + (uint)(iVar8 != 0x7fffffff && *pcVar25 == '\n');
                        pcVar25 = pcVar25 + 1;
                      }
                    }
                    uVar12 = uVar12 - 0x68;
                    if (uVar13 == 0) {
                      uVar12 = 0x1a0;
                    }
                    uVar13 = local_61e4 + 3;
                    if (local_61e4 < 1) {
                      uVar13 = 0xd;
                    }
                    local_2c = (iVar8 - uVar12 / uVar13) - (uint)(uVar12 / uVar13 == 0);
                    if ((int)local_2c < 1) {
                      local_2c = 0;
                    }
                    if ((int)(uVar18 + 1) < (int)local_2c) {
                      local_2c = uVar18 + 1;
                    }
                    if ((int)local_28 < 0) {
                      local_28 = 0;
                    }
                    goto LAB_10001edb;
                  }
                  uVar19 = uVar12 - 0x3f;
                  if (uVar13 == 0) {
                    uVar19 = 0x1c9;
                  }
                  if (((uVar18 < 0xc) && (0x4e < (int)uVar9)) && (uVar9 < uVar19)) {
                    if (((iVar16 < local_6828) || ((int)uVar9 < local_6824)) ||
                       ((local_6828 + local_6820 <= iVar16 ||
                        (local_6824 + local_681c <= (int)uVar9)))) {
                      iVar8 = uVar12 - 0x8e;
                      if (uVar13 == 0) {
                        iVar8 = 0x17a;
                      }
                      recovered_10006250(&local_6818,(int)&local_655c);
                      pcVar25 = local_61e0;
                      iVar17 = 1;
                      if ((local_61e0 != (char *)0x0) && (local_61d8 != 0)) {
                        uVar18 = local_61d8;
                        pcVar7 = local_61e0;
                        do {
                          iVar17 = iVar17 + (uint)(iVar17 != 0x7fffffff && *pcVar7 == '\n');
                          pcVar7 = pcVar7 + 1;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      uVar12 = uVar12 - 0x68;
                      if (uVar13 == 0) {
                        uVar12 = 0x1a0;
                      }
                      uVar13 = local_61e4 + 3;
                      if (local_61e4 < 1) {
                        uVar13 = 0xd;
                      }
                      iVar14 = uVar12 / uVar13 + (uint)(uVar12 / uVar13 == 0);
                      uVar13 = iVar17 - iVar14;
                      puVar21 = &local_2c;
                      if (uVar13 != 0 && iVar14 <= iVar17) {
                        puVar21 = &local_2c;
                        if (0 < iVar8 - local_680c) {
                          uVar12 = (uVar9 - local_680c / 2) - 0x4f;
                          lVar31 = (ulonglong)uVar12 * (ulonglong)uVar13;
                          lVar31 = thunk___divdi3(CONCAT44(((int)uVar12 >> 0x1f) * uVar13 +
                                                               (int)((ulonglong)lVar31 >> 0x20),
                                                               (int)lVar31),
                                                      (ulonglong)(uint)(iVar8 - local_680c));
                          if ((int)(uint)((uint)lVar31 < 0x7fffffff) <=
                              (int)((ulonglong)lVar31 >> 0x20)) {
                            lVar31 = 0x7fffffff;
                          }
                          uVar13 = (uint)lVar31;
                          if (lVar31 < 0) {
                            uVar13 = 0;
                          }
                          iVar8 = 1;
                          uVar12 = local_61d8;
                          if (pcVar25 != (char *)0x0) {
                            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                              iVar8 = iVar8 + (uint)(iVar8 != 0x7fffffff && *pcVar25 == '\n');
                              pcVar25 = pcVar25 + 1;
                            }
                          }
                          local_2c = iVar8 - iVar14;
                          if ((int)local_2c < 1) {
                            local_2c = 0;
                          }
                          if ((int)uVar13 < (int)local_2c) {
                            local_2c = uVar13;
                          }
                          puVar21 = &local_28;
                          if (-1 < (int)local_28) goto LAB_1000214b;
                        }
                      }
                      *puVar21 = 0;
                    }
LAB_1000214b:
                    uStack_21 = CONCAT11(PF_PART1(uStack_21, 1),1);
                    recovered_10006250(&local_67e4,(int)&local_655c);
                    local_1c = uVar9 - iStack_67e0;
                    goto LAB_10002178;
                  }
                }
                bVar29 = recovered_10006010((int)&local_655c,iVar16,uVar9,'\0','\0');
                if (!bVar29) {
                  uVar13 = 0xac;
                  if (0xac < (int)local_6554) {
                    uVar13 = local_6554;
                  }
                  uVar13 = uVar13 - 0x28;
                  iVar8 = local_6558 - 0x14;
                  if (local_6558 == 0) {
                    iVar8 = 0x30c;
                  }
                  if (local_6554 == 0) {
                    uVar13 = 0x1e0;
                  }
                  bVar29 = false;
                  if ((((iVar16 < 0x41) || ((int)uVar9 < 0x40)) || (iVar8 <= iVar16)) ||
                     (uVar13 <= uVar9)) goto LAB_1000217a;
                }
                uStack_21 = CONCAT11(1,(char)uStack_21);
              }
              else {
                iVar8 = local_61e8;
                if (local_61e8 < 1) {
                  iVar8 = 6;
                }
                uStack_24 = 1;
                local_61d0 = local_61d4;
                thunk_snprintf(acStack_3148 + 1,0x3085,&DAT_10006e52,local_61cc);
                uVar10 = (iVar16 + -0x4c) / iVar8 + local_bc;
                local_c0 = thunk_strlen(acStack_3148 + 1);
                if ((int)uVar10 < (int)local_c0) {
                  local_c0 = uVar10;
                }
                if ((int)uVar10 < 0) {
                  local_c0 = 0;
                }
              }
LAB_10002178:
              bVar29 = true;
            }
            else {
              bVar29 = false;
            }
LAB_1000217a:
            uVar13 = local_6554;
            cVar28 = (char)uVar23;
            if ((char)uStack_21 == '\x01') {
              uVar23 = 0xac;
              if (0xac < (int)local_6554) {
                uVar23 = local_6554;
              }
              iVar16 = uVar23 - 0x8e;
              if (local_6554 == 0) {
                iVar16 = 0x17a;
              }
              recovered_10006250(&local_6818,(int)&local_655c);
              pcVar25 = local_61e0;
              iVar8 = 1;
              if ((local_61e0 != (char *)0x0) && (local_61d8 != 0)) {
                uVar12 = local_61d8;
                pcVar7 = local_61e0;
                do {
                  iVar8 = iVar8 + (uint)(iVar8 != 0x7fffffff && *pcVar7 == '\n');
                  pcVar7 = pcVar7 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar23 = uVar23 - 0x68;
              if (uVar13 == 0) {
                uVar23 = 0x1a0;
              }
              uVar13 = local_61e4 + 3;
              if (local_61e4 < 1) {
                uVar13 = 0xd;
              }
              iVar17 = uVar23 / uVar13 + (uint)(uVar23 / uVar13 == 0);
              uVar13 = iVar8 - iVar17;
              if ((uVar13 == 0 || iVar8 < iVar17) || (iVar16 - local_680c < 1)) {
                bVar29 = !bVar29;
              }
              else {
                uVar9 = (uVar9 - local_1c) - 0x4f;
                lVar31 = (ulonglong)uVar9 * (ulonglong)uVar13;
                lVar31 = thunk___divdi3(CONCAT44(((int)uVar9 >> 0x1f) * uVar13 +
                                                     (int)((ulonglong)lVar31 >> 0x20),(int)lVar31),
                                            (ulonglong)(uint)(iVar16 - local_680c));
                if ((int)(uint)((uint)lVar31 < 0x7fffffff) <= (int)((ulonglong)lVar31 >> 0x20)) {
                  lVar31 = 0x7fffffff;
                }
                uVar13 = (uint)lVar31;
                if (lVar31 < 0) {
                  uVar13 = 0;
                }
                iVar16 = 1;
                uVar9 = local_61d8;
                if (pcVar25 != (char *)0x0) {
                  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                    iVar16 = iVar16 + (uint)(iVar16 != 0x7fffffff && *pcVar25 == '\n');
                    pcVar25 = pcVar25 + 1;
                  }
                }
                uVar9 = iVar16 - iVar17;
                if ((int)uVar9 < 1) {
                  uVar9 = 0;
                }
                if ((int)uVar13 < (int)uVar9) {
                  uVar9 = uVar13;
                }
                if ((int)local_28 < 0) {
                  local_28 = 0;
                }
                bVar29 = !bVar29 && uVar9 == local_2c;
                local_2c = uVar9;
              }
            }
            else if (PF_PART1(uStack_21, 1) == '\x01') {
              bVar5 = recovered_10006010((int)&local_655c,iVar16,uVar9,'\x01','\x01');
              bVar29 = !bVar29 && !bVar5;
            }
            else {
              bVar29 = !bVar29;
            }
            cStack_1f = cVar28;
            if (!bVar29) {
              bVar2 = true;
            }
          }
          if ((uVar3 & 2) != 0) {
            iVar16 = 0;
            bVar29 = false;
            do {
              iVar8 = Ram00280800;
              if ((((iVar8 != 0x50414d57) || (iVar8 = Ram00280804, iVar8 == 0)) ||
                  (uVar13 = Ram00280808, uVar13 < 0xc)) ||
                 ((uVar13 = Ram00280808, uVar13 < 0x30 ||
                  (pcVar1 = (code *)UINT_0028082c, pcVar1 == (code *)0x0)))) break;
              uVar9 = (*pcVar1)();
              uVar10 = local_c0;
              uVar13 = local_61d4;
              if (uVar9 == 0) break;
              if (SBORROW4(0,uVar9 & 0x8000ffff)) goto LAB_10001000;
              cVar15 = (char)(uVar9 >> 8);
              cVar28 = (char)uVar9;
              if ((char)uStack_24 != '\x01') {
                uVar23 = local_61d8;
                if (local_61d0 < local_61d8) {
                  uVar23 = local_61d0;
                }
                uVar12 = local_61d8;
                if (local_61d4 < local_61d8) {
                  uVar12 = local_61d4;
                }
                uVar19 = uVar23;
                uVar18 = uVar12;
                if (local_61d0 < uVar12) {
                  uVar19 = uVar12;
                  uVar18 = uVar23;
                }
                uVar27 = uVar19;
                uVar26 = uVar18;
                if (uVar23 == uVar12) {
                  uVar26 = 0;
                  uVar27 = 0;
                }
                if ((uVar9 & 0x40000) != 0) {
                  if (((cVar15 != '\x1e') && (cVar28 != '\x01')) &&
                     ((uVar9 = uVar9 & 0xff, uVar9 != 0x61 && (uVar9 != 0x41)))) {
                    if ((((cVar15 == '.') || (cVar28 == '\x03')) || (uVar9 == 99)) ||
                       (uVar9 == 0x43)) {
                      uVar11 = recovered_10005980((int)&local_655c);
                      cVar28 = (char)uVar11;
                    }
                    else if (((cVar15 == '/') || (cVar28 == '\x16')) ||
                            ((uVar9 == 0x76 || (uVar9 == 0x56)))) {
                      uVar11 = recovered_10005b60((int)&local_655c);
                      cVar28 = (char)uVar11;
                    }
                    else {
                      if (((cVar15 != '-') && (cVar28 != '\x18')) &&
                         ((uVar9 != 0x78 && (uVar9 != 0x58)))) goto LAB_10001000;
                      uVar11 = recovered_100056f0((int)&local_655c);
                      cVar28 = (char)uVar11;
                    }
                    goto joined_r0x10001332;
                  }
                  local_61d0 = 0;
                  local_61d4 = local_61d8;
                  thunk_snprintf(local_b8,0x80,&DAT_10006e52,str_10006f84);
                  goto LAB_100011d4;
                }
                if ((uVar9 & 0x20000) != 0) goto LAB_10001000;
                if ((byte)(cVar28 - 0x20U) < 0x5f) {
                  local_67d4 = CONCAT31(PF_PART3(local_67d4, 1),cVar28);
                  puVar21 = &local_67d4;
                  uVar13 = 1;
LAB_10001324:
                  uVar11 = recovered_10005dd0((int)&local_655c,puVar21,uVar13);
                  cVar28 = (char)uVar11;
                  goto joined_r0x10001332;
                }
                if (cVar28 == '\t') {
                  puVar21 = (uint *)((uintptr_t)pf_module_state + 0x368U);
                  uVar13 = 4;
                  goto LAB_10001324;
                }
                if (((cVar15 == '\x0e') || (cVar28 == '\x7f')) || ((uVar9 & 0xff) == 8)) {
                  if ((uVar23 == uVar12) || (uVar19 <= uVar18 || local_61e0 == (char *)0x0)) {
                    if (local_61d4 == 0 || local_61e0 == (char *)0x0) goto LAB_10001000;
                    thunk_memmove(local_61e0 + (local_61d4 - 1),local_61e0 + local_61d4,
                                       (local_61d8 - local_61d4) + 1);
                    local_61d4 = local_61d4 - 1;
                    local_61d8 = local_61d8 - 1;
                  }
                  else {
                    thunk_memmove(local_61e0 + uVar18,local_61e0 + uVar19,
                                       (local_61d8 - uVar19) + 1);
                    local_61d8 = local_61d8 + (uVar18 - uVar19);
                    local_61d4 = uVar18;
                  }
                  uStack_22 = 1;
                  local_61d0 = local_61d4;
                  goto LAB_100011d4;
                }
                if (cVar15 == '\x1c') {
LAB_10001592:
                  local_67d4 = CONCAT31(PF_PART3(local_67d4, 1),10);
                  uVar11 = recovered_10005dd0((int)&local_655c,&local_67d4,1);
                  cVar28 = (char)uVar11;
                  goto joined_r0x10001332;
                }
                if (cVar15 == 'S') {
                  uVar11 = recovered_100064f0((int)&local_655c);
                  cVar28 = (char)uVar11;
                  goto joined_r0x10001332;
                }
                if ((cVar28 == '\r') || ((uVar9 & 0xff) == 10)) goto LAB_10001592;
                switch((uintptr_t)(cVar15)) {
                case 'G':
                  uVar13 = 0;
                  if ((local_61e0 != (char *)0x0) && (uVar12 != 0)) {
                    do {
                      if (local_61e0[uVar12 - 1] == '\n') goto code_r0x10001706;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  goto code_r0x10001888;
                case 'H':
                  cVar28 = '\x01';
                  goto code_r0x10001724;
                case 'I':
                  uVar13 = 0xac;
                  if (0xac < (int)local_6554) {
                    uVar13 = local_6554;
                  }
                  uVar13 = uVar13 - 0x68;
                  if (local_6554 == 0) {
                    uVar13 = 0x1a0;
                  }
                  uVar9 = local_61e4 + 3;
                  if (local_61e4 < 1) {
                    uVar9 = 0xd;
                  }
                  local_2c = (local_2c - uVar13 / uVar9) - (uint)(uVar13 / uVar9 == 0);
                  goto code_r0x100017fb;
                case 'K':
                  if (((uVar9 & 0x10000) == 0) && (uVar23 != uVar12)) {
                    cVar28 = true;
                    local_61d4 = uVar26;
                  }
                  else {
                    if (local_61d4 == 0) break;
                    local_61d4 = local_61d4 - 1;
code_r0x1000186d:
                    cVar28 = true;
                  }
                  goto code_r0x1000189e;
                case 'M':
                  if (((uVar9 & 0x10000) == 0) && (uVar23 != uVar12)) {
                    cVar28 = true;
                    local_61d4 = uVar27;
                    goto code_r0x1000189e;
                  }
                  if (local_61d4 < local_61d8) {
                    local_61d4 = local_61d4 + 1;
                    goto code_r0x1000186d;
                  }
                  break;
                case 'O':
                  if (local_61e0 == (char *)0x0) {
code_r0x10001886:
                    uVar13 = 0;
                  }
                  else {
                    if (uVar12 != 0) {
                      do {
                        if (local_61e0[uVar12 - 1] == '\n') {
                          uVar13 = uVar12;
                          if (uVar12 <= local_61d8) goto code_r0x100016e9;
                          goto code_r0x10001886;
                        }
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    uVar13 = 0;
code_r0x100016e9:
                    if (uVar13 < local_61d8) {
                      do {
                        if (local_61e0[uVar13] == '\n') goto code_r0x10001888;
                        uVar13 = uVar13 + 1;
                        uVar12 = local_61d8;
                      } while (local_61d8 != uVar13);
code_r0x10001706:
                      uVar13 = uVar12;
                    }
                  }
code_r0x10001888:
                  cVar28 = uVar13 != local_61d4;
                  local_61d4 = uVar13;
code_r0x1000189e:
                  if (((uVar9 & 0x10000) == 0) && ((bool)cVar28 != false)) {
                    local_61d0 = local_61d4;
                  }
                  else {
joined_r0x10001332:
                    if (cVar28 == '\0') break;
                  }
LAB_100011d4:
                  recovered_10002a70((int)&local_655c);
                  bVar29 = true;
                  break;
                case 'P':
                  cVar28 = '\0';
code_r0x10001724:
                  recovered_100065e0((int)&local_655c,cVar28);
                  cVar28 = local_61d4 != uVar13;
                  goto code_r0x1000189e;
                case 'Q':
                  iVar8 = (int)local_2c >> 0x1f;
                  uVar13 = 0xac;
                  if (0xac < (int)local_6554) {
                    uVar13 = local_6554;
                  }
                  uVar13 = uVar13 - 0x68;
                  if (local_6554 == 0) {
                    uVar13 = 0x1a0;
                  }
                  uVar9 = local_61e4 + 3;
                  if (local_61e4 < 1) {
                    uVar9 = 0xd;
                  }
                  uVar13 = uVar13 / uVar9 + (uint)(uVar13 / uVar9 == 0);
                  bVar29 = CARRY4(uVar13,local_2c);
                  local_2c = uVar13 + local_2c;
                  iVar8 = iVar8 + (uint)bVar29;
                  if ((int)(uint)(local_2c < 0x7fffffff) <= iVar8) {
                    local_2c = 0x7fffffff;
                    iVar8 = 0;
                  }
                  if (iVar8 < 0) {
                    local_2c = 0;
                  }
code_r0x100017fb:
                  recovered_10006430((int)&local_655c);
                  goto LAB_100011d4;
                }
                goto LAB_10001000;
              }
              if ((uVar9 & 0x60000) != 0) goto LAB_10001000;
              if ((byte)(cVar28 - 0x20U) < 0x5f) {
                uVar10 = thunk_strlen(acStack_3148 + 1);
                if (0xffffcf7a < uVar10 - 0x3084) {
                  thunk_memmove(acStack_3148 + local_c0 + 2,acStack_3148 + local_c0 + 1,
                                     (uVar10 - local_c0) + 1);
                  acStack_3148[local_c0 + 1] = cVar28;
                  local_c0 = local_c0 + 1;
                  goto LAB_10001286;
                }
                goto LAB_10001000;
              }
              if (((cVar15 == '\x0e') || (cVar28 == '\x7f')) || ((uVar9 & 0xff) == 8)) {
                uVar10 = thunk_strlen(acStack_3148 + 1);
                if (uVar10 != 0 && local_c0 != 0) {
                  thunk_memmove(acStack_3148 + local_c0,acStack_3148 + local_c0 + 1,
                                     (uVar10 - local_c0) + 1);
                  local_c0 = local_c0 - 1;
                  goto LAB_10001286;
                }
                goto LAB_10001000;
              }
              bVar30 = PF_PART1(uStack_24, 1);
              if (((cVar15 == '\x1c') || (cVar28 == '\r')) || ((uVar9 & 0xff) == 10)) {
                if (acStack_3148[1] == '\0') {
                  thunk_snprintf(local_b8,0x80,&DAT_10006e52,str_10006f76);
                }
                else {
                  uStack_24 = (ushort)PF_PART1(uStack_24, 1) << 8;
                  if (bVar30 == 1) {
                    thunk_snprintf(local_61cc,0x3085,&DAT_10006e52,acStack_3148 + 1);
                    uVar11 = recovered_10005530((int)&local_655c);
                    cVar28 = (char)uVar11;
                  }
                  else {
                    uVar11 = recovered_100025c0((int)&local_655c,acStack_3148 + 1);
                    cVar28 = (char)uVar11;
                  }
                  if (cVar28 != '\0') goto LAB_10001286;
                }
                goto LAB_10001000;
              }
              if (cVar28 == '\x1b' || cVar15 == '\x01') {
                uStack_24 = (ushort)PF_PART1(uStack_24, 1) << 8;
                thunk_snprintf(local_b8,0x80,&DAT_10006e52,str_10006f62);
                goto LAB_10001286;
              }
              switch((uintptr_t)(cVar15)) {
              case 'G':
                local_c0 = 0;
                goto LAB_10001286;
              case 'K':
                if (local_c0 != 0) {
                  local_c0 = local_c0 - 1;
                  goto LAB_10001286;
                }
                break;
              case 'M':
                uVar20 = thunk_strlen(acStack_3148 + 1);
                if (uVar10 < uVar20) {
                  local_c0 = local_c0 + 1;
                  goto LAB_10001286;
                }
                break;
              case 'O':
                local_c0 = thunk_strlen(acStack_3148 + 1);
LAB_10001286:
                uVar13 = 0xa2;
                if (0xa2 < (int)local_6558) {
                  uVar13 = local_6558;
                }
                iVar8 = uVar13 - 0x5a;
                if (local_6558 == 0) {
                  iVar8 = 0x2c6;
                }
                iVar17 = local_61e8;
                if (local_61e8 < 1) {
                  iVar17 = 6;
                }
                iVar8 = iVar8 / iVar17;
                if (iVar8 < 2) {
                  iVar8 = 1;
                }
                uVar10 = local_c0;
                if ((int)local_c0 < (int)local_bc) {
LAB_100012e3:
                  local_bc = uVar10;
                }
                else if ((int)(local_bc + iVar8) <= (int)local_c0) {
                  uVar10 = (local_c0 - iVar8) + 1;
                  goto LAB_100012e3;
                }
                bVar29 = true;
                if ((int)local_bc < 0) {
                  local_bc = 0;
                }
              }
LAB_10001000:
              iVar16 = iVar16 + 1;
            } while (iVar16 != 0x20);
            if (bVar29) {
              bVar2 = true;
            }
          }
          uVar10 = local_bc;
          if ((char)uStack_24 == '\x01') {
            uVar13 = 0xa2;
            if (0xa2 < (int)local_6558) {
              uVar13 = local_6558;
            }
            iVar16 = uVar13 - 0x5a;
            if (local_6558 == 0) {
              iVar16 = 0x2c6;
            }
            iVar8 = local_61e8;
            if (local_61e8 < 1) {
              iVar8 = 6;
            }
            iVar16 = iVar16 / iVar8;
            if (iVar16 < 2) {
              iVar16 = 1;
            }
            uVar20 = local_c0;
            if ((int)local_c0 < (int)local_bc) {
LAB_10001942:
              local_bc = uVar20;
            }
            else if ((int)(local_bc + iVar16) <= (int)local_c0) {
              uVar20 = (local_c0 - iVar16) + 1;
              goto LAB_10001942;
            }
            if ((int)local_bc < 0) {
              local_bc = 0;
            }
            bVar29 = uVar10 == local_bc;
          }
          else {
            uVar11 = recovered_10002a70((int)&local_655c);
            bVar29 = (char)uVar11 == '\0';
          }
          uVar13 = local_621c;
          if (!bVar29) {
            bVar2 = true;
          }
          uVar9 = local_34 >> 0xc & 1;
          if ((uVar3 & 2) == 0) {
            uVar9 = 1;
          }
          if (uVar9 != uVar6) {
            bVar2 = true;
          }
          if ((local_6218 == '\0') && ((uStack_21 & 1) == 0)) {
            iVar16 = -1;
            if (local_621c != 0) goto LAB_100019dc;
            uVar6 = 0;
          }
          else {
            iVar16 = 1;
            uVar6 = local_621c;
            if (local_621c < 0x20) {
LAB_100019dc:
              local_621c = iVar16 + local_621c;
              uVar6 = local_621c;
            }
          }
          if (bVar22) {
LAB_100019f0:
            recovered_10003410(&local_655c);
            pixels = local_61ec;
            uVar23 = uStack_6550;
            uVar13 = local_6554;
            uVar6 = local_6558;
            uVar12 = thunk_terror_ui_colour(0);
            thunk_terror_ui_window_present(&local_655c,str_10006de9,pixels,uVar6,uVar13,uVar23,uVar12);
LAB_10001a4d:
            bVar22 = false;
          }
          else {
            if (0x1f < uVar6) {
              uVar6 = 0x20;
            }
            if (0x1f < uVar13) {
              uVar13 = 0x20;
            }
            if ((bVar2) ||
               (0x3ff < (((uVar13 * -0x40 + 0xc00) * uVar13 * 0x20 * uVar13 * 0x20 + 0x80000 >> 0x14
                         ) * 10 + 0x200 ^
                        ((uVar6 * -0x40 + 0xc00) * uVar6 * 0x20 * uVar6 * 0x20 + 0x80000 >> 0x14) *
                        10 + 0x200))) {
              if ((bVar2) || (uVar4 = terror_ui_scrollbar_restore(auStack_6214,&local_655c), uVar4 == '\0'))
              goto LAB_100019f0;
              uStack_6217 = 1;
              recovered_10002cd0(&local_655c);
              uStack_6217 = 0;
              pf_app_terror_ui_window_present_rect(&local_655c,local_620c,local_6208,local_6204,iStack_6200);
              goto LAB_10001a4d;
            }
          }
          local_34 = local_34 + 1;
          if (local_621c - 1 < 0x1f) {
            uVar6 = 2;
LAB_10000c65:
            thunk_terror_ui_yield_frames(uVar6);
          }
          else {
            if ((!bVar2) && (!bVar22)) {
              uVar6 = 5;
              if ((uVar3 & 2) == 0) {
                uVar6 = 0x14;
              }
              goto LAB_10000c65;
            }
            iVar16 = Ram00280800;
            if ((((iVar16 == 0x50414d57) && (iVar16 = Ram00280804, iVar16 != 0)) &&
                (uVar6 = Ram00280808, 0xb < uVar6)) &&
               ((uVar6 = Ram00280808, 0x9f < uVar6 &&
                (pcVar1 = (code *)UINT_0028089c, pcVar1 != (code *)0x0)))) {
              (*pcVar1)();
            }
          }
          uVar6 = uVar9;
        } while (cStack_18 != '\0');
      }
      terror_ui_scrollbar_release(auStack_6214);
      if (local_655c != 0) {
        thunk_terror_ui_window_close(&local_655c);
      }
      if (local_61e0 == (char *)0x0) {
        return 0;
      }
      iVar16 = Ram00280800;
      if (iVar16 != 0x50414d57) {
        return 0;
      }
      iVar16 = Ram00280804;
      if (iVar16 == 0) {
        return 0;
      }
      uVar6 = Ram00280808;
      if (uVar6 < 0xc) {
        return 0;
      }
      uVar6 = Ram00280808;
      if (uVar6 < 0x54) {
        return 0;
      }
      pcVar1 = (code *)UINT_00280850;
      if (pcVar1 == (code *)0x0) {
        return 0;
      }
      (*pcVar1)(local_61e0);
      return 0;
    }
    thunk_terror_ui_window_close(&local_655c);
  }
  iVar16 = Ram00280800;
  if (((iVar16 == 0x50414d57) && (iVar16 = Ram00280804, iVar16 != 0)) &&
     ((uVar6 = Ram00280808, 0xb < uVar6 &&
      ((uVar6 = Ram00280808, 0x53 < uVar6 && (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)
       ))))) {
    (*pcVar1)(local_61e0);
  }
  local_61e0 = (char *)0x0;
LAB_10002504:
  iVar16 = Ram00280800;
  if ((((iVar16 == 0x50414d57) && (iVar16 = Ram00280804, iVar16 != 0)) &&
      (uVar6 = Ram00280808, 0xb < uVar6)) &&
     ((uVar6 = Ram00280808, 0x2b < uVar6 && (pcVar1 = (code *)UINT_00280828, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(str_10006db8);
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_0028089c
#undef UINT_00280978
#undef str_10006db8
#undef str_10006ddd
#undef str_10006de9
#undef str_10006df5
#undef str_10006e04
#undef str_10006e11
#undef str_10006f62
#undef str_10006f76
#undef str_10006f84
#undef local_655c
#undef local_6558
#undef local_6554
#undef local_621c
#undef local_6218
#undef local_620c
#undef local_6208
#undef local_6204
#undef local_61ec
#undef local_61e8
#undef local_61e4
#undef local_61e0
#undef local_61dc
#undef local_61d8
#undef local_61d4
#undef local_61d0
#undef local_61cc
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_1c
#undef iStack_6814
#undef iStack_6808
#undef iStack_67e0
#undef uStack_67d0
#undef uStack_67bc
#undef uStack_67ac
#undef iStack_6798
#undef uStack_6550
#undef pvStack_6530
#undef uStack_6217
#undef auStack_6214
#undef iStack_6200
#undef acStack_3148
#undef uStack_24
#undef uStack_22
#undef uStack_21
#undef cStack_1f
#undef cStack_18
#undef local_6828
#undef local_6824
#undef local_6820
#undef local_681c
#undef local_6818
#undef local_680c
#undef local_67e4
#undef local_67d4
#undef local_67c4
#undef local_67c0
#undef local_67a4
#undef local_67a0
#undef local_679c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
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
#undef str_10006e57
#define str_10006e57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#undef str_10006e63
#define str_10006e63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_10006e73
#define str_10006e73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24aU)))
#undef str_10006ea4
#define str_10006ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_10006ec5
#define str_10006ec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#define local_3134 (*(void * *)(pf_stack_frame + 44))
#define arg0 (*(char * *)(pf_stack_frame + 28))
#define local_3130 (*(ulong *)(pf_stack_frame + 48))
#define local_312c (*(byte *)(pf_stack_frame + 52))
#define local_3128 (*(ulong *)(pf_stack_frame + 56))
#define local_3124 (*(int *)(pf_stack_frame + 60))
#define local_3120 (*(char (*)[12576])(pf_stack_frame + 64))
#define local_30a0 (*(int *)(pf_stack_frame + 192))
#define local_309c (*(char (*)[12444])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c0
 */

undefined4 recovered_100025c0(int in_ECX,char *in_EDX)

{
  unsigned char pf_stack_frame[12672] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  void *ptr;
  char cVar5;
  ulong in_EDX_00;
  uint uVar6;

  if (in_ECX == 0) {
    return 0;
  }
  if (((in_EDX == (char *)0x0) || (*(int *)(in_ECX + 0x37c) == 0)) || (*in_EDX == '\0')) {
    arg0 = str_10006e57;
    goto override_prt_1000288a_9b0a0a95;
  }
  thunk_memset(&local_3134,0,0xc);
  bVar3 = recovered_10005180(in_EDX,&local_30a0);
  if (bVar3) {
    iVar4 = Ram00280800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
       ((uVar6 = Ram00280808, 0xb < uVar6 &&
        ((uVar6 = Ram00280808, 0x21f < uVar6 && (iVar4 = Ram00280a1c, iVar4 != 0)))))) {
      pcVar1 = (code *)Ram00280a1c;
      iVar4 = (*pcVar1)(local_30a0,local_309c,&local_3134);
      if (iVar4 != 0) goto LAB_100027f1;
    }
    else {
      iVar4 = Ram00280800;
      if ((iVar4 == 0x50414d57) &&
         (((iVar4 = Ram00280804, iVar4 != 0 && (uVar6 = Ram00280808, 0xb < uVar6)) &&
          (uVar6 = Ram00280808, 0xcb < uVar6)))) {
        pcVar1 = (code *)UINT_002808c8;
        if (pcVar1 != (code *)0x0) {
          uVar6 = (*pcVar1)(local_30a0,local_309c,&local_3134);
LAB_10002744:
          pvVar2 = local_3134;
          if (uVar6 != 0) {
            local_3134 = (void *)0x0;
            if (local_3130 == 0) {
LAB_100027f1:
              if (((local_312c & 2) == 0) && (local_3134 != (void *)0x0 || local_3130 == 0)) {
                if (local_3130 == 0xffffffff) {
                  recovered_100050e0(local_3134);
                  arg0 = str_10006e73;
                }
                else {
                  in_EDX_00 = local_3130 + 1;
                  iVar4 = recovered_10005130(local_3134,in_EDX_00);
                  if (iVar4 != 0) {
                    local_3124 = 0;
                    if (local_3130 != 0) {
                      uVar6 = 1;
                      do {
                        cVar5 = *(char *)(iVar4 + -1 + uVar6);
                        if (cVar5 == '\r') {
                          cVar5 = '\n';
                          if ((local_3130 <= uVar6) || (*(char *)(iVar4 + uVar6) != '\n')) {
LAB_100028cc:
                            *(char *)(iVar4 + local_3124) = cVar5;
                            local_3124 = local_3124 + 1;
                          }
                        }
                        else if (((byte)(cVar5 - 0x20U) < 0x5f || (byte)(cVar5 - 9U) < 2) ||
                                (bVar3 = cVar5 != '\0', cVar5 = '?', bVar3)) goto LAB_100028cc;
                        bVar3 = uVar6 < local_3130;
                        uVar6 = uVar6 + 1;
                      } while (bVar3);
                    }
                    *(undefined1 *)(iVar4 + local_3124) = 0;
                    local_3128 = in_EDX_00;
                    recovered_100050e0(*(void **)(in_ECX + 0x37c));
                    *(int *)(in_ECX + 0x37c) = iVar4;
                    *(ulong *)(in_ECX + 0x380) = local_3128;
                    *(int *)(in_ECX + 900) = local_3124;
                    *(undefined4 *)(in_ECX + 0x388) = 0;
                    *(undefined4 *)(in_ECX + 0x38c) = 0;
                    *(undefined4 *)(in_ECX + 0x6530) = 0;
                    *(undefined4 *)(in_ECX + 0x6534) = 0;
                    *(undefined1 *)(in_ECX + 0x653a) = 0;
                    recovered_10004ef0(local_30a0,local_309c,(undefined1 *)(in_ECX + 0x390));
                    thunk_snprintf(local_3120,0x80,str_10006ec5,(undefined1 *)(in_ECX + 0x390));
                    iVar4 = thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,
                                               local_3120);
                    return CONCAT31((int3)((uint)iVar4 >> 8),1);
                  }
                  recovered_100050e0(local_3134);
                  arg0 = str_10006ea4;
                }
                goto override_prt_1000288a_9b0a0a95;
              }
            }
            else if (((((pvVar2 != (void *)0x0) && (iVar4 = Ram00280800, iVar4 == 0x50414d57)) &&
                      (iVar4 = Ram00280804, iVar4 != 0)) &&
                     ((uVar6 = Ram00280808, 0xb < uVar6 && (uVar6 = Ram00280808, 0x4f < uVar6)))) &&
                    ((pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0 &&
                     (ptr = (*pcVar1)(local_3130), ptr != (void *)0x0)))) {
              local_3128 = CONCAT31(PF_PART3(local_3128, 1),local_3130 != 0);
              if (local_3130 == 0 || ptr <= (void *)-local_3130) {
                if (local_3130 != 0) {
                  uVar6 = 0;
                  do {
                    *(undefined1 *)((int)ptr + uVar6) = *(undefined1 *)((int)pvVar2 + uVar6);
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < local_3130);
                }
                local_3134 = ptr;
                goto LAB_100027f1;
              }
              iVar4 = Ram00280800;
              if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
                 ((uVar6 = Ram00280808, 0xb < uVar6 &&
                  ((uVar6 = Ram00280808, 0x53 < uVar6 &&
                   (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))))) {
                (*pcVar1)(ptr);
              }
            }
          }
        }
      }
      else {
        iVar4 = Ram00280800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
           ((uVar6 = Ram00280808, 0xb < uVar6 &&
            ((uVar6 = Ram00280808, 0x37 < uVar6 &&
             (pcVar1 = (code *)UINT_00280834, pcVar1 != (code *)0x0)))))) {
          uVar6 = (*pcVar1)(local_309c,&local_3134);
          goto LAB_10002744;
        }
      }
    }
  }
  iVar4 = Ram00280800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
      (uVar6 = Ram00280808, 0xb < uVar6)) &&
     ((uVar6 = Ram00280808, 0x53 < uVar6 && (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(local_3134);
  }
  arg0 = local_3120;
  thunk_snprintf(arg0,0x80,str_10006e63,in_EDX);
override_prt_1000288a_9b0a0a95:
  thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,arg0);
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a1c
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280a1c
#undef UINT_00280834
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_002808c8
#undef str_10006e57
#undef str_10006e63
#undef str_10006e73
#undef str_10006ea4
#undef str_10006ec5
#undef local_3134
#undef arg0
#undef local_3130
#undef local_312c
#undef local_3128
#undef local_3124
#undef local_3120
#undef local_30a0
#undef local_309c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

undefined4 recovered_10002a70(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 uVar11;
  undefined4 uVar10;
  char *pcVar12;
  int iVar13;
  char *pcVar14;

  uVar8 = 0;
  if (in_ECX == 0) {
    return 0;
  }
  uVar1 = *(uint *)(in_ECX + 0x6530);
  pcVar14 = *(char **)(in_ECX + 0x37c);
  uVar2 = *(uint *)(in_ECX + 0x388);
  uVar7 = 0;
  if (pcVar14 != (char *)0x0) {
    uVar7 = *(uint *)(in_ECX + 900);
    if (uVar2 <= *(uint *)(in_ECX + 900)) {
      uVar7 = uVar2;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = 0;
      pcVar12 = pcVar14;
      do {
        uVar8 = uVar8 + (uVar8 != 0x7fffffff && *pcVar12 == '\n');
        pcVar12 = pcVar12 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar7 = *(uint *)(in_ECX + 900);
    if (uVar2 < *(uint *)(in_ECX + 900)) {
      uVar7 = uVar2;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (pcVar14[uVar7 - 1] == '\n') {
        uVar4 = 0;
        if (uVar7 <= uVar2) goto LAB_10002b20;
        goto LAB_10002b30;
      }
    }
    uVar7 = 0;
  }
LAB_10002b20:
  uVar4 = 0x7fffffff;
  if (uVar2 - uVar7 < 0x7fffffff) {
    uVar4 = uVar2 - uVar7;
  }
LAB_10002b30:
  uVar2 = *(uint *)(in_ECX + 0x6534);
  iVar13 = *(int *)(in_ECX + 8);
  iVar6 = 0xac;
  if (0xac < iVar13) {
    iVar6 = iVar13;
  }
  uVar7 = 0x1a0;
  if (iVar13 != 0) {
    uVar7 = iVar6 - 0x68;
  }
  uVar5 = 0xd;
  if (0 < *(int *)(in_ECX + 0x378)) {
    uVar5 = *(int *)(in_ECX + 0x378) + 3;
  }
  uVar7 = uVar7 / uVar5 + (uint)(uVar7 / uVar5 == 0);
  iVar13 = 0x2cb;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar13 = *(int *)(in_ECX + 4) + -0x55;
  }
  iVar6 = 6;
  if (0 < *(int *)(in_ECX + 0x374)) {
    iVar6 = *(int *)(in_ECX + 0x374);
  }
  uVar5 = 1;
  if (1 < iVar13 / iVar6) {
    uVar5 = iVar13 / iVar6;
  }
  if ((int)uVar8 < (int)uVar1) {
LAB_10002bf2:
    *(uint *)(in_ECX + 0x6530) = uVar8;
    uVar3 = uVar8;
  }
  else {
    iVar6 = ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar7,uVar1);
    uVar9 = (uint)(uVar8 < uVar7 + uVar1);
    iVar13 = ((int)uVar8 >> 0x1f) - iVar6;
    uVar3 = uVar1;
    if ((SBORROW4((int)uVar8 >> 0x1f,iVar6) != SBORROW4(iVar13,uVar9)) == (int)(iVar13 - uVar9) < 0)
    {
      uVar8 = (uVar8 - uVar7) + 1;
      goto LAB_10002bf2;
    }
  }
  if ((int)uVar2 <= (int)uVar4) {
    iVar6 = ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar5,uVar2);
    uVar8 = (uint)(uVar4 < uVar5 + uVar2);
    iVar13 = -iVar6;
    uVar9 = uVar2;
    if ((SBORROW4(0,iVar6) != SBORROW4(iVar13,uVar8)) != (int)(iVar13 - uVar8) < 0)
    goto LAB_10002c2f;
    uVar4 = (uVar4 - uVar5) + 1;
  }
  *(uint *)(in_ECX + 0x6534) = uVar4;
  uVar9 = uVar4;
LAB_10002c2f:
  iVar13 = 1;
  if (pcVar14 != (char *)0x0) {
    for (iVar6 = *(int *)(in_ECX + 900); iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar13 = iVar13 + (uint)(iVar13 != 0x7fffffff && *pcVar14 == '\n');
      pcVar14 = pcVar14 + 1;
    }
  }
  uVar7 = iVar13 - uVar7;
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  if ((int)uVar3 < (int)uVar7) {
    uVar7 = uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar7 = 0;
  }
  *(uint *)(in_ECX + 0x6530) = uVar7;
  uVar8 = uVar9;
  if ((int)uVar9 < 0) {
    *(undefined4 *)(in_ECX + 0x6534) = 0;
    uVar8 = 0;
  }
  uVar11 = (undefined3)(uVar9 >> 8);
  uVar10 = CONCAT31(uVar11,1);
  if (uVar7 == uVar1) {
    uVar10 = CONCAT31(uVar11,uVar8 != uVar2);
  }
  return uVar10;
}


#define local_50 (*(undefined2 *)(pf_stack_frame + 48))
#define local_30 (*(uint *)(pf_stack_frame + 80))
#define local_24 (*(uint *)(pf_stack_frame + 92))
#define local_20 (*(uint *)(pf_stack_frame + 96))
#define local_18 (*(int *)(pf_stack_frame + 104))
#define in_stack_ffffff9c (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd0
 */

void recovered_10002cd0(void *in_ECX)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint in_EDX;
  uint uVar10;
  undefined4 uVar11;
  undefined1 uVar12;

  uVar2 = (undefined1)((uint)in_stack_ffffff9c >> 0x18);
  if (in_ECX == (void *)0x0) {
    iVar9 = 0x208;
  }
  else {
    iVar9 = 0x208;
    if (*(int *)((int)in_ECX + 8) != 0) {
      iVar9 = *(int *)((int)in_ECX + 8);
    }
  }
  if (iVar9 < 0xad) {
    iVar9 = 0xac;
  }
  recovered_10006250(&local_24,(int)in_ECX);
  if (in_ECX == (void *)0x0) {
    local_30 = 0x1d0;
  }
  else {
    iVar1 = *(int *)((int)in_ECX + 8);
    iVar8 = 0xac;
    if (0xac < iVar1) {
      iVar8 = iVar1;
    }
    local_30 = 0x1d0;
    if (iVar1 != 0) {
      local_30 = iVar8 - 0x38;
    }
  }
  iVar1 = iVar9 + -0x8e;
  if (*(char *)((int)in_ECX + 0x345) == '\0') {
    uVar10 = iVar9 - 0x3fU;
    if (iVar9 - 0x3fU < local_30 + 0xe) {
      uVar10 = local_30 + 0xe;
    }
    uVar2 = 0;
    pf_app_terror_ui_scrollbar_capture((void *)((int)in_ECX + 0x348),in_ECX,0xf,0x3f,0xc,uVar10 - 0x3f);
  }
  uVar10 = 0x20;
  if (*(uint *)((int)in_ECX + 0x340) < 0x20) {
    uVar10 = *(uint *)((int)in_ECX + 0x340);
  }
  uVar5 = (uVar10 * -0x40 + 0xc00) * uVar10 * 0x20 * uVar10 * 0x20;
  uVar6 = (uVar5 + 0x80000 >> 0x14) * 10 + 0x200 >> 10;
  uVar10 = uVar6 + 2;
  uVar3 = thunk_terror_ui_colour(5);
  local_50 = CONCAT11((char)(uVar3 >> 8),(char)(uVar3 >> 0x10));
  uVar11 = CONCAT22(CONCAT11(uVar2,(char)uVar3),local_50);
  recovered_10006760((int)in_ECX,0xf,0x4f,uVar10,iVar1,uVar11);
  uVar12 = (undefined1)((uint)uVar11 >> 0x18);
  uVar3 = thunk_terror_ui_colour(8);
  local_50 = CONCAT11((char)(uVar3 >> 8),(char)(uVar3 >> 0x10));
  uVar2 = (undefined1)uVar3;
  uVar11 = CONCAT22(CONCAT11(uVar12,uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,0x4f,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,iVar9 - 0x40,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,0x4f,1,iVar1,uVar11);
  uVar3 = uVar6 + 0x10;
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,uVar3,0x4f,1,iVar1,uVar11);
  uVar2 = (undefined1)((uint)uVar11 >> 0x18);
  if (0 < local_18) {
    uVar5 = (uint)(0x337ffff < uVar5);
    uVar4 = thunk_terror_ui_colour(6);
    local_50 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
    uVar11 = CONCAT22(CONCAT11(uVar2,(char)uVar4),local_50);
    recovered_10006760((int)in_ECX,local_24 + uVar5,local_20 + uVar5,uVar10 + uVar5 * -2,
                       local_18 + uVar5 * -2,uVar11);
    uVar12 = (undefined1)((uint)uVar11 >> 0x18);
    uVar5 = thunk_terror_ui_colour(9);
    local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
    uVar2 = (undefined1)uVar5;
    uVar11 = CONCAT22(CONCAT11(uVar12,uVar2),local_50);
    recovered_10006760((int)in_ECX,local_24,local_20,uVar10,1,uVar11);
    uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
    recovered_10006760((int)in_ECX,local_24,local_18 + -1 + local_20,uVar10,1,uVar11);
    uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
    recovered_10006760((int)in_ECX,local_24,local_20,1,local_18,uVar11);
    uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
    recovered_10006760((int)in_ECX,uVar6 + 1 + local_24,local_20,1,local_18,uVar11);
    uVar2 = (undefined1)((uint)uVar11 >> 0x18);
  }
  uVar5 = thunk_terror_ui_colour(7);
  local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  uVar11 = CONCAT22(CONCAT11(uVar2,(char)uVar5),local_50);
  recovered_10006760((int)in_ECX,0xf,0x3f,uVar10,0xe,uVar11);
  uVar12 = (undefined1)((uint)uVar11 >> 0x18);
  uVar5 = thunk_terror_ui_colour(10);
  local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  uVar2 = (undefined1)uVar5;
  uVar11 = CONCAT22(CONCAT11(uVar12,uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,0x3f,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,0x4c,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,0x3f,1,0xe,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,uVar3,0x3f,1,0xe,uVar11);
  uVar4 = thunk_terror_ui_colour(0xb);
  local_50 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  in_EDX = (uVar10 >> 1) + 0xf;
  uVar6 = uVar6 + 3 >> 1;
  uVar5 = 4;
  if (uVar6 < 4) {
    uVar5 = uVar6;
  }
  iVar9 = 1;
  uVar7 = 0x42;
  do {
    uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),(char)uVar4),local_50);
    recovered_10006760((int)in_ECX,in_EDX,uVar7,iVar9,1,uVar11);
    uVar2 = (undefined1)((uint)uVar11 >> 0x18);
    in_EDX = in_EDX - 1;
    iVar9 = iVar9 + 2;
    iVar1 = (1 - uVar5) + uVar7;
    uVar7 = uVar7 + 1;
  } while (iVar1 != 0x42);
  uVar5 = thunk_terror_ui_colour(7);
  local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  uVar11 = CONCAT22(CONCAT11(uVar2,(char)uVar5),local_50);
  recovered_10006760((int)in_ECX,0xf,local_30,uVar10,0xe,uVar11);
  uVar12 = (undefined1)((uint)uVar11 >> 0x18);
  uVar5 = thunk_terror_ui_colour(10);
  local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  uVar2 = (undefined1)uVar5;
  uVar11 = CONCAT22(CONCAT11(uVar12,uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,local_30,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,local_30 + 0xd,uVar10,1,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,0xf,local_30,1,0xe,uVar11);
  uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),uVar2),local_50);
  recovered_10006760((int)in_ECX,uVar3,local_30,1,0xe,uVar11);
  uVar5 = thunk_terror_ui_colour(0xb);
  local_50 = CONCAT11((char)(uVar5 >> 8),(char)(uVar5 >> 0x10));
  uVar3 = 4;
  if (uVar6 < 4) {
    uVar3 = uVar6;
  }
  iVar9 = uVar3 * 2 + -1;
  local_30 = local_30 + 5;
  uVar10 = ((uVar10 >> 1) - uVar3) + 0x10;
  do {
    uVar11 = CONCAT22(CONCAT11((char)((uint)uVar11 >> 0x18),(char)uVar5),local_50);
    recovered_10006760((int)in_ECX,uVar10,local_30,iVar9,1,uVar11);
    iVar9 = iVar9 + -2;
    local_30 = local_30 + 1;
    uVar10 = uVar10 + 1;
  } while (iVar9 != -1);
  return;
}

#undef local_50
#undef local_30
#undef local_24
#undef local_20
#undef local_18
#undef in_stack_ffffff9c

#undef DAT_00000004
#define DAT_00000004 (*(uint8_t *)(0x4U))
#undef DAT_0000037c
#define DAT_0000037c (*(uint8_t *)(0x37cU))
#undef DAT_00000384
#define DAT_00000384 (*(uint8_t *)(0x384U))
#undef DAT_00000388
#define DAT_00000388 (*(uint8_t *)(0x388U))
#undef DAT_10006ed1
#define DAT_10006ed1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef DAT_10006f9b
#define DAT_10006f9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x372U)))
#undef DAT_10006f9e
#define DAT_10006f9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x375U)))
#undef _DAT_00000004
#define _DAT_00000004 (*(int *)(0x4U))
#undef _DAT_0000037c
#define _DAT_0000037c (*(char * *)(0x37cU))
#undef _DAT_00000384
#define _DAT_00000384 (*(uint *)(0x384U))
#undef _DAT_00000388
#define _DAT_00000388 (*(uint *)(0x388U))
#undef str_10006fa3
#define str_10006fa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#define local_100 (*(uint *)(pf_stack_frame + 48))
#define local_fc (*(uint *)(pf_stack_frame + 52))
#define local_f8 (*(undefined2 *)(pf_stack_frame + 56))
#define local_f0 (*(uint *)(pf_stack_frame + 64))
#define local_ec (*(uint *)(pf_stack_frame + 68))
#define local_e8 (*(uint *)(pf_stack_frame + 72))
#define local_e0 (*(uint *)(pf_stack_frame + 80))
#define local_dc (*(int * *)(pf_stack_frame + 84))
#define local_d8 (*(uint *)(pf_stack_frame + 88))
#define local_d4 (*(int *)(pf_stack_frame + 92))
#define local_d0 (*(uint *)(pf_stack_frame + 96))
#define local_cc (*(int *)(pf_stack_frame + 100))
#define local_c8 (*(uint *)(pf_stack_frame + 104))
#define local_c4 (*(int *)(pf_stack_frame + 108))
#define local_bc (*(uint *)(pf_stack_frame + 116))
#define local_a8 (*(undefined2 *)(pf_stack_frame + 136))
#define local_a6 (*(char *)(pf_stack_frame + 138))
#define local_a5 (*(char *)(pf_stack_frame + 139))
#define local_a4 (*(char *)(pf_stack_frame + 140))
#define in_stack_fffffeec (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003410(void *in_ECX)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar13;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  bool bVar20;
  undefined1 uVar23;
  uint uVar21;
  uint uVar22;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;

  uVar13 = (undefined1)((uint)in_stack_fffffeec >> 0x18);
  if (in_ECX == (void *)0x0) {
    iVar5 = 800;
    iVar26 = 0x208;
  }
  else {
    iVar5 = 800;
    if (*(int *)((int)in_ECX + 4) != 0) {
      iVar5 = *(int *)((int)in_ECX + 4);
    }
    iVar26 = 0x208;
    if (*(int *)((int)in_ECX + 8) != 0) {
      iVar26 = *(int *)((int)in_ECX + 8);
    }
  }
  uVar4 = thunk_terror_ui_colour(0);
  local_a8 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  local_a6 = (char)uVar4;
  uVar29 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
  recovered_10006760((int)in_ECX,0,0,iVar5,iVar26,uVar29);
  uVar13 = (undefined1)((uint)uVar29 >> 0x18);
  if (in_ECX == (void *)0x0) {
    iVar5 = 800;
    iVar26 = _DAT_00000004;
  }
  else {
    iVar26 = *(int *)((int)in_ECX + 4);
    iVar5 = 800;
    if (iVar26 != 0) {
      iVar5 = iVar26;
    }
  }
  iVar8 = 0xa2;
  if (0xa2 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = 6;
  if (0 < *(int *)((int)in_ECX + 0x374)) {
    iVar5 = *(int *)((int)in_ECX + 0x374);
  }
  iVar5 = (iVar8 + -0x5a) / iVar5;
  if (iVar26 == 0) {
    iVar26 = 800;
  }
  pcVar16 = (char *)((int)in_ECX + 0x390);
  if (*(char *)((int)in_ECX + 0x6538) != '\0') {
    pcVar16 = (char *)((int)in_ECX + 0x3415);
  }
  uVar4 = thunk_terror_ui_colour(0x2d);
  local_a8 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  local_a6 = (char)uVar4;
  uVar29 = CONCAT13(uVar13,CONCAT12(local_a6,local_a8));
  recovered_10006760((int)in_ECX,0,0,iVar26,0x3a,uVar29);
  uVar13 = (undefined1)((uint)uVar29 >> 0x18);
  iVar26 = *(int *)((int)in_ECX + 4);
  if (iVar26 == 0) {
    iVar26 = 800;
  }
  uVar4 = thunk_terror_ui_colour(3);
  local_a8 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  local_a6 = (char)uVar4;
  uVar29 = CONCAT13(uVar13,CONCAT12(local_a6,local_a8));
  recovered_10006760((int)in_ECX,0,0x39,iVar26,1,uVar29);
  uVar13 = (undefined1)((uint)uVar29 >> 0x18);
  uVar4 = thunk_terror_ui_colour(1);
  local_a8 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
  local_a6 = (char)uVar4;
  iVar26 = 1;
  if (1 < iVar5) {
    iVar26 = iVar5;
  }
  uVar4 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
  recovered_10006940((int)in_ECX,0xc,0x12,((uintptr_t)pf_module_state + 0x36dU),4,uVar4);
  uVar13 = (undefined1)(uVar4 >> 0x18);
  uVar4 = 2;
  if (*(char *)((int)in_ECX + 0x6538) != '\0') {
    uVar4 = 0x1f;
  }
  uVar6 = thunk_terror_ui_colour(uVar4);
  uVar4 = *(uint *)((int)in_ECX + 4);
  iVar5 = *(int *)((int)in_ECX + 8);
  if (uVar4 == 0) {
    uVar4 = 800;
  }
  uVar21 = 0x48;
  if ((int)uVar4 < 0x48) {
    uVar21 = uVar4;
  }
  if (iVar5 == 0) {
    iVar5 = 0x208;
  }
  uVar11 = iVar8 - 10;
  if ((int)uVar11 < (int)uVar4) {
    uVar4 = uVar11;
  }
  iVar25 = 0x27;
  if (iVar5 < 0x27) {
    iVar25 = iVar5;
  }
  if (0xf < iVar5) {
    local_100 = 0xf;
    do {
      if (0x48 < (int)uVar4) {
        uVar17 = uVar21;
        do {
          if ((in_ECX != (void *)0x0) && (-1 < (int)uVar17 && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar5 = *(int *)((int)in_ECX + 4);
            iVar24 = iVar5;
            if (iVar5 == 0) {
              iVar24 = 800;
            }
            if ((int)uVar17 < iVar24) {
              iVar24 = *(int *)((int)in_ECX + 8);
              if (iVar24 == 0) {
                iVar24 = 0x208;
              }
              if ((int)local_100 < iVar24) {
                iVar24 = iVar5 * 4;
                if (iVar5 == 0) {
                  iVar24 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar24 = *(int *)((int)in_ECX + 0xc);
                }
                iVar24 = iVar24 * local_100;
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar24 + uVar17 * 4) =
                     (char)(uVar6 >> 0x10);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar24 + 1 + uVar17 * 4) =
                     (char)(uVar6 >> 8);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar24 + 2 + uVar17 * 4) = (char)uVar6;
                *(undefined1 *)(iVar24 + *(int *)((int)in_ECX + 0x370) + 3 + uVar17 * 4) = 0xff;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar4 != uVar17);
      }
      local_100 = local_100 + 1;
    } while (local_100 != iVar25);
  }
  uVar17 = thunk_terror_ui_colour(*(byte *)((int)in_ECX + 0x6538) + 3);
  uVar4 = *(uint *)((int)in_ECX + 4);
  uVar6 = *(uint *)((int)in_ECX + 8);
  uVar21 = 800;
  if (uVar4 != 0) {
    uVar21 = uVar4;
  }
  uVar22 = uVar21;
  if ((int)uVar11 < (int)uVar21) {
    uVar22 = uVar11;
  }
  uVar14 = (undefined1)uVar17;
  uVar23 = (undefined1)(uVar17 >> 8);
  uVar19 = (undefined1)(uVar17 >> 0x10);
  if (uVar6 == 0 || 0xf < (int)uVar6) {
    if (0x48 < (int)uVar22) {
      uVar4 = 0x48;
      if ((int)uVar21 < 0x48) {
        uVar4 = uVar21;
      }
      do {
        while (in_ECX == (void *)0x0) {
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar22) {
            iVar5 = 0x32a;
            if (iVar8 < 0x32a) {
              iVar5 = iVar8;
            }
            iVar25 = 10;
            if (10 < iVar5) {
              iVar25 = iVar5;
            }
            local_fc = iVar25 - 10;
            local_f0 = 0x48;
            local_100 = 0x26;
            goto LAB_10003963;
          }
        }
        if (-1 < (int)uVar4 && *(int *)((int)in_ECX + 0x370) != 0) {
          iVar5 = *(int *)((int)in_ECX + 4);
          iVar25 = iVar5;
          if (iVar5 == 0) {
            iVar25 = 800;
          }
          if (((int)uVar4 < iVar25) &&
             (*(int *)((int)in_ECX + 8) == 0 || 0xf < *(int *)((int)in_ECX + 8))) {
            iVar25 = iVar5 * 4;
            if (iVar5 == 0) {
              iVar25 = 0xc80;
            }
            if (*(int *)((int)in_ECX + 0xc) != 0) {
              iVar25 = *(int *)((int)in_ECX + 0xc);
            }
            iVar5 = iVar25 * 0xf + (uintptr_t)uVar4 * 4;
            *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar5) = uVar19;
            *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + 1 + iVar5) = uVar23;
            *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + 2 + iVar5) = uVar14;
            *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + 3 + iVar5) = 0xff;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar22);
    }
    uVar4 = *(uint *)((int)in_ECX + 4);
    uVar6 = *(uint *)((int)in_ECX + 8);
  }
  local_fc = 800;
  if (uVar4 != 0) {
    local_fc = uVar4;
  }
  local_f0 = 0x48;
  if ((int)local_fc < 0x48) {
    local_f0 = local_fc;
  }
  uVar4 = 0x208;
  if (uVar6 != 0) {
    uVar4 = uVar6;
  }
  local_100 = 0x26;
  if ((int)uVar4 < 0x26) {
    local_100 = uVar4;
  }
  if ((int)uVar11 < (int)local_fc) {
    local_fc = uVar11;
  }
  if ((int)uVar4 < 0x27) {
LAB_10003a23:
    uVar4 = 800;
    if (*(uint *)((int)in_ECX + 4) != 0) {
      uVar4 = *(uint *)((int)in_ECX + 4);
    }
    local_100 = 0x48;
    if ((int)uVar4 < 0x48) {
      local_100 = uVar4;
    }
    uVar6 = 0x208;
    if (*(uint *)((int)in_ECX + 8) != 0) {
      uVar6 = *(uint *)((int)in_ECX + 8);
    }
    local_fc = 0x49;
    if ((int)uVar4 < 0x49) {
      local_fc = uVar4;
    }
    local_f0 = 0x27;
    if ((int)uVar6 < 0x27) {
      local_f0 = uVar6;
    }
    uVar4 = 0xf;
    if ((int)uVar6 < 0xf) {
      uVar4 = uVar6;
    }
    if (0xf < (int)uVar6) goto LAB_10003abb;
LAB_10003b95:
    local_fc = 800;
    if (*(uint *)((int)in_ECX + 4) != 0) {
      local_fc = *(uint *)((int)in_ECX + 4);
    }
    local_f0 = iVar8 - 0xbU;
    if ((int)local_fc <= (int)(iVar8 - 0xbU)) {
      local_f0 = local_fc;
    }
    uVar4 = 0x208;
    if (*(uint *)((int)in_ECX + 8) != 0) {
      uVar4 = *(uint *)((int)in_ECX + 8);
    }
    local_100 = 0xf;
    if ((int)uVar4 < 0xf) {
      local_100 = uVar4;
    }
    if ((int)uVar11 < (int)local_fc) {
      local_fc = uVar11;
    }
    local_ec = 0x27;
    if ((int)uVar4 < 0x27) {
      local_ec = uVar4;
    }
    if (0xf < (int)uVar4) goto LAB_10003eb3;
  }
  else {
LAB_10003963:
    do {
      if ((int)local_f0 < (int)local_fc) {
        uVar4 = local_f0;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar4 | local_100) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar5 = *(int *)((int)in_ECX + 4);
            iVar25 = iVar5;
            if (iVar5 == 0) {
              iVar25 = 800;
            }
            if ((int)uVar4 < iVar25) {
              iVar25 = *(int *)((int)in_ECX + 8);
              if (iVar25 == 0) {
                iVar25 = 0x208;
              }
              if ((int)local_100 < iVar25) {
                iVar25 = iVar5 * 4;
                if (iVar5 == 0) {
                  iVar25 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar25 = *(int *)((int)in_ECX + 0xc);
                }
                iVar25 = iVar25 * local_100;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + (uintptr_t)uVar4 * 4) = uVar19;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 1 + (uintptr_t)uVar4 * 4) = uVar23;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 2 + (uintptr_t)uVar4 * 4) = uVar14;
                *(undefined1 *)(iVar25 + *(int *)((int)in_ECX + 0x370) + 3 + (uintptr_t)uVar4 * 4) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (local_fc != uVar4);
      }
      local_100 = local_100 + 1;
    } while (local_100 != 0x27);
    if (in_ECX != (void *)0x0) goto LAB_10003a23;
    local_fc = 0x49;
    local_100 = 0x48;
    uVar4 = 0xf;
    local_f0 = 0x27;
LAB_10003abb:
    do {
      if ((int)local_100 < (int)local_fc) {
        uVar6 = local_100;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar6 | uVar4) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar5 = *(int *)((int)in_ECX + 4);
            iVar25 = iVar5;
            if (iVar5 == 0) {
              iVar25 = 800;
            }
            if ((int)uVar6 < iVar25) {
              iVar25 = *(int *)((int)in_ECX + 8);
              if (iVar25 == 0) {
                iVar25 = 0x208;
              }
              if ((int)uVar4 < iVar25) {
                iVar25 = iVar5 * 4;
                if (iVar5 == 0) {
                  iVar25 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar25 = *(int *)((int)in_ECX + 0xc);
                }
                iVar25 = iVar25 * uVar4;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + (uintptr_t)uVar6 * 4) = uVar19;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 1 + (uintptr_t)uVar6 * 4) = uVar23;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 2 + (uintptr_t)uVar6 * 4) = uVar14;
                *(undefined1 *)(iVar25 + *(int *)((int)in_ECX + 0x370) + 3 + (uintptr_t)uVar6 * 4) = 0xff;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (local_fc != uVar6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_f0);
    if (in_ECX != (void *)0x0) goto LAB_10003b95;
    uVar4 = 800;
    if ((int)(iVar8 - 0xbU) < 800) {
      uVar4 = iVar8 - 0xbU;
    }
    local_f0 = 0;
    if (0 < (int)uVar4) {
      local_f0 = uVar4;
    }
    iVar5 = 0x32a;
    if (iVar8 < 0x32a) {
      iVar5 = iVar8;
    }
    iVar25 = 10;
    if (10 < iVar5) {
      iVar25 = iVar5;
    }
    local_fc = iVar25 - 10;
    local_100 = 0xf;
    local_ec = 0x27;
LAB_10003eb3:
    do {
      if ((int)local_f0 < (int)local_fc) {
        uVar4 = local_f0;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar4 | local_100) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar5 = *(int *)((int)in_ECX + 4);
            iVar25 = iVar5;
            if (iVar5 == 0) {
              iVar25 = 800;
            }
            if ((int)uVar4 < iVar25) {
              iVar25 = *(int *)((int)in_ECX + 8);
              if (iVar25 == 0) {
                iVar25 = 0x208;
              }
              if ((int)local_100 < iVar25) {
                iVar25 = iVar5 * 4;
                if (iVar5 == 0) {
                  iVar25 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar25 = *(int *)((int)in_ECX + 0xc);
                }
                iVar25 = iVar25 * local_100;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + (uintptr_t)uVar4 * 4) = uVar19;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 1 + (uintptr_t)uVar4 * 4) = uVar23;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar25 + 2 + (uintptr_t)uVar4 * 4) = uVar14;
                *(undefined1 *)(iVar25 + *(int *)((int)in_ECX + 0x370) + 3 + (uintptr_t)uVar4 * 4) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (local_fc != uVar4);
      }
      local_100 = local_100 + 1;
    } while (local_100 != local_ec);
  }
  uVar7 = thunk_strlen(pcVar16);
  iVar5 = *(int *)((int)in_ECX + 0x64a0);
  if (iVar5 < (int)uVar7) {
    iVar25 = 0x16;
    if (0 < *(int *)((int)in_ECX + 0x378)) {
      iVar25 = (0x18 - *(int *)((int)in_ECX + 0x378)) / 2 + 0xf;
    }
    uVar4 = thunk_terror_ui_colour(1);
    local_a8 = CONCAT11((char)(uVar4 >> 8),(char)(uVar4 >> 0x10));
    local_a6 = (char)uVar4;
    iVar24 = 0;
    do {
      if ((pcVar16 + iVar5)[iVar24] == '\0') goto LAB_10003c6d;
      iVar24 = iVar24 + 1;
    } while (iVar26 != iVar24);
    iVar24 = iVar26;
LAB_10003c6d:
    uVar4 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
    recovered_10006940((int)in_ECX,0x4c,iVar25,(int)(pcVar16 + iVar5),iVar24,uVar4);
    uVar13 = (undefined1)(uVar4 >> 0x18);
  }
  if ((*(char *)((int)in_ECX + 0x6538) == '\x01') && ((*(byte *)((int)in_ECX + 0x6529) & 0x10) == 0)
     ) {
    iVar26 = 6;
    if (0 < *(int *)((int)in_ECX + 0x374)) {
      iVar26 = *(int *)((int)in_ECX + 0x374);
    }
    iVar26 = iVar26 * (*(int *)((int)in_ECX + 0x649c) - *(int *)((int)in_ECX + 0x64a0));
    if ((iVar26 < 0) || (iVar5 = iVar26 + 0x4c, iVar8 + -0xd <= iVar5)) goto LAB_10003f78;
    uVar4 = thunk_terror_ui_colour(4);
    iVar8 = *(int *)((int)in_ECX + 4);
    iVar25 = *(int *)((int)in_ECX + 8);
    if (iVar8 == 0) {
      iVar8 = 800;
    }
    iVar24 = iVar8;
    if (iVar5 < iVar8) {
      iVar24 = iVar5;
    }
    if (iVar25 == 0) {
      iVar25 = 0x208;
    }
    iVar27 = iVar26 + 0x4e;
    if (iVar8 <= iVar26 + 0x4e) {
      iVar27 = iVar8;
    }
    iVar26 = 0x23;
    if (iVar25 < 0x23) {
      iVar26 = iVar25;
    }
    if (iVar25 < 0x14) goto LAB_10003f78;
    local_100 = 0x13;
    do {
      if (iVar5 < iVar8) {
        iVar25 = iVar24;
        do {
          if ((in_ECX != (void *)0x0) && (-1 < iVar25 && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar1 = *(int *)((int)in_ECX + 4);
            iVar9 = iVar1;
            if (iVar1 == 0) {
              iVar9 = 800;
            }
            if (iVar25 < iVar9) {
              iVar9 = *(int *)((int)in_ECX + 8);
              if (iVar9 == 0) {
                iVar9 = 0x208;
              }
              if ((int)local_100 < iVar9) {
                iVar9 = iVar1 * 4;
                if (iVar1 == 0) {
                  iVar9 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar9 = *(int *)((int)in_ECX + 0xc);
                }
                iVar9 = iVar9 * local_100;
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar9 + iVar25 * 4) =
                     (char)(uVar4 >> 0x10);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar9 + 1 + iVar25 * 4) =
                     (char)(uVar4 >> 8);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar9 + 2 + iVar25 * 4) = (char)uVar4;
                *(undefined1 *)(iVar9 + *(int *)((int)in_ECX + 0x370) + 3 + iVar25 * 4) = 0xff;
              }
            }
          }
          iVar25 = iVar25 + 1;
        } while (iVar27 != iVar25);
      }
      local_100 = local_100 + 1;
    } while (local_100 != iVar26);
    if (in_ECX != (void *)0x0) goto LAB_10003f78;
    uVar4 = _DAT_00000388;
    if (_DAT_0000037c != (char *)0x0) {
      local_c8 = 0x77;
      local_c4 = 0x2cb;
      local_cc = 0x30c;
      local_d4 = 0x1ac;
      local_d0 = 0x20;
      local_e0 = 1;
      local_dc = (int *)&DAT_0000037c;
      uVar6 = _DAT_00000384;
      pcVar16 = _DAT_0000037c;
      goto LAB_1000407c;
    }
    local_dc = (int *)&DAT_0000037c;
    local_e0 = 1;
    local_d0 = 0x20;
    local_d4 = 0x1ac;
    local_cc = 0x30c;
    local_c4 = 0x2cb;
    local_c8 = 0x77;
LAB_100040de:
    local_d8 = 0;
LAB_100040e6:
    uVar6 = 0;
LAB_100040e8:
    local_bc = 0x7fffffff;
    if (uVar4 - uVar6 < 0x7fffffff) {
      local_bc = uVar4 - uVar6;
    }
LAB_100040f9:
    if (in_ECX != (void *)0x0) {
      uVar6 = *(uint *)((int)in_ECX + 900);
      uVar21 = *(uint *)((int)in_ECX + 0x38c);
      uVar11 = uVar6;
      if (uVar21 < uVar6) {
        uVar11 = uVar21;
      }
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      if (uVar11 != uVar6) {
        uVar4 = uVar6;
        if (uVar21 < uVar6) {
          uVar4 = uVar11;
          uVar11 = uVar6;
        }
        bVar2 = true;
        goto LAB_1000414c;
      }
    }
  }
  else {
LAB_10003f78:
    iVar26 = *(int *)((int)in_ECX + 4);
    iVar5 = *(int *)((int)in_ECX + 8);
    iVar8 = 0xac;
    if (0xac < iVar5) {
      iVar8 = iVar5;
    }
    local_cc = 0x30c;
    if (iVar26 != 0) {
      local_cc = iVar26 + -0x14;
    }
    local_c4 = 0x2cb;
    if (iVar26 != 0) {
      local_c4 = iVar26 + -0x55;
    }
    local_d4 = 0x1ac;
    if (iVar5 != 0) {
      local_d4 = iVar8 + -0x5c;
    }
    local_d0 = 0x1a0;
    if (iVar5 != 0) {
      local_d0 = iVar8 - 0x68;
    }
    if (*(int *)((int)in_ECX + 0x378) < 1) {
      local_d0 = local_d0 / 0xd;
    }
    else {
      local_d0 = local_d0 / (*(int *)((int)in_ECX + 0x378) + 3U);
      local_d0 = local_d0 + (local_d0 == 0);
    }
    pcVar16 = *(char **)((int)in_ECX + 0x37c);
    iVar26 = 6;
    if (0 < *(int *)((int)in_ECX + 0x374)) {
      iVar26 = *(int *)((int)in_ECX + 0x374);
    }
    local_c8 = local_c4 / iVar26;
    if ((int)local_c8 < 2) {
      local_c8 = 1;
    }
    local_dc = (int *)((int)in_ECX + 0x37c);
    if (pcVar16 == (char *)0x0) {
      local_e0 = 1;
      uVar4 = *(uint *)((int)in_ECX + 0x388);
      goto LAB_100040de;
    }
    local_e0 = 1;
    uVar6 = *(uint *)((int)in_ECX + 900);
    if (uVar6 != 0) {
      pcVar10 = pcVar16;
      uVar4 = uVar6;
      do {
        local_e0 = local_e0 + (local_e0 != 0x7fffffff && *pcVar10 == '\n');
        pcVar10 = pcVar10 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = *(uint *)((int)in_ECX + 0x388);
LAB_1000407c:
    if (uVar4 <= uVar6) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) goto LAB_100040de;
    local_d8 = 0;
    pcVar10 = pcVar16;
    uVar21 = uVar6;
    do {
      local_d8 = (local_d8 != 0x7fffffff && *pcVar10 == '\n') + local_d8;
      pcVar10 = pcVar10 + 1;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
    if (in_ECX != (void *)0x0) {
      do {
        if (pcVar16[uVar6 - 1] == '\n') {
          local_bc = 0;
          if (uVar4 < uVar6) goto LAB_100040f9;
          goto LAB_100040e8;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      goto LAB_100040e6;
    }
    local_bc = 0;
  }
  uVar11 = 0;
  uVar4 = 0;
  bVar2 = false;
LAB_1000414c:
  uVar6 = thunk_terror_ui_colour(0x1f);
  local_a8 = CONCAT11((char)(uVar6 >> 8),(char)(uVar6 >> 0x10));
  local_a6 = (char)uVar6;
  uVar29 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
  recovered_10006760((int)in_ECX,10,0x3a,local_cc,local_d4,uVar29);
  uVar19 = (undefined1)((uint)uVar29 >> 0x18);
  uVar6 = thunk_terror_ui_colour(3);
  uVar14 = (undefined1)(uVar6 >> 0x10);
  uVar13 = (undefined1)(uVar6 >> 8);
  local_a8 = CONCAT11(uVar13,uVar14);
  cVar3 = (char)uVar6;
  uVar29 = CONCAT22(CONCAT11(uVar19,cVar3),local_a8);
  local_a6 = cVar3;
  recovered_10006760((int)in_ECX,10,0x3a,local_cc,1,uVar29);
  uVar6 = local_d4 + 0x39;
  uVar29 = CONCAT22(CONCAT11((char)((uint)uVar29 >> 0x18),local_a6),local_a8);
  recovered_10006760((int)in_ECX,10,uVar6,local_cc,1,uVar29);
  if (in_ECX == (void *)0x0) {
    uVar17 = 0x208;
    uVar21 = 0x3a;
    local_fc = 0xb;
    uVar22 = 10;
  }
  else {
    uVar12 = 800;
    if (*(uint *)((int)in_ECX + 4) != 0) {
      uVar12 = *(uint *)((int)in_ECX + 4);
    }
    uVar22 = 10;
    if ((int)uVar12 < 10) {
      uVar22 = uVar12;
    }
    uVar17 = 0x208;
    if (*(uint *)((int)in_ECX + 8) != 0) {
      uVar17 = *(uint *)((int)in_ECX + 8);
    }
    uVar21 = 0x3a;
    if ((int)uVar17 < 0x3a) {
      uVar21 = uVar17;
    }
    local_fc = 0xb;
    if ((int)uVar12 < 0xb) {
      local_fc = uVar12;
    }
  }
  if ((int)(local_d4 + 0x3aU) < (int)uVar17) {
    uVar17 = local_d4 + 0x3aU;
  }
  if ((int)uVar21 < (int)uVar17) {
    do {
      if ((int)uVar22 < (int)local_fc) {
        uVar12 = uVar22;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar12 | uVar21) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar26 = *(int *)((int)in_ECX + 4);
            iVar5 = iVar26;
            if (iVar26 == 0) {
              iVar5 = 800;
            }
            if ((int)uVar12 < iVar5) {
              iVar5 = *(int *)((int)in_ECX + 8);
              if (iVar5 == 0) {
                iVar5 = 0x208;
              }
              if ((int)uVar21 < iVar5) {
                iVar5 = iVar26 * 4;
                if (iVar26 == 0) {
                  iVar5 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar5 = *(int *)((int)in_ECX + 0xc);
                }
                iVar5 = iVar5 * uVar21;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar5 + uVar12 * 4) = uVar14;
                *(undefined1 *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 1 + uVar12 * 4) = uVar13;
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 2 + uVar12 * 4) = cVar3;
                *(undefined1 *)(iVar5 + *(int *)((int)in_ECX + 0x370) + 3 + uVar12 * 4) = 0xff;
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (local_fc != uVar12);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar17);
  }
  uVar17 = CONCAT22(CONCAT11((char)((uint)uVar29 >> 0x18),local_a6),local_a8);
  recovered_10006760((int)in_ECX,local_cc + 9,0x3a,1,local_d4,uVar17);
  uVar21 = thunk_terror_ui_colour(0x2a);
  if (in_ECX == (void *)0x0) {
    uVar22 = 0x208;
    local_100 = 0x3b;
    local_e8 = 0x17;
    local_fc = 0x40;
  }
  else {
    uVar12 = 800;
    if (*(uint *)((int)in_ECX + 4) != 0) {
      uVar12 = *(uint *)((int)in_ECX + 4);
    }
    local_e8 = 0x17;
    if ((int)uVar12 < 0x17) {
      local_e8 = uVar12;
    }
    uVar22 = 0x208;
    if (*(uint *)((int)in_ECX + 8) != 0) {
      uVar22 = *(uint *)((int)in_ECX + 8);
    }
    local_100 = 0x3b;
    if ((int)uVar22 < 0x3b) {
      local_100 = uVar22;
    }
    local_fc = 0x40;
    if ((int)uVar12 < 0x40) {
      local_fc = uVar12;
    }
  }
  if ((int)uVar6 < (int)uVar22) {
    uVar22 = uVar6;
  }
  if ((int)local_100 < (int)uVar22) {
    do {
      if ((int)local_e8 < (int)local_fc) {
        uVar12 = local_e8;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar12 | local_100) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar26 = *(int *)((int)in_ECX + 4);
            iVar5 = iVar26;
            if (iVar26 == 0) {
              iVar5 = 800;
            }
            if ((int)uVar12 < iVar5) {
              iVar5 = *(int *)((int)in_ECX + 8);
              if (iVar5 == 0) {
                iVar5 = 0x208;
              }
              if ((int)local_100 < iVar5) {
                iVar5 = iVar26 * 4;
                if (iVar26 == 0) {
                  iVar5 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar5 = *(int *)((int)in_ECX + 0xc);
                }
                iVar5 = iVar5 * local_100;
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + uVar12 * 4) =
                     (char)(uVar21 >> 0x10);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 1 + uVar12 * 4) =
                     (char)(uVar21 >> 8);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 2 + uVar12 * 4) = (char)uVar21;
                *(undefined1 *)(iVar5 + *(int *)((int)in_ECX + 0x370) + 3 + uVar12 * 4) = 0xff;
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (local_fc != uVar12);
      }
      local_100 = local_100 + 1;
    } while (local_100 != uVar22);
  }
  uVar21 = thunk_terror_ui_colour(0x15);
  if (in_ECX == (void *)0x0) {
    uVar22 = 0x208;
    local_100 = 0x3b;
    local_e8 = 0x40;
    local_fc = 0x41;
  }
  else {
    uVar12 = 800;
    if (*(uint *)((int)in_ECX + 4) != 0) {
      uVar12 = *(uint *)((int)in_ECX + 4);
    }
    local_e8 = 0x40;
    if ((int)uVar12 < 0x40) {
      local_e8 = uVar12;
    }
    uVar22 = 0x208;
    if (*(uint *)((int)in_ECX + 8) != 0) {
      uVar22 = *(uint *)((int)in_ECX + 8);
    }
    local_100 = 0x3b;
    if ((int)uVar22 < 0x3b) {
      local_100 = uVar22;
    }
    local_fc = 0x41;
    if ((int)uVar12 < 0x41) {
      local_fc = uVar12;
    }
  }
  if ((int)uVar6 < (int)uVar22) {
    uVar22 = uVar6;
  }
  if ((int)local_100 < (int)uVar22) {
    do {
      if ((int)local_e8 < (int)local_fc) {
        uVar6 = local_e8;
        do {
          if ((in_ECX != (void *)0x0) &&
             (-1 < (int)(uVar6 | local_100) && *(int *)((int)in_ECX + 0x370) != 0)) {
            iVar26 = *(int *)((int)in_ECX + 4);
            iVar5 = iVar26;
            if (iVar26 == 0) {
              iVar5 = 800;
            }
            if ((int)uVar6 < iVar5) {
              iVar5 = *(int *)((int)in_ECX + 8);
              if (iVar5 == 0) {
                iVar5 = 0x208;
              }
              if ((int)local_100 < iVar5) {
                iVar5 = iVar26 * 4;
                if (iVar26 == 0) {
                  iVar5 = 0xc80;
                }
                if (*(int *)((int)in_ECX + 0xc) != 0) {
                  iVar5 = *(int *)((int)in_ECX + 0xc);
                }
                iVar5 = iVar5 * local_100;
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + (uintptr_t)uVar6 * 4) =
                     (char)(uVar21 >> 0x10);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 1 + (uintptr_t)uVar6 * 4) =
                     (char)(uVar21 >> 8);
                *(char *)(*(int *)((int)in_ECX + 0x370) + iVar5 + 2 + (uintptr_t)uVar6 * 4) = (char)uVar21;
                *(undefined1 *)(iVar5 + *(int *)((int)in_ECX + 0x370) + 3 + (uintptr_t)uVar6 * 4) = 0xff;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (local_fc != uVar6);
      }
      local_100 = local_100 + 1;
    } while (local_100 != uVar22);
  }
  uVar6 = 0;
  do {
    uVar13 = (undefined1)(uVar17 >> 0x18);
    uVar21 = *(uint *)((int)in_ECX + 0x6530);
    uVar22 = uVar21 + uVar6;
    iVar5 = ((int)uVar21 >> 0x1f) + (uint)CARRY4(uVar21,uVar6);
    iVar26 = *(int *)((int)in_ECX + 0x378) + 3;
    if (*(int *)((int)in_ECX + 0x378) < 1) {
      iVar26 = 0xd;
    }
    iVar8 = iVar5 - ((int)local_e0 >> 0x1f);
    if ((SBORROW4(iVar5,(int)local_e0 >> 0x1f) != SBORROW4(iVar8,(uint)(uVar22 < local_e0))) ==
        (int)(iVar8 - (uint)(uVar22 < local_e0)) < 0) break;
    iVar5 = iVar26 * uVar6;
    if ((local_d8 == uVar22) && (*(char *)((int)in_ECX + 0x6538) == '\0')) {
      uVar21 = thunk_terror_ui_colour(0x2c);
      local_f8 = CONCAT11((char)(uVar21 >> 8),(char)(uVar21 >> 0x10));
      recovered_10006760((int)in_ECX,0x41,iVar5 + 0x3f,local_c4,iVar26,
                         CONCAT22(CONCAT11(uVar13,(char)uVar21),local_f8));
    }
    uVar21 = uVar22 + 1;
    thunk_snprintf((char *)&local_a8,0x10,&DAT_10006f9b,uVar21);
    uVar13 = (undefined1)(uVar21 >> 0x18);
    uVar21 = thunk_terror_ui_colour(0x31);
    local_f8 = CONCAT11((char)(uVar21 >> 8),(char)(uVar21 >> 0x10));
    if ((char)local_a8 == '\0') {
      iVar26 = 0;
    }
    else if (PF_PART1(local_a8, 1) == '\0') {
      iVar26 = 1;
    }
    else if (local_a6 == '\0') {
      iVar26 = 2;
    }
    else if (local_a5 == '\0') {
      iVar26 = 3;
    }
    else {
      iVar26 = 5 - (uint)(local_a4 == '\0');
    }
    uVar17 = CONCAT22(CONCAT11(uVar13,(char)uVar21),local_f8);
    recovered_10006940((int)in_ECX,0x1c,iVar5 + 0x40,(int)&local_a8,iVar26,uVar17);
    uVar13 = (undefined1)(uVar17 >> 0x18);
    iVar26 = *local_dc;
    if (((int)uVar22 < 1) || (iVar26 == 0)) {
      if (iVar26 == 0) goto LAB_10004920;
      uVar12 = *(uint *)((int)in_ECX + 900);
      uVar21 = 0;
      uVar28 = uVar21;
      if (uVar12 != 0) {
LAB_100048d4:
        uVar22 = uVar21;
        do {
          uVar28 = uVar22;
          if (*(char *)(iVar26 + uVar22) == '\n') break;
          uVar22 = uVar22 + 1;
          uVar28 = uVar12;
        } while (uVar12 != uVar22);
      }
    }
    else {
      uVar12 = *(uint *)((int)in_ECX + 900);
      if (uVar12 == 0) {
LAB_10004920:
        uVar21 = 0;
LAB_10004922:
        uVar28 = 0;
      }
      else {
        uVar18 = 0;
        uVar15 = 0;
        do {
          if ((*(char *)(iVar26 + uVar15) == '\n') && (uVar18 = uVar18 + 1, uVar18 == uVar22)) {
            uVar21 = uVar15 + 1;
            if (uVar12 <= uVar15) goto LAB_10004922;
            uVar28 = uVar21;
            if (uVar21 < uVar12) goto LAB_100048d4;
            break;
          }
          uVar15 = uVar15 + 1;
          uVar21 = uVar12;
          uVar28 = uVar12;
        } while (uVar12 != uVar15);
      }
    }
    if (bVar2) {
      uVar22 = uVar21;
      if (uVar21 < uVar4) {
        uVar22 = uVar4;
      }
      uVar12 = uVar28;
      if (uVar11 < uVar28) {
        uVar12 = uVar11;
      }
      if (uVar28 < *(uint *)((int)in_ECX + 900)) {
        bVar20 = (uVar28 < uVar11 && uVar4 <= uVar28) && *(char *)(iVar26 + uVar28) == '\n';
      }
      else {
        bVar20 = false;
      }
      if ((uVar22 < uVar12) || (bVar20)) {
        uVar22 = uVar22 - uVar21;
        uVar15 = 0x7fffffff;
        if (uVar22 < 0x7fffffff) {
          uVar15 = uVar22;
        }
        uVar12 = uVar12 - uVar21;
        uVar18 = 0x7fffffff;
        if (uVar12 < 0x7fffffff) {
          uVar18 = uVar12;
        }
        if (bVar20 && uVar18 <= uVar22) {
          if (0x7ffffffd < uVar22) {
            uVar22 = 0x7ffffffe;
          }
          uVar18 = uVar22 + 1;
        }
        else if (bVar20) {
          if (0x7ffffffd < uVar12) {
            uVar12 = 0x7ffffffe;
          }
          uVar18 = uVar12 + 1;
        }
        uVar22 = *(uint *)((int)in_ECX + 0x6534);
        if ((int)uVar15 <= (int)uVar22) {
          uVar15 = uVar22;
        }
        uVar12 = uVar22 + local_c8;
        iVar26 = ((int)uVar22 >> 0x1f) + (uint)CARRY4(uVar22,local_c8);
        if ((int)(uint)(uVar12 < 0x7fffffff) <= iVar26) {
          uVar12 = 0x7fffffff;
          iVar26 = 0;
        }
        if (iVar26 < 0) {
          uVar12 = 0;
        }
        if (uVar18 < uVar12) {
          uVar12 = uVar18;
        }
        if (uVar15 <= uVar12 && uVar12 - uVar15 != 0) {
          iVar26 = *(int *)((int)in_ECX + 0x374);
          if (iVar26 < 1) {
            iVar26 = 6;
          }
          iVar8 = *(int *)((int)in_ECX + 0x378) + 3;
          if (*(int *)((int)in_ECX + 0x378) < 1) {
            iVar8 = 0xd;
          }
          uVar17 = thunk_terror_ui_colour(0x2b);
          local_f8 = CONCAT11((char)(uVar17 >> 8),(char)(uVar17 >> 0x10));
          uVar17 = CONCAT22(CONCAT11(uVar13,(char)uVar17),local_f8);
          recovered_10006760((int)in_ECX,(uVar15 - uVar22) * iVar26 + 0x41,iVar5 + 0x3f,
                             iVar26 * (uVar12 - uVar15),iVar8,uVar17);
        }
      }
    }
    uVar13 = (undefined1)(uVar17 >> 0x18);
    if (*(uint *)((int)in_ECX + 0x6534) < uVar28 - uVar21) {
      iVar26 = *(uint *)((int)in_ECX + 0x6534) + uVar21;
      uVar28 = uVar28 - iVar26;
      if (0x7ffffffe < uVar28) {
        uVar28 = 0x7fffffff;
      }
      if ((int)local_c8 < (int)uVar28) {
        uVar28 = local_c8;
      }
      iVar8 = *local_dc;
      uVar21 = thunk_terror_ui_colour(1);
      local_f8 = CONCAT11((char)(uVar21 >> 8),(char)(uVar21 >> 0x10));
      uVar17 = CONCAT22(CONCAT11(uVar13,(char)uVar21),local_f8);
      recovered_10006940((int)in_ECX,0x41,iVar5 + 0x40,iVar26 + iVar8,uVar28,uVar17);
    }
    uVar13 = (undefined1)(uVar17 >> 0x18);
    uVar6 = uVar6 + 1;
  } while (uVar6 != local_d0);
  if (((*(char *)((int)in_ECX + 0x6538) == '\0') && ((*(byte *)((int)in_ECX + 0x6524) & 2) != 0)) &&
     ((*(byte *)((int)in_ECX + 0x6529) & 0x10) == 0)) {
    uVar4 = *(uint *)((int)in_ECX + 0x6530);
    if (((int)uVar4 <= (int)local_d8) &&
       (iVar5 = ((int)uVar4 >> 0x1f) + (uint)CARRY4(local_d0,uVar4),
       uVar6 = (uint)(local_d8 < local_d0 + uVar4), iVar26 = ((int)local_d8 >> 0x1f) - iVar5,
       (SBORROW4((int)local_d8 >> 0x1f,iVar5) != SBORROW4(iVar26,uVar6)) !=
       (int)(iVar26 - uVar6) < 0)) {
      uVar6 = *(uint *)((int)in_ECX + 0x6534);
      if (((int)uVar6 <= (int)local_bc) &&
         ((int)(uint)(local_c8 + uVar6 < local_bc) <=
          (int)(((int)uVar6 >> 0x1f) + (uint)CARRY4(local_c8,uVar6)))) {
        iVar26 = *(int *)((int)in_ECX + 0x378);
        iVar5 = 6;
        if (0 < *(int *)((int)in_ECX + 0x374)) {
          iVar5 = *(int *)((int)in_ECX + 0x374);
        }
        iVar8 = 0xd;
        if (0 < iVar26) {
          iVar8 = iVar26 + 3;
        }
        iVar25 = 0xc;
        if (0 < iVar26) {
          iVar25 = iVar26 + 2;
        }
        uVar21 = thunk_terror_ui_colour(4);
        local_a8 = CONCAT11((char)(uVar21 >> 8),(char)(uVar21 >> 0x10));
        local_a6 = (char)uVar21;
        uVar29 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
        recovered_10006760((int)in_ECX,iVar5 * (local_bc - uVar6) + 0x41,
                           iVar8 * (local_d8 - uVar4) + 0x3f,2,iVar25,uVar29);
        uVar13 = (undefined1)((uint)uVar29 >> 0x18);
      }
    }
  }
  recovered_10002cd0(in_ECX);
  uVar4 = 0x1f0;
  if (*(int *)((int)in_ECX + 8) != 0) {
    uVar4 = *(int *)((int)in_ECX + 8) - 0x18;
  }
  iVar26 = 800;
  if (*(int *)((int)in_ECX + 4) != 0) {
    iVar26 = *(int *)((int)in_ECX + 4);
  }
  uVar6 = thunk_terror_ui_colour(0x2d);
  local_a8 = CONCAT11((char)(uVar6 >> 8),(char)(uVar6 >> 0x10));
  local_a6 = (char)uVar6;
  uVar29 = CONCAT22(CONCAT11(uVar13,local_a6),local_a8);
  iVar5 = 0;
  recovered_10006760((int)in_ECX,0,uVar4,iVar26,0x18,uVar29);
  uVar13 = (undefined1)((uint)uVar29 >> 0x18);
  uVar6 = thunk_terror_ui_colour(3);
  local_a8 = CONCAT11((char)(uVar6 >> 8),(char)(uVar6 >> 0x10));
  local_a6 = (char)uVar6;
  recovered_10006760((int)in_ECX,0,uVar4,iVar26,1,CONCAT22(CONCAT11(uVar13,local_a6),local_a8));
  pcVar16 = &DAT_10006ed1;
  if (*(char *)((int)in_ECX + 0x653a) != '\0') {
    pcVar16 = str_10006fa3;
  }
  thunk_snprintf((char *)&local_a8,0x90,&DAT_10006f9e,pcVar16,(void *)((int)in_ECX + 0x64a4));
  uVar13 = (undefined1)((uint)pcVar16 >> 0x18);
  iVar8 = *(int *)((int)in_ECX + 0x378);
  iVar25 = 6;
  if (0 < *(int *)((int)in_ECX + 0x374)) {
    iVar25 = *(int *)((int)in_ECX + 0x374);
  }
  iVar25 = (iVar26 + -0x14) / iVar25;
  iVar26 = 1;
  if (1 < iVar25) {
    iVar26 = iVar25;
  }
  uVar6 = thunk_terror_ui_colour(0x31);
  local_f8 = CONCAT11((char)(uVar6 >> 8),(char)(uVar6 >> 0x10));
  do {
    if (*(char *)((int)&local_a8 + iVar5) == '\0') goto LAB_10004dee;
    iVar5 = iVar5 + 1;
  } while (iVar26 != iVar5);
  iVar5 = iVar26;
LAB_10004dee:
  if (iVar8 < 1) {
    iVar26 = 7;
  }
  else {
    iVar26 = (0x18 - iVar8) / 2;
  }
  recovered_10006940((int)in_ECX,10,iVar26 + uVar4,(int)&local_a8,iVar5,
                     CONCAT22(CONCAT11(uVar13,(char)uVar6),local_f8));
  return;
}

#undef DAT_00000004
#undef DAT_0000037c
#undef DAT_00000384
#undef DAT_00000388
#undef DAT_10006ed1
#undef DAT_10006f9b
#undef DAT_10006f9e
#undef _DAT_00000004
#undef _DAT_0000037c
#undef _DAT_00000384
#undef _DAT_00000388
#undef str_10006fa3
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_bc
#undef local_a8
#undef local_a6
#undef local_a5
#undef local_a4
#undef in_stack_fffffeec

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram00280a20
#define Ram00280a20 (*(uint32_t *)(0x280a20U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#define acStack_93 (*(char (*)[147])(pf_stack_frame + 29))
#define local_98 (*(char * *)(pf_stack_frame + 24))
#define local_94 (*(char *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

void recovered_10004ef0(int in_ECX,char *in_EDX,undefined1 *param_3)

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

  if (in_ECX < 0) {
    iVar6 = Ram00280800;
    in_ECX = -1;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
        (uVar8 = Ram00280808, 0xb < uVar8)) &&
       ((uVar8 = Ram00280808, 0xbf < uVar8 &&
        (pcVar1 = (code *)UINT_002808bc, pcVar1 != (code *)0x0)))) {
      in_ECX = (*pcVar1)();
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    iVar6 = Ram00280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
       ((uVar8 = Ram00280808, 0xb < uVar8 &&
        ((uVar8 = Ram00280808, 0x223 < uVar8 && (iVar6 = Ram00280a20, iVar6 != 0)))))) {
      pcVar1 = (code *)Ram00280a20;
      local_98 = in_EDX;
      iVar6 = (*pcVar1)(in_ECX,&local_94,0x80);
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
            if ((((9 < (byte)(cVar4 - 0x30U)) &&
                 (uVar5 = CONCAT11(cVar4,cVar4) & 0xdfff, cVar4 = (char)uVar5,
                 0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU))) && (cVar4 != '_')) && (cVar4 != '-')) {
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
                if (!bVar2) goto joined_r0x100050b5;
                uVar7 = uVar8;
                bVar2 = bVar3;
              }
              else {
                if (cVar4 == '\0') break;
                bVar3 = false;
joined_r0x100050b5:
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
#undef DAT_00280a20
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280a20
#undef UINT_002808bc
#undef acStack_93
#undef local_98
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
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e0
 */

void recovered_100050e0(void *in_ECX)

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
    (*pcVar3)(in_ECX);
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
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005130
 */

void * recovered_10005130(void *in_ECX,ulong in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x57 < uVar2 && (pcVar3 = (code *)UINT_00280854, pcVar3 != (code *)0x0))
     )) {
    pvVar4 = (*pcVar3)(in_ECX,in_EDX);
    return pvVar4;
  }
  return (void *)0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10006ecf
#define DAT_10006ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram00280a20
#define Ram00280a20 (*(uint32_t *)(0x280a20U))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005180
 */

bool recovered_10005180(char *in_ECX,int *in_EDX)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;

  bVar3 = in_EDX != (int *)0x0 && in_ECX != (char *)0x0;
  if (in_EDX == (int *)0x0 || in_ECX == (char *)0x0) {
    return bVar3;
  }
  *in_EDX = -1;
  cVar1 = *in_ECX;
  if (cVar1 != '[') {
    iVar6 = -1;
    goto LAB_100053b2;
  }
  uVar9 = 0;
  iVar4 = 1;
  pcVar7 = in_ECX;
  while( true ) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    if ((cVar1 == '\0') || (cVar1 == ']')) break;
    if (uVar9 + 1 < 0x80) {
      local_114[uVar9] = cVar1;
      uVar9 = uVar9 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  uVar5 = (uint)(cVar1 == ']');
  local_114[uVar9] = '\0';
  iVar6 = 0x7fffffff;
  if ((cVar1 == ']') && (iVar4 + 1U < 0x82)) {
    pcVar8 = local_114;
    if (local_114[0] == '[') {
      pcVar8 = local_114 + 1;
    }
    for (iVar4 = -0x7f;
        ((cVar1 = pcVar8[iVar4 + 0x7f], cVar1 != '\0' && (cVar1 != ']')) && (iVar4 != 0));
        iVar4 = iVar4 + 1) {
      local_114[iVar4 + 0xff] = cVar1;
    }
    local_114[iVar4 + 0xff] = '\0';
    iVar6 = 0x7fffffff;
    if (local_114[0] == '[') {
      if (cVar1 != ']') goto LAB_1000539d;
      cVar1 = local_114[iVar4 + 0x81];
    }
    if ((cVar1 == '\0') && (local_114[0x80] != 0)) {
      uVar9 = 1;
      iVar4 = 0;
      iVar6 = -0x7f;
      do {
        if (iVar6 == 0) goto LAB_10005325;
        if (local_114[0x80] == 0x5c) {
          if (iVar4 == 0) goto LAB_10005325;
          uVar9 = uVar9 + 1;
          iVar4 = 0;
          if (6 < uVar9) goto LAB_10005325;
        }
        else {
          if (((9 < (byte)(local_114[0x80] - 0x30U)) &&
              (0x19 < (byte)((local_114[0x80] & 0xdfU) + 0xbf))) &&
             ((local_114[0x80] != 0x5f && (local_114[0x80] != 0x2d)))) goto LAB_10005325;
          iVar4 = iVar4 + 1;
        }
        local_114[0x80] = local_114[iVar6 + 0x100];
        iVar6 = iVar6 + 1;
      } while (local_114[0x80] != 0);
      if (uVar9 < 2 || iVar4 == 0) {
LAB_10005325:
        iVar6 = 0x7fffffff;
      }
      else {
        iVar4 = Ram00280800;
        iVar6 = 0x7fffffff;
        if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
            (uVar9 = Ram00280808, 0xb < uVar9)) &&
           ((uVar9 = Ram00280808, 0x223 < uVar9 && (iVar4 = Ram00280a20, iVar4 != 0)))) {
          pcVar2 = (code *)Ram00280a20;
          iVar4 = (*pcVar2)(0xfffffffe,local_114 + 0x80,0x80);
          iVar6 = 0x7fffffff;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
        }
      }
    }
  }
LAB_1000539d:
  iVar4 = (pcVar7[uVar5] == '\\') + uVar5;
  in_ECX = pcVar7 + iVar4;
  cVar1 = pcVar7[iVar4];
LAB_100053b2:
  if (cVar1 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar9 = uVar5 + 1;
      *(char *)((int)(in_EDX + 1) + uVar5) = cVar1;
      if (0x3083 < uVar9) break;
      cVar1 = in_ECX[uVar5 + 1];
      uVar5 = uVar9;
    } while (cVar1 != '\0');
  }
  *(undefined1 *)((int)in_EDX + uVar9 + 4) = 0;
  *in_EDX = iVar6;
  if ((char)in_EDX[1] == '\0') {
    thunk_snprintf((char *)(in_EDX + 1),0x3085,&DAT_10006e52,&DAT_10006ecf);
  }
  return bVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef DAT_10006e52
#undef DAT_10006ecf
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280a20
#undef local_114

#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef str_10006ed2
#define str_10006ed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_10006edf
#define str_10006edf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

void recovered_10005420(int in_ECX,int in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *arg3;
  int iVar3;
  int iVar4;

  thunk_snprintf((char *)(in_ECX + 0x3415),0x3085,&DAT_10006e52,(void *)(in_ECX + 0x390));
  uVar1 = thunk_strlen((char *)(in_ECX + 0x3415));
  *(ulong *)(in_ECX + 0x649c) = uVar1;
  *(undefined4 *)(in_ECX + 0x64a0) = 0;
  *(undefined1 *)(in_ECX + 0x6538) = 1;
  *(char *)(in_ECX + 0x6539) = (char)in_EDX;
  arg3 = str_10006edf;
  if (in_EDX != 0) {
    arg3 = str_10006ed2;
  }
  thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,arg3);
  iVar4 = *(int *)(in_ECX + 4);
  iVar3 = 0xa2;
  if (0xa2 < iVar4) {
    iVar3 = iVar4;
  }
  iVar2 = 0x2c6;
  if (iVar4 != 0) {
    iVar2 = iVar3 + -0x5a;
  }
  iVar4 = 6;
  if (0 < *(int *)(in_ECX + 0x374)) {
    iVar4 = *(int *)(in_ECX + 0x374);
  }
  iVar3 = 1;
  if (1 < iVar2 / iVar4) {
    iVar3 = iVar2 / iVar4;
  }
  iVar4 = *(int *)(in_ECX + 0x64a0);
  iVar2 = *(int *)(in_ECX + 0x649c);
  if (iVar4 <= iVar2) {
    if (iVar2 < iVar4 + iVar3) goto LAB_1000550f;
    iVar2 = (iVar2 - iVar3) + 1;
  }
  *(int *)(in_ECX + 0x64a0) = iVar2;
  iVar4 = iVar2;
LAB_1000550f:
  if (iVar4 < 0) {
    *(undefined4 *)(in_ECX + 0x64a0) = 0;
  }
  return;
}

#undef DAT_10006e52
#undef str_10006ed2
#undef str_10006edf

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
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
#undef str_10006ee9
#define str_10006ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c0U)))
#undef str_10006ef5
#define str_10006ef5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_10006f05
#define str_10006f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dcU)))
#define local_3120 (*(char (*)[12576])(pf_stack_frame + 48))
#define arg0 (*(char * *)(pf_stack_frame + 28))
#define local_30a0 (*(int *)(pf_stack_frame + 176))
#define local_309c (*(char (*)[12444])(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

undefined4 recovered_10005530(int in_ECX_00)

{
  unsigned char pf_stack_frame[12656] __attribute__((aligned(16))) = {0};

  char *in_ECX;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;

  if ((*(int *)(in_ECX_00 + 0x37c) == 0) || (*(char *)(in_ECX_00 + 0x390) == '\0')) {
    arg0 = str_10006ee9;
    goto LAB_100056d8;
  }
  in_ECX = (char *)(in_ECX_00 + 0x390);
  bVar2 = recovered_10005180(in_ECX,&local_30a0);
  if (bVar2) {
    iVar4 = Ram00280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) && (uVar3 = Ram00280808, 0xd3 < uVar3)) {
      pcVar1 = (code *)UINT_002808d0;
      if (pcVar1 != (code *)0x0) {
        uVar3 = (*pcVar1)(local_30a0,local_309c,*(void **)(in_ECX_00 + 0x37c),
                          *(uint *)(in_ECX_00 + 900));
LAB_1000564a:
        if (uVar3 != 0) {
          *(undefined1 *)(in_ECX_00 + 0x653a) = 0;
          recovered_10004ef0(local_30a0,local_309c,in_ECX);
          thunk_snprintf(local_3120,0x80,str_10006f05,in_ECX);
          iVar4 = thunk_snprintf((char *)(in_ECX_00 + 0x64a4),0x80,&DAT_10006e52,local_3120);
          return CONCAT31((int3)((uint)iVar4 >> 8),1);
        }
      }
    }
    else {
      iVar4 = Ram00280800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
         ((uVar3 = Ram00280808, 0xb < uVar3 &&
          ((uVar3 = Ram00280808, 0x3b < uVar3 &&
           (pcVar1 = (code *)UINT_00280838, pcVar1 != (code *)0x0)))))) {
        uVar3 = (*pcVar1)(local_309c,*(void **)(in_ECX_00 + 0x37c),*(uint *)(in_ECX_00 + 900));
        goto LAB_1000564a;
      }
    }
  }
  arg0 = local_3120;
  thunk_snprintf(arg0,0x80,str_10006ef5,in_ECX);
LAB_100056d8:
  thunk_snprintf((char *)(in_ECX_00 + 0x64a4),0x80,&DAT_10006e52,arg0);
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838
#undef UINT_002808d0
#undef str_10006ee9
#undef str_10006ef5
#undef str_10006f05
#undef local_3120
#undef arg0
#undef local_30a0
#undef local_309c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
#undef str_10006f0e
#define str_10006f0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_10006f1c
#define str_10006f1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10006f25
#define str_10006f25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

undefined4 recovered_100056f0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (in_ECX == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x37c) == 0) {
    return 0;
  }
  uVar3 = *(uint *)(in_ECX + 0x38c);
  uVar6 = *(uint *)(in_ECX + 900);
  uVar5 = uVar6;
  if (uVar3 < uVar6) {
    uVar5 = uVar3;
  }
  if (*(uint *)(in_ECX + 0x388) < uVar6) {
    uVar6 = *(uint *)(in_ECX + 0x388);
  }
  if (uVar5 != uVar6) {
    uVar7 = uVar5;
    uVar2 = uVar6;
    if (uVar3 < uVar6) {
      uVar7 = uVar6;
      uVar2 = uVar5;
    }
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
    uVar3 = uVar5 - uVar2;
    if (uVar5 < uVar2) {
      uVar3 = 0;
    }
    iVar4 = Ram00280800;
    if (((((iVar4 != 0x50414d57) || (iVar4 = Ram00280804, iVar4 == 0)) ||
         (uVar6 = Ram00280808, uVar6 < 0xc)) ||
        ((uVar6 = Ram00280808, uVar6 < 0x184 ||
         (pcVar1 = (code *)UINT_00280980, pcVar1 == (code *)0x0)))) ||
       (uVar3 = (*pcVar1)((char *)(*(int *)(in_ECX + 0x37c) + uVar2),uVar3), uVar3 == 0)) {
      thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,str_10006f25);
      return 0;
    }
    thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,str_10006f0e);
    iVar4 = *(int *)(in_ECX + 0x37c);
    if (uVar7 <= uVar2 || iVar4 == 0) {
      return 0;
    }
    uVar3 = *(uint *)(in_ECX + 900);
    if (uVar3 < uVar2) {
      return 0;
    }
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    if (uVar2 < uVar7) {
      thunk_memmove((void *)(iVar4 + uVar2),(void *)(iVar4 + uVar7),(uVar3 - uVar7) + 1);
      *(int *)(in_ECX + 900) = *(int *)(in_ECX + 900) + (uVar2 - uVar7);
      *(uint *)(in_ECX + 0x388) = uVar2;
      *(uint *)(in_ECX + 0x38c) = uVar2;
      *(undefined1 *)(in_ECX + 0x653a) = 1;
      return CONCAT31((int3)(uVar2 - uVar7 >> 8),1);
    }
    return 0;
  }
  recovered_10005980(in_ECX);
  iVar4 = *(int *)(in_ECX + 0x37c);
  uVar3 = *(uint *)(in_ECX + 900);
  if (iVar4 == 0) {
    uVar6 = 0;
LAB_100058d2:
    uVar5 = 0;
LAB_100058ef:
    if (uVar5 < uVar3) {
      uVar5 = uVar5 + (*(char *)(iVar4 + uVar5) == '\n');
      goto LAB_10005916;
    }
  }
  else {
    uVar6 = *(uint *)(in_ECX + 0x388);
    if (uVar3 <= *(uint *)(in_ECX + 0x388)) {
      uVar6 = uVar3;
    }
    for (; uVar5 = 0, uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*(char *)(iVar4 + -1 + uVar6) == '\n') {
        if (uVar3 < uVar6) goto LAB_100058d2;
        uVar5 = uVar6;
        break;
      }
    }
    uVar6 = uVar5;
    if (uVar3 <= uVar5) goto LAB_100058ef;
    do {
      if (*(char *)(iVar4 + uVar5) == '\n') goto LAB_100058ef;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
    uVar5 = uVar3;
  }
  if ((uVar3 == 0) && (uVar5 == uVar6)) {
    return 0;
  }
LAB_10005916:
  thunk_memmove((void *)(iVar4 + uVar6),(void *)(iVar4 + uVar5),(uVar3 - uVar5) + 1);
  uVar3 = (uVar6 - uVar5) + *(int *)(in_ECX + 900);
  *(uint *)(in_ECX + 900) = uVar3;
  if (uVar6 < uVar3) {
    uVar3 = uVar6;
  }
  *(uint *)(in_ECX + 0x388) = uVar3;
  *(uint *)(in_ECX + 0x38c) = uVar3;
  *(undefined1 *)(in_ECX + 0x653a) = 1;
  iVar4 = thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,str_10006f1c);
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280980
#undef str_10006f0e
#undef str_10006f1c
#undef str_10006f25

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
#undef str_10006f25
#define str_10006f25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_10006f31
#define str_10006f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#undef str_10006f42
#define str_10006f42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x319U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005980
 */

undefined4 recovered_10005980(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *arg3;
  uint uVar9;
  bool bVar10;

  if ((in_ECX == 0) || (iVar1 = *(int *)(in_ECX + 0x37c), iVar1 == 0)) {
    return 0;
  }
  uVar5 = *(uint *)(in_ECX + 0x38c);
  uVar6 = *(uint *)(in_ECX + 900);
  uVar9 = uVar6;
  if (uVar5 < uVar6) {
    uVar9 = uVar5;
  }
  uVar7 = *(uint *)(in_ECX + 0x388);
  if (uVar6 <= *(uint *)(in_ECX + 0x388)) {
    uVar7 = uVar6;
  }
  if (uVar9 == uVar7) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (*(char *)(iVar1 + -1 + uVar9) == '\n') {
        uVar5 = 0;
        if (uVar9 <= uVar6) goto LAB_100059e0;
        goto LAB_10005aa6;
      }
    }
    uVar9 = 0;
LAB_100059e0:
    uVar5 = uVar9;
    if (uVar9 < uVar6) {
      do {
        if (*(char *)(iVar1 + uVar5) == '\n') goto LAB_10005aa6;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
      uVar5 = uVar6;
    }
LAB_10005aa6:
    if (uVar6 < uVar9) {
      return 0;
    }
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
    }
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    uVar6 = uVar5 - uVar9;
    if (uVar5 < uVar9) {
      uVar6 = 0;
    }
    iVar2 = Ram00280800;
    if (((iVar2 != 0x50414d57) || (iVar2 = Ram00280804, iVar2 == 0)) ||
       ((uVar5 = Ram00280808, uVar5 < 0xc ||
        ((uVar5 = Ram00280808, uVar5 < 0x184 ||
         (pcVar3 = (code *)UINT_00280980, pcVar3 == (code *)0x0)))))) {
LAB_10005b2f:
      uVar8 = 0;
      arg3 = str_10006f25;
      goto LAB_10005b33;
    }
    uVar5 = (*pcVar3)((char *)(iVar1 + uVar9),uVar6);
    bVar10 = uVar5 == 0;
    uVar8 = CONCAT31((int3)((uint)pcVar3 >> 8),!bVar10);
    pcVar4 = str_10006f42;
  }
  else {
    uVar6 = uVar7;
    if (uVar5 < uVar7) {
      uVar6 = uVar9;
    }
    if (uVar9 < uVar7) {
      uVar9 = uVar7;
    }
    uVar5 = uVar9 - uVar6;
    if (uVar9 < uVar6) {
      uVar5 = 0;
    }
    iVar2 = Ram00280800;
    if ((((iVar2 != 0x50414d57) || (iVar2 = Ram00280804, iVar2 == 0)) ||
        (uVar9 = Ram00280808, uVar9 < 0xc)) ||
       ((uVar9 = Ram00280808, uVar9 < 0x184 ||
        (pcVar3 = (code *)UINT_00280980, pcVar3 == (code *)0x0)))) goto LAB_10005b2f;
    uVar5 = (*pcVar3)((char *)(iVar1 + uVar6),uVar5);
    bVar10 = uVar5 == 0;
    uVar8 = CONCAT31((int3)((uint)pcVar3 >> 8),!bVar10);
    pcVar4 = str_10006f31;
  }
  arg3 = str_10006f25;
  if (!bVar10) {
    arg3 = pcVar4;
  }
LAB_10005b33:
  thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,arg3);
  return uVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280980
#undef str_10006f25
#undef str_10006f31
#undef str_10006f42

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10006e52
#define DAT_10006e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
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
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UINT_00280988
#define UINT_00280988 (*(uint *)(0x280988U))
#undef str_10006f4e
#define str_10006f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x325U)))
#undef str_10006f5b
#define str_10006f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x332U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

undefined4 recovered_10005b60(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *outText;
  undefined4 uVar4;
  code *pcVar5;
  undefined3 uVar6;
  char *arg3;

  iVar1 = Ram00280800;
  uVar3 = 0;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x18b < uVar2 && (pcVar5 = (code *)UINT_00280988, pcVar5 != (code *)0x0)
      ))) {
    uVar3 = (*pcVar5)();
  }
  if (((in_ECX == 0) || (uVar3 == 0 || *(int *)(in_ECX + 0x37c) == 0)) ||
     (*(int *)(in_ECX + 0x380) == 0)) {
    return 0;
  }
  arg3 = str_10006f4e;
  if (((((uVar3 == 0xffffffff) || (iVar1 = Ram00280800, iVar1 != 0x50414d57)) ||
       (iVar1 = Ram00280804, iVar1 == 0)) ||
      ((uVar2 = Ram00280808, uVar2 < 0xc || (uVar2 = Ram00280808, uVar2 < 0x50)))) ||
     (pcVar5 = (code *)UINT_0028084c, pcVar5 == (code *)0x0)) {
LAB_10005d96:
    uVar4 = 0;
  }
  else {
    outText = (*pcVar5)(uVar3 + 1);
    if (outText == (char *)0x0) {
      uVar4 = 0;
      goto LAB_10005d98;
    }
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar2 = Ram00280808, 0xb < uVar2 && (uVar2 = Ram00280808, 0x187 < uVar2)))) {
      pcVar5 = (code *)UINT_00280984;
      if (((pcVar5 == (code *)0x0) || (uVar3 = (*pcVar5)(outText,uVar3 + 1), uVar3 == 0)) ||
         (uVar4 = recovered_10005dd0(in_ECX,outText,uVar3), (char)uVar4 == '\0')) goto LAB_10005d48;
      iVar1 = Ram00280800;
      uVar6 = (undefined3)(uVar3 >> 8);
      uVar4 = CONCAT31(uVar6,1);
      arg3 = str_10006f5b;
      if (((iVar1 != 0x50414d57) || (iVar1 = Ram00280804, iVar1 == 0)) ||
         ((uVar3 = Ram00280808, uVar3 < 0xc || (uVar3 = Ram00280808, uVar3 < 0x54))))
      goto LAB_10005d98;
      pcVar5 = (code *)UINT_00280850;
      uVar4 = CONCAT31(uVar6,1);
      arg3 = str_10006f5b;
    }
    else {
      *outText = '\0';
LAB_10005d48:
      iVar1 = Ram00280800;
      if (((iVar1 != 0x50414d57) || (iVar1 = Ram00280804, iVar1 == 0)) ||
         ((uVar3 = Ram00280808, uVar3 < 0xc || (uVar3 = Ram00280808, uVar3 < 0x54))))
      goto LAB_10005d96;
      pcVar5 = (code *)UINT_00280850;
      arg3 = str_10006f4e;
      uVar4 = 0;
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(outText);
    }
  }
LAB_10005d98:
  thunk_snprintf((char *)(in_ECX + 0x64a4),0x80,&DAT_10006e52,arg3);
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10006e52
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280984
#undef UINT_00280988
#undef str_10006f4e
#undef str_10006f5b

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
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dd0
 */

undefined4 recovered_10005dd0(int in_ECX,void *in_EDX,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *ptr;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if (in_ECX == 0) {
    return 0;
  }
  ptr = *(void **)(in_ECX + 0x37c);
  if (in_EDX == (void *)0x0 || ptr == (void *)0x0) {
    return 0;
  }
  uVar6 = *(uint *)(in_ECX + 0x38c);
  uVar1 = *(uint *)(in_ECX + 900);
  uVar9 = uVar1;
  if (uVar6 < uVar1) {
    uVar9 = uVar6;
  }
  uVar10 = *(uint *)(in_ECX + 0x388);
  if (uVar1 <= *(uint *)(in_ECX + 0x388)) {
    uVar10 = uVar1;
  }
  uVar5 = uVar9;
  uVar8 = uVar10;
  if (uVar6 < uVar10) {
    uVar5 = uVar10;
    uVar8 = uVar9;
  }
  iVar7 = uVar5 - uVar8;
  if (uVar9 == uVar10) {
    uVar5 = 0;
    uVar8 = 0;
    iVar7 = 0;
  }
  uVar6 = (uVar1 - iVar7) + param_3;
  if (CARRY4(uVar1 - iVar7,param_3)) {
    return 0;
  }
  if (uVar6 == 0xffffffff) {
LAB_10005ffb:
    uVar4 = 0;
    goto LAB_10005ffd;
  }
  uVar1 = *(uint *)(in_ECX + 0x380);
  if (uVar6 < uVar1) {
    if (iVar7 != 0) goto LAB_10005e7e;
LAB_10005f8f:
    iVar7 = *(int *)(in_ECX + 900);
    uVar8 = *(uint *)(in_ECX + 0x388);
  }
  else {
    uVar9 = 0x400;
    if (uVar1 != 0) {
      uVar9 = uVar1;
    }
    if (uVar9 <= uVar6) {
      do {
        bVar11 = (int)uVar9 < 0;
        uVar9 = uVar9 * 2;
        if (bVar11) {
          uVar9 = uVar6 + 1;
        }
      } while (uVar9 <= uVar6);
    }
    iVar2 = Ram00280800;
    if ((((iVar2 != 0x50414d57) || (iVar2 = Ram00280804, iVar2 == 0)) ||
        (uVar6 = Ram00280808, uVar6 < 0xc)) ||
       (((uVar6 = Ram00280808, uVar6 < 0x58 ||
         (pcVar3 = (code *)UINT_00280854, pcVar3 == (code *)0x0)) ||
        (ptr = (*pcVar3)(ptr,uVar9), ptr == (void *)0x0)))) goto LAB_10005ffb;
    *(void **)(in_ECX + 0x37c) = ptr;
    *(uint *)(in_ECX + 0x380) = uVar9;
    if (iVar7 == 0) goto LAB_10005f8f;
LAB_10005e7e:
    thunk_memmove((void *)((int)ptr + uVar8),(void *)((int)ptr + uVar5),
                       (*(int *)(in_ECX + 900) - uVar5) + 1);
    ptr = *(void **)(in_ECX + 0x37c);
    iVar7 = *(int *)(in_ECX + 900) - iVar7;
    *(int *)(in_ECX + 900) = iVar7;
    *(uint *)(in_ECX + 0x388) = uVar8;
    *(uint *)(in_ECX + 0x38c) = uVar8;
  }
  thunk_memmove((void *)((int)((int)ptr + uVar8) + param_3),(void *)((int)ptr + uVar8),
                     (iVar7 - uVar8) + 1);
  thunk_memcpy((void *)(*(int *)(in_ECX + 0x37c) + *(int *)(in_ECX + 0x388)),in_EDX,param_3);
  iVar7 = *(int *)(in_ECX + 0x388) + param_3;
  *(int *)(in_ECX + 0x388) = iVar7;
  *(int *)(in_ECX + 900) = *(int *)(in_ECX + 900) + param_3;
  *(int *)(in_ECX + 0x38c) = iVar7;
  *(undefined1 *)(in_ECX + 0x653a) = 1;
  uVar4 = CONCAT31((int3)((uint)iVar7 >> 8),1);
LAB_10005ffd:
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006010
 */

bool recovered_10006010(int in_ECX,int in_EDX,uint param_3,char param_4,char param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  iVar1 = *(int *)(in_ECX + 8);
  iVar10 = 0xac;
  if (0xac < iVar1) {
    iVar10 = iVar1;
  }
  iVar4 = 0x30c;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar4 = *(int *)(in_ECX + 4) + -0x14;
  }
  iVar6 = 0x208;
  if (iVar1 != 0) {
    iVar6 = iVar10;
  }
  iVar1 = *(int *)(in_ECX + 0x388);
  iVar10 = *(int *)(in_ECX + 0x38c);
  if (param_5 == '\0') {
    if (in_EDX < 0x41) {
      return false;
    }
    if ((int)param_3 < 0x40) {
      return false;
    }
    if (iVar4 <= in_EDX) {
      return false;
    }
    uVar5 = param_3;
    if (iVar6 - 0x28U <= param_3) {
      return false;
    }
  }
  else {
    iVar7 = iVar4 + -1;
    if (in_EDX < iVar4 + -1) {
      iVar7 = in_EDX;
    }
    bVar12 = 0x40 < in_EDX;
    in_EDX = 0x41;
    if (bVar12) {
      in_EDX = iVar7;
    }
    uVar2 = iVar6 - 0x29U;
    if (param_3 < iVar6 - 0x29U) {
      uVar2 = param_3;
    }
    uVar5 = 0x40;
    if (0x3f < (int)param_3) {
      uVar5 = uVar2;
    }
  }
  iVar4 = 0xd;
  if (0 < *(int *)(in_ECX + 0x378)) {
    iVar4 = *(int *)(in_ECX + 0x378) + 3;
  }
  uVar2 = (int)(uVar5 - 0x40) / iVar4;
  uVar5 = *(uint *)(in_ECX + 0x6530);
  uVar8 = uVar5 + uVar2;
  iVar4 = ((int)uVar2 >> 0x1f) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar5,uVar2);
  if ((int)(uint)(uVar8 < 0x7fffffff) <= iVar4) {
    iVar4 = 0;
    uVar8 = 0x7fffffff;
  }
  if (iVar4 < 0) {
    uVar8 = 0;
  }
  uVar5 = *(uint *)(in_ECX + 0x6534);
  iVar4 = 6;
  if (0 < *(int *)(in_ECX + 0x374)) {
    iVar4 = *(int *)(in_ECX + 0x374);
  }
  uVar2 = (in_EDX + -0x41) / iVar4;
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  uVar3 = uVar2 + uVar5;
  iVar4 = ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar4) {
    uVar3 = 0x7fffffff;
    iVar4 = 0;
  }
  if (iVar4 < 0) {
    uVar3 = 0;
  }
  iVar4 = *(int *)(in_ECX + 0x37c);
  if ((iVar4 == 0) || (uVar8 == 0)) {
    uVar2 = 0;
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar2 = *(uint *)(in_ECX + 900);
      uVar5 = 0;
      if (uVar2 == 0) {
LAB_100061af:
        uVar2 = uVar5;
      }
      else {
LAB_100061cd:
        uVar8 = uVar5;
        do {
          if (*(char *)(iVar4 + uVar8) == '\n') {
            uVar2 = uVar8;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      }
    }
  }
  else {
    uVar9 = *(uint *)(in_ECX + 900);
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      uVar11 = 0;
      do {
        uVar2 = uVar9;
        if ((*(char *)(iVar4 + uVar11) == '\n') && (uVar5 = uVar5 + 1, uVar5 == uVar8)) {
          uVar5 = uVar11 + 1;
          if (uVar11 < uVar9) {
            if (uVar9 <= uVar5) goto LAB_100061af;
            goto LAB_100061cd;
          }
          uVar9 = uVar5;
          uVar2 = 0;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
      uVar5 = uVar9;
    }
  }
  uVar8 = 0x7fffffff;
  if (uVar2 - uVar5 < 0x7fffffff) {
    uVar8 = uVar2 - uVar5;
  }
  if ((int)uVar3 < (int)uVar8) {
    uVar8 = uVar3;
  }
  *(uint *)(in_ECX + 0x388) = uVar8 + uVar5;
  *(undefined1 *)(in_ECX + 0x6538) = 0;
  if (param_4 == '\0') {
    *(uint *)(in_ECX + 0x38c) = uVar8 + uVar5;
  }
  recovered_10002a70(in_ECX);
  bVar12 = true;
  if (*(int *)(in_ECX + 0x388) == iVar1) {
    bVar12 = *(int *)(in_ECX + 0x38c) != iVar10;
  }
  return bVar12;
}


#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006250
 */

void recovered_10006250(undefined4 *in_ECX,int in_EDX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;

  if (in_EDX == 0) {
    uVar1 = 0x1a0;
    iVar2 = 1;
    local_1c = 0x17a;
    local_28 = 0x20;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(in_EDX + 8);
    iVar4 = 0xac;
    if (0xac < iVar7) {
      iVar4 = iVar7;
    }
    local_1c = 0x17a;
    if (iVar7 != 0) {
      local_1c = iVar4 + -0x8e;
    }
    pcVar5 = *(char **)(in_EDX + 0x37c);
    iVar2 = 1;
    if ((pcVar5 != (char *)0x0) && (iVar6 = *(int *)(in_EDX + 900), iVar6 != 0)) {
      pcVar3 = pcVar5;
      do {
        iVar2 = iVar2 + (uint)(iVar2 != 0x7fffffff && *pcVar3 == '\n');
        pcVar3 = pcVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar1 = 0x1a0;
    if (iVar7 != 0) {
      uVar1 = iVar4 - 0x68;
    }
    iVar4 = *(int *)(in_EDX + 0x378);
    if (iVar4 < 1) {
      local_28 = uVar1 / 0xd;
    }
    else {
      local_28 = uVar1 / (iVar4 + 3U);
      local_28 = local_28 + (local_28 == 0);
    }
    iVar7 = 1;
    if (pcVar5 != (char *)0x0) {
      for (iVar6 = *(int *)(in_EDX + 900); iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar7 = iVar7 + (uint)(iVar7 != 0x7fffffff && *pcVar5 == '\n');
        pcVar5 = pcVar5 + 1;
      }
    }
    if (0 < iVar4) goto LAB_10006377;
  }
  iVar4 = 10;
LAB_10006377:
  iVar6 = 0;
  uVar1 = uVar1 / (iVar4 + 3U);
  uVar8 = (iVar7 - uVar1) - (uint)(uVar1 == 0);
  uVar1 = 0;
  if (0 < (int)uVar8) {
    uVar1 = uVar8;
  }
  iVar7 = 0x4f;
  if ((int)local_28 < iVar2) {
    iVar2 = (int)(local_28 * local_1c) / iVar2;
    iVar7 = local_1c;
    if (iVar2 < local_1c) {
      iVar7 = iVar2;
    }
    iVar6 = 0x12;
    if (0x11 < iVar2) {
      iVar6 = iVar7;
    }
    if ((int)uVar8 < 1) {
      iVar7 = 0x4f;
    }
    else if (local_1c - iVar6 == 0 || local_1c < iVar6) {
      iVar7 = 0x4f;
    }
    else {
      lVar9 = thunk___divdi3((longlong)(local_1c - iVar6) * (longlong)*(int *)(in_EDX + 0x6530),
                                 (ulonglong)uVar1);
      iVar7 = (int)lVar9 + 0x4f;
    }
  }
  *in_ECX = 0xf;
  in_ECX[1] = iVar7;
  in_ECX[2] = 0xc;
  in_ECX[3] = iVar6;
  return;
}

#undef local_1c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006430
 */

void recovered_10006430(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  if (in_ECX != 0) {
    pcVar1 = *(char **)(in_ECX + 0x37c);
    iVar6 = 1;
    if (pcVar1 != (char *)0x0) {
      for (iVar3 = *(int *)(in_ECX + 900); iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar6 = iVar6 + (uint)(iVar6 != 0x7fffffff && *pcVar1 == '\n');
        pcVar1 = pcVar1 + 1;
      }
    }
    iVar3 = *(int *)(in_ECX + 8);
    iVar4 = 0xac;
    if (0xac < iVar3) {
      iVar4 = iVar3;
    }
    uVar2 = 0x1a0;
    if (iVar3 != 0) {
      uVar2 = iVar4 - 0x68;
    }
    uVar5 = 0xd;
    if (0 < *(int *)(in_ECX + 0x378)) {
      uVar5 = *(int *)(in_ECX + 0x378) + 3;
    }
    iVar6 = (iVar6 - uVar2 / uVar5) - (uint)(uVar2 / uVar5 == 0);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    iVar3 = *(int *)(in_ECX + 0x6530);
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
    if (iVar3 < 0) {
      iVar6 = 0;
    }
    *(int *)(in_ECX + 0x6530) = iVar6;
    if (*(int *)(in_ECX + 0x6534) < 0) {
      *(undefined4 *)(in_ECX + 0x6534) = 0;
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064f0
 */

undefined4 recovered_100064f0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (in_ECX == 0) {
    return 0;
  }
  uVar1 = *(uint *)(in_ECX + 0x38c);
  uVar2 = *(uint *)(in_ECX + 900);
  uVar3 = *(uint *)(in_ECX + 0x388);
  uVar6 = uVar2;
  if (uVar1 < uVar2) {
    uVar6 = uVar1;
  }
  uVar4 = uVar2;
  if (uVar3 < uVar2) {
    uVar4 = uVar3;
  }
  if (uVar6 == uVar4) {
    iVar5 = *(int *)(in_ECX + 0x37c);
  }
  else {
    uVar7 = uVar6;
    if (uVar1 < uVar4) {
      uVar7 = uVar4;
      uVar4 = uVar6;
    }
    iVar5 = *(int *)(in_ECX + 0x37c);
    if (uVar4 < uVar7 && iVar5 != 0) {
      thunk_memmove((void *)(uVar4 + iVar5),(void *)(iVar5 + uVar7),(uVar2 - uVar7) + 1);
      *(int *)(in_ECX + 900) = *(int *)(in_ECX + 900) + (uVar4 - uVar7);
      *(uint *)(in_ECX + 0x388) = uVar4;
      goto LAB_100065bb;
    }
  }
  if ((uVar2 < uVar3 || uVar2 - uVar3 == 0) || iVar5 == 0) {
    return 0;
  }
  thunk_memmove((void *)(iVar5 + uVar3),(void *)(iVar5 + 1 + uVar3),uVar2 - uVar3);
  *(int *)(in_ECX + 900) = *(int *)(in_ECX + 900) + -1;
  uVar4 = *(uint *)(in_ECX + 0x388);
LAB_100065bb:
  *(uint *)(in_ECX + 0x38c) = uVar4;
  *(undefined1 *)(in_ECX + 0x653a) = 1;
  return CONCAT31((int3)(uVar4 >> 8),1);
}


#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e0
 */

void recovered_100065e0(int in_ECX,char in_DL)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if (in_ECX == 0) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x37c);
  uVar2 = *(uint *)(in_ECX + 0x388);
  if (iVar1 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(in_ECX + 900);
    if (uVar2 < *(uint *)(in_ECX + 900)) {
      uVar3 = uVar2;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (*(char *)(iVar1 + -1 + uVar3) == '\n') {
          uVar4 = uVar3;
          goto LAB_10006636;
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar4 = 0;
    }
LAB_10006636:
    uVar3 = *(uint *)(in_ECX + 900);
    if (uVar2 < *(uint *)(in_ECX + 900)) {
      uVar3 = uVar2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (*(char *)(iVar1 + -1 + uVar3) == '\n') {
        local_14 = 0;
        if (uVar3 <= uVar2) goto LAB_1000665c;
        goto LAB_10006670;
      }
    }
    uVar3 = 0;
  }
LAB_1000665c:
  local_14 = 0x7fffffff;
  if (uVar2 - uVar3 < 0x7fffffff) {
    local_14 = uVar2 - uVar3;
  }
LAB_10006670:
  if (in_DL == '\0') {
    uVar2 = *(uint *)(in_ECX + 900);
    if (iVar1 == 0) {
      uVar4 = 1;
      uVar3 = 0;
      bVar5 = uVar2 == 0;
      uVar2 = 0;
      if (bVar5) goto LAB_1000674e;
    }
    else {
      uVar3 = 0;
      if ((uVar4 <= uVar2) && (uVar3 = uVar4, uVar4 < uVar2)) {
        do {
          uVar3 = uVar4;
          if (*(char *)(iVar1 + uVar4) == '\n') goto LAB_10006711;
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
        goto LAB_1000674e;
      }
LAB_10006711:
      if (uVar2 <= uVar3) goto LAB_1000674e;
      uVar4 = uVar3 + 1;
      uVar3 = uVar4;
      if (uVar4 < uVar2) {
        do {
          if (*(char *)(iVar1 + uVar3) == '\n') goto LAB_10006733;
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
        uVar3 = uVar2;
      }
    }
  }
  else {
    if (uVar4 == 0) {
      uVar2 = 0;
      goto LAB_1000674e;
    }
    do {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        if (iVar1 == 0) {
          uVar4 = 0;
          goto LAB_10006731;
        }
        break;
      }
    } while (*(char *)(iVar1 + -1 + uVar4) != '\n');
    uVar2 = *(uint *)(in_ECX + 900);
    if (uVar2 < uVar4) {
LAB_10006731:
      uVar3 = 0;
    }
    else {
      uVar3 = uVar4;
      if (uVar4 < uVar2) {
        do {
          if (*(char *)(iVar1 + uVar3) == '\n') goto LAB_10006733;
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
        uVar3 = uVar2;
      }
    }
  }
LAB_10006733:
  uVar2 = 0x7fffffff;
  if (uVar3 - uVar4 < 0x7fffffff) {
    uVar2 = uVar3 - uVar4;
  }
  if ((int)local_14 < (int)uVar2) {
    uVar2 = local_14;
  }
  uVar2 = uVar2 + uVar4;
LAB_1000674e:
  *(uint *)(in_ECX + 0x388) = uVar2;
  return;
}

#undef local_14

#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006760
 */

void recovered_10006760(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (in_ECX == 0) {
    local_1c = 800;
    if ((int)in_EDX < 800) {
      local_1c = in_EDX;
    }
    if ((int)local_1c < 1) {
      local_1c = 0;
    }
    uVar2 = 0x208;
    if ((int)param_3 < 0x208) {
      uVar2 = param_3;
    }
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
    uVar4 = param_4 + in_EDX;
    if (799 < (int)uVar4) {
      uVar4 = 800;
    }
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    uVar7 = 0x208;
  }
  else {
    uVar4 = 800;
    if (*(uint *)(in_ECX + 4) != 0) {
      uVar4 = *(uint *)(in_ECX + 4);
    }
    local_1c = uVar4;
    if ((int)in_EDX < (int)uVar4) {
      local_1c = in_EDX;
    }
    if ((int)in_EDX < 0) {
      local_1c = 0;
    }
    uVar7 = 0x208;
    if (*(uint *)(in_ECX + 8) != 0) {
      uVar7 = *(uint *)(in_ECX + 8);
    }
    uVar2 = uVar7;
    if ((int)param_3 < (int)uVar7) {
      uVar2 = param_3;
    }
    if ((int)param_3 < 0) {
      uVar2 = 0;
    }
    uVar6 = param_4 + in_EDX;
    if ((int)uVar6 < (int)uVar4) {
      uVar4 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
  }
  uVar6 = param_5 + param_3;
  if ((int)uVar6 < (int)uVar7) {
    uVar7 = uVar6;
  }
  uVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar3 = uVar7;
  }
  if ((int)uVar2 < (int)uVar3) {
    do {
      if ((int)local_1c < (int)uVar4) {
        uVar7 = local_1c;
        do {
          if ((in_ECX != 0) && (-1 < (int)(uVar7 | uVar2) && *(int *)(in_ECX + 0x370) != 0)) {
            iVar1 = *(int *)(in_ECX + 4);
            iVar5 = iVar1;
            if (iVar1 == 0) {
              iVar5 = 800;
            }
            if ((int)uVar7 < iVar5) {
              iVar5 = *(int *)(in_ECX + 8);
              if (iVar5 == 0) {
                iVar5 = 0x208;
              }
              if ((int)uVar2 < iVar5) {
                iVar5 = iVar1 * 4;
                if (iVar1 == 0) {
                  iVar5 = 0xc80;
                }
                if (*(int *)(in_ECX + 0xc) != 0) {
                  iVar5 = *(int *)(in_ECX + 0xc);
                }
                iVar5 = iVar5 * uVar2;
                *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar5 + uVar7 * 4) = (undefined1)param_6;
                *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar5 + 1 + uVar7 * 4) = PF_PART1(param_6, 1);
                *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar5 + 2 + uVar7 * 4) = PF_PART1(param_6, 2);
                *(undefined1 *)(iVar5 + *(int *)(in_ECX + 0x370) + 3 + uVar7 * 4) = 0xff;
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}

#undef local_1c

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
#define local_28 (*(int *)(pf_stack_frame + 56))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(int *)(pf_stack_frame + 72))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_2c (*(void * *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006940
 */

void recovered_10006940(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  if (0 < param_5 && param_4 != 0) {
    thunk_memset(&local_2c,0,0x18);
    iVar1 = Ram00280800;
    if (((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
         (uVar6 = Ram00280808, 0xb < uVar6)) &&
        ((uVar6 = Ram00280808, 0x17b < uVar6 &&
         (pcVar5 = (code *)UINT_00280978, pcVar5 != (code *)0x0)))) &&
       (uVar6 = (*pcVar5)((char *)param_4,param_5,1,
                          (param_6 >> 0x10 & 0xff) * 0x100 + 0xff +
                          ((param_6 >> 8 & 0xff) << 0x10 | param_6 << 0x18),&local_2c), uVar6 != 0))
    {
      if (((local_2c != (void *)0x0 || local_28 != 0) && local_2c != (void *)0x0) && local_28 == 0)
      {
        if (local_1c == 0) {
          local_28 = 0;
        }
        else {
          iVar1 = in_EDX * 4;
          uVar9 = 0;
          local_44 = param_3;
          uVar6 = local_20;
          do {
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              do {
                iVar7 = local_18 * uVar9;
                if ((*(char *)((int)local_2c + uVar6 * 4 + iVar7 + 3) != '\0') && (in_ECX != 0)) {
                  if (-1 < (int)(in_EDX + uVar6 | param_3 + uVar9) && *(int *)(in_ECX + 0x370) != 0)
                  {
                    iVar4 = *(int *)(in_ECX + 4);
                    iVar8 = iVar4;
                    if (iVar4 == 0) {
                      iVar8 = 800;
                    }
                    if ((int)(in_EDX + uVar6) < iVar8) {
                      iVar8 = *(int *)(in_ECX + 8);
                      if (iVar8 == 0) {
                        iVar8 = 0x208;
                      }
                      if ((int)(param_3 + uVar9) < iVar8) {
                        iVar8 = iVar4 * 4;
                        if (iVar4 == 0) {
                          iVar8 = 0xc80;
                        }
                        if (*(int *)(in_ECX + 0xc) != 0) {
                          iVar8 = *(int *)(in_ECX + 0xc);
                        }
                        uVar2 = *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7 + 1);
                        uVar3 = *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7 + 2);
                        iVar8 = iVar8 * local_44;
                        *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar1 + iVar8 + uVar6 * 4) =
                             *(undefined1 *)((int)local_2c + uVar6 * 4 + iVar7);
                        *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar8 + iVar1 + 1 + uVar6 * 4) =
                             uVar2;
                        *(undefined1 *)(*(int *)(in_ECX + 0x370) + iVar8 + iVar1 + 2 + uVar6 * 4) =
                             uVar3;
                        *(undefined1 *)(iVar8 + *(int *)(in_ECX + 0x370) + iVar1 + 3 + uVar6 * 4) =
                             0xff;
                      }
                    }
                  }
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < local_20);
              uVar6 = local_20;
            }
            uVar9 = uVar9 + 1;
            local_44 = local_44 + 1;
          } while (uVar9 < local_1c);
        }
      }
      if ((((local_2c != (void *)0x0) && (local_28 == 0)) && (local_2c != (void *)0x0)) &&
         (((iVar1 = Ram00280800, iVar1 == 0x50414d57 && (iVar1 = Ram00280804, iVar1 != 0)) &&
          ((uVar6 = Ram00280808, 0xb < uVar6 &&
           ((uVar6 = Ram00280808, 0x53 < uVar6 &&
            (pcVar5 = (code *)UINT_00280850, pcVar5 != (code *)0x0)))))))) {
        (*pcVar5)(local_2c);
      }
      thunk_memset(&local_2c,0,0x18);
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
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
#undef local_44
#undef local_2c
