/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000428
 */

void * recovered_10000428(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10008000
#define DAT_10008000 (*(int *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x62d8U)))
#undef str_10001d30
#define str_10001d30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10001d56
#define str_10001d56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26U)))
#undef str_10001d65
#define str_10001d65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35U)))
#define uStack_c0 (*(undefined4 *)(frame + 32))
#define uStack_bc (*(undefined4 *)(frame + 36))
#define uStack_b8 (*(undefined4 *)(frame + 40))
#define abStack_6c (*(byte (*)[44])(frame + 116))
#define abStack_cc (*(byte (*)[4])(frame + 20))
#define iStack_c8 (*(int *)(frame + 24))
#define uStack_c4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000434
 */

int recovered_10000434(int *api)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (api == (int *)0x0) {
    return 0;
  }
  if ((*api == 0x54584b57) && (0xf < (uint)api[2])) {
    recovered_10000f6c(abStack_cc,0x60,str_10001d30);
    recovered_10000f7c((long)abStack_cc,0x60,str_10001d56);
    recovered_10000fd4((long)abStack_cc,0x60,api[1]);
    recovered_10000f7c((long)abStack_cc,0x60,str_10001d65);
    if (*api != 0x54584b57) {
      DAT_10008008 = api;
      return 0;
    }
    if (((((uint)api[2] < 0x2c) || (api[10] == 0)) ||
        ((*(code *)(ulong)(uint)api[10])(abStack_cc), DAT_10008008 = api, *api == 0x54584b57)) &&
       ((DAT_10008008 = api, 0x5f < (uint)api[2] && (api[0x17] != 0)))) {
      iVar1 = 0;
      for (uVar3 = 0; uVar3 != 0x20; uVar3 = uVar3 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          uVar2 = recovered_100010e0(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_cc);
          if ((int)uVar2 != 0) {
            uVar2 = recovered_10000650(api,abStack_cc);
            iVar1 = (int)uVar2 + iVar1;
            if ((char)uStack_c0 < '\0') {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                uVar2 = recovered_100010e0(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                           (ulong)(uVar5 & 0xff),abStack_6c);
                if ((int)uVar2 != 0) {
                  uVar2 = recovered_10000650(api,abStack_6c);
                  iVar1 = (int)uVar2 + iVar1;
                }
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
        return 0;
      }
      if (DAT_10008000 == 0) {
        return 0;
      }
      abStack_cc[0] = 1;
      abStack_cc[1] = 0;
      abStack_cc[2] = 0;
      abStack_cc[3] = 0;
      iStack_c8 = DAT_10008000;
      uStack_c4 = 0x10000e04;
      uStack_c0 = 0x10000eb4;
      uStack_bc = 0x10000ebc;
      uStack_b8 = 0x10000ec4;
      if (((*api == 0x54584b57) && (0xd3 < (uint)api[2])) &&
         ((api[0x34] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0x34])(abStack_cc), iVar1 != 0))))
      {
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef str_10001d30
#undef str_10001d56
#undef str_10001d65
#undef uStack_c0
#undef uStack_bc
#undef uStack_b8
#undef abStack_6c
#undef abStack_cc
#undef iStack_c8
#undef uStack_c4

#undef DAT_10001d8e
#define DAT_10001d8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_10001e89
#define DAT_10001e89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x62d4U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e4U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e8U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ecU)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f0U)))
#undef str_10001d6c
#define str_10001d6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_10001d80
#define str_10001d80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10001d87
#define str_10001d87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_10001d92
#define str_10001d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62U)))
#undef str_10001dae
#define str_10001dae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_10001dbe
#define str_10001dbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_10001dd9
#define str_10001dd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_10001deb
#define str_10001deb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbU)))
#undef str_10001e03
#define str_10001e03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10001e1b
#define str_10001e1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xebU)))
#undef str_10001e34
#define str_10001e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x104U)))
#undef str_10001e45
#define str_10001e45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
#undef str_10001e55
#define str_10001e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x125U)))
#undef str_10001e64
#define str_10001e64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#undef str_10001e75
#define str_10001e75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_10001e8e
#define str_10001e8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_10001e96
#define str_10001e96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#define auStack_478 (*(undefined1 (*)[1024])(frame + 24))
#define uStack_78 (*(uint *)(frame + 1048))
#define uStack_74 (*(undefined8 *)(frame + 1052))
#define auStack_6c (*(uint (*)[3])(frame + 1060))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000650
 */

undefined8 recovered_10000650(int *param_1,byte *param_2)

{
  unsigned char frame[1200] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined4 *controller;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long extraout_x0;
  long extraout_x0_00;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;

  uVar2 = DAT_10008004;
  if (param_2[8] != 1) {
    return 0;
  }
  if (param_2[9] != 8) {
    return 0;
  }
  if (param_2[10] != 2) {
    return 0;
  }
  uVar15 = (ulong)DAT_10008004;
  if (3 < DAT_10008004) {
    return 0;
  }
  recovered_10000f6c(auStack_478,0x400,str_10001d6c);
  recovered_10001268((long)auStack_478,str_10001d80,(uint)*(ushort *)(param_2 + 4));
  recovered_10001268((long)auStack_478,str_10001d87,(uint)*(ushort *)(param_2 + 6));
  recovered_100012f4((long)auStack_478,&DAT_10001d8e,(uint)*param_2);
  auStack_6c[0] = 0;
  if (param_1 == (int *)0x0) {
    recovered_10000f7c((long)auStack_478,0x400,str_10001deb);
    return 0;
  }
  if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    uVar10 = recovered_1000121c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)auStack_6c);
    if ((int)uVar10 == 0) {
      pcVar11 = str_10001e03;
      goto LAB_1000078c;
    }
    uVar6 = 0;
    lVar1 = uVar15 * 0x100;
    controller = (undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0x6380U));
    for (lVar12 = 0x14; lVar12 != 0x2c; lVar12 = lVar12 + 4) {
      uVar14 = uVar6 | 1;
      if (*(uint *)(param_2 + lVar12) != 0) {
        uVar6 = uVar6 | 2;
      }
      if ((*(uint *)(param_2 + lVar12) & 1) != 0) {
        uVar6 = uVar14;
      }
    }
    lVar12 = recovered_10001084(((uintptr_t)pf_module_state + 0x14U));
    if (lVar12 != 0) {
      uVar6 = uVar6 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar6 = uVar6 | 2;
      }
    }
    uStack_74 = CONCAT44(auStack_6c[0] | uVar6,(uint)uStack_74);
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
       ((param_1[0x18] == 0 ||
        (iVar5 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
        iVar5 == 0)))) {
      pcVar11 = str_10001e1b;
      goto LAB_1000078c;
    }
    recovered_1000121c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)&uStack_74 + 4);
    recovered_10001268((long)auStack_478,str_10001e34,auStack_6c[0]);
    uVar14 = PF_PART4(uStack_74, 4);
    recovered_10001268((long)auStack_478,str_10001e45,PF_PART4(uStack_74, 4));
    recovered_10001268((long)auStack_478,str_10001e55,uVar6);
    if ((uVar6 & (uVar14 ^ 0xffffffff)) == 0) {
      uStack_74 = 0;
      uStack_78 = 0;
      uVar6 = *(uint *)(param_2 + 0x14);
      if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
        if ((uVar6 & 6) == 4) {
          iVar5 = *(int *)(param_2 + 0x18);
        }
        else {
          iVar5 = 0;
        }
        uVar6 = uVar6 & 0xfffffff0;
        if (uVar6 != 0 || iVar5 != 0) {
          *(undefined8 *)(lVar1 + ((uintptr_t)pf_module_state + 0x6388U)) = 0;
          auStack_6c[0] = 0;
          if (*param_1 == 0x54584b57) {
            if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
              if ((iVar5 == 0) &&
                 (((0x67 < (uint)param_1[2] && (param_1[0x19] != 0)) &&
                  (iVar5 = (*(code *)(ulong)(uint)param_1[0x19])(uVar6,0,0x4000,auStack_6c),
                  iVar5 != 0)))) {
                uVar15 = (ulong)auStack_6c[0];
                *(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6388U)) = uVar15;
                goto LAB_10000980;
              }
            }
            else {
              iVar5 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar6,iVar5,0x4000,lVar1 + ((uintptr_t)pf_module_state + 0x6388U));
              if (iVar5 != 0) {
                uVar15 = *(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6388U));
LAB_10000980:
                if (((uVar15 != 0) &&
                    (uVar10 = recovered_10001358(param_1,(long)controller,0,(long)&uStack_74 + 4),
                    (int)uVar10 != 0)) &&
                   (uVar10 = recovered_10001358(param_1,(long)controller,4,(long)&uStack_74),
                   (int)uVar10 != 0)) {
                  auStack_6c[0] = 0;
                  uVar10 = recovered_10001358(param_1,(long)controller,0x1c,(long)auStack_6c);
                  if (((int)uVar10 != 0) && ((auStack_6c[0] & 1) == 0)) {
                    uVar6 = 4 << (ulong)((uint)uStack_74 & 0xf);
                    *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6390U)) = uVar6;
                    if (uVar6 < 0x401) {
                      uVar14 = PF_PART4(uStack_74, 4);
                      uVar6 = 0x20;
                      if ((uStack_74 & 0xffe000000000) == 0) {
                        uVar6 = (PF_PART4(uStack_74, 4) & 0xffff) + 1;
                      }
                      *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6394U)) = uVar6;
                      if (1 < uVar6) {
                        uVar15 = *(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6388U)) + 0x1000;
                        uVar6 = recovered_100013d0(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x63a0U),0x10,0x40,uVar15);
                        if ((((uVar6 != 0) &&
                             (uVar6 = recovered_100013d0(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x63d0U),0x10,0x10,
                                                         uVar15 + *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6390U))),
                             uVar6 != 0)) &&
                            (uVar6 = recovered_100013d0(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x6400U),
                                                        *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6394U)),0x40,
                                                        uVar15 + (uint)(*(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x6390U))
                                                                       << 1)), uVar6 != 0)) &&
                           (uVar6 = recovered_100013d0(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x6430U),
                                                       *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6394U)),0x10,
                                                       uVar15 + (uint)(*(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x6390U))
                                                                      * 3)), uVar6 != 0)) {
                          uVar15 = recovered_1000145c(param_1,0x2000);
                          *(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)) = uVar15;
                          uVar15 = recovered_1000145c(param_1,0x1000);
                          *(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6470U)) = uVar15;
                          if (((*(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)) != 0) && (uVar15 != 0)) &&
                             ((uVar6 = recovered_100014b4(param_1,*(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)),
                                                          0x2000,lVar1 + ((uintptr_t)pf_module_state + 0x6468U)), uVar6 != 0 &&
                              ((uVar6 = recovered_100014b4(param_1,*(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6470U)),
                                                           0x1000,lVar1 + ((uintptr_t)pf_module_state + 0x6478U)), uVar6 != 0 &&
                               (uVar10 = recovered_10001358(param_1,(long)controller,0x14,
                                                            (long)&uStack_78), (int)uVar10 != 0)))))
                             ) {
                            uVar6 = (uVar14 >> 0x18) * 500 + 500;
                            if ((uStack_78 & 1) != 0) {
                              recovered_100014f0(param_1,(ulong)controller,0x14,
                                                 uStack_78 & 0xfffffffe);
                              uVar10 = recovered_10001508(param_1,(long)controller,0,uVar6);
                              if ((int)uVar10 == 0) goto LAB_10000dc8;
                            }
                            recovered_100014f0(param_1,(ulong)controller,0x24,0xf000f);
                            recovered_100014f0(param_1,(ulong)controller,0x28,
                                               *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x63a8U)));
                            recovered_100014f0(param_1,(ulong)controller,0x2c,
                                               *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x63acU)));
                            recovered_100014f0(param_1,(ulong)controller,0x30,
                                               *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x63d8U)));
                            recovered_100014f0(param_1,(ulong)controller,0x34,
                                               *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x63dcU)));
                            recovered_100014f0(param_1,(ulong)controller,0xc,0xffffffff);
                            recovered_100014f0(param_1,(ulong)controller,0x14,0x460000);
                            recovered_100014f0(param_1,(ulong)controller,0x14,0x460001);
                            uVar10 = recovered_10001508(param_1,(long)controller,1,uVar6);
                            if ((int)uVar10 != 0) {
                              auStack_6c[0] = auStack_6c[0] & 0xffff0000;
                              recovered_10001630((long)controller,(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x63a0U)),5,0,
                                                 (undefined2 *)auStack_6c);
                              recovered_10001698(extraout_x0,*(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0x6438U)),
                                                 *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0x643cU)),0,0);
                              iVar5 = *(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x6394U)) * 0x10000 + -0xffff;
                              *(undefined2 *)(extraout_x0 + 0x28) = 1;
                              *(char *)(extraout_x0 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                              *(char *)(extraout_x0 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                              *(undefined4 *)(extraout_x0 + 0x2c) = 1;
                              uVar15 = recovered_1000170c(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x63a0U),
                                                          (long *)(lVar1 + ((uintptr_t)pf_module_state + 0x63d0U)),
                                                          auStack_6c[0] & 0xffff);
                              if ((int)uVar15 != 0) {
                                recovered_10001630((long)controller,(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x63a0U)),1,0
                                                   ,(undefined2 *)auStack_6c);
                                recovered_10001698(extraout_x0_00,
                                                   *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0x6408U)),
                                                   *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state + 0x640cU)),0,0);
                                iVar5 = *(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x6394U)) * 0x10000 + -0xffff;
                                *(undefined2 *)(extraout_x0_00 + 0x28) = 1;
                                *(char *)(extraout_x0_00 + 0x2a) = (char)((uint)iVar5 >> 0x10);
                                *(char *)(extraout_x0_00 + 0x2b) = (char)((uint)iVar5 >> 0x18);
                                *(undefined4 *)(extraout_x0_00 + 0x2c) = 0x10001;
                                uVar15 = recovered_1000170c(param_1,lVar1 + ((uintptr_t)pf_module_state + 0x63a0U),
                                                            (long *)(lVar1 + ((uintptr_t)pf_module_state + 0x63d0U)),
                                                            auStack_6c[0] & 0xffff);
                                if ((int)uVar15 != 0) {
                                  *controller = 1;
                                  DAT_10008004 = DAT_10008004 + 1;
                                  uVar15 = recovered_100018ac(param_1,(long)controller,1,0);
                                  if ((int)uVar15 != 0) {
                                    uVar6 = recovered_10001888(*(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6470U)),0x204);
                                    if (7 < uVar6) {
                                      uVar6 = 8;
                                    }
                                    uVar15 = 1;
                                    while (uVar14 = (uint)uVar15,
                                          uVar14 <= uVar6 && DAT_10008000 < 8) {
                                      uVar9 = recovered_100018ac(param_1,(long)controller,0,uVar15);
                                      if ((int)uVar9 != 0) {
                                        lVar12 = *(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6470U));
                                        uVar7 = recovered_10001888(lVar12,0);
                                        uVar8 = recovered_10001888(lVar12,4);
                                        if (CONCAT44(uVar8,uVar7) != 0) {
                                          uVar13 = ((ulong)*(byte *)(lVar12 + 0x1a) & 0xf) << 2 |
                                                   0x80;
                                          bVar3 = *(byte *)(lVar12 + uVar13 + 2);
                                          uVar9 = (ulong)bVar3;
                                          uVar4 = bVar3 - 9;
                                          if (uVar4 == 0 || bVar3 == 0xc) {
                                            if ((*(char *)(lVar12 + uVar13) == '\0') &&
                                               (*(char *)(lVar12 + uVar13 + 1) == '\0')) {
                                              uVar15 = CONCAT44(uVar8,uVar7) <<
                                                       ((ulong)uVar4 & 0x3f);
                                              if (0xfffffffe < uVar15) {
                                                uVar15 = 0xffffffff;
                                              }
                                              lVar12 = (ulong)DAT_10008000 * 0x14;
                                              uVar4 = 1 << (ulong)(bVar3 & 0x1f);
                                              uVar9 = (ulong)uVar4;
                                              *(uint *)(&DAT_10008018 + lVar12) = uVar14;
                                              *(uint *)(&DAT_1000801c + lVar12) = uVar4;
                                              *(uint *)(&DAT_10008020 + lVar12) = (uint)uVar15;
                                              *(undefined4 *)(&DAT_10008010 + lVar12) = 1;
                                              *(uint *)(&DAT_10008014 + lVar12) = uVar2;
                                              DAT_10008000 = DAT_10008000 + 1;
                                              recovered_100012f4((long)auStack_478,&DAT_10001e89,
                                                                 uVar14);
                                              recovered_100012f4((long)auStack_478,str_10001e8e,
                                                                 (uint)uVar15);
                                              pcVar11 = str_10001e96;
                                            }
                                            else {
                                              pcVar11 = str_10001e75;
                                              uVar9 = uVar15;
                                            }
                                          }
                                          else {
                                            pcVar11 = str_10001e64;
                                          }
                                          recovered_100012f4((long)auStack_478,pcVar11,(uint)uVar9);
                                        }
                                      }
                                      uVar15 = (ulong)(uVar14 + 1);
                                    }
                                  }
                                  if (param_1[3] != 0) {
                                    (*(code *)(ulong)(uint)param_1[3])
                                              (str_10001dd9,str_10001dae,auStack_478);
                                  }
                                  return 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_10000dc8:
      uVar2 = param_1[3];
      if (uVar2 == 0) {
        return 0;
      }
      pcVar11 = str_10001dbe;
      goto LAB_100007a4;
    }
  }
  else {
    pcVar11 = str_10001deb;
LAB_1000078c:
    recovered_10000f7c((long)auStack_478,0x400,pcVar11);
  }
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    return 0;
  }
  pcVar11 = str_10001d92;
LAB_100007a4:
  (*(code *)(ulong)uVar2)(pcVar11,str_10001dae,auStack_478);
  return 0;
}

#undef DAT_10001d8e
#undef DAT_10001e89
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008014
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef str_10001d6c
#undef str_10001d80
#undef str_10001d87
#undef str_10001d92
#undef str_10001dae
#undef str_10001dbe
#undef str_10001dd9
#undef str_10001deb
#undef str_10001e03
#undef str_10001e1b
#undef str_10001e34
#undef str_10001e45
#undef str_10001e55
#undef str_10001e64
#undef str_10001e75
#undef str_10001e8e
#undef str_10001e96
#undef auStack_478
#undef uStack_78
#undef uStack_74
#undef auStack_6c

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f0U)))
#undef str_10001ea2
#define str_10001ea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e04
 */

undefined8 recovered_10000e04(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_1 < DAT_10008000) {
    uVar2 = 0;
    if ((param_2 != (undefined4 *)0x0) && (*(int *)(&DAT_10008010 + (ulong)param_1 * 0x14) != 0)) {
      *param_2 = *(undefined4 *)(&DAT_10008020 + (ulong)param_1 * 0x14);
      uVar2 = 1;
      if ((param_3 != 0) && (param_4 != 0)) {
        uVar4 = 0;
        uVar1 = param_4 - 1;
        uVar5 = (ulong)uVar1;
        if (8 < uVar1) {
          uVar1 = 9;
        }
        uVar3 = (ulong)uVar1;
        for (; uVar3 != uVar4; uVar4 = uVar4 + 1) {
          *(char *)(param_3 + uVar4) = str_10001ea2[uVar4];
        }
        if (uVar4 < uVar5) {
          *(byte *)(param_3 + uVar3) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
          uVar3 = (ulong)(uVar1 + 1);
        }
        *(undefined1 *)(param_3 + uVar3) = 0;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_10008000
#undef DAT_10008010
#undef DAT_10008020
#undef str_10001ea2

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x62d8U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb4
 */

/* WARNING: Removing unreachable block (ram,0x10001a14) */
/* WARNING: Removing unreachable block (ram,0x10001a24) */
/* WARNING: Removing unreachable block (ram,0x10001a40) */
/* WARNING: Removing unreachable block (ram,0x10001a50) */
/* WARNING: Removing unreachable block (ram,0x10001a6c) */

undefined8 recovered_10000eb4(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;

  if (param_1 < DAT_10008000) {
    piVar12 = (int *)0x0;
    if (*(int *)(&DAT_10008010 + (ulong)param_1 * 0x14) != 0) {
      piVar12 = (int *)(&DAT_10008010 + (ulong)param_1 * 0x14);
    }
  }
  else {
    piVar12 = (int *)0x0;
  }
  uVar9 = 0;
  if ((((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (piVar12 != (int *)0x0)) &&
     (DAT_10008008 != (int *)0x0)) {
    if ((uint)piVar12[4] < param_2 || piVar12[4] - param_2 < param_4) {
      uVar9 = 0;
    }
    else {
      uVar2 = piVar12[1];
      uVar3 = (uint)piVar12[3] >> 9;
      for (; param_4 != 0; param_4 = param_4 - (uVar1 >> 9)) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_2 / uVar3;
        }
        iVar4 = param_2 - uVar6 * uVar3;
        uVar5 = iVar4 * -0x200 + 0x2000;
        uVar1 = param_4 << 9;
        if ((ulong)uVar5 <= (ulong)param_4 * 0x200) {
          uVar1 = uVar5;
        }
        uVar5 = piVar12[3];
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = ((uVar5 + uVar1 + iVar4 * 0x200) - 1) / uVar5;
        }
        uVar10 = recovered_10001b0c(DAT_10008008,(ulong)uVar2 * 0x100 + ((uintptr_t)pf_module_state + 0x6380U),
                                    (ulong)(uint)piVar12[2],2,(ulong)uVar6,uVar7,uVar5);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        iVar11 = 0;
        puVar8 = param_3;
        for (uVar10 = (ulong)uVar1; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar8 = *(undefined1 *)
                     (*(long *)((ulong)uVar2 * 0x100 + ((uintptr_t)pf_module_state + 0x6460U)) +
                     (ulong)(uint)(iVar4 * 0x200 + iVar11));
          iVar11 = iVar11 + 1;
          puVar8 = puVar8 + 1;
        }
        param_3 = param_3 + uVar1;
        param_2 = param_2 + (uVar1 >> 9);
      }
      uVar9 = 1;
    }
  }
  return uVar9;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x62d8U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ebc
 */

/* WARNING: Removing unreachable block (ram,0x10001a9c) */
/* WARNING: Removing unreachable block (ram,0x10001ab8) */
/* WARNING: Removing unreachable block (ram,0x10001ac8) */
/* WARNING: Removing unreachable block (ram,0x10001ae4) */

undefined8 recovered_10000ebc(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;

  if (param_1 < DAT_10008000) {
    piVar14 = (int *)0x0;
    if (*(int *)(&DAT_10008010 + (ulong)param_1 * 0x14) != 0) {
      piVar14 = (int *)(&DAT_10008010 + (ulong)param_1 * 0x14);
    }
  }
  else {
    piVar14 = (int *)0x0;
  }
  uVar11 = 0;
  if ((((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (piVar14 != (int *)0x0)) &&
     (DAT_10008008 != (int *)0x0)) {
    if ((uint)piVar14[4] < param_2 || piVar14[4] - param_2 < param_4) {
      uVar11 = 0;
    }
    else {
      lVar1 = (ulong)(uint)piVar14[1] * 0x100;
      uVar4 = (uint)piVar14[3] >> 9;
      for (; param_4 != 0; param_4 = param_4 - (uVar2 >> 9)) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = param_2 / uVar4;
        }
        iVar5 = param_2 - uVar7 * uVar4;
        uVar6 = iVar5 * -0x200 + 0x2000;
        uVar2 = param_4 << 9;
        if ((ulong)uVar6 <= (ulong)param_4 * 0x200) {
          uVar2 = uVar6;
        }
        uVar6 = uVar2 + iVar5 * 0x200;
        uVar3 = piVar14[3];
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = ((uVar3 + uVar6) - 1) / uVar3;
        }
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar6 / uVar3;
        }
        if ((uVar6 != uVar9 * uVar3 || iVar5 != 0) &&
           (uVar12 = recovered_10001b0c(DAT_10008008,lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(ulong)(uint)piVar14[2],2,
                                        (ulong)uVar7,uVar8,uVar3), (int)uVar12 == 0)) {
          return uVar12;
        }
        iVar13 = 0;
        puVar10 = param_3;
        for (uVar12 = (ulong)uVar2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)(*(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)) + (ulong)(uint)(iVar5 * 0x200 + iVar13)) =
               *puVar10;
          iVar13 = iVar13 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar12 = recovered_10001b0c(DAT_10008008,lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(ulong)(uint)piVar14[2],1,
                                    (ulong)uVar7,uVar8,piVar14[3]);
        if ((int)uVar12 == 0) {
          return uVar12;
        }
        param_3 = param_3 + uVar2;
        param_2 = param_2 + (uVar2 >> 9);
      }
      uVar11 = 1;
    }
  }
  return uVar11;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x62d8U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
#define auStack_140 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec4
 */

ulong recovered_10000ec4(uint param_1)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;

  if (param_1 < DAT_10008000) {
    piVar10 = (int *)0x0;
    if (*(int *)(&DAT_10008010 + (ulong)param_1 * 0x14) != 0) {
      piVar10 = (int *)(&DAT_10008010 + (ulong)param_1 * 0x14);
    }
  }
  else {
    piVar10 = (int *)0x0;
  }
  if ((piVar10 == (int *)0x0) || (DAT_10008008 == (int *)0x0)) {
    return 0;
  }
  lVar1 = (ulong)(uint)piVar10[1] * 0x100;
  recovered_10001630(lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6400U)),0,piVar10[2],auStack_140 + 0x8f
                    );
  piVar10 = DAT_10008008;
  recovered_10001854(DAT_10008008);
  uVar6 = *(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x6418U)) + 1;
  uVar3 = *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6410U));
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar7 = uVar6 / uVar3;
  }
  uVar6 = uVar6 - uVar7 * uVar3;
  *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6418U)) = uVar6;
  if ((((piVar10 != (int *)0x0) && (*piVar10 == 0x54584b57)) && (0x7b < (uint)piVar10[2])) &&
     (piVar10[0x1e] != 0)) {
    (*(code *)(ulong)(uint)piVar10[0x1e])();
    uVar6 = *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6418U));
  }
  uVar6 = recovered_1000159c(piVar10,*(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6428U)),uVar6);
  uVar8 = (ulong)uVar6;
  if (uVar6 != 0) {
    for (uVar6 = 0; uVar6 < 5000000; uVar6 = uVar6 + 100) {
      lVar9 = *(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6430U));
      uVar7 = *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x644cU));
      uVar3 = *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6444U));
      recovered_10001854(piVar10);
      uVar7 = recovered_10001888(lVar9 + (ulong)uVar3 * (ulong)uVar7,0xc);
      uVar3 = uVar7 >> 0x10 & 1;
      if (uVar3 == *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6450U))) {
        uVar2 = *(int *)(lVar1 + ((uintptr_t)pf_module_state + 0x644cU)) + 1;
        uVar4 = *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6440U));
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar2 / uVar4;
        }
        uVar2 = uVar2 - uVar5 * uVar4;
        *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x644cU)) = uVar2;
        if (uVar2 == 0) {
          *(uint *)(lVar1 + ((uintptr_t)pf_module_state + 0x6450U)) = uVar3 ^ 1;
        }
        recovered_1000159c(piVar10,*(ulong *)(lVar1 + ((uintptr_t)pf_module_state + 0x6458U)),uVar2);
        if ((uVar7 & 0xffff) == 0) {
          return (ulong)(uVar7 < 0x20000);
        }
      }
      else {
        recovered_100015fc(piVar10,100);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010
#undef auStack_140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f6c
 */

void recovered_10000f6c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001084((long)param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f7c
 */

void recovered_10000f7c(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001084(param_1);
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


#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd4
 */

void recovered_10000fd4(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001084(param_1);
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
    recovered_100010a0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001084
 */

long recovered_10001084(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a0
 */

void recovered_100010a0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001084(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

undefined8
recovered_100010e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_1000121c(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != -1)) &&
         (uVar2 = recovered_1000121c(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_1000121c(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_1000121c(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_1000121c(param_1,param_2,param_3,param_4,
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
 * Address: 0x1000121c
 */

undefined8
recovered_1000121c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10001de7
#define DAT_10001de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb7U)))
#undef DAT_10001de9
#define DAT_10001de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001268
 */

void recovered_10001268(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  recovered_10000f7c(param_1,0x400,&DAT_10001de7);
  recovered_10000f7c(param_1,0x400,param_2);
  recovered_10000f7c(param_1,0x400,&DAT_10001de9);
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_100010a0(param_1,0x400,bVar2);
  }
  return;
}

#undef DAT_10001de7
#undef DAT_10001de9

#undef DAT_10001de7
#define DAT_10001de7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb7U)))
#undef DAT_10001de9
#define DAT_10001de9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f4
 */

void recovered_100012f4(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10000f7c(param_1,0x400,&DAT_10001de7);
  recovered_10000f7c(param_1,0x400,param_2);
  recovered_10000f7c(param_1,0x400,&DAT_10001de9);
  if (param_3 == 0) {
    lVar1 = recovered_10001084(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x400)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    abStack_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_100010a0(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_10001de7
#undef DAT_10001de9
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001358
 */

undefined8 recovered_10001358(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((((param_4 != 0) && (*(long *)(param_2 + 8) != 0)) && (param_1 != (int *)0x0)) &&
     (*param_1 == 0x54584b57)) {
    uVar1 = *(long *)(param_2 + 8) + (param_3 & 0xffffffff);
    if ((0xbf < (uint)param_1[2]) && (param_1[0x2f] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((uVar1 >> 0x20 == 0) && ((0x6b < (uint)param_1[2] && (param_1[0x1a] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100013c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_100013d0(int *api,ulong queue,uint entries,uint entry_size,ulong doorbell){
 uint bytes=entries*entry_size;ulong pointer=0;
 if(api && (uint)api[0]==0x54584b57U && (uint)api[2]>=56 && api[13])pointer=((ulong (*)(uint))(uintptr_t)(uint)api[13])(bytes+4096U);
 pointer=pointer?(pointer+4095U)&~(ulong)4095U:0;
 *(ulong *)queue=pointer;if(!pointer)return 0;
 for(uint i=0;i<bytes;i++)((volatile byte *)pointer)[i]=0;
 if(!recovered_100014b4(api,pointer,bytes,queue+8))return 0;
 *(uint *)(queue+16)=entries;*(uint *)(queue+20)=entry_size;*(ulong *)(queue+24)=0;*(uint *)(queue+32)=1;*(ulong *)(queue+40)=doorbell;
 return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000145c
 */

ulong recovered_1000145c(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != (int *)0x0) {
    if (((*param_1 == 0x54584b57) && (0x37 < (uint)param_1[2])) && (param_1[0xd] != 0)) {
      lVar2 = (*(code *)(ulong)(uint)param_1[0xd])(param_2 + 0x1000);
    }
    else {
      lVar2 = 0;
    }
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = lVar2 + 0xfffU & 0xfffffffffffff000;
  }
  return uVar1;
}


/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_100014b4(int *api,ulong pointer,uint size,ulong output){
 if(!api || (uint)api[0]!=0x54584b57U || (uint)api[2]<116 || !pointer || !output || !api[28])return 0;
 return ((uint (*)(ulong,ulong,ulong,ulong))(uintptr_t)(uint)api[28])(0,pointer,size,output);

}


/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
void recovered_100014f0(int *api,ulong controller,uint offset,uint value){
 ulong base=*(ulong *)(controller+8);
 if(base)recovered_1000159c(api,base+offset,value);
}


#define local_44 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001508
 */

undefined8 recovered_10001508(int *param_1,long param_2,int param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (param_4 < uVar2) {
      return 0;
    }
    local_44 = 0;
    uVar1 = recovered_10001358(param_1,param_2,0x1c,(long)&local_44);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if ((local_44 >> 1 & 1) != 0) {
      return 0;
    }
    if ((uint)(param_3 == 0) != (local_44 & 1)) break;
    recovered_100015fc(param_1,1000);
    uVar2 = uVar2 + 1;
  }
  return 1;
}

#undef local_44

/* Pooka's Free Software License. Recovered NVMe hardware service transport. */
uint recovered_1000159c(int *api,ulong address,uint value){
 if(!api || (uint)api[0]!=0x54584b57U)return 0;
 uint slot=0;
 if((uint)api[2]>=196 && api[48])slot=48;
 else {if(address>>32)return 0;if((uint)api[2]>=112 && api[27])slot=27;}
 if(!slot)return 0;
 return ((uint (*)(ulong,uint,uint))(uintptr_t)(uint)api[slot])(address,4,value);

}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015fc
 */

void recovered_100015fc(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

void recovered_10001630(long param_1,long *param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  long lVar3;

  puVar2 = (undefined1 *)
           (*param_2 + (ulong)*(uint *)((long)param_2 + 0x14) * (ulong)*(uint *)(param_2 + 3));
  iVar1 = *(ushort *)(param_1 + 0x18) + 1;
  *(short *)(param_1 + 0x18) = (short)iVar1;
  for (lVar3 = 0; lVar3 != 0x40; lVar3 = lVar3 + 1) {
    puVar2[lVar3] = 0;
  }
  *puVar2 = param_3;
  puVar2[2] = (char)iVar1;
  puVar2[3] = (char)((uint)iVar1 >> 8);
  puVar2[4] = (char)param_4;
  puVar2[5] = (char)((uint)param_4 >> 8);
  puVar2[6] = (char)((uint)param_4 >> 0x10);
  puVar2[7] = (char)((uint)param_4 >> 0x18);
  *param_5 = (short)iVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001698
 */

void recovered_10001698(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(char *)(param_1 + 0x18) = (char)param_2;
  *(char *)(param_1 + 0x19) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x1c) = (char)param_3;
  *(char *)(param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x20) = (char)param_4;
  *(char *)(param_1 + 0x21) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x22) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x23) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x24) = (char)param_5;
  *(char *)(param_1 + 0x25) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x26) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x27) = (char)((uint)param_5 >> 0x18);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000170c
 */

ulong recovered_1000170c(int *param_1,long param_2,long *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;

  recovered_10001854(param_1);
  uVar5 = *(int *)(param_2 + 0x18) + 1;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar5 / uVar2;
  }
  uVar5 = uVar5 - uVar6 * uVar2;
  *(uint *)(param_2 + 0x18) = uVar5;
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x7b < (uint)param_1[2])) &&
     (param_1[0x1e] != 0)) {
    (*(code *)(ulong)(uint)param_1[0x1e])();
    uVar5 = *(uint *)(param_2 + 0x18);
  }
  uVar5 = recovered_1000159c(param_1,*(ulong *)(param_2 + 0x28),uVar5);
  uVar7 = (ulong)uVar5;
  if (uVar5 != 0) {
    for (uVar5 = 0; uVar5 < 5000000; uVar5 = uVar5 + 100) {
      lVar8 = *param_3;
      uVar6 = *(uint *)((long)param_3 + 0x1c);
      uVar2 = *(uint *)((long)param_3 + 0x14);
      recovered_10001854(param_1);
      uVar6 = recovered_10001888(lVar8 + (ulong)uVar2 * (ulong)uVar6,0xc);
      uVar2 = uVar6 >> 0x10 & 1;
      if (uVar2 == *(uint *)(param_3 + 4)) {
        uVar1 = *(int *)((long)param_3 + 0x1c) + 1;
        uVar3 = *(uint *)(param_3 + 2);
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar1 / uVar3;
        }
        uVar1 = uVar1 - uVar4 * uVar3;
        *(uint *)((long)param_3 + 0x1c) = uVar1;
        if (uVar1 == 0) {
          *(uint *)(param_3 + 4) = uVar2 ^ 1;
        }
        recovered_1000159c(param_1,param_3[5],uVar1);
        if (param_4 == (uVar6 & 0xffff)) {
          return (ulong)(uVar6 < 0x20000);
        }
      }
      else {
        recovered_100015fc(param_1,100);
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

void recovered_10001854(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001888
 */

undefined4 recovered_10001888(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = param_1 + (int)param_2;
  return CONCAT13(*(undefined1 *)(lVar1 + 3),
                  CONCAT12(*(undefined1 *)(lVar1 + 2),
                           CONCAT11(*(undefined1 *)(lVar1 + 1),
                                    *(undefined1 *)(param_1 + (ulong)param_2))));
}


#define local_32 (*(ushort *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018ac
 */

ulong recovered_100018ac(int *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long extraout_x0;
  ulong uVar1;

  local_32 = 0;
  recovered_10001630(param_2,(long *)(param_2 + 0x20),6,(undefined4)param_4,&local_32);
  recovered_10001698(extraout_x0,*(undefined4 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0xfc),0,0
                    );
  *(undefined4 *)(extraout_x0 + 0x28) = param_3;
  uVar1 = recovered_1000170c(param_1,param_2 + 0x20,(long *)(param_2 + 0x50),(uint)local_32);
  if ((int)uVar1 != 0) {
    recovered_10001854(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

#undef local_32

#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x62d0U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x62d8U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001928
 */

undefined8
recovered_10001928(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;

  if (param_1 < DAT_10008000) {
    piVar14 = (int *)0x0;
    if (*(int *)(&DAT_10008010 + (ulong)param_1 * 0x14) != 0) {
      piVar14 = (int *)(&DAT_10008010 + (ulong)param_1 * 0x14);
    }
  }
  else {
    piVar14 = (int *)0x0;
  }
  uVar10 = 0;
  if ((((param_4 != 0) && (param_3 != (undefined1 *)0x0)) && (piVar14 != (int *)0x0)) &&
     (DAT_10008008 != (int *)0x0)) {
    if ((uint)piVar14[4] < param_2 || piVar14[4] - param_2 < param_4) {
      uVar10 = 0;
    }
    else {
      lVar1 = (ulong)(uint)piVar14[1] * 0x100;
      uVar3 = (uint)piVar14[3] >> 9;
      for (; param_4 != 0; param_4 = param_4 - (uVar6 >> 9)) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_2 / uVar3;
        }
        uVar13 = (ulong)uVar6;
        iVar4 = param_2 - uVar6 * uVar3;
        uVar5 = iVar4 * -0x200 + 0x2000;
        uVar6 = param_4 << 9;
        if ((ulong)uVar5 <= (ulong)param_4 * 0x200) {
          uVar6 = uVar5;
        }
        uVar15 = (ulong)uVar6;
        uVar5 = uVar6 + iVar4 * 0x200;
        uVar2 = piVar14[3];
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = ((uVar2 + uVar5) - 1) / uVar2;
        }
        if (param_5 == 0) {
          uVar13 = recovered_10001b0c(DAT_10008008,lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(ulong)(uint)piVar14[2],2,
                                      uVar13,uVar7,uVar2);
          if ((int)uVar13 == 0) {
            return uVar13;
          }
          iVar12 = 0;
          puVar9 = param_3;
          for (uVar13 = uVar15; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar9 = *(undefined1 *)
                       (*(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)) + (ulong)(uint)(iVar4 * 0x200 + iVar12));
            iVar12 = iVar12 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        else {
          uVar8 = 0;
          if (uVar2 != 0) {
            uVar8 = uVar5 / uVar2;
          }
          if ((uVar5 != uVar8 * uVar2 || iVar4 != 0) &&
             (uVar11 = recovered_10001b0c(DAT_10008008,lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(ulong)(uint)piVar14[2],2,
                                          uVar13,uVar7,uVar2), (int)uVar11 == 0)) {
            return uVar11;
          }
          iVar12 = 0;
          puVar9 = param_3;
          for (uVar11 = uVar15; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)(*(long *)(lVar1 + ((uintptr_t)pf_module_state + 0x6460U)) + (ulong)(uint)(iVar4 * 0x200 + iVar12)) =
                 *puVar9;
            iVar12 = iVar12 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar13 = recovered_10001b0c(DAT_10008008,lVar1 + ((uintptr_t)pf_module_state + 0x6380U),(ulong)(uint)piVar14[2],1,
                                      uVar13,uVar7,piVar14[3]);
          if ((int)uVar13 == 0) {
            return uVar13;
          }
        }
        param_3 = param_3 + uVar15;
        param_2 = param_2 + (uVar6 >> 9);
      }
      uVar10 = 1;
    }
  }
  return uVar10;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010

#define local_52 (*(ushort *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b0c
 */

ulong recovered_10001b0c(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,int param_6,int param_7)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  long extraout_x0;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;

  local_52 = 0;
  if (param_7 * param_6 - 0x2001U < 0xffffe000) {
    uVar2 = 0;
  }
  else {
    if ((int)param_4 == 1) {
      recovered_10001854(param_1);
    }
    recovered_10001630(param_2,(long *)(param_2 + 0x80),(char)(int)param_4,(undefined4)param_3,
                       &local_52);
    if ((uint)(param_7 * param_6) < 0x1001) {
      lVar4 = 0;
      uVar5 = 0;
      uVar2 = (ulong)*(uint *)(param_2 + 0xe8);
      uVar3 = *(undefined4 *)(param_2 + 0xec);
    }
    else {
      uVar2 = *(ulong *)(param_2 + 0xe8);
      lVar4 = uVar2 + 0x1000;
      uVar5 = (undefined4)((ulong)lVar4 >> 0x20);
      uVar3 = (undefined4)(uVar2 >> 0x20);
    }
    recovered_10001698(extraout_x0,(int)uVar2,uVar3,(int)lVar4,uVar5);
    *(char *)(extraout_x0 + 0x28) = (char)param_5;
    *(char *)(extraout_x0 + 0x29) = (char)((ulong)param_5 >> 8);
    *(char *)(extraout_x0 + 0x2a) = (char)((ulong)param_5 >> 0x10);
    *(char *)(extraout_x0 + 0x2b) = (char)((ulong)param_5 >> 0x18);
    *(undefined4 *)(extraout_x0 + 0x2c) = 0;
    iVar1 = param_6 + -1;
    *(char *)(extraout_x0 + 0x30) = (char)iVar1;
    *(char *)(extraout_x0 + 0x31) = (char)((uint)iVar1 >> 8);
    *(char *)(extraout_x0 + 0x32) = (char)((uint)iVar1 >> 0x10);
    *(char *)(extraout_x0 + 0x33) = (char)((uint)iVar1 >> 0x18);
    uVar2 = recovered_1000170c(param_1,param_2 + 0x80,(long *)(param_2 + 0xb0),(uint)local_52);
    if ((int)uVar2 != 0) {
      if ((int)param_4 == 2) {
        recovered_10001854(param_1);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_52

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
