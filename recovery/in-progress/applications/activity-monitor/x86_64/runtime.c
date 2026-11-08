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
#undef DAT_00006828
#define DAT_00006828 (*(uint8_t *)(0x6828U))
#undef DAT_10007074
#define DAT_10007074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16dU)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram0000000000006828
#define Ram0000000000006828 (*(uint32_t *)(0x6828U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006908
#define UINT_00006908 (*(uint *)(0x6908U))
#undef UINT_0000690c
#define UINT_0000690c (*(uint *)(0x690cU))
#undef str_10007026
#define str_10007026 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11fU)))
#undef str_10007050
#define str_10007050 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10007061
#define str_10007061 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#define local_62b4 (*(int *)(frame + 892))
#define local_62b0 (*(uint *)(frame + 896))
#define local_62a8 (*(undefined4 *)(frame + 904))
#define local_4184 (*(uint (*)[3848])(frame + 9388))
#define local_564 (*(uint *)(frame + 24780))
#define local_408 (*(undefined1 *)(frame + 25128))
#define local_308 (*(undefined1 (*)[20])(frame + 25384))
#define local_2f4 (*(undefined4 *)(frame + 25404))
#define local_2d4 (*(int *)(frame + 25436))
#define local_2d0 (*(int *)(frame + 25440))
#define local_2cc (*(int *)(frame + 25444))
#define local_2c8 (*(byte *)(frame + 25448))
#define local_90 (*(int (*)[17])(frame + 26016))
#define local_4c (*(byte (*)[8])(frame + 26084))
#define local_44 (*(byte *)(frame + 26092))
#define local_3c (*(int *)(frame + 26100))
#define local_38 (*(int *)(frame + 26104))
#define local_34 (*(int *)(frame + 26108))
#define local_6618 (*(undefined1 (*)[4])(frame + 24))
#define local_6614 (*(int *)(frame + 28))
#define local_6610 (*(int *)(frame + 32))
#define local_65e8 (*(long *)(frame + 72))
#define local_62c8 (*(long *)(frame + 872))
#define local_62c0 (*(uint *)(frame + 880))
#define local_62bc (*(int *)(frame + 884))
#define local_62b8 (*(int *)(frame + 888))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

int recovered_100005a0(void)

{
  unsigned char frame[26192] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  memset(local_6618,0,0x6310);
  pf_app_window_spec(local_308,str_10007050,DAT_100080b8,DAT_100080bc);
  local_2f4 = 0xefefef;
  local_2c8 = local_2c8 | 1;
  uVar2 = terror_ui_window_open(local_6618,local_308);
  if (uVar2 != 0) {
    local_62c8 = local_65e8;
    if (local_65e8 != 0) {
      DAT_100080b8 = local_6614;
      DAT_100080bc = local_6610;
      local_62c0 = 0;
      local_62b0 = 0xffffffff;
      local_62a8 = 0xffffffff;
      terror_ui_window_set_menus(local_6618,str_10007061,&DAT_10007074,&DAT_10007074);
      recovered_10000c20((long)local_6618);
      recovered_10001890((long)local_6618);
      memset(local_308,0,0x278);
      iVar5 = local_6610;
      iVar4 = local_6614;
      uVar2 = terror_ui_window_query(local_6618,local_308);
      if (uVar2 != 0) {
        do {
          uVar1 = terror_ui_window_info_requests_close(local_308);
          if ((uVar1 != '\0') || (uVar2 = terror_ui_window_sync_buffer(local_6618,local_308), uVar2 == 0)) break;
          local_62c8 = local_65e8;
          DAT_100080b8 = local_6614;
          DAT_100080bc = local_6610;
          if ((local_6614 != iVar4) || (local_6610 != iVar5)) {
            recovered_10001890((long)local_6618);
          }
          if (((local_2d4 != 0) && (local_2d4 != local_62b4)) &&
             (local_62b4 = local_2d4, local_2d0 == 1)) {
            if (local_2cc == 2) {
              recovered_100050f0((long)local_6618);
LAB_10000831:
              recovered_10001890((long)local_6618);
            }
            else if (local_2cc == 1) {
              recovered_10004fe0((long)local_6618);
            }
            else if ((local_2cc == 0) && (1 < local_62b0 + 1)) {
              iVar4 = Ram0000000000006800;
              if (((iVar4 == 0x50414d57) &&
                  ((iVar4 = Ram0000000000006804, iVar4 != 0 &&
                   (uVar2 = Ram0000000000006808, 0xb < uVar2)))) &&
                 (uVar2 = Ram0000000000006808, 0x10f < uVar2)) {
                uVar2 = UINT_0000690c;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(local_62b0);
                }
              }
              local_62b0 = 0xffffffff;
              local_408 = 0;
              recovered_10000c20((long)local_6618);
              goto LAB_10000831;
            }
          }
          memset(local_4c,0,0x1c);
          uVar2 = terror_ui_window_pointer_state(local_6618,local_4c);
          if ((((uVar2 != 0) && ((local_44 & 1) != 0)) && ((local_4c[0] & 2) != 0)) &&
             (local_3c != local_62b8)) {
            local_62b8 = local_3c;
            uVar2 = local_38 - 0x5c;
            if (local_34 - 0x1eU < 0xffffffee || uVar2 < 0xffffffb4) {
              if (local_34 - 0x34U < 0xffffffee || uVar2 < 0xffffffb4) {
                if (local_34 - 0x4aU < 0xffffffee || uVar2 < 0xffffffb4) {
                  if (((local_34 - 0x7cU < 0xc6) && (0xf < local_38)) &&
                     (local_38 < (int)(DAT_100080b8 + -0x10))) {
                    uVar2 = (byte)((char)local_34 + 0x84) / 0x12;
                    if (uVar2 < local_564) {
                      local_62b0 = local_4184[(ulong)uVar2 * 0x6e];
                      goto LAB_10000a9f;
                    }
                  }
                  else {
                    if (((local_62c0 & 0xfffffffe) == 2) &&
                       (local_34 - 0x188U < 0x16 && local_38 - 0x46U < 0xfa)) {
                      recovered_100051b0((long)local_6618);
                      goto LAB_100009a4;
                    }
                    uVar2 = local_34 - 0x164;
                    uVar3 = 0;
                    if ((((local_38 - 0xc6U < 0x74 && uVar2 < 0x18) ||
                         (uVar3 = 1, local_38 - 0x13aU < 0x88 && uVar2 < 0x18)) ||
                        (uVar3 = 2, local_38 - 0x1c2U < 0x74 && uVar2 < 0x18)) ||
                       ((uVar3 = 3, local_38 - 0x24aU < 0x74 && uVar2 < 0x18 ||
                        (uVar3 = 4, local_38 - 0x2beU < 0x74 && uVar2 < 0x18)))) {
                      local_62c0 = uVar3;
                      goto LAB_10000a9f;
                    }
                  }
                  goto LAB_10000ab0;
                }
                recovered_100050f0((long)local_6618);
              }
              else {
                recovered_10004fe0((long)local_6618);
              }
            }
            else {
              if (local_62b0 + 1 < 2) goto LAB_10000ab0;
              iVar4 = Ram0000000000006800;
              if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
                 ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
                  (uVar2 = Ram0000000000006808, 0x10f < uVar2)))) {
                uVar2 = UINT_0000690c;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(local_62b0);
                }
              }
              local_62b0 = 0xffffffff;
              local_408 = 0;
LAB_100009a4:
              recovered_10000c20((long)local_6618);
            }
LAB_10000a9f:
            recovered_10001890((long)local_6618);
          }
LAB_10000ab0:
          memset(local_90,0,0x44);
          iVar4 = Ram0000000000006800;
          if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
             ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
              (uVar2 = Ram0000000000006808, 0x10b < uVar2)))) {
            uVar2 = UINT_00006908;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)(local_90);
            }
          }
          if (0x11 < (uint)(local_90[0] - local_62bc) || local_62bc == 0) {
            local_62bc = local_90[0];
            recovered_10000c20((long)local_6618);
            recovered_10001890((long)local_6618);
          }
          iVar4 = Ram0000000000006800;
          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
              (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000006808, 0x9f < uVar2)) {
            uVar2 = UINT_0000689c;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)();
            }
          }
          memset(local_308,0,0x278);
          iVar5 = local_6610;
          iVar4 = local_6614;
          uVar2 = terror_ui_window_query(local_6618,local_308);
        } while (uVar2 != 0);
      }
      terror_ui_window_close(local_6618);
      return 0;
    }
    terror_ui_window_close(local_6618);
  }
  iVar4 = Ram0000000000006800;
  if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x2b < uVar2)))) {
    uVar2 = Ram0000000000006828;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10007026);
    }
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006828
#undef DAT_10007074
#undef DAT_100080b8
#undef DAT_100080bc
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram0000000000006828
#undef UINT_0000689c
#undef UINT_00006908
#undef UINT_0000690c
#undef str_10007026
#undef str_10007050
#undef str_10007061
#undef local_62b4
#undef local_62b0
#undef local_62a8
#undef local_4184
#undef local_564
#undef local_408
#undef local_308
#undef local_2f4
#undef local_2d4
#undef local_2d0
#undef local_2cc
#undef local_2c8
#undef local_90
#undef local_4c
#undef local_44
#undef local_3c
#undef local_38
#undef local_34
#undef local_6618
#undef local_6614
#undef local_6610
#undef local_65e8
#undef local_62c8
#undef local_62c0
#undef local_62bc
#undef local_62b8

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
#undef UINT_000068b8
#define UINT_000068b8 (*(uint *)(0x68b8U))
#undef UINT_00006904
#define UINT_00006904 (*(uint *)(0x6904U))
#undef UINT_00006908
#define UINT_00006908 (*(uint *)(0x6908U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#define local_39b8 (*(int (*)[5])(frame + 24))
#define local_330 (*(undefined1 (*)[440])(frame + 13984))
#define local_178 (*(int *)(frame + 14424))
#define local_174 (*(byte *)(frame + 14428))
#define local_14c (*(ulong *)(frame + 14468))
#define local_144 (*(ulong *)(frame + 14476))
#define local_13c (*(ulong *)(frame + 14484))
#define local_134 (*(ulong *)(frame + 14492))
#define local_ec (*(int *)(frame + 14564))
#define local_dc (*(undefined8 *)(frame + 14580))
#define local_cc (*(undefined8 *)(frame + 14596))
#define local_bc (*(undefined8 *)(frame + 14612))
#define local_ac (*(undefined4 *)(frame + 14628))
#define local_a8 (*(ulong *)(frame + 14632))
#define local_a0 (*(int * *)(frame + 14640))
#define aiStack_39a4 (*(int (*)[3485])(frame + 44))
#define local_98 (*(int * *)(frame + 14648))
#define local_90 (*(int * *)(frame + 14656))
#define local_88 (*(void * *)(frame + 14664))
#define local_7c (*(int *)(frame + 14676))
#define local_78 (*(int * *)(frame + 14680))
#define local_70 (*(int * *)(frame + 14688))
#define local_68 (*(uint * *)(frame + 14696))
#define local_5c (*(uint *)(frame + 14708))
#define local_58 (*(uint *)(frame + 14712))
#define local_54 (*(undefined4 *)(frame + 14716))
#define uStack_e8 (*(undefined4 *)(frame + 14568))
#define local_50 (*(int * *)(frame + 14720))
#define uStack_e4 (*(undefined8 *)(frame + 14572))
#define local_44 (*(uint *)(frame + 14732))
#define local_40 (*(long *)(frame + 14736))
#define uStack_d4 (*(undefined8 *)(frame + 14588))
#define local_31 (*(byte *)(frame + 14751))
#define uStack_c4 (*(undefined8 *)(frame + 14604))
#define uStack_b4 (*(undefined8 *)(frame + 14620))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

void recovered_10000c20(long param_1)

{
  unsigned char frame[14832] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int *piVar31;
  int *piVar32;
  long lVar33;
  uint *dst;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint128 auVar41;
  uint128 auVar42;

  local_5c = 0;
  if (param_1 == 0) {
    return;
  }
  iVar24 = *(int *)(param_1 + 0x368);
  memset(&local_ec,0,0x44);
  memset(&local_178,0,0x8c);
  iVar34 = Ram0000000000006800;
  if (iVar34 != 0x50414d57) {
    return;
  }
  iVar34 = Ram0000000000006804;
  if (iVar34 == 0) {
    return;
  }
  uVar19 = Ram0000000000006808;
  if (uVar19 < 0xc) {
    return;
  }
  uVar19 = Ram0000000000006808;
  if (uVar19 < 0x10c) {
    return;
  }
  uVar19 = UINT_00006908;
  if ((code *)(ulong)uVar19 == (code *)0x0) {
    return;
  }
  uVar19 = (*(code *)(ulong)uVar19)(&local_ec);
  if (uVar19 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x60b0) != 1) ||
     (uVar19 = local_ec - *(int *)(param_1 + 0x3b8), uVar19 == 0)) {
    uVar19 = (uint)*(byte *)(param_1 + 0x60b0);
  }
  iVar34 = Ram0000000000006800;
  if ((((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
      (uVar20 = Ram0000000000006808, 0xb < uVar20)) && (uVar20 = Ram0000000000006808, 0xbb < uVar20)
     ) {
    uVar20 = UINT_000068b8;
    if (((code *)(ulong)uVar20 == (code *)0x0) || (uVar20 = (*(code *)(ulong)uVar20)(), uVar20 == 0)
       ) goto LAB_10000d5a;
  }
  else {
LAB_10000d5a:
    uVar20 = 1;
  }
  local_68 = (uint *)(param_1 + 0x60bc);
  *local_68 = uVar20;
  recovered_10005260(param_1);
  if (((*(int *)(param_1 + 0x370) < 0) || (iVar34 = Ram0000000000006800, iVar34 != 0x50414d57)) ||
     ((iVar34 = Ram0000000000006804, iVar34 == 0 ||
      ((uVar20 = Ram0000000000006808, uVar20 < 0xc || (uVar20 = Ram0000000000006808, uVar20 < 0x114)
       ))))) {
LAB_10000ddc:
    memset((void *)(param_1 + 0x3fc),0,0x8c);
  }
  else {
    uVar20 = UINT_00006910;
    if (((code *)(ulong)uVar20 == (code *)0x0) ||
       (uVar20 = (*(code *)(ulong)uVar20)(*(int *)(param_1 + 0x370),&local_178), uVar20 == 0))
    goto LAB_10000ddc;
    memcpy((void *)(param_1 + 0x3fc),&local_178,0x8c);
  }
  memset(local_39b8,0,0x3680);
  iVar34 = Ram0000000000006800;
  if ((((iVar34 != 0x50414d57) || (iVar34 = Ram0000000000006804, iVar34 == 0)) ||
      (uVar20 = Ram0000000000006808, uVar20 < 0xc)) ||
     (uVar20 = Ram0000000000006808, uVar20 < 0x108)) {
LAB_10000ee0:
    *(undefined4 *)(param_1 + 0x60b4) = 0;
    return;
  }
  uVar20 = UINT_00006904;
  if (((code *)(ulong)uVar20 == (code *)0x0) ||
     (uVar20 = (*(code *)(ulong)uVar20)(local_39b8,0x20,&local_5c), uVar20 == 0)) goto LAB_10000ee0;
  local_70 = (int *)0x20;
  if (local_5c < 0x20) {
    local_70 = (int *)(ulong)local_5c;
  }
  local_58 = local_5c;
  local_44 = uVar19;
  if (local_5c == 0) {
    local_40 = param_1 + 0x2494;
    uVar22 = 0;
    *(int *)(param_1 + 0x60b4) = (int)local_70;
    if (iVar24 != -1) goto LAB_100011c1;
  }
  else {
    local_98 = (int *)(param_1 + 0x5b94);
    local_40 = param_1 + 0x2494;
    local_90 = (int *)(param_1 + 0x5d14);
    local_a8 = (ulong)(uVar19 + (uVar19 == 0));
    local_a0 = (int *)(param_1 + 0x5d30);
    local_78 = (int *)0x0;
    uVar22 = 0;
    local_54 = (int)local_70;
    local_31 = iVar24 == -1;
    do {
      local_50 = local_39b8 + (long)local_78 * 0x6d;
      local_7c = (int)uVar22;
      if (*(char *)(param_1 + 0x60b0) == '\0') {
        iVar24 = *local_50;
        uVar19 = 0;
      }
      else {
        iVar24 = *local_50;
        lVar25 = 0x20;
        piVar31 = local_98;
        do {
          if (*piVar31 == iVar24) {
LAB_10000fa4:
            iVar34 = piVar31[2];
            goto LAB_10000fa7;
          }
          if (piVar31[3] == iVar24) {
            piVar31 = piVar31 + 3;
            goto LAB_10000fa4;
          }
          if (piVar31[6] == iVar24) {
            piVar31 = piVar31 + 6;
            goto LAB_10000fa4;
          }
          if (piVar31[9] == iVar24) {
            piVar31 = piVar31 + 9;
            goto LAB_10000fa4;
          }
          piVar31 = piVar31 + 0xc;
          lVar25 = lVar25 + -4;
        } while (lVar25 != 0);
        iVar34 = 0;
LAB_10000fa7:
        uVar19 = aiStack_39a4[(long)local_78 * 0x6d] - iVar34;
      }
      local_88 = (void *)((long)local_78 * 0x1b8 + local_40);
      memcpy(local_88,local_50,0x1b4);
      lVar25 = 0x20;
      piVar32 = (int *)0x0;
      piVar31 = local_a0;
      do {
        if (piVar31[-7] == iVar24) {
          piVar31 = piVar31 + -7;
LAB_1000102b:
          iVar34 = iVar24;
          goto LAB_1000105e;
        }
        if (*piVar31 == iVar24) goto LAB_1000102b;
        if (piVar31[-7] == 0) {
          piVar28 = piVar31 + -7;
        }
        else {
          piVar28 = (int *)0x0;
        }
        if (piVar32 != (int *)0x0) {
          piVar28 = piVar32;
        }
        piVar32 = piVar31;
        if (*piVar31 != 0) {
          piVar32 = (int *)0x0;
        }
        if (piVar28 != (int *)0x0) {
          piVar32 = piVar28;
        }
        piVar31 = piVar31 + 0xe;
        lVar25 = lVar25 + -2;
      } while (lVar25 != 0);
      piVar31 = piVar32;
      if (piVar32 == (int *)0x0) {
        piVar31 = local_90;
      }
      memset(piVar31,0,0x1c);
      *piVar31 = iVar24;
      iVar34 = *local_50;
LAB_1000105e:
      uVar26 = (*local_68 + (uint)(*local_68 == 0)) * local_a8;
      uVar22 = (ulong)uVar19 * 1000;
      if ((uVar22 | uVar26) >> 0x20 == 0) {
        uVar22 = (uVar22 & 0xffffffff) / (uVar26 & 0xffffffff);
      }
      else {
        uVar22 = uVar22 / uVar26;
      }
      if (999 < uVar22) {
        uVar22 = 1000;
      }
      if (iVar24 != iVar34) {
        memset(piVar31,0,0x1c);
        *piVar31 = iVar34;
      }
      bVar18 = *(byte *)((long)piVar31 + 0x19);
      *(short *)((long)piVar31 + (ulong)bVar18 * 2 + 4) = (short)uVar22;
      *(byte *)((long)piVar31 + 0x19) = bVar18 + ((byte)((bVar18 + 1) / 5) & 0xfe) * -5 + '\x01';
      bVar18 = *(byte *)(piVar31 + 6);
      if (bVar18 < 10) {
        bVar18 = bVar18 + 1;
        *(byte *)(piVar31 + 6) = bVar18;
      }
      uVar20 = (uint)bVar18;
      if (bVar18 < 8) {
        uVar22 = 0;
        uVar26 = 0;
LAB_10001180:
        do {
          uVar26 = (ulong)((int)uVar26 + (uint)*(ushort *)((long)piVar31 + uVar22 * 2 + 4));
          uVar22 = uVar22 + 1;
        } while (bVar18 != uVar22);
      }
      else {
        uVar22 = (ulong)(uVar20 & 0xf8);
        iVar24 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        uVar26 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        do {
          uVar23 = *(ulong *)((long)piVar31 + uVar26 + 4);
          uVar1 = *(ulong *)((long)piVar31 + uVar26 + 0xc);
          PF_PART4(auVar4, 8) = 0;
          PF_PART8(auVar4, 0) = uVar23;
          PF_PART2(auVar4, 12) = (short)(uVar23 >> 0x30);
          PF_PART2(auVar8, 8) = (short)(uVar23 >> 0x20);
          PF_PART8(auVar8, 0) = uVar23;
          PF_PART4(auVar8, 10) = PF_PART4(auVar4, 10);
          PF_PART8(auVar14, 6) = 0;
          PF_PART6(auVar14, 0) = PF_PART6(auVar8, 8);
          PF_PART2(auVar12, 4) = (short)(uVar23 >> 0x10);
          PF_PART4(auVar12, 0) = (uint)uVar23;
          PF_PART8(auVar12, 6) = ((uint64_t)PF_PART8(auVar14,0)<<16);
          iVar24 = iVar24 + ((uint)uVar23 & 0xffff);
          iVar34 = iVar34 + PF_PART4(auVar12, 4);
          iVar35 = iVar35 + PF_PART4(auVar8, 8);
          iVar36 = iVar36 + (PF_PART4(auVar4, 10) >> 0x10);
          PF_PART4(auVar5, 8) = 0;
          PF_PART8(auVar5, 0) = uVar1;
          PF_PART2(auVar5, 12) = (short)(uVar1 >> 0x30);
          PF_PART2(auVar9, 8) = (short)(uVar1 >> 0x20);
          PF_PART8(auVar9, 0) = uVar1;
          PF_PART4(auVar9, 10) = PF_PART4(auVar5, 10);
          PF_PART8(auVar15, 6) = 0;
          PF_PART6(auVar15, 0) = PF_PART6(auVar9, 8);
          PF_PART2(auVar13, 4) = (short)(uVar1 >> 0x10);
          PF_PART4(auVar13, 0) = (uint)uVar1;
          PF_PART8(auVar13, 6) = ((uint64_t)PF_PART8(auVar15,0)<<16);
          iVar37 = iVar37 + ((uint)uVar1 & 0xffff);
          iVar38 = iVar38 + PF_PART4(auVar13, 4);
          iVar39 = iVar39 + PF_PART4(auVar9, 8);
          iVar40 = iVar40 + (PF_PART4(auVar5, 10) >> 0x10);
          uVar26 = uVar26 + 0x10;
        } while ((uVar20 * 2 & 0xfffffff0) != uVar26);
        uVar26 = (ulong)(uint)(iVar40 + iVar36 + iVar38 + iVar34 + iVar39 + iVar35 + iVar37 + iVar24
                              );
        if ((uVar20 & 0xf8) != uVar20) goto LAB_10001180;
      }
      *(int *)((long)local_88 + 0x1b4) = (int)(uVar26 / bVar18);
      uVar22 = (ulong)(local_7c + uVar19);
      local_31 = local_31 | *local_50 == *(int *)(param_1 + 0x368);
      local_78 = (int *)((long)local_78 + 1);
    } while (local_78 != local_70);
    *(undefined4 *)(param_1 + 0x60b4) = local_54;
    local_78 = (int *)uVar22;
    if (local_58 != 1) {
      dst = (uint *)(param_1 + 0x264c);
      piVar31 = (int *)0x1;
      lVar25 = local_40;
      do {
        memcpy(local_330,(void *)(lVar25 + (long)piVar31 * 0x1b8),0x1b4);
        uVar19 = *(uint *)(local_40 + 0x1b4 + (long)piVar31 * 0x1b8);
        local_68 = dst;
        local_50 = piVar31;
        do {
          uVar22 = (ulong)((int)piVar31 - 1);
          lVar25 = uVar22 * 0x1b8;
          if (uVar19 <= *(uint *)(local_40 + 0x1b4 + lVar25)) goto LAB_10001535;
          memcpy(dst,(void *)(lVar25 + local_40),0x1b8);
          dst = dst + -0x6e;
          piVar31 = (int *)((long)piVar31 + -1);
        } while (uVar22 != 0);
        piVar31 = (int *)0x0;
LAB_10001535:
        lVar25 = local_40;
        lVar33 = ((ulong)piVar31 & 0xffffffff) * 0x1b8;
        memcpy((void *)(local_40 + lVar33),local_330,0x1b4);
        *(uint *)(lVar25 + 0x1b4 + lVar33) = uVar19;
        piVar31 = (int *)((long)local_50 + 1);
        dst = local_68 + 0x6e;
      } while (piVar31 != local_70);
    }
    uVar22 = (long)local_78 * 1000;
    if ((local_31 & 1) == 0) {
LAB_100011c1:
      *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x6210) = 0;
    }
  }
  lVar33 = (long)local_70 * 0x1b4;
  lVar25 = 0;
  do {
    iVar24 = *(int *)(param_1 + 0x5d14 + lVar25 * 0x1c);
    if (iVar24 != 0) {
      if (local_58 != 0) {
        lVar27 = 0;
        do {
          if (*(int *)((long)local_39b8 + lVar27) == iVar24) goto LAB_100011f5;
          lVar27 = lVar27 + 0x1b4;
        } while (lVar33 != lVar27);
      }
      memset((void *)(lVar25 * 0x1c + param_1 + 0x5d14),0,0x1c);
    }
LAB_100011f5:
    lVar25 = lVar25 + 1;
  } while (lVar25 != 0x20);
  piVar31 = (int *)(param_1 + 0x6094);
  uVar26 = (ulong)(*(int *)(param_1 + 0x60bc) + (uint)(*(int *)(param_1 + 0x60bc) == 0)) *
           (ulong)(local_44 + (local_44 == 0));
  if ((uVar22 | uVar26) >> 0x20 == 0) {
    uVar22 = (uVar22 & 0xffffffff) / (uVar26 & 0xffffffff);
  }
  else {
    uVar22 = uVar22 / uVar26;
  }
  uVar26 = 1000;
  if (uVar22 < 1000) {
    uVar26 = uVar22;
  }
  if (*piVar31 != 1) {
    memset(piVar31,0,0x1c);
    *piVar31 = 1;
  }
  uVar19 = local_44;
  bVar18 = *(byte *)(param_1 + 0x60ad);
  *(short *)(param_1 + 0x6098 + (ulong)bVar18 * 2) = (short)uVar26;
  *(byte *)(param_1 + 0x60ad) = bVar18 + ((byte)((bVar18 + 1) / 5) & 0xfe) * -5 + '\x01';
  bVar18 = *(byte *)(param_1 + 0x60ac);
  if (bVar18 < 10) {
    bVar18 = bVar18 + 1;
    *(byte *)(param_1 + 0x60ac) = bVar18;
  }
  if (bVar18 < 8) {
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    uVar20 = bVar18 & 0xfffffff8;
    uVar22 = (ulong)uVar20;
    uVar26 = 0;
    iVar24 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    auVar41 = (uint128)0x0;
    do {
      uVar23 = *(ulong *)(param_1 + 0x6098 + uVar26);
      uVar1 = *(ulong *)(param_1 + 0x60a0 + uVar26);
      PF_PART4(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = uVar23;
      PF_PART2(auVar2, 12) = (short)(uVar23 >> 0x30);
      PF_PART2(auVar6, 8) = (short)(uVar23 >> 0x20);
      PF_PART8(auVar6, 0) = uVar23;
      PF_PART4(auVar6, 10) = PF_PART4(auVar2, 10);
      PF_PART8(auVar16, 6) = 0;
      PF_PART6(auVar16, 0) = PF_PART6(auVar6, 8);
      PF_PART2(auVar10, 4) = (short)(uVar23 >> 0x10);
      PF_PART4(auVar10, 0) = (uint)uVar23;
      PF_PART8(auVar10, 6) = ((uint64_t)PF_PART8(auVar16,0)<<16);
      PF_PART4(auVar42, 0) = PF_PART4(auVar41, 0) + ((uint)uVar23 & 0xffff);
      PF_PART4(auVar42, 4) = PF_PART4(auVar41, 4) + PF_PART4(auVar10, 4);
      PF_PART4(auVar42, 8) = PF_PART4(auVar41, 8) + PF_PART4(auVar6, 8);
      PF_PART4(auVar42, 12) = PF_PART4(auVar41, 12) + (PF_PART4(auVar2, 10) >> 0x10);
      PF_PART4(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = uVar1;
      PF_PART2(auVar3, 12) = (short)(uVar1 >> 0x30);
      PF_PART2(auVar7, 8) = (short)(uVar1 >> 0x20);
      PF_PART8(auVar7, 0) = uVar1;
      PF_PART4(auVar7, 10) = PF_PART4(auVar3, 10);
      PF_PART8(auVar17, 6) = 0;
      PF_PART6(auVar17, 0) = PF_PART6(auVar7, 8);
      PF_PART2(auVar11, 4) = (short)(uVar1 >> 0x10);
      PF_PART4(auVar11, 0) = (uint)uVar1;
      PF_PART8(auVar11, 6) = ((uint64_t)PF_PART8(auVar17,0)<<16);
      iVar24 = iVar24 + ((uint)uVar1 & 0xffff);
      iVar34 = iVar34 + PF_PART4(auVar11, 4);
      iVar35 = iVar35 + PF_PART4(auVar7, 8);
      iVar36 = iVar36 + (PF_PART4(auVar3, 10) >> 0x10);
      uVar26 = uVar26 + 0x10;
      auVar41 = auVar42;
    } while (((uint)bVar18 * 2 & 0xfffffff0) != uVar26);
    uVar21 = iVar36 + PF_PART4(auVar42, 12) + iVar34 + PF_PART4(auVar42, 4) +
             iVar35 + PF_PART4(auVar42, 8) + iVar24 + PF_PART4(auVar42, 0);
    if (uVar20 == bVar18) goto LAB_1000138c;
  }
  do {
    uVar21 = uVar21 + *(ushort *)(param_1 + 0x6098 + uVar22 * 2);
    uVar22 = uVar22 + 1;
  } while (bVar18 != uVar22);
LAB_1000138c:
  uVar21 = uVar21 / bVar18;
  iVar24 = -(uVar21 - 1000);
  *(uint *)(param_1 + 0x60c0) = uVar21;
  if (999 < uVar21) {
    iVar24 = 0;
  }
  *(undefined4 *)(param_1 + 0x60c4) = 0;
  *(int *)(param_1 + 0x60c8) = iVar24;
  memmove((void *)(param_1 + 0x60f0),(void *)(param_1 + 0x60f1),0x47);
  memmove((void *)(param_1 + 0x6138),(void *)(param_1 + 0x6139),0x47);
  *(char *)(param_1 + 0x6137) = (char)(*(uint *)(param_1 + 0x60c0) / 10);
  *(char *)(param_1 + 0x617f) = (char)(*(uint *)(param_1 + 0x60c4) / 10);
  if (((*(char *)(param_1 + 0x60b1) == '\x01') && (uVar19 != 0)) &&
     (local_178 == *(int *)(param_1 + 0x488))) {
    lVar25 = 0;
    if (*(ulong *)(param_1 + 0x4b4) <= local_14c) {
      lVar25 = local_14c - *(ulong *)(param_1 + 0x4b4);
    }
    uVar22 = lVar25 * 0x12;
    uVar26 = (ulong)uVar19;
    if (uVar22 >> 0x20 == 0) {
      uVar22 = uVar22 & 0xffffffff;
    }
    uVar23 = 0xffffffff;
    if (uVar22 / uVar26 < 0xffffffff) {
      uVar23 = uVar22 / uVar26;
    }
    *(int *)(param_1 + 0x60cc) = (int)uVar23;
    lVar25 = 0;
    if (*(ulong *)(param_1 + 0x4bc) <= local_144) {
      lVar25 = local_144 - *(ulong *)(param_1 + 0x4bc);
    }
    uVar22 = lVar25 * 0x12;
    if (uVar22 >> 0x20 == 0) {
      uVar22 = uVar22 & 0xffffffff;
    }
    uVar23 = 0xffffffff;
    if (uVar22 / uVar26 < 0xffffffff) {
      uVar23 = uVar22 / uVar26;
    }
    *(int *)(param_1 + 0x60d0) = (int)uVar23;
    lVar25 = 0;
    if (*(ulong *)(param_1 + 0x4c4) <= local_13c) {
      lVar25 = local_13c - *(ulong *)(param_1 + 0x4c4);
    }
    uVar22 = lVar25 * 0x12;
    if (uVar22 >> 0x20 == 0) {
      uVar22 = uVar22 & 0xffffffff;
    }
    uVar22 = uVar22 / uVar26;
    *(ulong *)(param_1 + 0x60d8) = uVar22;
    lVar25 = 0;
    if (*(ulong *)(param_1 + 0x4cc) <= local_134) {
      lVar25 = local_134 - *(ulong *)(param_1 + 0x4cc);
    }
    uVar23 = lVar25 * 0x12;
    if (uVar23 >> 0x20 == 0) {
      uVar23 = uVar23 & 0xffffffff;
    }
    uVar23 = uVar23 / uVar26;
    *(ulong *)(param_1 + 0x60e0) = uVar23;
    uVar26 = *(ulong *)(param_1 + 0x60e8);
    if ((uVar26 < uVar22) || (uVar22 = uVar26, uVar26 < uVar23)) {
      if (uVar22 < uVar23) {
        uVar22 = uVar23;
      }
      *(ulong *)(param_1 + 0x60e8) = uVar22;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60cc) = 0;
    *(uint128 *)(param_1 + 0x60d8) = (uint128)0x0;
  }
  memmove((void *)(param_1 + 0x6180),(void *)(param_1 + 0x6181),0x47);
  memmove((void *)(param_1 + 0x61c8),(void *)(param_1 + 0x61c9),0x47);
  uVar22 = *(ulong *)(param_1 + 0x60e8);
  if (uVar22 == 0 || *(long *)(param_1 + 0x60d8) == 0) {
    uVar23 = 0;
  }
  else {
    uVar26 = *(long *)(param_1 + 0x60d8) * 100;
    if ((uVar26 | uVar22) >> 0x20 == 0) {
      uVar26 = (uVar26 & 0xffffffff) / (uVar22 & 0xffffffff);
    }
    else {
      uVar26 = uVar26 / uVar22;
    }
    uVar23 = 100;
    if (uVar26 < 100) {
      uVar23 = uVar26;
    }
  }
  *(char *)(param_1 + 0x61c7) = (char)uVar23;
  if (*(long *)(param_1 + 0x60e0) == 0 || uVar22 == 0) {
    uVar22 = 0;
  }
  else {
    uVar26 = *(long *)(param_1 + 0x60e0) * 100;
    if ((uVar26 | uVar22) >> 0x20 == 0) {
      uVar26 = (uVar26 & 0xffffffff) / (uVar22 & 0xffffffff);
    }
    else {
      uVar26 = uVar26 / uVar22;
    }
    uVar22 = 100;
    if (uVar26 < 100) {
      uVar22 = uVar26;
    }
  }
  *(char *)(param_1 + 0x620f) = (char)uVar22;
  *(ulong *)(param_1 + 0x3b8) = CONCAT44(uStack_e8,local_ec);
  *(undefined8 *)(param_1 + 0x3c0) = uStack_e4;
  *(undefined8 *)(param_1 + 0x3c8) = local_dc;
  *(undefined8 *)(param_1 + 0x3d0) = uStack_d4;
  *(undefined8 *)(param_1 + 0x3d8) = local_cc;
  *(undefined8 *)(param_1 + 0x3e0) = uStack_c4;
  *(undefined8 *)(param_1 + 1000) = local_bc;
  *(undefined8 *)(param_1 + 0x3f0) = uStack_b4;
  *(undefined4 *)(param_1 + 0x3f8) = local_ac;
  *(ulong *)(param_1 + 0x374) = CONCAT44(uStack_e8,local_ec);
  *(undefined8 *)(param_1 + 0x37c) = uStack_e4;
  *(undefined8 *)(param_1 + 900) = local_dc;
  *(undefined8 *)(param_1 + 0x38c) = uStack_d4;
  *(undefined8 *)(param_1 + 0x394) = local_cc;
  *(undefined8 *)(param_1 + 0x39c) = uStack_c4;
  *(undefined8 *)(param_1 + 0x3a4) = local_bc;
  *(undefined8 *)(param_1 + 0x3ac) = uStack_b4;
  *(undefined4 *)(param_1 + 0x3b4) = local_ac;
  memcpy((void *)(param_1 + 0x488),&local_178,0x8c);
  *(undefined1 *)(param_1 + 0x60b0) = 1;
  *(byte *)(param_1 + 0x60b1) = local_174 & 1;
  memset((void *)(param_1 + 0x5b94),0,0x180);
  uVar19 = *(uint *)(param_1 + 0x60b4);
  if (uVar19 == 0) {
    return;
  }
  uVar20 = 0x20;
  if (uVar19 < 0x20) {
    uVar20 = uVar19;
  }
  if (uVar19 == 1) {
    uVar22 = 0;
  }
  else {
    puVar30 = (undefined8 *)(local_40 + 0x1c8);
    puVar29 = (undefined8 *)(param_1 + 0x5ba4);
    uVar22 = 0;
    do {
      *(undefined4 *)(puVar29 + -2) = *(undefined4 *)(puVar30 + -0x39);
      *(undefined8 *)((long)puVar29 + -0xc) = puVar30[-0x37];
      *(undefined4 *)((long)puVar29 + -4) = *(undefined4 *)(puVar30 + -2);
      *puVar29 = *puVar30;
      uVar22 = uVar22 + 2;
      puVar30 = puVar30 + 0x6e;
      puVar29 = puVar29 + 3;
    } while ((uVar20 & 0x3e) != uVar22);
  }
  if ((uVar20 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x5b94 + uVar22 * 0xc) = *(undefined4 *)(local_40 + uVar22 * 0x1b8);
  *(undefined8 *)(param_1 + 0x5b98 + uVar22 * 0xc) =
       *(undefined8 *)(local_40 + 0x10 + uVar22 * 0x1b8);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068b8
#undef UINT_00006904
#undef UINT_00006908
#undef UINT_00006910
#undef local_39b8
#undef local_330
#undef local_178
#undef local_174
#undef local_14c
#undef local_144
#undef local_13c
#undef local_134
#undef local_ec
#undef local_dc
#undef local_cc
#undef local_bc
#undef local_ac
#undef local_a8
#undef local_a0
#undef aiStack_39a4
#undef local_98
#undef local_90
#undef local_88
#undef local_7c
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef uStack_e8
#undef local_50
#undef uStack_e4
#undef local_44
#undef local_40
#undef uStack_d4
#undef local_31
#undef uStack_c4
#undef uStack_b4

#undef DAT_10007112
#define DAT_10007112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef DAT_1000711d
#define DAT_1000711d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216U)))
#undef DAT_10007120
#define DAT_10007120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_10007123
#define DAT_10007123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#undef DAT_100072e0
#define DAT_100072e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3d9U)))
#undef DAT_100072fc
#define DAT_100072fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f5U)))
#undef DAT_10008080
#define DAT_10008080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1179U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
#undef str_10007050
#define str_10007050 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10007115
#define str_10007115 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#undef str_10007126
#define str_10007126 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21fU)))
#undef str_10007135
#define str_10007135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#undef str_10007186
#define str_10007186 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_10007192
#define str_10007192 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28bU)))
#undef str_100071bf
#define str_100071bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_100071ce
#define str_100071ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_100071df
#define str_100071df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_100071ed
#define str_100071ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e6U)))
#undef str_100071fc
#define str_100071fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f5U)))
#undef str_1000720a
#define str_1000720a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000721b
#define str_1000721b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x314U)))
#undef str_1000722d
#define str_1000722d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10007242
#define str_10007242 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33bU)))
#undef str_10007263
#define str_10007263 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35cU)))
#define local_128 (*(char (*)[64])(frame + 24))
#define local_e8 (*(char (*)[64])(frame + 88))
#define local_a8 (*(char (*)[64])(frame + 152))
#define local_68 (*(ulong *)(frame + 216))
#define local_60 (*(ulong *)(frame + 224))
#define local_58 (*(ulong *)(frame + 232))
#define local_50 (*(ulong *)(frame + 240))
#define local_48 (*(undefined8 *)(frame + 248))
#define local_40 (*(undefined8 *)(frame + 256))
#define local_38 (*(ulong *)(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

void recovered_10001890(long param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  long lVar28;
  bool bVar29;

  uVar4 = DAT_100080bc;
  uVar24 = DAT_100080b8;
  local_38 = (ulong)DAT_100080b8;
  uVar7 = (int)DAT_100080bc >> 0x1f & DAT_100080bc;
  uVar16 = 0;
  if ((int)DAT_100080b8 < 0) {
    uVar16 = DAT_100080b8;
  }
  uVar14 = 0;
  if (0 < (int)DAT_100080b8) {
    uVar14 = DAT_100080b8;
  }
  uVar15 = 0;
  if (0 < (int)DAT_100080bc) {
    uVar15 = DAT_100080bc;
  }
  if ((int)uVar7 < (int)uVar15) {
    do {
      if ((int)uVar16 < (int)uVar14) {
        uVar25 = uVar16;
        do {
          if ((((param_1 != 0) && ((int)uVar7 < (int)uVar4)) && (-1 < (int)(uVar25 | uVar7))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar25 < (int)uVar24)))) {
            lVar13 = (ulong)uVar25 + uVar7 * local_38;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
          }
          uVar25 = uVar25 + 1;
        } while (uVar14 != uVar25);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
  }
  if (((param_1 != 0) && (iVar12 = *(int *)(param_1 + 0x368), iVar12 != -1)) &&
     ((ulong)*(uint *)(param_1 + 0x60b4) != 0)) {
    lVar13 = 0;
    do {
      if (*(int *)(param_1 + 0x2494 + lVar13) == iVar12) {
        uVar2 = (uint3)((uint)iVar12 >> 8);
        local_48 = CONCAT44(PF_PART4(local_48, 4),CONCAT31(uVar2,iVar12 != 0));
        local_40 = CONCAT44(PF_PART4(local_40, 4),(int)CONCAT71((uint7)uVar2,1));
        goto LAB_10001937;
      }
      lVar13 = lVar13 + 0x1b8;
    } while ((ulong)*(uint *)(param_1 + 0x60b4) * 0x1b8 != lVar13);
  }
  local_40 = (ulong)PF_PART4(local_40, 4) << 0x20;
  local_48 = (ulong)PF_PART4(local_48, 4) << 0x20;
LAB_10001937:
  lVar13 = 0x4990;
  uVar24 = 0x4990;
  lVar28 = 0;
  do {
    uVar4 = (uVar24 & 0xffff) / 0x58;
    recovered_10005400(param_1,lVar28,(ulong)DAT_100080b8 | 0x100000000,
                       uVar4 & 0xff | (uVar4 & 0xff) << 8 | uVar24 / 0x58 << 0x10);
    uVar4 = DAT_100080b8;
    lVar28 = lVar28 + 0x100000000;
    uVar24 = uVar24 - 0x32;
    lVar13 = lVar13 + -0xd6;
  } while (lVar13 != 0);
  uVar23 = (ulong)DAT_100080b8;
  uVar24 = 0;
  if ((int)DAT_100080b8 < 0) {
    uVar24 = DAT_100080b8;
  }
  uVar16 = 0;
  if (0 < (int)DAT_100080b8) {
    uVar16 = DAT_100080b8;
  }
  if ((0x57 < (int)DAT_100080bc) && ((int)uVar24 < (int)uVar16)) {
    do {
      if ((param_1 != 0) &&
         (((int)uVar24 < (int)uVar4 && -1 < (int)uVar24) && *(long *)(param_1 + 0x350) != 0)) {
        lVar13 = (ulong)uVar24 + uVar23 * 0x57;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0x69;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0x69;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0x69;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
      }
      uVar24 = uVar24 + 1;
    } while (uVar16 != uVar24);
  }
  recovered_10005520(param_1,0xc00000010,((uintptr_t)pf_module_state + 0x1aaU),(char)local_48);
  cVar3 = (char)local_40;
  recovered_10005520(param_1,0x2200000010,((uintptr_t)pf_module_state + 0x1afU),(char)local_40);
  recovered_10005520(param_1,0x3800000010,((uintptr_t)pf_module_state + 0x1b5U),cVar3);
  uVar4 = DAT_100080bc;
  uVar24 = DAT_100080b8;
  uVar23 = (ulong)DAT_100080b8;
  uVar16 = 0x68;
  if ((int)DAT_100080b8 < 0x68) {
    uVar16 = DAT_100080b8;
  }
  uVar9 = (ulong)(int)DAT_100080bc;
  uVar7 = 0xc;
  if ((int)DAT_100080bc < 0xc) {
    uVar7 = DAT_100080bc;
  }
  iVar12 = (int)local_38;
  uVar15 = iVar12 - 0x10;
  local_40 = CONCAT44(PF_PART4(local_40, 4),uVar15);
  uVar14 = DAT_100080b8;
  if ((int)uVar15 < (int)DAT_100080b8) {
    uVar14 = uVar15;
  }
  uVar25 = 0;
  if (0xf < iVar12) {
    uVar25 = uVar14;
  }
  uVar27 = 0x4a;
  if ((int)DAT_100080bc < 0x4a) {
    uVar27 = DAT_100080bc;
  }
  uVar17 = (ulong)uVar27;
  if (0xc < (long)uVar9) {
    local_48 = (ulong)uVar7;
    uVar22 = local_48;
LAB_10001b9c:
    do {
      if ((int)uVar25 <= (int)uVar16) goto LAB_10001b90;
      uVar27 = uVar16;
      do {
        if ((((param_1 != 0) && ((int)(uint)uVar22 < (int)uVar4)) &&
            (-1 < (int)(uVar27 | (uint)uVar22))) &&
           ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar27 < (int)uVar24)))) {
          lVar13 = (ulong)uVar27 + uVar22 * uVar23;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xfa;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xfa;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xfa;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
        }
        uVar27 = uVar27 + 1;
      } while (uVar25 != uVar27);
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar17);
    uVar27 = uVar16;
    do {
      if ((param_1 != 0) &&
         (((int)uVar27 < (int)uVar24 && -1 < (int)(uVar27 | uVar7)) &&
          *(long *)(param_1 + 0x350) != 0)) {
        lVar13 = (ulong)uVar27 + local_48 * uVar23;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
      }
      uVar27 = uVar27 + 1;
    } while (uVar25 != uVar27);
    if (0x49 < (int)uVar4) {
      uVar27 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar27 < (int)uVar24 && -1 < (int)uVar27) && *(long *)(param_1 + 0x350) != 0)) {
          lVar13 = (ulong)uVar27 + uVar23 * 0x49;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0x94;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0x94;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0x94;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
        }
        uVar27 = uVar27 + 1;
      } while (uVar25 != uVar27);
    }
LAB_10001ca5:
    lVar13 = (uVar23 * local_48 + (ulong)uVar16) * 4;
    lVar28 = uVar17 - local_48;
    do {
      if ((((0x68 < (int)uVar24) && (param_1 != 0)) && ((int)uVar7 < (int)uVar4)) &&
         ((-1 < (int)(uVar16 | uVar7) && (*(long *)(param_1 + 0x350) != 0)))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13) = 0x94;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13) = 0xff;
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + uVar23 * 4;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  uVar7 = iVar12 - 0x11;
  uVar16 = uVar24;
  if ((int)uVar7 < (int)uVar24) {
    uVar16 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar15 < 0) {
    uVar14 = 0;
  }
  if (0xc < (int)uVar4) {
    uVar22 = 0xc;
    do {
      if ((int)uVar16 < (int)uVar14) {
        uVar4 = uVar16;
        do {
          if (((param_1 != 0) && (uVar22 < uVar9)) &&
             ((-1 < (int)uVar4 && ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar4 < (int)uVar24))))
             )) {
            lVar13 = (ulong)uVar4 + uVar22 * uVar23;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0x94;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0x94;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0x94;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar14 != uVar4);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar17);
  }
  recovered_10005a30(param_1,0x70,0x27,param_1 + 0x6210,0x282828,iVar12 - 0x88);
  uVar4 = DAT_100080bc;
  uVar24 = DAT_100080b8;
  uVar23 = (ulong)DAT_100080b8;
  uVar9 = (ulong)(int)DAT_100080bc;
  uVar16 = 0x6a;
  if ((int)DAT_100080bc < 0x6a) {
    uVar16 = DAT_100080bc;
  }
  uVar14 = DAT_100080b8 - 0x10;
  uVar7 = 0x10;
  if ((int)DAT_100080b8 < 0x10) {
    uVar7 = DAT_100080b8;
  }
  uVar15 = 0;
  if (0xf < (int)DAT_100080b8) {
    uVar15 = uVar14;
  }
  uVar25 = 0x156;
  if ((int)DAT_100080bc < 0x156) {
    uVar25 = DAT_100080bc;
  }
  uVar17 = (ulong)uVar25;
  if (0x6a < (long)uVar9) {
    local_38 = (ulong)uVar16;
    uVar22 = local_38;
LAB_10001e6c:
    do {
      if ((int)uVar15 <= (int)uVar7) goto LAB_10001e60;
      uVar25 = uVar7;
      do {
        if ((((param_1 != 0) && ((int)(uint)uVar22 < (int)uVar4)) &&
            (-1 < (int)(uVar25 | (uint)uVar22))) &&
           ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar25 < (int)uVar24)))) {
          lVar13 = (ulong)uVar25 + uVar22 * uVar23;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xff;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xff;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xff;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
        }
        uVar25 = uVar25 + 1;
      } while (uVar15 != uVar25);
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar17);
    uVar25 = uVar7;
    do {
      if ((param_1 != 0) &&
         (((int)uVar25 < (int)uVar24 && -1 < (int)(uVar25 | uVar16)) &&
          *(long *)(param_1 + 0x350) != 0)) {
        lVar13 = (ulong)uVar25 + local_38 * uVar23;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
      }
      uVar25 = uVar25 + 1;
    } while (uVar15 != uVar25);
    if (0x155 < (int)uVar4) {
      uVar25 = uVar7;
      do {
        if ((param_1 != 0) &&
           (((int)uVar25 < (int)uVar24 && -1 < (int)uVar25) && *(long *)(param_1 + 0x350) != 0)) {
          lVar13 = (ulong)uVar25 + uVar23 * 0x155;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xae;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xae;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xae;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
        }
        uVar25 = uVar25 + 1;
      } while (uVar15 != uVar25);
    }
LAB_10001f78:
    lVar13 = (uVar23 * local_38 + (ulong)uVar7) * 4;
    lVar28 = uVar17 - local_38;
    do {
      if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar16 < (int)uVar4)) &&
         ((-1 < (int)(uVar7 | uVar16) && (*(long *)(param_1 + 0x350) != 0)))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13) = 0xae;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13) = 0xff;
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + uVar23 * 4;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  uVar7 = uVar24 - 0x11;
  uVar16 = uVar24;
  if ((int)uVar7 < (int)uVar24) {
    uVar16 = uVar7;
  }
  local_60 = CONCAT44(PF_PART4(local_60, 4),uVar7);
  if ((int)uVar7 < 0) {
    uVar16 = 0;
  }
  uVar15 = uVar24;
  if ((int)uVar14 < (int)uVar24) {
    uVar15 = uVar14;
  }
  if ((int)uVar14 < 0) {
    uVar15 = 0;
  }
  if ((int)uVar4 < 0x6b) {
    local_68 = CONCAT71(PF_PART7(local_68, 1),(int)uVar24 < 0x11);
  }
  else {
    uVar22 = 0x6a;
    do {
      if ((int)uVar16 < (int)uVar15) {
        uVar14 = uVar16;
        do {
          if (((param_1 != 0) && (uVar22 < uVar9)) &&
             ((-1 < (int)uVar14 &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar14 < (int)uVar24)))))) {
            lVar13 = (ulong)uVar14 + uVar22 * uVar23;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xae;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xae;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xae;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
          }
          uVar14 = uVar14 + 1;
        } while (uVar15 != uVar14);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar17);
    uVar16 = 0x11;
    if ((int)uVar24 < 0x11) {
      uVar16 = uVar24;
    }
    local_68 = CONCAT71(PF_PART7(local_68, 1),(int)uVar24 < 0x11);
    uVar14 = 0;
    if (0x10 < (int)uVar24) {
      uVar14 = uVar7;
    }
    if (uVar4 != 0x6b) {
      uVar17 = 0x7d;
      if (uVar4 < 0x7d) {
        uVar17 = (ulong)uVar4;
      }
      uVar22 = 0x6b;
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar4 = uVar16;
          do {
            if ((((param_1 != 0) && (uVar22 < uVar9)) && (-1 < (int)uVar4)) &&
               ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar4 < (int)uVar24)))) {
              lVar13 = (ulong)uVar4 + uVar22 * uVar23;
              *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar13 * 4) = 0xee;
              *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar13 * 4) = 0xee;
              *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar13 * 4) = 0xee;
              *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar13 * 4) = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar14 != uVar4);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar17);
    }
  }
  plVar1 = (long *)(param_1 + 0x350);
  lVar13 = 0;
  do {
    iVar12 = (&DAT_100072e0)[lVar13];
    if (lVar13 == 2) {
      recovered_10005a30(param_1,iVar12 + 0x13U,0x70,(&DAT_10008080)[lVar13],0x824e14,0x78);
LAB_10002166:
      uVar16 = DAT_100080b8;
      uVar24 = iVar12 + 0xe;
      uVar23 = (ulong)DAT_100080b8;
      uVar4 = DAT_100080b8;
      if ((int)uVar24 < (int)DAT_100080b8) {
        uVar4 = uVar24;
      }
      uVar9 = (ulong)(int)DAT_100080bc;
      uVar7 = iVar12 + 0xfU;
      if ((int)DAT_100080b8 <= (int)(iVar12 + 0xfU)) {
        uVar7 = DAT_100080b8;
      }
      if (0x6b < (long)uVar9) {
        uVar17 = 0x7d;
        if (DAT_100080bc < 0x7d) {
          uVar17 = (ulong)DAT_100080bc;
        }
        uVar22 = 0x6b;
        do {
          if ((int)uVar24 < (int)uVar16) {
            uVar14 = uVar4;
            do {
              if (((param_1 != 0) && (uVar22 < uVar9)) &&
                 ((-1 < (int)uVar14 && ((*plVar1 != 0 && ((int)uVar14 < (int)uVar16)))))) {
                lVar28 = (ulong)uVar14 + uVar22 * uVar23;
                *(undefined1 *)(*plVar1 + lVar28 * 4) = 0xbc;
                *(undefined1 *)(*plVar1 + 1 + lVar28 * 4) = 0xbc;
                *(undefined1 *)(*plVar1 + 2 + lVar28 * 4) = 0xbc;
                *(undefined1 *)(*plVar1 + 3 + lVar28 * 4) = 0xff;
              }
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar17);
      }
    }
    else {
      recovered_10005a30(param_1,iVar12 + 0x13U,0x70,(&DAT_10008080)[lVar13],0x262626,0x78);
      if (lVar13 != 0) goto LAB_10002166;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 7);
  local_40 = param_1 + 0x2494;
  uVar23 = 0;
  do {
    uVar4 = DAT_100080bc;
    uVar24 = DAT_100080b8;
    uVar9 = (ulong)*(uint *)(param_1 + 0x60b4);
    if ((uVar23 < uVar9) && (*(int *)(local_40 + uVar23 * 0x1b8) == *(int *)(param_1 + 0x368))) {
      uVar11 = 0xee;
      uVar5 = 0xab;
      uVar16 = 0x65;
      local_48 = CONCAT44(PF_PART4(local_48, 4),0xffffff);
    }
    else {
      uVar16 = -(uint)((uVar23 & 1) == 0) | 0xfffdf2eb;
      uVar5 = (undefined1)(uVar16 >> 8);
      uVar11 = (undefined1)(uVar16 >> 0x10);
      local_48 = CONCAT44(PF_PART4(local_48, 4),0x1e1e1e);
    }
    uVar17 = (uVar23 * 9 << 0x21) + 0x7c00000011;
    uVar22 = uVar17 >> 0x20;
    uVar18 = (ulong)DAT_100080b8;
    uVar7 = 0x11;
    if ((int)DAT_100080b8 < 0x11) {
      uVar7 = DAT_100080b8;
    }
    uVar14 = DAT_100080b8;
    if ((int)(uint)local_60 < (int)DAT_100080b8) {
      uVar14 = (uint)local_60;
    }
    if ((char)local_68 != '\0') {
      uVar14 = 0;
    }
    iVar12 = (int)(uVar17 >> 0x20);
    uVar15 = iVar12 + 0x12;
    if ((int)DAT_100080bc <= (int)uVar15) {
      uVar15 = DAT_100080bc;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar15);
    if (iVar12 < (int)DAT_100080bc) {
      do {
        uVar25 = (uint)uVar22;
        if ((int)uVar7 < (int)uVar14) {
          uVar27 = uVar7;
          do {
            if ((((param_1 != 0) && (-1 < (int)(uVar27 | uVar25))) && (*plVar1 != 0)) &&
               (((int)uVar27 < (int)uVar24 && ((int)uVar25 < (int)uVar4)))) {
              lVar13 = (ulong)uVar27 + uVar22 * uVar18;
              *(char *)(*plVar1 + lVar13 * 4) = (char)uVar16;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = uVar5;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = uVar11;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar27 = uVar27 + 1;
          } while (uVar14 != uVar27);
        }
        uVar22 = (ulong)(uVar25 + 1);
      } while (uVar25 + 1 != uVar15);
      uVar9 = (ulong)*(uint *)(param_1 + 0x60b4);
    }
    local_50 = uVar23;
    if (uVar23 < uVar9) {
      local_38 = uVar23 * 0x1b8;
      pf_varargs_10006f19__4_(local_a8,0x40,&DAT_10007112,*(uint *)(local_40 + local_38));
      iVar12 = (int)uVar23 * 0x12 + 0x81;
      local_58 = CONCAT44(PF_PART4(local_58, 4),iVar12);
      recovered_10005a30(param_1,0x25,iVar12,(long)local_a8,(uint)local_48,0x46);
      uVar9 = local_38;
      uVar23 = local_40;
      uVar4 = (uint)local_48;
      recovered_10005a30(param_1,0x83,iVar12,local_38 + local_40 + 0x40,(uint)local_48,0xf8);
      uVar24 = *(uint *)(uVar23 + 0x1b4 + uVar9);
      pf_varargs_10006f19__4__4_(local_a8,0x40,str_10007115,uVar24 / 10,uVar24 % 10);
      iVar12 = (int)local_58;
      recovered_10005a30(param_1,0x1a2,(int)local_58,(long)local_a8,uVar4,0x32);
      uVar9 = local_38;
      pf_varargs_10006f19__4_(local_a8,0x40,&DAT_10007112,*(uint *)(local_40 + 8 + local_38));
      recovered_10005a30(param_1,0x1fe,iVar12,(long)local_a8,uVar4,0x2e);
      uVar23 = *(ulong *)(local_40 + 0x20 + uVar9);
      if (uVar23 < 0x40000000) {
        if (0xfffff < uVar23) {
          uVar24 = 0xfffff;
          sVar6 = 0x14;
          puVar20 = &DAT_10007120;
          goto LAB_100025c0;
        }
        if (0x3ff < uVar23) {
          uVar24 = 0x3ff;
          sVar6 = 10;
          puVar20 = &DAT_10007123;
          goto LAB_100025c0;
        }
        pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,uVar23,((uintptr_t)pf_module_state + 0x214U));
      }
      else {
        uVar24 = 0x3fffffff;
        sVar6 = 0x1e;
        puVar20 = &DAT_1000711d;
LAB_100025c0:
        pf_varargs_10006f19__8__8__8_
                  (local_a8,0x40,str_10007126,uVar23 >> sVar6,
                   (ulong)(uVar24 & (uint)uVar23) * 100 >> sVar6,(ulonglong)puVar20);
      }
      uVar9 = uVar9 + local_40;
      recovered_10005a30(param_1,0x230,(int)local_58,(long)local_a8,(uint)local_48,0x60);
      uVar23 = *(ulong *)(uVar9 + 0x28);
      local_38 = uVar9;
      if (uVar23 < 0x40000000) {
        if (0xfffff < uVar23) {
          uVar24 = 0xfffff;
          sVar6 = 0x14;
          puVar20 = &DAT_10007120;
          goto LAB_10002241;
        }
        if (0x3ff < uVar23) {
          uVar24 = 0x3ff;
          sVar6 = 10;
          puVar20 = &DAT_10007123;
          goto LAB_10002241;
        }
        pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,uVar23,((uintptr_t)pf_module_state + 0x214U));
      }
      else {
        uVar24 = 0x3fffffff;
        sVar6 = 0x1e;
        puVar20 = &DAT_1000711d;
LAB_10002241:
        pf_varargs_10006f19__8__8__8_
                  (local_a8,0x40,str_10007126,uVar23 >> sVar6,
                   (ulong)(uVar24 & (uint)uVar23) * 100 >> sVar6,(ulonglong)puVar20);
      }
      iVar12 = (int)local_58;
      uVar24 = (uint)local_48;
      recovered_10005a30(param_1,0x2a0,(int)local_58,(long)local_a8,(uint)local_48,0x68);
      recovered_10005a30(param_1,0x317,iVar12,local_38 + 0xa0,uVar24,0x48);
    }
    uVar23 = local_50 + 1;
  } while (uVar23 != 0xb);
  local_68 = 0x1800000088;
  uVar23 = 0;
  do {
    uVar4 = DAT_100080bc;
    uVar24 = DAT_100080b8;
    local_60 = 0x1800000074;
    if (uVar23 == 1) {
      local_60 = local_68;
    }
    uVar9 = uVar23 * 0x74 + 0xda;
    if (uVar23 < 2) {
      uVar9 = uVar23 * 0x74 + 0xc6;
    }
    local_50 = (ulong)((int)uVar9 + 0x14);
    if (uVar23 < 3) {
      local_50 = uVar9;
    }
    uVar7 = (uint)(local_50 >> 0x20) | 0x164;
    uVar9 = (ulong)DAT_100080b8;
    uVar14 = (uint)local_50;
    uVar16 = DAT_100080b8;
    if ((int)uVar14 < (int)DAT_100080b8) {
      uVar16 = uVar14;
    }
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar16);
    uVar15 = uVar16;
    if ((int)uVar14 < 0) {
      uVar15 = 0;
    }
    uVar17 = (ulong)DAT_100080bc;
    uVar25 = DAT_100080bc;
    if ((int)uVar7 < (int)DAT_100080bc) {
      uVar25 = uVar7;
    }
    iVar12 = (int)local_60;
    uVar8 = uVar14 + iVar12;
    uVar27 = DAT_100080b8;
    if ((int)uVar8 < (int)DAT_100080b8) {
      uVar27 = uVar8;
    }
    local_48 = CONCAT44(PF_PART4(local_48, 4),uVar27);
    uVar19 = uVar27;
    if ((int)uVar8 < 0) {
      uVar19 = 0;
    }
    uVar8 = uVar7 + 0x18;
    if ((int)DAT_100080bc <= (int)(uVar7 + 0x18)) {
      uVar8 = DAT_100080bc;
    }
    if ((int)uVar7 < -0x18) {
      uVar8 = 0;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar8);
    if ((int)uVar25 < (int)uVar8) {
      uVar26 = 0xfff4f4f4;
      if (uVar23 == *(uint *)(param_1 + 0x358)) {
        uVar26 = 0xffffd89a;
      }
      do {
        if ((int)uVar15 < (int)uVar19) {
          uVar7 = uVar15;
          do {
            if (((param_1 != 0) && ((int)uVar25 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | uVar25) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))))) {
              lVar13 = (ulong)uVar7 + uVar25 * uVar9;
              *(char *)(*plVar1 + lVar13 * 4) = (char)uVar26;
              *(char *)(*plVar1 + 1 + lVar13 * 4) = (char)((uint)uVar26 >> 8);
              *(char *)(*plVar1 + 2 + lVar13 * 4) = (char)((uint)uVar26 >> 0x10);
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar19 != uVar7);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar8);
    }
    uVar7 = 0x164;
    if ((int)uVar4 < 0x164) {
      uVar7 = uVar4;
    }
    if (0x164 < (int)uVar4) {
      if ((int)uVar14 < (int)uVar27) {
        uVar25 = uVar16;
        do {
          if ((param_1 != 0) &&
             (((int)uVar25 < (int)uVar24 && -1 < (int)(uVar25 | uVar7)) && *plVar1 != 0)) {
            lVar13 = (ulong)uVar25 + uVar7 * uVar9;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar25 = uVar25 + 1;
        } while (uVar27 != uVar25);
      }
      if ((0x17b < (int)uVar4) && ((int)uVar15 < (int)uVar19)) {
        do {
          if ((param_1 != 0) && (((int)uVar15 < (int)uVar24 && -1 < (int)uVar15) && *plVar1 != 0)) {
            lVar13 = (ulong)uVar15 + uVar9 * 0x17b;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0x7e;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar15 = uVar15 + 1;
        } while (uVar19 != uVar15);
      }
    }
    uVar15 = uVar14 | 1;
    if ((int)uVar24 <= (int)(uVar14 | 1)) {
      uVar15 = uVar24;
    }
    if ((int)uVar14 < -1) {
      uVar15 = 0;
    }
    uVar25 = 0x17c;
    if ((int)uVar4 < 0x17c) {
      uVar25 = uVar4;
    }
    if (0x164 < (int)uVar4) {
      uVar22 = (ulong)uVar7;
      do {
        if ((int)uVar16 < (int)uVar15) {
          uVar7 = uVar16;
          do {
            if ((((param_1 != 0) && ((int)(uint)uVar22 < (int)uVar4)) &&
                (-1 < (int)(uVar7 | (uint)uVar22))) &&
               ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))) {
              lVar13 = (ulong)uVar7 + uVar22 * uVar9;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar15 != uVar7);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar25);
    }
    uVar7 = (uVar14 + iVar12) - 1;
    uVar16 = uVar24;
    if ((int)uVar7 < (int)uVar24) {
      uVar16 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar16 = 0;
    }
    uVar15 = uVar14 + iVar12;
    if ((int)uVar24 <= (int)(uVar14 + iVar12)) {
      uVar15 = uVar24;
    }
    if ((int)uVar7 < -1) {
      uVar15 = 0;
    }
    if (0x164 < (int)uVar4) {
      uVar22 = 0x164;
      do {
        if ((int)uVar16 < (int)uVar15) {
          uVar4 = uVar16;
          do {
            if (((param_1 != 0) && (uVar22 < uVar17)) &&
               ((-1 < (int)uVar4 && ((*plVar1 != 0 && ((int)uVar4 < (int)uVar24)))))) {
              lVar13 = (ulong)uVar4 + uVar22 * uVar9;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0x7e;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar15 != uVar4);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar25);
    }
    local_58 = uVar23;
    recovered_10005a30(param_1,uVar14 + 0xf,0x16c,
                       (long)(&DAT_100072fc + *(int *)(&DAT_100072fc + uVar23 * 4)),0x1e1e1e,
                       iVar12 - 0x16);
    uVar4 = DAT_100080bc;
    uVar24 = DAT_100080b8;
    uVar23 = uVar23 + 1;
  } while (uVar23 != 5);
  uVar23 = (ulong)DAT_100080b8;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x358))) {
  case 0:
    uVar16 = 0x10;
    if ((int)DAT_100080b8 < 0x10) {
      uVar16 = DAT_100080b8;
    }
    uVar7 = 0x17a;
    if ((int)DAT_100080bc < 0x17a) {
      uVar7 = DAT_100080bc;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar7);
    uVar15 = DAT_100080b8 - 0x10;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar15);
    uVar14 = DAT_100080b8;
    if ((int)uVar15 < (int)DAT_100080b8) {
      uVar14 = uVar15;
    }
    uVar25 = uVar14;
    if ((int)DAT_100080b8 < 0x10) {
      uVar25 = 0;
    }
    uVar27 = 0x1f8;
    if ((int)DAT_100080bc < 0x1f8) {
      uVar27 = DAT_100080bc;
    }
    local_48 = CONCAT44(PF_PART4(local_48, 4),uVar27);
    if (0x17a < (int)DAT_100080bc) {
      local_50 = (ulong)uVar7;
      uVar9 = (ulong)uVar27;
      uVar17 = local_50;
LAB_10002b7c:
      do {
        if ((int)uVar25 <= (int)uVar16) goto LAB_10002b70;
        uVar8 = uVar16;
        do {
          if ((((int)(uint)uVar17 < (int)uVar4) && (-1 < (int)(uVar8 | (uint)uVar17))) &&
             ((*plVar1 != 0 && ((int)uVar8 < (int)uVar24)))) {
            lVar13 = (ulong)uVar8 + uVar17 * uVar23;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar25 != uVar8);
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
      uVar8 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar8 < (int)uVar24 && -1 < (int)(uVar8 | uVar7)) && *plVar1 != 0)) {
          lVar13 = (ulong)uVar8 + local_50 * uVar23;
          *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
        }
        uVar8 = uVar8 + 1;
      } while (uVar25 != uVar8);
      if (0x1f7 < (int)uVar4) {
        uVar8 = uVar16;
        do {
          if ((param_1 != 0) && (((int)uVar8 < (int)uVar24 && -1 < (int)uVar8) && *plVar1 != 0)) {
            lVar13 = (ulong)uVar8 + uVar23 * 0x1f7;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar25 != uVar8);
      }
LAB_10003f1c:
      lVar28 = (uVar23 * local_50 + (ulong)uVar16) * 4;
      lVar13 = uVar9 - local_50;
      uVar25 = uVar7;
      do {
        if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar25 < (int)uVar4)) &&
           ((-1 < (int)(uVar16 | uVar25) && (*plVar1 != 0)))) {
          *(undefined1 *)(*plVar1 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar28) = 0xff;
        }
        uVar25 = uVar25 + 1;
        lVar28 = lVar28 + uVar23 * 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar25 = uVar24 - 0x11;
    uVar16 = uVar24;
    if ((int)uVar25 < (int)uVar24) {
      uVar16 = uVar25;
    }
    if ((int)uVar25 < 0) {
      uVar16 = 0;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0;
    }
    if (0x17a < (int)uVar4) {
      uVar9 = (ulong)uVar7;
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar7 = uVar16;
          do {
            if (((param_1 != 0) && ((int)(uint)uVar9 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | (uint)uVar9) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))))
               ) {
              lVar13 = (ulong)uVar7 + uVar9 * uVar23;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar27);
    }
    recovered_10005a30(param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x265U),0x282828,0x46);
    pf_varargs_10006f19__4__4_
              (local_a8,0x40,str_10007115,*(uint *)(param_1 + 0x60c0) / 10,
               *(uint *)(param_1 + 0x60c0) % 10);
    recovered_10005a30(param_1,0x92,0x19c,(long)local_a8,0x52c448,0x46);
    recovered_10005a30(param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x26dU),0x282828,0x50);
    pf_varargs_10006f19__4__4_
              (local_a8,0x40,str_10007115,*(uint *)(param_1 + 0x60c4) / 10,
               *(uint *)(param_1 + 0x60c4) % 10);
    recovered_10005a30(param_1,0x92,0x1b4,(long)local_a8,0x4b4bd0,0x46);
    recovered_10005a30(param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x277U),0x282828,0x46);
    pf_varargs_10006f19__4__4_
              (local_a8,0x40,str_10007115,*(uint *)(param_1 + 0x60c8) / 10,
               *(uint *)(param_1 + 0x60c8) % 10);
    recovered_10005a30(param_1,0x92,0x1cc,(long)local_a8,0x282828,0x46);
    recovered_10005d20(param_1,0xfe,0x196,0x1cf000);
    recovered_10005d20(param_1,0xfe,0x1ae,0x1418f5);
    pf_varargs_10006f19__4_(local_a8,0x40,str_10007186,*(uint *)(param_1 + 0x39c));
    recovered_10005a30(param_1,0x15a,0x19c,(long)local_a8,0x282828,0x6e);
    pf_varargs_10006f19__4_(local_a8,0x40,str_10007192,*(uint *)(param_1 + 0x398));
    recovered_10005a30(param_1,0x15a,0x1b4,(long)local_a8,0x282828,0x78);
    recovered_10005a30(param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x299U),0x282828,0x50);
    recovered_100061c0(param_1,0x222,0x62,param_1 + 0x60f0,param_1 + 0x6138,'\x01');
    break;
  case 1:
    local_40 = *(ulong *)(param_1 + 0x378);
    uVar9 = *(ulong *)(param_1 + 0x380);
    local_50 = 0;
    if (local_40 <= uVar9) {
      local_50 = uVar9 - local_40;
    }
    uVar16 = 0x10;
    if ((int)DAT_100080b8 < 0x10) {
      uVar16 = DAT_100080b8;
    }
    uVar7 = 0x17a;
    if ((int)DAT_100080bc < 0x17a) {
      uVar7 = DAT_100080bc;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar7);
    uVar15 = DAT_100080b8 - 0x10;
    local_60 = CONCAT44(PF_PART4(local_60, 4),uVar15);
    uVar14 = DAT_100080b8;
    if ((int)uVar15 < (int)DAT_100080b8) {
      uVar14 = uVar15;
    }
    uVar25 = uVar14;
    if ((int)DAT_100080b8 < 0x10) {
      uVar25 = 0;
    }
    uVar27 = 0x1f8;
    if ((int)DAT_100080bc < 0x1f8) {
      uVar27 = DAT_100080bc;
    }
    local_58 = CONCAT44(PF_PART4(local_58, 4),uVar27);
    if (0x17a < (int)DAT_100080bc) {
      local_68 = (ulong)uVar7;
      uVar17 = (ulong)uVar27;
      uVar22 = local_68;
LAB_1000309c:
      do {
        if ((int)uVar25 <= (int)uVar16) goto LAB_10003090;
        uVar8 = uVar16;
        do {
          if (((((int)(uint)uVar22 < (int)uVar4) && (-1 < (int)(uVar8 | (uint)uVar22))) &&
              (*plVar1 != 0)) && ((int)uVar8 < (int)uVar24)) {
            lVar13 = (ulong)uVar8 + uVar22 * uVar23;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar25 != uVar8);
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar17);
      uVar8 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar8 < (int)uVar24 && -1 < (int)(uVar8 | uVar7)) && *plVar1 != 0)) {
          lVar13 = (ulong)uVar8 + local_68 * uVar23;
          *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
        }
        uVar8 = uVar8 + 1;
      } while (uVar25 != uVar8);
      if (0x1f7 < (int)uVar4) {
        uVar8 = uVar16;
        do {
          if ((param_1 != 0) && (((int)uVar8 < (int)uVar24 && -1 < (int)uVar8) && *plVar1 != 0)) {
            lVar13 = (ulong)uVar8 + uVar23 * 0x1f7;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar25 != uVar8);
      }
LAB_100042c1:
      lVar13 = (uVar23 * local_68 + (ulong)uVar16) * 4;
      lVar28 = uVar17 - local_68;
      uVar25 = uVar7;
      do {
        if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar25 < (int)uVar4)) &&
           ((-1 < (int)(uVar16 | uVar25) && (*plVar1 != 0)))) {
          *(undefined1 *)(*plVar1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13) = 0xff;
        }
        uVar25 = uVar25 + 1;
        lVar13 = lVar13 + uVar23 * 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    uVar25 = uVar24 - 0x11;
    uVar16 = uVar24;
    if ((int)uVar25 < (int)uVar24) {
      uVar16 = uVar25;
    }
    if ((int)uVar25 < 0) {
      uVar16 = 0;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0;
    }
    if (0x17a < (int)uVar4) {
      uVar17 = (ulong)uVar7;
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar7 = uVar16;
          do {
            if (((param_1 != 0) && ((int)(uint)uVar17 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | (uint)uVar17) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24))))
               )) {
              lVar13 = (ulong)uVar7 + uVar17 * uVar23;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar27);
    }
    local_48 = uVar9;
    if (local_40 < 0x40000000) {
      if (0xfffff < local_40) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10004443;
      }
      if (0x3ff < local_40) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10004443;
      }
      pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,local_40,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10004443:
      pf_varargs_10006f19__8__8__8_
                (local_a8,0x40,str_10007126,local_40 >> sVar6,
                 (ulong)(uVar24 & (uint)local_40) * 100 >> sVar6,(ulonglong)puVar20);
    }
    recovered_10005a30(param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x2a3U),0x282828,0x3c);
    recovered_10005a30(param_1,0x94,0x19c,(long)local_a8,0x52c448,0x6e);
    if (local_50 < 0x40000000) {
      if (0xfffff < local_50) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10004514;
      }
      if (0x3ff < local_50) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10004514;
      }
      pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,local_50,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10004514:
      pf_varargs_10006f19__8__8__8_
                (local_a8,0x40,str_10007126,local_50 >> sVar6,
                 (ulong)(uVar24 & (uint)local_50) * 100 >> sVar6,(ulonglong)puVar20);
    }
    recovered_10005a30(param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x2a9U),0x282828,0x3c);
    recovered_10005a30(param_1,0x94,0x1b4,(long)local_a8,0xcd4646,0x6e);
    if (uVar9 < 0x40000000) {
      if (0xfffff < uVar9) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_100045e0;
      }
      if (0x3ff < uVar9) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_100045e0;
      }
      pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,uVar9,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_100045e0:
      pf_varargs_10006f19__8__8__8_
                (local_a8,0x40,str_10007126,uVar9 >> sVar6,
                 (ulong)(uVar24 & (uint)uVar9) * 100 >> sVar6,(ulonglong)puVar20);
    }
    recovered_10005a30(param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x2afU),0x282828,0x50);
    recovered_10005a30(param_1,0x1a2,0x19c,(long)local_a8,0x282828,0x6e);
    uVar4 = DAT_100080bc;
    uVar24 = DAT_100080b8;
    uVar23 = (ulong)DAT_100080b8;
    local_38 = (ulong)(int)DAT_100080b8;
    lVar13 = uVar23 * 0x660;
    local_40 = uVar23 * 4;
    iVar12 = -0x20;
    do {
      lVar28 = 0;
      do {
        iVar21 = (int)lVar28 + -0x20;
        if ((((uint)(iVar21 * iVar21 + iVar12 * iVar12) < 0x401) && (param_1 != 0)) &&
           (uVar16 = (int)lVar28 + 0x214,
           (((int)uVar16 < (int)uVar24 && -1 < (int)(uVar16 | iVar12 + 0x1b8U)) &&
           (int)(iVar12 + 0x1b8U) < (int)uVar4) && *plVar1 != 0)) {
          *(undefined1 *)(*plVar1 + lVar13 + 0x850 + lVar28 * 4) = 0;
          *(undefined1 *)(*plVar1 + lVar13 + 0x851 + lVar28 * 4) = 0xeb;
          *(undefined1 *)(*plVar1 + lVar13 + 0x852 + lVar28 * 4) = 0x1c;
          *(undefined1 *)(*plVar1 + lVar13 + 0x853 + lVar28 * 4) = 0xff;
        }
        lVar28 = lVar28 + 1;
      } while ((int)lVar28 != 0x41);
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + local_40;
    } while (iVar12 != 0x21);
    if (local_48 != 0) {
      uVar9 = local_50 * 100;
      if ((uVar9 | local_48) >> 0x20 == 0) {
        uVar9 = (uVar9 & 0xffffffff) / (local_48 & 0xffffffff);
      }
      else {
        uVar9 = uVar9 / local_48;
      }
      if (10 < uVar9) {
        lVar13 = uVar23 * 0x660;
        iVar12 = -0x20;
        do {
          lVar28 = 0x234;
          do {
            if ((((lVar28 + -0x234) * (lVar28 + -0x234) + (ulong)(uint)(iVar12 * iVar12) < 0x401) &&
                (param_1 != 0)) &&
               ((lVar28 < (long)local_38 && iVar12 + 0x1b8 < (int)uVar4) && *plVar1 != 0)) {
              *(undefined1 *)(*plVar1 + lVar13 + lVar28 * 4) = 0x28;
              *(undefined1 *)(*plVar1 + lVar13 + 1 + lVar28 * 4) = 0x28;
              *(undefined1 *)(*plVar1 + lVar13 + 2 + lVar28 * 4) = 0xe6;
              *(undefined1 *)(*plVar1 + lVar13 + 3 + lVar28 * 4) = 0xff;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0x255);
          lVar13 = lVar13 + local_40;
          bVar29 = iVar12 != 0;
          iVar12 = iVar12 + 1;
        } while (bVar29);
      }
    }
    pcVar10 = local_a8;
    uVar24 = 0x20c;
    iVar12 = 0x1e2;
    uVar4 = 100;
    goto LAB_10004b95;
  case 2:
    local_60 = *(ulonglong *)(param_1 + 0x428);
    local_58 = *(ulonglong *)(param_1 + 0x430);
    uVar16 = 0x10;
    if ((int)DAT_100080b8 < 0x10) {
      uVar16 = DAT_100080b8;
    }
    local_50 = *(ulong *)(param_1 + 0x438);
    uVar7 = 0x17a;
    if ((int)DAT_100080bc < 0x17a) {
      uVar7 = DAT_100080bc;
    }
    uVar15 = DAT_100080b8 - 0x10;
    local_68 = CONCAT44(PF_PART4(local_68, 4),uVar15);
    uVar14 = DAT_100080b8;
    if ((int)uVar15 < (int)DAT_100080b8) {
      uVar14 = uVar15;
    }
    uVar25 = uVar14;
    if ((int)DAT_100080b8 < 0x10) {
      uVar25 = 0;
    }
    uVar27 = 0x1f8;
    if ((int)DAT_100080bc < 0x1f8) {
      uVar27 = DAT_100080bc;
    }
    local_48 = *(ulong *)(param_1 + 0x440);
    uVar9 = (ulong)uVar7;
    local_38 = (ulong)uVar27;
    if (0x17a < (int)DAT_100080bc) {
      uVar17 = uVar9;
LAB_10002d9d:
      do {
        if ((int)uVar25 <= (int)uVar16) goto LAB_10002d90;
        uVar27 = uVar16;
        do {
          if (((((int)(uint)uVar17 < (int)uVar4) && (-1 < (int)(uVar27 | (uint)uVar17))) &&
              (*plVar1 != 0)) && ((int)uVar27 < (int)uVar24)) {
            lVar13 = (ulong)uVar27 + uVar17 * uVar23;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
        uVar17 = uVar17 + 1;
      } while (uVar17 != local_38);
      local_40 = uVar9 * uVar23;
      uVar27 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar27 < (int)uVar24 && -1 < (int)(uVar27 | uVar7)) && *plVar1 != 0)) {
          lVar13 = uVar27 + local_40;
          *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
        }
        uVar27 = uVar27 + 1;
      } while (uVar25 != uVar27);
      if (0x1f7 < (int)uVar4) {
        local_40 = uVar23 * 0x1f7;
        uVar27 = uVar16;
        do {
          if ((param_1 != 0) && (((int)uVar27 < (int)uVar24 && -1 < (int)uVar27) && *plVar1 != 0)) {
            lVar13 = uVar27 + local_40;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
      }
LAB_100033fa:
      lVar13 = (uVar23 * uVar9 + (ulong)uVar16) * 4;
      lVar28 = local_38 - uVar9;
      do {
        if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar7 < (int)uVar4)) &&
           ((-1 < (int)(uVar16 | uVar7) && (*plVar1 != 0)))) {
          *(undefined1 *)(*plVar1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13) = 0xff;
        }
        uVar7 = uVar7 + 1;
        lVar13 = lVar13 + uVar23 * 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    uVar7 = uVar24 - 0x11;
    uVar16 = uVar24;
    if ((int)uVar7 < (int)uVar24) {
      uVar16 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar16 = 0;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0;
    }
    if (0x17a < (int)uVar4) {
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar7 = uVar16;
          do {
            if (((param_1 != 0) && ((int)(uint)uVar9 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | (uint)uVar9) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))))
               ) {
              lVar13 = (ulong)uVar7 + uVar9 * uVar23;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != local_38);
    }
    recovered_100069e0(param_1);
    pf_varargs_10006f19__8_(local_a8,0x40,str_100071bf,local_60);
    recovered_10005a30(param_1,0x58,0x1a8,(long)local_a8,0x282828,0x82);
    pf_varargs_10006f19__8_(local_a8,0x40,str_100071ce,local_58);
    recovered_10005a30(param_1,0x58,0x1be,(long)local_a8,0x282828,0x8c);
    pf_varargs_10006f19__4_(local_a8,0x40,str_100071df,*(uint *)(param_1 + 0x60cc));
    recovered_10005a30(param_1,0x58,0x1d4,(long)local_a8,0x282828,0x82);
    pf_varargs_10006f19__4_(local_a8,0x40,str_100071ed,*(uint *)(param_1 + 0x60d0));
    recovered_10005a30(param_1,0x58,0x1ea,(long)local_a8,0x282828,0x8c);
    if (local_50 < 0x40000000) {
      if (0xfffff < local_50) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10003666;
      }
      if (0x3ff < local_50) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10003666;
      }
      pf_varargs_10006f19__8__8_(local_128,0x40,str_10007135,local_50,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10003666:
      pf_varargs_10006f19__8__8__8_
                (local_128,0x40,str_10007126,local_50 >> sVar6,
                 (ulong)(uVar24 & (uint)local_50) * 100 >> sVar6,(ulonglong)puVar20);
    }
    pf_varargs_10006f19__8_(local_a8,0x40,str_100071fc,(ulonglong)local_128);
    recovered_10005a30(param_1,0x12e,0x1a8,(long)local_a8,0x282828,0xaa);
    if (local_48 < 0x40000000) {
      if (0xfffff < local_48) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10003732;
      }
      if (0x3ff < local_48) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10003732;
      }
      pf_varargs_10006f19__8__8_(local_128,0x40,str_10007135,local_48,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10003732:
      pf_varargs_10006f19__8__8__8_
                (local_128,0x40,str_10007126,local_48 >> sVar6,
                 (ulong)(uVar24 & (uint)local_48) * 100 >> sVar6,(ulonglong)puVar20);
    }
    pf_varargs_10006f19__8_(local_a8,0x40,str_1000720a,(ulonglong)local_128);
    recovered_10005a30(param_1,0x12e,0x1be,(long)local_a8,0x282828,0xb4);
    uVar23 = *(ulong *)(param_1 + 0x60d8);
    if (uVar23 < 0x40000000) {
      if (0xfffff < uVar23) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_100037fe;
      }
      if (0x3ff < uVar23) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_100037fe;
      }
      pf_varargs_10006f19__8__8_(local_e8,0x20,str_10007135,uVar23,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_100037fe:
      pf_varargs_10006f19__8__8__8_
                (local_e8,0x20,str_10007126,uVar23 >> sVar6,
                 (ulong)(uVar24 & (uint)uVar23) * 100 >> sVar6,(ulonglong)puVar20);
    }
    pf_varargs_10006f19__8_(local_128,0x40,str_10007263,(ulonglong)local_e8);
    pf_varargs_10006f19__8_(local_a8,0x40,str_1000721b,(ulonglong)local_128);
    recovered_10005a30(param_1,0x12e,0x1d4,(long)local_a8,0x52c448,0xbe);
    uVar23 = *(ulong *)(param_1 + 0x60e0);
    if (uVar23 < 0x40000000) {
      if (0xfffff < uVar23) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_100038e2;
      }
      if (0x3ff < uVar23) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_100038e2;
      }
      pf_varargs_10006f19__8__8_(local_e8,0x20,str_10007135,uVar23,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_100038e2:
      pf_varargs_10006f19__8__8__8_
                (local_e8,0x20,str_10007126,uVar23 >> sVar6,
                 (ulong)(uVar24 & (uint)uVar23) * 100 >> sVar6,(ulonglong)puVar20);
    }
    pf_varargs_10006f19__8_(local_128,0x40,str_10007263,(ulonglong)local_e8);
    pf_varargs_10006f19__8_(local_a8,0x40,str_1000722d,(ulonglong)local_128);
    recovered_10005a30(param_1,0x12e,0x1ea,(long)local_a8,0x4b4bd0,200);
    uVar23 = *(ulong *)(param_1 + 0x60e8);
    if (uVar23 < 0x40000000) {
      if (0xfffff < uVar23) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_100039bf;
      }
      if (0x3ff < uVar23) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_100039bf;
      }
      pf_varargs_10006f19__8__8_(local_e8,0x20,str_10007135,uVar23,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_100039bf:
      pf_varargs_10006f19__8__8__8_
                (local_e8,0x20,str_10007126,uVar23 >> sVar6,
                 (ulong)(uVar24 & (uint)uVar23) * 100 >> sVar6,(ulonglong)puVar20);
    }
    pf_varargs_10006f19__8_(local_128,0x40,str_10007263,(ulonglong)local_e8);
    pf_varargs_10006f19__8_(local_a8,0x40,str_10007242,(ulonglong)local_128);
    recovered_10005a30(param_1,0x232,0x18c,(long)local_a8,0x282828,0x82);
    recovered_100061c0(param_1,0x224,0x6a,param_1 + 0x6180,param_1 + 0x61c8,'\0');
    recovered_10005d20(param_1,0x1de,0x1ce,0x1cf000);
    recovered_10005d20(param_1,0x1de,0x1e6,0x1418f5);
    break;
  case 3:
    local_48 = *(ulong *)(param_1 + 0x418);
    local_40 = *(ulong *)(param_1 + 0x420);
    local_58 = 0;
    if (local_48 <= local_40) {
      local_58 = local_40 - local_48;
    }
    uVar16 = 0x10;
    if ((int)DAT_100080b8 < 0x10) {
      uVar16 = DAT_100080b8;
    }
    uVar7 = 0x17a;
    if ((int)DAT_100080bc < 0x17a) {
      uVar7 = DAT_100080bc;
    }
    uVar15 = DAT_100080b8 - 0x10;
    local_60 = CONCAT44(PF_PART4(local_60, 4),uVar15);
    uVar14 = DAT_100080b8;
    if ((int)uVar15 < (int)DAT_100080b8) {
      uVar14 = uVar15;
    }
    uVar25 = uVar14;
    if ((int)DAT_100080b8 < 0x10) {
      uVar25 = 0;
    }
    uVar27 = 0x1f8;
    if ((int)DAT_100080bc < 0x1f8) {
      uVar27 = DAT_100080bc;
    }
    uVar9 = (ulong)uVar7;
    local_38 = (ulong)uVar27;
    if (0x17a < (int)DAT_100080bc) {
      uVar17 = uVar9;
LAB_10002f1d:
      do {
        if ((int)uVar25 <= (int)uVar16) goto LAB_10002f10;
        uVar27 = uVar16;
        do {
          if (((((int)(uint)uVar17 < (int)uVar4) && (-1 < (int)(uVar27 | (uint)uVar17))) &&
              (*plVar1 != 0)) && ((int)uVar27 < (int)uVar24)) {
            lVar13 = (ulong)uVar27 + uVar17 * uVar23;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
        uVar17 = uVar17 + 1;
      } while (uVar17 != local_38);
      local_50 = uVar9 * uVar23;
      uVar27 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar27 < (int)uVar24 && -1 < (int)(uVar27 | uVar7)) && *plVar1 != 0)) {
          lVar13 = uVar27 + local_50;
          *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
        }
        uVar27 = uVar27 + 1;
      } while (uVar25 != uVar27);
      if (0x1f7 < (int)uVar4) {
        local_50 = uVar23 * 0x1f7;
        uVar27 = uVar16;
        do {
          if ((param_1 != 0) && (((int)uVar27 < (int)uVar24 && -1 < (int)uVar27) && *plVar1 != 0)) {
            lVar13 = uVar27 + local_50;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
      }
LAB_10003aad:
      lVar13 = (uVar23 * uVar9 + (ulong)uVar16) * 4;
      lVar28 = local_38 - uVar9;
      do {
        if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar7 < (int)uVar4)) &&
           ((-1 < (int)(uVar16 | uVar7) && (*plVar1 != 0)))) {
          *(undefined1 *)(*plVar1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13) = 0xff;
        }
        uVar7 = uVar7 + 1;
        lVar13 = lVar13 + uVar23 * 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    uVar7 = uVar24 - 0x11;
    uVar16 = uVar24;
    if ((int)uVar7 < (int)uVar24) {
      uVar16 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar16 = 0;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0;
    }
    if (0x17a < (int)uVar4) {
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar7 = uVar16;
          do {
            if (((param_1 != 0) && ((int)(uint)uVar9 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | (uint)uVar9) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))))
               ) {
              lVar13 = (ulong)uVar7 + uVar9 * uVar23;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != local_38);
    }
    recovered_100069e0(param_1);
    if (local_48 < 0x40000000) {
      if (0xfffff < local_48) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10003c17;
      }
      if (0x3ff < local_48) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10003c17;
      }
      pf_varargs_10006f19__8__8_(local_a8,0x40,str_10007135,local_48,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10003c17:
      pf_varargs_10006f19__8__8__8_
                (local_a8,0x40,str_10007126,local_48 >> sVar6,
                 (ulong)(uVar24 & (uint)local_48) * 100 >> sVar6,(ulonglong)puVar20);
    }
    if (local_58 < 0x40000000) {
      if (0xfffff < local_58) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10003c9e;
      }
      if (0x3ff < local_58) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10003c9e;
      }
      pf_varargs_10006f19__8__8_(local_128,0x40,str_10007135,local_58,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10003c9e:
      pf_varargs_10006f19__8__8__8_
                (local_128,0x40,str_10007126,local_58 >> sVar6,
                 (ulong)(uVar24 & (uint)local_58) * 100 >> sVar6,(ulonglong)puVar20);
    }
    if (local_40 < 0x40000000) {
      if (0xfffff < local_40) {
        puVar20 = &DAT_10007120;
        uVar24 = 0xfffff;
        sVar6 = 0x14;
        goto LAB_10003d25;
      }
      if (0x3ff < local_40) {
        puVar20 = &DAT_10007123;
        uVar24 = 0x3ff;
        sVar6 = 10;
        goto LAB_10003d25;
      }
      pf_varargs_10006f19__8__8_(local_e8,0x40,str_10007135,local_40,((uintptr_t)pf_module_state + 0x214U));
    }
    else {
      puVar20 = &DAT_1000711d;
      uVar24 = 0x3fffffff;
      sVar6 = 0x1e;
LAB_10003d25:
      pf_varargs_10006f19__8__8__8_
                (local_e8,0x40,str_10007126,local_40 >> sVar6,
                 (ulong)(uVar24 & (uint)local_40) * 100 >> sVar6,(ulonglong)puVar20);
    }
    recovered_10005a30(param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x363U),0x282828,0x82);
    recovered_10005a30(param_1,0xce,0x1c2,(long)local_128,0xcd4646,0x78);
    recovered_10005a30(param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x373U),0x282828,100);
    recovered_10005a30(param_1,0xce,0x1da,(long)local_a8,0x52c448,0x78);
    uVar4 = DAT_100080bc;
    uVar24 = DAT_100080b8;
    uVar23 = (ulong)DAT_100080b8;
    lVar13 = uVar23 * 0x6b0;
    local_38 = uVar23 * 4;
    iVar12 = -0x20;
    do {
      lVar28 = 0;
      do {
        iVar21 = (int)lVar28 + -0x20;
        if ((((uint)(iVar21 * iVar21 + iVar12 * iVar12) < 0x401) && (param_1 != 0)) &&
           (uVar16 = (int)lVar28 + 0x214,
           (((int)uVar16 < (int)uVar24 && -1 < (int)(uVar16 | iVar12 + 0x1ccU)) &&
           (int)(iVar12 + 0x1ccU) < (int)uVar4) && *plVar1 != 0)) {
          *(undefined1 *)(*plVar1 + lVar13 + 0x850 + lVar28 * 4) = 0;
          *(undefined1 *)(*plVar1 + lVar13 + 0x851 + lVar28 * 4) = 0xeb;
          *(undefined1 *)(*plVar1 + lVar13 + 0x852 + lVar28 * 4) = 0x1c;
          *(undefined1 *)(*plVar1 + lVar13 + 0x853 + lVar28 * 4) = 0xff;
        }
        lVar28 = lVar28 + 1;
      } while ((int)lVar28 != 0x41);
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + local_38;
    } while (iVar12 != 0x21);
    if ((local_40 != 0) && (local_48 < local_40)) {
      uVar9 = local_58 << 6;
      if ((uVar9 | local_40) >> 0x20 == 0) {
        local_48 = (uVar9 & 0xffffffff) / (local_40 & 0xffffffff);
      }
      else {
        local_48 = uVar9 / local_40;
      }
      lVar13 = uVar23 * 0x6b0;
      local_40 = 0xffffffe0;
      do {
        iVar12 = (int)local_40;
        if (-1 < (int)local_48) {
          lVar28 = 0;
          do {
            iVar21 = (int)lVar28;
            if ((((uint)((iVar21 + -0x20) * (iVar21 + -0x20) + iVar12 * iVar12) < 0x401) &&
                (param_1 != 0)) &&
               ((((int)(iVar21 + 0x214U) < (int)uVar24 &&
                 -1 < (int)(iVar21 + 0x214U | iVar12 + 0x1ccU)) &&
                (int)(iVar12 + 0x1ccU) < (int)uVar4) && *plVar1 != 0)) {
              *(undefined1 *)(*plVar1 + lVar13 + 0x850 + lVar28 * 4) = 0x1e;
              *(undefined1 *)(*plVar1 + lVar13 + 0x851 + lVar28 * 4) = 0x1e;
              *(undefined1 *)(*plVar1 + lVar13 + 0x852 + lVar28 * 4) = 0xee;
              *(undefined1 *)(*plVar1 + lVar13 + 0x853 + lVar28 * 4) = 0xff;
            }
            lVar28 = lVar28 + 1;
          } while (iVar21 + -0x20 < (int)local_48 + -0x20);
        }
        local_40 = (ulong)(iVar12 + 1U);
        lVar13 = lVar13 + local_38;
      } while (iVar12 + 1U != 0x21);
    }
    pcVar10 = local_e8;
    uVar24 = 0x212;
    iVar12 = 0x1f6;
    uVar4 = 0x78;
LAB_10004b95:
    recovered_10005a30(param_1,uVar24,iVar12,(long)pcVar10,0x282828,uVar4);
    break;
  default:
    uVar16 = 0x10;
    if ((int)DAT_100080b8 < 0x10) {
      uVar16 = DAT_100080b8;
    }
    uVar7 = 0x17a;
    if ((int)DAT_100080bc < 0x17a) {
      uVar7 = DAT_100080bc;
    }
    uVar15 = DAT_100080b8 - 0x10;
    local_48 = CONCAT44(PF_PART4(local_48, 4),uVar15);
    uVar14 = DAT_100080b8;
    if ((int)uVar15 < (int)DAT_100080b8) {
      uVar14 = uVar15;
    }
    uVar25 = uVar14;
    if ((int)DAT_100080b8 < 0x10) {
      uVar25 = 0;
    }
    uVar27 = 0x1f8;
    if ((int)DAT_100080bc < 0x1f8) {
      uVar27 = DAT_100080bc;
    }
    uVar9 = (ulong)uVar7;
    local_38 = (ulong)uVar27;
    if (0x17a < (int)DAT_100080bc) {
      uVar17 = uVar9;
LAB_100031fd:
      do {
        if ((int)uVar25 <= (int)uVar16) goto LAB_100031f0;
        uVar27 = uVar16;
        do {
          if (((((int)(uint)uVar17 < (int)uVar4) && (-1 < (int)(uVar27 | (uint)uVar17))) &&
              (*plVar1 != 0)) && ((int)uVar27 < (int)uVar24)) {
            lVar13 = (ulong)uVar27 + uVar17 * uVar23;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xe7;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
        uVar17 = uVar17 + 1;
      } while (uVar17 != local_38);
      local_40 = uVar9 * uVar23;
      uVar27 = uVar16;
      do {
        if ((param_1 != 0) &&
           (((int)uVar27 < (int)uVar24 && -1 < (int)(uVar27 | uVar7)) && *plVar1 != 0)) {
          lVar13 = uVar27 + local_40;
          *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
        }
        uVar27 = uVar27 + 1;
      } while (uVar25 != uVar27);
      if (0x1f7 < (int)uVar4) {
        local_40 = uVar23 * 0x1f7;
        uVar27 = uVar16;
        do {
          if ((param_1 != 0) && (((int)uVar27 < (int)uVar24 && -1 < (int)uVar27) && *plVar1 != 0)) {
            lVar13 = uVar27 + local_40;
            *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
            *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
          }
          uVar27 = uVar27 + 1;
        } while (uVar25 != uVar27);
      }
LAB_10004798:
      lVar28 = (uVar23 * uVar9 + (ulong)uVar16) * 4;
      lVar13 = local_38 - uVar9;
      do {
        if ((((0x10 < (int)uVar24) && (param_1 != 0)) && ((int)uVar7 < (int)uVar4)) &&
           ((-1 < (int)(uVar16 | uVar7) && (*plVar1 != 0)))) {
          *(undefined1 *)(*plVar1 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 1 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 2 + lVar28) = 0xc3;
          *(undefined1 *)(*plVar1 + 3 + lVar28) = 0xff;
        }
        uVar7 = uVar7 + 1;
        lVar28 = lVar28 + uVar23 * 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar7 = uVar24 - 0x11;
    uVar16 = uVar24;
    if ((int)uVar7 < (int)uVar24) {
      uVar16 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar16 = 0;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0;
    }
    if (0x17a < (int)uVar4) {
      do {
        if ((int)uVar16 < (int)uVar14) {
          uVar7 = uVar16;
          do {
            if (((param_1 != 0) && ((int)(uint)uVar9 < (int)uVar4)) &&
               ((-1 < (int)(uVar7 | (uint)uVar9) && ((*plVar1 != 0 && ((int)uVar7 < (int)uVar24)))))
               ) {
              lVar13 = (ulong)uVar7 + uVar9 * uVar23;
              *(undefined1 *)(*plVar1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 1 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 2 + lVar13 * 4) = 0xc3;
              *(undefined1 *)(*plVar1 + 3 + lVar13 * 4) = 0xff;
            }
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != local_38);
    }
    recovered_10005a30(param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x37fU),0x282828,0x6e);
    recovered_10005a30(param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x38dU),0x282828,0x78);
    recovered_10005a30(param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x39cU),0x282828,0xa0);
    recovered_10005a30(param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x3b3U),0x282828,0x8c);
    recovered_10005a30(param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x3c6U),0x282828,0x82);
    recovered_100061c0(param_1,0x224,0x6a,0,0,'\0');
  }
  terror_ui_window_present((void *)param_1,str_10007050,*(void **)(param_1 + 0x350),DAT_100080b8,DAT_100080bc,
               DAT_100080b8 * 4,0xefefef);
  return;
LAB_10001b90:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar17) goto LAB_10001ca5;
  goto LAB_10001b9c;
LAB_10001e60:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar17) goto LAB_10001f78;
  goto LAB_10001e6c;
LAB_100031f0:
  uVar17 = uVar17 + 1;
  if (uVar17 == local_38) goto LAB_10004798;
  goto LAB_100031fd;
LAB_10002f10:
  uVar17 = uVar17 + 1;
  if (uVar17 == local_38) goto LAB_10003aad;
  goto LAB_10002f1d;
LAB_10002d90:
  uVar17 = uVar17 + 1;
  if (uVar17 == local_38) goto LAB_100033fa;
  goto LAB_10002d9d;
LAB_10003090:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar17) goto LAB_100042c1;
  goto LAB_1000309c;
LAB_10002b70:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_10003f1c;
  goto LAB_10002b7c;
}

#undef DAT_10007112
#undef DAT_1000711d
#undef DAT_10007120
#undef DAT_10007123
#undef DAT_100072e0
#undef DAT_100072fc
#undef DAT_10008080
#undef DAT_100080b8
#undef DAT_100080bc
#undef str_10007050
#undef str_10007115
#undef str_10007126
#undef str_10007135
#undef str_10007186
#undef str_10007192
#undef str_100071bf
#undef str_100071ce
#undef str_100071df
#undef str_100071ed
#undef str_100071fc
#undef str_1000720a
#undef str_1000721b
#undef str_1000722d
#undef str_10007242
#undef str_10007263
#undef local_128
#undef local_e8
#undef local_a8
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#define local_2778 (*(int (*)[2517])(frame + 72))
#define local_24 (*(uint *)(frame + 10140))
#define local_27a8 (*(undefined1 (*)[48])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe0
 */

void recovered_10004fe0(long param_1)

{
  unsigned char frame[10208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;

  local_24 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x368) != -1)) &&
     ((ulong)*(uint *)(param_1 + 0x60b4) != 0)) {
    lVar2 = 0;
    do {
      if (*(int *)(param_1 + 0x2494 + lVar2) == *(int *)(param_1 + 0x368)) {
        memset(local_27a8,0,0x2780);
        uVar1 = terror_ui_window_list(local_27a8,0x10,&local_24);
        if (uVar1 == 0) {
          return;
        }
        if (local_24 < 0x11) {
          if (local_24 == 0) {
            return;
          }
        }
        else {
          local_24 = 0x10;
        }
        piVar3 = local_2778;
        uVar4 = 0;
        uVar1 = local_24;
        do {
          if (piVar3[-0xb] == *(int *)(param_1 + 0x368)) {
            terror_ui_window_configure(piVar3[-0xc],piVar3[-1],*piVar3,0xe,10);
            uVar1 = local_24;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 0x9e;
        } while (uVar4 < uVar1);
        return;
      }
      lVar2 = lVar2 + 0x1b8;
    } while ((ulong)*(uint *)(param_1 + 0x60b4) * 0x1b8 != lVar2);
  }
  return;
}

#undef local_2778
#undef local_24
#undef local_27a8

#undef DAT_10007075
#define DAT_10007075 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16eU)))
#undef DAT_1000707e
#define DAT_1000707e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177U)))
#undef str_10007077
#define str_10007077 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x170U)))
#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
#undef str_10007099
#define str_10007099 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050f0
 */

void recovered_100050f0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *format;
  char *vararg2;
  char *vararg3;

  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x368) != -1) &&
       (uVar2 = (ulong)*(uint *)(param_1 + 0x60b4), uVar2 != 0)) {
      pcVar1 = (char *)(param_1 + 0x2554);
      do {
        if (*(int *)(pcVar1 + -0xc0) == *(int *)(param_1 + 0x368)) {
          vararg2 = &DAT_10007075;
          if (*pcVar1 != '\0') {
            vararg2 = pcVar1;
          }
          vararg3 = str_10007077;
          if ((pcVar1[-0xbc] & 1U) == 0) {
            vararg3 = &DAT_1000707e;
          }
          if (*vararg2 == '/') {
            format = str_10007082;
          }
          else {
            format = str_10007099;
          }
          pf_varargs_10006f19__8__4__8__8__4_
                    ((char *)(param_1 + 0x6210),0x100,format,*(ulonglong *)(pcVar1 + -0x90),
                     *(uint *)(pcVar1 + -0x84),(ulonglong)vararg2,(ulonglong)vararg3,
                     *(uint *)(pcVar1 + -0x88));
          return;
        }
        pcVar1 = pcVar1 + 0x1b8;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x6210) = 0;
  }
  return;
}

#undef DAT_10007075
#undef DAT_1000707e
#undef str_10007077
#undef str_10007082
#undef str_10007099

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b0
 */

void recovered_100051b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;

  if (param_1 != 0) {
    recovered_10005260(param_1);
    if (*(uint *)(param_1 + 0x60b8) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar1 = (ulong)(*(int *)(param_1 + 0x36c) + 1) % (ulong)*(uint *)(param_1 + 0x60b8);
      *(int *)(param_1 + 0x36c) = (int)uVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x704 + uVar1 * 0x1f8);
    }
    *(undefined4 *)(param_1 + 0x370) = uVar2;
    memset((void *)(param_1 + 0x6180),0,0x48);
    memset((void *)(param_1 + 0x61c8),0,0x48);
    *(undefined1 *)(param_1 + 0x60b1) = 0;
    *(undefined8 *)(param_1 + 0x60cc) = 0;
    *(undefined8 *)(param_1 + 0x60d8) = 0;
    *(undefined8 *)(param_1 + 0x60e0) = 0;
    *(undefined8 *)(param_1 + 0x60e8) = 0;
  }
  return;
}


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
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#define uStack_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005260
 */

void recovered_10005260(long param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint in_EAX = 0;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;

  uStack_38 = (ulong)in_EAX;
  uVar7 = 0;
  memset((void *)(param_1 + 0x514),0,0x1f80);
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0xc3 < uVar3)) {
    uVar3 = UINT_000068c0;
    if (((code *)(ulong)uVar3 != (code *)0x0) &&
       (uVar3 = (*(code *)(ulong)uVar3)
                          ((void *)(param_1 + 0x514),0x10,(uint *)((long)&uStack_38 + 4)),
       uVar3 != 0)) {
      uVar3 = PF_PART4(uStack_38, 4);
      uVar6 = 0x10;
      if (PF_PART4(uStack_38, 4) < 0x10) {
        uVar6 = PF_PART4(uStack_38, 4);
      }
      *(uint *)(param_1 + 0x60b8) = uVar6;
      if (PF_PART4(uStack_38, 4) != 0) {
        piVar5 = (int *)(param_1 + 0x704);
        uVar7 = 0;
        do {
          if (*piVar5 == *(int *)(param_1 + 0x370)) goto LAB_100053d8;
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 0x7e;
        } while (uVar6 != uVar7);
      }
      iVar1 = Ram0000000000006800;
      iVar4 = -1;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xbf < uVar2)))
         ) {
        uVar2 = UINT_000068bc;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          iVar4 = (*(code *)(ulong)uVar2)();
        }
      }
      if (uVar3 == 0) {
        return;
      }
      piVar5 = (int *)(param_1 + 0x704);
      uVar7 = 0;
      do {
        if (*piVar5 == iVar4) {
          *(int *)(param_1 + 0x370) = iVar4;
          goto LAB_100053d8;
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 0x7e;
      } while (uVar6 != uVar7);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x704);
      uVar7 = 0;
      goto LAB_100053d8;
    }
  }
  *(undefined4 *)(param_1 + 0x60b8) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0xffffffff;
LAB_100053d8:
  *(int *)(param_1 + 0x36c) = (int)uVar7;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068bc
#undef UINT_000068c0
#undef uStack_38

#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005400
 */

void recovered_10005400(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;

  uVar2 = DAT_100080bc;
  uVar1 = DAT_100080b8;
  uVar3 = (ulong)DAT_100080b8;
  uVar9 = (uint)param_2;
  uVar6 = DAT_100080b8;
  if ((int)uVar9 < (int)DAT_100080b8) {
    uVar6 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar6 = 0;
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar7 = DAT_100080bc;
  if ((int)uVar5 < (int)DAT_100080bc) {
    uVar7 = uVar5;
  }
  uVar9 = (int)param_3 + uVar9;
  if (param_2 < 0) {
    uVar7 = 0;
  }
  uVar4 = DAT_100080b8;
  if ((int)uVar9 < (int)DAT_100080b8) {
    uVar4 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar4 = 0;
  }
  uVar5 = (int)((ulong)param_3 >> 0x20) + uVar5;
  uVar9 = DAT_100080bc;
  if ((int)uVar5 < (int)DAT_100080bc) {
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

#undef DAT_100080b8
#undef DAT_100080bc

#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005520
 */

void recovered_10005520(long param_1,ulong param_2,long param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;

  uVar1 = DAT_100080bc;
  uVar11 = DAT_100080b8;
  uVar7 = (uint)param_2;
  uVar12 = (ulong)DAT_100080b8;
  uVar16 = DAT_100080b8;
  if ((int)uVar7 < (int)DAT_100080b8) {
    uVar16 = uVar7;
  }
  if ((int)uVar7 < 0) {
    uVar16 = 0;
  }
  uVar2 = (uint)(param_2 >> 0x20);
  uVar3 = DAT_100080bc;
  if ((int)uVar2 < (int)DAT_100080bc) {
    uVar3 = uVar2;
  }
  if ((long)param_2 < 0) {
    uVar3 = 0;
  }
  uVar5 = uVar7 + 0x4c;
  uVar8 = DAT_100080b8;
  if ((int)uVar5 < (int)DAT_100080b8) {
    uVar8 = uVar5;
  }
  uVar15 = uVar8;
  if ((int)uVar7 < -0x4c) {
    uVar15 = 0;
  }
  uVar4 = uVar2 + 0x12;
  if ((int)DAT_100080bc <= (int)(uVar2 + 0x12)) {
    uVar4 = DAT_100080bc;
  }
  if ((long)param_2 < -0x1200000000) {
    uVar4 = 0;
  }
  if ((int)uVar3 < (int)uVar4) {
    uVar9 = 0xffdadada;
    if (param_4 != '\0') {
      uVar9 = 0xfff6f6f6;
    }
    uVar13 = uVar3;
    do {
      if ((int)uVar16 < (int)uVar15) {
        uVar17 = uVar16;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar17 | uVar13))) &&
              (*(long *)(param_1 + 0x350) != 0)) &&
             (((int)uVar17 < (int)uVar11 && ((int)uVar13 < (int)uVar1)))) {
            lVar6 = (ulong)uVar17 + uVar13 * uVar12;
            *(char *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = (char)uVar9;
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = (char)((uint)uVar9 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = (char)((uint)uVar9 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar17 = uVar17 + 1;
        } while (uVar15 != uVar17);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  uVar13 = uVar2 + 1;
  if ((int)uVar1 <= (int)(uVar2 + 1)) {
    uVar13 = uVar1;
  }
  if ((long)param_2 < -0x100000000) {
    uVar13 = 0;
  }
  if ((int)uVar3 < (int)uVar13) {
    uVar17 = uVar3;
    do {
      if ((int)uVar16 < (int)uVar15) {
        uVar10 = uVar16;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar10 | uVar17))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar10 < (int)uVar11 && ((int)uVar17 < (int)uVar1)))))) {
            lVar6 = (ulong)uVar10 + uVar17 * uVar12;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar13);
  }
  lVar6 = (param_2 & 0xffffffff00000000) + 0x1100000000;
  uVar17 = (uint)((ulong)lVar6 >> 0x20);
  uVar13 = uVar1;
  if ((int)uVar17 < (int)uVar1) {
    uVar13 = uVar17;
  }
  uVar10 = 0;
  if (lVar6 < 0) {
    uVar13 = uVar10;
  }
  uVar14 = uVar17 + 1;
  if ((int)uVar1 <= (int)(uVar17 + 1)) {
    uVar14 = uVar1;
  }
  if ((int)uVar17 < -1) {
    uVar14 = uVar10;
  }
  if ((int)uVar13 < (int)uVar14) {
    do {
      if ((int)uVar16 < (int)uVar15) {
        uVar17 = uVar16;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar17 | uVar13))) &&
              (*(long *)(param_1 + 0x350) != 0)) &&
             (((int)uVar17 < (int)uVar11 && ((int)uVar13 < (int)uVar1)))) {
            lVar6 = (ulong)uVar17 + uVar13 * uVar12;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar17 = uVar17 + 1;
        } while (uVar15 != uVar17);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar14);
  }
  uVar13 = uVar7 + 1;
  uVar15 = uVar11;
  if ((int)uVar13 < (int)uVar11) {
    uVar15 = uVar13;
  }
  if (-2 < (int)uVar7) {
    uVar10 = uVar15;
  }
  if ((int)uVar3 < (int)uVar4) {
    uVar17 = uVar3;
    do {
      if ((int)uVar16 < (int)uVar10) {
        uVar14 = uVar16;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar14 | uVar17))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar14 < (int)uVar11 && ((int)uVar17 < (int)uVar1)))))) {
            lVar6 = (ulong)uVar14 + uVar17 * uVar12;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar4);
  }
  uVar17 = uVar7 + 0x4b;
  uVar16 = uVar11;
  if ((int)uVar17 < (int)uVar11) {
    uVar16 = uVar17;
  }
  uVar10 = 0;
  if ((int)uVar17 < 0) {
    uVar16 = uVar10;
  }
  if ((int)uVar5 < 0) {
    uVar8 = uVar10;
  }
  if ((int)uVar3 < (int)uVar4) {
    do {
      if ((int)uVar16 < (int)uVar8) {
        uVar5 = uVar16;
        do {
          if ((((param_1 != 0) && (-1 < (int)(uVar5 | uVar3))) && (*(long *)(param_1 + 0x350) != 0))
             && (((int)uVar5 < (int)uVar11 && ((int)uVar3 < (int)uVar1)))) {
            lVar6 = (ulong)uVar5 + uVar3 * uVar12;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = 0x7e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  lVar6 = (param_2 & 0xffffffff00000000) + 0x100000000;
  if ((int)uVar13 < 0) {
    uVar15 = uVar10;
  }
  uVar8 = (uint)((ulong)lVar6 >> 0x20);
  uVar3 = uVar1;
  if ((int)uVar8 < (int)uVar1) {
    uVar3 = uVar8;
  }
  if (lVar6 < 0) {
    uVar3 = uVar10;
  }
  uVar5 = uVar8 + 1;
  if ((int)uVar1 <= (int)(uVar8 + 1)) {
    uVar5 = uVar1;
  }
  if ((int)uVar8 < -1) {
    uVar5 = uVar10;
  }
  if ((int)uVar3 < (int)uVar5) {
    do {
      if ((int)uVar15 < (int)uVar16) {
        uVar8 = uVar15;
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar8 | uVar3))) &&
             ((*(long *)(param_1 + 0x350) != 0 &&
              (((int)uVar8 < (int)uVar11 && ((int)uVar3 < (int)uVar1)))))) {
            lVar6 = (ulong)uVar8 + uVar3 * uVar12;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar6 * 4) = 0xff;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar6 * 4) = 0xff;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar6 * 4) = 0xff;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar6 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar16 != uVar8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  uVar11 = 0xff808080;
  if (param_4 != '\0') {
    uVar11 = 0x1e1e1e;
  }
  recovered_10005a30(param_1,uVar7 + 9,uVar2 + 6,param_3,uVar11,0x3c);
  return;
}

#undef DAT_100080b8
#undef DAT_100080bc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(int *)(((uintptr_t)pf_module_state + 0x11b5U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram0000000000006850
#define Ram0000000000006850 (*(uint32_t *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_60 (*(long *)(frame + 16))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(uint *)(frame + 32))
#define local_4c (*(uint *)(frame + 36))
#define local_3c (*(int *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a30
 */

void recovered_10005a30(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       )

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

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
    memset(&local_60,0,0x18);
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x17b < uVar3))))
    {
      uVar3 = UINT_00006978;
      if ((((code *)(ulong)uVar3 != (code *)0x0) &&
          (uVar4 = (*(code *)(ulong)uVar3)
                             ((char *)param_4,0xffffffff,1,
                              (param_5 | 0xff000000) >> 0x18 | (param_5 & 0xff0000) >> 8 |
                              (param_5 & 0xff00) << 8 | param_5 << 0x18,&local_60),
          iVar2 = DAT_100080bc, uVar3 = DAT_100080b8, uVar4 != 0)) && (local_60 != 0)) {
        if (local_4c < local_54 * 4) {
          iVar2 = Ram0000000000006800;
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
            local_3c = DAT_100080bc;
            uVar9 = (ulong)DAT_100080b8;
            uVar11 = 0;
            do {
              uVar5 = (int)uVar11 + local_34;
              if (((-1 < (int)uVar5) && ((int)uVar5 < iVar2)) && (uVar4 != 0)) {
                lVar12 = local_60 + 1;
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
          iVar2 = Ram0000000000006800;
        }
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
           ((uVar3 = Ram0000000000006808, 0xb < uVar3 &&
            ((uVar3 = Ram0000000000006808, 0x53 < uVar3 && (uVar3 = Ram0000000000006850, uVar3 != 0)
             ))))) {
          local_38 = param_2;
          (*(code *)(ulong)uVar3)(local_60);
        }
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_100080b8
#undef DAT_100080bc
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram0000000000006850
#undef UINT_00006978
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d20
 */

void recovered_10005d20(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;

  uVar2 = DAT_100080bc;
  uVar1 = DAT_100080b8;
  uVar3 = (ulong)DAT_100080b8;
  uVar4 = DAT_100080b8;
  if ((int)param_2 < (int)DAT_100080b8) {
    uVar4 = param_2;
  }
  uVar5 = DAT_100080bc;
  if ((int)param_3 < (int)DAT_100080bc) {
    uVar5 = param_3;
  }
  uVar6 = param_2 + 0x12;
  uVar8 = DAT_100080b8;
  if ((int)uVar6 < (int)DAT_100080b8) {
    uVar8 = uVar6;
  }
  uVar7 = param_3 + 0x12;
  if ((int)DAT_100080bc <= (int)(param_3 + 0x12)) {
    uVar7 = DAT_100080bc;
  }
  if ((int)param_3 < -0x12) {
    uVar7 = 0;
  }
  uVar9 = uVar5;
  if ((int)uVar5 < (int)uVar7) {
    do {
      if ((int)param_2 < (int)uVar1) {
        uVar10 = uVar4;
        do {
          if ((((param_1 != 0) && ((int)uVar9 < (int)uVar2)) && (-1 < (int)(uVar10 | uVar9))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar10 < (int)uVar1)))) {
            lVar12 = (ulong)uVar10 + uVar9 * uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = 0xee;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  uVar9 = param_3 + 1;
  if ((int)uVar2 <= (int)(param_3 + 1)) {
    uVar9 = uVar2;
  }
  if ((int)param_3 < -1) {
    uVar9 = 0;
  }
  uVar10 = uVar5;
  if ((int)uVar5 < (int)uVar9) {
    do {
      if ((int)param_2 < (int)uVar1) {
        uVar11 = uVar4;
        do {
          if (((param_1 != 0) && ((int)uVar10 < (int)uVar2)) &&
             ((-1 < (int)(uVar11 | uVar10) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar11 < (int)uVar1)))))) {
            lVar12 = (ulong)uVar11 + uVar10 * uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  lVar12 = ((ulong)param_3 << 0x20) + 0x1100000000;
  uVar10 = (uint)((ulong)lVar12 >> 0x20);
  uVar9 = uVar2;
  if ((int)uVar10 < (int)uVar2) {
    uVar9 = uVar10;
  }
  if (lVar12 < 0) {
    uVar9 = 0;
  }
  uVar11 = uVar10 + 1;
  if ((int)uVar2 <= (int)(uVar10 + 1)) {
    uVar11 = uVar2;
  }
  if ((int)uVar10 < -1) {
    uVar11 = 0;
  }
  if ((int)uVar9 < (int)uVar11) {
    do {
      if ((int)param_2 < (int)uVar1) {
        uVar10 = uVar4;
        do {
          if ((((param_1 != 0) && ((int)uVar9 < (int)uVar2)) && (-1 < (int)(uVar10 | uVar9))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar10 < (int)uVar1)))) {
            lVar12 = (ulong)uVar10 + uVar9 * uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  uVar9 = param_2 + 1;
  if ((int)uVar1 <= (int)(param_2 + 1)) {
    uVar9 = uVar1;
  }
  uVar10 = uVar5;
  if ((int)uVar5 < (int)uVar7) {
    do {
      if ((int)param_2 < (int)uVar1) {
        uVar11 = uVar4;
        do {
          if (((param_1 != 0) && ((int)uVar10 < (int)uVar2)) &&
             ((-1 < (int)(uVar11 | uVar10) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar11 < (int)uVar1)))))) {
            lVar12 = (ulong)uVar11 + uVar10 * uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar7);
  }
  uVar9 = param_2 + 0x11;
  uVar4 = uVar1;
  if ((int)uVar9 < (int)uVar1) {
    uVar4 = uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar4 = 0;
  }
  if ((int)uVar6 < 0) {
    uVar8 = 0;
  }
  if ((int)uVar5 < (int)uVar7) {
    do {
      if ((int)uVar4 < (int)uVar8) {
        uVar6 = uVar4;
        do {
          if ((((param_1 != 0) && ((int)uVar5 < (int)uVar2)) && (-1 < (int)(uVar6 | uVar5))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar6 < (int)uVar1)))) {
            lVar12 = (ulong)uVar6 + uVar5 * uVar3;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = 0x8e;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  uVar5 = param_2 + 5;
  uVar4 = uVar1;
  if ((int)uVar5 < (int)uVar1) {
    uVar4 = uVar5;
  }
  uVar8 = param_3 + 5;
  if ((int)uVar2 <= (int)(param_3 + 5)) {
    uVar8 = uVar2;
  }
  uVar6 = param_2 + 0xd;
  if ((int)uVar1 <= (int)(param_2 + 0xd)) {
    uVar6 = uVar1;
  }
  uVar7 = param_3 + 0xd;
  if ((int)uVar2 <= (int)(param_3 + 0xd)) {
    uVar7 = uVar2;
  }
  if ((int)param_3 < -0xd) {
    uVar7 = 0;
  }
  if ((int)uVar8 < (int)uVar7) {
    do {
      if ((int)uVar5 < (int)uVar1) {
        uVar9 = uVar4;
        do {
          if (((param_1 != 0) && ((int)uVar8 < (int)uVar2)) &&
             ((-1 < (int)(uVar9 | uVar8) &&
              ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar9 < (int)uVar1)))))) {
            lVar12 = (ulong)uVar9 + uVar8 * uVar3;
            *(char *)(*(long *)(param_1 + 0x350) + lVar12 * 4) = (char)param_4;
            *(char *)(*(long *)(param_1 + 0x350) + 1 + lVar12 * 4) = (char)((uint)param_4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + 2 + lVar12 * 4) = (char)((uint)param_4 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar12 * 4) = 0xff;
          }
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return;
}

#undef DAT_100080b8
#undef DAT_100080bc

#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
#define local_38 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c0
 */

void recovered_100061c0(long param_1,uint param_2,int param_3,long param_4,long param_5,char param_6
                       )

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  bool bVar21;

  uVar3 = DAT_100080bc;
  uVar2 = DAT_100080b8;
  uVar9 = (ulong)DAT_100080b8;
  uVar20 = DAT_100080b8;
  if ((int)param_2 < (int)DAT_100080b8) {
    uVar20 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar20 = 0;
  }
  uVar19 = (ulong)(int)DAT_100080bc;
  uVar12 = 0x19e;
  if ((int)DAT_100080bc < 0x19e) {
    uVar12 = DAT_100080bc;
  }
  uVar4 = param_3 + param_2;
  uVar13 = DAT_100080b8;
  if ((int)uVar4 < (int)DAT_100080b8) {
    uVar13 = uVar4;
  }
  if ((int)uVar4 < 0) {
    uVar13 = 0;
  }
  uVar4 = 0x1e6;
  if ((int)DAT_100080bc < 0x1e6) {
    uVar4 = DAT_100080bc;
  }
  uVar5 = (ulong)uVar4;
  if (0x19e < (long)uVar19) {
    uVar15 = (ulong)uVar12;
    uVar7 = uVar15;
    do {
      if ((int)uVar20 < (int)uVar13) {
        uVar4 = uVar20;
        do {
          if ((((param_1 != 0) && ((int)(uint)uVar7 < (int)uVar3)) &&
              (-1 < (int)(uVar4 | (uint)uVar7))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar4 < (int)uVar2)))) {
            lVar18 = (ulong)uVar4 + uVar7 * uVar9;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar13 != uVar4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
    if ((int)uVar20 < (int)uVar13) {
      uVar4 = uVar20;
      do {
        if ((param_1 != 0) &&
           (((int)uVar4 < (int)uVar2 && -1 < (int)(uVar4 | uVar12)) &&
            *(long *)(param_1 + 0x350) != 0)) {
          lVar18 = (ulong)uVar4 + uVar15 * uVar9;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
        }
        uVar4 = uVar4 + 1;
      } while (uVar13 != uVar4);
    }
    if ((0x1e5 < (int)uVar3) && ((int)uVar20 < (int)uVar13)) {
      uVar12 = uVar20;
      do {
        if ((param_1 != 0) &&
           (((int)uVar12 < (int)uVar2 && -1 < (int)uVar12) && *(long *)(param_1 + 0x350) != 0)) {
          lVar18 = (ulong)uVar12 + uVar9 * 0x1e5;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x30;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
        }
        uVar12 = uVar12 + 1;
      } while (uVar13 != uVar12);
    }
    uVar12 = param_2 + 1;
    if ((int)uVar2 <= (int)(param_2 + 1)) {
      uVar12 = uVar2;
    }
    uVar13 = 0;
    if (-2 < (int)param_2) {
      uVar13 = uVar12;
    }
    do {
      if ((int)uVar20 < (int)uVar13) {
        uVar12 = uVar20;
        do {
          if ((((param_1 != 0) && ((int)(uint)uVar15 < (int)uVar3)) &&
              (-1 < (int)(uVar12 | (uint)uVar15))) &&
             ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar12 < (int)uVar2)))) {
            lVar18 = (ulong)uVar12 + uVar15 * uVar9;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
          }
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar12);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar5);
  }
  uVar12 = (param_2 + param_3) - 1;
  uVar20 = uVar2;
  if ((int)uVar12 < (int)uVar2) {
    uVar20 = uVar12;
  }
  if ((int)uVar12 < 0) {
    uVar20 = 0;
  }
  uVar13 = param_3 + param_2;
  if ((int)uVar2 <= (int)(param_3 + param_2)) {
    uVar13 = uVar2;
  }
  if ((int)uVar12 < -1) {
    uVar13 = 0;
  }
  if (0x19e < (int)uVar3) {
    uVar7 = 0x19e;
    do {
      if ((int)uVar20 < (int)uVar13) {
        uVar12 = uVar20;
        do {
          if (((param_1 != 0) && (uVar7 < uVar19)) &&
             ((-1 < (int)uVar12 && ((*(long *)(param_1 + 0x350) != 0 && ((int)uVar12 < (int)uVar2)))
              ))) {
            lVar18 = (ulong)uVar12 + uVar7 * uVar9;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x30;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
          }
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar12);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  if (0 < param_3) {
    uVar5 = 0x1e5;
    if ((int)uVar3 < 0x1e5) {
      uVar5 = (ulong)uVar3;
    }
    iVar10 = 0;
    do {
      lVar18 = (long)((iVar10 * 0x47) / (int)(param_3 - 1U));
      uVar20 = 0x1e4;
      if (param_4 != 0) {
        bVar1 = *(byte *)(param_4 + lVar18);
        uVar20 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
      }
      if (param_5 == 0) {
        uVar12 = 0x1e4;
      }
      else {
        bVar1 = *(byte *)(param_5 + lVar18);
        uVar12 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
      }
      uVar13 = iVar10 + param_2;
      if (param_6 == '\0') {
        if (iVar10 != 0) {
          uVar8 = 0x1e4;
          lVar18 = (long)(int)((iVar10 * 0x47 - 0x47U) / (param_3 - 1U));
          uVar4 = 0x1e4;
          if (param_4 != 0) {
            bVar1 = *(byte *)(param_4 + lVar18);
            uVar4 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
          }
          if (param_5 != 0) {
            bVar1 = *(byte *)(param_5 + lVar18);
            uVar8 = 0x1e4 - ((uint)bVar1 * 0x40 + (uint)bVar1 * 4) / 100;
          }
          if (param_4 != 0) {
            bVar21 = uVar4 < uVar20;
            iVar11 = uVar4 - uVar20;
            if (uVar20 <= uVar4) {
              iVar11 = -(uVar4 - uVar20);
            }
            uVar16 = uVar13 - 1;
            iVar14 = iVar11 + 1;
            while( true ) {
              if ((((param_1 != 0) &&
                   (-1 < (int)(uVar16 | uVar4) && *(long *)(param_1 + 0x350) != 0)) &&
                  ((int)uVar16 < (int)uVar2)) && ((int)uVar4 < (int)uVar3)) {
                lVar18 = (ulong)uVar16 + uVar4 * uVar9;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0xeb;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x1c;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
              }
              if ((uVar4 == uVar20) && (uVar16 == uVar13)) break;
              iVar6 = 0;
              if (iVar11 <= iVar14 * 2) {
                iVar6 = iVar11;
              }
              uVar16 = uVar16 + (iVar11 <= iVar14 * 2);
              uVar17 = 0;
              if (iVar14 < 1) {
                uVar17 = bVar21 - 1 | 1;
              }
              iVar14 = (uint)(iVar14 < 1) + iVar14 + iVar6;
              uVar4 = uVar4 + uVar17;
            }
          }
          if (param_5 != 0) {
            bVar21 = uVar8 < uVar12;
            iVar11 = uVar8 - uVar12;
            if (uVar12 <= uVar8) {
              iVar11 = -(uVar8 - uVar12);
            }
            uVar20 = uVar13 - 1;
            iVar14 = iVar11 + 1;
            while( true ) {
              if (((param_1 != 0) && (-1 < (int)(uVar20 | uVar8) && *(long *)(param_1 + 0x350) != 0)
                  ) && (((int)uVar20 < (int)uVar2 && ((int)uVar8 < (int)uVar3)))) {
                lVar18 = (ulong)uVar20 + uVar8 * uVar9;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0xf5;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x18;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x14;
                *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
              }
              if ((uVar8 == uVar12) && (uVar20 == uVar13)) break;
              iVar6 = 0;
              if (iVar11 <= iVar14 * 2) {
                iVar6 = iVar11;
              }
              uVar20 = uVar20 + (iVar11 <= iVar14 * 2);
              uVar4 = 0;
              if (iVar14 < 1) {
                uVar4 = bVar21 - 1 | 1;
              }
              iVar14 = (uint)(iVar14 < 1) + iVar14 + iVar6;
              uVar8 = uVar8 + uVar4;
            }
          }
        }
      }
      else {
        uVar4 = uVar2;
        if ((int)uVar13 < (int)uVar2) {
          uVar4 = uVar13;
        }
        if ((int)uVar13 < 0) {
          uVar4 = 0;
        }
        uVar8 = uVar13 + 1;
        if ((int)uVar2 <= (int)(uVar13 + 1)) {
          uVar8 = uVar2;
        }
        if ((int)uVar13 < -1) {
          uVar8 = 0;
        }
        local_38 = (int)uVar5;
        if ((int)uVar20 < local_38) {
          uVar7 = (ulong)uVar20;
          do {
            if ((int)uVar4 < (int)uVar8) {
              uVar20 = uVar4;
              do {
                if ((((param_1 != 0) && (-1 < (int)uVar20)) && (*(long *)(param_1 + 0x350) != 0)) &&
                   (((int)uVar20 < (int)uVar2 && ((long)uVar7 < (long)uVar19)))) {
                  lVar18 = (ulong)uVar20 + uVar7 * uVar9;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0xeb;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x1c;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
                }
                uVar20 = uVar20 + 1;
              } while (uVar8 != uVar20);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar5);
        }
        if ((int)uVar12 < local_38) {
          uVar7 = (ulong)uVar12;
          do {
            if ((int)uVar4 < (int)uVar8) {
              uVar20 = uVar4;
              do {
                if (((param_1 != 0) && (-1 < (int)uVar20)) &&
                   ((*(long *)(param_1 + 0x350) != 0 &&
                    (((int)uVar20 < (int)uVar2 && ((long)uVar7 < (long)uVar19)))))) {
                  lVar18 = (ulong)uVar20 + uVar7 * uVar9;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar18 * 4) = 0xf5;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar18 * 4) = 0x18;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar18 * 4) = 0x14;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar18 * 4) = 0xff;
                }
                uVar20 = uVar20 + 1;
              } while (uVar8 != uVar20);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar5);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_3);
  }
  return;
}

#undef DAT_100080b8
#undef DAT_100080bc
#undef local_38

#undef DAT_100080b8
#define DAT_100080b8 (*(uint *)(((uintptr_t)pf_module_state + 0x11b1U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint *)(((uintptr_t)pf_module_state + 0x11b5U)))
#undef str_1000724b
#define str_1000724b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e0
 */

void recovered_100069e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;

  uVar9 = DAT_100080bc;
  uVar2 = DAT_100080b8;
  pcVar6 = str_1000724b;
  if (*(char *)(param_1 + 0x448) != '\0') {
    pcVar6 = (char *)(param_1 + 0x448);
  }
  uVar5 = (ulong)DAT_100080b8;
  uVar11 = 0x46;
  if ((int)DAT_100080b8 < 0x46) {
    uVar11 = DAT_100080b8;
  }
  uVar14 = 0x188;
  if ((int)DAT_100080bc < 0x188) {
    uVar14 = DAT_100080bc;
  }
  if (0x188 < (int)DAT_100080bc) {
    uVar10 = 0x19e;
    if ((int)DAT_100080bc < 0x19e) {
      uVar10 = (ulong)DAT_100080bc;
    }
    uVar15 = 0x140;
    if ((int)DAT_100080b8 < 0x140) {
      uVar15 = uVar5;
    }
    uVar8 = (ulong)uVar11;
    uVar16 = (ulong)uVar14;
    lVar12 = uVar5 * uVar16;
    lVar19 = (lVar12 + uVar8) * 4;
    lVar1 = uVar5 * 4;
    lVar7 = uVar8 * 4 + lVar12 * 4;
    uVar3 = 0x46;
    if ((int)DAT_100080b8 < 0x46) {
      uVar3 = DAT_100080b8;
    }
    lVar18 = uVar15 - uVar8;
    uVar15 = uVar16;
    do {
      if (0x46 < (int)uVar2) {
        lVar4 = 0;
        do {
          if (((((int)(uint)uVar15 < (int)uVar9) &&
               (uVar13 = (int)lVar4 + uVar3, -1 < (int)(uVar13 | (uint)uVar15))) &&
              (*(long *)(param_1 + 0x350) != 0)) && ((int)uVar13 < (int)uVar2)) {
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + lVar4 * 4) = 0xf7;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar19 + 1 + lVar4 * 4) = 0xf7;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar19 + 2 + lVar4 * 4) = 0xf7;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar19 + 3 + lVar4 * 4) = 0xff;
          }
          lVar4 = lVar4 + 1;
        } while (lVar18 != lVar4);
      }
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + lVar1;
      lVar7 = lVar7 + lVar1;
    } while (uVar15 != uVar10);
    if (0x46 < (int)uVar2) {
      lVar7 = uVar8 * 4 + lVar12 * 4;
      uVar3 = 0x46;
      if ((int)uVar2 < 0x46) {
        uVar3 = uVar2;
      }
      lVar19 = 0;
      do {
        if ((param_1 != 0) &&
           (uVar13 = uVar3 + (int)lVar19,
           ((int)uVar13 < (int)uVar2 && -1 < (int)(uVar14 | uVar13)) &&
           *(long *)(param_1 + 0x350) != 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 1 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 2 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 3 + lVar19 * 4) = 0xff;
        }
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
    }
    if (0x19d < (int)uVar9 && 0x46 < (int)uVar2) {
      uVar3 = 0x46;
      if ((int)uVar2 < 0x46) {
        uVar3 = uVar2;
      }
      lVar7 = uVar5 * 0x674 + uVar8 * 4;
      lVar19 = 0;
      do {
        if ((param_1 != 0) &&
           (iVar20 = uVar3 + (int)lVar19,
           (iVar20 < (int)uVar2 && -1 < iVar20) && *(long *)(param_1 + 0x350) != 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 1 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 2 + lVar19 * 4) = 0x7e;
          *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 3 + lVar19 * 4) = 0xff;
        }
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
    }
    lVar19 = (lVar12 + uVar8) * 4;
    lVar7 = uVar10 - uVar16;
    uVar3 = uVar14;
    do {
      if ((((0x46 < (int)uVar2) && (param_1 != 0)) && ((int)uVar3 < (int)uVar9)) &&
         ((-1 < (int)(uVar11 | uVar3) && (*(long *)(param_1 + 0x350) != 0)))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar19) = 0xff;
      }
      lVar19 = lVar19 + lVar1;
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar15 = 0x13f;
    if ((int)uVar2 < 0x13f) {
      uVar15 = uVar5;
    }
    lVar19 = (lVar12 + uVar15) * 4;
    lVar7 = uVar10 - uVar16;
    do {
      if (((0x13f < (int)uVar2) && (param_1 != 0)) &&
         (((int)uVar14 < (int)uVar9 &&
          ((-1 < (int)((uint)uVar15 | uVar14) && (*(long *)(param_1 + 0x350) != 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar19) = 0x7e;
        *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar19) = 0xff;
      }
      lVar19 = lVar19 + lVar1;
      uVar14 = uVar14 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  recovered_10005a30(param_1,0x4f,399,(long)pcVar6,0x282828,0xd8);
  uVar2 = DAT_100080b8;
  uVar5 = (ulong)(int)DAT_100080bc;
  if (0x189 < (long)uVar5) {
    uVar10 = (ulong)DAT_100080b8;
    uVar15 = 0x19d;
    if (DAT_100080bc < 0x19d) {
      uVar15 = (ulong)DAT_100080bc;
    }
    uVar8 = 0x13f;
    if ((int)DAT_100080b8 < 0x13f) {
      uVar8 = (ulong)DAT_100080b8;
    }
    uVar16 = 0x12e;
    if ((int)DAT_100080b8 < 0x12e) {
      uVar16 = (ulong)DAT_100080b8;
    }
    uVar9 = 0x12e;
    if ((int)DAT_100080b8 < 0x12e) {
      uVar9 = DAT_100080b8;
    }
    lVar7 = uVar10 * 0x624 + uVar16 * 4;
    uVar17 = 0x189;
    do {
      if (0x12e < (int)uVar2) {
        lVar19 = 0;
        do {
          if ((((param_1 != 0) && (uVar17 < uVar5)) && (iVar20 = uVar9 + (int)lVar19, -1 < iVar20))
             && ((*(long *)(param_1 + 0x350) != 0 && (iVar20 < (int)uVar2)))) {
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + lVar19 * 4) = 0x74;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 1 + lVar19 * 4) = 0xbc;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 2 + lVar19 * 4) = 0xed;
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar7 + 3 + lVar19 * 4) = 0xff;
          }
          lVar19 = lVar19 + 1;
        } while (uVar8 - uVar16 != lVar19);
      }
      uVar17 = uVar17 + 1;
      lVar7 = lVar7 + uVar10 * 4;
    } while (uVar17 != uVar15);
  }
  recovered_10005a30(param_1,0x133,399,((uintptr_t)pf_module_state + 0x35aU),0x1e1e1e,8);
  return;
}

#undef DAT_100080b8
#undef DAT_100080bc
#undef str_1000724b
