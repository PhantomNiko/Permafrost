/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1244U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002e20
#define DAT_10002e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ecU)))
#undef DAT_10009c00
#define DAT_10009c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e44U)))
#undef DAT_10009c04
#define DAT_10009c04 (*(uint *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef DAT_10009c08
#define DAT_10009c08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10009c10
#define DAT_10009c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e54U)))
#undef DAT_10009c18
#define DAT_10009c18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e5cU)))
#undef DAT_10009c20
#define DAT_10009c20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e64U)))
#undef _DAT_10009c08
#define _DAT_10009c08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef _DAT_10009c10
#define _DAT_10009c10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e54U)))
#undef str_10002e21
#define str_10002e21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10002e2e
#define str_10002e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72U)))
#undef str_10002e3d
#define str_10002e3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81U)))
#define abStack_47c (*(byte (*)[1148])(pf_stack_frame + 20))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 1044))
#define local_470 (*(char *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    _DAT_10009c08 = 0;
    _DAT_10009c10 = 0;
    DAT_10009c04 = 0;
    DAT_10009c00 = 0;
    DAT_10009c18 = 0;
    recovered_10000734((undefined1 *)&DAT_10009c20,0x20);
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      iVar5 = 0;
      for (uVar10 = 0; uVar10 != 8; uVar10 = uVar10 + 1) {
        for (uVar12 = 0; uVar12 != 0x20; uVar12 = uVar12 + 1) {
          uVar6 = recovered_100015dc(api,(ulong)(uVar10 & 0xff),(ulong)(uVar12 & 0xff),0,abStack_47c
                                    );
          if ((int)uVar6 != 0) {
            uVar6 = recovered_1000074c(api,abStack_47c);
            iVar5 = (int)uVar6 + iVar5;
            if (local_470 < '\0') {
              for (uVar13 = 1; uVar13 != 8; uVar13 = uVar13 + 1) {
                uVar6 = recovered_100015dc(api,(ulong)(uVar10 & 0xff),(ulong)(uVar12 & 0xff),
                                           (ulong)(uVar13 & 0xff),abStack_7c);
                if ((int)uVar6 != 0) {
                  uVar6 = recovered_1000074c(api,abStack_7c);
                  iVar5 = (int)uVar6 + iVar5;
                }
              }
            }
          }
        }
      }
      if ((iVar5 != 0) && (uVar7 = (ulong)DAT_10009c04, DAT_10009c04 != 0)) {
        iVar11 = 0;
        iVar5 = 0;
        bVar9 = 0;
        piVar8 = &DAT_100080a8;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (piVar8[-2] != 0) {
            iVar11 = iVar11 + 1;
          }
          bVar1 = bVar9 | 2;
          if (piVar8[-1] == 0) {
            bVar1 = bVar9;
          }
          bVar9 = bVar1 | *piVar8 != 0;
          iVar5 = iVar5 + (uint)(piVar8[-1] != 0 || *piVar8 != 0);
          piVar8 = piVar8 + 0x1c0;
        }
        recovered_1000152c(abStack_47c,0x400,&DAT_10002e20);
        if ((*(uint *)((long)api + 0xc) != 0) &&
           (iVar4 = (*(code *)(ulong)*(uint *)((long)api + 0xc))
                              (&DAT_10002e20,str_10002e21,abStack_47c), iVar4 != 0)) {
          bVar2 = true;
          if ((iVar5 != 0) && ((bVar9 != 0 && (*(uint *)((long)api + 0x20) != 0)))) {
            iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0x20))
                              (recovered_1000153c,bVar9,str_10002e2e);
            bVar2 = iVar5 == 0;
          }
          if ((((iVar11 == 0) || (*(int *)api != 0x54584b57)) || (*(uint *)((long)api + 8) < 0xa8))
             || (*(uint *)((long)api + 0xa4) == 0)) {
            bVar3 = true;
          }
          else {
            iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0xa4))(recovered_100015ac,3,str_10002e3d)
            ;
            bVar3 = iVar5 == 0;
          }
          if (!(bool)(bVar2 & bVar3)) {
            if (*(uint *)((long)api + 0xc) != 0) {
              (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002e20,str_10002e21,abStack_47c);
            }
            return 1;
          }
        }
      }
    }
    recovered_100014e0();
  }
  return 0;
}

#undef DAT_10002e20
#undef DAT_100080a8
#undef DAT_10009c00
#undef DAT_10009c04
#undef DAT_10009c08
#undef DAT_10009c10
#undef DAT_10009c18
#undef DAT_10009c20
#undef _DAT_10009c08
#undef _DAT_10009c10
#undef str_10002e21
#undef str_10002e2e
#undef str_10002e3d
#undef abStack_47c
#undef abStack_7c
#undef local_470

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000734
 */

void recovered_10000734(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


#undef DAT_10002e20
#define DAT_10002e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10002f0f
#define DAT_10002f0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef DAT_10002f15
#define DAT_10002f15 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_10002f1a
#define DAT_10002f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15eU)))
#undef DAT_10002f1d
#define DAT_10002f1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x161U)))
#undef DAT_10002f1f
#define DAT_10002f1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x52bcU)))
#undef DAT_10008088
#define DAT_10008088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ccU)))
#undef DAT_1000808c
#define DAT_1000808c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x52d0U)))
#undef DAT_1000808e
#define DAT_1000808e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x52d2U)))
#undef DAT_1000809c
#define DAT_1000809c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e0U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e4U)))
#undef DAT_100080a4
#define DAT_100080a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e8U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ecU)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f0U)))
#undef DAT_100080b0
#define DAT_100080b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f4U)))
#undef DAT_100080b4
#define DAT_100080b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f8U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52fcU)))
#undef DAT_10008300
#define DAT_10008300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5544U)))
#undef DAT_10008302
#define DAT_10008302 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5546U)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5644U)))
#undef DAT_10008600
#define DAT_10008600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10009c04
#define DAT_10009c04 (*(uint *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef str_10002e79
#define str_10002e79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_10002e87
#define str_10002e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbU)))
#undef str_10002e90
#define str_10002e90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_10002ea3
#define str_10002ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7U)))
#undef str_10002eb4
#define str_10002eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8U)))
#undef str_10002ec7
#define str_10002ec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10bU)))
#undef str_10002ed8
#define str_10002ed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cU)))
#undef str_10002eea
#define str_10002eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
#undef str_10002efc
#define str_10002efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#define acStack_900 (*(char (*)[2304])(pf_stack_frame + 16))
#define uStack_500 (*(undefined8 *)(pf_stack_frame + 1040))
#define uStack_4f8 (*(undefined8 *)(pf_stack_frame + 1048))
#define uStack_4f0 (*(undefined8 *)(pf_stack_frame + 1056))
#define uStack_4e8 (*(uint *)(pf_stack_frame + 1064))
#define iStack_4e4 (*(int *)(pf_stack_frame + 1068))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 1072))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 1080))
#define auStack_4d0 (*(uint (*)[308])(pf_stack_frame + 1088))
#define uStack_4c8 (*(undefined8 *)(pf_stack_frame + 1096))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 2120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000074c
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_1000074c(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2352] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;

  uVar9 = DAT_10009c04;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return 0;
  }
  if (*(short *)(param_2 + 6) == 0x1012) {
    if (3 < DAT_10009c04) {
      return 0;
    }
  }
  else if (*(short *)(param_2 + 6) != 0x1052 || 3 < DAT_10009c04) {
    return 0;
  }
  uVar8 = (ulong)DAT_10009c04;
  lVar18 = uVar8 * 0x700;
  plVar17 = &DAT_10008000 + uVar8 * 0xe0;
  recovered_10000734((undefined1 *)plVar17,0x700);
  recovered_1000152c(acStack_900,0x400,&DAT_10002e20);
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  *plVar17 = (long)param_1;
  bVar3 = *param_2;
  *(byte *)(lVar18 + ((uintptr_t)pf_module_state+0x52d6U)) = bVar3;
  bVar4 = param_2[1];
  *(byte *)(lVar18 + ((uintptr_t)pf_module_state+0x52d7U)) = bVar4;
  bVar5 = param_2[2];
  *(byte *)(lVar18 + ((uintptr_t)pf_module_state+0x52d8U)) = bVar5;
  *(short *)(lVar18 + ((uintptr_t)pf_module_state+0x52daU)) = (short)*(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52dcU)) = 1;
  uStack_4c8 = (ulong)PF_PART4(uStack_4c8, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar11 = str_10002ed8;
  }
  else {
    uVar12 = recovered_10001728(param_1,(ulong)bVar3,(ulong)bVar4,(ulong)bVar5,4,2,(long)&uStack_4c8
                               );
    if ((int)uVar12 == 0) {
      pcVar11 = str_10002eea;
    }
    else {
      uVar14 = 0;
      for (lVar15 = 0x14; lVar15 != 0x2c; lVar15 = lVar15 + 4) {
        uVar7 = uVar14 | 1;
        if (*(uint *)(param_2 + lVar15) != 0) {
          uVar14 = uVar14 | 2;
        }
        if ((*(uint *)(param_2 + lVar15) & 1) != 0) {
          uVar14 = uVar7;
        }
      }
      lVar15 = recovered_10001c70(((uintptr_t)pf_module_state+0xaaU));
      if (lVar15 != 0) {
        uVar14 = uVar14 | 4;
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar14 = uVar14 | 2;
        }
      }
      auStack_c8[0] = (uint)uStack_4c8 | uVar14;
      uVar12 = recovered_10001c28(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                  (ulong)auStack_c8[0]);
      if ((int)uVar12 != 0) {
        recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                           (long)auStack_c8);
        if ((uVar14 & (auStack_c8[0] ^ 0xffffffff)) == 0) {
          auStack_c8[0] = 0;
          recovered_10000734((undefined1 *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x80);
          uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      0x34,1,(long)auStack_c8);
          if ((int)uVar12 != 0) {
            uVar14 = 0;
            while ((uVar14 < 0x20 && (auStack_c8[0] - 0x40 < 0xb0))) {
              auStack_4d0[0] = 0;
              auStack_4d0[1] = 0;
              uStack_4d8 = 0;
              uStack_4e0 = 0;
              uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],(ulong)(auStack_c8[0] & 0xffff),1,
                                          (long)(auStack_4d0 + 1));
              if (((int)uVar12 == 0) ||
                 (uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                              (ulong)param_2[2],
                                              (ulong)((auStack_c8[0] & 0xffff) + 1 & 0xffff),1,
                                              (long)auStack_4d0), (int)uVar12 == 0)) break;
              if ((((auStack_4d0[1] == 9) &&
                   (uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                (ulong)param_2[2],
                                                (ulong)((auStack_c8[0] & 0xffff) + 3 & 0xffff),1,
                                                (long)&uStack_4d8 + 4), (int)uVar12 != 0)) &&
                  (uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                               (ulong)param_2[2],
                                               (ulong)((auStack_c8[0] & 0xffff) + 4 & 0xffff),1,
                                               (long)&uStack_4d8), (int)uVar12 != 0)) &&
                 ((uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                               (ulong)param_2[2],
                                               (ulong)((auStack_c8[0] & 0xffff) + 8 & 0xffff),4,
                                               (long)&uStack_4e0 + 4), (int)uVar12 != 0 &&
                  (uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                               (ulong)param_2[2],
                                               (ulong)((auStack_c8[0] & 0xffff) + 0xc & 0xffff),4,
                                               (long)&uStack_4e0), (int)uVar12 != 0)))) {
                uStack_4c8 = 0;
                *(int *)(lVar18 + ((uintptr_t)pf_module_state+0x5288U)) = *(int *)(lVar18 + ((uintptr_t)pf_module_state+0x5288U)) + 1;
                if ((PF_PART4(uStack_4d8, 4) == 1) && (0x37 < (uint)uStack_4e0)) {
                  uVar12 = recovered_10001c8c(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                              (uint)uStack_4e0,&uStack_4c8);
                  if ((int)uVar12 != 0) {
                    *(ulong *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)) = uStack_4c8;
                    *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5270U)) = (uint)uStack_4d8;
                    goto LAB_10000b4c;
                  }
                }
                iVar13 = PF_PART4(uStack_4d8, 4);
                if (PF_PART4(uStack_4d8, 4) == 2 && 1 < (uint)uStack_4e0) {
                  uVar12 = recovered_10001c8c(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                              (uint)uStack_4e0,&uStack_4c8);
                  if ((int)uVar12 != 0) {
                    iStack_4e4 = 0;
                    *(ulong *)(lVar18 + ((uintptr_t)pf_module_state+0x5254U)) = uStack_4c8;
                    *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5274U)) = (uint)uStack_4d8;
                    uVar12 = recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                (ulong)param_2[2],
                                                (ulong)((auStack_c8[0] & 0xffff) + 0x10 & 0xffff),4,
                                                (long)&iStack_4e4);
                    if (((int)uVar12 == 0) || (iStack_4e4 == 0)) {
                      *(undefined8 *)(lVar18 + ((uintptr_t)pf_module_state+0x5254U)) = 0;
                    }
                    else {
                      *(int *)(lVar18 + ((uintptr_t)pf_module_state+0x5280U)) = iStack_4e4;
                      *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5284U)) = (uint)uStack_4e0;
                    }
                    goto LAB_10000b4c;
                  }
                  iVar13 = PF_PART4(uStack_4d8, 4);
                }
                if (iVar13 == 3) {
                  uVar12 = recovered_10001c8c(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                              (uint)uStack_4e0,&uStack_4c8);
                  if ((int)uVar12 != 0) {
                    *(ulong *)(lVar18 + ((uintptr_t)pf_module_state+0x525cU)) = uStack_4c8;
                    *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5278U)) = (uint)uStack_4d8;
                    goto LAB_10000b4c;
                  }
                  iVar13 = PF_PART4(uStack_4d8, 4);
                }
                if (iVar13 == 4) {
                  uVar12 = recovered_10001c8c(param_1,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                              (uint)uStack_4e0,&uStack_4c8);
                  if ((int)uVar12 != 0) {
                    *(ulong *)(lVar18 + ((uintptr_t)pf_module_state+0x5264U)) = uStack_4c8;
                    *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x526cU)) = (uint)uStack_4e0;
                    *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x527cU)) = (uint)uStack_4d8;
                  }
                }
              }
LAB_10000b4c:
              if ((auStack_4d0[0] == 0) || (auStack_4d0[0] == auStack_c8[0])) break;
              uVar14 = uVar14 + 1;
              auStack_c8[0] = auStack_4d0[0];
            }
            if (*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)) != 0) {
              uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
              auStack_c8[0] = 0;
              recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,lVar18 + ((uintptr_t)pf_module_state+0x529cU));
              *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 1;
              uVar10 = recovered_10001e68(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)));
              if ((int)uVar10 != 0) {
                *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 2;
                uVar12 = recovered_10001f28(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,1);
                if ((((int)uVar12 != 0) &&
                    (uVar12 = recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,
                                                 (long)auStack_c8), (int)uVar12 != 0)) &&
                   ((auStack_c8[0] & 0xc1) == 1)) {
                  *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 3;
                  uVar12 = recovered_10001f28(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,3);
                  if ((((int)uVar12 != 0) &&
                      (uVar12 = recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,
                                                   (long)auStack_c8), (int)uVar12 != 0)) &&
                     ((auStack_c8[0] & 0xc3) == 3)) {
                    *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 4;
                    uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0,0);
                    if ((((int)uVar12 != 0) &&
                        (uVar12 = recovered_10001f50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                     (undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x528cU))),
                        (int)uVar12 != 0)) &&
                       ((uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0,1),
                        (int)uVar12 != 0 &&
                        ((uVar12 = recovered_10001f50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                      (undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x5290U))),
                         (int)uVar12 != 0 && ((*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5290U)) & 1) != 0)))))) {
                      *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x5294U)) = 0;
                      *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5298U)) = *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5290U)) & 3;
                      *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 5;
                      uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),8,0);
                      if (((int)uVar12 != 0) &&
                         (((uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0xc,
                                                        (ulong)*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5294U))),
                           (int)uVar12 != 0 &&
                           (uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),8,1),
                           (int)uVar12 != 0)) &&
                          (uVar12 = recovered_10001f3c(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0xc,
                                                       (ulong)*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5298U))),
                          (int)uVar12 != 0)))) {
                        recovered_10001f98(param_1);
                        auStack_c8[0] = 0xb;
                        *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 6;
                        uVar12 = recovered_10001f28(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,0xb)
                        ;
                        if ((((int)uVar12 != 0) &&
                            (uVar12 = recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14
                                                         ,lVar18 + ((uintptr_t)pf_module_state+0x52a0U)), (int)uVar12 != 0))
                           && ((*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x52a0U)) & 200) == 8)) {
                          *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 7;
                          uVar12 = recovered_10001b04(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x12,
                                                      (undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a8U)));
                          if ((((int)uVar12 != 0) &&
                              (uVar12 = recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                           0x15,lVar18 + ((uintptr_t)pf_module_state+0x52c4U)),
                              (int)uVar12 != 0)) &&
                             ((uVar12 = recovered_10001aa4(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                           0x16,0), (int)uVar12 != 0 &&
                              ((uVar12 = recovered_10001b04(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                            0x18,(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52acU))
                                                           ), (int)uVar12 != 0 &&
                               (uVar12 = recovered_10001b04(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),
                                                            0x1c,(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52b0U))
                                                           ), (int)uVar12 != 0)))))) {
                            uVar12 = recovered_10001b04(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x1e,
                                                        (undefined4 *)&uStack_4c8);
                            if ((int)uVar12 != 0) {
                              *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x52b4U)) = (uint)uStack_4c8;
                              uVar10 = *(ulong *)(lVar18 + ((uintptr_t)pf_module_state+0x5254U));
                              if ((((uVar10 != 0) && (*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5280U)) != 0)) &&
                                  (1 < *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5284U)))) &&
                                 ((uVar16 = (ulong)*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5280U)) *
                                            (uStack_4c8 & 0xffffffff), !CARRY8(uVar10,uVar16) &&
                                  (uVar16 <= (ulong)*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5284U)) - 2)))) {
                                (&DAT_10008078)[uVar8 * 0xe0] = uVar16 + uVar10;
                              }
                            }
                            *(undefined4 *)(lVar18 + ((uintptr_t)pf_module_state+0x52a4U)) = 8;
                            uVar14 = 0xc0000000;
                            if ((*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x5298U)) & 2) != 0) {
                              uVar14 = 0x80000000;
                            }
                            (&DAT_1000809c)[uVar8 * 0x1c0] =
                                 uVar14 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                                 (uint)param_2[1] << 0xb;
                            uVar14 = *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x52acU)) - 1;
                            if (((uVar14 < (*(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x52acU)) ^ uVar14)) &&
                                (*(int *)(lVar18 + ((uintptr_t)pf_module_state+0x52b0U)) == 0)) &&
                               ((&DAT_10008078)[uVar8 * 0xe0] != 0)) {
                              auStack_c8[0] = 0;
                              auStack_4d0[0] = 0;
                              auStack_4d0[1] = 0;
                              uStack_4d8 = 0;
                              uVar12 = recovered_100020a0(plVar17,0x11,1,(undefined1 *)&uStack_4c8,
                                                          auStack_c8);
                              if ((int)uVar12 != 0) {
                                uVar14 = 1;
                                while ((uVar14 != 0x100 &&
                                       ((auStack_c8[0] <= uVar14 >> 3 ||
                                        ((*(byte *)((long)&uStack_4c8 + (ulong)(uVar14 >> 3)) >>
                                          (ulong)(uVar14 & 7) & 1) == 0))))) {
                                  uVar14 = uVar14 + 1;
                                }
                                (&DAT_100080a0)[uVar8 * 0x1c0] = (uint)(uVar14 < 0x100);
                              }
                              uVar12 = recovered_100020a0(plVar17,0x11,2,(undefined1 *)&uStack_4c8,
                                                          auStack_c8);
                              if ((int)uVar12 == 0) {
                                uVar14 = 0;
                              }
                              else {
                                uVar14 = (uint)((((byte)uStack_4c8 ^ 0xff) & 3) == 0 &&
                                               auStack_c8[0] != 0);
                              }
                              (&DAT_100080a4)[uVar8 * 0x1c0] = uVar14;
                              uVar12 = recovered_100020a0(plVar17,0x11,3,(undefined1 *)&uStack_4c8,
                                                          auStack_c8);
                              if (((((int)uVar12 != 0) && (auStack_c8[0] != 0)) &&
                                  ((((byte)uStack_4c8 ^ 0xff) & 3) == 0)) &&
                                 (((uVar12 = recovered_100020a0(plVar17,0x12,0,
                                                                (undefined1 *)&uStack_4c8,auStack_c8
                                                               ), (int)uVar12 != 0 &&
                                   (uVar12 = recovered_10002244((undefined4 *)&uStack_4c8,
                                                                auStack_c8[0],
                                                                (int *)(auStack_4d0 + 1),
                                                                (undefined4 *)
                                                                ((long)&uStack_4d8 + 4)),
                                   (int)uVar12 != 0)) &&
                                  ((uVar12 = recovered_100020a0(plVar17,0x12,1,
                                                                (undefined1 *)&uStack_4c8,auStack_c8
                                                               ), (int)uVar12 != 0 &&
                                   (uVar12 = recovered_10002244((undefined4 *)&uStack_4c8,
                                                                auStack_c8[0],(int *)auStack_4d0,
                                                                (undefined4 *)&uStack_4d8),
                                   (int)uVar12 != 0)))))) {
                                (&DAT_100080a8)[uVar8 * 0x1c0] = 1;
                                (&DAT_100080ac)[uVar8 * 0x1c0] = auStack_4d0[1];
                                (&DAT_100080b0)[uVar8 * 0x1c0] = auStack_4d0[0];
                                (&DAT_100080b4)[uVar8 * 0x1c0] = PF_PART4(uStack_4d8, 4);
                                (&DAT_100080b8)[uVar8 * 0x1c0] = (uint)uStack_4d8;
                              }
                              recovered_10001f28((int *)*plVar17,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x5264U)),0,0)
                              ;
                              recovered_10001f28((int *)*plVar17,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x5264U)),1,0)
                              ;
                              if ((((&DAT_100080a0)[uVar8 * 0x1c0] != 0) ||
                                  ((&DAT_100080a4)[uVar8 * 0x1c0] != 0)) ||
                                 ((&DAT_100080a8)[uVar8 * 0x1c0] != 0)) {
                                uVar14 = *(uint *)(lVar18 + ((uintptr_t)pf_module_state+0x52acU));
                                if (0x1f < uVar14) {
                                  uVar14 = 0x20;
                                }
                                (&DAT_1000808c)[uVar8 * 0x380] = (short)uVar14;
                                puVar1 = (undefined1 *)(lVar18 + ((uintptr_t)pf_module_state+0x5344U));
                                recovered_10000734(puVar1,0x200);
                                recovered_10000734(&DAT_10008300 + lVar18,0x46);
                                recovered_10000734(&DAT_10008400 + lVar18,0x106);
                                puVar2 = &DAT_10008600 + lVar18;
                                recovered_10000734(puVar2,0x100);
                                uVar12 = recovered_10001a1c(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                                 [uVar8 * 0x1c0],
                                                            (long)puVar1,0x200,(long)&uStack_4e8,
                                                            (long)&uStack_4f0 + 4);
                                if (((((int)uVar12 != 0) &&
                                     (uVar12 = recovered_10001a1c(param_1,(ulong)(uint)(&
                                                  DAT_1000809c)[uVar8 * 0x1c0],
                                                  (long)(&DAT_10008300 + lVar18),0x46,
                                                  (long)&uStack_4f0,(long)&uStack_4f8 + 4),
                                     (int)uVar12 != 0)) &&
                                    (uVar12 = recovered_10001a1c(param_1,(ulong)(uint)(&DAT_1000809c
                                                                                      )[uVar8 *
                                                  0x1c0],(long)(&DAT_10008400 + lVar18),0x106,
                                                  (long)&uStack_4f8,(long)&uStack_500 + 4),
                                    (int)uVar12 != 0)) &&
                                   ((((uStack_4e8 & 0xf) == 0 && ((uStack_4f0 & 1) == 0)) &&
                                    ((uStack_4f8 & 3) == 0)))) {
                                  puVar19 = puVar2;
                                  puVar20 = (undefined1 *)((ulong)uVar9 * 0x700 + ((uintptr_t)pf_module_state+0x5549U));
                                  puVar21 = puVar1;
                                  for (uVar10 = 0; uVar6 = (&DAT_1000808c)[uVar8 * 0x380],
                                      uVar10 < uVar6; uVar10 = uVar10 + 1) {
                                    uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
                                    auStack_c8[0] = 0;
                                    uVar12 = recovered_10001a1c(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                                     [uVar8 * 0x1c0]
                                                                ,(long)puVar19,8,(long)&uStack_4c8,
                                                                auStack_c8);
                                    if ((int)uVar12 == 0) goto LAB_100008ac;
                                    *puVar21 = (char)uStack_4c8;
                                    puVar21[1] = (char)(uStack_4c8 >> 8);
                                    puVar21[2] = (char)(uStack_4c8 >> 0x10);
                                    puVar21[3] = (char)(uStack_4c8 >> 0x18);
                                    puVar21[4] = (char)auStack_c8[0];
                                    puVar21[5] = (char)(auStack_c8[0] >> 8);
                                    puVar21[6] = (char)(auStack_c8[0] >> 0x10);
                                    puVar21[7] = (char)(auStack_c8[0] >> 0x18);
                                    *(undefined4 *)(puVar21 + 8) = 8;
                                    *(undefined2 *)(puVar21 + 0xc) = 2;
                                    puVar20[-1] = (char)uVar10;
                                    puVar19 = puVar19 + 8;
                                    *puVar20 = (char)(uVar10 >> 8);
                                    puVar21 = puVar21 + 0x10;
                                    puVar20 = puVar20 + 2;
                                  }
                                  (&DAT_1000808e)[uVar8 * 0x380] = uVar6;
                                  *(char *)(&DAT_10008302 + uVar8 * 0x380) = (char)uVar6;
                                  *(char *)((long)&DAT_10008302 + lVar18 + 1) = (char)(uVar6 >> 8);
                                  recovered_10001a68(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                          [uVar8 * 0x1c0],puVar1,
                                                     0x200);
                                  recovered_10001a68(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                          [uVar8 * 0x1c0],
                                                     &DAT_10008300 + lVar18,0x46);
                                  recovered_10001a68(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                          [uVar8 * 0x1c0],
                                                     &DAT_10008400 + lVar18,0x106);
                                  recovered_10001a68(param_1,(ulong)(uint)(&DAT_1000809c)
                                                                          [uVar8 * 0x1c0],puVar2,
                                                     0x100);
                                  uVar12 = recovered_10001aa4(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU))
                                                              ,0x16,0);
                                  if ((((int)uVar12 != 0) &&
                                      (uVar12 = recovered_10001aa4(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x18,
                                                  (ulong)(ushort)(&DAT_1000808c)[uVar8 * 0x380]),
                                      (int)uVar12 != 0)) &&
                                     ((uVar10 = recovered_10001ab8(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x20,(ulong)uStack_4e8,
                                                  uStack_4f0 >> 0x20), (int)uVar10 != 0 &&
                                      ((((uVar10 = recovered_10001ab8(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x28,uStack_4f0 & 0xffffffff,
                                                  uStack_4f8 >> 0x20), (int)uVar10 != 0 &&
                                         (uVar10 = recovered_10001ab8(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x30,uStack_4f8 & 0xffffffff,
                                                  uStack_500 >> 0x20), (int)uVar10 != 0)) &&
                                        (uVar12 = recovered_10001aa4(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x1c,1), (int)uVar12 != 0)) &&
                                       ((uVar12 = recovered_10001b04(param_1,*(long *)(lVar18 +
                                                  ((uintptr_t)pf_module_state+0x524cU)),0x1c,(undefined4 *)&uStack_500),
                                        (int)uVar12 != 0 && ((int)uStack_500 != 0)))))))) {
                                    lVar18 = *(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU));
                                    uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
                                    if (((lVar18 != 0) &&
                                        ((uVar12 = recovered_10001e50(param_1,lVar18,0x14,
                                                                      (long)&uStack_4c8),
                                         (int)uVar12 != 0 && (((uint)uStack_4c8 & 200) == 8)))) &&
                                       ((uVar12 = recovered_10001f28(param_1,lVar18,0x14,
                                                                     (ulong)((uint)uStack_4c8 | 4)),
                                        (int)uVar12 != 0 &&
                                        (((uVar12 = recovered_10001e50(param_1,lVar18,0x14,
                                                                       (long)&uStack_4c8),
                                          (int)uVar12 != 0 && (((uint)uStack_4c8 & 0xc4) == 4)) &&
                                         (uVar12 = recovered_10001aa4(param_1,(&DAT_10008078)
                                                                              [uVar8 * 0xe0],0,0),
                                         (int)uVar12 != 0)))))) {
                                      (&DAT_10008088)[uVar8 * 0x1c0] = 1;
                                      recovered_1000152c(acStack_900,0x400,&DAT_10002e20);
                                      if ((&DAT_100080a0)[uVar8 * 0x1c0] != 0) {
                                        recovered_10001b4c((long)acStack_900,0x400,str_10002e87);
                                      }
                                      if ((&DAT_100080a4)[uVar8 * 0x1c0] != 0) {
                                        pcVar11 = str_10002ea3;
                                        if (acStack_900[0] != '\0') {
                                          pcVar11 = str_10002e90;
                                        }
                                        recovered_10001b4c((long)acStack_900,0x400,pcVar11);
                                      }
                                      if ((&DAT_100080a8)[uVar8 * 0x1c0] != 0) {
                                        pcVar11 = str_10002ec7;
                                        if (acStack_900[0] != '\0') {
                                          pcVar11 = str_10002eb4;
                                        }
                                        recovered_10001b4c((long)acStack_900,0x400,pcVar11);
                                      }
                                      DAT_10009c04 = DAT_10009c04 + 1;
                                      pcVar11 = recovered_10001774((long)param_2);
                                      recovered_1000152c((undefined1 *)auStack_c8,0x60,str_10002e79)
                                      ;
                                      recovered_10001b4c((long)auStack_c8,0x60,&DAT_10002f0f);
                                      recovered_100022e8((long)auStack_c8,0x60,(uint)*param_2,2);
                                      recovered_10001b4c((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0x155U));
                                      recovered_100022e8((long)auStack_c8,0x60,(uint)param_2[1],2);
                                      recovered_10001b4c((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0x157U));
                                      recovered_10002360((long)auStack_c8,0x60,(uint)param_2[2]);
                                      recovered_1000152c((undefined1 *)&uStack_4c8,0x400,
                                                         &DAT_10002f15);
                                      recovered_100022e8((long)&uStack_4c8,0x400,(uint)*param_2,2);
                                      recovered_10001b4c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x155U))
                                      ;
                                      recovered_100022e8((long)&uStack_4c8,0x400,(uint)param_2[1],2)
                                      ;
                                      recovered_10001b4c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x157U))
                                      ;
                                      recovered_10002360((long)&uStack_4c8,0x400,(uint)param_2[2]);
                                      recovered_10001b4c((long)&uStack_4c8,0x400,&DAT_10002f1a);
                                      recovered_100022e8((long)&uStack_4c8,0x400,
                                                         (uint)*(ushort *)(param_2 + 4),4);
                                      recovered_10001b4c((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0x155U))
                                      ;
                                      recovered_100022e8((long)&uStack_4c8,0x400,
                                                         (uint)*(ushort *)(param_2 + 6),4);
                                      recovered_10001b4c((long)&uStack_4c8,0x400,&DAT_10002f1d);
                                      if (acStack_900[0] != '\0') {
                                        recovered_10001b4c((long)&uStack_4c8,0x400,&DAT_10002f1f);
                                        recovered_10001b4c((long)&uStack_4c8,0x400,acStack_900);
                                      }
                                      if (param_1[3] != 0) {
                                        (*(code *)(ulong)(uint)param_1[3])
                                                  (auStack_c8,pcVar11,&uStack_4c8);
                                      }
                                      return 1;
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_100008ac;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar12 = recovered_10001e50(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,
                                          (long)auStack_c8);
              if (((int)uVar12 != 0) && (auStack_c8[0] != 0)) {
                recovered_10001f28(param_1,*(long *)(lVar18 + ((uintptr_t)pf_module_state+0x524cU)),0x14,
                                   (ulong)(auStack_c8[0] | 0x80));
              }
            }
          }
        }
        goto LAB_100008ac;
      }
      pcVar11 = str_10002efc;
    }
  }
  recovered_10001b4c((long)acStack_900,0x400,pcVar11);
LAB_100008ac:
  recovered_10001ba4(plVar17);
  return 0;
}

#undef DAT_10002e20
#undef DAT_10002f0f
#undef DAT_10002f15
#undef DAT_10002f1a
#undef DAT_10002f1d
#undef DAT_10002f1f
#undef DAT_10008000
#undef DAT_10008078
#undef DAT_10008088
#undef DAT_1000808c
#undef DAT_1000808e
#undef DAT_1000809c
#undef DAT_100080a0
#undef DAT_100080a4
#undef DAT_100080a8
#undef DAT_100080ac
#undef DAT_100080b0
#undef DAT_100080b4
#undef DAT_100080b8
#undef DAT_10008300
#undef DAT_10008302
#undef DAT_10008400
#undef DAT_10008600
#undef DAT_10009c04
#undef str_10002e79
#undef str_10002e87
#undef str_10002e90
#undef str_10002ea3
#undef str_10002eb4
#undef str_10002ec7
#undef str_10002ed8
#undef str_10002eea
#undef str_10002efc
#undef acStack_900
#undef uStack_500
#undef uStack_4f8
#undef uStack_4f0
#undef uStack_4e8
#undef iStack_4e4
#undef uStack_4e0
#undef uStack_4d8
#undef auStack_4d0
#undef uStack_4c8
#undef auStack_c8

#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10009c04
#define DAT_10009c04 (*(uint *)(((uintptr_t)pf_module_state + 0x6e48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

void recovered_100014e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;

  plVar1 = &DAT_10008000;
  for (uVar2 = 0; uVar2 < DAT_10009c04; uVar2 = uVar2 + 1) {
    recovered_10001ba4(plVar1);
    plVar1 = plVar1 + 0xe0;
  }
  DAT_10009c04 = 0;
  return;
}

#undef DAT_10008000
#undef DAT_10009c04

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000152c
 */

void recovered_1000152c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001c70((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#undef DAT_10009c00
#define DAT_10009c00 (*(char *)(((uintptr_t)pf_module_state + 0x6e44U)))
#undef DAT_10009c18
#define DAT_10009c18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e5cU)))
#undef DAT_10009c20
#define DAT_10009c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e64U)))
#undef DAT_10009c28
#define DAT_10009c28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e6cU)))
#undef DAT_10009c30
#define DAT_10009c30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e74U)))
#undef DAT_10009c38
#define DAT_10009c38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e7cU)))
#undef _DAT_10009c20
#define _DAT_10009c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e64U)))
#undef _DAT_10009c28
#define _DAT_10009c28 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e6cU)))
#undef _DAT_10009c30
#define _DAT_10009c30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e74U)))
#undef _DAT_10009c38
#define _DAT_10009c38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000153c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000153c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != (undefined8 *)0x0) {
    recovered_100024b4();
    recovered_100024e4();
    uVar1 = _DAT_10009c20;
    bVar2 = DAT_10009c00 == '\x01';
    if (bVar2) {
      param_1[1] = _DAT_10009c28;
      *param_1 = uVar1;
      param_1[3] = _DAT_10009c38;
      param_1[2] = _DAT_10009c30;
      _DAT_10009c30 = 0;
      DAT_10009c00 = '\0';
    }
    DAT_10009c18 = 0;
  }
  return bVar2;
}

#undef DAT_10009c00
#undef DAT_10009c18
#undef DAT_10009c20
#undef DAT_10009c28
#undef DAT_10009c30
#undef DAT_10009c38
#undef _DAT_10009c20
#undef _DAT_10009c28
#undef _DAT_10009c30
#undef _DAT_10009c38

#undef DAT_10009c18
#define DAT_10009c18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015ac
 */

int recovered_100015ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_100024b4();
  iVar1 = recovered_10002bf4();
  if (iVar1 == 0) {
    recovered_100024e4();
    iVar1 = recovered_10002bf4();
  }
  DAT_10009c18 = 0;
  return iVar1;
}

#undef DAT_10009c18

#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015dc
 */

undefined8
recovered_100015dc(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001728(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001728(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001728(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001728(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
        if ((int)uVar2 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)(param_5 + 4) = PF_PART4(local_48, 4);
        *(ushort *)(param_5 + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        param_5[9] = (char)((ulong)local_48 >> 0x10);
        *param_5 = (char)param_2;
        param_5[1] = (char)param_3;
        param_5[2] = (char)param_4;
        param_5[8] = (char)((ulong)local_48 >> 0x18);
        param_5[0xc] = PF_PART1(local_4c, 2);
        for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
          uStack_50 = 0;
          uVar2 = recovered_10001728(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),4,(long)&uStack_50);
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)(param_5 + lVar3 * 4 + 0x14) = uVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001728
 */

undefined8
recovered_10001728(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10003057
#define DAT_10003057 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1000305c
#define DAT_1000305c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_10003061
#define DAT_10003061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_10003066
#define DAT_10003066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_10002f22
#define str_10002f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10002f2d
#define str_10002f2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002f3c
#define str_10002f3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_10002f4d
#define str_10002f4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x191U)))
#undef str_10002f60
#define str_10002f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_10002f73
#define str_10002f73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b7U)))
#undef str_10002f83
#define str_10002f83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_10002f92
#define str_10002f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d6U)))
#undef str_10002fa1
#define str_10002fa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_10002fb2
#define str_10002fb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_10002fbd
#define str_10002fbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_10002fc9
#define str_10002fc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_10002fd3
#define str_10002fd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_10002fdc
#define str_10002fdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10002fe7
#define str_10002fe7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22bU)))
#undef str_10002ff0
#define str_10002ff0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x234U)))
#undef str_10002ff8
#define str_10002ff8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_10003001
#define str_10003001 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_10003008
#define str_10003008 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_1000301b
#define str_1000301b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
#undef str_1000302e
#define str_1000302e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x272U)))
#undef str_10003041
#define str_10003041 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_1000306b
#define str_1000306b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_10003076
#define str_10003076 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_1000307f
#define str_1000307f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001774
 */

char * recovered_10001774(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001988_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10002fdc;
    }
LAB_1000195c:
    pcVar4 = str_10003008;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_1000302e;
      break;
    case 2:
      pcVar4 = str_1000301b;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10003041;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100019bc:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_1000307f;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_1000305c;
        }
        pcVar1 = str_1000306b;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10003066;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003061;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10003076;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003057;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001988_caseD_5:
      pcVar4 = str_10002f22;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10002fd3;
      }
      goto LAB_1000195c;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100018d0:
        return str_10003001;
      }
      goto LAB_1000195c;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100018d0;
      goto LAB_1000195c;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10002ff8;
      }
      goto LAB_1000195c;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10002fe7;
      }
      goto LAB_1000195c;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10002fbd;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100019bc;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10002fc9;
      }
      goto LAB_1000195c;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10002ff0;
      }
      goto LAB_1000195c;
    }
    if (sVar3 != 0x1af4) goto LAB_1000195c;
    pcVar4 = str_10002f2d;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001818_caseD_1042:
      pcVar4 = str_10002f3c;
      break;
    case 0x1043:
switchD_10001818_caseD_1043:
      pcVar4 = str_10002f60;
      break;
    case 0x1044:
switchD_10001818_caseD_1044:
      pcVar4 = str_10002f83;
      break;
    case 0x1045:
switchD_10001818_caseD_1045:
      pcVar4 = str_10002f4d;
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_10001818_caseD_1046:
      pcVar4 = str_10002fb2;
      break;
    case 0x1048:
switchD_10001818_caseD_1048:
      pcVar4 = str_10002f73;
      break;
    case 0x1050:
      pcVar4 = str_10002f92;
      break;
    case 0x1052:
      pcVar4 = str_10002fa1;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001818_caseD_1042;
      case 0x1002:
        goto switchD_10001818_caseD_1045;
      case 0x1003:
        goto switchD_10001818_caseD_1043;
      case 0x1004:
        goto switchD_10001818_caseD_1048;
      case 0x1005:
        goto switchD_10001818_caseD_1044;
      default:
        goto switchD_10001818_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10003057
#undef DAT_1000305c
#undef DAT_10003061
#undef DAT_10003066
#undef str_10002f22
#undef str_10002f2d
#undef str_10002f3c
#undef str_10002f4d
#undef str_10002f60
#undef str_10002f73
#undef str_10002f83
#undef str_10002f92
#undef str_10002fa1
#undef str_10002fb2
#undef str_10002fbd
#undef str_10002fc9
#undef str_10002fd3
#undef str_10002fdc
#undef str_10002fe7
#undef str_10002ff0
#undef str_10002ff8
#undef str_10003001
#undef str_10003008
#undef str_1000301b
#undef str_1000302e
#undef str_10003041
#undef str_1000306b
#undef str_10003076
#undef str_1000307f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a1c
 */

undefined8
recovered_10001a1c(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a68
 */

void recovered_10001a68(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa4
 */

undefined8 recovered_10001aa4(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab8
 */

ulong recovered_10001ab8(int *param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10001f3c(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar2 = recovered_10001f3c(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    uVar1 = (ulong)((int)uVar2 != 0);
  }
  return uVar1;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b04
 */

undefined8 recovered_10001b04(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10001fc8(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b4c
 */

void recovered_10001b4c(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001c70(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba4
 */

void recovered_10001ba4(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;

  if (param_1 == (long *)0x0) {
    return;
  }
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    if (param_1[1] == 0) {
      bVar2 = false;
    }
    else {
      uVar4 = recovered_10001e68(piVar3,param_1[1]);
      bVar2 = (int)uVar4 == 0;
      piVar3 = (int *)*param_1;
      if (piVar3 == (int *)0x0) goto LAB_10001c0c;
    }
    if ((int)param_1[0x13] != 0) {
      uVar1 = *(ushort *)((long)param_1 + 0x96) & 0xfffffffb;
      if (!bVar2) {
        uVar1 = (uint)*(ushort *)((long)param_1 + 0x96);
      }
      recovered_10001c28(piVar3,(ulong)*(byte *)((long)param_1 + 0x92),
                         (ulong)*(byte *)((long)param_1 + 0x93),
                         (ulong)*(byte *)((long)param_1 + 0x94),(ulong)uVar1);
    }
  }
LAB_10001c0c:
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c28
 */

undefined8
recovered_10001c28(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c70
 */

long recovered_10001c70(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


#define uStack_54 (*(uint *)(pf_stack_frame + 28))
#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c8c
 */

undefined8
recovered_10001c8c(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;

  if (CARRY4(param_5,param_4)) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (5 < param_3) {
    return 0;
  }
  if (param_6 == (ulong *)0x0) {
    return 0;
  }
  local_58 = 0;
  if ((((param_3 == 0) || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)) &&
      (local_5c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14), local_5c != 0)) &&
     ((local_5c & 1) == 0)) {
    recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                       (ulong)(param_3 * 4 + 0x10 & 0xfffc),4,(long)&local_5c);
    if ((local_5c & 7) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_58 = *(int *)(param_2 + (ulong)(param_3 + 1) * 4 + 0x14);
      recovered_10001728(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                         (ulong)(param_3 * 4 + 0x14 & 0xffff),4,(long)&local_58);
      iVar1 = local_58;
    }
    else {
      iVar1 = 0;
    }
    uVar4 = 0xfffffff0;
    if ((local_5c & 1) != 0) {
      uVar4 = 0xfffffffc;
    }
    if ((param_5 + param_4 != 0) && ((uVar4 & local_5c) != 0 || iVar1 != 0)) {
      *param_6 = 0;
      uStack_54 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
          if (iVar1 != 0) {
            return 0;
          }
          if ((uint)param_1[2] < 0x68) {
            return 0;
          }
          if (param_1[0x19] == 0) {
            return 0;
          }
          iVar1 = (*(code *)(ulong)(uint)param_1[0x19])
                            (uVar4 & local_5c,0,param_5 + param_4,&uStack_54);
          if (iVar1 == 0) {
            return 0;
          }
          uVar3 = (ulong)uStack_54;
        }
        else {
          uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar3 = *param_6;
        }
        *param_6 = uVar3 + param_4;
        return 1;
      }
    }
  }
  return 0;
}

#undef uStack_54
#undef local_5c
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e50
 */

undefined8 recovered_10001e50(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e68
 */

ulong recovered_10001e68(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar1 = 0;
  local_34 = 0xff;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (uVar1 = recovered_10001f28(param_1,param_2,0x14,0), (int)uVar1 != 0)) {
    recovered_10001f98(param_1);
    uVar3 = 0;
    while ((uVar3 != 1000 &&
           ((uVar2 = recovered_10001e50(param_1,param_2,0x14,(long)&local_34), (int)uVar2 == 0 ||
            (local_34 != 0))))) {
      if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) && (param_1[0xc] != 0)) {
        (*(code *)(ulong)(uint)param_1[0xc])(10);
      }
      uVar3 = uVar3 + 1;
    }
    uVar1 = (ulong)(uVar3 < 1000);
  }
  return uVar1;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f28
 */

undefined8 recovered_10001f28(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f3c
 */

undefined8 recovered_10001f3c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f50
 */

undefined8 recovered_10001f50(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_10001fc8(param_1,param_2 + 4,4,(long)&uStack_24), (int)uVar1 != 0)) {
    *param_3 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f98
 */

void recovered_10001f98(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fc8
 */

undefined8 recovered_10001fc8(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002038
 */

undefined8 recovered_10002038(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#define uStack_70 (*(undefined4 *)(pf_stack_frame + 16))
#define local_6c (*(uint *)(pf_stack_frame + 20))
#define local_68 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a0
 */

undefined8
recovered_100020a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  uint *param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;

  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  uVar3 = 0;
  if ((param_4 != (undefined1 *)0x0) && (*param_1 != 0)) {
    if ((param_1[4] == 0) || (*(uint *)(param_1 + 5) < 9)) {
LAB_10002100:
      uVar3 = 0;
    }
    else {
      iVar6 = 0;
      uVar1 = *(uint *)(param_1 + 5) - 8;
      do {
        if (iVar6 == 4) goto LAB_10002100;
        local_68 = 0;
        local_6c = 0;
        recovered_10000734(param_4,0x80);
        uVar3 = recovered_10001e50((int *)*param_1,param_1[1],0x15,(long)&local_68 + 4);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        uVar3 = recovered_10001f28((int *)*param_1,param_1[4],0,param_2);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        uVar3 = recovered_10001f28((int *)*param_1,param_1[4],1,param_3);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        recovered_10001f98((int *)*param_1);
        uVar3 = recovered_10001e50((int *)*param_1,param_1[4],2,(long)&local_6c);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        uVar4 = uVar1;
        if (local_6c <= uVar1) {
          uVar4 = local_6c;
        }
        if (0x7f < uVar4) {
          uVar4 = 0x80;
        }
        uVar5 = 8;
        puVar2 = param_4;
        for (uVar7 = (ulong)uVar4; uVar7 != 0; uVar7 = uVar7 - 1) {
          uStack_70 = 0;
          uVar3 = recovered_10001e50((int *)*param_1,param_1[4],uVar5,(long)&uStack_70);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          *puVar2 = (char)uStack_70;
          uVar5 = (ulong)((int)uVar5 + 1);
          puVar2 = puVar2 + 1;
        }
        recovered_10001f98((int *)*param_1);
        uVar3 = recovered_10001e50((int *)*param_1,param_1[1],0x15,(long)&local_68);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((param_5 != (uint *)0x0) && (PF_PART4(local_68, 4) == (int)local_68)) {
          *param_5 = uVar4;
          return 1;
        }
        iVar6 = iVar6 + 1;
        uVar3 = 1;
      } while (PF_PART4(local_68, 4) != (int)local_68);
    }
  }
  return uVar3;
}

#undef uStack_70
#undef local_6c
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002244
 */

undefined8 recovered_10002244(undefined4 *param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((((param_1 != (undefined4 *)0x0) && (7 < param_2)) && (param_3 != (int *)0x0)) &&
     (param_4 != (undefined4 *)0x0)) {
    iVar1 = recovered_100022c4(param_1);
    iVar2 = recovered_100022c4(param_1 + 1);
    if (((long)iVar2 - (long)iVar1) - 0x100000000U < 0xffffffff00000001) {
      uVar3 = 0;
    }
    else {
      *param_3 = iVar1;
      *param_4 = (int)((long)iVar2 - (long)iVar1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c4
 */

undefined4 recovered_100022c4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e8
 */

void recovered_100022e8(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10002408(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002360
 */

void recovered_10002360(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001c70(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10002408(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002408
 */

void recovered_10002408(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001c70(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10003057
#define DAT_10003057 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1000305c
#define DAT_1000305c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_10003061
#define DAT_10003061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_10003066
#define DAT_10003066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_1000306b
#define str_1000306b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_10003076
#define str_10003076 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_1000307f
#define str_1000307f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002448
 */

char * recovered_10002448(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_1000307f;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_1000305c;
  }
  pcVar2 = str_1000306b;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10003066;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003061;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10003076;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003057;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10003057
#undef DAT_1000305c
#undef DAT_10003061
#undef DAT_10003066
#undef str_1000306b
#undef str_10003076
#undef str_1000307f

#undef DAT_10009c18
#define DAT_10009c18 (*(int *)(((uintptr_t)pf_module_state + 0x6e5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b4
 */

void recovered_100024b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10009c18;
      cVar1 = '\x01';
      { __typeof__(DAT_10009c18) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10009c18),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_10009c18 != 0);
  }
  return;
}

#undef DAT_10009c18

#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x52bcU)))
#undef DAT_10008088
#define DAT_10008088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ccU)))
#undef DAT_1000808c
#define DAT_1000808c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x52d0U)))
#undef DAT_1000808e
#define DAT_1000808e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x52d2U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x52d4U)))
#undef DAT_1000809c
#define DAT_1000809c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e0U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e4U)))
#undef DAT_100080a4
#define DAT_100080a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e8U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ecU)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f0U)))
#undef DAT_100080b0
#define DAT_100080b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f4U)))
#undef DAT_100080b4
#define DAT_100080b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f8U)))
#undef DAT_100080b8
#define DAT_100080b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52fcU)))
#undef DAT_10008300
#define DAT_10008300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5544U)))
#undef DAT_10008302
#define DAT_10008302 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5546U)))
#undef DAT_10008304
#define DAT_10008304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5548U)))
#undef DAT_10008400
#define DAT_10008400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5644U)))
#undef DAT_10008402
#define DAT_10008402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5646U)))
#undef DAT_10008600
#define DAT_10008600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10009c00
#define DAT_10009c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e44U)))
#undef DAT_10009c04
#define DAT_10009c04 (*(uint *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef DAT_10009c08
#define DAT_10009c08 (*(uint *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10009c0c
#define DAT_10009c0c (*(uint *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef DAT_10009c10
#define DAT_10009c10 (*(uint *)(((uintptr_t)pf_module_state + 0x6e54U)))
#undef DAT_10009c14
#define DAT_10009c14 (*(uint *)(((uintptr_t)pf_module_state + 0x6e58U)))
#undef DAT_10009c20
#define DAT_10009c20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e64U)))
#undef DAT_10009c24
#define DAT_10009c24 (*(uint *)(((uintptr_t)pf_module_state + 0x6e68U)))
#undef DAT_10009c28
#define DAT_10009c28 (*(uint *)(((uintptr_t)pf_module_state + 0x6e6cU)))
#undef DAT_10009c2c
#define DAT_10009c2c (*(uint *)(((uintptr_t)pf_module_state + 0x6e70U)))
#undef DAT_10009c30
#define DAT_10009c30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e74U)))
#undef DAT_10009c34
#define DAT_10009c34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e78U)))
#undef DAT_10009c38
#define DAT_10009c38 (*(uint *)(((uintptr_t)pf_module_state + 0x6e7cU)))
#undef DAT_10009c3c
#define DAT_10009c3c (*(uint *)(((uintptr_t)pf_module_state + 0x6e80U)))
#undef DAT_10009c40
#define DAT_10009c40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e84U)))
#undef str_1000308e
#define str_1000308e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_10003099
#define str_10003099 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_100030a4
#define str_100030a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_100030af
#define str_100030af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_100030b9
#define str_100030b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e4
 */

void recovered_100024e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short *psVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  int *piVar13;
  ushort uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  long *plVar20;
  int iVar21;

  uVar15 = 0;
  do {
    if (DAT_10009c04 <= uVar15) {
      return;
    }
    lVar5 = uVar15 * 0x700;
    plVar20 = &DAT_10008000 + uVar15 * 0xe0;
    if ((&DAT_10008088)[uVar15 * 0x1c0] != 0) {
      puVar2 = &DAT_10008400 + lVar5;
      recovered_10001a68((int *)*plVar20,(ulong)(uint)(&DAT_1000809c)[uVar15 * 0x1c0],puVar2,0x106);
      uVar7 = *(ushort *)(&DAT_10008402 + lVar5);
      uVar14 = (&DAT_10008090)[uVar15 * 0x380];
      uVar12 = (uint)(ushort)(&DAT_1000808c)[uVar15 * 0x380];
      if ((uint)(ushort)(&DAT_1000808c)[uVar15 * 0x380] < ((uint)uVar7 - (uint)uVar14 & 0xffff)) {
LAB_1000256c:
        recovered_10001ba4(plVar20);
      }
      else {
        iVar21 = 0;
        while (uVar3 = (uint)uVar14, uVar3 != uVar7) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar3 / uVar12;
          }
          uVar3 = uVar3 - uVar9 * uVar12;
          uVar9 = recovered_100022c4((undefined4 *)(puVar2 + (ulong)uVar3 * 8 + 4));
          iVar10 = recovered_100022c4((undefined4 *)(puVar2 + (ulong)uVar3 * 8 + 8));
          if ((ushort)(&DAT_1000808c)[uVar15 * 0x380] <= uVar9 || iVar10 != 8) goto LAB_1000256c;
          psVar1 = (short *)(&DAT_10008600 + (ulong)uVar9 * 8 + lVar5);
          recovered_10001a68((int *)*plVar20,(ulong)(uint)(&DAT_1000809c)[uVar15 * 0x1c0],psVar1,8);
          sVar8 = *psVar1;
          cVar4 = *(char *)((long)psVar1 + 3);
          uVar14 = psVar1[1];
          uVar12 = (uint)uVar14;
          iVar10 = recovered_100022c4((undefined4 *)(psVar1 + 2));
          if (sVar8 == 3) {
            if ((&DAT_100080a8)[uVar15 * 0x1c0] != 0) {
              DAT_10009c20 = 1;
              DAT_10009c38 = (&DAT_100080b4)[uVar15 * 0x1c0];
              DAT_10009c3c = (&DAT_100080b8)[uVar15 * 0x1c0];
              if (uVar12 == 1) {
                uVar6 = (long)iVar10 - (long)(int)(&DAT_100080b0)[uVar15 * 0x1c0];
                if ((long)uVar6 < 0) {
                  DAT_10009c2c = 0;
                }
                else if (DAT_10009c3c < uVar6) {
                  DAT_10009c2c = DAT_10009c3c;
                  if (0x7ffffffe < DAT_10009c3c) {
                    DAT_10009c2c = 0x7fffffff;
                  }
                }
                else {
                  if (0x7ffffffe < uVar6) {
                    uVar6 = 0x7fffffff;
                  }
                  DAT_10009c2c = (uint)uVar6;
                }
              }
              else if (uVar12 == 0) {
                uVar6 = (long)iVar10 - (long)(int)(&DAT_100080ac)[uVar15 * 0x1c0];
                if ((long)uVar6 < 0) {
                  DAT_10009c28 = 0;
                }
                else if (DAT_10009c38 < uVar6) {
                  DAT_10009c28 = DAT_10009c38;
                  if (0x7ffffffe < DAT_10009c38) {
                    DAT_10009c28 = 0x7fffffff;
                  }
                }
                else {
                  if (0x7ffffffe < uVar6) {
                    uVar6 = 0x7fffffff;
                  }
                  DAT_10009c28 = (uint)uVar6;
                }
              }
LAB_10002840:
              DAT_10009c00 = 1;
            }
            goto LAB_1000284c;
          }
          if (sVar8 == 2) {
            if ((&DAT_100080a4)[uVar15 * 0x1c0] != 0) {
              piVar13 = &DAT_10009c30;
              DAT_10009c20 = 2;
              if (uVar12 != 0) {
                if (uVar12 != 1) goto LAB_10002840;
                piVar13 = (int *)&DAT_10009c34;
              }
              *piVar13 = *piVar13 + iVar10;
              goto LAB_10002840;
            }
            goto LAB_1000284c;
          }
          if (sVar8 != 1) {
            if (((sVar8 == 0) && (uVar12 == 0)) &&
               (((&DAT_100080a4)[uVar15 * 0x1c0] != 0 || ((&DAT_100080a8)[uVar15 * 0x1c0] != 0))))
            goto LAB_10002840;
            goto LAB_1000284c;
          }
          if ((&DAT_100080a4)[uVar15 * 0x1c0] == 0) {
            if ((&DAT_100080a8)[uVar15 * 0x1c0] != 0) {
              uVar3 = uVar12 - 0x110 & 0xffff;
              goto joined_r0x100026fc;
            }
          }
          else {
            uVar3 = uVar12 - 0x110;
joined_r0x100026fc:
            if (uVar3 < 3) {
              uVar12 = ((const uint[]){1U,2U,4U})[(uint)uVar14-0x110U];
              if (iVar10 == 0) {
                DAT_10009c24 = DAT_10009c24 & (uVar12 ^ 0xffffffff);
              }
              else {
                DAT_10009c24 = DAT_10009c24 | uVar12;
              }
              DAT_10009c00 = 1;
              goto LAB_1000284c;
            }
          }
          if ((&DAT_100080a0)[uVar15 * 0x1c0] == 0) goto LAB_1000284c;
          if ((uVar12 < 0x39 && (1L << ((ulong)uVar12 & 0x3f) & 0x140040020000000U) != 0) ||
             (uVar12 - 0x61 < 0x1e && (1 << (ulong)(uVar12 - 0x61 & 0x1f) & 0x30000009U) != 0)) {
            if (uVar12 == 0x1d) {
              uVar12 = 4;
            }
            else if (uVar12 == 0x2a) {
              uVar12 = 1;
            }
            else if (uVar12 == 0x7e) {
              uVar12 = 0x80;
            }
            else if (uVar12 == 0x38) {
              uVar12 = 0x10;
            }
            else if (uVar12 == 0x61) {
              uVar12 = 8;
            }
            else if (uVar12 == 100) {
              uVar12 = 0x20;
            }
            else if (uVar12 == 0x7d) {
              uVar12 = 0x40;
            }
            else {
              if (uVar12 != 0x36) goto LAB_1000284c;
              uVar12 = 2;
            }
            if (iVar10 == 0) {
              DAT_10009c14 = DAT_10009c14 & (uVar12 ^ 0xffffffff);
            }
            else {
              DAT_10009c14 = DAT_10009c14 | uVar12;
            }
            uVar12 = (uint)((DAT_10009c14 & 3) != 0);
            DAT_10009c10 = uVar12 << 0x10;
            if ((DAT_10009c14 & 0xc) != 0) {
              DAT_10009c10 = uVar12 << 0x10 | 0x20000;
            }
            if ((DAT_10009c14 & 0xf0) != 0) {
              DAT_10009c10 = DAT_10009c10 | 0x40000;
            }
            uVar12 = DAT_10009c10 | 0x80000000;
            goto LAB_10002940;
          }
          if (iVar10 == 0) goto LAB_1000284c;
          uVar3 = DAT_10009c10 >> 0x10 & 1;
          uVar18 = uVar12;
          if (uVar12 - 2 < 10) {
            pcVar19 = str_1000308e;
            if (uVar3 != 0) {
              pcVar19 = str_10003099;
            }
            uVar16 = (uint)(byte)pcVar19[uVar12 - 2];
            goto switchD_10002a78_caseD_2a;
          }
          uVar17 = uVar12 - 0x10;
          if (uVar17 < 10) {
            pcVar19 = str_100030a4;
LAB_100029b8:
            uVar16 = (uint)(byte)pcVar19[uVar17];
            if (uVar3 != 0) {
              uVar16 = (byte)pcVar19[uVar17] - 0x20;
            }
switchD_10002a78_caseD_2a:
            uVar16 = uVar16 & 0xff;
            uVar18 = 0x1c;
            switch((uintptr_t)(uVar12)) {
            case 0x60:
              break;
            default:
              uVar18 = uVar12;
              if (cVar4 != '\0') {
                uVar18 = 0;
              }
              goto LAB_10002b7c;
            case 0x66:
              uVar18 = 0x47;
              break;
            case 0x67:
              uVar18 = 0x48;
              break;
            case 0x68:
              uVar18 = 0x49;
              break;
            case 0x69:
              uVar18 = 0x4b;
              break;
            case 0x6a:
              uVar18 = 0x4d;
              break;
            case 0x6b:
              uVar18 = 0x4f;
              break;
            case 0x6c:
              uVar18 = 0x50;
              break;
            case 0x6d:
              uVar18 = 0x51;
              break;
            case 0x6e:
              uVar18 = 0x52;
              break;
            case 0x6f:
              uVar18 = 0x53;
            }
            goto switchD_100029f0_caseD_60;
          }
          uVar17 = uVar12 - 0x1e;
          if (uVar17 < 9) {
            pcVar19 = str_100030af;
            goto LAB_100029b8;
          }
          uVar17 = uVar12 - 0x2c;
          if (uVar17 < 7) {
            pcVar19 = str_100030b9;
            goto LAB_100029b8;
          }
          uVar16 = 0;
          switch((uintptr_t)(uVar12)) {
          case 0x27:
            uVar16 = uVar3 ^ 0x3b;
            goto LAB_10002b7c;
          case 0x28:
            uVar12 = 0x22;
            uVar16 = 0x27;
            break;
          case 0x29:
            uVar12 = 0x7e;
            uVar16 = 0x60;
            break;
          case 0x2a:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x36:
          case 0x37:
          case 0x38:
            goto switchD_10002a78_caseD_2a;
          case 0x2b:
            uVar12 = 0x7c;
            uVar16 = 0x5c;
            break;
          case 0x33:
            uVar12 = 0x3c;
            uVar16 = 0x2c;
            break;
          case 0x34:
            uVar12 = 0x3e;
            uVar16 = 0x2e;
            break;
          case 0x35:
            uVar12 = 0x3f;
            uVar16 = 0x2f;
            break;
          case 0x39:
            uVar16 = 0x20;
            goto LAB_10002b7c;
          default:
            switch((uintptr_t)(uVar12)) {
            case 0xc:
              uVar12 = 0x5f;
              uVar16 = 0x2d;
              goto LAB_10002b78;
            case 0xd:
              uVar12 = 0x2b;
              uVar16 = 0x3d;
              goto LAB_10002b78;
            case 0xe:
              uVar16 = 8;
              break;
            case 0xf:
              uVar16 = 9;
              break;
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
              goto switchD_10002a78_caseD_2a;
            case 0x1a:
              uVar12 = 0x7b;
              uVar16 = 0x5b;
              goto LAB_10002b78;
            case 0x1b:
              uVar12 = 0x7d;
              uVar16 = 0x5d;
              goto LAB_10002b78;
            case 0x1c:
              uVar16 = 0xd;
              break;
            default:
              if (uVar12 != 1) goto switchD_10002a78_caseD_2a;
              uVar16 = 0x1b;
            }
            goto LAB_10002b7c;
          }
LAB_10002b78:
          if (uVar3 != 0) {
            uVar16 = uVar12;
          }
LAB_10002b7c:
          if (uVar18 != 0 || uVar16 != 0) {
switchD_100029f0_caseD_60:
            uVar12 = uVar16 | uVar18 << 8 | DAT_10009c10;
LAB_10002940:
            uVar3 = DAT_10009c0c + 1 & 0x3f;
            if (uVar3 != DAT_10009c08) {
              *(uint *)(&DAT_10009c40 + (ulong)DAT_10009c0c * 4) = uVar12;
              DAT_10009c0c = uVar3;
            }
          }
LAB_1000284c:
          uVar14 = (&DAT_1000808e)[uVar15 * 0x380];
          uVar12 = (uint)(ushort)(&DAT_1000808c)[uVar15 * 0x380];
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar14 / uVar12;
          }
          *(short *)(&DAT_10008304 + (ulong)((uint)uVar14 - uVar3 * uVar12) * 2 + lVar5) =
               (short)uVar9;
          (&DAT_1000808e)[uVar15 * 0x380] = uVar14 + 1;
          uVar14 = (&DAT_10008090)[uVar15 * 0x380] + 1;
          (&DAT_10008090)[uVar15 * 0x380] = uVar14;
          iVar21 = iVar21 + -1;
        }
        if (iVar21 != 0) {
          (&DAT_10008302)[uVar15 * 0x380] = (&DAT_1000808e)[uVar15 * 0x380];
          recovered_10001a68((int *)*plVar20,(ulong)(uint)(&DAT_1000809c)[uVar15 * 0x1c0],
                             &DAT_10008300 + lVar5,0x46);
          recovered_10001f98((int *)*plVar20);
          uVar11 = recovered_10001aa4((int *)*plVar20,(&DAT_10008078)[uVar15 * 0xe0],0,0);
          if ((int)uVar11 == 0) goto LAB_1000256c;
        }
      }
    }
    uVar15 = uVar15 + 1;
  } while( true );
}

#undef DAT_10008000
#undef DAT_10008078
#undef DAT_10008088
#undef DAT_1000808c
#undef DAT_1000808e
#undef DAT_10008090
#undef DAT_1000809c
#undef DAT_100080a0
#undef DAT_100080a4
#undef DAT_100080a8
#undef DAT_100080ac
#undef DAT_100080b0
#undef DAT_100080b4
#undef DAT_100080b8
#undef DAT_10008300
#undef DAT_10008302
#undef DAT_10008304
#undef DAT_10008400
#undef DAT_10008402
#undef DAT_10008600
#undef DAT_10009c00
#undef DAT_10009c04
#undef DAT_10009c08
#undef DAT_10009c0c
#undef DAT_10009c10
#undef DAT_10009c14
#undef DAT_10009c20
#undef DAT_10009c24
#undef DAT_10009c28
#undef DAT_10009c2c
#undef DAT_10009c30
#undef DAT_10009c34
#undef DAT_10009c38
#undef DAT_10009c3c
#undef DAT_10009c40
#undef str_1000308e
#undef str_10003099
#undef str_100030a4
#undef str_100030af
#undef str_100030b9

#undef DAT_10009c08
#define DAT_10009c08 (*(uint *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10009c0c
#define DAT_10009c0c (*(uint *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef DAT_10009c40
#define DAT_10009c40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf4
 */

undefined4 recovered_10002bf4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = (ulong)DAT_10009c08;
  if (DAT_10009c08 == DAT_10009c0c) {
    return 0;
  }
  DAT_10009c08 = DAT_10009c08 + 1 & 0x3f;
  return *(undefined4 *)(&DAT_10009c40 + uVar1 * 4);
}

#undef DAT_10009c08
#undef DAT_10009c0c
#undef DAT_10009c40

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
