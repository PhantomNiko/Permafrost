/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002378
#define DAT_10002378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000418
 */

undefined * recovered_10000418(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002378;
}

#undef DAT_10002378

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c89U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000425
 */

undefined * recovered_10000425(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000432
 */

bool recovered_10000432(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x10;
}


#undef DAT_100024bd
#define DAT_100024bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c89U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c89U)))
#undef DAT_10008610
#define DAT_10008610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6299U)))
#undef DAT_10008618
#define DAT_10008618 (*(byte *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef DAT_10008619
#define DAT_10008619 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62a2U)))
#undef DAT_10008820
#define DAT_10008820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64a9U)))
#undef _DAT_10008610
#define _DAT_10008610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6299U)))
#undef str_100023f4
#define str_100023f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#undef str_1000244a
#define str_1000244a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10002483
#define str_10002483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_10002495
#define str_10002495 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_100024a8
#define str_100024a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_100024c0
#define str_100024c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_100024f6
#define str_100024f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_10002507
#define str_10002507 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_10002522
#define str_10002522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
#undef str_10002548
#define str_10002548 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_10002563
#define str_10002563 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#undef str_1000257d
#define str_1000257d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_10002599
#define str_10002599 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_100025b5
#define str_100025b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
#undef str_100025cb
#define str_100025cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x254U)))
#define local_2388 (*(int (*)[2274])(pf_stack_frame + 296))
#define local_2380 (*(ulong *)(pf_stack_frame + 304))
#define local_388 (*(byte (*)[904])(pf_stack_frame + 8488))
#define local_188 (*(char (*)[392])(pf_stack_frame + 9000))
#define local_88 (*(ulong (*)[17])(pf_stack_frame + 9256))
#define local_48 (*(char * *)(pf_stack_frame + 9320))
#define local_40 (*(byte * *)(pf_stack_frame + 9328))
#define local_38 (*(undefined8 *)(pf_stack_frame + 9336))
#define local_30 (*(char * *)(pf_stack_frame + 9344))
#define auStack_2498 (*(undefined8 (*)[1171])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000440(int param_1,int param_2,int *param_3)

{
  unsigned char pf_stack_frame[9424] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte bVar15;

  lVar9 = DAT_10008820;
  bVar15 = 0;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (param_1 != 0x10) {
    return 0;
  }
  if (DAT_10008820 == 0) {
    return 0;
  }
  if (*param_3 != 1) {
    return 0;
  }
  if (param_3[1] != 0x48) {
    return 0;
  }
  if (param_2 != 0x50001) {
    if (param_2 == 0x50003) {
      puVar14 = *(undefined8 **)(param_3 + 2);
      if (puVar14 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined8 *)((long)puVar14 + 0x5c) = 0;
      *(undefined8 *)((long)puVar14 + 100) = 0;
      *(undefined8 *)((long)puVar14 + 0x4c) = 0;
      *(undefined8 *)((long)puVar14 + 0x54) = 0;
      *(undefined8 *)((long)puVar14 + 0x3c) = 0;
      *(undefined8 *)((long)puVar14 + 0x44) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x1c) = 0;
      *(undefined8 *)((long)puVar14 + 0x24) = 0;
      *(undefined8 *)((long)puVar14 + 0xc) = 0;
      *(undefined8 *)((long)puVar14 + 0x14) = 0;
      *(undefined4 *)((long)puVar14 + 0x6c) = 0;
      *puVar14 = 0x7000000001;
      *(undefined4 *)(puVar14 + 1) = 1;
      recovered_10000bac((long)(puVar14 + 2),((uintptr_t)pf_module_state+0xb4U),5);
    }
    else {
      if (param_2 != 0x50005) {
        return 0;
      }
      (**(code **)(DAT_10008820 + 8))(str_100023f4);
    }
    return 1;
  }
  pcVar12 = *(char **)(param_3 + 2);
  if (pcVar12 == (char *)0x0) {
    return 0;
  }
  uVar5 = recovered_10000cef(pcVar12);
  local_30 = (char *)0x0;
  DAT_10008618 = 0;
  _DAT_10008610 = 0;
  if (uVar5 < 0x200) {
    lVar8 = uVar5 + 1;
    recovered_10000bac((long)local_388,(long)pcVar12,lVar8);
    uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xe1U));
    if ((char)uVar6 == '\0') {
      pbVar13 = &DAT_10008619;
      pbVar10 = local_388;
    }
    else {
      uVar5 = recovered_10000cef(&DAT_10008619);
      lVar8 = uVar5 + 1;
      pbVar13 = local_388;
      pbVar10 = &DAT_10008619;
    }
    recovered_10000bac((long)pbVar13,(long)pbVar10,lVar8);
    uVar5 = recovered_10000cef((char *)local_388);
    uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xe4U));
    if (((char)uVar6 == '\0') &&
       (uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xe9U)), (char)uVar6 == '\0')) {
      uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xeeU));
      if ((char)uVar6 != '\0') {
        DAT_10006000 = 0;
        DAT_10004000 = 0;
        goto LAB_100005fb;
      }
      uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xf3U));
      if ((char)uVar6 == '\0') {
        uVar6 = recovered_10000d52((long)local_388,((uintptr_t)pf_module_state+0xf8U));
        if ((char)uVar6 != '\0') {
          recovered_10000d72(&DAT_10004000,&DAT_10004000 + DAT_10006000,0);
          goto LAB_100005fb;
        }
        pbVar13 = local_388 + uVar5;
        uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0xfdU),&local_30);
        if ((char)uVar6 != '\0') {
          recovered_1000118d(local_30,(char *)pbVar13);
          goto LAB_100005fb;
        }
        uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x102U),&local_30);
        if ((char)uVar6 != '\0') {
          (**(code **)(DAT_10008820 + 0x40))(local_30);
          goto LAB_100005fb;
        }
        uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x107U),&local_30);
        if ((char)uVar6 == '\0') {
          uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x17aU),&local_30);
          if ((char)uVar6 == '\0') {
            uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x18bU),&local_30);
            if ((char)uVar6 == '\0') {
              uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x1c6U),&local_30);
              if ((char)uVar6 == '\0') {
                uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x1e4U),&local_30);
                if ((char)uVar6 == '\0') {
                  uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x202U),&local_30);
                  if ((char)uVar6 == '\0') {
                    uVar6 = recovered_100010ff(local_388,pbVar13,((uintptr_t)pf_module_state+0x21eU),&local_30);
                    if ((char)uVar6 == '\0') {
                      uVar5 = recovered_10000cef((char *)local_388);
                      if (uVar5 + 1 < 0x2000U - DAT_10006000) {
                        recovered_10000bac((long)(&DAT_10004000 + DAT_10006000),(long)local_388,
                                           uVar5);
                        lVar9 = DAT_10006000 + uVar5;
                        DAT_10006000 = DAT_10006000 + uVar5 + 1;
                        (&DAT_10004000)[lVar9] = 10;
                        (&DAT_10004000)[DAT_10006000] = 0;
                        goto LAB_100005fb;
                      }
                      pcVar12 = str_100025b5;
                    }
                    else {
                      bVar3 = recovered_1000199f(local_30,local_188);
                      if ((!bVar3) ||
                         (iVar4 = (**(code **)(DAT_10008820 + 0x30))(local_188,1), iVar4 != 0))
                      goto LAB_100005fb;
                      pcVar12 = str_10002599;
                    }
                  }
                  else {
                    bVar3 = recovered_1000199f(local_30,local_188);
                    if ((!bVar3) ||
                       (iVar4 = (**(code **)(DAT_10008820 + 0x30))(local_188,0), iVar4 != 0))
                    goto LAB_100005fb;
                    pcVar12 = str_1000257d;
                  }
                }
                else {
                  bVar3 = recovered_1000199f(local_30,local_188);
                  if ((!bVar3) ||
                     (iVar4 = (**(code **)(DAT_10008820 + 0x28))(local_188), iVar4 != 0))
                  goto LAB_100005fb;
                  pcVar12 = str_10002563;
                }
              }
              else {
                bVar3 = recovered_1000199f(local_30,local_188);
                if ((!bVar3) || (iVar4 = (**(code **)(DAT_10008820 + 0x20))(local_188), iVar4 != 0))
                goto LAB_100005fb;
                pcVar12 = str_10002548;
              }
            }
            else {
              local_88[0] = 0;
              bVar3 = recovered_1000199f(local_30,local_188);
              if (!bVar3) goto LAB_100005fb;
              iVar4 = (**(code **)(DAT_10008820 + 0x10))(local_188,local_2388,0x1fff,local_88);
              uVar5 = local_88[0];
              pcVar12 = str_10002507;
              if ((local_88[0] < 0x2000 && iVar4 != 0) && (local_88[0] <= 0x1fffU - DAT_10006000)) {
                uVar7 = 0;
                pcVar12 = str_10002522;
                do {
                  if (local_88[0] == uVar7) {
                    recovered_10000bac((long)(&DAT_10004000 + DAT_10006000),(long)local_2388,
                                       local_88[0]);
                    DAT_10006000 = DAT_10006000 + uVar5;
                    (&DAT_10004000)[DAT_10006000] = 0;
                    goto LAB_100005fb;
                  }
                  pcVar1 = (char *)((long)local_2388 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (*pcVar1 != '\0');
              }
            }
          }
          else {
            bVar3 = recovered_1000199f(local_30,local_188);
            if ((!bVar3) ||
               (iVar4 = (**(code **)(DAT_10008820 + 0x18))(local_188,&DAT_10004000,DAT_10006000),
               iVar4 != 0)) goto LAB_100005fb;
            pcVar12 = str_100024f6;
          }
        }
        else {
          local_48 = local_30;
          local_38 = 0;
          local_40 = pbVar13;
          uVar2 = recovered_10001430(&local_48,local_188,0x40);
          if (uVar2 == '\0') {
            pcVar12 = str_10002483;
          }
          else {
            lVar9 = 0;
            while( true ) {
              uVar6 = recovered_100014c9(&local_48);
              if (((char)uVar6 != '\0') || ((DAT_10008618 & 1) != 0)) break;
              if (lVar9 == 8) {
                pcVar12 = str_10002495;
                goto LAB_10000546;
              }
              recovered_100014f1(local_2388,(ulong *)&local_48,7);
              if ((local_2388[0] != 1) || ((long)local_2380 < 0)) {
                pcVar12 = str_100024a8;
                goto LAB_10000546;
              }
              local_88[lVar9] = local_2380;
              lVar9 = lVar9 + 1;
            }
            if (((DAT_10008618 & 1) == 0) &&
               (iVar4 = (**(code **)(DAT_10008820 + 0x38))(local_188,lVar9,local_88,&local_38),
               iVar4 != 0)) {
              recovered_10002361((long)local_2388,0x110);
              local_2380 = local_38;
              local_2388[0] = 1;
              recovered_100018b0((const byte *)local_2388);
              (**(code **)(DAT_10008820 + 8))(&DAT_100024bd);
              goto LAB_100005fb;
            }
            pcVar12 = str_100024c0;
          }
        }
        goto LAB_10000546;
      }
      pcVar12 = &DAT_10004000;
    }
    else {
      pcVar12 = str_100025cb;
    }
    (**(code **)(lVar9 + 8))(pcVar12);
  }
  else {
    pcVar12 = str_1000244a;
LAB_10000546:
    recovered_10000d03(pcVar12);
  }
LAB_100005fb:
  return DAT_10008618 + 1;
}

#undef DAT_100024bd
#undef DAT_10004000
#undef DAT_10006000
#undef DAT_10008610
#undef DAT_10008618
#undef DAT_10008619
#undef DAT_10008820
#undef _DAT_10008610
#undef str_100023f4
#undef str_1000244a
#undef str_10002483
#undef str_10002495
#undef str_100024a8
#undef str_100024c0
#undef str_100024f6
#undef str_10002507
#undef str_10002522
#undef str_10002548
#undef str_10002563
#undef str_1000257d
#undef str_10002599
#undef str_100025b5
#undef str_100025cb
#undef local_2388
#undef local_2380
#undef local_388
#undef local_188
#undef local_88
#undef local_48
#undef local_40
#undef local_38
#undef local_30
#undef auStack_2498

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bac
 */

void recovered_10000bac(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
  }
  return;
}


#undef DAT_10002378
#define DAT_10002378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc89U)))
#undef DAT_10008820
#define DAT_10008820 (*(int * *)(((uintptr_t)pf_module_state + 0x64a9U)))
#undef str_10002430
#define str_10002430 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9U)))
#undef str_10002443
#define str_10002443 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc4
 */

undefined8 recovered_10000bc4(void *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined8 uVar2;

  uVar1 = recovered_10000c95(param_1);
  if (((param_2 == &DAT_10002378) && ((int)CONCAT71(extraout_var,uVar1) != 0)) &&
     (*(code **)((long)param_1 + 0x38) != (code *)0x0)) {
    DAT_10008820 = (int *)(**(code **)((long)param_1 + 0x38))(str_10002430,1,0x48);
    if (((((DAT_10008820 != (int *)0x0) && (*DAT_10008820 == 1)) &&
         ((DAT_10008820[1] == 0x48 &&
          ((*(long *)(DAT_10008820 + 2) != 0 && (*(long *)(DAT_10008820 + 4) != 0)))))) &&
        (*(long *)(DAT_10008820 + 6) != 0)) &&
       ((((*(long *)(DAT_10008820 + 8) != 0 && (*(long *)(DAT_10008820 + 10) != 0)) &&
         (*(long *)(DAT_10008820 + 0xc) != 0)) &&
        ((*(long *)(DAT_10008820 + 0xe) != 0 && (*(long *)(DAT_10008820 + 0x10) != 0)))))) {
      uVar1 = recovered_10000c95(param_1);
      if (((int)CONCAT71(extraout_var_00,uVar1) != 0) &&
         (*(code **)((long)param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((long)param_1 + 0x18))(str_10002443,3,0x240002,&DAT_10003000,0x28);
        return uVar2;
      }
    }
  }
  return 0;
}

#undef DAT_10002378
#undef DAT_10003000
#undef DAT_10008820
#undef str_10002430
#undef str_10002443

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c95
 */

uchar recovered_10000c95(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (((context != (void *)0x0) && (*(int *)context == 0x444f4d4b)) &&
     (1099999 < *(uint *)((long)context + 4))) {
    bVar1 = 0x3f < *(uint *)((long)context + 8);
  }
  return bVar1;
}


#undef str_10002443
#define str_10002443 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cbc
 */

undefined8 recovered_10000cbc(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined7 extraout_var = 0;
  undefined8 uVar2;

  uVar1 = recovered_10000c95(param_1);
  if (((int)CONCAT71(extraout_var,uVar1) == 0) || (*(code **)((long)param_1 + 0x20) == (code *)0x0))
  {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((long)param_1 + 0x20))(str_10002443);
  return uVar2;
}

#undef str_10002443

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cef
 */

ulong recovered_10000cef(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  uVar2 = 0xffffffffffffffff;
  do {
    lVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (text[lVar1] != '\0');
  return uVar2;
}


#undef DAT_100024bd
#define DAT_100024bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_100025c8
#define DAT_100025c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_10008618
#define DAT_10008618 (*(char *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef DAT_10008820
#define DAT_10008820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64a9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d03
 */

void recovered_10000d03(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10008618 == '\0') {
    (**(code **)(DAT_10008820 + 8))(&DAT_100025c8);
    (**(code **)(DAT_10008820 + 8))(param_1);
    (**(code **)(DAT_10008820 + 8))(&DAT_100024bd);
  }
  DAT_10008618 = 1;
  return;
}

#undef DAT_100024bd
#undef DAT_100025c8
#undef DAT_10008618
#undef DAT_10008820

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d52
 */

undefined8 recovered_10000d52(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + lVar2);
    if ((cVar1 == '\0') || (cVar1 != *(char *)(param_2 + lVar2))) break;
    lVar2 = lVar2 + 1;
  }
  return CONCAT71((int7)((ulong)lVar2 >> 8),cVar1 == *(char *)(param_2 + lVar2));
}


#undef DAT_10008618
#define DAT_10008618 (*(char *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef str_10002755
#define str_10002755 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3deU)))
#undef str_1000277e
#define str_1000277e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x407U)))
#undef str_10002792
#define str_10002792 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41bU)))
#undef str_1000279f
#define str_1000279f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x428U)))
#undef str_100027ab
#define str_100027ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x434U)))
#define local_60 (*(byte * *)(pf_stack_frame + 320))
#define local_54 (*(uint *)(pf_stack_frame + 332))
#define local_50 (*(char * *)(pf_stack_frame + 336))
#define local_48 (*(byte * *)(pf_stack_frame + 344))
#define local_40 (*(undefined8 *)(pf_stack_frame + 352))
#define local_31 (*(byte *)(pf_stack_frame + 367))
#define local_190 (*(undefined8 *)(pf_stack_frame + 16))
#define local_188 (*(byte * *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 288))
#define local_78 (*(byte * *)(pf_stack_frame + 296))
#define local_70 (*(byte * *)(pf_stack_frame + 304))
#define local_68 (*(byte * *)(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d72
 */

void recovered_10000d72(char *begin,char *end,uint depth)

{
  unsigned char pf_stack_frame[448] __attribute__((aligned(16))) = {0};

  uint depth_00;
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *end_00;
  char *pcVar6;
  int iVar7;

  if (0x10 < depth) {
    recovered_10000d03(str_10002755);
    return;
  }
  local_54 = depth + 1;
LAB_10000db8:
  local_70 = (byte *)begin;
  if (end <= begin) {
    return;
  }
LAB_10000dc5:
  pbVar5 = local_70;
  if (DAT_10008618 != '\0') {
    return;
  }
  uVar2 = recovered_10001a84();
  if ((char)uVar2 == '\0') {
    return;
  }
  pbVar3 = (byte *)recovered_10001ab3((char *)pbVar5,end);
  local_50 = (char *)0x0;
  uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x3faU),&local_50);
  local_31 = (byte)uVar4;
  if ((local_31 != 0) ||
     (uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x400U),&local_50), (char)uVar4 != '\0')) {
    pbVar5 = pbVar3 + 1;
    if (end <= pbVar3) {
      pbVar5 = (byte *)end;
    }
    end_00 = (byte *)0x0;
    local_60 = (byte *)0x0;
    local_48 = (byte *)0x0;
    local_68 = (byte *)0x0;
    iVar7 = 0;
    local_80 = pbVar3;
    local_78 = pbVar5;
LAB_10000e60:
    if (end <= pbVar5) goto LAB_10000fd3;
    pbVar3 = (byte *)recovered_10001ab3((char *)pbVar5,end);
    local_40 = 0;
    uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x400U),(undefined8 *)0x0);
    if (((char)uVar4 == '\0') &&
       (uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x3faU),(undefined8 *)0x0), (char)uVar4 == '\0')
       ) {
      uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x403U),&local_40);
      if ((char)uVar4 != '\0') {
        local_190 = local_40;
        local_188 = pbVar3;
        uVar4 = recovered_100014c9(&local_190);
        if ((char)uVar4 == '\0') {
          recovered_10000d03(str_1000277e);
          iVar1 = 1;
        }
        else {
          if (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            goto LAB_10000eaf;
          }
          local_68 = pbVar3 + 1;
          if (end <= pbVar3) {
            local_68 = (byte *)end;
          }
          iVar7 = 0;
          iVar1 = 5;
          local_48 = pbVar5;
        }
        goto LAB_10000ebc;
      }
      if (iVar7 != 0) goto LAB_10000eaf;
      uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x416U),&local_40);
      iVar7 = 0;
      if ((char)uVar4 != '\0') {
        local_190 = local_40;
        local_188 = pbVar3;
        if (!(end_00 != (byte *)0x0 || local_31 != 0)) {
          uVar4 = recovered_100014c9(&local_190);
          if ((char)uVar4 != '\0') {
            local_60 = pbVar3 + 1;
            if (end <= pbVar3) {
              local_60 = (byte *)end;
            }
            end_00 = pbVar5;
            goto LAB_10000eaf;
          }
        }
        pcVar6 = str_10002792;
        goto LAB_100010df;
      }
    }
    else {
      iVar7 = iVar7 + 1;
    }
LAB_10000eaf:
    pbVar5 = pbVar3 + 1;
    if (end <= pbVar3) {
      pbVar5 = (byte *)end;
    }
    iVar1 = 0;
LAB_10000ebc:
    if (iVar1 != 0) goto LAB_10000fb3;
    goto LAB_10000e60;
  }
  uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x416U),(undefined8 *)0x0);
  if (((char)uVar4 != '\0') ||
     (uVar4 = recovered_100010ff(pbVar5,pbVar3,((uintptr_t)pf_module_state+0x403U),(undefined8 *)0x0), (char)uVar4 != '\0'))
  {
    pcVar6 = str_100027ab;
    goto LAB_100010df;
  }
  recovered_1000118d((char *)pbVar5,(char *)pbVar3);
  begin = (char *)(pbVar3 + 1);
  if (end <= pbVar3) {
    begin = end;
  }
  goto LAB_10000db8;
LAB_10000fb3:
  if (iVar1 == 5) goto LAB_10000fd3;
  if (iVar1 == 1) {
    return;
  }
  if (end <= local_70) {
    return;
  }
  goto LAB_10000dc5;
LAB_10000fd3:
  depth_00 = local_54;
  begin = (char *)local_68;
  if (local_48 == (byte *)0x0) {
    pcVar6 = str_1000279f;
LAB_100010df:
    recovered_10000d03(pcVar6);
    return;
  }
  if (end_00 == (byte *)0x0) {
    end_00 = local_48;
  }
  while( true ) {
    recovered_10001acb(&local_190,local_50,(char *)local_80);
    if (DAT_10008618 == '\x01') {
      return;
    }
    if (((int)local_190 == 0) || (((int)local_190 == 3 && (local_188 == (byte *)0x0)))) break;
    recovered_10000d72((char *)local_78,(char *)end_00,depth_00);
    if (((local_31 == 0) || (DAT_10008618 != '\0')) ||
       (uVar2 = recovered_10001a84(), (char)uVar2 == '\0')) goto LAB_10000db8;
  }
  local_31 = local_31 | local_60 == (byte *)0x0;
  if (local_31 == 0) {
    recovered_10000d72((char *)local_60,(char *)local_48,depth_00);
  }
  goto LAB_10000db8;
}

#undef DAT_10008618
#undef str_10002755
#undef str_1000277e
#undef str_10002792
#undef str_1000279f
#undef str_100027ab
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_31
#undef local_190
#undef local_188
#undef local_80
#undef local_78
#undef local_70
#undef local_68

#define local_58 (*(char (*)[88])(pf_stack_frame + 24))
#define local_30 (*(byte * *)(pf_stack_frame + 64))
#define local_28 (*(byte * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010ff
 */

undefined8 recovered_100010ff(byte *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;
  undefined8 extraout_RAX = 0;

  local_30 = param_1;
  local_28 = param_2;
  uVar1 = recovered_10001430(&local_30,local_58,0x20);
  if ((uVar1 == '\0') || (uVar2 = recovered_10000d52((long)local_58,param_3), (char)uVar2 == '\0'))
  {
    return 0;
  }
  if (local_30 < param_2) {
    if (0x20 < (ulong)*local_30) {
      return 0;
    }
    if ((0x100002200U >> ((ulong)*local_30 & 0x3f) & 1) == 0) {
      return 0;
    }
  }
  recovered_10001b12(&local_30);
  uVar2 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  if (param_4 == (undefined8 *)0x0) {
    return uVar2;
  }
  *param_4 = local_30;
  return uVar2;
}

#undef local_58
#undef local_30
#undef local_28

#undef DAT_100024bd
#define DAT_100024bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c91U)))
#undef DAT_10006028
#define DAT_10006028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cb1U)))
#undef DAT_10008608
#define DAT_10008608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6291U)))
#undef DAT_10008618
#define DAT_10008618 (*(char *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef DAT_10008820
#define DAT_10008820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64a9U)))
#undef str_100027fa
#define str_100027fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x483U)))
#undef str_1000281b
#define str_1000281b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a4U)))
#define local_40 (*(char * *)(pf_stack_frame + 608))
#define local_38 (*(char * *)(pf_stack_frame + 616))
#define auStack_288 (*(undefined8 (*)[81])(pf_stack_frame + 24))
#define local_178 (*(int (*)[94])(pf_stack_frame + 296))
#define local_68 (*(char (*)[104])(pf_stack_frame + 568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000118d
 */

void recovered_1000118d(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  char *begin;
  char cVar1;
  uchar uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  byte bVar11;

  bVar11 = 0;
  local_40 = param_1;
  local_38 = param_2;
  recovered_10001b12(&local_40);
  uVar3 = recovered_100014c9(&local_40);
  if ((char)uVar3 != '\0') {
    return;
  }
  uVar2 = recovered_10001430(&local_40,local_68,0x20);
  if (uVar2 == '\0') {
LAB_10001251:
    recovered_10001acb(local_178,param_1,param_2);
  }
  else {
    recovered_10001b12(&local_40);
    pcVar9 = local_40;
    if (((local_40 < param_2) && (*local_40 == '=')) &&
       ((begin = local_40 + 1, begin == param_2 || (*begin != '=')))) {
      recovered_10001acb(local_178,begin,param_2);
      lVar5 = DAT_10008608;
      if (DAT_10008618 != '\0') {
        return;
      }
      puVar6 = &DAT_10006008;
      for (lVar10 = 0; lVar5 != lVar10; lVar10 = lVar10 + 1) {
        uVar3 = recovered_10000d52((long)puVar6,(long)local_68);
        if ((char)uVar3 != '\0') goto LAB_100013ac;
        puVar6 = puVar6 + 0x130;
      }
      lVar10 = lVar5;
LAB_100013ac:
      if (lVar10 != 0x20) {
        if (lVar10 == lVar5) {
          DAT_10008608 = lVar5 + 1;
          uVar4 = recovered_10000cef(local_68);
          recovered_10000bac((long)(&DAT_10006008 + lVar5 * 0x130),(long)local_68,uVar4 + 1);
        }
        recovered_10002344((long)(&DAT_10006028 + lVar10 * 0x130),(long)local_178,0x110);
        return;
      }
      pcVar9 = str_100027fa;
    }
    else {
      uVar3 = recovered_10000d52((long)local_68,((uintptr_t)pf_module_state+0x497U));
      if (((((char)uVar3 == '\0') &&
           (uVar3 = recovered_10000d52((long)local_68,((uintptr_t)pf_module_state+0x49cU)), (char)uVar3 == '\0')) &&
          (uVar3 = recovered_10000d52((long)local_68,((uintptr_t)pf_module_state+0x4a2U)), (char)uVar3 == '\0')) ||
         ((pcVar9 != param_2 && (*pcVar9 == '(')))) goto LAB_10001251;
      uVar3 = recovered_100014c9(&local_40);
      if ((char)uVar3 != '\0') {
        uVar3 = recovered_10000d52((long)local_68,((uintptr_t)pf_module_state+0x49cU));
        if ((char)uVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x100012b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(DAT_10008820 + 8))(&DAT_100024bd);
          return;
        }
        return;
      }
      do {
        if (DAT_10008618 != '\0') {
          return;
        }
        recovered_100014f1(local_178,(ulong *)&local_40,0);
        if (DAT_10008618 != '\0') {
          return;
        }
        recovered_100018b0((const byte *)local_178);
        uVar3 = recovered_10000d52((long)local_68,((uintptr_t)pf_module_state+0x49cU));
        if ((char)uVar3 == '\0') {
          (**(code **)(DAT_10008820 + 8))(&DAT_100024bd);
        }
        recovered_10001b12(&local_40);
        uVar3 = recovered_100014c9(&local_40);
        if ((char)uVar3 != '\0') {
          return;
        }
        pcVar9 = local_40 + 1;
        cVar1 = *local_40;
        local_40 = pcVar9;
      } while (cVar1 == ',');
      pcVar9 = str_1000281b;
    }
    recovered_10000d03(pcVar9);
  }
  return;
}

#undef DAT_100024bd
#undef DAT_10006008
#undef DAT_10006028
#undef DAT_10008608
#undef DAT_10008618
#undef DAT_10008820
#undef str_100027fa
#undef str_1000281b
#undef local_40
#undef local_38
#undef auStack_288
#undef local_178
#undef local_68

#undef str_1000282a
#define str_1000282a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001430
 */

uchar recovered_10001430(void *cursor,char *word,ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;

  recovered_10001b12(cursor);
  pbVar3 = *(byte **)cursor;
  pbVar5 = *(byte **)((long)cursor + 8);
  if ((pbVar3 == pbVar5) || ((*pbVar3 != 0x5f && (0x19 < (byte)((*pbVar3 & 0xdf) + 0xbf))))) {
LAB_100014bc:
    uVar2 = '\0';
  }
  else {
    uVar4 = 1;
    while ((pbVar3 < pbVar5 &&
           (((bVar1 = *pbVar3, (byte)(bVar1 - 0x30U) < 10 || (bVar1 == 0x5f)) ||
            ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a))))) {
      if (capacity <= uVar4) {
        recovered_10000d03(str_1000282a);
        goto LAB_100014bc;
      }
      *(byte **)cursor = pbVar3 + 1;
      word[uVar4 - 1] = *pbVar3;
      pbVar5 = *(byte **)((long)cursor + 8);
      uVar4 = uVar4 + 1;
      pbVar3 = *(byte **)cursor;
    }
    word[uVar4 - 1] = '\0';
    uVar2 = '\x01';
  }
  return uVar2;
}

#undef str_1000282a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014c9
 */

undefined8 recovered_100014c9(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined7 uVar3;
  undefined8 uVar2;

  recovered_10001b12(param_1);
  pcVar1 = (char *)*param_1;
  uVar3 = (undefined7)((ulong)pcVar1 >> 8);
  if (pcVar1 == (char *)param_1[1]) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    uVar2 = CONCAT71(uVar3,*pcVar1 == '#');
  }
  return uVar2;
}


#undef DAT_100023c8
#define DAT_100023c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_10008614
#define DAT_10008614 (*(uint *)(((uintptr_t)pf_module_state + 0x629dU)))
#undef DAT_10008618
#define DAT_10008618 (*(char *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef str_1000283e
#define str_1000283e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c7U)))
#undef str_1000285f
#define str_1000285f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e8U)))
#undef str_1000286f
#define str_1000286f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f8U)))
#undef str_1000288c
#define str_1000288c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x515U)))
#define local_150 (*(int (*)[84])(pf_stack_frame + 16))
#define local_148 (*(ulong *)(pf_stack_frame + 24))
#define local_140 (*(char (*)[320])(pf_stack_frame + 32))
#define local_40 (*(int * *)(pf_stack_frame + 288))
#define local_34 (*(int *)(pf_stack_frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014f1
 */

int * recovered_100014f1(int *param_1,ulong *param_2,int param_3)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  byte bVar13;

  recovered_10002361((long)param_1,0x110);
  DAT_10008614 = DAT_10008614 + 1;
  if (DAT_10008614 < 0x11) {
    recovered_10001b45((undefined8 *)param_1,param_2);
    local_40 = param_1 + 4;
    local_34 = param_3;
switchD_1000172d_caseD_1:
    if (DAT_10008618 == '\0') {
      recovered_10001b12(param_2);
      pbVar2 = (byte *)*param_2;
      if (pbVar2 == (byte *)param_2[1]) goto LAB_10001537;
      if (pbVar2 + 1 < (byte *)param_2[1]) {
        bVar12 = pbVar2[1] == 0x3d;
      }
      else {
        bVar12 = false;
      }
      bVar1 = *pbVar2;
      iVar9 = 3;
      lVar11 = 2;
      if (!(bool)((bVar1 == 0x21 || bVar1 == 0x3d) & bVar12)) {
        if ((bVar1 & 0xfd) == 0x3c) {
          lVar11 = (ulong)bVar12 + 1;
          iVar9 = 4;
        }
        else {
          uVar8 = bVar1 - 0x25;
          if ((10 < (byte)uVar8) || ((0x561U >> (uVar8 & 0x1f) & 1) == 0)) goto LAB_10001537;
          iVar9 = *(int *)(&DAT_100023c8 + (ulong)(uVar8 & 0xff) * 4);
          lVar11 = 1;
        }
      }
      if (iVar9 < param_3) goto LAB_10001537;
      *param_2 = (ulong)(pbVar2 + lVar11);
      recovered_100014f1(local_150,param_2,iVar9 + 1);
      piVar3 = local_40;
      if ((bVar1 != 0x3d) && (bVar1 != 0x21)) {
        if (local_150[0] == 2 && (*param_1 == 2 && bVar1 == 0x2b)) {
          uVar6 = recovered_10000cef((char *)local_40);
          uVar7 = recovered_10000cef(local_140);
          if (uVar7 + uVar6 < 0x100) {
            recovered_10000bac(uVar6 + (long)piVar3,(long)local_140,uVar7 + 1);
            param_3 = local_34;
          }
          else {
            recovered_10000d03(str_1000285f);
            param_3 = local_34;
          }
          goto switchD_1000172d_caseD_1;
        }
        if ((*param_1 != 1) || (local_150[0] != 1)) {
          pcVar10 = str_1000286f;
          goto LAB_10001532;
        }
        uVar6 = *(ulong *)(param_1 + 2);
        switch((uintptr_t)(bVar1 - 0x25)) {
        case 0:
        case 10:
          if ((local_148 == 0) || (local_148 == 0xffffffffffffffff && uVar6 == 0x8000000000000000))
          {
            pcVar10 = str_1000288c;
            goto LAB_10001532;
          }
          switch((uintptr_t)(bVar1 - 0x25)) {
          case 0:
            uVar6 = (long)uVar6 % (long)local_148;
            *(ulong *)(param_1 + 2) = uVar6;
            if ((long)(uVar6 ^ local_148) < 0 && uVar6 != 0) {
              *(ulong *)(param_1 + 2) = uVar6 + local_148;
            }
          default:
            goto switchD_1000172d_caseD_1;
          case 5:
            goto switchD_1000172d_caseD_5;
          case 6:
            goto switchD_1000172d_caseD_6;
          case 8:
            goto switchD_1000172d_caseD_8;
          case 10:
            lVar11 = (long)(local_148 ^ uVar6) >> 0x3f;
            if ((long)uVar6 % (long)local_148 == 0) {
              lVar11 = 0;
            }
            *(long *)(param_1 + 2) = lVar11 + (long)uVar6 / (long)local_148;
            goto switchD_1000172d_caseD_1;
          }
        case 1:
        case 2:
        case 3:
        case 4:
        case 7:
        case 9:
          goto switchD_1000172d_caseD_1;
        case 5:
switchD_1000172d_caseD_5:
          *(ulong *)(param_1 + 2) = local_148 * uVar6;
          goto switchD_1000172d_caseD_1;
        case 6:
switchD_1000172d_caseD_6:
          *(ulong *)(param_1 + 2) = local_148 + uVar6;
          goto switchD_1000172d_caseD_1;
        case 8:
switchD_1000172d_caseD_8:
          *(ulong *)(param_1 + 2) = uVar6 - local_148;
          goto switchD_1000172d_caseD_1;
        default:
          if (bVar1 == 0x3c) {
            bVar4 = (long)uVar6 <= (long)local_148;
            bVar12 = (long)uVar6 < (long)local_148;
          }
          else {
            if (bVar1 != 0x3e) goto switchD_1000172d_caseD_1;
            bVar4 = (long)local_148 <= (long)uVar6;
            bVar12 = (long)local_148 < (long)uVar6;
          }
          if ((int)lVar11 == 2) {
            bVar12 = bVar4;
          }
          *(ulong *)(param_1 + 2) = (ulong)bVar12;
          *param_1 = 3;
          goto switchD_1000172d_caseD_1;
        }
      }
      if (*param_1 == local_150[0]) {
        if (*param_1 == 2) {
          uVar5 = recovered_10000d52((long)local_40,(long)local_140);
          bVar13 = (byte)uVar5;
        }
        else {
          bVar13 = *(ulong *)(param_1 + 2) == local_148;
        }
      }
      else {
        bVar13 = 0;
      }
      recovered_10002361((long)piVar3,0x100);
      *(ulong *)(param_1 + 2) = (ulong)(byte)(bVar1 == 0x3d ^ bVar13 ^ 1);
      param_1[0] = 3;
      param_1[1] = 0;
      goto switchD_1000172d_caseD_1;
    }
  }
  else {
    pcVar10 = str_1000283e;
LAB_10001532:
    recovered_10000d03(pcVar10);
  }
LAB_10001537:
  DAT_10008614 = DAT_10008614 - 1;
  return param_1;
}

#undef DAT_100023c8
#undef DAT_10008614
#undef DAT_10008618
#undef str_1000283e
#undef str_1000285f
#undef str_1000286f
#undef str_1000288c
#undef local_150
#undef local_148
#undef local_140
#undef local_40
#undef local_34

/* Pooka's Free Software License. Recovered Stage4 value formatting.
 * Private callers pass the existing value object directly in the C build. */
void recovered_100018b0(const byte *value){uint32_t tag;uint64_t bits;__builtin_memcpy(&tag,value,4);__builtin_memcpy(&bits,value+8,8);uintptr_t host;__builtin_memcpy(&host,pf_module_state+0x64a9,8);void(*write)(const char*)=*(void(**)(const char*))(host+8);if(tag==3){write(bits?"true":"false");return;}if(tag==2){write((const char*)value+16);return;}if(tag==0){write("nil");return;}if((int64_t)bits<0)write("-");uint64_t magnitude=(int64_t)bits<0?0-bits:bits;char text[40];unsigned n=0;do{text[n++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);for(unsigned i=0;i<n/2;i++){char c=text[i];text[i]=text[n-1-i];text[n-1-i]=c;}text[n]=0;write(text);}


#undef DAT_10008618
#define DAT_10008618 (*(char *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef str_100029fb
#define str_100029fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x684U)))
#define local_140 (*(int (*)[80])(pf_stack_frame + 16))
#define local_130 (*(char (*)[304])(pf_stack_frame + 32))
#define local_30 (*(char * *)(pf_stack_frame + 288))
#define local_28 (*(char * *)(pf_stack_frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000199f
 */

bool recovered_1000199f(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  bool bVar3;

  local_30 = param_1;
  uVar1 = recovered_10000cef(param_1);
  local_28 = param_1 + uVar1;
  recovered_10001b12(&local_30);
  if ((local_30 < local_28) && ((*local_30 == '\'' || (*local_30 == '\"')))) {
    recovered_10001acb(local_140,local_30,local_28);
    bVar3 = false;
    if ((DAT_10008618 == '\0') && (local_140[0] == 2)) {
      uVar1 = recovered_10000cef(local_130);
      recovered_10000bac((long)param_2,(long)local_130,uVar1 + 1);
      bVar3 = *param_2 != '\0';
    }
  }
  else {
    uVar1 = (long)local_28 - (long)local_30;
    do {
      uVar2 = uVar1;
      if (uVar2 == 0) goto LAB_10001a68;
      uVar1 = uVar2 - 1;
    } while ((local_30[uVar2 - 1] == ' ') || (local_30[uVar2 - 1] == '\t'));
    if (uVar2 < 0x100) {
      recovered_10000bac((long)param_2,(long)local_30,uVar2);
      param_2[uVar2] = '\0';
      bVar3 = true;
    }
    else {
LAB_10001a68:
      recovered_10000d03(str_100029fb);
      bVar3 = false;
    }
  }
  return bVar3;
}

#undef DAT_10008618
#undef str_100029fb
#undef local_140
#undef local_130
#undef local_30
#undef local_28

#undef DAT_10008610
#define DAT_10008610 (*(uint *)(((uintptr_t)pf_module_state + 0x6299U)))
#undef DAT_10008618
#define DAT_10008618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef str_100027c7
#define str_100027c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a84
 */

ulong recovered_10001a84(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong extraout_RAX;

  DAT_10008610 = DAT_10008610 + 1;
  uVar1 = (ulong)DAT_10008610;
  if (10000 < DAT_10008610) {
    recovered_10000d03(str_100027c7);
    uVar1 = extraout_RAX;
  }
  return CONCAT71((int7)(uVar1 >> 8),DAT_10008618) ^ 1;
}

#undef DAT_10008610
#undef DAT_10008618
#undef str_100027c7

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab3
 */

char * recovered_10001ab3(char *begin,char *end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; (begin < end && (*begin != '\n')); begin = begin + 1) {
  }
  return begin;
}


#undef str_100027e1
#define str_100027e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46aU)))
#define local_28 (*(char * *)(pf_stack_frame + 24))
#define local_20 (*(char * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001acb
 */

void * recovered_10001acb(void *out,char *begin,char *end)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_28 = begin;
  local_20 = end;
  recovered_100014f1(out,(ulong *)&local_28,0);
  uVar1 = recovered_100014c9(&local_28);
  if ((char)uVar1 == '\0') {
    recovered_10000d03(str_100027e1);
  }
  return out;
}

#undef str_100027e1
#undef local_28
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b12
 */

void recovered_10001b12(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;

  pbVar1 = *(byte **)cursor;
  while (((pbVar1 < *(byte **)((long)cursor + 8) && ((ulong)*pbVar1 < 0x21)) &&
         ((0x100002200U >> ((ulong)*pbVar1 & 0x3f) & 1) != 0))) {
    pbVar1 = pbVar1 + 1;
    *(byte **)cursor = pbVar1;
  }
  return;
}


#undef DAT_100024bd
#define DAT_100024bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c91U)))
#undef DAT_10008608
#define DAT_10008608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6291U)))
#undef DAT_10008618
#define DAT_10008618 (*(byte *)(((uintptr_t)pf_module_state + 0x62a1U)))
#undef DAT_10008820
#define DAT_10008820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64a9U)))
#undef str_10002495
#define str_10002495 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_100024c0
#define str_100024c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_1000285f
#define str_1000285f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e8U)))
#undef str_1000289d
#define str_1000289d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x526U)))
#undef str_100028b1
#define str_100028b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53aU)))
#undef str_100028ce
#define str_100028ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x557U)))
#undef str_100028f9
#define str_100028f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x582U)))
#undef str_1000290d
#define str_1000290d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x596U)))
#undef str_10002926
#define str_10002926 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5afU)))
#undef str_10002940
#define str_10002940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c9U)))
#undef str_10002960
#define str_10002960 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e9U)))
#undef str_10002971
#define str_10002971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5faU)))
#undef str_10002982
#define str_10002982 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60bU)))
#undef str_100029a2
#define str_100029a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62bU)))
#undef str_100029ca
#define str_100029ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x653U)))
#undef str_100029ea
#define str_100029ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x673U)))
#define local_c18 (*(int (*)[774])(pf_stack_frame + 296))
#define local_c08 (*(undefined1 (*)[3080])(pf_stack_frame + 312))
#define local_b00 (*(long (*)[352])(pf_stack_frame + 576))
#define local_288 (*(long (*)[81])(pf_stack_frame + 2744))
#define local_178 (*(int (*)[94])(pf_stack_frame + 3016))
#define local_170 (*(ulong *)(pf_stack_frame + 3024))
#define local_168 (*(byte (*)[360])(pf_stack_frame + 3032))
#define local_68 (*(undefined8 *)(pf_stack_frame + 3288))
#define local_60 (*(int * *)(pf_stack_frame + 3296))
#define local_58 (*(char (*)[88])(pf_stack_frame + 3304))
#define auStack_d28 (*(undefined8 (*)[421])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b45
 */

undefined8 * recovered_10001b45(undefined8 *param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[3424] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  byte bVar14;
  byte *pbVar15;
  undefined *puVar16;
  int *piVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  int *piVar21;
  bool bVar22;
  byte bVar23;

  bVar23 = 0;
  recovered_10002361((long)local_178,0x110);
  recovered_10001b12(param_2);
  uVar8 = recovered_10001a84();
  if ((char)uVar8 == '\0') {
LAB_10001bdc:
    pcVar18 = str_1000289d;
LAB_10001be3:
    recovered_10000d03(pcVar18);
  }
  else {
    pbVar15 = (byte *)*param_2;
    pbVar2 = (byte *)param_2[1];
    if (pbVar15 == pbVar2) goto LAB_10001bdc;
    pbVar10 = pbVar15 + 1;
    *param_2 = (ulong)pbVar10;
    bVar1 = *pbVar15;
    if (bVar1 == 0x28) {
      recovered_100014f1(local_178,param_2,0);
      recovered_10001b12(param_2);
      pcVar18 = (char *)*param_2;
      if (pcVar18 != (char *)param_2[1]) {
        *param_2 = (ulong)(pcVar18 + 1);
        if (*pcVar18 == ')') goto LAB_10001de7;
      }
      pcVar18 = str_100028b1;
LAB_10001ddb:
      recovered_10000d03(pcVar18);
LAB_10001de7:
      piVar21 = local_178;
LAB_10001def:
      recovered_10002344((long)param_1,(long)piVar21,0x110);
      return param_1;
    }
    uVar6 = (uint)bVar1;
    if ((bVar1 < 0x2e) && ((0x280200000000U >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
      recovered_100014f1(local_178,param_2,7);
      if (uVar6 == 0x21) {
        if (local_178[0] == 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = (ulong)(local_170 == 0 && local_178[0] == 3);
        }
        recovered_10002361((long)local_168,0x100);
        local_178[0] = 3;
        local_178[1] = 0;
        local_170 = uVar8;
      }
      else {
        if (local_178[0] != 1) {
          pcVar18 = str_100028ce;
          goto LAB_10001ddb;
        }
        if (bVar1 == 0x2d) {
          local_170 = -local_170;
        }
      }
      goto LAB_10001de7;
    }
    if ((bVar1 == 0x27) || (uVar6 == 0x22)) {
      local_178[0] = 2;
      lVar9 = 0x10;
      while ((pbVar10 < pbVar2 && (*pbVar10 != bVar1))) {
        pbVar15 = pbVar10 + 1;
        *param_2 = (ulong)pbVar15;
        bVar23 = *pbVar10;
        if (bVar23 == 0x5c) {
          bVar23 = 0x5c;
          if (pbVar15 < pbVar2) {
            bVar14 = *pbVar15;
            if (bVar14 == bVar1 || bVar14 == 0x5c) {
              *param_2 = (ulong)(pbVar10 + 2);
              bVar23 = pbVar10[1];
              pbVar15 = pbVar10 + 2;
            }
            else if (bVar1 == 0x22) {
              pbVar15 = pbVar10 + 2;
              *param_2 = (ulong)pbVar15;
              if (bVar14 == 0x6e) {
                bVar23 = 10;
              }
              else {
                if (bVar14 != 0x72) {
                  bVar23 = bVar14;
                  if (bVar14 == 0x74) {
                    bVar23 = 9;
                  }
                  goto LAB_10001d17;
                }
                bVar23 = 0xd;
              }
            }
          }
        }
LAB_10001d17:
        pbVar10 = pbVar15;
        if (lVar9 == 0x10f) {
          pcVar18 = str_1000285f;
          goto LAB_10001ddb;
        }
        *(byte *)((long)local_178 + lVar9) = bVar23;
        lVar9 = lVar9 + 1;
      }
      if (pbVar10 == pbVar2) {
        pcVar18 = str_100028f9;
        goto LAB_10001ddb;
      }
      *param_2 = (ulong)(pbVar10 + 1);
      goto LAB_10001de7;
    }
    bVar14 = bVar1 - 0x30U;
    if (bVar14 < 10) {
      uVar6 = 10;
      if (pbVar10 < pbVar2 && bVar1 == 0x30) {
        bVar14 = 0;
        bVar23 = 0;
        if (*pbVar10 == 0x78) {
          pbVar10 = pbVar15 + 2;
          *param_2 = (ulong)pbVar10;
          uVar6 = 0x10;
          bVar23 = 1;
          bVar14 = 0;
        }
      }
      else {
        bVar23 = 0;
      }
      uVar8 = (ulong)bVar14;
      lVar9 = 0;
      while (pbVar10 < pbVar2) {
        bVar1 = *pbVar10;
        if ((byte)(bVar1 - 0x30U) < 10) {
          uVar5 = bVar1 - 0x30U;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          uVar5 = (int)(char)bVar1 - 0x57;
        }
        else {
          uVar5 = (int)(char)bVar1 - 0x37;
          if (5 < (byte)(bVar1 + 0xbf)) {
            uVar5 = 99;
          }
        }
        if (uVar6 <= uVar5) break;
        if (~(ulong)uVar5 / (ulong)uVar6 < uVar8) {
          pcVar18 = str_1000290d;
          goto LAB_10001be3;
        }
        uVar8 = uVar8 * uVar6 + (ulong)uVar5;
        pbVar10 = pbVar10 + 1;
        *param_2 = (ulong)pbVar10;
        lVar9 = lVar9 + -1;
      }
      if ((bool)(bVar23 & lVar9 == 0)) {
        recovered_10000d03(str_10002926);
      }
      recovered_10002361((long)param_1,0x110);
      *(undefined4 *)param_1 = 1;
      param_1[1] = uVar8;
      return param_1;
    }
    *param_2 = (ulong)pbVar15;
    uVar4 = recovered_10001430(param_2,local_58,0x20);
    if (uVar4 == '\0') {
      pcVar18 = str_10002940;
      goto LAB_10001be3;
    }
    uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x5daU));
    if ((char)uVar11 == '\0') {
      uVar8 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x5deU));
      if (((char)uVar8 != '\0') ||
         (uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x5e3U)), (char)uVar11 != '\0')) {
        local_178[0] = 3;
        local_170 = uVar8 & 0xff;
        goto LAB_10001de7;
      }
      recovered_10001b12(param_2);
      pcVar18 = (char *)*param_2;
      if (((char *)param_2[1] <= pcVar18) || (*pcVar18 != '(')) {
        lVar9 = DAT_10008608 + 1;
        puVar3 = &DAT_10006008;
        do {
          puVar16 = puVar3;
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) {
            pcVar18 = str_10002971;
            goto LAB_10001be3;
          }
          uVar11 = recovered_10000d52((long)local_58,(long)puVar16);
          puVar3 = puVar16 + 0x130;
        } while ((char)uVar11 == '\0');
        piVar21 = (int *)(puVar16 + 0x20);
        goto LAB_10001def;
      }
      *param_2 = (ulong)(pcVar18 + 1);
      recovered_10001b12(param_2);
      lVar9 = 1;
      local_60 = local_c18;
      lVar20 = 0;
      while( true ) {
        pcVar18 = (char *)*param_2;
        pcVar13 = (char *)param_2[1];
        if (pcVar13 <= pcVar18) break;
        if ((*pcVar18 == ')') || ((DAT_10008618 & 1) != 0)) goto LAB_1000209f;
        if (lVar9 == 10) {
          pcVar18 = str_10002495;
          goto LAB_10001be3;
        }
        lVar20 = lVar20 + 1;
        recovered_100014f1((int *)local_288,param_2,0);
        recovered_10002344((long)local_60,(long)local_288,0x110);
        recovered_10001b12(param_2);
        pcVar18 = (char *)*param_2;
        pcVar13 = (char *)param_2[1];
        if (pcVar13 <= pcVar18) goto LAB_1000209f;
        if (*pcVar18 != ',') {
          lVar20 = lVar9;
          goto LAB_1000209f;
        }
        *param_2 = (ulong)(pcVar18 + 1);
        recovered_10001b12(param_2);
        if (((char *)*param_2 == (char *)param_2[1]) || (*(char *)*param_2 == ')')) {
          recovered_10000d03(str_10002960);
        }
        lVar9 = lVar9 + 1;
        local_60 = local_60 + 0x44;
      }
      lVar20 = lVar9 + -1;
LAB_1000209f:
      if ((pcVar18 == pcVar13) || (*param_2 = (ulong)(pcVar18 + 1), *pcVar18 != ')')) {
        pcVar18 = str_100028b1;
        goto LAB_10001be3;
      }
      if (DAT_10008618 == 1) goto LAB_10001be8;
      uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x497U));
      if ((((char)uVar11 == '\0') &&
          (uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x49cU)), (char)uVar11 == '\0')) &&
         (uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x4a2U)), (char)uVar11 == '\0')) {
        if ((lVar20 == 0) || (local_c18[0] != 2)) {
          pcVar18 = str_10002982;
LAB_10002212:
          recovered_10000d03(pcVar18);
          goto LAB_10002217;
        }
        uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x107U));
        if ((char)uVar11 != '\0') {
          local_68 = 0;
          plVar12 = local_b00;
          lVar9 = 0;
          while( true ) {
            if (lVar20 + -1 == lVar9) {
              iVar7 = (**(code **)(DAT_10008820 + 0x38))(local_c08,lVar20 + -1,local_288,&local_68);
              if (iVar7 == 0) {
                recovered_10000d03(str_100024c0);
              }
              uVar11 = local_68;
              recovered_10002361((long)param_1,0x110);
              *(undefined4 *)param_1 = 1;
              param_1[1] = uVar11;
              return param_1;
            }
            if (((*(uint *)(plVar12 + -1) | 2) != 3) || (*plVar12 < 0)) break;
            local_288[lVar9] = *plVar12;
            lVar9 = lVar9 + 1;
            plVar12 = plVar12 + 0x22;
          }
          pcVar18 = str_100029a2;
          goto LAB_10002212;
        }
        if (lVar20 != 1) {
          pcVar18 = str_100029ca;
          goto LAB_10002212;
        }
        uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x669U));
        if ((char)uVar11 == '\0') {
          uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x66eU));
          if ((char)uVar11 == '\0') {
            uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x202U));
            if ((char)uVar11 == '\0') {
              uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x21eU));
              if ((char)uVar11 == '\0') {
                uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x102U));
                if ((char)uVar11 == '\0') {
                  recovered_10000d03(str_100029ea);
                  uVar6 = 0;
                }
                else {
                  (**(code **)(DAT_10008820 + 0x40))(local_c08);
                  uVar6 = 1;
                }
                goto LAB_100022f8;
              }
              uVar11 = 1;
            }
            else {
              uVar11 = 0;
            }
            uVar6 = (**(code **)(DAT_10008820 + 0x30))(local_c08,uVar11);
          }
          else {
            uVar6 = (**(code **)(DAT_10008820 + 0x28))(local_c08);
          }
        }
        else {
          uVar6 = (**(code **)(DAT_10008820 + 0x20))(local_c08);
        }
LAB_100022f8:
        *param_1 = 1;
        param_1[1] = (ulong)uVar6;
      }
      else {
        piVar21 = local_c18;
        while (bVar22 = lVar20 != 0, lVar20 = lVar20 + -1, bVar22) {
          recovered_100018b0((const byte *)piVar21);
          uVar11 = recovered_10000d52((long)local_58,((uintptr_t)pf_module_state+0x49cU));
          if ((char)uVar11 == '\0') {
            (**(code **)(DAT_10008820 + 8))(&DAT_100024bd);
          }
          piVar21 = piVar21 + 0x44;
        }
LAB_10002217:
        *param_1 = 1;
        param_1[1] = 0;
      }
      puVar19 = param_1 + 2;
      lVar9 = 0x100;
      goto LAB_10001bf0;
    }
  }
LAB_10001be8:
  lVar9 = 0x110;
  puVar19 = param_1;
LAB_10001bf0:
  recovered_10002361((long)puVar19,lVar9);
  return param_1;
}

#undef DAT_100024bd
#undef DAT_10006008
#undef DAT_10008608
#undef DAT_10008618
#undef DAT_10008820
#undef str_10002495
#undef str_100024c0
#undef str_1000285f
#undef str_1000289d
#undef str_100028b1
#undef str_100028ce
#undef str_100028f9
#undef str_1000290d
#undef str_10002926
#undef str_10002940
#undef str_10002960
#undef str_10002971
#undef str_10002982
#undef str_100029a2
#undef str_100029ca
#undef str_100029ea
#undef local_c18
#undef local_c08
#undef local_b00
#undef local_288
#undef local_178
#undef local_170
#undef local_168
#undef local_68
#undef local_60
#undef local_58
#undef auStack_d28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002344
 */

void recovered_10002344(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002361
 */

void recovered_10002361(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Freestanding compiler clearing helper; Pooka's Free Software License. */
void __bzero(void *memory,unsigned long size){volatile unsigned char *bytes=memory;while(size--)*bytes++=0;}
