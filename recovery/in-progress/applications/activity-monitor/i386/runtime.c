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
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006828
#define Ram00006828 (*(uint32_t *)(0x6828U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006908
#define UINT_00006908 (*(uint *)(0x6908U))
#undef UINT_0000690c
#define UINT_0000690c (*(uint *)(0x690cU))
#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#undef UNK_01806cfc
#define UNK_01806cfc (*(uint8_t *)(0x1806cfcU))
#define local_6294 (*(int *)(frame + 860))
#define local_6290 (*(int *)(frame + 864))
#define local_628c (*(uint *)(frame + 868))
#define local_6284 (*(undefined4 *)(frame + 876))
#define local_4160 (*(uint (*)[3848])(frame + 9360))
#define local_540 (*(uint *)(frame + 24752))
#define local_3e8 (*(undefined1 *)(frame + 25096))
#define local_2e8 (*(undefined1 (*)[16])(frame + 25352))
#define local_2d8 (*(undefined4 *)(frame + 25368))
#define local_2b8 (*(byte *)(frame + 25400))
#define local_2b4 (*(int *)(frame + 25404))
#define local_2b0 (*(int *)(frame + 25408))
#define local_2ac (*(int *)(frame + 25412))
#define local_70 (*(int (*)[17])(frame + 25984))
#define local_2c (*(byte (*)[8])(frame + 26052))
#define local_24 (*(byte *)(frame + 26060))
#define local_1c (*(int *)(frame + 26068))
#define local_18 (*(int *)(frame + 26072))
#define local_14 (*(int *)(frame + 26076))
#define local_65e0 (*(undefined1 (*)[4])(frame + 16))
#define local_65dc (*(uint *)(frame + 20))
#define local_65d8 (*(uint *)(frame + 24))
#define local_65b4 (*(int *)(frame + 60))
#define local_62a0 (*(int *)(frame + 848))
#define local_629c (*(uint *)(frame + 852))
#define local_6298 (*(int *)(frame + 856))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001060
 */

int recovered_10001060(void)

{
  unsigned char frame[26128] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  memset(local_65e0,0,0x62f8);
  pf_app_window_spec(local_2e8,"Activity Monitor",(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)),(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)));
  local_2d8 = 0xefefef;
  local_2b8 = local_2b8 | 1;
  uVar4 = terror_ui_window_open(local_65e0,local_2e8);
  if (uVar4 != 0) {
    local_62a0 = local_65b4;
    if (local_65b4 != 0) {
      (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) = local_65dc;
      (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) = local_65d8;
      local_629c = 0;
      local_628c = 0xffffffff;
      local_6284 = 0xffffffff;
      terror_ui_window_set_menus(local_65e0,"Kill\nFocus\nAddress","","");
      recovered_10001670((int)local_65e0);
      recovered_10002140((int)local_65e0);
      do {
        memset(local_2e8,0,0x278);
        uVar6 = local_65d8;
        uVar4 = local_65dc;
        uVar5 = terror_ui_window_query(local_65e0,local_2e8);
        if (((uVar5 == 0) || (uVar3 = terror_ui_window_info_requests_close(local_2e8), uVar3 != '\0')) ||
           (uVar5 = terror_ui_window_sync_buffer(local_65e0,local_2e8), uVar5 == 0)) {
          terror_ui_window_close(local_65e0);
          return 0;
        }
        local_62a0 = local_65b4;
        (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) = local_65dc;
        (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) = local_65d8;
        if ((local_65dc != uVar4) || (local_65d8 != uVar6)) {
          recovered_10002140((int)local_65e0);
        }
        if (((local_2b4 != 0) && (local_2b4 != local_6290)) &&
           (local_6290 = local_2b4, local_2b0 == 1)) {
          if (local_2ac == 2) {
            recovered_10005380((int)local_65e0);
LAB_100012a5:
            recovered_10002140((int)local_65e0);
          }
          else if (local_2ac == 1) {
            recovered_10005290((int)local_65e0);
          }
          else if ((local_2ac == 0) && (1 < local_628c + 1)) {
            iVar1 = Ram00006800;
            if ((iVar1 == 0x50414d57) &&
               ((((iVar1 = Ram00006804, iVar1 != 0 && (uVar4 = Ram00006808, 0xb < uVar4)) &&
                 (uVar4 = Ram00006808, 0x10f < uVar4)) &&
                (pcVar2 = (code *)UINT_0000690c, pcVar2 != (code *)0x0)))) {
              (*pcVar2)(local_628c);
            }
            local_628c = 0xffffffff;
            local_3e8 = 0;
            recovered_10001670((int)local_65e0);
            goto LAB_100012a5;
          }
        }
        memset(local_2c,0,0x1c);
        uVar4 = terror_ui_window_pointer_state(local_65e0,local_2c);
        if (((uVar4 != 0) && ((local_24 & 1) != 0)) &&
           (((local_2c[0] & 2) != 0 && (local_1c != local_6294)))) {
          local_6294 = local_1c;
          uVar4 = local_18 - 0x5c;
          if (local_14 - 0x1eU < 0xffffffee || uVar4 < 0xffffffb4) {
            if (local_14 - 0x34U < 0xffffffee || uVar4 < 0xffffffb4) {
              if (local_14 - 0x4aU < 0xffffffee || uVar4 < 0xffffffb4) {
                if (((local_14 - 0x7cU < 0xc6) && (0xf < local_18)) &&
                   (local_18 < (int)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10))) {
                  uVar4 = (byte)((char)local_14 + 0x84) / 0x12;
                  if (uVar4 < local_540) {
                    local_628c = local_4160[uVar4 * 0x6e];
                    goto LAB_100014f5;
                  }
                }
                else {
                  if (((local_629c & 0xfffffffe) == 2) &&
                     (local_14 - 0x188U < 0x16 && local_18 - 0x46U < 0xfa)) {
                    recovered_10005450((int)local_65e0);
                    goto LAB_1000140c;
                  }
                  uVar4 = local_14 - 0x164;
                  uVar6 = 0;
                  if (((local_18 - 0xc6U < 0x74 && uVar4 < 0x18) ||
                      (uVar6 = 1, local_18 - 0x13aU < 0x88 && uVar4 < 0x18)) ||
                     ((uVar6 = 2, local_18 - 0x1c2U < 0x74 && uVar4 < 0x18 ||
                      ((uVar6 = 3, local_18 - 0x24aU < 0x74 && uVar4 < 0x18 ||
                       (uVar6 = 4, local_18 - 0x2beU < 0x74 && uVar4 < 0x18)))))) {
                    local_629c = uVar6;
                    goto LAB_100014f5;
                  }
                }
                goto LAB_10001500;
              }
              recovered_10005380((int)local_65e0);
            }
            else {
              recovered_10005290((int)local_65e0);
            }
          }
          else {
            if (local_628c + 1 < 2) goto LAB_10001500;
            iVar1 = Ram00006800;
            if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
               ((uVar4 = Ram00006808, 0xb < uVar4 &&
                ((uVar4 = Ram00006808, 0x10f < uVar4 &&
                 (pcVar2 = (code *)UINT_0000690c, pcVar2 != (code *)0x0)))))) {
              (*pcVar2)(local_628c);
            }
            local_628c = 0xffffffff;
            local_3e8 = 0;
LAB_1000140c:
            recovered_10001670((int)local_65e0);
          }
LAB_100014f5:
          recovered_10002140((int)local_65e0);
        }
LAB_10001500:
        memset(local_70,0,0x44);
        iVar1 = Ram00006800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
            (uVar4 = Ram00006808, 0xb < uVar4)) &&
           ((uVar4 = Ram00006808, 0x10b < uVar4 &&
            (pcVar2 = (code *)UINT_00006908, pcVar2 != (code *)0x0)))) {
          (*pcVar2)(local_70);
        }
        if (0x11 < (uint)(local_70[0] - local_6298) || local_6298 == 0) {
          local_6298 = local_70[0];
          recovered_10001670((int)local_65e0);
          recovered_10002140((int)local_65e0);
        }
        iVar1 = Ram00006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
           ((uVar4 = Ram00006808, 0xb < uVar4 &&
            ((uVar4 = Ram00006808, 0x9f < uVar4 &&
             (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)();
        }
      } while( true );
    }
    terror_ui_window_close(local_65e0);
  }
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) &&
     ((uVar4 = Ram00006808, 0x2b < uVar4 && (pcVar2 = (code *)Ram00006828, pcVar2 != (code *)0x0))))
  {
    (*pcVar2)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x139U)));
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006828
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006828
#undef UINT_0000689c
#undef UINT_00006908
#undef UINT_0000690c
#undef UINT_01807078
#undef UINT_0180707c
#undef UNK_01806cfc
#undef local_6294
#undef local_6290
#undef local_628c
#undef local_6284
#undef local_4160
#undef local_540
#undef local_3e8
#undef local_2e8
#undef local_2d8
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_70
#undef local_2c
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef local_65e0
#undef local_65dc
#undef local_65d8
#undef local_65b4
#undef local_62a0
#undef local_629c
#undef local_6298

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068b8
#define UINT_000068b8 (*(uint *)(0x68b8U))
#undef UINT_00006904
#define UINT_00006904 (*(uint *)(0x6904U))
#undef UINT_00006908
#define UINT_00006908 (*(uint *)(0x6908U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#define local_3954 (*(int (*)[5])(frame + 28))
#define local_3940 (*(int (*)[3483])(frame + 48))
#define local_2d4 (*(undefined1 (*)[436])(frame + 13980))
#define local_120 (*(int (*)[17])(frame + 14416))
#define local_dc (*(int *)(frame + 14484))
#define local_d8 (*(byte *)(frame + 14488))
#define local_b0 (*(uint *)(frame + 14528))
#define local_ac (*(uint *)(frame + 14532))
#define local_a8 (*(uint * *)(frame + 14536))
#define local_a4 (*(uint *)(frame + 14540))
#define local_a0 (*(uint *)(frame + 14544))
#define local_9c (*(uint *)(frame + 14548))
#define local_98 (*(int * *)(frame + 14552))
#define local_94 (*(uint * *)(frame + 14556))
#define local_50 (*(void * *)(frame + 14624))
#define local_4c (*(uint *)(frame + 14628))
#define local_48 (*(uint * *)(frame + 14632))
#define local_44 (*(int *)(frame + 14636))
#define local_40 (*(int * *)(frame + 14640))
#define local_3c (*(uint * *)(frame + 14644))
#define local_38 (*(uint *)(frame + 14648))
#define local_34 (*(uint * *)(frame + 14652))
#define local_30 (*(uint *)(frame + 14656))
#define local_2c (*(int *)(frame + 14660))
#define local_28 (*(uint *)(frame + 14664))
#define local_24 (*(uint * *)(frame + 14668))
#define local_20 (*(int * *)(frame + 14672))
#define local_1c (*(uint * *)(frame + 14676))
#define local_18 (*(uint *)(frame + 14680))
#define local_14 (*(uint *)(frame + 14684))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001670
 */

void recovered_10001670(int in_ECX)

{
  unsigned char frame[14736] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  ushort *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined2 uVar17;
  int iVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;

  bVar19 = 0;
  local_48 = (uint *)0x0;
  if (in_ECX == 0) {
    return;
  }
  iVar18 = *(int *)(in_ECX + 0x354);
  local_14 = CONCAT31(PF_PART3(local_14, 1),iVar18 == -1);
  memset(local_120,0,0x44);
  memset(&local_dc,0,0x8c);
  iVar7 = Ram00006800;
  if (iVar7 != 0x50414d57) {
    return;
  }
  iVar7 = Ram00006804;
  if (iVar7 == 0) {
    return;
  }
  uVar5 = Ram00006808;
  if (uVar5 < 0xc) {
    return;
  }
  uVar5 = Ram00006808;
  if (uVar5 < 0x10c) {
    return;
  }
  pcVar2 = (code *)UINT_00006908;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar5 = (*pcVar2)(local_120);
  if (uVar5 == 0) {
    return;
  }
  if ((*(byte *)(in_ECX + 0x609c) != 1) ||
     (uVar5 = local_120[0] - *(int *)(in_ECX + 0x3a4), uVar5 == 0)) {
    uVar5 = (uint)*(byte *)(in_ECX + 0x609c);
  }
  iVar7 = Ram00006800;
  if ((((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
      (uVar6 = Ram00006808, uVar6 < 0xc)) ||
     (((uVar6 = Ram00006808, uVar6 < 0xbc || (pcVar2 = (code *)UINT_000068b8, pcVar2 == (code *)0x0)
       ) || (uVar6 = (*pcVar2)(), uVar6 == 0)))) {
    uVar6 = 1;
  }
  local_24 = (uint *)(in_ECX + 0x60a8);
  *local_24 = uVar6;
  recovered_10005530(in_ECX);
  if (((*(int *)(in_ECX + 0x35c) < 0) || (iVar7 = Ram00006800, iVar7 != 0x50414d57)) ||
     ((iVar7 = Ram00006804, iVar7 == 0 ||
      ((((uVar6 = Ram00006808, uVar6 < 0xc || (uVar6 = Ram00006808, uVar6 < 0x114)) ||
        (pcVar2 = (code *)UINT_00006910, pcVar2 == (code *)0x0)) ||
       (uVar6 = (*pcVar2)(*(int *)(in_ECX + 0x35c),&local_dc), uVar6 == 0)))))) {
    memset((void *)(in_ECX + 1000),0,0x8c);
  }
  else {
    memcpy((void *)(in_ECX + 1000),&local_dc,0x8c);
  }
  memset(local_3954,0,0x3680);
  iVar7 = Ram00006800;
  if (((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
     (((uVar6 = Ram00006808, uVar6 < 0xc ||
       ((uVar6 = Ram00006808, uVar6 < 0x108 ||
        (pcVar2 = (code *)UINT_00006904, pcVar2 == (code *)0x0)))) ||
      (uVar6 = (*pcVar2)(local_3954,0x20,(uint *)&local_48), uVar6 == 0)))) {
    *(undefined4 *)(in_ECX + 0x60a0) = 0;
    return;
  }
  local_34 = local_48;
  local_1c = local_48;
  if ((uint *)0x1f < local_48) {
    local_1c = (uint *)0x20;
  }
  local_28 = uVar5;
  if (local_48 == (uint *)0x0) {
    local_2c = in_ECX + 0x2480;
    local_30 = 0;
    *(uint **)(in_ECX + 0x60a0) = local_1c;
    if (iVar18 == -1) goto LAB_10001abc;
  }
  else {
    local_40 = (int *)(in_ECX + 0x5d00);
    local_4c = uVar5 + (uVar5 == 0);
    local_30 = 0;
    puVar11 = (uint *)0x0;
    local_2c = in_ECX + 0x2480;
    do {
      local_20 = local_3954 + (int)puVar11 * 0x6d;
      if (*(char *)(in_ECX + 0x609c) == '\0') {
        iVar18 = *local_20;
        local_18 = 0;
      }
      else {
        iVar18 = *local_20;
        iVar7 = -0x180;
        do {
          if (*(int *)(in_ECX + 0x5d00 + iVar7) == iVar18) {
            iVar7 = *(int *)(in_ECX + 0x5d08 + iVar7);
            goto LAB_10001937;
          }
          iVar7 = iVar7 + 0xc;
        } while (iVar7 != 0);
        iVar7 = 0;
LAB_10001937:
        local_18 = local_3940[(int)puVar11 * 0x6d] - iVar7;
      }
      local_50 = (void *)((int)puVar11 * 0x1b8 + local_2c);
      local_3c = puVar11;
      memcpy(local_50,local_20,0x1b4);
      piVar10 = (int *)0x0;
      iVar7 = 0x20;
      piVar9 = local_40;
      do {
        if (*piVar9 == iVar18) {
          local_44 = iVar18;
          goto LAB_100019af;
        }
        piVar12 = piVar9;
        if (*piVar9 != 0) {
          piVar12 = (int *)0x0;
        }
        if (piVar10 != (int *)0x0) {
          piVar12 = piVar10;
        }
        piVar10 = piVar12;
        piVar9 = piVar9 + 7;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar9 = local_40;
      if (piVar10 != (int *)0x0) {
        piVar9 = piVar10;
      }
      memset(piVar9,0,0x1c);
      *piVar9 = iVar18;
      local_44 = *local_20;
LAB_100019af:
      uVar20 = (ulonglong)(*local_24 + (uint)(*local_24 == 0)) * (ulonglong)local_4c;
      local_38 = (uint)uVar20;
      uVar20 = FUN_10006bc4((ulonglong)local_18 * 1000,uVar20);
      iVar7 = local_44;
      uVar5 = (uint)uVar20;
      if (999 < uVar5) {
        uVar5 = 1000;
      }
      if ((int)(uVar20 >> 0x20) != 0) {
        uVar5 = 1000;
      }
      if (iVar18 != local_44) {
        local_38 = uVar5;
        memset(piVar9,0,0x1c);
        *piVar9 = iVar7;
        uVar5 = local_38;
      }
      bVar3 = *(byte *)((int)piVar9 + 0x19);
      *(short *)((int)piVar9 + (uint)bVar3 * 2 + 4) = (short)uVar5;
      *(byte *)((int)piVar9 + 0x19) = bVar3 + 1 + ((byte)((bVar3 + 1) / 5) & 0xfe) * -5;
      bVar3 = *(byte *)(piVar9 + 6);
      if (bVar3 < 10) {
        bVar3 = bVar3 + 1;
        *(byte *)(piVar9 + 6) = bVar3;
      }
      puVar13 = (ushort *)(piVar9 + 1);
      uVar6 = 0;
      uVar5 = (uint)bVar3;
      do {
        uVar6 = uVar6 + *puVar13;
        puVar13 = puVar13 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *(uint *)((int)local_50 + 0x1b4) = uVar6 / bVar3;
      local_30 = local_30 + local_18;
      local_14 = CONCAT31(PF_PART3(local_14, 1),(byte)local_14 | *local_20 == *(int *)(in_ECX + 0x354));
      puVar11 = (uint *)((int)local_3c + 1);
    } while (puVar11 != local_1c);
    *(uint **)(in_ECX + 0x60a0) = local_1c;
    if (local_34 != (uint *)0x1) {
      piVar9 = (int *)(in_ECX + 0x2638);
      puVar11 = (uint *)0x1;
      iVar18 = local_2c;
      do {
        local_24 = puVar11;
        local_20 = piVar9;
        memcpy(local_2d4,(void *)(iVar18 + (int)puVar11 * 0x1b8),0x1b4);
        local_18 = *(uint *)(iVar18 + 0x1b4 + (int)puVar11 * 0x1b8);
        piVar9 = local_20;
        puVar11 = local_24;
        do {
          if (local_18 <= (uint)piVar9[-1]) goto LAB_1000208f;
          memcpy(piVar9,piVar9 + -0x6e,0x1b8);
          puVar11 = (uint *)((int)puVar11 + -1);
          piVar9 = piVar9 + -0x6e;
        } while (puVar11 != (uint *)0x0);
        puVar11 = (uint *)0x0;
LAB_1000208f:
        iVar18 = local_2c;
        local_3c = (uint *)((int)puVar11 * 0x1b8);
        memcpy((void *)((int)local_3c + local_2c),local_2d4,0x1b4);
        *(uint *)(iVar18 + 0x1b4 + (int)local_3c) = local_18;
        puVar11 = (uint *)((int)local_24 + 1);
        piVar9 = local_20 + 0x6e;
      } while (puVar11 != local_1c);
    }
    if ((local_14 & 1) != 0) goto LAB_10001abc;
  }
  *(undefined4 *)(in_ECX + 0x354) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x61f8) = 0;
LAB_10001abc:
  local_14 = in_ECX + 0x5d00;
  iVar18 = 0;
  do {
    iVar7 = *(int *)(local_14 + iVar18 * 0x1c);
    if (iVar7 != 0) {
      if (local_34 != (uint *)0x0) {
        piVar9 = local_3954;
        puVar11 = local_1c;
        do {
          if (*piVar9 == iVar7) goto LAB_10001af1;
          piVar9 = piVar9 + 0x6d;
          puVar11 = (uint *)((int)puVar11 + -1);
        } while (puVar11 != (uint *)0x0);
      }
      memset((void *)(iVar18 * 0x1c + local_14),0,0x1c);
    }
LAB_10001af1:
    iVar18 = iVar18 + 1;
    if (iVar18 == 0x20) {
      iVar18 = *(int *)(in_ECX + 0x6080);
      uVar20 = FUN_10006bc4((ulonglong)local_30 * 1000,
                            (ulonglong)
                            (*(int *)(in_ECX + 0x60a8) + (uint)(*(int *)(in_ECX + 0x60a8) == 0)) *
                            (ulonglong)(local_28 + (local_28 == 0)));
      uVar5 = (uint)uVar20;
      if (999 < uVar5) {
        uVar5 = 1000;
      }
      if ((int)(uVar20 >> 0x20) == 0) {
        uVar17 = (undefined2)uVar5;
      }
      else {
        uVar17 = 1000;
      }
      if (iVar18 != 1) {
        memset((undefined4 *)(in_ECX + 0x6080),0,0x1c);
        *(undefined4 *)(in_ECX + 0x6080) = 1;
      }
      bVar3 = *(byte *)(in_ECX + 0x6099);
      *(undefined2 *)(in_ECX + 0x6084 + (uint)bVar3 * 2) = uVar17;
      *(byte *)(in_ECX + 0x6099) = bVar3 + 1 + ((byte)((bVar3 + 1) / 5) & 0xfe) * -5;
      bVar3 = *(byte *)(in_ECX + 0x6098);
      if (bVar3 < 10) {
        bVar3 = bVar3 + 1;
        *(byte *)(in_ECX + 0x6098) = bVar3;
      }
      puVar13 = (ushort *)(in_ECX + 0x6084);
      uVar6 = 0;
      uVar5 = (uint)bVar3;
      do {
        uVar6 = uVar6 + *puVar13;
        puVar13 = puVar13 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      iVar18 = 0;
      uVar6 = uVar6 / bVar3;
      *(uint *)(in_ECX + 0x60ac) = uVar6;
      *(undefined4 *)(in_ECX + 0x60b0) = 0;
      if (uVar6 < 1000) {
        iVar18 = -(uVar6 - 1000);
      }
      *(int *)(in_ECX + 0x60b4) = iVar18;
      memmove((void *)(in_ECX + 0x60d8),(void *)(in_ECX + 0x60d9),0x47);
      memmove((void *)(in_ECX + 0x6120),(void *)(in_ECX + 0x6121),0x47);
      uVar20 = CONCAT44(local_18,local_14);
      *(char *)(in_ECX + 0x611f) = (char)(*(uint *)(in_ECX + 0x60ac) / 10);
      *(char *)(in_ECX + 0x6167) = (char)(*(uint *)(in_ECX + 0x60b0) / 10);
      if (((*(char *)(in_ECX + 0x609d) == '\x01') && (local_28 != 0)) &&
         (local_dc == *(int *)(in_ECX + 0x474))) {
        local_1c = local_a8;
        uVar5 = (uint)(local_b0 < *(uint *)(in_ECX + 0x4a0));
        uVar6 = local_ac - *(uint *)(in_ECX + 0x4a4);
        uVar14 = 0;
        iVar18 = 0;
        if (*(uint *)(in_ECX + 0x4a4) <= local_ac && uVar5 <= uVar6) {
          uVar14 = local_b0 - *(uint *)(in_ECX + 0x4a0);
          iVar18 = uVar6 - uVar5;
        }
        local_14 = local_9c;
        local_18 = local_a0;
        local_24 = local_94;
        local_20 = local_98;
        uVar20 = FUN_10006bc4(CONCAT44((int)((ulonglong)uVar14 * 0x12 >> 0x20) + iVar18 * 0x12,
                                       (int)((ulonglong)uVar14 * 0x12)),(ulonglong)local_28);
        uVar14 = local_28;
        *(uint *)(in_ECX + 0x60b8) = -(uint)((int)(uVar20 >> 0x20) != 0) | (uint)uVar20;
        uVar5 = (uint)(local_1c < *(uint **)(in_ECX + 0x4a8));
        uVar6 = local_a4 - *(uint *)(in_ECX + 0x4ac);
        uVar8 = 0;
        iVar18 = 0;
        if (*(uint *)(in_ECX + 0x4ac) <= local_a4 && uVar5 <= uVar6) {
          uVar8 = (int)local_1c - *(int *)(in_ECX + 0x4a8);
          iVar18 = uVar6 - uVar5;
        }
        uVar20 = FUN_10006bc4(CONCAT44((int)((ulonglong)uVar8 * 0x12 >> 0x20) + iVar18 * 0x12,
                                       (int)((ulonglong)uVar8 * 0x12)),(ulonglong)local_28);
        *(uint *)(in_ECX + 0x60bc) = -(uint)((int)(uVar20 >> 0x20) != 0) | (uint)uVar20;
        uVar5 = (uint)(local_18 < *(uint *)(in_ECX + 0x4b0));
        uVar6 = local_14 - *(uint *)(in_ECX + 0x4b4);
        iVar18 = 0;
        uVar8 = 0;
        if (*(uint *)(in_ECX + 0x4b4) <= local_14 && uVar5 <= uVar6) {
          iVar18 = uVar6 - uVar5;
          uVar8 = local_18 - *(uint *)(in_ECX + 0x4b0);
        }
        uVar20 = FUN_10006bc4(CONCAT44((int)((ulonglong)uVar8 * 0x12 >> 0x20) + iVar18 * 0x12,
                                       (int)((ulonglong)uVar8 * 0x12)),(ulonglong)uVar14);
        local_18 = (uint)(uVar20 >> 0x20);
        local_14 = (uint)uVar20;
        *(ulonglong *)(in_ECX + 0x60c0) = uVar20;
        uVar5 = (uint)(local_20 < *(int **)(in_ECX + 0x4b8));
        uVar6 = (int)local_24 - *(int *)(in_ECX + 0x4bc);
        uVar8 = 0;
        iVar18 = 0;
        if (*(uint **)(in_ECX + 0x4bc) <= local_24 && uVar5 <= uVar6) {
          uVar8 = (int)local_20 - *(int *)(in_ECX + 0x4b8);
          iVar18 = uVar6 - uVar5;
        }
        uVar21 = FUN_10006bc4(CONCAT44((int)((ulonglong)uVar8 * 0x12 >> 0x20) + iVar18 * 0x12,
                                       (int)((ulonglong)uVar8 * 0x12)),(ulonglong)uVar14);
        uVar14 = (uint)(uVar21 >> 0x20);
        *(ulonglong *)(in_ECX + 0x60c8) = uVar21;
        uVar5 = *(uint *)(in_ECX + 0x60d0);
        uVar6 = *(uint *)(in_ECX + 0x60d4);
        uVar20 = *(ulonglong *)(in_ECX + 0x60d0);
        if ((uVar6 < local_18 || uVar6 - local_18 < (uint)(uVar5 < local_14)) ||
           (local_18 = uVar6, local_14 = uVar5,
           uVar6 < uVar14 || uVar6 - uVar14 < (uint)(uVar5 < (uint)uVar21))) {
          uVar20 = CONCAT44(local_18,local_14);
          if (local_18 < uVar14 || local_18 - uVar14 < (uint)(local_14 < (uint)uVar21)) {
            uVar20 = uVar21;
          }
          *(ulonglong *)(in_ECX + 0x60d0) = uVar20;
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x60b8) = 0;
        *(undefined4 *)(in_ECX + 0x60bc) = 0;
        *(undefined4 *)(in_ECX + 0x60c4) = 0;
        *(undefined4 *)(in_ECX + 0x60c0) = 0;
        *(undefined4 *)(in_ECX + 0x60cc) = 0;
        *(undefined4 *)(in_ECX + 0x60c8) = 0;
      }
      local_18 = (uint)(uVar20 >> 0x20);
      local_14 = (uint)uVar20;
      memmove((void *)(in_ECX + 0x6168),(void *)(in_ECX + 0x6169),0x47);
      memmove((void *)(in_ECX + 0x61b0),(void *)(in_ECX + 0x61b1),0x47);
      iVar18 = *(int *)(in_ECX + 0x60d4);
      iVar7 = *(int *)(in_ECX + 0x60d0);
      local_14 = iVar7;
      if (iVar7 == 0 && iVar18 == 0 ||
          *(uint *)(in_ECX + 0x60c0) == 0 && *(int *)(in_ECX + 0x60c4) == 0) {
        uVar4 = 0;
      }
      else {
        lVar1 = (ulonglong)*(uint *)(in_ECX + 0x60c0) * 100;
        uVar20 = FUN_10006bc4(CONCAT44(*(int *)(in_ECX + 0x60c4) * 100 +
                                       (int)((ulonglong)lVar1 >> 0x20),(int)lVar1),
                              *(ulonglong *)(in_ECX + 0x60d0));
        uVar5 = (uint)uVar20;
        if (99 < uVar5) {
          uVar5 = 100;
        }
        uVar4 = (undefined1)uVar5;
        if ((int)(uVar20 >> 0x20) != 0) {
          uVar4 = 100;
        }
      }
      *(undefined1 *)(in_ECX + 0x61af) = uVar4;
      if (*(uint *)(in_ECX + 0x60c8) == 0 && *(int *)(in_ECX + 0x60cc) == 0 ||
          iVar7 == 0 && iVar18 == 0) {
        uVar4 = 0;
      }
      else {
        lVar1 = (ulonglong)*(uint *)(in_ECX + 0x60c8) * 100;
        uVar20 = FUN_10006bc4(CONCAT44(*(int *)(in_ECX + 0x60cc) * 100 +
                                       (int)((ulonglong)lVar1 >> 0x20),(int)lVar1),
                              CONCAT44(iVar18,local_14));
        uVar5 = (uint)uVar20;
        if (99 < uVar5) {
          uVar5 = 100;
        }
        uVar4 = (undefined1)uVar5;
        if ((int)(uVar20 >> 0x20) != 0) {
          uVar4 = 100;
        }
      }
      *(undefined1 *)(in_ECX + 0x61f7) = uVar4;
      piVar9 = local_120;
      piVar10 = (int *)(in_ECX + 0x3a4);
      for (iVar18 = 0x11; iVar18 != 0; iVar18 = iVar18 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + (uint)bVar19 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar19 * -2 + 1;
      }
      piVar9 = local_120;
      piVar10 = (int *)(in_ECX + 0x360);
      for (iVar18 = 0x11; iVar18 != 0; iVar18 = iVar18 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + (uint)bVar19 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar19 * -2 + 1;
      }
      memcpy((void *)(in_ECX + 0x474),&local_dc,0x8c);
      *(undefined1 *)(in_ECX + 0x609c) = 1;
      *(byte *)(in_ECX + 0x609d) = local_d8 & 1;
      memset((void *)(in_ECX + 0x5b80),0,0x180);
      uVar5 = *(uint *)(in_ECX + 0x60a0);
      uVar6 = uVar5;
      if (0x1f < uVar5) {
        uVar6 = 0x20;
      }
      if (uVar5 != 0) {
        puVar16 = (undefined4 *)(in_ECX + 0x5b88);
        puVar15 = (undefined4 *)(local_2c + 0x14);
        do {
          puVar16[-2] = puVar15[-5];
          puVar16[-1] = puVar15[-1];
          *puVar16 = *puVar15;
          puVar16 = puVar16 + 3;
          puVar15 = puVar15 + 0x6e;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      return;
    }
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068b8
#undef UINT_00006904
#undef UINT_00006908
#undef UINT_00006910
#undef local_3954
#undef local_3940
#undef local_2d4
#undef local_120
#undef local_dc
#undef local_d8
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
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
#undef local_14

#undef DAT_01806ce0
#define DAT_01806ce0 (*(uint8_t *)(0x1806ce0U))
#undef DAT_01807044
#define DAT_01807044 (*(uint8_t *)(0x1807044U))
#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#undef UNK_01806cd0
#define UNK_01806cd0 (*(uint8_t *)(0x1806cd0U))
#undef UNK_01806df3
#define UNK_01806df3 (*(uint8_t *)(0x1806df3U))
#undef UNK_01806df6
#define UNK_01806df6 (*(uint8_t *)(0x1806df6U))
#undef UNK_01806df9
#define UNK_01806df9 (*(uint8_t *)(0x1806df9U))
#undef UNK_01807060
#define UNK_01807060 (*(uint8_t *)(0x1807060U))
#define local_38 (*(uint *)(frame + 280))
#define local_34 (*(undefined * *)(frame + 284))
#define local_30 (*(uint *)(frame + 288))
#define local_2c (*(undefined * *)(frame + 292))
#define local_28 (*(undefined * *)(frame + 296))
#define local_24 (*(undefined * *)(frame + 300))
#define local_20 (*(uint *)(frame + 304))
#define local_1c (*(undefined * *)(frame + 308))
#define local_18 (*(void * *)(frame + 312))
#define local_14 (*(undefined * *)(frame + 316))
#define acStack_11c (*(char (*)[64])(frame + 52))
#define uStack_40 (*(undefined2 *)(frame + 272))
#define uStack_3e (*(undefined1 *)(frame + 274))
#define in_stack_fffffee3 (*(undefined1 *)(frame + 51))
#define local_dc (*(undefined * *)(frame + 116))
#define local_d8 (*(char (*)[64])(frame + 120))
#define local_98 (*(int *)(frame + 184))
#define local_94 (*(undefined2 *)(frame + 188))
#define local_92 (*(undefined1 *)(frame + 190))
#define local_54 (*(undefined * *)(frame + 252))
#define local_4d (*(undefined1 *)(frame + 259))
#define local_4c (*(undefined * *)(frame + 260))
#define local_48 (*(undefined * *)(frame + 264))
#define local_44 (*(undefined * *)(frame + 268))
#define local_3c (*(undefined * *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002140
 */

/* WARNING: Removing unreachable block (ram,0x10004cd1) */
/* WARNING: Removing unreachable block (ram,0x100047cf) */
/* WARNING: Removing unreachable block (ram,0x1000471b) */
/* WARNING: Removing unreachable block (ram,0x100043cc) */
/* WARNING: Removing unreachable block (ram,0x1000418f) */
/* WARNING: Removing unreachable block (ram,0x10002dbf) */
/* WARNING: Removing unreachable block (ram,0x1000407e) */
/* WARNING: Removing unreachable block (ram,0x1000429f) */
/* WARNING: Removing unreachable block (ram,0x100044f3) */
/* WARNING: Removing unreachable block (ram,0x1000466d) */
/* WARNING: Removing unreachable block (ram,0x10004b93) */
/* WARNING: Removing unreachable block (ram,0x10004e13) */
/* WARNING: Removing unreachable block (ram,0x10002eb3) */
/* WARNING: Type propagation algorithm not settling */

void recovered_10002140(int in_ECX)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  undefined3 uVar3;
  sbyte sVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  ulonglong uVar18;
  char *pcVar19;
  undefined2 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined2 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  char cVar28;
  byte bVar29;
  undefined1 uVar30;
  undefined1 uVar31;

  uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) < 1) {
    local_24 = (undefined *)0x0;
  }
  uVar8 = (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) >> 0x1f & (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) < 1) {
    uVar6 = 0;
  }
  local_2c = (undefined *)((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) >> 0x1f & (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)));
  puVar13 = local_2c;
  if ((int)uVar8 < (int)uVar6) {
    iVar12 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * uVar8 * 4;
    iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    do {
      puVar13 = local_2c;
      if ((int)local_2c < (int)local_24) {
        do {
          if ((((in_ECX != 0) && ((int)uVar8 < (int)uVar9)) && (-1 < (int)((uint)puVar13 | uVar8)))
             && ((*(int *)(in_ECX + 0x340) != 0 && ((int)puVar13 < (int)uVar15)))) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + (int)puVar13 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 1 + (int)puVar13 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 2 + (int)puVar13 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 3 + (int)puVar13 * 4) = 0xff;
          }
          puVar13 = puVar13 + 1;
        } while (local_24 != puVar13);
      }
      uVar8 = uVar8 + 1;
      iVar12 = iVar12 + iVar14;
      puVar13 = local_24;
    } while (uVar8 != uVar6);
  }
  local_34 = (undefined *)0x0;
  if (((in_ECX != 0) && (iVar14 = *(int *)(in_ECX + 0x354), iVar14 != -1)) &&
     (iVar12 = *(int *)(in_ECX + 0x60a0), iVar12 != 0)) {
    piVar16 = (int *)(in_ECX + 0x2480);
    do {
      if (*piVar16 == iVar14) {
        uVar3 = (undefined3)((uint)puVar13 >> 8);
        local_30 = CONCAT31(uVar3,iVar14 != 0);
        local_3c = (undefined *)CONCAT31(uVar3,1);
        goto LAB_1000227f;
      }
      piVar16 = piVar16 + 0x6e;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  local_3c = (undefined *)0x0;
  local_30 = 0;
LAB_1000227f:
  local_28 = (undefined *)(uVar15 * 4);
  uVar6 = 0;
  do {
    local_44 = (undefined *)(uVar6 + 1);
    local_20 = (uint)local_44;
    if ((int)uVar9 <= (int)local_44) {
      local_20 = uVar9;
    }
    if ((int)uVar6 < (int)uVar9) {
      iVar14 = uVar6 * -0x32;
      puVar13 = local_34;
      do {
        puVar5 = local_2c;
        if ((int)local_2c < (int)local_24) {
          do {
            if ((((in_ECX != 0) && ((int)uVar6 < (int)uVar9)) && (-1 < (int)puVar5)) &&
               ((*(int *)(in_ECX + 0x340) != 0 && ((int)puVar5 < (int)uVar15)))) {
              uVar25 = (undefined1)((iVar14 + 0x4990U & 0xffff) / 0x58);
              *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)puVar13 + (int)puVar5 * 4) = uVar25;
              *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)puVar13 + 1 + (int)puVar5 * 4) =
                   uVar25;
              *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)puVar13 + 2 + (int)puVar5 * 4) =
                   uVar25;
              *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)puVar13 + 3 + (int)puVar5 * 4) = 0xff;
            }
            puVar5 = puVar5 + 1;
          } while (local_24 != puVar5);
        }
        uVar6 = uVar6 + 1;
        puVar13 = (undefined *)((int)puVar13 + (int)local_28);
      } while (uVar6 != local_20);
    }
    local_34 = (undefined *)((int)local_34 + (int)local_28);
    uVar6 = (uint)local_44;
  } while (local_44 != (undefined *)0x58);
  if (0x57 < (int)uVar9 && (int)local_2c < (int)local_24) {
    local_14 = (undefined *)(uVar15 * 0x15c);
    puVar13 = local_2c;
    do {
      if ((in_ECX != 0) &&
         (((int)puVar13 < (int)uVar15 && -1 < (int)puVar13) && *(int *)(in_ECX + 0x340) != 0)) {
        *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)local_14 + (int)puVar13 * 4) = 0x69;
        *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)local_14 + 1 + (int)puVar13 * 4) = 0x69;
        *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)local_14 + 2 + (int)puVar13 * 4) = 0x69;
        *(undefined1 *)(*(int *)(in_ECX + 0x340) + (int)local_14 + 3 + (int)puVar13 * 4) = 0xff;
      }
      puVar13 = puVar13 + 1;
    } while (local_24 != puVar13);
  }
  local_18 = (void *)in_ECX;
  recovered_100056a0(in_ECX,0x10,0xc,0x4c,0x12,((uintptr_t)pf_module_state+0x1c4U),(char)local_30);
  cVar28 = (char)local_3c;
  recovered_100056a0(in_ECX,0x10,0x22,0x4c,0x12,((uintptr_t)pf_module_state+0x1c9U),cVar28);
  recovered_100056a0(in_ECX,0x10,0x38,0x4c,0x12,((uintptr_t)pf_module_state+0x1cfU),cVar28);
  pvVar10 = local_18;
  puVar13 = local_1c;
  uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x67 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    local_20 = 0x68;
  }
  uVar6 = (int)local_1c - 0x10U;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)((int)local_1c - 0x10U)) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  uVar8 = 0;
  if (0xf < (int)local_1c) {
    uVar8 = uVar6;
  }
  local_28 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x49 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_28 = (undefined *)0x4a;
  }
  if (0xc < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x30;
    local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
    puVar5 = (undefined *)0xc;
    do {
      local_24 = puVar5;
      uVar6 = local_20;
      if ((int)local_20 < (int)uVar8) {
        do {
          if ((((local_18 != (void *)0x0) && ((int)local_24 < (int)uVar9)) && (-1 < (int)uVar6)) &&
             ((*(int *)((int)local_18 + 0x340) != 0 && ((int)uVar6 < (int)uVar15)))) {
            *(undefined1 *)(iVar14 + uVar6 * 4 + *(int *)((int)local_18 + 0x340)) = 0xfa;
            *(undefined1 *)(iVar14 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0xfa;
            *(undefined1 *)(iVar14 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0xfa;
            *(undefined1 *)(iVar14 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar6);
      }
      iVar14 = iVar14 + (int)local_2c;
      puVar5 = local_24 + 1;
    } while (local_24 + 1 != local_28);
  }
  local_d8[0] = -0x6c;
  local_d8[1] = -0x6c;
  local_d8[2] = 0x94;
  uVar25 = 0;
  recovered_100059c0((int)local_18,0x68,0xc,(int)local_1c - 0x78,0x3e,
                     CONCAT13(in_stack_fffffee3,0x949494));
  local_d8[0] = '(';
  local_d8[1] = '(';
  local_d8[2] = 0x28;
  uVar23 = (undefined1)((int)puVar13 - 0x88U >> 0x18);
  recovered_10005dc0((int)pvVar10,0x70,0x27,(int)pvVar10 + 0x61f8,CONCAT13(uVar25,0x282828),
                     (int)puVar13 - 0x88U);
  uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_28 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x20);
  local_38 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  uVar6 = 0;
  local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    local_1c = (undefined *)0x10;
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10;
  }
  local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x155 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_24 = (undefined *)0x156;
  }
  if (0x6a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x1a8;
    local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    uVar8 = 0x6a;
    do {
      local_14 = (undefined *)uVar8;
      uVar8 = (uint)local_1c;
      if ((int)local_1c < (int)uVar6) {
        do {
          if (((local_18 != (void *)0x0) && ((int)local_14 < (int)uVar9)) &&
             ((-1 < (int)uVar8 &&
              ((*(int *)((int)local_18 + 0x340) != 0 && ((int)uVar8 < (int)uVar15)))))) {
            *(undefined1 *)(*(int *)((int)local_18 + 0x340) + iVar14 + uVar8 * 4) = 0xff;
            *(undefined1 *)(*(int *)((int)local_18 + 0x340) + iVar14 + 1 + uVar8 * 4) = 0xff;
            *(undefined1 *)(*(int *)((int)local_18 + 0x340) + iVar14 + 2 + uVar8 * 4) = 0xff;
            *(undefined1 *)(*(int *)((int)local_18 + 0x340) + iVar14 + 3 + uVar8 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
      iVar14 = iVar14 + local_20;
      uVar8 = (int)local_14 + 1U;
    } while ((undefined *)((int)local_14 + 1U) != local_24);
  }
  local_d8[0] = -0x52;
  local_d8[1] = -0x52;
  local_d8[2] = 0xae;
  uVar25 = 0;
  recovered_100059c0((int)local_18,0x10,0x6a,(int)local_28,0xec,CONCAT13(uVar23,0xaeaeae));
  uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x10 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    local_24 = (undefined *)0x11;
  }
  local_dc = (undefined *)(local_38 - 0x11);
  puVar13 = local_dc;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)local_dc) {
    puVar13 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  puVar5 = (undefined *)0x0;
  if (0x10 < (int)local_38) {
    puVar5 = puVar13;
  }
  local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x7c < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_20 = 0x7d;
  }
  if (0x6b < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x1ac;
    local_28 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
    uVar6 = 0x6b;
    do {
      local_1c = (undefined *)uVar6;
      puVar13 = local_24;
      if ((int)local_24 < (int)puVar5) {
        do {
          if ((((local_18 != (void *)0x0) && ((int)local_1c < (int)uVar9)) && (-1 < (int)puVar13))
             && ((*(int *)((int)local_18 + 0x340) != 0 && ((int)puVar13 < (int)uVar15)))) {
            *(undefined1 *)(iVar14 + (int)puVar13 * 4 + *(int *)((int)local_18 + 0x340)) = 0xee;
            *(undefined1 *)(iVar14 + (int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0xee;
            *(undefined1 *)(iVar14 + (int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0xee;
            *(undefined1 *)(iVar14 + (int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff;
          }
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
      }
      iVar14 = iVar14 + (int)local_28;
      uVar6 = (int)local_1c + 1U;
    } while ((int)local_1c + 1U != local_20);
  }
  uVar15 = 0;
  do {
    iVar14 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x11dU)) + uVar15 * 4);
    local_44 = (undefined *)uVar15;
    if (uVar15 == 2) {
      local_d8[0] = '\x14';
      local_d8[1] = 'N';
      local_d8[2] = 0x82;
      uVar23 = 0;
      recovered_10005dc0((int)local_18,iVar14 + 0x13,0x70,*(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x481U)) + uVar15 * 4),
                         CONCAT13(uVar25,0x824e14),0x78);
LAB_10002855:
      uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      local_28 = (undefined *)(iVar14 + 0xe);
      local_24 = local_28;
      if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)local_28) {
        local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      }
      puVar13 = (undefined *)(iVar14 + 0xf);
      if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= iVar14 + 0xf) {
        puVar13 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      }
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      if (0x7c < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_20 = 0x7d;
      }
      if (0x6b < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x1ac;
        local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
        local_14 = (undefined *)0x6b;
        local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
        do {
          puVar5 = local_24;
          if ((int)local_28 < (int)uVar15) {
            do {
              if (((local_18 != (void *)0x0) && ((int)local_14 < (int)uVar9)) &&
                 ((-1 < (int)puVar5 &&
                  ((*(int *)((int)local_18 + 0x340) != 0 && ((int)puVar5 < (int)uVar15)))))) {
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340)) = 0xbc;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 1) =
                     0xbc;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 2) =
                     0xbc;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 3) =
                     0xff;
              }
              puVar5 = puVar5 + 1;
            } while (puVar13 != puVar5);
          }
          local_14 = (undefined *)((int)local_14 + 1);
          iVar14 = iVar14 + (int)local_2c;
        } while (local_14 != (undefined *)local_20);
      }
    }
    else {
      local_d8[0] = '&';
      local_d8[1] = '&';
      local_d8[2] = 0x26;
      uVar23 = 0;
      recovered_10005dc0((int)local_18,iVar14 + 0x13,0x70,*(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x481U)) + uVar15 * 4),
                         CONCAT13(uVar25,0x262626),0x78);
      if (uVar15 != 0) goto LAB_10002855;
    }
    uVar15 = (int)local_44 + 1;
  } while (uVar15 != 7);
  local_48 = (undefined *)((int)local_18 + 0x2480);
  local_14 = (undefined *)0x0;
  local_98 = 0x1f0;
  pvVar10 = local_18;
  do {
    pvVar11 = local_18;
    uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    puVar13 = *(undefined **)((int)pvVar10 + 0x60a0);
    if ((local_14 < puVar13) &&
       (iVar14 = *(int *)((int)local_48 + (int)local_14 * 0x1b8),
       iVar14 == *(int *)((int)pvVar10 + 0x354))) {
      local_20 = CONCAT31((int3)((uint)iVar14 >> 8),0x65);
      local_2c = (undefined *)CONCAT31(PF_PART3(local_2c, 1),0xab);
      local_28 = (undefined *)CONCAT31(PF_PART3(local_28, 1),0xee);
      local_4d = 0xff;
    }
    else {
      local_20 = -(uint)(((uint)local_14 & 1) == 0);
      uVar25 = (undefined1)local_20;
      local_28 = (undefined *)(CONCAT31(PF_PART3(local_28, 1),uVar25) | 0xfd);
      local_2c = (undefined *)(CONCAT31(PF_PART3(local_2c, 1),uVar25) | 0xf2);
      local_20 = local_20 | 0xeb;
      local_4d = 0x1e;
    }
    local_34 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    if (0x10 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
      local_34 = (undefined *)0x11;
    }
    puVar5 = local_dc;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)local_dc) {
      puVar5 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    }
    puVar7 = (undefined *)0x0;
    if (0x10 < (int)local_38) {
      puVar7 = puVar5;
    }
    local_4c = (undefined *)((int)local_14 * 0x12);
    local_3c = (undefined *)((int)local_4c + 0x8e);
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)local_3c) {
      local_3c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    }
    local_1c = (undefined *)((int)local_14 * 0x12 + 0x7c);
    if ((int)local_1c < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      local_24 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * local_98);
      local_30 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
      local_44 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      do {
        puVar13 = local_34;
        if ((int)local_34 < (int)puVar7) {
          do {
            if ((((-1 < (int)puVar13) && (*(int *)((int)local_18 + 0x340) != 0)) &&
                ((int)puVar13 < (int)uVar15)) && ((int)local_1c < (int)uVar9)) {
              local_24[(int)puVar13 * 4 + *(int *)((int)local_18 + 0x340)] = (char)local_20;
              local_24[(int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 1] = PF_PART1(local_2c, 0);
              local_24[(int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 2] = PF_PART1(local_28, 0);
              local_24[(int)puVar13 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
            }
            puVar13 = puVar13 + 1;
          } while (puVar7 != puVar13);
        }
        local_1c = local_1c + 1;
        local_24 = local_24 + local_30;
      } while (local_1c != local_3c);
      puVar13 = *(undefined **)((int)local_18 + 0x60a0);
    }
    pvVar10 = local_18;
    local_54 = local_14;
    if (local_14 < puVar13) {
      local_14 = (undefined *)((int)local_14 * 0x1b8);
      local_94 = CONCAT11(local_4d,local_4d);
      local_92 = local_4d;
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"%u",*(uint *)((int)local_48 + (int)local_14));
      iVar14 = (int)local_4c + 0x81;
      recovered_10005dc0((int)pvVar11,0x25,iVar14,(int)local_d8,
                         CONCAT13(uVar25,CONCAT12(local_92,local_94)),0x46);
      puVar13 = local_48;
      recovered_10005dc0((int)pvVar11,0x83,iVar14,(int)local_48 + 0x40 + (int)local_14,
                         CONCAT13(uVar25,CONCAT12(local_92,local_94)),0xf8);
      puVar5 = local_14;
      uVar15 = *(uint *)((int)puVar13 + 0x1b4 + (int)local_14);
      pf_varargs_10006bdc__4__4_(local_d8,0x40,"%u.%u",uVar15 / 10,uVar15 % 10);
      recovered_10005dc0((int)local_18,0x1a2,iVar14,(int)local_d8,
                         CONCAT13(uVar25,CONCAT12(local_92,local_94)),0x32);
      uVar26 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"%u",*(uint *)((int)puVar13 + 8 + (int)puVar5));
      uVar23 = 0x2e;
      uVar27 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar24 = local_94;
      uVar25 = local_92;
      local_4c = (undefined *)iVar14;
      recovered_10005dc0((int)local_18,0x1fe,iVar14,(int)local_d8,
                         CONCAT13(uVar26,CONCAT12(local_92,local_94)),0x2e);
      uVar15 = *(uint *)((int)puVar13 + 0x20 + (int)puVar5);
      uVar9 = *(uint *)((int)puVar13 + 0x24 + (int)puVar5);
      uVar6 = 0x3fffffff;
      if (uVar9 == 0 && (uint)(0x3fffffff < uVar15) <= -uVar9) {
        uVar6 = 0xfffff;
        if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar15)) {
          sVar4 = 0x14;
          local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10002da0;
        }
        if ((uVar15 < 0x400) <= uVar9) {
          uVar6 = 0x3ff;
          sVar4 = 10;
          local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10002da0;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
      }
      else {
        sVar4 = 0x1e;
        local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10002da0:
        lVar1 = (ulonglong)(uVar6 & uVar15) * 100;
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = uVar15 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar6 = (uint)lVar1 >> sVar4 | uVar8 << 0x20 - sVar4;
        uVar8 = uVar8 >> sVar4;
        uVar23 = SUB41(local_1c,0);
        uVar27 = (undefined1)((uint)local_1c >> 8);
        uVar30 = (undefined1)((uint)local_1c >> 0x10);
        uVar31 = (undefined1)((uint)local_1c >> 0x18);
        uVar24 = (undefined2)uVar8;
        uVar25 = (undefined1)(uVar8 >> 0x10);
        uVar26 = (undefined1)(uVar8 >> 0x18);
        uVar20 = (undefined2)uVar6;
        uVar21 = (undefined1)(uVar6 >> 0x10);
        uVar22 = (undefined1)(uVar6 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
      }
      pf_varargs_10006bdc__4__4__4__4__4_
                (local_d8,0x40,pcVar19,uVar15,uVar9,CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),
                 CONCAT13(uVar26,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar27,uVar23))));
      iVar14 = (int)local_14 + (int)local_48;
      uVar23 = 0x60;
      uVar27 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar24 = local_94;
      uVar25 = local_92;
      recovered_10005dc0((int)local_18,0x230,(int)local_4c,(int)local_d8,
                         CONCAT13(uVar26,CONCAT12(local_92,local_94)),0x60);
      uVar15 = *(uint *)(iVar14 + 0x28);
      uVar9 = *(uint *)(iVar14 + 0x2c);
      uVar6 = 0x3fffffff;
      if (uVar9 == 0 && (uint)(0x3fffffff < uVar15) <= -uVar9) {
        uVar6 = 0xfffff;
        if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar15)) {
          sVar4 = 0x14;
          local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10002e90;
        }
        if ((uVar15 < 0x400) <= uVar9) {
          uVar6 = 0x3ff;
          sVar4 = 10;
          local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10002e90;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
      }
      else {
        sVar4 = 0x1e;
        local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10002e90:
        lVar1 = (ulonglong)(uVar6 & uVar15) * 100;
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = uVar15 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar6 = (uint)lVar1 >> sVar4 | uVar8 << 0x20 - sVar4;
        uVar8 = uVar8 >> sVar4;
        uVar23 = SUB41(local_1c,0);
        uVar27 = (undefined1)((uint)local_1c >> 8);
        uVar30 = (undefined1)((uint)local_1c >> 0x10);
        uVar31 = (undefined1)((uint)local_1c >> 0x18);
        uVar24 = (undefined2)uVar8;
        uVar25 = (undefined1)(uVar8 >> 0x10);
        uVar26 = (undefined1)(uVar8 >> 0x18);
        uVar20 = (undefined2)uVar6;
        uVar21 = (undefined1)(uVar6 >> 0x10);
        uVar22 = (undefined1)(uVar6 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
      }
      local_14 = (undefined *)iVar14;
      pf_varargs_10006bdc__4__4__4__4__4_
                (local_d8,0x40,pcVar19,uVar15,uVar9,CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),
                 CONCAT13(uVar26,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar27,uVar23))));
      pvVar10 = local_18;
      puVar13 = local_4c;
      recovered_10005dc0((int)local_18,0x2a0,(int)local_4c,(int)local_d8,
                         CONCAT13(uVar26,CONCAT12(local_92,local_94)),0x68);
      uVar23 = 0;
      recovered_10005dc0((int)pvVar10,0x317,(int)puVar13,(int)local_14 + 0xa0,
                         CONCAT13(uVar26,CONCAT12(local_92,local_94)),0x48);
    }
    local_14 = local_54 + 1;
    local_98 = local_98 + 0x48;
  } while (local_14 != (undefined *)0xb);
  local_48 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
  do {
    uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    local_38 = 0x88;
    if (puVar13 != (undefined *)0x1) {
      local_38 = 0x74;
    }
    uVar6 = local_38;
    iVar14 = 0xee;
    if (puVar13 < (undefined *)0x3) {
      iVar14 = 0xda;
    }
    if (puVar13 < (undefined *)0x2) {
      iVar14 = 0xc6;
    }
    puVar5 = (undefined *)((int)puVar13 * 0x74 + iVar14);
    bVar17 = puVar13 == *(undefined **)((int)pvVar10 + 0x344);
    uVar25 = 0xd8;
    if (!bVar17) {
      uVar25 = 0xf4;
    }
    local_20 = CONCAT31(PF_PART3(local_20, 1),0x9a);
    if (!bVar17) {
      local_20 = CONCAT31(PF_PART3(local_20, 1),0xf4);
    }
    local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    local_34 = puVar5;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)puVar5) {
      local_34 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    }
    local_3c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    if (0x17b < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      local_3c = (undefined *)0x17c;
    }
    if (0x164 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      local_2c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      if ((int)(local_48 + iVar14 + local_38) <= (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        local_2c = local_48 + iVar14 + local_38;
      }
      local_28 = (undefined *)(CONCAT31(PF_PART3(local_28, 1),-bVar17) | 0xf4);
      local_1c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x590);
      local_30 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
      puVar7 = (undefined *)0x164;
      do {
        local_24 = puVar7;
        puVar7 = local_34;
        if ((int)puVar5 < (int)uVar15) {
          do {
            if ((((int)local_24 < (int)uVar9) && (-1 < (int)puVar7)) &&
               ((*(int *)((int)local_18 + 0x340) != 0 && ((int)puVar7 < (int)uVar15)))) {
              local_1c[(int)puVar7 * 4 + *(int *)((int)local_18 + 0x340)] = (undefined1)local_20;
              local_1c[(int)puVar7 * 4 + *(int *)((int)local_18 + 0x340) + 1] = uVar25;
              local_1c[(int)puVar7 * 4 + *(int *)((int)local_18 + 0x340) + 2] = PF_PART1(local_28, 0);
              local_1c[(int)puVar7 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
            }
            puVar7 = puVar7 + 1;
          } while (local_2c != puVar7);
        }
        local_1c = local_1c + local_30;
        puVar7 = local_24 + 1;
      } while (local_24 + 1 != local_3c);
    }
    local_d8[0] = '~';
    local_d8[1] = '~';
    local_d8[2] = 0x7e;
    uVar25 = 0;
    local_4c = puVar13;
    local_44 = puVar5;
    recovered_100059c0((int)local_18,(uint)puVar5,0x164,local_38,0x18,CONCAT13(uVar23,0x7e7e7e));
    pvVar10 = local_18;
    puVar13 = local_4c;
    local_d8[0] = '\x1e';
    local_d8[1] = '\x1e';
    local_d8[2] = 0x1e;
    uVar23 = (undefined1)(uVar6 - 0x16 >> 0x18);
    recovered_10005dc0((int)local_18,(int)(puVar5 + 0xf),0x16c,
                       *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x49dU)) + (int)local_4c * 4),CONCAT13(uVar25,0x1e1e1e),
                       uVar6 - 0x16);
    pvVar11 = local_18;
    uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    puVar13 = puVar13 + 1;
    local_48 = local_48 + 0x74;
  } while (puVar13 != (undefined *)0x5);
  local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_44 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x20);
  if (*(uint *)((int)pvVar10 + 0x344) < 4) {
                    /* WARNING: Switch is manually overridden */
    switch((uintptr_t)(*(uint *)((int)pvVar10 + 0x344))) {
    case 0:
      local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        local_24 = (undefined *)0x10;
      }
      puVar13 = (undefined *)0x0;
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        puVar13 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10);
      }
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      if (0x1f7 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_20 = 0x1f8;
      }
      if (0x17a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x5e8;
        local_28 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
        uVar6 = 0x17a;
        do {
          puVar5 = local_24;
          if ((int)local_24 < (int)puVar13) {
            do {
              if ((((int)uVar6 < (int)uVar9) && (-1 < (int)puVar5)) &&
                 ((*(int *)((int)local_18 + 0x340) != 0 && ((int)puVar5 < (int)uVar15)))) {
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340)) = 0xe7;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 1) =
                     0xe7;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 2) =
                     0xe7;
                *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 3) =
                     0xff;
              }
              puVar5 = puVar5 + 1;
            } while (puVar13 != puVar5);
          }
          uVar6 = uVar6 + 1;
          iVar14 = iVar14 + (int)local_28;
          local_1c = puVar13;
        } while (uVar6 != local_20);
      }
      local_d8[0] = -0x3d;
      local_d8[1] = -0x3d;
      local_d8[2] = 0xc3;
      uVar26 = 0;
      recovered_100059c0((int)local_18,0x10,0x17a,(int)local_44,0x7e,CONCAT13(uVar23,0xc3c3c3));
      local_d8[0] = '(';
      local_d8[1] = '(';
      local_d8[2] = 0x28;
      recovered_10005dc0((int)pvVar11,0x56,0x19c,((uintptr_t)pf_module_state+0x27fU),CONCAT13(uVar26,0x282828),0x46);
      pf_varargs_10006bdc__4__4_
                (local_d8,0x40,"%u.%u",*(uint *)((int)pvVar11 + 0x60ac) / 10,
                 *(uint *)((int)pvVar11 + 0x60ac) % 10);
      local_94 = 0xc448;
      local_92 = 0x52;
      uVar25 = (undefined1)((uint)local_d8 >> 0x18);
      recovered_10005dc0((int)pvVar11,0x92,0x19c,(int)local_d8,CONCAT13(uVar26,0x52c448),0x46);
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x56,0x1b4,((uintptr_t)pf_module_state+0x287U),CONCAT13(uVar26,0x282828),0x50);
      pf_varargs_10006bdc__4__4_
                (local_d8,0x40,"%u.%u",*(uint *)((int)pvVar11 + 0x60b0) / 10,
                 *(uint *)((int)pvVar11 + 0x60b0) % 10);
      local_94 = 0x4bd0;
      local_92 = 0x4b;
      recovered_10005dc0((int)pvVar11,0x92,0x1b4,(int)local_d8,CONCAT13(uVar26,0x4b4bd0),0x46);
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x56,0x1cc,((uintptr_t)pf_module_state+0x291U),CONCAT13(uVar26,0x282828),0x46);
      pf_varargs_10006bdc__4__4_
                (local_d8,0x40,"%u.%u",*(uint *)((int)pvVar11 + 0x60b4) / 10,
                 *(uint *)((int)pvVar11 + 0x60b4) % 10);
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x92,0x1cc,(int)local_d8,CONCAT13(uVar26,0x282828),0x46);
      local_94 = 0xf000;
      local_92 = 0x1c;
      recovered_10006080((int)pvVar11,0xfe,0x196,CONCAT13(uVar25,0x1cf000));
      local_94 = 0x18f5;
      local_92 = 0x14;
      recovered_10006080((int)pvVar11,0xfe,0x1ae,CONCAT13(uVar25,0x1418f5));
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"THREADS: %u",*(uint *)((int)pvVar11 + 0x388));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x15a,0x19c,(int)local_d8,CONCAT13(uVar25,0x282828),0x6e);
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"PROCESSES: %u",*(uint *)((int)pvVar11 + 900));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x15a,0x1b4,(int)local_d8,CONCAT13(uVar25,0x282828),0x78);
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x23e,0x18c,((uintptr_t)pf_module_state+0x2b3U),CONCAT13(uVar25,0x282828),0x50);
      iVar14 = (int)pvVar11 + 0x60d8;
      iVar12 = (int)pvVar11 + 0x6120;
      uVar15 = 0x222;
      cVar28 = '\x01';
      uVar20 = (undefined2)iVar12;
      uVar26 = (undefined1)((uint)iVar12 >> 0x10);
      uVar27 = (undefined1)((uint)iVar12 >> 0x18);
      uVar24 = (undefined2)iVar14;
      uVar25 = (undefined1)((uint)iVar14 >> 0x10);
      uVar23 = (undefined1)((uint)iVar14 >> 0x18);
      iVar14 = 0x62;
      goto LAB_10003fb1;
    case 2:
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        local_20 = 0x10;
      }
      local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar6 = 0;
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10;
      }
      local_28 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      if (0x1f7 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_28 = (undefined *)0x1f8;
      }
      local_54 = *(undefined **)((int)local_18 + 0x414);
      local_98 = *(int *)((int)local_18 + 0x418);
      local_48 = *(undefined **)((int)local_18 + 0x420);
      local_4c = *(undefined **)((int)local_18 + 0x41c);
      local_30 = *(uint *)((int)local_18 + 0x428);
      local_38 = *(uint *)((int)local_18 + 0x424);
      local_3c = *(undefined **)((int)local_18 + 0x430);
      local_34 = *(undefined **)((int)local_18 + 0x42c);
      if (0x17a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_24 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x5e8);
        local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
        puVar13 = (undefined *)0x17a;
        do {
          uVar8 = local_20;
          if ((int)local_20 < (int)uVar6) {
            do {
              if (((((int)puVar13 < (int)uVar9) && (-1 < (int)uVar8)) &&
                  (*(int *)((int)local_18 + 0x340) != 0)) && ((int)uVar8 < (int)uVar15)) {
                local_24[uVar8 * 4 + *(int *)((int)local_18 + 0x340)] = 0xe7;
                local_24[uVar8 * 4 + *(int *)((int)local_18 + 0x340) + 1] = 0xe7;
                local_24[uVar8 * 4 + *(int *)((int)local_18 + 0x340) + 2] = 0xe7;
                local_24[uVar8 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
              }
              uVar8 = uVar8 + 1;
            } while (uVar6 != uVar8);
          }
          puVar13 = puVar13 + 1;
          local_24 = local_24 + (int)local_2c;
        } while (puVar13 != local_28);
      }
      local_d8[0] = -0x3d;
      local_d8[1] = -0x3d;
      local_d8[2] = 0xc3;
      uVar25 = 0;
      recovered_100059c0((int)local_18,0x10,0x17a,(int)local_44,0x7e,CONCAT13(uVar23,0xc3c3c3));
      recovered_10006930((int)pvVar11);
      pf_varargs_10006bdc__8_(local_d8,0x40,"READS IN: %llu",CONCAT44(local_98,local_54));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x58,0x1a8,(int)local_d8,CONCAT13(uVar25,0x282828),0x82);
      pf_varargs_10006bdc__8_(local_d8,0x40,"WRITES OUT: %llu",CONCAT44(local_48,local_4c));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x58,0x1be,(int)local_d8,CONCAT13(uVar25,0x282828),0x8c);
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"READS/SEC: %u",*(uint *)((int)pvVar11 + 0x60b8));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x58,0x1d4,(int)local_d8,CONCAT13(uVar25,0x282828),0x82);
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"WRITES/SEC: %u",*(uint *)((int)pvVar11 + 0x60bc));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x58,0x1ea,(int)local_d8,CONCAT13(uVar25,0x282828),0x8c);
      uVar15 = 0x3fffffff;
      if (local_30 == 0 && (uint)(0x3fffffff < local_38) <= -local_30) {
        uVar15 = 0xfffff;
        if (local_30 != 0 || -local_30 < (uint)(0xfffff < local_38)) {
          sVar4 = 0x14;
          puVar13 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004059;
        }
        if ((local_38 < 0x400) <= local_30) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          puVar13 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004059;
        }
        pf_varargs_10006bdc__8__4_
                  ((char *)&local_94,0x40,"%llu %s",CONCAT44(local_30,local_38),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        puVar13 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004059:
        lVar1 = (ulonglong)(uVar15 & local_38) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        pf_varargs_10006bdc__8__8__4_
                  ((char *)&local_94,0x40,"%llu.%02llu %s",
                   CONCAT44(local_30 >> sVar4,local_38 >> sVar4 | local_30 << 0x20 - sVar4),
                   CONCAT17((char)(uVar9 >> 0x18),
                            CONCAT16((char)(uVar9 >> 0x10),
                                     CONCAT24((short)uVar9,
                                              (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))),
                   (uint)puVar13);
      }
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"DATA READ: %s",(uint)&local_94);
      acStack_11c[0] = '(';
      acStack_11c[1] = '(';
      acStack_11c[2] = 0x28;
      recovered_10005dc0((int)local_18,0x12e,0x1a8,(int)local_d8,CONCAT13(uVar25,0x282828),0xaa);
      uVar15 = 0x3fffffff;
      if (local_3c == (undefined *)0x0 &&
          (uint)((undefined *)0x3fffffff < local_34) <= (uint)-(int)local_3c) {
        uVar15 = 0xfffff;
        if (local_3c != (undefined *)0x0 ||
            (uint)-(int)local_3c < (uint)((undefined *)0xfffff < local_34)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_1000416a;
        }
        if ((undefined *)(uint)(local_34 < (undefined *)0x400) <= local_3c) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_1000416a;
        }
        pf_varargs_10006bdc__8__4_
                  ((char *)&local_94,0x40,"%llu %s",CONCAT44(local_3c,local_34),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_1000416a:
        lVar1 = (ulonglong)(uVar15 & (uint)local_34) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        pf_varargs_10006bdc__8__8__4_
                  ((char *)&local_94,0x40,"%llu.%02llu %s",
                   CONCAT44((uint)local_3c >> sVar4,
                            (uint)local_34 >> sVar4 | (int)local_3c << 0x20 - sVar4),
                   CONCAT17((char)(uVar9 >> 0x18),
                            CONCAT16((char)(uVar9 >> 0x10),
                                     CONCAT24((short)uVar9,
                                              (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))),
                   (uint)local_14);
      }
      uVar23 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"DATA WRITTEN: %s",(uint)&local_94);
      pvVar10 = local_18;
      acStack_11c[0] = '(';
      acStack_11c[1] = '(';
      acStack_11c[2] = 0x28;
      uVar24 = 0x2828;
      uVar25 = 0x28;
      uVar26 = 0xb4;
      uVar27 = 0;
      uVar30 = 0;
      uVar31 = 0;
      recovered_10005dc0((int)local_18,0x12e,0x1be,(int)local_d8,CONCAT13(uVar23,0x282828),0xb4);
      uVar15 = *(uint *)((int)pvVar10 + 0x60c0);
      uVar9 = *(uint *)((int)pvVar10 + 0x60c4);
      uVar6 = 0x3fffffff;
      if (uVar9 == 0 && (uint)(0x3fffffff < uVar15) <= -uVar9) {
        uVar6 = 0xfffff;
        if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar15)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004280;
        }
        if ((uVar15 < 0x400) <= uVar9) {
          uVar6 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004280;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004280:
        lVar1 = (ulonglong)(uVar6 & uVar15) * 100;
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = uVar15 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar6 = (uint)lVar1 >> sVar4 | uVar8 << 0x20 - sVar4;
        uVar8 = uVar8 >> sVar4;
        uVar26 = SUB41(local_14,0);
        uVar27 = (undefined1)((uint)local_14 >> 8);
        uVar30 = (undefined1)((uint)local_14 >> 0x10);
        uVar31 = (undefined1)((uint)local_14 >> 0x18);
        uVar24 = (undefined2)uVar8;
        uVar25 = (undefined1)(uVar8 >> 0x10);
        uVar23 = (undefined1)(uVar8 >> 0x18);
        uVar20 = (undefined2)uVar6;
        uVar21 = (undefined1)(uVar6 >> 0x10);
        uVar22 = (undefined1)(uVar6 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
      }
      pf_varargs_10006bdc__4__4__4__4__4_
                (acStack_11c,0x20,pcVar19,uVar15,uVar9,CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),
                 CONCAT13(uVar23,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar27,uVar26))));
      pf_varargs_10006bdc__4_((char *)&local_94,0x40,"%s/SEC",(uint)acStack_11c);
      uVar23 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"DATA READ/SEC: %s",(uint)&local_94);
      pvVar10 = local_18;
      acStack_11c[0] = 'H';
      acStack_11c[1] = -0x3c;
      acStack_11c[2] = 0x52;
      uVar24 = 0xc448;
      uVar25 = 0x52;
      uVar26 = 0xbe;
      uVar27 = 0;
      uVar30 = 0;
      uVar31 = 0;
      recovered_10005dc0((int)local_18,0x12e,0x1d4,(int)local_d8,CONCAT13(uVar23,0x52c448),0xbe);
      uVar15 = *(uint *)((int)pvVar10 + 0x60c8);
      uVar9 = *(uint *)((int)pvVar10 + 0x60cc);
      uVar6 = 0x3fffffff;
      if (uVar9 == 0 && (uint)(0x3fffffff < uVar15) <= -uVar9) {
        uVar6 = 0xfffff;
        if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar15)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_100043ad;
        }
        if ((uVar15 < 0x400) <= uVar9) {
          uVar6 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_100043ad;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_100043ad:
        lVar1 = (ulonglong)(uVar6 & uVar15) * 100;
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = uVar15 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar6 = (uint)lVar1 >> sVar4 | uVar8 << 0x20 - sVar4;
        uVar8 = uVar8 >> sVar4;
        uVar26 = SUB41(local_14,0);
        uVar27 = (undefined1)((uint)local_14 >> 8);
        uVar30 = (undefined1)((uint)local_14 >> 0x10);
        uVar31 = (undefined1)((uint)local_14 >> 0x18);
        uVar24 = (undefined2)uVar8;
        uVar25 = (undefined1)(uVar8 >> 0x10);
        uVar23 = (undefined1)(uVar8 >> 0x18);
        uVar20 = (undefined2)uVar6;
        uVar21 = (undefined1)(uVar6 >> 0x10);
        uVar22 = (undefined1)(uVar6 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
      }
      pf_varargs_10006bdc__4__4__4__4__4_
                (acStack_11c,0x20,pcVar19,uVar15,uVar9,CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),
                 CONCAT13(uVar23,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar27,uVar26))));
      pf_varargs_10006bdc__4_((char *)&local_94,0x40,"%s/SEC",(uint)acStack_11c);
      uVar23 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"DATA WRITTEN/SEC: %s",(uint)&local_94);
      pvVar10 = local_18;
      acStack_11c[0] = -0x30;
      acStack_11c[1] = 'K';
      acStack_11c[2] = 0x4b;
      uVar24 = 0x4bd0;
      uVar25 = 0x4b;
      uVar26 = 200;
      uVar27 = 0;
      uVar30 = 0;
      uVar31 = 0;
      recovered_10005dc0((int)local_18,0x12e,0x1ea,(int)local_d8,CONCAT13(uVar23,0x4b4bd0),200);
      uVar15 = *(uint *)((int)pvVar10 + 0x60d0);
      uVar9 = *(uint *)((int)pvVar10 + 0x60d4);
      uVar6 = 0x3fffffff;
      if (uVar9 == 0 && (uint)(0x3fffffff < uVar15) <= -uVar9) {
        uVar6 = 0xfffff;
        if (uVar9 != 0 || -uVar9 < (uint)(0xfffff < uVar15)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_100044d4;
        }
        if ((uVar15 < 0x400) <= uVar9) {
          uVar6 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_100044d4;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_100044d4:
        lVar1 = (ulonglong)(uVar6 & uVar15) * 100;
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = uVar15 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar6 = (uint)lVar1 >> sVar4 | uVar8 << 0x20 - sVar4;
        uVar8 = uVar8 >> sVar4;
        uVar26 = SUB41(local_14,0);
        uVar27 = (undefined1)((uint)local_14 >> 8);
        uVar30 = (undefined1)((uint)local_14 >> 0x10);
        uVar31 = (undefined1)((uint)local_14 >> 0x18);
        uVar24 = (undefined2)uVar8;
        uVar25 = (undefined1)(uVar8 >> 0x10);
        uVar23 = (undefined1)(uVar8 >> 0x18);
        uVar20 = (undefined2)uVar6;
        uVar21 = (undefined1)(uVar6 >> 0x10);
        uVar22 = (undefined1)(uVar6 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
      }
      pf_varargs_10006bdc__4__4__4__4__4_
                (acStack_11c,0x20,pcVar19,uVar15,uVar9,CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),
                 CONCAT13(uVar23,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar27,uVar26))));
      pf_varargs_10006bdc__4_((char *)&local_94,0x40,"%s/SEC",(uint)acStack_11c);
      uVar25 = 1;
      pf_varargs_10006bdc__4_(local_d8,0x40,"PEAK: %s",(uint)&local_94);
      pvVar11 = local_18;
      acStack_11c[0] = '(';
      acStack_11c[1] = '(';
      acStack_11c[2] = 0x28;
      recovered_10005dc0((int)local_18,0x232,0x18c,(int)local_d8,CONCAT13(uVar25,0x282828),0x82);
      uVar25 = (undefined1)((uint)((int)pvVar11 + 0x6168) >> 0x18);
      recovered_10006350((int)pvVar11,0x224,0x6a,(int)pvVar11 + 0x6168,(int)pvVar11 + 0x61b0,'\0');
      acStack_11c[0] = '\0';
      acStack_11c[1] = -0x10;
      acStack_11c[2] = 0x1c;
      recovered_10006080((int)pvVar11,0x1de,0x1ce,CONCAT13(uVar25,0x1cf000));
      acStack_11c[0] = -0xb;
      acStack_11c[1] = '\x18';
      acStack_11c[2] = 0x14;
      recovered_10006080((int)pvVar11,0x1de,0x1e6,CONCAT13(uVar25,0x1418f5));
      goto LAB_100050f6;
    case 3:
      local_30 = *(uint *)((int)pvVar10 + 0x410);
      local_34 = *(undefined **)((int)pvVar10 + 0x40c);
      local_54 = *(undefined **)((int)pvVar10 + 0x404);
      local_38 = *(uint *)((int)pvVar10 + 0x408);
      local_4c = (undefined *)0x0;
      local_48 = (undefined *)0x0;
      if (local_38 <= local_30 && (uint)(local_34 < local_54) <= local_30 - local_38) {
        local_4c = (undefined *)((local_30 - local_38) - (uint)(local_34 < local_54));
        local_48 = local_34 + -(int)local_54;
      }
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        local_20 = 0x10;
      }
      local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar6 = 0;
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10;
      }
      local_28 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      if (0x1f7 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_28 = (undefined *)0x1f8;
      }
      if (0x17a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_24 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x5e8);
        local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
        uVar8 = 0x17a;
        do {
          uVar2 = local_20;
          if ((int)local_20 < (int)uVar6) {
            do {
              if (((((int)uVar8 < (int)uVar9) && (-1 < (int)uVar2)) &&
                  (*(int *)((int)local_18 + 0x340) != 0)) && ((int)uVar2 < (int)uVar15)) {
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340)] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 1] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 2] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
              }
              uVar2 = uVar2 + 1;
            } while (uVar6 != uVar2);
          }
          uVar8 = uVar8 + 1;
          local_24 = local_24 + (int)local_2c;
        } while ((undefined *)uVar8 != local_28);
      }
      local_d8[0] = -0x3d;
      local_d8[1] = -0x3d;
      local_d8[2] = 0xc3;
      uVar26 = 0;
      recovered_100059c0((int)local_18,0x10,0x17a,(int)local_44,0x7e,CONCAT13(uVar23,0xc3c3c3));
      recovered_10006930((int)pvVar11);
      uVar15 = 0x3fffffff;
      if (local_38 == 0 && (uint)((undefined *)0x3fffffff < local_54) <= -local_38) {
        uVar15 = 0xfffff;
        if (local_38 != 0 || -local_38 < (uint)((undefined *)0xfffff < local_54)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004649;
        }
        if ((local_54 < (undefined *)0x400) <= local_38) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004649;
        }
        pf_varargs_10006bdc__8__4_(local_d8,0x40,"%llu %s",CONCAT44(local_38,local_54),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004649:
        lVar1 = (ulonglong)(uVar15 & (uint)local_54) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        uVar26 = (undefined1)(uVar9 >> 0x18);
        pf_varargs_10006bdc__8__8__4_
                  (local_d8,0x40,"%llu.%02llu %s",
                   CONCAT44(local_38 >> sVar4,(uint)local_54 >> sVar4 | local_38 << 0x20 - sVar4),
                   CONCAT17(uVar26,CONCAT16((char)(uVar9 >> 0x10),
                                            CONCAT24((short)uVar9,
                                                     (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))
                           ),(uint)local_14);
        pvVar11 = local_18;
      }
      uVar15 = 0x3fffffff;
      if (local_4c == (undefined *)0x0 &&
          (uint)((undefined *)0x3fffffff < local_48) <= (uint)-(int)local_4c) {
        uVar15 = 0xfffff;
        if (local_4c != (undefined *)0x0 ||
            (uint)-(int)local_4c < (uint)((undefined *)0xfffff < local_48)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_100046fa;
        }
        if ((undefined *)(uint)(local_48 < (undefined *)0x400) <= local_4c) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_100046fa;
        }
        pf_varargs_10006bdc__8__4_
                  ((char *)&local_94,0x40,"%llu %s",CONCAT44(local_4c,local_48),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_100046fa:
        lVar1 = (ulonglong)(uVar15 & (uint)local_48) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        uVar26 = (undefined1)(uVar9 >> 0x18);
        pf_varargs_10006bdc__8__8__4_
                  ((char *)&local_94,0x40,"%llu.%02llu %s",
                   CONCAT44((uint)local_4c >> sVar4,
                            (uint)local_48 >> sVar4 | (int)local_4c << 0x20 - sVar4),
                   CONCAT17(uVar26,CONCAT16((char)(uVar9 >> 0x10),
                                            CONCAT24((short)uVar9,
                                                     (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))
                           ),(uint)local_14);
        pvVar11 = local_18;
      }
      uVar15 = 0x3fffffff;
      if (local_30 == 0 && (uint)((undefined *)0x3fffffff < local_34) <= -local_30) {
        uVar15 = 0xfffff;
        if (local_30 != 0 || -local_30 < (uint)((undefined *)0xfffff < local_34)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_100047a8;
        }
        if ((local_34 < (undefined *)0x400) <= local_30) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_100047a8;
        }
        pf_varargs_10006bdc__8__4_(acStack_11c,0x40,"%llu %s",CONCAT44(local_30,local_34),((uintptr_t)pf_module_state+0x22eU))
        ;
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_100047a8:
        lVar1 = (ulonglong)(uVar15 & (uint)local_34) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        uVar26 = (undefined1)(uVar9 >> 0x18);
        pf_varargs_10006bdc__8__8__4_
                  (acStack_11c,0x40,"%llu.%02llu %s",
                   CONCAT44(local_30 >> sVar4,(uint)local_34 >> sVar4 | local_30 << 0x20 - sVar4),
                   CONCAT17(uVar26,CONCAT16((char)(uVar9 >> 0x10),
                                            CONCAT24((short)uVar9,
                                                     (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))
                           ),(uint)local_14);
        pvVar11 = local_18;
      }
      uStack_40 = 0x2828;
      uStack_3e = 0x28;
      recovered_10005dc0((int)pvVar11,0x4e,0x1c2,((uintptr_t)pf_module_state+0x37dU),CONCAT13(uVar26,0x282828),0x82);
      uStack_40 = 0x4646;
      uStack_3e = 0xcd;
      recovered_10005dc0((int)pvVar11,0xce,0x1c2,(int)&local_94,CONCAT13(uVar26,0xcd4646),0x78);
      uStack_40 = 0x2828;
      uStack_3e = 0x28;
      recovered_10005dc0((int)pvVar11,0x4e,0x1da,((uintptr_t)pf_module_state+0x38dU),CONCAT13(uVar26,0x282828),100);
      uStack_40 = 0xc448;
      uStack_3e = 0x52;
      recovered_10005dc0((int)pvVar11,0xce,0x1da,(int)local_d8,CONCAT13(uVar26,0x52c448),0x78);
      uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x6b0;
      local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      local_3c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
      puVar13 = (undefined *)0xffffffe0;
      do {
        local_28 = puVar13;
        local_24 = local_28 + 0x1cc;
        uVar6 = 0x214;
        do {
          if ((((uVar6 - 0x234) * (uVar6 - 0x234) + (int)local_28 * (int)local_28 < 0x401) &&
              (pvVar11 != (void *)0x0)) &&
             (piVar16 = (int *)((int)pvVar11 + 0x340), pvVar11 = local_18,
             (((int)uVar6 < (int)uVar15 && -1 < (int)(uVar6 | (uint)local_24)) &&
             (int)local_24 < (int)uVar9) && *piVar16 != 0)) {
            *(undefined1 *)(local_20 + uVar6 * 4 + *piVar16) = 0;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0xeb;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0x1c;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x255);
        local_20 = local_20 + (int)local_3c;
        puVar13 = local_28 + 1;
      } while (local_28 + 1 != (undefined *)0x21);
      if ((local_34 != (undefined *)0x0 || local_30 != 0) &&
         (bVar17 = local_38 < local_30, uVar15 = local_38 - local_30,
         local_38 = uVar15 - (local_54 < local_34), bVar17 || uVar15 < (local_54 < local_34))) {
        iVar14 = (int)local_4c << 6;
        uVar26 = (undefined1)((uint)local_34 >> 0x18);
        uVar18 = FUN_10006bc4(CONCAT17((char)((uint)iVar14 >> 0x18),
                                       CONCAT16((char)((uint)iVar14 >> 0x10),
                                                CONCAT24((ushort)iVar14 |
                                                         (ushort)((uint)local_48 >> 0x1a),
                                                         (int)local_48 << 6))),
                              CONCAT17((char)(local_30 >> 0x18),
                                       CONCAT16((char)(local_30 >> 0x10),
                                                CONCAT15((char)(local_30 >> 8),
                                                         CONCAT14((char)local_30,local_34)))));
        local_38 = (uint)uVar18;
        local_24 = (undefined *)(local_38 - 0x20);
        local_34 = (undefined *)((int)local_14 * 0x6b0);
        local_30 = 0xffffffe0;
        do {
          if (-1 < (int)local_38) {
            local_2c = (undefined *)(local_30 * local_30);
            local_44 = (undefined *)(local_30 + 0x1cc);
            uVar15 = 0x214;
            do {
              iVar14 = uVar15 - 0x234;
              if ((local_2c + iVar14 * iVar14 < (undefined *)0x401) && (pvVar11 != (void *)0x0)) {
                local_20 = CONCAT31(PF_PART3(local_20, 1),(int)local_44 < (int)local_1c);
                iVar12 = *(int *)((int)pvVar11 + 0x340);
                local_28 = (undefined *)CONCAT31(PF_PART3(local_28, 1),iVar12 != 0);
                pvVar11 = local_18;
                if ((((int)uVar15 < (int)local_14 && -1 < (int)(uVar15 | (uint)local_44)) &&
                    (int)local_44 < (int)local_1c) && iVar12 != 0) {
                  local_34[uVar15 * 4 + iVar12] = 0x1e;
                  local_34[uVar15 * 4 + *(int *)((int)local_18 + 0x340) + 1] = 0x1e;
                  local_34[uVar15 * 4 + *(int *)((int)local_18 + 0x340) + 2] = 0xee;
                  local_34[uVar15 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
                }
              }
              uVar15 = uVar15 + 1;
            } while (iVar14 < (int)local_24);
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + (int)local_3c;
        } while (local_30 != 0x21);
      }
      uStack_40 = 0x2828;
      uStack_3e = 0x28;
      uVar24 = SUB42(acStack_11c,0);
      uVar25 = (undefined1)((uint)acStack_11c >> 0x10);
      uVar23 = (undefined1)((uint)acStack_11c >> 0x18);
      bVar29 = 0x78;
      iVar12 = 0x1f6;
      iVar14 = 0x212;
      break;
    case 1:
      local_4c = *(undefined **)((int)pvVar10 + 0x364);
      local_48 = *(undefined **)((int)pvVar10 + 0x368);
      local_34 = *(undefined **)((int)pvVar10 + 0x36c);
      local_3c = *(undefined **)((int)pvVar10 + 0x370);
      local_38 = 0;
      local_30 = 0;
      if (local_48 <= local_3c &&
          (uint)(local_34 < local_4c) <= (uint)((int)local_3c - (int)local_48)) {
        local_30 = (int)local_34 - (int)local_4c;
        local_38 = ((int)local_3c - (int)local_48) - (uint)(local_34 < local_4c);
      }
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        local_20 = 0x10;
      }
      local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar6 = 0;
      if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
        uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10;
      }
      local_28 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      if (0x1f7 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_28 = (undefined *)0x1f8;
      }
      if (0x17a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
        local_24 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x5e8);
        local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
        uVar8 = 0x17a;
        do {
          uVar2 = local_20;
          if ((int)local_20 < (int)uVar6) {
            do {
              if (((((int)uVar8 < (int)uVar9) && (-1 < (int)uVar2)) &&
                  (*(int *)((int)local_18 + 0x340) != 0)) && ((int)uVar2 < (int)uVar15)) {
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340)] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 1] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 2] = 0xe7;
                local_24[uVar2 * 4 + *(int *)((int)local_18 + 0x340) + 3] = 0xff;
              }
              uVar2 = uVar2 + 1;
            } while (uVar6 != uVar2);
          }
          uVar8 = uVar8 + 1;
          local_24 = local_24 + (int)local_2c;
        } while ((undefined *)uVar8 != local_28);
      }
      local_d8[0] = -0x3d;
      local_d8[1] = -0x3d;
      local_d8[2] = 0xc3;
      uVar27 = 0xc3;
      uVar30 = 0xc3;
      uVar31 = 0xc3;
      uVar24 = 0x7e;
      uVar25 = 0;
      uVar26 = 0;
      recovered_100059c0((int)local_18,0x10,0x17a,(int)local_44,0x7e,CONCAT13(uVar23,0xc3c3c3));
      uVar15 = 0x3fffffff;
      if (local_48 == (undefined *)0x0 &&
          (uint)((undefined *)0x3fffffff < local_4c) <= (uint)-(int)local_48) {
        uVar15 = 0xfffff;
        if (local_48 != (undefined *)0x0 ||
            (uint)-(int)local_48 < (uint)((undefined *)0xfffff < local_4c)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004b6e;
        }
        if ((undefined *)(uint)(local_4c < (undefined *)0x400) <= local_48) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004b6e;
        }
        uVar20 = 0x6df1;
        uVar21 = 0x80;
        uVar22 = 1;
        pcVar19 = "%llu %s";
        puVar13 = local_4c;
        puVar5 = local_48;
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004b6e:
        lVar1 = (ulonglong)(uVar15 & (uint)local_4c) * 100;
        uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar15 = (uint)lVar1 >> sVar4 | uVar9 << 0x20 - sVar4;
        uVar9 = uVar9 >> sVar4;
        uVar27 = SUB41(local_14,0);
        uVar30 = (undefined1)((uint)local_14 >> 8);
        uVar31 = (undefined1)((uint)local_14 >> 0x10);
        uVar23 = (undefined1)((uint)local_14 >> 0x18);
        uVar24 = (undefined2)uVar9;
        uVar25 = (undefined1)(uVar9 >> 0x10);
        uVar26 = (undefined1)(uVar9 >> 0x18);
        uVar20 = (undefined2)uVar15;
        uVar21 = (undefined1)(uVar15 >> 0x10);
        uVar22 = (undefined1)(uVar15 >> 0x18);
        pcVar19 = "%llu.%02llu %s";
        puVar13 = (undefined *)((uint)local_4c >> sVar4 | (int)local_48 << 0x20 - sVar4);
        puVar5 = (undefined *)((uint)local_48 >> sVar4);
      }
      pf_varargs_10006bdc__4__4__4__4__4_
                (local_d8,0x40,pcVar19,(uint)puVar13,(uint)puVar5,
                 CONCAT13(uVar22,CONCAT12(uVar21,uVar20)),CONCAT13(uVar26,CONCAT12(uVar25,uVar24)),
                 CONCAT13(uVar23,CONCAT12(uVar31,CONCAT11(uVar30,uVar27))));
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x5c,0x19c,((uintptr_t)pf_module_state+0x2bdU),CONCAT13(uVar26,0x282828),0x3c);
      local_94 = 0xc448;
      local_92 = 0x52;
      recovered_10005dc0((int)pvVar11,0x94,0x19c,(int)local_d8,CONCAT13(uVar26,0x52c448),0x6e);
      uVar15 = 0x3fffffff;
      if (local_38 == 0 && (uint)(0x3fffffff < local_30) <= -local_38) {
        uVar15 = 0xfffff;
        if (local_38 != 0 || -local_38 < (uint)(0xfffff < local_30)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004ca9;
        }
        if ((local_30 < 0x400) <= local_38) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004ca9;
        }
        pf_varargs_10006bdc__8__4_(local_d8,0x40,"%llu %s",CONCAT44(local_38,local_30),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004ca9:
        lVar1 = (ulonglong)(uVar15 & local_30) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        uVar26 = (undefined1)(uVar9 >> 0x18);
        pf_varargs_10006bdc__8__8__4_
                  (local_d8,0x40,"%llu.%02llu %s",
                   CONCAT44(local_38 >> sVar4,local_30 >> sVar4 | local_38 << 0x20 - sVar4),
                   CONCAT17(uVar26,CONCAT16((char)(uVar9 >> 0x10),
                                            CONCAT24((short)uVar9,
                                                     (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))
                           ),(uint)local_14);
        pvVar11 = local_18;
      }
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x5c,0x1b4,((uintptr_t)pf_module_state+0x2c3U),CONCAT13(uVar26,0x282828),0x3c);
      local_94 = 0x4646;
      local_92 = 0xcd;
      recovered_10005dc0((int)pvVar11,0x94,0x1b4,(int)local_d8,CONCAT13(uVar26,0xcd4646),0x6e);
      uVar15 = 0x3fffffff;
      if (local_3c == (undefined *)0x0 &&
          (uint)((undefined *)0x3fffffff < local_34) <= (uint)-(int)local_3c) {
        uVar15 = 0xfffff;
        if (local_3c != (undefined *)0x0 ||
            (uint)-(int)local_3c < (uint)((undefined *)0xfffff < local_34)) {
          sVar4 = 0x14;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x233U));
          goto LAB_10004dea;
        }
        if ((undefined *)(uint)(local_34 < (undefined *)0x400) <= local_3c) {
          uVar15 = 0x3ff;
          sVar4 = 10;
          local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x236U));
          goto LAB_10004dea;
        }
        pf_varargs_10006bdc__8__4_(local_d8,0x40,"%llu %s",CONCAT44(local_3c,local_34),((uintptr_t)pf_module_state+0x22eU));
      }
      else {
        sVar4 = 0x1e;
        local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x230U));
LAB_10004dea:
        lVar1 = (ulonglong)(uVar15 & (uint)local_34) * 100;
        uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar9 = uVar15 >> sVar4;
        uVar26 = (undefined1)(uVar9 >> 0x18);
        pf_varargs_10006bdc__8__8__4_
                  (local_d8,0x40,"%llu.%02llu %s",
                   CONCAT44((uint)local_3c >> sVar4,
                            (uint)local_34 >> sVar4 | (int)local_3c << 0x20 - sVar4),
                   CONCAT17(uVar26,CONCAT16((char)(uVar9 >> 0x10),
                                            CONCAT24((short)uVar9,
                                                     (uint)lVar1 >> sVar4 | uVar15 << 0x20 - sVar4))
                           ),(uint)local_14);
        pvVar11 = local_18;
      }
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x15a,0x19c,((uintptr_t)pf_module_state+0x2c9U),CONCAT13(uVar26,0x282828),0x50);
      local_94 = 0x2828;
      local_92 = 0x28;
      recovered_10005dc0((int)pvVar11,0x1a2,0x19c,(int)local_d8,CONCAT13(uVar26,0x282828),0x6e);
      uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      uVar15 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      local_1c = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
      local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x660;
      local_14 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
      local_2c = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
      puVar13 = (undefined *)0xffffffe0;
      do {
        local_28 = puVar13;
        local_24 = local_28 + 0x1b8;
        uVar6 = 0x214;
        do {
          if ((((uVar6 - 0x234) * (uVar6 - 0x234) + (int)local_28 * (int)local_28 < 0x401) &&
              (pvVar11 != (void *)0x0)) &&
             (piVar16 = (int *)((int)pvVar11 + 0x340), pvVar11 = local_18,
             (((int)uVar6 < (int)uVar15 && -1 < (int)(uVar6 | (uint)local_24)) &&
             (int)local_24 < (int)uVar9) && *piVar16 != 0)) {
            *(undefined1 *)(local_20 + uVar6 * 4 + *piVar16) = 0;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0xeb;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0x1c;
            *(undefined1 *)(local_20 + uVar6 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x255);
        local_20 = local_20 + (int)local_2c;
        puVar13 = local_28 + 1;
      } while (local_28 + 1 != (undefined *)0x21);
      if (local_34 != (undefined *)0x0 || local_3c != (undefined *)0x0) {
        iVar14 = local_38 * 100 + (int)((ulonglong)local_30 * 100 >> 0x20);
        uVar26 = (undefined1)((uint)local_34 >> 0x18);
        uVar18 = FUN_10006bc4(CONCAT17((char)((uint)iVar14 >> 0x18),
                                       CONCAT16((char)((uint)iVar14 >> 0x10),
                                                CONCAT24((short)iVar14,
                                                         (int)((ulonglong)local_30 * 100)))),
                              CONCAT17((char)((uint)local_3c >> 0x18),
                                       CONCAT16((char)((uint)local_3c >> 0x10),
                                                CONCAT15((char)((uint)local_3c >> 8),
                                                         CONCAT14((char)local_3c,local_34)))));
        if ((uint)((uint)uVar18 < 0xb) <= (uint)(uVar18 >> 0x20)) {
          iVar14 = (int)local_14 * 0x660;
          uVar15 = 0xffffffe0;
          do {
            local_20 = uVar15;
            local_24 = (undefined *)(local_20 + 0x1b8);
            iVar12 = 0x234;
            do {
              if ((((iVar12 + -0x234) * (iVar12 + -0x234) + local_20 * local_20 < 0x401) &&
                  (local_18 != (void *)0x0)) &&
                 ((iVar12 < (int)local_14 && (int)local_24 < (int)local_1c) &&
                  *(int *)((int)local_18 + 0x340) != 0)) {
                *(undefined1 *)(iVar14 + iVar12 * 4 + *(int *)((int)local_18 + 0x340)) = 0x28;
                *(undefined1 *)(iVar14 + iVar12 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0x28;
                *(undefined1 *)(iVar14 + iVar12 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0xe6;
                *(undefined1 *)(iVar14 + iVar12 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != 0x255);
            iVar14 = iVar14 + (int)local_2c;
            uVar15 = local_20 + 1;
          } while (local_20 != 0);
        }
      }
      local_94 = 0x2828;
      local_92 = 0x28;
      uVar24 = SUB42(local_d8,0);
      uVar25 = (undefined1)((uint)local_d8 >> 0x10);
      uVar23 = (undefined1)((uint)local_d8 >> 0x18);
      bVar29 = 100;
      iVar12 = 0x1e2;
      iVar14 = 0x20c;
      pvVar11 = local_18;
    }
    recovered_10005dc0((int)pvVar11,iVar14,iVar12,CONCAT13(uVar23,CONCAT12(uVar25,uVar24)),
                       CONCAT13(uVar26,0x282828),(uint)bVar29);
  }
  else {
    local_24 = (undefined *)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
    if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
      local_24 = (undefined *)0x10;
    }
    puVar13 = (undefined *)0x0;
    if (0xf < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
      puVar13 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) - 0x10);
    }
    local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    if (0x1f7 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      local_20 = 0x1f8;
    }
    if (0x17a < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x5e8;
      local_28 = (undefined *)((*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4);
      uVar6 = 0x17a;
      do {
        puVar5 = local_24;
        if ((int)local_24 < (int)puVar13) {
          do {
            if ((((int)uVar6 < (int)uVar9) && (-1 < (int)puVar5)) &&
               ((*(int *)((int)local_18 + 0x340) != 0 && ((int)puVar5 < (int)uVar15)))) {
              *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340)) = 0xe7;
              *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 1) = 0xe7
              ;
              *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 2) = 0xe7
              ;
              *(undefined1 *)(iVar14 + (int)puVar5 * 4 + *(int *)((int)local_18 + 0x340) + 3) = 0xff
              ;
            }
            puVar5 = puVar5 + 1;
          } while (puVar13 != puVar5);
        }
        uVar6 = uVar6 + 1;
        iVar14 = iVar14 + (int)local_28;
        local_1c = puVar13;
      } while (uVar6 != local_20);
    }
    local_d8[0] = -0x3d;
    local_d8[1] = -0x3d;
    local_d8[2] = 0xc3;
    uVar25 = 0;
    recovered_100059c0((int)local_18,0x10,0x17a,(int)local_44,0x7e,CONCAT13(uVar23,0xc3c3c3));
    local_d8[0] = '(';
    local_d8[1] = '(';
    local_d8[2] = 0x28;
    recovered_10005dc0((int)pvVar11,0x58,0x1a2,((uintptr_t)pf_module_state+0x399U),CONCAT13(uVar25,0x282828),0x6e);
    local_d8[0] = '(';
    local_d8[1] = '(';
    local_d8[2] = 0x28;
    recovered_10005dc0((int)pvVar11,0x58,0x1ba,((uintptr_t)pf_module_state+0x3a7U),CONCAT13(uVar25,0x282828),0x78);
    local_d8[0] = '(';
    local_d8[1] = '(';
    local_d8[2] = 0x28;
    recovered_10005dc0((int)pvVar11,0x130,0x1a2,((uintptr_t)pf_module_state+0x3b6U),CONCAT13(uVar25,0x282828),0xa0);
    local_d8[0] = '(';
    local_d8[1] = '(';
    local_d8[2] = 0x28;
    recovered_10005dc0((int)pvVar11,0x130,0x1ba,((uintptr_t)pf_module_state+0x3cdU),CONCAT13(uVar25,0x282828),0x8c);
    local_d8[0] = '(';
    local_d8[1] = '(';
    local_d8[2] = 0x28;
    recovered_10005dc0((int)pvVar11,0x230,0x18c,((uintptr_t)pf_module_state+0x3e0U),CONCAT13(uVar25,0x282828),0x82);
    uVar15 = 0x224;
    cVar28 = '\0';
    uVar20 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar23 = 0;
    iVar14 = 0x6a;
LAB_10003fb1:
    recovered_10006350((int)pvVar11,uVar15,iVar14,CONCAT13(uVar23,CONCAT12(uVar25,uVar24)),
                       CONCAT13(uVar27,CONCAT12(uVar26,uVar20)),cVar28);
  }
LAB_100050f6:
  terror_ui_window_present(pvVar11,"Activity Monitor",*(void **)((int)pvVar11 + 0x340),(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)),
               (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)),(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4,0xefefef);
  return;
}

#undef DAT_01806ce0
#undef DAT_01807044
#undef UINT_01807078
#undef UINT_0180707c
#undef UNK_01806cd0
#undef UNK_01806df3
#undef UNK_01806df6
#undef UNK_01806df9
#undef UNK_01807060
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef acStack_11c
#undef uStack_40
#undef uStack_3e
#undef in_stack_fffffee3
#undef local_dc
#undef local_d8
#undef local_98
#undef local_94
#undef local_92
#undef local_54
#undef local_4d
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c

#define local_2764 (*(int (*)[2516])(frame + 76))
#define local_14 (*(uint *)(frame + 10140))
#define local_2794 (*(undefined1 (*)[48])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005290
 */

void recovered_10005290(int in_ECX)

{
  unsigned char frame[10192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;

  local_14 = 0;
  if (((in_ECX != 0) && (*(int *)(in_ECX + 0x354) != -1)) &&
     (iVar2 = *(int *)(in_ECX + 0x60a0), iVar2 != 0)) {
    piVar3 = (int *)(in_ECX + 0x2480);
    do {
      if (*piVar3 == *(int *)(in_ECX + 0x354)) {
        memset(local_2794,0,0x2780);
        uVar1 = terror_ui_window_list(local_2794,0x10,&local_14);
        if (uVar1 == 0) {
          return;
        }
        if (local_14 < 0x11) {
          if (local_14 == 0) {
            return;
          }
        }
        else {
          local_14 = 0x10;
        }
        uVar4 = 0;
        piVar3 = local_2764;
        uVar1 = local_14;
        do {
          if (piVar3[-0xb] == *(int *)(in_ECX + 0x354)) {
            terror_ui_window_configure(piVar3[-0xc],piVar3[-1],*piVar3,0xe,10);
            uVar1 = local_14;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 0x9e;
        } while (uVar4 < uVar1);
        return;
      }
      piVar3 = piVar3 + 0x6e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

#undef local_2764
#undef local_14
#undef local_2794

#undef UNK_01806d4d
#define UNK_01806d4d (*(uint8_t *)(0x1806d4dU))
#undef UNK_01806d54
#define UNK_01806d54 (*(uint8_t *)(0x1806d54U))
#define format (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005380
 */

void recovered_10005380(int in_ECX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *vararg2;
  int iVar2;
  undefined *vararg3;

  if (in_ECX != 0) {
    if ((*(int *)(in_ECX + 0x354) != -1) && (iVar2 = *(int *)(in_ECX + 0x60a0), iVar2 != 0)) {
      pcVar1 = (char *)(in_ECX + 0x2540);
      do {
        if (*(int *)(pcVar1 + -0xc0) == *(int *)(in_ECX + 0x354)) {
          vararg2 = "/";
          if (*pcVar1 != '\0') {
            vararg2 = pcVar1;
          }
          vararg3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x191U));
          if ((pcVar1[-0xbc] & 1U) != 0) {
            vararg3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x18aU));
          }
          if (*vararg2 == '/') {
            format = "0x%llX,[%d]:;%s>,%s:%u";
          }
          else {
            format = "0x%llX,[%d]:;/%s>,%s:%u";
          }
          pf_varargs_10006bdc__8__4__4__4__4_
                    ((char *)(in_ECX + 0x61f8),0x100,format,*(ulonglong *)(pcVar1 + -0x90),
                     *(uint *)(pcVar1 + -0x84),(uint)vararg2,(uint)vararg3,*(uint *)(pcVar1 + -0x88)
                    );
          return;
        }
        pcVar1 = pcVar1 + 0x1b8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined1 *)(in_ECX + 0x61f8) = 0;
  }
  return;
}

#undef UNK_01806d4d
#undef UNK_01806d54
#undef format

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

void recovered_10005450(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  if (in_ECX != 0) {
    recovered_10005530(in_ECX);
    if (*(uint *)(in_ECX + 0x60a4) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0x358) + 1U) % *(uint *)(in_ECX + 0x60a4);
      *(uint *)(in_ECX + 0x358) = uVar2;
      uVar1 = *(undefined4 *)(in_ECX + 0x6f0 + uVar2 * 0x1f8);
    }
    *(undefined4 *)(in_ECX + 0x35c) = uVar1;
    memset((void *)(in_ECX + 0x6168),0,0x48);
    memset((void *)(in_ECX + 0x61b0),0,0x48);
    *(undefined1 *)(in_ECX + 0x609d) = 0;
    *(undefined4 *)(in_ECX + 0x60b8) = 0;
    *(undefined4 *)(in_ECX + 0x60bc) = 0;
    *(undefined4 *)(in_ECX + 0x60c4) = 0;
    *(undefined4 *)(in_ECX + 0x60c0) = 0;
    *(undefined4 *)(in_ECX + 0x60cc) = 0;
    *(undefined4 *)(in_ECX + 0x60c8) = 0;
    *(undefined4 *)(in_ECX + 0x60d4) = 0;
    *(undefined4 *)(in_ECX + 0x60d0) = 0;
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

void recovered_10005530(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;

  local_14 = 0;
  memset((void *)(in_ECX + 0x500),0,0x1f80);
  iVar5 = Ram00006800;
  if (((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       (uVar2 = Ram00006808, 0xb < uVar2)) &&
      ((uVar2 = Ram00006808, 0xc3 < uVar2 && (pcVar3 = (code *)UINT_000068c0, pcVar3 != (code *)0x0)
       ))) && (uVar4 = (*pcVar3)((void *)(in_ECX + 0x500),0x10,&local_14), uVar2 = local_14,
              uVar4 != 0)) {
    uVar7 = local_14;
    if (0xf < local_14) {
      uVar7 = 0x10;
    }
    *(uint *)(in_ECX + 0x60a4) = uVar7;
    if (local_14 != 0) {
      piVar6 = (int *)(in_ECX + 0x6f0);
      uVar4 = 0;
      do {
        if (*piVar6 == *(int *)(in_ECX + 0x35c)) goto LAB_10005684;
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 0x7e;
      } while (uVar7 != uVar4);
    }
    iVar1 = Ram00006800;
    iVar5 = -1;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar4 = Ram00006808, 0xb < uVar4 &&
        ((uVar4 = Ram00006808, 0xbf < uVar4 &&
         (pcVar3 = (code *)UINT_000068bc, pcVar3 != (code *)0x0)))))) {
      iVar5 = (*pcVar3)();
    }
    if (uVar2 == 0) {
      return;
    }
    piVar6 = (int *)(in_ECX + 0x6f0);
    uVar4 = 0;
    do {
      if (*piVar6 == iVar5) goto LAB_1000567e;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x7e;
    } while (uVar7 != uVar4);
    if (uVar2 == 0) {
      return;
    }
    iVar5 = *(int *)(in_ECX + 0x6f0);
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x60a4) = 0;
    uVar4 = 0;
    iVar5 = -1;
  }
LAB_1000567e:
  *(int *)(in_ECX + 0x35c) = iVar5;
LAB_10005684:
  *(uint *)(in_ECX + 0x358) = uVar4;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068bc
#undef UINT_000068c0
#undef local_14

#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#define local_28 (*(uint *)(frame + 56))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(uint *)(frame + 72))
#define in_stack_ffffffb0 (*(undefined4 *)(frame + 16))
#define local_40 (*(uint *)(frame + 32))
#define local_34 (*(undefined2 *)(frame + 44))
#define local_30 (*(uint *)(frame + 48))
#define local_2c (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

void recovered_100056a0(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,int param_6,
                       char param_7)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  PF_PART1(local_30, 0) = 0xf6;
  if (param_7 == '\0') {
    PF_PART1(local_30, 0) = 0xda;
  }
  uVar6 = in_EDX;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)in_EDX) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_2c = 0;
  local_40 = 0;
  if (-1 < (int)in_EDX) {
    local_40 = uVar6;
  }
  uVar6 = param_3;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)param_3) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  local_18 = 0;
  if (-1 < (int)param_3) {
    local_18 = uVar6;
  }
  uVar6 = param_4 + in_EDX;
  uVar3 = uVar6;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)uVar6) {
    uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  uVar5 = 0;
  if (-1 < (int)uVar6) {
    uVar5 = uVar3;
  }
  uVar6 = param_5 + param_3;
  uVar3 = uVar6;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)uVar6) {
    uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  if (-1 < (int)uVar6) {
    local_2c = uVar3;
  }
  if ((int)local_18 < (int)local_2c) {
    local_1c = local_18 * (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    do {
      uVar6 = local_40;
      if ((int)local_40 < (int)uVar5) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar6 < (int)uVar1 && -1 < (int)(uVar6 | local_18)) &&
              (int)local_18 < (int)uVar2) && *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_1c + uVar6 * 4) = (undefined1)local_30;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_1c + 1 + uVar6 * 4) =
                 (undefined1)local_30;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_1c + 2 + uVar6 * 4) =
                 (undefined1)local_30;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_1c + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + iVar7;
    } while (local_18 != local_2c);
  }
  recovered_100059c0(in_ECX,in_EDX,param_3,param_4,param_5,
                     CONCAT13((char)((uint)in_stack_ffffffb0 >> 0x18),0x7e7e7e));
  uVar6 = in_EDX + 1;
  if ((int)uVar1 <= (int)(in_EDX + 1)) {
    uVar6 = uVar1;
  }
  local_28 = 0;
  local_30 = 0;
  if (-2 < (int)in_EDX) {
    local_30 = uVar6;
  }
  uVar6 = param_3 + 1;
  if ((int)uVar2 <= (int)(param_3 + 1)) {
    uVar6 = uVar2;
  }
  local_1c = 0;
  if (-2 < (int)param_3) {
    local_1c = uVar6;
  }
  uVar6 = (in_EDX - 1) + param_4;
  uVar3 = uVar6;
  if ((int)uVar1 <= (int)uVar6) {
    uVar3 = uVar1;
  }
  local_18 = 0;
  if (-1 < (int)uVar6) {
    local_18 = uVar3;
  }
  uVar6 = param_3 + 2;
  if ((int)uVar2 <= (int)(param_3 + 2)) {
    uVar6 = uVar2;
  }
  if (-3 < (int)param_3) {
    local_28 = uVar6;
  }
  if ((int)local_1c < (int)local_28) {
    iVar7 = local_1c * uVar1 * 4;
    do {
      uVar6 = local_30;
      if ((int)local_30 < (int)local_18) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar6 < (int)uVar1 && -1 < (int)(uVar6 | local_1c)) &&
              (int)local_1c < (int)uVar2) && *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 + uVar6 * 4) = 0xff;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 + 1 + uVar6 * 4) = 0xff;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 + 2 + uVar6 * 4) = 0xff;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (local_18 != uVar6);
      }
      local_1c = local_1c + 1;
      iVar7 = iVar7 + uVar1 * 4;
    } while (local_1c != local_28);
  }
  uVar4 = 0x1e;
  if (param_7 == '\0') {
    uVar4 = 0x80;
  }
  local_34 = CONCAT11(uVar4,uVar4);
  recovered_10005dc0(in_ECX,in_EDX + 9,param_3 + 6,param_6,
                     CONCAT22(CONCAT11((char)((uint)param_5 >> 0x18),uVar4),local_34),param_4 - 0x10
                    );
  return;
}

#undef UINT_01807078
#undef UINT_0180707c
#undef local_28
#undef local_1c
#undef local_18
#undef in_stack_ffffffb0
#undef local_40
#undef local_34
#undef local_30
#undef local_2c

#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(uint *)(frame + 44))
#define local_20 (*(uint *)(frame + 48))
#define local_1c (*(uint *)(frame + 52))
#define local_40 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059c0
 */

void recovered_100059c0(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  uVar6 = in_EDX;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)in_EDX) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_28 = 0;
  local_40 = 0;
  if (-1 < (int)in_EDX) {
    local_40 = uVar6;
  }
  uVar6 = param_3;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)param_3) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  local_24 = 0;
  if (-1 < (int)param_3) {
    local_24 = uVar6;
  }
  uVar3 = param_4 + in_EDX;
  uVar6 = uVar3;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)uVar3) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_30 = 0;
  if (-1 < (int)uVar3) {
    local_30 = uVar6;
  }
  uVar6 = param_3 + 1;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)(param_3 + 1)) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  if (-2 < (int)param_3) {
    local_28 = uVar6;
  }
  if ((int)local_24 < (int)local_28) {
    local_20 = local_24 * (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    iVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    local_1c = local_24;
    do {
      uVar6 = local_40;
      if ((int)local_40 < (int)local_30) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar6 < (int)uVar1 && -1 < (int)(uVar6 | local_1c)) &&
              (int)local_1c < (int)uVar2) && *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + uVar6 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 1 + uVar6 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 2 + uVar6 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (local_30 != uVar6);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + iVar5;
    } while (local_1c != local_28);
  }
  uVar6 = param_5 + param_3;
  uVar7 = param_5 + -1 + param_3;
  if ((int)uVar2 <= (int)uVar7) {
    uVar7 = uVar2;
  }
  uVar4 = uVar6;
  if ((int)uVar2 <= (int)uVar6) {
    uVar4 = uVar2;
  }
  local_34 = 0;
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  if (-1 < (int)uVar6) {
    local_34 = uVar4;
  }
  if ((int)uVar7 < (int)local_34) {
    iVar5 = uVar7 * uVar1 * 4;
    do {
      uVar6 = local_40;
      if ((int)local_40 < (int)local_30) {
        do {
          if ((((in_ECX != 0) && (-1 < (int)(uVar6 | uVar7))) && (*(int *)(in_ECX + 0x340) != 0)) &&
             (((int)uVar6 < (int)uVar1 && ((int)uVar7 < (int)uVar2)))) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar5 + uVar6 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar5 + 1 + uVar6 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar5 + 2 + uVar6 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar5 + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (local_30 != uVar6);
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + uVar1 * 4;
    } while (uVar7 != local_34);
  }
  uVar6 = in_EDX + 1;
  if ((int)uVar1 <= (int)(in_EDX + 1)) {
    uVar6 = uVar1;
  }
  local_1c = 0;
  if (-2 < (int)in_EDX) {
    local_1c = uVar6;
  }
  if ((int)local_24 < (int)local_34) {
    local_20 = local_24 * uVar1 * 4;
    uVar6 = local_24;
    do {
      uVar7 = local_40;
      if ((int)local_40 < (int)local_1c) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar7 < (int)uVar1 && -1 < (int)(uVar7 | uVar6)) && (int)uVar6 < (int)uVar2) &&
              *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + uVar7 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 1 + uVar7 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 2 + uVar7 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_20 + 3 + uVar7 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while (local_1c != uVar7);
      }
      uVar6 = uVar6 + 1;
      local_20 = local_20 + uVar1 * 4;
    } while (uVar6 != local_34);
    local_20 = uVar3 - 1;
    if ((int)uVar1 <= (int)local_20) {
      local_20 = uVar1;
    }
    if ((int)uVar3 < 1) {
      local_20 = 0;
    }
    local_28 = local_24 * uVar1 * 4;
    do {
      uVar6 = local_20;
      if ((int)local_20 < (int)local_30) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar6 < (int)uVar1 && -1 < (int)(uVar6 | local_24)) &&
              (int)local_24 < (int)uVar2) && *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + uVar6 * 4) = (undefined1)param_6;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 1 + uVar6 * 4) = PF_PART1(param_6, 1);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 2 + uVar6 * 4) = PF_PART1(param_6, 2);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 3 + uVar6 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while (local_30 != uVar6);
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + uVar1 * 4;
    } while (local_24 != local_34);
  }
  return;
}

#undef UINT_01807078
#undef UINT_0180707c
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_40

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006850
#define Ram00006850 (*(uint32_t *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#define local_5c (*(int (*)[3])(frame + 20))
#define local_50 (*(uint *)(frame + 32))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(int *)(frame + 48))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(int *)(frame + 60))
#define local_30 (*(int *)(frame + 64))
#define local_2c (*(uint *)(frame + 68))
#define local_28 (*(int *)(frame + 72))
#define local_24 (*(int *)(frame + 76))
#define local_20 (*(int *)(frame + 80))
#define local_1c (*(uint *)(frame + 84))
#define local_18 (*(uint *)(frame + 88))
#define local_14 (*(code * *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dc0
 */

void recovered_10005dc0(int in_ECX,int in_EDX,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  if ((((in_ECX != 0) && (param_6 != 0)) && (param_4 != 0)) && (*(int *)(in_ECX + 0x340) != 0)) {
    local_40 = in_ECX;
    local_24 = in_EDX;
    memset(local_5c,0,0x18);
    iVar7 = local_24;
    iVar8 = Ram00006800;
    if (((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
         ((uVar1 = Ram00006808, 0xb < uVar1 &&
          ((uVar1 = Ram00006808, 0x17b < uVar1 &&
           (local_14 = (code *)UINT_00006978, local_14 != (code *)0x0)))))) &&
        (uVar3 = (*local_14)((char *)param_4,0xffffffff,1,
                             (param_5 >> 0x10 & 0xff) * 0x100 + 0xff +
                             ((param_5 >> 8 & 0xff) << 0x10 | param_5 << 0x18),local_5c),
        uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)), uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)), uVar3 != 0)) &&
       (local_20 = local_5c[0], local_5c[0] != 0)) {
      if (local_50 * 4 <= local_48) {
        uVar3 = local_50;
        if (param_6 <= local_50) {
          uVar3 = param_6;
        }
        if ((int)param_6 < 1) {
          uVar3 = local_50;
        }
        if (local_4c != 0) {
          local_3c = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
          local_28 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * param_3 * 4 + 3;
          local_44 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
          local_34 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
          local_30 = local_5c[0] + 1;
          uVar5 = 0;
          do {
            local_2c = uVar5;
            if (((-1 < (int)(local_2c + param_3)) && ((int)(local_2c + param_3) < (int)uVar2)) &&
               (uVar3 != 0)) {
              uVar5 = uVar3;
              iVar8 = local_30;
              do {
                if (iVar7 < (int)uVar1 && -1 < iVar7) {
                  iVar9 = local_48 * local_2c;
                  uVar4 = (uint)*(byte *)(iVar8 + 2 + iVar9);
                  if (uVar4 != 0) {
                    pcVar6 = (byte *)(*(int *)(local_40 + 0x340) + local_28);
                    if (uVar4 == 0xff) {
                      pcVar6[iVar7 * 4 + -3] = *(byte *)(iVar8 + -1 + iVar9);
                      pcVar6[iVar7 * 4 + -2] = *(byte *)(iVar8 + iVar9);
                      pcVar6[iVar7 * 4 + -1] = *(byte *)(iVar8 + 1 + iVar9);
                    }
                    else {
                      local_18 = uVar4 ^ 0xff;
                      pcVar6[iVar7 * 4 + -3] =
                           SUB81((ulonglong)
                                 (*(byte *)(iVar8 + -1 + iVar9) * uVar4 + 0x7f +
                                 (byte)pcVar6[iVar7 * 4 + -3] * local_18) * 0x1010102 >> 0x20,0);
                      pcVar6[iVar7 * 4 + -2] =
                           SUB81((ulonglong)
                                 (*(byte *)(iVar8 + iVar9) * uVar4 + 0x7f +
                                 (byte)pcVar6[iVar7 * 4 + -2] * local_18) * 0x1010102 >> 0x20,0);
                      pcVar6[iVar7 * 4 + -1] =
                           SUB81((ulonglong)
                                 (*(byte *)(iVar8 + 1 + iVar9) * uVar4 + 0x7f +
                                 (byte)pcVar6[iVar7 * 4 + -1] * local_18) * 0x1010102 >> 0x20,0);
                      local_14 = pcVar6;
                    }
                    pcVar6[iVar7 * 4] = (byte)0xff;
                    local_1c = uVar4;
                  }
                }
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
              iVar7 = local_24;
            }
            local_28 = local_28 + local_34;
            uVar5 = local_2c + 1;
            local_38 = uVar3;
          } while (local_2c + 1 < local_4c);
        }
      }
      iVar8 = Ram00006800;
      if (((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
         ((uVar1 = Ram00006808, 0xb < uVar1 &&
          ((uVar1 = Ram00006808, 0x53 < uVar1 &&
           (pcVar6 = (byte *)Ram00006850, pcVar6 != (code *)0x0)))))) {
        ((void (*)(void *))(uintptr_t)pcVar6)((void *)(uintptr_t)local_5c[0]);
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006850
#undef UINT_00006978
#undef UINT_01807078
#undef UINT_0180707c
#undef local_5c
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
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
#undef local_14

#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#define local_40 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(int *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_14 (*(uint *)(frame + 76))
#define in_stack_ffffffb0 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006080
 */

void recovered_10006080(int in_ECX,uint in_EDX,uint param_3,undefined4 param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  uVar4 = in_EDX;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)in_EDX) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_24 = 0;
  local_2c = 0;
  if (-1 < (int)in_EDX) {
    local_2c = uVar4;
  }
  uVar4 = param_3;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)param_3) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  local_14 = 0;
  if (-1 < (int)param_3) {
    local_14 = uVar4;
  }
  uVar4 = in_EDX + 0x12;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)(in_EDX + 0x12)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_20 = 0;
  if (-0x13 < (int)in_EDX) {
    local_20 = uVar4;
  }
  uVar4 = param_3 + 0x12;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)(param_3 + 0x12)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  if (-0x13 < (int)param_3) {
    local_24 = uVar4;
  }
  if ((int)local_14 < (int)local_24) {
    local_28 = local_14 * (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    do {
      uVar4 = local_2c;
      if ((int)local_2c < (int)local_20) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar4 < (int)uVar2 && -1 < (int)(uVar4 | local_14)) &&
              (int)local_14 < (int)uVar3) && *(int *)(in_ECX + 0x340) != 0)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + uVar4 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 1 + uVar4 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 2 + uVar4 * 4) = 0xee;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 3 + uVar4 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (local_20 != uVar4);
      }
      local_14 = local_14 + 1;
      local_28 = local_28 + iVar1;
    } while (local_14 != local_24);
  }
  recovered_100059c0(in_ECX,in_EDX,param_3,0x12,0x12,
                     CONCAT13((char)((uint)in_stack_ffffffb0 >> 0x18),0x8e8e8e));
  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  uVar4 = in_EDX + 5;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)(in_EDX + 5)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_34 = 0;
  local_40 = 0;
  if (-6 < (int)in_EDX) {
    local_40 = uVar4;
  }
  uVar4 = param_3 + 5;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)(param_3 + 5)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  local_14 = 0;
  if (-6 < (int)param_3) {
    local_14 = uVar4;
  }
  uVar4 = in_EDX + 0xd;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)(in_EDX + 0xd)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_20 = 0;
  if (-0xe < (int)in_EDX) {
    local_20 = uVar4;
  }
  uVar4 = param_3 + 0xd;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U)) <= (int)(param_3 + 0xd)) {
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  }
  if (-0xe < (int)param_3) {
    local_34 = uVar4;
  }
  if ((int)local_14 < (int)local_34) {
    local_28 = local_14 * (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    do {
      uVar4 = local_40;
      if ((int)local_40 < (int)local_20) {
        do {
          if ((in_ECX != 0) &&
             ((((int)uVar4 < (int)uVar2 && -1 < (int)(uVar4 | local_14)) &&
              (int)local_14 < (int)uVar3) && *(int *)(in_ECX + 0x340) != 0)) {
            *(char *)(*(int *)(in_ECX + 0x340) + local_28 + uVar4 * 4) = (char)param_4;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 1 + uVar4 * 4) = PF_PART1(param_4, 1);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 2 + uVar4 * 4) = PF_PART1(param_4, 2);
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + local_28 + 3 + uVar4 * 4) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (local_20 != uVar4);
      }
      local_14 = local_14 + 1;
      local_28 = local_28 + iVar1;
    } while (local_14 != local_34);
  }
  return;
}

#undef UINT_01807078
#undef UINT_0180707c
#undef local_40
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_14
#undef in_stack_ffffffb0

#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#define in_stack_ffffffa0 (*(undefined4 *)(frame + 16))
#define local_28 (*(uint *)(frame + 72))
#define local_24 (*(uint *)(frame + 76))
#define local_18 (*(uint *)(frame + 88))
#define local_14 (*(uint *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006350
 */

void recovered_10006350(int in_ECX,uint in_EDX,int param_3,int param_4,int param_5,char param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;

  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  uVar10 = in_EDX;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)in_EDX) {
    uVar10 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  local_18 = 0;
  if (-1 < (int)in_EDX) {
    local_18 = uVar10;
  }
  uVar9 = param_3 + in_EDX;
  uVar10 = uVar9;
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) <= (int)uVar9) {
    uVar10 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  }
  uVar8 = 0;
  if (-1 < (int)uVar9) {
    uVar8 = uVar10;
  }
  local_14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x1e5 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_14 = 0x1e6;
  }
  if (0x19e < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar12 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x678;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    uVar10 = 0x19e;
    do {
      uVar9 = local_18;
      if ((int)local_18 < (int)uVar8) {
        do {
          if ((((in_ECX != 0) && ((int)uVar10 < (int)uVar3)) && (-1 < (int)uVar9)) &&
             ((*(int *)(in_ECX + 0x340) != 0 && ((int)uVar9 < (int)uVar2)))) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + uVar9 * 4) = 0;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 1 + uVar9 * 4) = 0;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 2 + uVar9 * 4) = 0;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar12 + 3 + uVar9 * 4) = 0xff;
          }
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + iVar1;
    } while (uVar10 != local_14);
  }
  recovered_100059c0(in_ECX,in_EDX,0x19e,param_3,0x48,
                     CONCAT13((char)((uint)in_stack_ffffffa0 >> 0x18),0x303030));
  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0 < param_3) {
    local_28 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
    if (0x1e4 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
      local_28 = 0x1e5;
    }
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    iVar12 = 0;
    do {
      iVar4 = (iVar12 * 0x47) / (int)(param_3 - 1U);
      uVar10 = 0x1e4;
      if (param_4 != 0) {
        uVar10 = 0x1e4 - ((uint)*(byte *)(param_4 + iVar4) * 0x570ac >> 0x13);
      }
      if (param_5 == 0) {
        uVar9 = 0x1e4;
      }
      else {
        uVar9 = 0x1e4 - ((uint)*(byte *)(param_5 + iVar4) * 0x570ac >> 0x13);
      }
      uVar8 = iVar12 + in_EDX;
      if (param_6 == '\0') {
        if (iVar12 != 0) {
          uVar6 = (iVar12 * 0x47 - 0x47U) / (param_3 - 1U);
          local_18 = 0x1e4;
          local_14 = 0x1e4;
          if (param_4 != 0) {
            local_14 = 0x1e4 - ((uint)*(byte *)(param_4 + uVar6) * 0x570ac >> 0x13);
          }
          if (param_5 != 0) {
            local_18 = 0x1e4 - ((uint)*(byte *)(param_5 + uVar6) * 0x570ac >> 0x13);
          }
          if (param_4 != 0) {
            bVar13 = local_14 < uVar10;
            iVar4 = local_14 - uVar10;
            if (uVar10 <= local_14) {
              iVar4 = -(local_14 - uVar10);
            }
            local_24 = uVar8 - 1;
            iVar11 = iVar4 + 1;
            while( true ) {
              if (((in_ECX != 0) &&
                  (-1 < (int)(local_24 | local_14) && *(int *)(in_ECX + 0x340) != 0)) &&
                 (((int)local_24 < (int)uVar2 && ((int)local_14 < (int)uVar3)))) {
                iVar7 = local_14 * uVar2 + local_24;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 * 4) = 0;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 1 + iVar7 * 4) = 0xeb;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 2 + iVar7 * 4) = 0x1c;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 3 + iVar7 * 4) = 0xff;
              }
              if ((local_14 == uVar10) && (local_24 == uVar8)) break;
              iVar7 = iVar4;
              if (iVar11 * 2 < iVar4) {
                iVar7 = 0;
              }
              uVar6 = bVar13 - 1 | 1;
              if (0 < iVar11) {
                uVar6 = 0;
              }
              local_24 = local_24 + (iVar4 <= iVar11 * 2);
              local_14 = local_14 + uVar6;
              iVar11 = iVar11 + iVar7 + (uint)(iVar11 < 1);
            }
          }
          if (param_5 != 0) {
            bVar13 = local_18 < uVar9;
            iVar4 = local_18 - uVar9;
            if (uVar9 <= local_18) {
              iVar4 = -(local_18 - uVar9);
            }
            local_14 = uVar8 - 1;
            iVar11 = iVar4 + 1;
            while( true ) {
              if ((((in_ECX != 0) &&
                   (-1 < (int)(local_14 | local_18) && *(int *)(in_ECX + 0x340) != 0)) &&
                  ((int)local_14 < (int)uVar2)) && ((int)local_18 < (int)uVar3)) {
                iVar7 = local_18 * uVar2 + local_14;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar7 * 4) = 0xf5;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 1 + iVar7 * 4) = 0x18;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 2 + iVar7 * 4) = 0x14;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + 3 + iVar7 * 4) = 0xff;
              }
              if ((local_18 == uVar9) && (local_14 == uVar8)) break;
              iVar7 = iVar4;
              if (iVar11 * 2 < iVar4) {
                iVar7 = 0;
              }
              uVar10 = bVar13 - 1 | 1;
              if (0 < iVar11) {
                uVar10 = 0;
              }
              local_14 = local_14 + (iVar4 <= iVar11 * 2);
              local_18 = local_18 + uVar10;
              iVar11 = iVar11 + iVar7 + (uint)(iVar11 < 1);
            }
          }
        }
      }
      else {
        uVar6 = uVar8;
        if ((int)uVar2 <= (int)uVar8) {
          uVar6 = uVar2;
        }
        local_18 = 0;
        if (-1 < (int)uVar8) {
          local_18 = uVar6;
        }
        uVar6 = uVar8 + 1;
        if ((int)uVar2 <= (int)(uVar8 + 1)) {
          uVar6 = uVar2;
        }
        uVar5 = 0;
        if (-2 < (int)uVar8) {
          uVar5 = uVar6;
        }
        if ((int)uVar10 < (int)local_28) {
          iVar4 = iVar1 * uVar10;
          do {
            uVar8 = local_18;
            if ((int)local_18 < (int)uVar5) {
              do {
                if (((in_ECX != 0) && (-1 < (int)uVar8)) &&
                   ((*(int *)(in_ECX + 0x340) != 0 &&
                    (((int)uVar8 < (int)uVar2 && ((int)uVar10 < (int)uVar3)))))) {
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + uVar8 * 4) = 0;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 1 + uVar8 * 4) = 0xeb;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 2 + uVar8 * 4) = 0x1c;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 3 + uVar8 * 4) = 0xff;
                }
                uVar8 = uVar8 + 1;
              } while (uVar5 != uVar8);
            }
            uVar10 = uVar10 + 1;
            iVar4 = iVar4 + iVar1;
          } while (uVar10 != local_28);
        }
        if ((int)uVar9 < (int)local_28) {
          iVar4 = iVar1 * uVar9;
          do {
            uVar10 = local_18;
            if ((int)local_18 < (int)uVar5) {
              do {
                if ((((in_ECX != 0) && (-1 < (int)uVar10)) && (*(int *)(in_ECX + 0x340) != 0)) &&
                   (((int)uVar10 < (int)uVar2 && ((int)uVar9 < (int)uVar3)))) {
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + uVar10 * 4) = 0xf5;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 1 + uVar10 * 4) = 0x18;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 2 + uVar10 * 4) = 0x14;
                  *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar4 + 3 + uVar10 * 4) = 0xff;
                }
                uVar10 = uVar10 + 1;
              } while (uVar5 != uVar10);
            }
            uVar9 = uVar9 + 1;
            iVar4 = iVar4 + iVar1;
          } while (uVar9 != local_28);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_3);
  }
  return;
}

#undef UINT_01807078
#undef UINT_0180707c
#undef in_stack_ffffffa0
#undef local_28
#undef local_24
#undef local_18
#undef local_14

#undef UINT_01807078
#define UINT_01807078 (*(uint *)(0x1807078U))
#undef UINT_0180707c
#define UINT_0180707c (*(uint *)(0x180707cU))
#undef UNK_01806f21
#define UNK_01806f21 (*(uint8_t *)(0x1806f21U))
#define local_20 (*(uint *)(frame + 64))
#define in_stack_ffffffc0 (*(undefined4 *)(frame + 32))
#define local_1c (*(uint *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006930
 */

void recovered_10006930(int in_ECX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;

  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x35eU));
  if (*(char *)(in_ECX + 0x434) != '\0') {
    puVar4 = (undefined *)(in_ECX + 0x434);
  }
  local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x45 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    local_20 = 0x46;
  }
  uVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x13f < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    uVar7 = 0x140;
  }
  local_1c = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x19d < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_1c = 0x19e;
  }
  if (0x188 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x620;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    uVar9 = 0x188;
    do {
      uVar8 = local_20;
      if (0x46 < (int)uVar2) {
        do {
          if (((((int)uVar9 < (int)uVar3) && (-1 < (int)uVar8)) && (*(int *)(in_ECX + 0x340) != 0))
             && ((int)uVar8 < (int)uVar2)) {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + uVar8 * 4) = 0xf7;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 1 + uVar8 * 4) = 0xf7;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 2 + uVar8 * 4) = 0xf7;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 3 + uVar8 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + iVar1;
    } while (uVar9 != local_1c);
  }
  uVar10 = 0;
  recovered_100059c0(in_ECX,0x46,0x188,0xfa,0x16,
                     CONCAT13((char)((uint)in_stack_ffffffc0 >> 0x18),0x7e7e7e));
  uVar7 = CONCAT13(uVar10,0x282828);
  recovered_10005dc0(in_ECX,0x4f,399,(int)puVar4,uVar7,0xd8);
  uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  local_20 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x12d < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    local_20 = 0x12e;
  }
  uVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U));
  if (0x13e < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U))) {
    uVar9 = 0x13f;
  }
  local_1c = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U));
  if (0x19c < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    local_1c = 0x19d;
  }
  if (0x189 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x4b9U))) {
    iVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 0x624;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x4b5U)) * 4;
    uVar8 = 0x189;
    do {
      uVar5 = local_20;
      if (0x12e < (int)uVar2) {
        do {
          if (((in_ECX != 0) && ((int)uVar8 < (int)uVar3)) &&
             ((-1 < (int)uVar5 && ((*(int *)(in_ECX + 0x340) != 0 && ((int)uVar5 < (int)uVar2))))))
          {
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + uVar5 * 4) = 0x74;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 1 + uVar5 * 4) = 0xbc;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 2 + uVar5 * 4) = 0xed;
            *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar6 + 3 + uVar5 * 4) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar9 != uVar5);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + iVar1;
    } while (uVar8 != local_1c);
  }
  recovered_10005dc0(in_ECX,0x133,399,((uintptr_t)pf_module_state+0x374U),CONCAT13((char)(uVar7 >> 0x18),0x1e1e1e),8);
  return;
}

#undef UINT_01807078
#undef UINT_0180707c
#undef UNK_01806f21
#undef local_20
#undef in_stack_ffffffc0
#undef local_1c
