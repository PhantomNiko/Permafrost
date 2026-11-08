/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100030f6
#define DAT_100030f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f2U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef Ram0000000082010828
#define Ram0000000082010828 (*(uint32_t *)(0x82010828U))
#undef str_100030a8
#define str_100030a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_100030d2
#define str_100030d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_100030e3
#define str_100030e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dfU)))
#define uStack_2c0 (*(undefined8 *)(frame + 25520))
#define uStack_2b8 (*(undefined8 *)(frame + 25528))
#define uStack_2b0 (*(undefined8 *)(frame + 25536))
#define auStack_218 (*(undefined1 (*)[72])(frame + 25688))
#define auStack_1d0 (*(undefined1 (*)[332])(frame + 25760))
#define abStack_84 (*(byte (*)[8])(frame + 26092))
#define bStack_7c (*(byte *)(frame + 26100))
#define local_65fc (*(undefined4 *)(frame + 116))
#define iStack_74 (*(int *)(frame + 26108))
#define local_65d0 (*(uint *)(frame + 160))
#define iStack_70 (*(int *)(frame + 26112))
#define local_6394 (*(int *)(frame + 732))
#define iStack_6c (*(int *)(frame + 26116))
#define local_6390 (*(int *)(frame + 736))
#define local_6368 (*(long *)(frame + 776))
#define local_6048 (*(long *)(frame + 1576))
#define local_6040 (*(uint *)(frame + 1584))
#define local_6030 (*(undefined4 *)(frame + 1600))
#define local_6028 (*(undefined4 *)(frame + 1608))
#define aiStack_6654 (*(int (*)[17])(frame + 28))
#define auStack_6610 (*(undefined1 (*)[20])(frame + 96))
#define iStack_65dc (*(int *)(frame + 148))
#define iStack_65d8 (*(int *)(frame + 152))
#define iStack_65d4 (*(int *)(frame + 156))
#define auStack_6398 (*(undefined1 (*)[4])(frame + 728))
#define iStack_603c (*(int *)(frame + 1588))
#define iStack_6038 (*(int *)(frame + 1592))
#define iStack_6034 (*(int *)(frame + 1596))
#define uStack_602c (*(uint *)(frame + 1604))
#define auStack_5c94 (*(undefined4 (*)[1892])(frame + 2524))
#define auStack_3f04 (*(undefined4 (*)[3847])(frame + 10092))
#define uStack_2e7 (*(undefined1 *)(frame + 25481))
#define uStack_2e4 (*(uint *)(frame + 25484))
#define uStack_2e0 (*(uint *)(frame + 25488))
#define uStack_2cc (*(undefined4 *)(frame + 25508))
#define uStack_2c8 (*(undefined4 *)(frame + 25512))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

int recovered_100005f0(void)

{
  unsigned char frame[26256] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;

  memset(auStack_6398,0,0x6310);
  pf_app_window_spec(auStack_6610,str_100030d2,DAT_10008078,DAT_1000807c);
  local_65d0 = local_65d0 | 1;
  local_65fc = 0xefefef;
  uVar8 = terror_ui_window_open(auStack_6398,auStack_6610);
  if (uVar8 != 0) {
    local_6048 = local_6368;
    if (local_6368 != 0) {
      DAT_10008078 = local_6394;
      DAT_1000807c = local_6390;
      local_6040 = 0;
      local_6030 = 0xffffffff;
      local_6028 = 0xffffffff;
      terror_ui_window_set_menus(auStack_6398,str_100030e3,&DAT_100030f6,&DAT_100030f6);
      recovered_10000aac((long)auStack_6398);
      recovered_100010e8(auStack_6398);
      do {
        memset(auStack_6610,0,0x278);
        iVar5 = local_6390;
        iVar4 = local_6394;
        uVar8 = terror_ui_window_query(auStack_6398,auStack_6610);
        if (((uVar8 == 0) || (bVar6 = terror_ui_window_info_requests_close(auStack_6610), (bVar6 & 1) != 0)) ||
           (uVar8 = terror_ui_window_sync_buffer(auStack_6398,auStack_6610), uVar8 == 0)) {
          terror_ui_window_close(auStack_6398);
          return 0;
        }
        local_6048 = local_6368;
        DAT_10008078 = local_6394;
        DAT_1000807c = local_6390;
        if (local_6394 != iVar4 || local_6390 != iVar5) {
          recovered_100010e8(auStack_6398);
        }
        if (((iStack_65dc != 0) && (iStack_65dc != iStack_6034)) &&
           (iStack_6034 = iStack_65dc, iStack_65d8 == 1)) {
          if (iStack_65d4 == 2) {
            recovered_10001f18((long)auStack_6398);
            recovered_100010e8(auStack_6398);
          }
          else if (iStack_65d4 == 1) {
            recovered_10001e54((long)auStack_6398);
          }
          else if (iStack_65d4 == 0) {
            recovered_10001dd8(auStack_6398);
          }
        }
        memset(abStack_84,0,0x1c);
        uVar8 = terror_ui_window_pointer_state(auStack_6398,abStack_84);
        iVar5 = iStack_6c;
        iVar4 = iStack_70;
        if (((uVar8 != 0) && ((bStack_7c & 1) != 0)) &&
           (((abStack_84[0] >> 1 & 1) != 0 && (iStack_74 != iStack_6038)))) {
          iStack_6038 = iStack_74;
          uVar8 = iStack_70 - 0x5c;
          if (uVar8 < 0xffffffb4 || iStack_6c - 0x1eU < 0xffffffee) {
            if (uVar8 < 0xffffffb4 || iStack_6c - 0x34U < 0xffffffee) {
              if (uVar8 < 0xffffffb4 || iStack_6c - 0x4aU < 0xffffffee) {
                bVar7 = recovered_10002018(iStack_70,iStack_6c,0x7c00000010,
                                           (ulong)(DAT_10008078 - 0x20) | 0xc600000000);
                if (bVar7) {
                  uVar8 = (iVar5 + -0x7c) / 0x12;
                  if (uVar8 < uStack_2e4) {
                    local_6030 = auStack_3f04[(ulong)uVar8 * 0x6e];
                    goto LAB_100008a4;
                  }
                }
                else {
                  if (((local_6040 & 0xfffffffe) == 2) &&
                     (iVar4 - 0x46U < 0xfa && iVar5 - 0x188U < 0x16)) {
                    recovered_10002044((long)auStack_6398);
                    if (uStack_2e0 == 0) {
                      local_6028 = 0xffffffff;
                    }
                    else {
                      uVar8 = 0;
                      if (uStack_2e0 != 0) {
                        uVar8 = (uStack_602c + 1) / uStack_2e0;
                      }
                      uStack_602c = (uStack_602c + 1) - uVar8 * uStack_2e0;
                      local_6028 = auStack_5c94[(ulong)uStack_602c * 0x7e];
                    }
                    memset(auStack_218,0,0x48);
                    memset(auStack_1d0,0,0x48);
                    uStack_2e7 = 0;
                    uStack_2cc = 0;
                    uStack_2c8 = 0;
                    uStack_2c0 = 0;
                    uStack_2b0 = 0;
                    uStack_2b8 = 0;
                    recovered_10000aac((long)auStack_6398);
                    goto LAB_100008a4;
                  }
                  lVar10 = 0;
                  for (uVar9 = 0; uVar9 != 5; uVar9 = uVar9 + 1) {
                    uVar1 = 0x1800000088;
                    if (uVar9 != 1) {
                      uVar1 = 0x1800000074;
                    }
                    lVar2 = 0xda;
                    if (uVar9 < 2) {
                      lVar2 = 0xc6;
                    }
                    uVar3 = (ulong)((int)(lVar2 + lVar10) + 0x14);
                    if (uVar9 < 3) {
                      uVar3 = lVar2 + lVar10;
                    }
                    bVar7 = recovered_10002018(iVar4,iVar5,uVar3 | 0x16400000000,uVar1);
                    if (bVar7) {
                      local_6040 = (uint)uVar9;
                      goto LAB_100008a4;
                    }
                    lVar10 = lVar10 + 0x74;
                  }
                }
                goto LAB_100008a8;
              }
              recovered_10001f18((long)auStack_6398);
            }
            else {
              recovered_10001e54((long)auStack_6398);
            }
LAB_100008a4:
            recovered_100010e8(auStack_6398);
          }
          else {
            recovered_10001dd8(auStack_6398);
          }
        }
LAB_100008a8:
        memset(aiStack_6654,0,0x44);
        recovered_10000a60(aiStack_6654);
        if (iStack_603c == 0 || 0x11 < (uint)(aiStack_6654[0] - iStack_603c)) {
          iStack_603c = aiStack_6654[0];
          recovered_10000aac((long)auStack_6398);
          recovered_100010e8(auStack_6398);
        }
        bVar7 = recovered_10001d8c(0x9c);
        if (bVar7) {
          uVar8 = UINT_8201089c;
          if (uVar8 != 0) {
            (*(code *)(ulong)uVar8)();
          }
        }
      } while( true );
    }
    terror_ui_window_close(auStack_6398);
  }
  bVar7 = recovered_10001d8c(0x28);
  if (bVar7) {
    uVar8 = Ram0000000082010828;
    if (uVar8 != 0) {
      (*(code *)(ulong)uVar8)(str_100030a8);
    }
  }
  return 1;
}

#undef DAT_100030f6
#undef DAT_10008078
#undef DAT_1000807c
#undef DAT_82010828
#undef Ram0000000082010828
#undef str_100030a8
#undef str_100030d2
#undef str_100030e3
#undef uStack_2c0
#undef uStack_2b8
#undef uStack_2b0
#undef auStack_218
#undef auStack_1d0
#undef abStack_84
#undef bStack_7c
#undef local_65fc
#undef iStack_74
#undef local_65d0
#undef iStack_70
#undef local_6394
#undef iStack_6c
#undef local_6390
#undef local_6368
#undef local_6048
#undef local_6040
#undef local_6030
#undef local_6028
#undef aiStack_6654
#undef auStack_6610
#undef iStack_65dc
#undef iStack_65d8
#undef iStack_65d4
#undef auStack_6398
#undef iStack_603c
#undef iStack_6038
#undef iStack_6034
#undef uStack_602c
#undef auStack_5c94
#undef auStack_3f04
#undef uStack_2e7
#undef uStack_2e4
#undef uStack_2e0
#undef uStack_2cc
#undef uStack_2c8

#undef UINT_82010908
#define UINT_82010908 (*(uint *)(0x82010908U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a60
 */

uint recovered_10000a60(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10001d8c(0x108);
  if ((bVar1) && (uVar2 = UINT_82010908, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010908

#undef UINT_820108b8
#define UINT_820108b8 (*(uint *)(0x820108b8U))
#undef UINT_82010910
#define UINT_82010910 (*(uint *)(0x82010910U))
#define puStack_3980 (*(uint * *)(frame + 16))
#define uStack_3978 (*(uint *)(frame + 24))
#define iStack_3970 (*(int *)(frame + 32))
#define bStack_396c (*(byte *)(frame + 36))
#define local_3974 (*(uint *)(frame + 28))
#define uStack_3944 (*(ulong *)(frame + 76))
#define uStack_393c (*(ulong *)(frame + 84))
#define uStack_3934 (*(ulong *)(frame + 92))
#define uStack_392c (*(ulong *)(frame + 100))
#define aiStack_38e4 (*(int (*)[17])(frame + 172))
#define aiStack_38a0 (*(int (*)[5])(frame + 240))
#define aiStack_388c (*(int (*)[3483])(frame + 260))
#define auStack_220 (*(undefined1 (*)[448])(frame + 14192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aac
 */

void recovered_10000aac(long param_1)

{
  unsigned char frame[14768] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *src;
  int *piVar12;
  ulong uVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  undefined1 uVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  void *pvVar21;
  int iVar22;
  void *pvVar23;
  int *piVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;

  local_3974 = 0;
  if (param_1 == 0) {
    return;
  }
  bVar7 = *(int *)(param_1 + 0x368) == -1;
  memset(aiStack_38e4,0,0x44);
  memset(&iStack_3970,0,0x8c);
  uVar9 = recovered_10000a60(aiStack_38e4);
  if (uVar9 == 0) {
    return;
  }
  bVar5 = *(byte *)(param_1 + 0x60b0);
  uVar9 = (uint)bVar5;
  if ((bVar5 == 1) && (uVar10 = aiStack_38e4[0] - *(int *)(param_1 + 0x3b8), uVar10 != 0)) {
    uVar9 = uVar10;
  }
  bVar8 = recovered_10001d8c(0xb8);
  if (bVar8) {
    uVar10 = UINT_820108b8;
    if ((uVar10 == 0) || (uVar10 = (*(code *)(ulong)uVar10)(), uVar10 == 0)) goto LAB_10000b64;
  }
  else {
LAB_10000b64:
    uVar10 = 1;
  }
  puStack_3980 = (uint *)(param_1 + 0x60bc);
  *puStack_3980 = uVar10;
  recovered_10002044(param_1);
  iVar22 = *(int *)(param_1 + 0x370);
  if ((-1 < iVar22) && (bVar8 = recovered_10001d8c(0x110), bVar8)) {
    uVar10 = UINT_82010910;
    if ((uVar10 != 0) && (uVar10 = (*(code *)(ulong)uVar10)(iVar22,&iStack_3970), uVar10 != 0)) {
      memcpy((void *)(param_1 + 0x3fc),&iStack_3970,0x8c);
      goto LAB_10000bb8;
    }
  }
  memset((void *)(param_1 + 0x3fc),0,0x8c);
LAB_10000bb8:
  memset(aiStack_38a0,0,0x3680);
  bVar8 = recovered_10001d8c(0x104);
  if (bVar8) {
    uVar10 = UINT_82010904;
    if ((uVar10 != 0) &&
       (uVar10 = (*(code *)(ulong)uVar10)(aiStack_38a0,0x20,&local_3974), uVar10 != 0)) {
      uVar25 = 0;
      uStack_3978 = 0;
      puVar2 = (undefined8 *)(param_1 + 0x24a4);
      uVar10 = local_3974;
      if (0x1f < local_3974) {
        uVar10 = 0x20;
      }
      uVar20 = (ulong)uVar10;
      lVar19 = param_1 + 0x2494;
      piVar1 = (int *)(param_1 + 0x5d14);
      uVar4 = uVar9;
      if (uVar9 < 2) {
        uVar4 = 1;
      }
      for (; uVar25 != uVar20; uVar25 = uVar25 + 1) {
        piVar18 = aiStack_38a0 + uVar25 * 0x6d;
        if ((*(byte *)(param_1 + 0x60b0) & 1) == 0) {
          uVar26 = 0;
          iVar22 = *piVar18;
        }
        else {
          iVar22 = *piVar18;
          lVar16 = 0x21;
          piVar24 = (int *)(param_1 + 0x5b94);
          do {
            piVar12 = piVar24;
            lVar16 = lVar16 + -1;
            iVar15 = 0;
            if (lVar16 == 0) goto LAB_10000c8c;
            piVar24 = piVar12 + 3;
          } while (*piVar12 != iVar22);
          iVar15 = piVar12[2];
LAB_10000c8c:
          uVar26 = aiStack_388c[uVar25 * 0x6d] - iVar15;
        }
        pvVar23 = (void *)(lVar19 + uVar25 * 0x1b8);
        memcpy(pvVar23,piVar18,0x1b4);
        lVar16 = 0x20;
        piVar12 = (int *)0x0;
        piVar24 = piVar1;
        do {
          if (*piVar24 == iVar22) goto LAB_10000d00;
          piVar3 = piVar24;
          if (*piVar24 != 0) {
            piVar3 = (int *)0x0;
          }
          if (piVar12 != (int *)0x0) {
            piVar3 = piVar12;
          }
          piVar24 = piVar24 + 7;
          lVar16 = lVar16 + -1;
          piVar12 = piVar3;
        } while (lVar16 != 0);
        piVar24 = piVar1;
        if (piVar3 != (int *)0x0) {
          piVar24 = piVar3;
        }
        memset(piVar24,0,0x1c);
        *piVar24 = iVar22;
        iVar22 = *piVar18;
LAB_10000d00:
        uVar11 = *puStack_3980;
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        uVar13 = (ulong)uVar4 * (ulong)uVar11;
        uVar27 = 0;
        if (uVar13 != 0) {
          uVar27 = ((ulong)uVar26 * 1000) / uVar13;
        }
        if (999 < uVar27) {
          uVar27 = 1000;
        }
        uVar11 = recovered_10002170(piVar24,iVar22,(uint)uVar27);
        *(uint *)((long)pvVar23 + 0x1b4) = uVar11;
        uStack_3978 = uVar26 + uStack_3978;
        bVar7 = (bool)(*piVar18 == *(int *)(param_1 + 0x368) | bVar7);
      }
      *(uint *)(param_1 + 0x60b4) = uVar10;
      pvVar23 = (void *)(param_1 + 0x264c);
      for (uVar25 = 1; uVar25 < uVar20; uVar25 = uVar25 + 1) {
        pvVar21 = (void *)(lVar19 + uVar25 * 0x1b8);
        memcpy(auStack_220,pvVar21,0x1b4);
        uVar10 = *(uint *)((long)pvVar21 + 0x1b4);
        pvVar21 = pvVar23;
        uVar27 = uVar25;
        while ((uVar27 != 0 &&
               (src = (void *)(lVar19 + (ulong)((int)uVar27 - 1) * 0x1b8),
               *(uint *)((long)src + 0x1b4) < uVar10))) {
          memcpy(pvVar21,src,0x1b8);
          pvVar21 = (void *)((long)pvVar21 + -0x1b8);
          uVar27 = uVar27 - 1;
        }
        pvVar21 = (void *)(lVar19 + (uVar27 & 0xffffffff) * 0x1b8);
        memcpy(pvVar21,auStack_220,0x1b4);
        *(uint *)((long)pvVar21 + 0x1b4) = uVar10;
        pvVar23 = (void *)((long)pvVar23 + 0x1b8);
      }
      if (!bVar7) {
        *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x6210) = 0;
      }
      lVar19 = 0;
      do {
        if (lVar19 == 0x20) {
          uVar10 = *(uint *)(param_1 + 0x60bc);
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          uVar20 = (ulong)uVar4 * (ulong)uVar10;
          uVar25 = 0;
          if (uVar20 != 0) {
            uVar25 = ((ulong)uStack_3978 * 1000) / uVar20;
          }
          if (999 < uVar25) {
            uVar25 = 1000;
          }
          uVar10 = recovered_10002170((int *)(param_1 + 0x6094),1,(uint)uVar25);
          *(uint *)(param_1 + 0x60c0) = uVar10;
          *(undefined4 *)(param_1 + 0x60c4) = 0;
          iVar22 = 0;
          if (uVar10 < 1000) {
            iVar22 = 1000 - uVar10;
          }
          *(int *)(param_1 + 0x60c8) = iVar22;
          memmove((void *)(param_1 + 0x60f0),(void *)(param_1 + 0x60f1),0x47);
          memmove((void *)(param_1 + 0x6138),(void *)(param_1 + 0x6139),0x47);
          *(char *)(param_1 + 0x6137) = (char)(*(uint *)(param_1 + 0x60c0) / 10);
          *(char *)(param_1 + 0x617f) = (char)(*(uint *)(param_1 + 0x60c4) / 10);
          if (((*(char *)(param_1 + 0x60b1) == '\x01') && (uVar9 != 0)) &&
             (iStack_3970 == *(int *)(param_1 + 0x488))) {
            lVar19 = 0;
            if (*(ulong *)(param_1 + 0x4b4) <= uStack_3944) {
              lVar19 = uStack_3944 - *(ulong *)(param_1 + 0x4b4);
            }
            uVar20 = (ulong)uVar9;
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = (ulong)(lVar19 * 0x12) / uVar20;
            }
            if (0xfffffffe < uVar25) {
              uVar25 = 0xffffffff;
            }
            *(int *)(param_1 + 0x60cc) = (int)uVar25;
            lVar19 = 0;
            if (*(ulong *)(param_1 + 0x4bc) <= uStack_393c) {
              lVar19 = uStack_393c - *(ulong *)(param_1 + 0x4bc);
            }
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = (ulong)(lVar19 * 0x12) / uVar20;
            }
            if (0xfffffffe < uVar25) {
              uVar25 = 0xffffffff;
            }
            *(int *)(param_1 + 0x60d0) = (int)uVar25;
            lVar19 = 0;
            if (*(ulong *)(param_1 + 0x4c4) <= uStack_3934) {
              lVar19 = uStack_3934 - *(ulong *)(param_1 + 0x4c4);
            }
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = (ulong)(lVar19 * 0x12) / uVar20;
            }
            *(ulong *)(param_1 + 0x60d8) = uVar25;
            lVar19 = 0;
            if (*(ulong *)(param_1 + 0x4cc) <= uStack_392c) {
              lVar19 = uStack_392c - *(ulong *)(param_1 + 0x4cc);
            }
            uVar27 = 0;
            if (uVar20 != 0) {
              uVar27 = (ulong)(lVar19 * 0x12) / uVar20;
            }
            *(ulong *)(param_1 + 0x60e0) = uVar27;
            uVar13 = *(ulong *)(param_1 + 0x60e8);
            uVar20 = uVar25;
            if (uVar25 <= uVar13) {
              uVar20 = uVar13;
            }
            if (uVar13 < uVar25 || uVar20 < uVar27) {
              if (uVar27 <= uVar20) {
                uVar27 = uVar20;
              }
              *(ulong *)(param_1 + 0x60e8) = uVar27;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x60cc) = 0;
            *(undefined8 *)(param_1 + 0x60e0) = 0;
            *(undefined8 *)(param_1 + 0x60d8) = 0;
          }
          memmove((void *)(param_1 + 0x6180),(void *)(param_1 + 0x6181),0x47);
          memmove((void *)(param_1 + 0x61c8),(void *)(param_1 + 0x61c9),0x47);
          uVar14 = 0;
          uVar25 = *(ulong *)(param_1 + 0x60e8);
          if ((*(long *)(param_1 + 0x60d8) != 0) && (uVar25 != 0)) {
            uVar20 = 0;
            if (uVar25 != 0) {
              uVar20 = (ulong)(*(long *)(param_1 + 0x60d8) * 100) / uVar25;
            }
            if (99 < uVar20) {
              uVar20 = 100;
            }
            uVar14 = (undefined1)uVar20;
          }
          uVar17 = 0;
          *(undefined1 *)(param_1 + 0x61c7) = uVar14;
          if ((uVar25 != 0) && (*(long *)(param_1 + 0x60e0) != 0)) {
            uVar20 = 0;
            if (uVar25 != 0) {
              uVar20 = (ulong)(*(long *)(param_1 + 0x60e0) * 100) / uVar25;
            }
            if (99 < uVar20) {
              uVar20 = 100;
            }
            uVar17 = (undefined1)uVar20;
          }
          *(undefined1 *)(param_1 + 0x620f) = uVar17;
          memcpy((void *)(param_1 + 0x3b8),aiStack_38e4,0x44);
          memcpy((void *)(param_1 + 0x374),aiStack_38e4,0x44);
          memcpy((void *)(param_1 + 0x488),&iStack_3970,0x8c);
          *(undefined1 *)(param_1 + 0x60b0) = 1;
          *(byte *)(param_1 + 0x60b1) = bStack_396c & 1;
          memset((int *)(param_1 + 0x5b94),0,0x180);
          uVar9 = *(uint *)(param_1 + 0x60b4);
          if (0x1f < uVar9) {
            uVar9 = 0x20;
          }
          puVar6 = (undefined8 *)(param_1 + 0x5b98);
          for (uVar25 = (ulong)uVar9; uVar25 != 0; uVar25 = uVar25 - 1) {
            *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)(puVar2 + -2);
            *puVar6 = *puVar2;
            puVar2 = puVar2 + 0x37;
            puVar6 = (undefined8 *)((long)puVar6 + 0xc);
          }
          return;
        }
        iVar22 = piVar1[lVar19 * 7];
        if (iVar22 != 0) {
          piVar18 = aiStack_38a0;
          lVar16 = uVar20 + 1;
          do {
            lVar16 = lVar16 + -1;
            if (lVar16 == 0) {
              memset(piVar1 + lVar19 * 7,0,0x1c);
              break;
            }
            iVar15 = *piVar18;
            piVar18 = piVar18 + 0x6d;
          } while (iVar15 != iVar22);
        }
        lVar19 = lVar19 + 1;
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0x60b4) = 0;
  return;
}

#undef UINT_820108b8
#undef UINT_82010910
#undef puStack_3980
#undef uStack_3978
#undef iStack_3970
#undef bStack_396c
#undef local_3974
#undef uStack_3944
#undef uStack_393c
#undef uStack_3934
#undef uStack_392c
#undef aiStack_38e4
#undef aiStack_38a0
#undef aiStack_388c
#undef auStack_220

#undef DAT_1000308c
#define DAT_1000308c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x188U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef PTR_DAT_10004040
#define PTR_DAT_10004040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x113cU)))
#undef PTR_str_10003146_10004008
#define PTR_str_10003146_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x1104U)))
#undef str_100030d2
#define str_100030d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_10003197
#define str_10003197 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_10003208
#define str_10003208 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#undef str_10003214
#define str_10003214 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_10003241
#define str_10003241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_10003250
#define str_10003250 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34cU)))
#undef str_10003261
#define str_10003261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35dU)))
#undef str_1000326f
#define str_1000326f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36bU)))
#undef str_1000327e
#define str_1000327e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1000328c
#define str_1000328c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1000329d
#define str_1000329d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_100032af
#define str_100032af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3abU)))
#undef str_100032c4
#define str_100032c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#define uStack_170 (*(uint *)(frame + 16))
#define uStack_168 (*(uint *)(frame + 24))
#define uStack_160 (*(uint *)(frame + 32))
#define uStack_158 (*(uint *)(frame + 40))
#define uStack_150 (*(uint *)(frame + 48))
#define uStack_148 (*(uint *)(frame + 56))
#define uStack_140 (*(uint *)(frame + 64))
#define uStack_130 (*(uint *)(frame + 80))
#define acStack_128 (*(char (*)[64])(frame + 88))
#define acStack_e8 (*(char (*)[64])(frame + 152))
#define acStack_a8 (*(char (*)[72])(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e8
 */

uint recovered_100010e8(void *param_1)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulonglong vararg0;
  ulong uVar14;
  uint unaff_w23;
  int iVar15;
  long lVar16;
  ulonglong vararg0_00;
  long lVar17;
  long lVar18;

  recovered_10002218((long)param_1,0,CONCAT44(DAT_1000807c,DAT_10008078),0xeeeeee);
  lVar4 = recovered_10001fcc((long)param_1);
  uVar3 = DAT_10008078;
  if (lVar4 == 0) {
    uStack_130 = 0;
  }
  else {
    uStack_130 = (uint)(*(int *)((long)param_1 + 0x368) != 0);
  }
  lVar13 = 0;
  for (lVar17 = 0; lVar17 != 0x58; lVar17 = lVar17 + 1) {
    uVar7 = ((int)lVar17 * -0x32 + 0x4990U & 0xfffe) / 0x58;
    unaff_w23 = unaff_w23 & 0xff000000 | uVar7 & 0xff | (uVar7 & 0xff) << 8 | (uVar7 & 0xff) << 0x10
    ;
    recovered_10002218((long)param_1,lVar13,(ulong)DAT_10008078 | 0x100000000,unaff_w23);
    lVar13 = lVar13 + 0x100000000;
  }
  uVar10 = (ulong)(uVar3 - 0x78);
  recovered_10002218((long)param_1,0x5700000000,(ulong)DAT_10008078 | 0x100000000,0x696969);
  recovered_1000234c((long)param_1,0xc00000010,0x120000004c,((uintptr_t)pf_module_state + 0x22fU),uStack_130);
  recovered_1000234c((long)param_1,0x2200000010,0x120000004c,((uintptr_t)pf_module_state + 0x234U),(uint)(lVar4 != 0));
  recovered_1000234c((long)param_1,0x3800000010,0x120000004c,((uintptr_t)pf_module_state + 0x23aU),(uint)(lVar4 != 0));
  recovered_10002218((long)param_1,0xc00000068,uVar10 | 0x3e00000000,0xfafafa);
  recovered_100023fc((long)param_1,0xc00000068,uVar10 | 0x3e00000000,0x949494);
  recovered_1000248c((long)param_1,0x70,0x27,(long)param_1 + 0x6210,0x282828,uVar3 - 0x88);
  uVar7 = DAT_10008078;
  uVar3 = DAT_10008078 - 0x20;
  recovered_10002218((long)param_1,0x6a00000010,(ulong)uVar3 | 0xec00000000,0xffffff);
  recovered_100023fc((long)param_1,0x6a00000010,(ulong)uVar3 | 0xec00000000,0xaeaeae);
  uVar3 = uVar7 - 0x22;
  recovered_10002218((long)param_1,0x6b00000011,(ulong)uVar3 | 0x1200000000,0xeeeeee);
  for (lVar4 = 0; lVar4 != 7; lVar4 = lVar4 + 1) {
    iVar9 = (&DAT_1000308c)[lVar4];
    uVar12 = 0x824e14;
    if (lVar4 != 2) {
      uVar12 = 0x262626;
    }
    recovered_1000248c((long)param_1,iVar9 + 0x13,0x70,(long)(&PTR_str_10003146_10004008)[lVar4],
                       uVar12,0x78);
    if (lVar4 != 0) {
      uVar7 = uVar7 & 0xff000000 | 0xbcbcbc;
      recovered_10002218((long)param_1,(ulong)(iVar9 + 0xe) | 0x6b00000000,0x1200000001,uVar7);
    }
  }
  iVar9 = 0x81;
  lVar5 = 0x7c00000011;
  lVar4 = 0x2494;
  lVar17 = 0x2534;
  lVar13 = 0x24bc;
  lVar18 = 0x24b4;
  lVar16 = 0x24d4;
  for (uVar10 = 0; uVar10 != 0xb; uVar10 = uVar10 + 1) {
    if ((uVar10 < *(uint *)((long)param_1 + 0x60b4)) &&
       (*(int *)((long)param_1 + lVar4) == *(int *)((long)param_1 + 0x368))) {
      uVar12 = 0xffffff;
      uVar7 = 0xeeab65;
    }
    else {
      uVar7 = 0xffffff;
      if ((uVar10 & 1) != 0) {
        uVar7 = 0xfdf2eb;
      }
      uVar12 = 0x1e1e1e;
    }
    recovered_10002218((long)param_1,lVar5,(ulong)uVar3 | 0x1200000000,uVar7);
    if (uVar10 < *(uint *)((long)param_1 + 0x60b4)) {
      puVar1 = (uint *)((long)param_1 + lVar4);
      pf_varargs_10002f28_1(acStack_a8,0x40,(char *)((uintptr_t)pf_module_state + 0x290U),(ulong)*puVar1);
      uStack_140 = uVar12 | uStack_140 & 0xff000000;
      recovered_1000248c((long)param_1,0x25,iVar9,(long)acStack_a8,uStack_140,0x46);
      uStack_148 = uVar12 | uStack_148 & 0xff000000;
      recovered_1000248c((long)param_1,0x83,iVar9,(long)param_1 + lVar16,uStack_148,0xf8);
      pf_varargs_10002f28_2
                (acStack_a8,0x40,str_10003197,(ulong)(puVar1[0x6d] / 10),(ulong)(puVar1[0x6d] % 10))
      ;
      uStack_150 = uVar12 | uStack_150 & 0xff000000;
      recovered_1000248c((long)param_1,0x1a2,iVar9,(long)acStack_a8,uStack_150,0x32);
      pf_varargs_10002f28_1(acStack_a8,0x40,(char *)((uintptr_t)pf_module_state + 0x290U),(ulong)puVar1[2]);
      uStack_158 = uVar12 | uStack_158 & 0xff000000;
      recovered_1000248c((long)param_1,0x1fe,iVar9,(long)acStack_a8,uStack_158,0x2e);
      recovered_100026ac(*(ulong *)((long)param_1 + lVar18),acStack_a8,0x40);
      uStack_160 = uVar12 | uStack_160 & 0xff000000;
      recovered_1000248c((long)param_1,0x230,iVar9,(long)acStack_a8,uStack_160,0x60);
      recovered_100026ac(*(ulong *)((long)param_1 + lVar13),acStack_a8,0x40);
      uStack_168 = uVar12 | uStack_168 & 0xff000000;
      recovered_1000248c((long)param_1,0x2a0,iVar9,(long)acStack_a8,uStack_168,0x68);
      uStack_170 = uVar12 | uStack_170 & 0xff000000;
      recovered_1000248c((long)param_1,0x317,iVar9,(long)param_1 + lVar17,uStack_170,0x48);
    }
    lVar4 = lVar4 + 0x1b8;
    iVar9 = iVar9 + 0x12;
    lVar17 = lVar17 + 0x1b8;
    lVar13 = lVar13 + 0x1b8;
    lVar18 = lVar18 + 0x1b8;
    lVar16 = lVar16 + 0x1b8;
    lVar5 = lVar5 + 0x1200000000;
  }
  lVar4 = 0;
  for (uVar10 = 0; uVar10 != 5; uVar10 = uVar10 + 1) {
    uVar6 = 0x1800000088;
    if (uVar10 != 1) {
      uVar6 = 0x1800000074;
    }
    lVar17 = 0xda;
    if (uVar10 < 2) {
      lVar17 = 0xc6;
    }
    uVar11 = (ulong)((int)(lVar17 + lVar4) + 0x14);
    if (uVar10 < 3) {
      uVar11 = lVar17 + lVar4;
    }
    uVar3 = 0xffd89a;
    if (uVar10 != *(uint *)((long)param_1 + 0x358)) {
      uVar3 = 0xf4f4f4;
    }
    recovered_10002218((long)param_1,uVar11 | 0x16400000000,uVar6,uVar3);
    recovered_100023fc((long)param_1,uVar11 | 0x16400000000,uVar6,0x7e7e7e);
    recovered_1000248c((long)param_1,(int)uVar11 + 0xf,0x16c,(long)(&PTR_DAT_10004040)[uVar10],
                       0x1e1e1e,(int)uVar6 - 0x16);
    lVar4 = lVar4 + 0x74;
  }
  uVar10 = (ulong)(DAT_10008078 - 0x20);
  switch((uintptr_t)(*(undefined4 *)((long)param_1 + 0x358))) {
  case 0:
    recovered_10002218((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xc3c3c3);
    recovered_1000248c((long)param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x2eaU),0x282828,0x46);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c0) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c0) % 10));
    recovered_1000248c((long)param_1,0x92,0x19c,(long)acStack_a8,0x52c448,0x46);
    recovered_1000248c((long)param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x2f2U),0x282828,0x50);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c4) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c4) % 10));
    recovered_1000248c((long)param_1,0x92,0x1b4,(long)acStack_a8,0x4b4bd0,0x46);
    recovered_1000248c((long)param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x2fcU),0x282828,0x46);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c8) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c8) % 10));
    recovered_1000248c((long)param_1,0x92,0x1cc,(long)acStack_a8,0x282828,0x46);
    recovered_10002760((long)param_1,0xfe,0x196,0x1cf000);
    recovered_10002760((long)param_1,0xfe,0x1ae,0x1418f5);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003208,(ulong)*(uint *)((long)param_1 + 0x39c));
    recovered_1000248c((long)param_1,0x15a,0x19c,(long)acStack_a8,0x282828,0x6e);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003214,(ulong)*(uint *)((long)param_1 + 0x398));
    recovered_1000248c((long)param_1,0x15a,0x1b4,(long)acStack_a8,0x282828,0x78);
    recovered_1000248c((long)param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x31eU),0x282828,0x50);
    lVar4 = (long)param_1 + 0x60f0;
    lVar17 = (long)param_1 + 0x6138;
    uVar10 = 0x19e00000222;
    uVar6 = 0x4800000062;
    iVar9 = 1;
    break;
  case 1:
    uVar14 = *(ulong *)((long)param_1 + 0x378);
    uVar11 = *(ulong *)((long)param_1 + 0x380);
    uVar6 = 0;
    if (uVar14 <= uVar11) {
      uVar6 = uVar11 - uVar14;
    }
    recovered_10002218((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xc3c3c3);
    recovered_100026ac(uVar14,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x328U),0x282828,0x3c);
    recovered_1000248c((long)param_1,0x94,0x19c,(long)acStack_a8,0x52c448,0x6e);
    recovered_100026ac(uVar6,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x32eU),0x282828,0x3c);
    recovered_1000248c((long)param_1,0x94,0x1b4,(long)acStack_a8,0xcd4646,0x6e);
    recovered_100026ac(uVar11,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x334U),0x282828,0x50);
    recovered_1000248c((long)param_1,0x1a2,0x19c,(long)acStack_a8,0x282828,0x6e);
    recovered_10002af0((long)param_1,0x234,0x1b8,0x1ceb00);
    if (uVar11 != 0) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = (uVar6 * 100) / uVar11;
      }
      if (10 < uVar10) {
        for (iVar9 = -0x20; iVar9 != 1; iVar9 = iVar9 + 1) {
          for (iVar15 = 0; iVar15 != 0x21; iVar15 = iVar15 + 1) {
            if ((uint)(iVar9 * iVar9 + iVar15 * iVar15) < 0x401) {
              uVar11 = uVar11 & 0xffffffffff000000 | 0xe62828;
              recovered_100022dc((long)param_1,iVar15 + 0x234,iVar9 + 0x1b8,(int)uVar11);
            }
          }
        }
      }
    }
    pcVar8 = acStack_a8;
    uVar3 = 0x20c;
    iVar9 = 0x1e2;
    uVar7 = 100;
    goto LAB_10001c90;
  case 2:
    vararg0_00 = *(ulonglong *)((long)param_1 + 0x428);
    vararg0 = *(ulonglong *)((long)param_1 + 0x430);
    uVar11 = *(ulong *)((long)param_1 + 0x438);
    uVar6 = *(ulong *)((long)param_1 + 0x440);
    recovered_10002218((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xc3c3c3);
    recovered_10002b74((long)param_1,0x17a00000010);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003241,vararg0_00);
    recovered_1000248c((long)param_1,0x58,0x1a8,(long)acStack_a8,0x282828,0x82);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003250,vararg0);
    recovered_1000248c((long)param_1,0x58,0x1be,(long)acStack_a8,0x282828,0x8c);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003261,(ulong)*(uint *)((long)param_1 + 0x60cc));
    recovered_1000248c((long)param_1,0x58,0x1d4,(long)acStack_a8,0x282828,0x82);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000326f,(ulong)*(uint *)((long)param_1 + 0x60d0));
    recovered_1000248c((long)param_1,0x58,0x1ea,(long)acStack_a8,0x282828,0x8c);
    recovered_100026ac(uVar11,acStack_e8,0x40);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000327e,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1a8,(long)acStack_a8,0x282828,0xaa);
    recovered_100026ac(uVar6,acStack_e8,0x40);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000328c,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1be,(long)acStack_a8,0x282828,0xb4);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60d8),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000329d,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1d4,(long)acStack_a8,0x52c448,0xbe);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60e0),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_100032af,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1ea,(long)acStack_a8,0x4b4bd0,200);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60e8),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_100032c4,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x232,0x18c,(long)acStack_a8,0x282828,0x82);
    recovered_100027e0((long)param_1,0x19e00000224,0x480000006a,(long)param_1 + 0x6180,
                       (long)param_1 + 0x61c8,0);
    recovered_10002760((long)param_1,0x1de,0x1ce,0x1cf000);
    recovered_10002760((long)param_1,0x1de,0x1e6,0x1418f5);
    goto LAB_10001d40;
  case 3:
    uVar11 = *(ulong *)((long)param_1 + 0x420);
    uVar14 = *(ulong *)((long)param_1 + 0x418);
    uVar6 = 0;
    if (uVar14 <= uVar11) {
      uVar6 = uVar11 - uVar14;
    }
    recovered_10002218((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xc3c3c3);
    recovered_10002b74((long)param_1,0x17a00000010);
    recovered_100026ac(uVar14,acStack_a8,0x40);
    recovered_100026ac(uVar6,acStack_e8,0x40);
    recovered_100026ac(uVar11,acStack_128,0x40);
    recovered_1000248c((long)param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x3e8U),0x282828,0x82);
    recovered_1000248c((long)param_1,0xce,0x1c2,(long)acStack_e8,0xcd4646,0x78);
    recovered_1000248c((long)param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x3f8U),0x282828,100);
    recovered_1000248c((long)param_1,0xce,0x1da,(long)acStack_a8,0x52c448,0x78);
    recovered_10002af0((long)param_1,0x234,0x1cc,0x1ceb00);
    if ((uVar11 != 0) && (uVar14 < uVar11)) {
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = (int)((uVar6 << 6) / uVar11);
      }
      for (iVar15 = -0x20; iVar15 != 0x21; iVar15 = iVar15 + 1) {
        for (uVar3 = 0x214; iVar2 = uVar3 - 0x234, iVar2 <= iVar9 + -0x20; uVar3 = uVar3 + 1) {
          if ((uint)(iVar15 * iVar15 + iVar2 * iVar2) < 0x401) {
            uVar11 = uVar11 & 0xffffffffff000000 | 0xee1e1e;
            recovered_100022dc((long)param_1,uVar3,iVar15 + 0x1cc,(int)uVar11);
          }
        }
      }
    }
    pcVar8 = acStack_128;
    uVar3 = 0x212;
    iVar9 = 0x1f6;
    uVar7 = 0x78;
LAB_10001c90:
    recovered_1000248c((long)param_1,uVar3,iVar9,(long)pcVar8,0x282828,uVar7);
    goto LAB_10001d40;
  default:
    recovered_10002218((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar10 | 0x7e00000000,0xc3c3c3);
    recovered_1000248c((long)param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x404U),0x282828,0x6e);
    recovered_1000248c((long)param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x412U),0x282828,0x78);
    recovered_1000248c((long)param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x421U),0x282828,0xa0);
    recovered_1000248c((long)param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x438U),0x282828,0x8c);
    recovered_1000248c((long)param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x44bU),0x282828,0x82);
    uVar10 = 0x19e00000224;
    uVar6 = 0x480000006a;
    lVar4 = 0;
    lVar17 = 0;
    iVar9 = 0;
  }
  recovered_100027e0((long)param_1,uVar10,uVar6,lVar4,lVar17,iVar9);
LAB_10001d40:
  uVar3 = terror_ui_window_present(param_1,str_100030d2,*(void **)((long)param_1 + 0x350),DAT_10008078,
                             DAT_1000807c,DAT_10008078 << 2,0xefefef);
  return uVar3;
}

#undef DAT_1000308c
#undef DAT_10008078
#undef DAT_1000807c
#undef PTR_DAT_10004040
#undef PTR_str_10003146_10004008
#undef str_100030d2
#undef str_10003197
#undef str_10003208
#undef str_10003214
#undef str_10003241
#undef str_10003250
#undef str_10003261
#undef str_1000326f
#undef str_1000327e
#undef str_1000328c
#undef str_1000329d
#undef str_100032af
#undef str_100032c4
#undef uStack_170
#undef uStack_168
#undef uStack_160
#undef uStack_158
#undef uStack_150
#undef uStack_148
#undef uStack_140
#undef uStack_130
#undef acStack_128
#undef acStack_e8
#undef acStack_a8

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
 * Address: 0x10001d8c
 */

bool recovered_10001d8c(int param_1)

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

#undef DAT_1000308c
#define DAT_1000308c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x188U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef PTR_DAT_10004040
#define PTR_DAT_10004040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x113cU)))
#undef PTR_str_10003146_10004008
#define PTR_str_10003146_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x1104U)))
#undef UINT_8201090c
#define UINT_8201090c (*(uint *)(0x8201090cU))
#undef str_100030d2
#define str_100030d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_10003197
#define str_10003197 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_10003208
#define str_10003208 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#undef str_10003214
#define str_10003214 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_10003241
#define str_10003241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33dU)))
#undef str_10003250
#define str_10003250 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34cU)))
#undef str_10003261
#define str_10003261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35dU)))
#undef str_1000326f
#define str_1000326f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36bU)))
#undef str_1000327e
#define str_1000327e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1000328c
#define str_1000328c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1000329d
#define str_1000329d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_100032af
#define str_100032af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3abU)))
#undef str_100032c4
#define str_100032c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#define uStack_170 (*(uint *)(frame + 16))
#define uStack_168 (*(uint *)(frame + 24))
#define uStack_160 (*(uint *)(frame + 32))
#define uStack_158 (*(uint *)(frame + 40))
#define uStack_150 (*(uint *)(frame + 48))
#define uStack_148 (*(uint *)(frame + 56))
#define uStack_140 (*(uint *)(frame + 64))
#define uStack_130 (*(uint *)(frame + 80))
#define acStack_128 (*(char (*)[64])(frame + 88))
#define acStack_e8 (*(char (*)[64])(frame + 152))
#define acStack_a8 (*(char (*)[72])(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd8
 */

void * recovered_10001dd8(void *param_1)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulonglong vararg0;
  ulong uVar15;
  int iVar16;
  uint unaff_w23;
  long lVar17;
  ulonglong vararg0_00;
  long lVar18;
  long lVar19;

  if ((param_1 == (void *)0x0) || (uVar4 = *(uint *)((long)param_1 + 0x368), uVar4 + 1 < 2)) {
    return param_1;
  }
  bVar3 = recovered_10001d8c(0x10c);
  if (bVar3) {
    uVar8 = UINT_8201090c;
    if (uVar8 != 0) {
      (*(code *)(ulong)uVar8)(uVar4);
    }
  }
  *(undefined4 *)((long)param_1 + 0x368) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x6210) = 0;
  recovered_10000aac((long)param_1);
  recovered_10002218((long)param_1,0,CONCAT44(DAT_1000807c,DAT_10008078),0xeeeeee);
  lVar5 = recovered_10001fcc((long)param_1);
  uVar4 = DAT_10008078;
  if (lVar5 == 0) {
    uStack_130 = 0;
  }
  else {
    uStack_130 = (uint)(*(int *)((long)param_1 + 0x368) != 0);
  }
  lVar14 = 0;
  for (lVar18 = 0; lVar18 != 0x58; lVar18 = lVar18 + 1) {
    uVar8 = ((int)lVar18 * -0x32 + 0x4990U & 0xfffe) / 0x58;
    unaff_w23 = unaff_w23 & 0xff000000 | uVar8 & 0xff | (uVar8 & 0xff) << 8 | (uVar8 & 0xff) << 0x10
    ;
    recovered_10002218((long)param_1,lVar14,(ulong)DAT_10008078 | 0x100000000,unaff_w23);
    lVar14 = lVar14 + 0x100000000;
  }
  uVar11 = (ulong)(uVar4 - 0x78);
  recovered_10002218((long)param_1,0x5700000000,(ulong)DAT_10008078 | 0x100000000,0x696969);
  recovered_1000234c((long)param_1,0xc00000010,0x120000004c,((uintptr_t)pf_module_state + 0x22fU),uStack_130);
  recovered_1000234c((long)param_1,0x2200000010,0x120000004c,((uintptr_t)pf_module_state + 0x234U),(uint)(lVar5 != 0));
  recovered_1000234c((long)param_1,0x3800000010,0x120000004c,((uintptr_t)pf_module_state + 0x23aU),(uint)(lVar5 != 0));
  recovered_10002218((long)param_1,0xc00000068,uVar11 | 0x3e00000000,0xfafafa);
  recovered_100023fc((long)param_1,0xc00000068,uVar11 | 0x3e00000000,0x949494);
  recovered_1000248c((long)param_1,0x70,0x27,(long)param_1 + 0x6210,0x282828,uVar4 - 0x88);
  uVar8 = DAT_10008078;
  uVar4 = DAT_10008078 - 0x20;
  recovered_10002218((long)param_1,0x6a00000010,(ulong)uVar4 | 0xec00000000,0xffffff);
  recovered_100023fc((long)param_1,0x6a00000010,(ulong)uVar4 | 0xec00000000,0xaeaeae);
  uVar4 = uVar8 - 0x22;
  recovered_10002218((long)param_1,0x6b00000011,(ulong)uVar4 | 0x1200000000,0xeeeeee);
  for (lVar5 = 0; lVar5 != 7; lVar5 = lVar5 + 1) {
    iVar10 = (&DAT_1000308c)[lVar5];
    uVar13 = 0x824e14;
    if (lVar5 != 2) {
      uVar13 = 0x262626;
    }
    recovered_1000248c((long)param_1,iVar10 + 0x13,0x70,(long)(&PTR_str_10003146_10004008)[lVar5],
                       uVar13,0x78);
    if (lVar5 != 0) {
      uVar8 = uVar8 & 0xff000000 | 0xbcbcbc;
      recovered_10002218((long)param_1,(ulong)(iVar10 + 0xe) | 0x6b00000000,0x1200000001,uVar8);
    }
  }
  iVar10 = 0x81;
  lVar6 = 0x7c00000011;
  lVar5 = 0x2494;
  lVar18 = 0x2534;
  lVar14 = 0x24bc;
  lVar19 = 0x24b4;
  lVar17 = 0x24d4;
  for (uVar11 = 0; uVar11 != 0xb; uVar11 = uVar11 + 1) {
    if ((uVar11 < *(uint *)((long)param_1 + 0x60b4)) &&
       (*(int *)((long)param_1 + lVar5) == *(int *)((long)param_1 + 0x368))) {
      uVar13 = 0xffffff;
      uVar8 = 0xeeab65;
    }
    else {
      uVar8 = 0xffffff;
      if ((uVar11 & 1) != 0) {
        uVar8 = 0xfdf2eb;
      }
      uVar13 = 0x1e1e1e;
    }
    recovered_10002218((long)param_1,lVar6,(ulong)uVar4 | 0x1200000000,uVar8);
    if (uVar11 < *(uint *)((long)param_1 + 0x60b4)) {
      puVar1 = (uint *)((long)param_1 + lVar5);
      pf_varargs_10002f28_1(acStack_a8,0x40,(char *)((uintptr_t)pf_module_state + 0x290U),(ulong)*puVar1);
      uStack_140 = uVar13 | uStack_140 & 0xff000000;
      recovered_1000248c((long)param_1,0x25,iVar10,(long)acStack_a8,uStack_140,0x46);
      uStack_148 = uVar13 | uStack_148 & 0xff000000;
      recovered_1000248c((long)param_1,0x83,iVar10,(long)param_1 + lVar17,uStack_148,0xf8);
      pf_varargs_10002f28_2
                (acStack_a8,0x40,str_10003197,(ulong)(puVar1[0x6d] / 10),(ulong)(puVar1[0x6d] % 10))
      ;
      uStack_150 = uVar13 | uStack_150 & 0xff000000;
      recovered_1000248c((long)param_1,0x1a2,iVar10,(long)acStack_a8,uStack_150,0x32);
      pf_varargs_10002f28_1(acStack_a8,0x40,(char *)((uintptr_t)pf_module_state + 0x290U),(ulong)puVar1[2]);
      uStack_158 = uVar13 | uStack_158 & 0xff000000;
      recovered_1000248c((long)param_1,0x1fe,iVar10,(long)acStack_a8,uStack_158,0x2e);
      recovered_100026ac(*(ulong *)((long)param_1 + lVar19),acStack_a8,0x40);
      uStack_160 = uVar13 | uStack_160 & 0xff000000;
      recovered_1000248c((long)param_1,0x230,iVar10,(long)acStack_a8,uStack_160,0x60);
      recovered_100026ac(*(ulong *)((long)param_1 + lVar14),acStack_a8,0x40);
      uStack_168 = uVar13 | uStack_168 & 0xff000000;
      recovered_1000248c((long)param_1,0x2a0,iVar10,(long)acStack_a8,uStack_168,0x68);
      uStack_170 = uVar13 | uStack_170 & 0xff000000;
      recovered_1000248c((long)param_1,0x317,iVar10,(long)param_1 + lVar18,uStack_170,0x48);
    }
    lVar5 = lVar5 + 0x1b8;
    iVar10 = iVar10 + 0x12;
    lVar18 = lVar18 + 0x1b8;
    lVar14 = lVar14 + 0x1b8;
    lVar19 = lVar19 + 0x1b8;
    lVar17 = lVar17 + 0x1b8;
    lVar6 = lVar6 + 0x1200000000;
  }
  lVar5 = 0;
  for (uVar11 = 0; uVar11 != 5; uVar11 = uVar11 + 1) {
    uVar7 = 0x1800000088;
    if (uVar11 != 1) {
      uVar7 = 0x1800000074;
    }
    lVar18 = 0xda;
    if (uVar11 < 2) {
      lVar18 = 0xc6;
    }
    uVar12 = (ulong)((int)(lVar18 + lVar5) + 0x14);
    if (uVar11 < 3) {
      uVar12 = lVar18 + lVar5;
    }
    uVar4 = 0xffd89a;
    if (uVar11 != *(uint *)((long)param_1 + 0x358)) {
      uVar4 = 0xf4f4f4;
    }
    recovered_10002218((long)param_1,uVar12 | 0x16400000000,uVar7,uVar4);
    recovered_100023fc((long)param_1,uVar12 | 0x16400000000,uVar7,0x7e7e7e);
    recovered_1000248c((long)param_1,(int)uVar12 + 0xf,0x16c,(long)(&PTR_DAT_10004040)[uVar11],
                       0x1e1e1e,(int)uVar7 - 0x16);
    lVar5 = lVar5 + 0x74;
  }
  uVar11 = (ulong)(DAT_10008078 - 0x20);
  switch((uintptr_t)(*(undefined4 *)((long)param_1 + 0x358))) {
  case 0:
    recovered_10002218((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xc3c3c3);
    recovered_1000248c((long)param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x2eaU),0x282828,0x46);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c0) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c0) % 10));
    recovered_1000248c((long)param_1,0x92,0x19c,(long)acStack_a8,0x52c448,0x46);
    recovered_1000248c((long)param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x2f2U),0x282828,0x50);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c4) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c4) % 10));
    recovered_1000248c((long)param_1,0x92,0x1b4,(long)acStack_a8,0x4b4bd0,0x46);
    recovered_1000248c((long)param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x2fcU),0x282828,0x46);
    pf_varargs_10002f28_2
              (acStack_a8,0x40,str_10003197,(ulong)(*(uint *)((long)param_1 + 0x60c8) / 10),
               (ulong)(*(uint *)((long)param_1 + 0x60c8) % 10));
    recovered_1000248c((long)param_1,0x92,0x1cc,(long)acStack_a8,0x282828,0x46);
    recovered_10002760((long)param_1,0xfe,0x196,0x1cf000);
    recovered_10002760((long)param_1,0xfe,0x1ae,0x1418f5);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003208,(ulong)*(uint *)((long)param_1 + 0x39c));
    recovered_1000248c((long)param_1,0x15a,0x19c,(long)acStack_a8,0x282828,0x6e);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003214,(ulong)*(uint *)((long)param_1 + 0x398));
    recovered_1000248c((long)param_1,0x15a,0x1b4,(long)acStack_a8,0x282828,0x78);
    recovered_1000248c((long)param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x31eU),0x282828,0x50);
    lVar5 = (long)param_1 + 0x60f0;
    lVar18 = (long)param_1 + 0x6138;
    uVar11 = 0x19e00000222;
    uVar7 = 0x4800000062;
    iVar10 = 1;
    break;
  case 1:
    uVar15 = *(ulong *)((long)param_1 + 0x378);
    uVar12 = *(ulong *)((long)param_1 + 0x380);
    uVar7 = 0;
    if (uVar15 <= uVar12) {
      uVar7 = uVar12 - uVar15;
    }
    recovered_10002218((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xc3c3c3);
    recovered_100026ac(uVar15,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x328U),0x282828,0x3c);
    recovered_1000248c((long)param_1,0x94,0x19c,(long)acStack_a8,0x52c448,0x6e);
    recovered_100026ac(uVar7,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x32eU),0x282828,0x3c);
    recovered_1000248c((long)param_1,0x94,0x1b4,(long)acStack_a8,0xcd4646,0x6e);
    recovered_100026ac(uVar12,acStack_a8,0x40);
    recovered_1000248c((long)param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x334U),0x282828,0x50);
    recovered_1000248c((long)param_1,0x1a2,0x19c,(long)acStack_a8,0x282828,0x6e);
    recovered_10002af0((long)param_1,0x234,0x1b8,0x1ceb00);
    if (uVar12 != 0) {
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = (uVar7 * 100) / uVar12;
      }
      if (10 < uVar11) {
        for (iVar10 = -0x20; iVar10 != 1; iVar10 = iVar10 + 1) {
          for (iVar16 = 0; iVar16 != 0x21; iVar16 = iVar16 + 1) {
            if ((uint)(iVar10 * iVar10 + iVar16 * iVar16) < 0x401) {
              uVar12 = uVar12 & 0xffffffffff000000 | 0xe62828;
              recovered_100022dc((long)param_1,iVar16 + 0x234,iVar10 + 0x1b8,(int)uVar12);
            }
          }
        }
      }
    }
    pcVar9 = acStack_a8;
    uVar4 = 0x20c;
    iVar10 = 0x1e2;
    uVar8 = 100;
    goto LAB_10001c90;
  case 2:
    vararg0_00 = *(ulonglong *)((long)param_1 + 0x428);
    vararg0 = *(ulonglong *)((long)param_1 + 0x430);
    uVar12 = *(ulong *)((long)param_1 + 0x438);
    uVar7 = *(ulong *)((long)param_1 + 0x440);
    recovered_10002218((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xc3c3c3);
    recovered_10002b74((long)param_1,0x17a00000010);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003241,vararg0_00);
    recovered_1000248c((long)param_1,0x58,0x1a8,(long)acStack_a8,0x282828,0x82);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003250,vararg0);
    recovered_1000248c((long)param_1,0x58,0x1be,(long)acStack_a8,0x282828,0x8c);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_10003261,(ulong)*(uint *)((long)param_1 + 0x60cc));
    recovered_1000248c((long)param_1,0x58,0x1d4,(long)acStack_a8,0x282828,0x82);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000326f,(ulong)*(uint *)((long)param_1 + 0x60d0));
    recovered_1000248c((long)param_1,0x58,0x1ea,(long)acStack_a8,0x282828,0x8c);
    recovered_100026ac(uVar12,acStack_e8,0x40);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000327e,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1a8,(long)acStack_a8,0x282828,0xaa);
    recovered_100026ac(uVar7,acStack_e8,0x40);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000328c,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1be,(long)acStack_a8,0x282828,0xb4);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60d8),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_1000329d,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1d4,(long)acStack_a8,0x52c448,0xbe);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60e0),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_100032af,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x12e,0x1ea,(long)acStack_a8,0x4b4bd0,200);
    recovered_10002c70(*(ulong *)((long)param_1 + 0x60e8),acStack_e8);
    pf_varargs_10002f28_1(acStack_a8,0x40,str_100032c4,(ulonglong)acStack_e8);
    recovered_1000248c((long)param_1,0x232,0x18c,(long)acStack_a8,0x282828,0x82);
    recovered_100027e0((long)param_1,0x19e00000224,0x480000006a,(long)param_1 + 0x6180,
                       (long)param_1 + 0x61c8,0);
    recovered_10002760((long)param_1,0x1de,0x1ce,0x1cf000);
    recovered_10002760((long)param_1,0x1de,0x1e6,0x1418f5);
    goto LAB_10001d40;
  case 3:
    uVar12 = *(ulong *)((long)param_1 + 0x420);
    uVar15 = *(ulong *)((long)param_1 + 0x418);
    uVar7 = 0;
    if (uVar15 <= uVar12) {
      uVar7 = uVar12 - uVar15;
    }
    recovered_10002218((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xc3c3c3);
    recovered_10002b74((long)param_1,0x17a00000010);
    recovered_100026ac(uVar15,acStack_a8,0x40);
    recovered_100026ac(uVar7,acStack_e8,0x40);
    recovered_100026ac(uVar12,acStack_128,0x40);
    recovered_1000248c((long)param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x3e8U),0x282828,0x82);
    recovered_1000248c((long)param_1,0xce,0x1c2,(long)acStack_e8,0xcd4646,0x78);
    recovered_1000248c((long)param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x3f8U),0x282828,100);
    recovered_1000248c((long)param_1,0xce,0x1da,(long)acStack_a8,0x52c448,0x78);
    recovered_10002af0((long)param_1,0x234,0x1cc,0x1ceb00);
    if ((uVar12 != 0) && (uVar15 < uVar12)) {
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)((uVar7 << 6) / uVar12);
      }
      for (iVar16 = -0x20; iVar16 != 0x21; iVar16 = iVar16 + 1) {
        for (uVar4 = 0x214; iVar2 = uVar4 - 0x234, iVar2 <= iVar10 + -0x20; uVar4 = uVar4 + 1) {
          if ((uint)(iVar16 * iVar16 + iVar2 * iVar2) < 0x401) {
            uVar12 = uVar12 & 0xffffffffff000000 | 0xee1e1e;
            recovered_100022dc((long)param_1,uVar4,iVar16 + 0x1cc,(int)uVar12);
          }
        }
      }
    }
    pcVar9 = acStack_128;
    uVar4 = 0x212;
    iVar10 = 0x1f6;
    uVar8 = 0x78;
LAB_10001c90:
    recovered_1000248c((long)param_1,uVar4,iVar10,(long)pcVar9,0x282828,uVar8);
    goto LAB_10001d40;
  default:
    recovered_10002218((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xe7e7e7);
    recovered_100023fc((long)param_1,0x17a00000010,uVar11 | 0x7e00000000,0xc3c3c3);
    recovered_1000248c((long)param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x404U),0x282828,0x6e);
    recovered_1000248c((long)param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x412U),0x282828,0x78);
    recovered_1000248c((long)param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x421U),0x282828,0xa0);
    recovered_1000248c((long)param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x438U),0x282828,0x8c);
    recovered_1000248c((long)param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x44bU),0x282828,0x82);
    uVar11 = 0x19e00000224;
    uVar7 = 0x480000006a;
    lVar5 = 0;
    lVar18 = 0;
    iVar10 = 0;
  }
  recovered_100027e0((long)param_1,uVar11,uVar7,lVar5,lVar18,iVar10);
LAB_10001d40:
  uVar4 = terror_ui_window_present(param_1,str_100030d2,*(void **)((long)param_1 + 0x350),DAT_10008078,
                             DAT_1000807c,DAT_10008078 << 2,0xefefef);
  return (void *)(ulong)uVar4;
}

#undef DAT_1000308c
#undef DAT_10008078
#undef DAT_1000807c
#undef PTR_DAT_10004040
#undef PTR_str_10003146_10004008
#undef UINT_8201090c
#undef str_100030d2
#undef str_10003197
#undef str_10003208
#undef str_10003214
#undef str_10003241
#undef str_10003250
#undef str_10003261
#undef str_1000326f
#undef str_1000327e
#undef str_1000328c
#undef str_1000329d
#undef str_100032af
#undef str_100032c4
#undef uStack_170
#undef uStack_168
#undef uStack_160
#undef uStack_158
#undef uStack_150
#undef uStack_148
#undef uStack_140
#undef uStack_130
#undef acStack_128
#undef acStack_e8
#undef acStack_a8

#define local_27b4 (*(uint *)(frame + 28))
#define local_27b0 (*(undefined1 (*)[48])(frame + 32))
#define aiStack_2780 (*(int (*)[2516])(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e54
 */

uint recovered_10001e54(long param_1)

{
  unsigned char frame[10224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;

  local_27b4 = 0;
  uVar1 = 0;
  if ((param_1 != 0) && (lVar2 = recovered_10001fcc(param_1), uVar1 = 0, lVar2 != 0)) {
    memset(local_27b0,0,0x2780);
    uVar1 = terror_ui_window_list(local_27b0,0x10,&local_27b4);
    if (uVar1 != 0) {
      uVar3 = (ulong)local_27b4;
      if (0x10 < local_27b4) {
        uVar3 = 0x10;
        local_27b4 = 0x10;
      }
      piVar5 = aiStack_2780;
      for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
        if (piVar5[-0xb] == *(int *)(param_1 + 0x368)) {
          uVar1 = terror_ui_window_configure(piVar5[-0xc],piVar5[-1],*piVar5,0xe,10);
          uVar3 = (ulong)local_27b4;
        }
        piVar5 = piVar5 + 0x9e;
      }
    }
  }
  return uVar1;
}

#undef local_27b4
#undef local_27b0
#undef aiStack_2780

#undef DAT_100030f7
#define DAT_100030f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef DAT_10003100
#define DAT_10003100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_100030f9
#define str_100030f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10003104
#define str_10003104 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x200U)))
#undef str_1000311b
#define str_1000311b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f18
 */

ulong recovered_10001f18(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *vararg2;
  char *vararg3;
  uint uVar1;
  ulong uVar2;
  char *format;

  uVar2 = recovered_10001fcc(param_1);
  if (param_1 != 0) {
    if (uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x6210) = 0;
    }
    else {
      vararg2 = &DAT_100030f7;
      if (*(char *)(uVar2 + 0xc0) != '\0') {
        vararg2 = (char *)(uVar2 + 0xc0);
      }
      vararg3 = &DAT_10003100;
      if ((*(byte *)(uVar2 + 4) & 1) != 0) {
        vararg3 = str_100030f9;
      }
      if (*vararg2 == '/') {
        format = str_10003104;
      }
      else {
        format = str_1000311b;
      }
      uVar1 = pf_varargs_10002f28_5
                        ((char *)(param_1 + 0x6210),0x100,format,*(ulonglong *)(uVar2 + 0x30),
                         (ulong)*(uint *)(uVar2 + 0x3c),(ulonglong)vararg2,(ulonglong)vararg3,
                         (ulong)*(uint *)(uVar2 + 0x38));
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

#undef DAT_100030f7
#undef DAT_10003100
#undef str_100030f9
#undef str_10003104
#undef str_1000311b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fcc
 */

long recovered_10001fcc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;

  lVar2 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x368) == -1) {
      return 0;
    }
    lVar3 = (ulong)*(uint *)(param_1 + 0x60b4) + 1;
    lVar4 = param_1 + 0x22dc;
    do {
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = lVar4 + 0x1b8;
      piVar1 = (int *)(lVar4 + 0x1b8);
      lVar4 = lVar2;
    } while (*piVar1 != *(int *)(param_1 + 0x368));
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002018
 */

bool recovered_10002018(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar1 != param_1) && (param_1 < iVar2 || param_1 <= iVar1)) &&
         iVar3 <= param_2) && param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


#undef UINT_820108bc
#define UINT_820108bc (*(uint *)(0x820108bcU))
#undef UINT_820108c0
#define UINT_820108c0 (*(uint *)(0x820108c0U))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002044
 */

void recovered_10002044(long param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  int *piVar8;

  local_34 = 0;
  memset((void *)(param_1 + 0x514),0,0x1f80);
  bVar3 = recovered_10001d8c(0xc0);
  if (bVar3) {
    uVar2 = UINT_820108c0;
    if ((uVar2 != 0) &&
       (uVar4 = (*(code *)(ulong)uVar2)((void *)(param_1 + 0x514),0x10,&local_34), uVar2 = local_34,
       uVar4 != 0)) {
      uVar6 = 0;
      uVar4 = local_34;
      if (0xf < local_34) {
        uVar4 = 0x10;
      }
      *(uint *)(param_1 + 0x60b8) = uVar4;
      piVar8 = (int *)(param_1 + 0x704);
      for (; uVar4 != uVar6; uVar6 = uVar6 + 1) {
        if (*piVar8 == *(int *)(param_1 + 0x370)) goto LAB_100020f8;
        piVar8 = piVar8 + 0x7e;
      }
      bVar3 = recovered_10001d8c(0xbc);
      if (bVar3) {
        uVar1 = UINT_820108bc;
        if (uVar1 == 0) goto LAB_1000212c;
        iVar5 = (*(code *)(ulong)uVar1)();
      }
      else {
LAB_1000212c:
        iVar5 = -1;
      }
      piVar8 = (int *)(param_1 + 0x704);
      for (uVar6 = 0; uVar4 != uVar6; uVar6 = uVar6 + 1) {
        if (*piVar8 == iVar5) {
          *(int *)(param_1 + 0x370) = iVar5;
          goto LAB_100020f8;
        }
        piVar8 = piVar8 + 0x7e;
      }
      if (uVar2 == 0) {
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x704);
      goto LAB_100020f4;
    }
  }
  *(undefined4 *)(param_1 + 0x60b8) = 0;
  uVar7 = 0xffffffff;
LAB_100020f4:
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x370) = uVar7;
LAB_100020f8:
  *(int *)(param_1 + 0x36c) = (int)uVar6;
  return;
}

#undef UINT_820108bc
#undef UINT_820108c0
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002170
 */

uint recovered_10002170(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;

  if (*param_1 != param_2) {
    memset(param_1,0,0x1c);
    *param_1 = param_2;
  }
  if (999 < param_3) {
    param_3 = 1000;
  }
  bVar1 = *(byte *)((long)param_1 + 0x19);
  *(ushort *)((long)(param_1 + 1) + (ulong)bVar1 * 2) = (ushort)param_3;
  uVar5 = bVar1 + 1;
  *(char *)((long)param_1 + 0x19) = (char)uVar5 + (char)(uVar5 / 10) * -10;
  uVar5 = (uint)*(byte *)(param_1 + 6);
  if (*(byte *)(param_1 + 6) < 10) {
    uVar5 = uVar5 + 1;
    *(char *)(param_1 + 6) = (char)uVar5;
  }
  uVar4 = 0;
  puVar3 = (ushort *)(param_1 + 1);
  for (uVar6 = (ulong)uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar4 = uVar4 + *puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  return uVar2;
}


#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002218
 */

void recovered_10002218(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_w21;

  uVar4 = (uint)param_2;
  uVar5 = uVar4;
  if ((int)DAT_10008078 <= (int)uVar4) {
    uVar5 = DAT_10008078;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar5;
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = uVar5;
  if ((int)DAT_1000807c <= (int)uVar5) {
    uVar3 = DAT_1000807c;
  }
  uVar6 = 0;
  if (-1 < param_2) {
    uVar6 = uVar3;
  }
  uVar4 = uVar4 + (int)param_3;
  uVar3 = uVar4;
  if ((int)DAT_10008078 <= (int)uVar4) {
    uVar3 = DAT_10008078;
  }
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar3;
  }
  uVar5 = uVar5 + (int)((ulong)param_3 >> 0x20);
  uVar4 = uVar5;
  if ((int)DAT_1000807c <= (int)uVar5) {
    uVar4 = DAT_1000807c;
  }
  uVar3 = 0;
  if (-1 < (int)uVar5) {
    uVar3 = uVar4;
  }
  for (; uVar4 = uVar1, (int)uVar6 < (int)uVar3; uVar6 = uVar6 + 1) {
    for (; (int)uVar4 < (int)uVar2; uVar4 = uVar4 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_100022dc(param_1,uVar4,uVar6,unaff_w21);
    }
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c

#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(int *)(((uintptr_t)pf_module_state + 0x5178U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022dc
 */

void recovered_100022dc(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x350) != 0)) &&
     ((int)param_2 < (int)DAT_10008078 && (int)param_3 < DAT_1000807c)) {
    lVar1 = (ulong)param_2 + (ulong)DAT_10008078 * (ulong)param_3;
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4) = (char)param_4;
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 1) = (char)((uint)param_4 >> 8);
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 2) = (char)((uint)param_4 >> 0x10);
    *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 3) = 0xff;
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c

#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(int *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
#define lStack_58 (*(long *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 36))
#define uStack_48 (*(uint *)(frame + 40))
#define uStack_44 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000234c
 */

void recovered_1000234c(long param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;

  uVar7 = 0xf6f6f6;
  if (param_5 == 0) {
    uVar7 = 0xdadada;
  }
  uVar6 = 0x1e1e1e;
  if (param_5 == 0) {
    uVar6 = 0x808080;
  }
  recovered_10002218(param_1,param_2,param_3,uVar7);
  recovered_100023fc(param_1,param_2,param_3,0x7e7e7e);
  recovered_10002218(param_1,(param_2 & 0xffffffff00000000 | (ulong)((int)param_2 + 1)) +
                             0x100000000,(ulong)((int)param_3 - 2) | 0x100000000,0xffffff);
  uVar7 = (int)param_3 - 0x10;
  if ((((param_1 != 0) && (uVar7 != 0)) && (param_4 != 0)) && (*(long *)(param_1 + 0x350) != 0)) {
    memset(&lStack_58,0,0x18);
    bVar9 = recovered_10001d8c(0x178);
    if (bVar9) {
      uVar4 = UINT_82010978;
      if (((uVar4 != 0) &&
          (uVar6 = (uVar6 & 0xff00ff00 | 0xff000000) >> 8 | (uVar6 & 0xff00ff) << 8,
          iVar10 = (*(code *)(ulong)uVar4)
                             (param_4,0xffffffff,1,uVar6 >> 0x10 | uVar6 << 0x10,&lStack_58),
          iVar8 = DAT_1000807c, uVar6 = DAT_10008078, iVar10 != 0)) && (lStack_58 != 0)) {
        if (uStack_4c << 2 <= uStack_44) {
          uVar15 = 0;
          uVar4 = uStack_4c;
          if (uVar7 <= uStack_4c) {
            uVar4 = uVar7;
          }
          if ((int)uVar7 < 1) {
            uVar4 = uStack_4c;
          }
          for (; uVar15 < uStack_48; uVar15 = uVar15 + 1) {
            uVar7 = (int)uVar15 + (int)(param_2 >> 0x20) + 6;
            if ((-1 < (int)uVar7) && ((int)uVar7 < iVar8)) {
              uVar1 = (int)param_2 + 9;
              lVar2 = lStack_58;
              for (uVar16 = (ulong)uVar4; uVar16 != 0; uVar16 = uVar16 - 1) {
                if ((-1 < (int)uVar1) && ((int)uVar1 < (int)uVar6)) {
                  lVar12 = lVar2 + uVar15 * uStack_44;
                  bVar11 = *(byte *)(lVar12 + 3);
                  if (bVar11 != 0) {
                    lVar14 = uVar15 * uStack_44;
                    pbVar3 = (byte *)(*(long *)(param_1 + 0x350) +
                                     ((ulong)uVar6 * (ulong)uVar7 + (ulong)uVar1) * 4);
                    if (bVar11 == 0xff) {
                      *pbVar3 = *(byte *)(lVar2 + lVar14);
                      pbVar3[1] = *(byte *)(lVar12 + 1);
                      bVar11 = *(byte *)(lVar12 + 2);
                    }
                    else {
                      uVar13 = (uint)bVar11;
                      uVar5 = uVar13 ^ 0xff;
                      *pbVar3 = (byte)((uVar5 * *pbVar3 + *(byte *)(lVar2 + lVar14) * uVar13 + 0x7f)
                                      / 0xff);
                      pbVar3[1] = (byte)((uVar5 * pbVar3[1] + *(byte *)(lVar12 + 1) * uVar13 + 0x7f)
                                        / 0xff);
                      bVar11 = (byte)((uVar5 * pbVar3[2] + *(byte *)(lVar12 + 2) * uVar13 + 0x7f) /
                                     0xff);
                    }
                    pbVar3[2] = bVar11;
                    pbVar3[3] = 0xff;
                  }
                }
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 4;
              }
            }
          }
        }
        recovered_10002664(lStack_58);
      }
    }
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c
#undef UINT_82010978
#undef lStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_44

#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023fc
 */

void recovered_100023fc(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong unaff_x21;
  uint uVar6;
  ulong uVar7;

  uVar7 = param_3 & 0xffffffff | 0x100000000;
  uVar6 = (uint)param_4;
  recovered_10002218(param_1,param_2,uVar7,uVar6 & 0xffffff);
  recovered_10002218(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar7,uVar6 & 0xffffff);
  recovered_10002218(param_1,param_2,param_3 & 0xffffffff00000000 | 1,uVar6 & 0xffffff);
  uVar6 = (int)param_3 + (int)param_2;
  uVar3 = uVar6 - 1;
  uVar4 = uVar3;
  if ((int)DAT_10008078 <= (int)uVar3) {
    uVar4 = DAT_10008078;
  }
  uVar1 = 0;
  if (-1 < (int)uVar3) {
    uVar1 = uVar4;
  }
  uVar4 = (uint)(param_2 >> 0x20);
  uVar2 = uVar4;
  if ((int)DAT_1000807c <= (int)uVar4) {
    uVar2 = DAT_1000807c;
  }
  uVar5 = 0;
  if (-1 < (long)((ulong)uVar3 | param_2 & 0xffffffff00000000)) {
    uVar5 = uVar2;
  }
  uVar3 = uVar6;
  if ((int)DAT_10008078 <= (int)uVar6) {
    uVar3 = DAT_10008078;
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar2 = uVar3;
  }
  uVar4 = uVar4 + (int)(param_3 >> 0x20);
  uVar6 = uVar4;
  if ((int)DAT_1000807c <= (int)uVar4) {
    uVar6 = DAT_1000807c;
  }
  uVar3 = 0;
  if (-1 < (int)uVar4) {
    uVar3 = uVar6;
  }
  for (; uVar6 = uVar1, (int)uVar5 < (int)uVar3; uVar5 = uVar5 + 1) {
    for (; (int)uVar6 < (int)uVar2; uVar6 = uVar6 + 1) {
      unaff_x21 = unaff_x21 & 0xffffffffff000000 | param_4 & 0xffffff;
      recovered_100022dc(param_1,uVar6,uVar5,(int)unaff_x21);
    }
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c

#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(int *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
#define local_58 (*(long *)(frame + 24))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000248c
 */

void recovered_1000248c(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       )

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;

  if ((((param_1 != 0) && (param_6 != 0)) && (param_4 != 0)) && (*(long *)(param_1 + 0x350) != 0)) {
    memset(&local_58,0,0x18);
    bVar9 = recovered_10001d8c(0x178);
    if (bVar9) {
      uVar7 = UINT_82010978;
      if (((uVar7 != 0) &&
          (uVar6 = (param_5 & 0xff00ff00 | 0xff000000) >> 8 | (param_5 & 0xff00ff) << 8,
          iVar10 = (*(code *)(ulong)uVar7)
                             (param_4,0xffffffff,1,uVar6 >> 0x10 | uVar6 << 0x10,&local_58),
          iVar8 = DAT_1000807c, uVar7 = DAT_10008078, iVar10 != 0)) && (local_58 != 0)) {
        if (local_4c << 2 <= local_44) {
          uVar15 = 0;
          uVar6 = local_4c;
          if (param_6 <= local_4c) {
            uVar6 = param_6;
          }
          if ((int)param_6 < 1) {
            uVar6 = local_4c;
          }
          for (; uVar15 < local_48; uVar15 = uVar15 + 1) {
            uVar3 = (int)uVar15 + param_3;
            if ((-1 < (int)uVar3) && ((int)uVar3 < iVar8)) {
              uVar1 = param_2;
              lVar2 = local_58;
              for (uVar16 = (ulong)uVar6; uVar16 != 0; uVar16 = uVar16 - 1) {
                if ((-1 < (int)uVar1) && ((int)uVar1 < (int)uVar7)) {
                  lVar12 = lVar2 + uVar15 * local_44;
                  bVar11 = *(byte *)(lVar12 + 3);
                  if (bVar11 != 0) {
                    lVar14 = uVar15 * local_44;
                    pbVar4 = (byte *)(*(long *)(param_1 + 0x350) +
                                     ((ulong)uVar7 * (ulong)uVar3 + (ulong)uVar1) * 4);
                    if (bVar11 == 0xff) {
                      *pbVar4 = *(byte *)(lVar2 + lVar14);
                      pbVar4[1] = *(byte *)(lVar12 + 1);
                      bVar11 = *(byte *)(lVar12 + 2);
                    }
                    else {
                      uVar13 = (uint)bVar11;
                      uVar5 = uVar13 ^ 0xff;
                      *pbVar4 = (byte)((uVar5 * *pbVar4 + *(byte *)(lVar2 + lVar14) * uVar13 + 0x7f)
                                      / 0xff);
                      pbVar4[1] = (byte)((uVar5 * pbVar4[1] + *(byte *)(lVar12 + 1) * uVar13 + 0x7f)
                                        / 0xff);
                      bVar11 = (byte)((uVar5 * pbVar4[2] + *(byte *)(lVar12 + 2) * uVar13 + 0x7f) /
                                     0xff);
                    }
                    pbVar4[2] = bVar11;
                    pbVar4[3] = 0xff;
                  }
                }
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 4;
              }
            }
          }
        }
        recovered_10002664(local_58);
      }
    }
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c
#undef UINT_82010978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef Ram0000000082010850
#define Ram0000000082010850 (*(uint32_t *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002664
 */

void recovered_10002664(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10001d8c(0x50);
  if ((bVar2) && (uVar1 = Ram0000000082010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef Ram0000000082010850

#undef DAT_1000319d
#define DAT_1000319d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_1000319f
#define DAT_1000319f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_100031a2
#define DAT_100031a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef DAT_100031a5
#define DAT_100031a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef str_100031a8
#define str_100031a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_100031b7
#define str_100031b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b3U)))
#define in_stack_ffffffffffffffe0 (*(undefined * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026ac
 */

int recovered_100026ac(ulong param_1,char *param_2,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  long lVar2;
  undefined *vararg1;
  ulong uVar3;

  if (param_1 >> 0x1e == 0) {
    if (param_1 >> 0x14 == 0) {
      if (param_1 < 0x400) {
        vararg1 = &DAT_1000319d;
        format = str_100031b7;
        goto LAB_10002730;
      }
      in_stack_ffffffffffffffe0 = &DAT_100031a5;
      uVar3 = 0x3ff;
      lVar2 = 10;
    }
    else {
      in_stack_ffffffffffffffe0 = &DAT_100031a2;
      uVar3 = 0xfffff;
      lVar2 = 0x14;
    }
  }
  else {
    in_stack_ffffffffffffffe0 = &DAT_1000319f;
    uVar3 = 0x3fffffff;
    lVar2 = 0x1e;
  }
  vararg1 = (undefined *)((uVar3 & param_1) * 100 >> lVar2);
  format = str_100031a8;
  param_1 = param_1 >> lVar2;
LAB_10002730:
  iVar1 = pf_varargs_10002f28_3
                    (param_2,param_3,format,param_1,(ulonglong)vararg1,
                     (ulonglong)in_stack_ffffffffffffffe0);
  return iVar1;
}

#undef DAT_1000319d
#undef DAT_1000319f
#undef DAT_100031a2
#undef DAT_100031a5
#undef str_100031a8
#undef str_100031b7
#undef in_stack_ffffffffffffffe0

#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint *)(((uintptr_t)pf_module_state + 0x5178U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

void recovered_10002760(long param_1,int param_2,int param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong unaff_x21;
  uint uVar6;

  recovered_10002218(param_1,CONCAT44(param_3,param_2),0x1200000012,0xeeeeee);
  recovered_100023fc(param_1,CONCAT44(param_3,param_2),0x1200000012,0x8e8e8e);
  uVar6 = param_2 + 5;
  uVar1 = param_3 + 5;
  uVar5 = uVar6;
  if ((int)DAT_10008078 <= (int)uVar6) {
    uVar5 = DAT_10008078;
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar2 = uVar5;
  }
  uVar6 = uVar1;
  if ((int)DAT_1000807c <= (int)uVar1) {
    uVar6 = DAT_1000807c;
  }
  uVar5 = 0;
  if (-1 < (int)uVar1) {
    uVar5 = uVar6;
  }
  uVar6 = param_2 + 0xd;
  uVar1 = uVar6;
  if ((int)DAT_10008078 <= (int)uVar6) {
    uVar1 = DAT_10008078;
  }
  uVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar3 = uVar1;
  }
  uVar6 = param_3 + 0xd;
  uVar1 = uVar6;
  if ((int)DAT_1000807c <= (int)uVar6) {
    uVar1 = DAT_1000807c;
  }
  uVar4 = 0;
  if (-1 < (int)uVar6) {
    uVar4 = uVar1;
  }
  for (; uVar6 = uVar2, (int)uVar5 < (int)uVar4; uVar5 = uVar5 + 1) {
    for (; (int)uVar6 < (int)uVar3; uVar6 = uVar6 + 1) {
      unaff_x21 = unaff_x21 & 0xffffffffff000000 | param_4 & 0xffffff;
      recovered_100022dc(param_1,uVar6,uVar5,(int)unaff_x21);
    }
  }
  return;
}

#undef DAT_10008078
#undef DAT_1000807c

#define local_98 (*(ulong *)(frame + 24))
#define local_78 (*(uint *)(frame + 56))
#define local_70 (*(uint *)(frame + 64))
#define uStack_a0 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

void recovered_100027e0(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                       int param_6)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar12;
  uint uVar11;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;

  recovered_10002218(param_1,param_2,param_3,0);
  recovered_100023fc(param_1,param_2,param_3,0x303030);
  lVar16 = 0;
  uVar15 = (uint)param_3;
  iVar3 = uVar15 - 1;
  iVar10 = (int)(param_3 >> 0x20);
  iVar1 = (int)(param_2 >> 0x20) + iVar10;
  iVar4 = iVar1 + -2;
  iVar10 = iVar10 + -4;
  uVar14 = param_2 & 0xffffffff;
  do {
    if ((ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x47 == lVar16) {
      return;
    }
    if ((int)uVar15 < 2) {
      lVar8 = 0x47;
      if (param_4 == 0) goto LAB_100028b0;
LAB_10002890:
      uVar9 = (uint)*(byte *)(param_4 + lVar8);
      uVar5 = uVar9;
      if (param_5 == 0) goto LAB_100028b8;
LAB_10002898:
      uVar5 = (uint)*(byte *)(param_5 + lVar8);
    }
    else {
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = (int)lVar16 / iVar3;
      }
      lVar8 = (long)iVar2;
      if (param_4 != 0) goto LAB_10002890;
LAB_100028b0:
      uVar9 = 0;
      uVar5 = 0;
      if (param_5 != 0) goto LAB_10002898;
LAB_100028b8:
      uVar9 = uVar5;
      uVar5 = 0;
    }
    uVar9 = (int)(uVar9 * iVar10) / -100 + iVar4;
    uVar5 = (int)(uVar5 * iVar10) / -100 + iVar4;
    if (param_6 == 0) {
      if (lVar16 != 0) {
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = ((int)lVar16 + -0x47) / iVar3;
        }
        iVar13 = (int)uVar14;
        if (param_4 == 0) {
          uVar6 = 0;
          uVar7 = uVar6;
          if (param_5 != 0) goto LAB_10002984;
LAB_100029f4:
          uVar11 = 0;
          uVar12 = 0;
          uVar7 = uVar6;
        }
        else {
          uVar6 = (uint)*(byte *)(param_4 + iVar2);
          uVar7 = (uint)*(byte *)(param_4 + iVar2);
          if (param_5 == 0) goto LAB_100029f4;
LAB_10002984:
          uVar11 = (uint)*(byte *)(param_5 + iVar2);
          uVar12 = (uint)*(byte *)(param_5 + iVar2);
        }
        if (param_4 != 0) {
          local_98 = local_98 & 0xffffffffff000000 | 0x1ceb00;
          recovered_10002a20(param_1,(ulong)(iVar13 - 1),
                             (ulong)(uint)((int)(uVar7 * iVar10) / -100 + iVar4),iVar13,uVar9,
                             local_98);
          uVar12 = uVar11;
        }
        if (param_5 != 0) {
          uStack_a0 = uStack_a0 & 0xffffffffff000000 | 0x1418f5;
          recovered_10002a20(param_1,(ulong)(iVar13 - 1),
                             (ulong)(uint)((int)(uVar12 * iVar10) / -100 + iVar4),iVar13,uVar5,
                             uStack_a0);
        }
      }
    }
    else {
      local_78 = local_78 & 0xff000000 | 0x1ceb00;
      recovered_10002218(param_1,uVar14 & 0xffffffff | (ulong)uVar9 << 0x20,
                         (ulong)(iVar1 + ~uVar9) << 0x20 | 1,local_78);
      local_70 = local_70 & 0xff000000 | 0x1418f5;
      recovered_10002218(param_1,uVar14 & 0xffffffff | (ulong)uVar5 << 0x20,
                         (ulong)(iVar1 + ~uVar5) << 0x20 | 1,local_70);
    }
    lVar16 = lVar16 + 0x47;
    uVar14 = uVar14 + 1;
  } while( true );
}

#undef local_98
#undef local_78
#undef local_70
#undef uStack_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

void recovered_10002a20(long param_1,ulong param_2,ulong param_3,int param_4,int param_5,
                       ulong param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  iVar10 = param_4 - (int)param_2;
  iVar9 = -1;
  if (iVar10 != 0 && (int)param_2 <= param_4) {
    iVar9 = 1;
  }
  iVar1 = -iVar10;
  if (-1 < iVar10) {
    iVar1 = iVar10;
  }
  iVar7 = (int)param_3;
  iVar5 = param_5 - iVar7;
  iVar10 = -1;
  if (!(iVar5 == 0 || param_5 < iVar7)) {
    iVar10 = 1;
    iVar5 = iVar7 - param_5;
  }
  iVar7 = iVar5 + iVar1;
  while( true ) {
    uVar6 = (uint)param_2;
    uVar8 = (uint)param_3;
    recovered_100022dc(param_1,uVar6,uVar8,(uint)param_6 & 0xffffff);
    if (uVar8 == param_5 && uVar6 == param_4) break;
    iVar4 = iVar7 * 2;
    iVar2 = 0;
    if (iVar5 <= iVar4) {
      iVar2 = iVar5;
    }
    iVar3 = 0;
    if (iVar5 <= iVar4) {
      iVar3 = iVar9;
    }
    param_2 = (ulong)(iVar3 + uVar6);
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar10;
    }
    param_3 = (ulong)(iVar3 + uVar8);
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar7 = iVar2 + iVar7 + iVar3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002af0
 */

void recovered_10002af0(long param_1,int param_2,int param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong unaff_x22;
  int iVar1;
  int iVar2;

  for (iVar1 = -0x20; iVar1 != 0x21; iVar1 = iVar1 + 1) {
    for (iVar2 = -0x20; iVar2 != 0x21; iVar2 = iVar2 + 1) {
      if ((uint)(iVar1 * iVar1 + iVar2 * iVar2) < 0x401) {
        unaff_x22 = unaff_x22 & 0xffffffffff000000 | param_4 & 0xffffff;
        recovered_100022dc(param_1,param_2 + iVar2,iVar1 + param_3,(int)unaff_x22);
      }
    }
  }
  return;
}


#undef DAT_100032e3
#define DAT_100032e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dfU)))
#undef DAT_10008078
#define DAT_10008078 (*(uint *)(((uintptr_t)pf_module_state + 0x5174U)))
#undef DAT_1000807c
#define DAT_1000807c (*(int *)(((uintptr_t)pf_module_state + 0x5178U)))
#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
#undef str_100032cd
#define str_100032cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#define lStack_58 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b74
 */

/* WARNING: Removing unreachable block (ram,0x10002560) */

void recovered_10002b74(long param_1,ulong param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  ulong unaff_x25;
  undefined8 unaff_x26;
  uint uVar19;

  uVar15 = (param_2 & 0xffffffff00000000) + 0xe00000000;
  uVar17 = uVar15 | param_2 + 0x36 & 0xffffffff;
  pcVar5 = str_100032cd;
  if (*(char *)(param_1 + 0x448) != '\0') {
    pcVar5 = (char *)(param_1 + 0x448);
  }
  recovered_10002218(param_1,uVar17,0x16000000fa,0xf7f7f7);
  recovered_100023fc(param_1,uVar17,0x16000000fa,0x7e7e7e);
  iVar18 = (int)(param_2 + 0x36);
  iVar16 = (int)(uVar15 >> 0x20);
  recovered_1000248c(param_1,iVar18 + 9,iVar16 + 7,(long)pcVar5,0x282828,0xd8);
  uVar19 = (uint)((ulong)unaff_x26 >> 0x20);
  recovered_10002218(param_1,(param_2 & 0xffffffff00000000 | (ulong)((int)param_2 + 0x11e)) +
                             0xf00000000,0x1400000011,0xedbc74);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x350) != 0)) {
    memset(&lStack_58,0,0x18);
    bVar9 = recovered_10001d8c(0x178);
    if (bVar9) {
      uVar7 = UINT_82010978;
      if (((uVar7 != 0) &&
          (uVar10 = (*(code *)(ulong)uVar7)(&DAT_100032e3,0xffffffff,1,0x1e1e1eff,&lStack_58),
          iVar8 = DAT_1000807c, uVar7 = DAT_10008078, uVar10 != 0)) && (lStack_58 != 0)) {
        uVar10 = (uint)(unaff_x25 >> 0x20);
        if (uVar19 << 2 <= uVar10) {
          uVar15 = 0;
          if (7 < uVar19) {
            uVar19 = 8;
          }
          for (; uVar15 < (unaff_x25 & 0xffffffff); uVar15 = uVar15 + 1) {
            uVar3 = (int)uVar15 + iVar16 + 7;
            if ((-1 < (int)uVar3) && ((int)uVar3 < iVar8)) {
              uVar1 = iVar18 + 0xed;
              lVar2 = lStack_58;
              for (uVar17 = (ulong)uVar19; uVar17 != 0; uVar17 = uVar17 - 1) {
                if ((-1 < (int)uVar1) && ((int)uVar1 < (int)uVar7)) {
                  lVar12 = lVar2 + uVar15 * uVar10;
                  bVar11 = *(byte *)(lVar12 + 3);
                  if (bVar11 != 0) {
                    lVar14 = uVar15 * uVar10;
                    pbVar4 = (byte *)(*(long *)(param_1 + 0x350) +
                                     ((ulong)uVar7 * (ulong)uVar3 + (ulong)uVar1) * 4);
                    if (bVar11 == 0xff) {
                      *pbVar4 = *(byte *)(lVar2 + lVar14);
                      pbVar4[1] = *(byte *)(lVar12 + 1);
                      bVar11 = *(byte *)(lVar12 + 2);
                    }
                    else {
                      uVar13 = (uint)bVar11;
                      uVar6 = uVar13 ^ 0xff;
                      *pbVar4 = (byte)((uVar6 * *pbVar4 + *(byte *)(lVar2 + lVar14) * uVar13 + 0x7f)
                                      / 0xff);
                      pbVar4[1] = (byte)((uVar6 * pbVar4[1] + *(byte *)(lVar12 + 1) * uVar13 + 0x7f)
                                        / 0xff);
                      bVar11 = (byte)((uVar6 * pbVar4[2] + *(byte *)(lVar12 + 2) * uVar13 + 0x7f) /
                                     0xff);
                    }
                    pbVar4[2] = bVar11;
                    pbVar4[3] = 0xff;
                  }
                }
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 4;
              }
            }
          }
        }
        recovered_10002664(lStack_58);
      }
    }
  }
  return;
}

#undef DAT_100032e3
#undef DAT_10008078
#undef DAT_1000807c
#undef UINT_82010978
#undef str_100032cd
#undef lStack_58

#undef str_100032e5
#define str_100032e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e1U)))
#define acStack_40 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c70
 */

int recovered_10002c70(ulong param_1,char *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_100026ac(param_1,acStack_40,0x20);
  iVar1 = pf_varargs_10002f28_1(param_2,0x40,str_100032e5,(ulonglong)acStack_40);
  return iVar1;
}

#undef str_100032e5
#undef acStack_40
