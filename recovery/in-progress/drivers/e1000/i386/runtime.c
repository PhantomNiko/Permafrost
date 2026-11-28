/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x115U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000454
 */

void * recovered_10000454(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002000;
}

#undef DAT_10002000

#undef DAT_10001eeb
#define DAT_10001eeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10001eec
#define str_10001eec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_488 (*(int *)(pf_stack_frame + 24))
#define local_484 (*(undefined * *)(pf_stack_frame + 28))
#define local_480 (*(uint *)(pf_stack_frame + 32))
#define local_47c (*(uint *)(pf_stack_frame + 36))
#define local_478 (*(char * *)(pf_stack_frame + 40))
#define local_474 (*(uint *)(pf_stack_frame + 44))
#define local_470 (*(uint *)(pf_stack_frame + 48))
#define local_46c (*(undefined1 (*)[1132])(pf_stack_frame + 52))
#define local_460 (*(char *)(pf_stack_frame + 64))
#define local_440 (*(undefined1 (*)[1088])(pf_stack_frame + 96))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000046a
 */

uint recovered_1000046a(void *api)

{
  unsigned char pf_stack_frame[1216] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_488 = 0;
  uVar4 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    local_484 = &DAT_10001eeb;
    recovered_10000627(&DAT_10001eeb);
    if (*(code **)((int)api + 0xc) != (code *)0x0) {
      local_478 = str_10001eec;
      iVar1 = (**(code **)((int)api + 0xc))(local_484,str_10001eec,local_414);
      if (((iVar1 != 0) && (*(int *)api == 0x54584b57)) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        uVar4 = 0;
        while (uVar4 != 0x20) {
          local_47c = uVar4 & 0xff;
          uVar3 = 0;
          local_474 = uVar4;
          while (uVar3 != 0x20) {
            local_480 = uVar3;
            iVar1 = recovered_100012cf((byte)uVar3,0,local_46c);
            if (iVar1 != 0) {
              recovered_10000646(&local_488);
              if (local_460 < '\0') {
                local_470 = local_480 & 0xff;
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  iVar2 = recovered_100012cf((byte)local_470,(char)iVar1 + '\b',local_440);
                  if (iVar2 != 0) {
                    recovered_10000646(&local_488);
                  }
                }
              }
            }
            uVar3 = local_480 + 1;
          }
          uVar4 = local_474 + 1;
        }
        if (local_488 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if (*(code **)((int)api + 0xc) != (code *)0x0) {
            (**(code **)((int)api + 0xc))(local_484,local_478,local_414);
          }
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_10001eeb
#undef str_10001eec
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_460
#undef local_440
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000627
 */

void recovered_10000627(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10001268(param_1);
  }
  return;
}


#undef DAT_10001eeb
#define DAT_10001eeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10001f34
#define DAT_10001f34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_10001f39
#define DAT_10001f39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10001fa1
#define DAT_10001fa1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10001fa3
#define DAT_10001fa3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_10001fa5
#define DAT_10001fa5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef DAT_10001faa
#define DAT_10001faa (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef DAT_10001fad
#define DAT_10001fad (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef DAT_10001faf
#define DAT_10001faf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_10002100
#define DAT_10002100 (*(int * *)(((uintptr_t)pf_module_state + 0x215U)))
#undef DAT_10002104
#define DAT_10002104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_10002108
#define DAT_10002108 (*(byte *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_10002109
#define DAT_10002109 (*(byte *)(((uintptr_t)pf_module_state + 0x21eU)))
#undef DAT_1000210a
#define DAT_1000210a (*(byte *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000210b
#define DAT_1000210b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_1000210c
#define DAT_1000210c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_10002110
#define DAT_10002110 (*(uint *)(((uintptr_t)pf_module_state + 0x225U)))
#undef DAT_10002114
#define DAT_10002114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10002118
#define DAT_10002118 (*(uint *)(((uintptr_t)pf_module_state + 0x22dU)))
#undef DAT_1000211c
#define DAT_1000211c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_10002120
#define DAT_10002120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x235U)))
#undef DAT_10002124
#define DAT_10002124 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_10002128
#define DAT_10002128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23dU)))
#undef DAT_1000212c
#define DAT_1000212c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_10002130
#define DAT_10002130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x245U)))
#undef DAT_10002300
#define DAT_10002300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x415U)))
#undef DAT_10006300
#define DAT_10006300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4415U)))
#undef DAT_10006400
#define DAT_10006400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4515U)))
#undef _DAT_10002128
#define _DAT_10002128 (*(uint *)(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_10001eec
#define str_10001eec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_10001f3b
#define str_10001f3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10001f4b
#define str_10001f4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60U)))
#undef str_10001f5d
#define str_10001f5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72U)))
#undef str_10001f6a
#define str_10001f6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_10001f7c
#define str_10001f7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10001f8e
#define str_10001f8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef str_10001fb2
#define str_10001fb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7U)))
#define auStack_804 (*(undefined1 (*)[2052])(pf_stack_frame + 172))
#define local_894 (*(undefined * *)(pf_stack_frame + 28))
#define local_88c (*(byte * *)(pf_stack_frame + 36))
#define local_888 (*(uint *)(pf_stack_frame + 40))
#define local_884 (*(char * *)(pf_stack_frame + 44))
#define local_880 (*(undefined4 *)(pf_stack_frame + 48))
#define local_87c (*(uint *)(pf_stack_frame + 52))
#define local_878 (*(uint *)(pf_stack_frame + 56))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 60))
#define local_814 (*(uint *)(pf_stack_frame + 156))
#define local_810 (*(uint *)(pf_stack_frame + 160))
#define local_80c (*(undefined4 *)(pf_stack_frame + 164))
#define local_808 (*(undefined4 *)(pf_stack_frame + 168))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000646
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000646(int *param_1)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  char *pcVar4;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined1 *puVar5;
  int *in_ECX;
  byte *in_EDX;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return;
  }
  recovered_10000627(&DAT_10001eeb);
  local_888 = 0;
  local_880 = 0;
  if (in_EDX == (byte *)0x0) {
    return;
  }
  if (*(short *)(in_EDX + 4) != -0x7f7a) {
    return;
  }
  if (in_EDX[8] != 2) {
    return;
  }
  if (in_EDX[9] != 0) {
    return;
  }
  if (*(short *)(in_EDX + 6) != 0x100e) {
    return;
  }
  recovered_100016c8();
  DAT_10002130 = 0;
  DAT_10002108 = *in_EDX;
  DAT_10002109 = in_EDX[1];
  DAT_1000210a = in_EDX[2];
  DAT_10002110 = (uint)DAT_10002109 << 0xb | (uint)DAT_10002108 << 0x10 | (uint)DAT_1000210a << 8 |
                 0x80000000;
  DAT_10002100 = in_ECX;
  iVar2 = recovered_1000144c(DAT_10002109,DAT_1000210a,4,2,(int)&local_888);
  if (iVar2 == 0) {
    return;
  }
  PF_PART2(DAT_1000210c, 0) = (undefined2)local_888;
  DAT_1000210b = 1;
  local_874[0] = 0;
  uVar7 = *(uint *)(in_EDX + 0x14);
  if ((uVar7 & 1) == 0 && uVar7 != 0) {
    local_878 = uVar7;
    recovered_1000144c(in_EDX[1],in_EDX[2],0x10,4,(int)&local_878);
    uVar7 = 0;
    if ((local_878 & 7) == 4) {
      local_874[0] = *(uint *)(in_EDX + 0x18);
      recovered_1000144c(in_EDX[1],in_EDX[2],0x14,4,(int)local_874);
      uVar7 = local_874[0];
    }
    uVar3 = 0xfffffffc;
    if ((local_878 & 1) == 0) {
      uVar3 = 0xfffffff0;
    }
    uVar3 = uVar3 & local_878;
    if (uVar3 != 0 || uVar7 != 0) {
      DAT_10002104 = 0;
      local_814 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((((uint)in_ECX[2] < 0x68 || uVar7 != 0) || ((code *)in_ECX[0x19] == (code *)0x0)) ||
             (iVar2 = (*(code *)in_ECX[0x19])(uVar3,0,0x6000,&local_814), iVar2 == 0))
          goto LAB_10000bd3;
          DAT_10002104 = local_814;
        }
        else {
          iVar2 = (*(code *)in_ECX[0x2e])(uVar3,uVar7,0x6000,&DAT_10002104);
          if (iVar2 == 0) goto LAB_10000bd3;
        }
        local_814 = 0;
        pcVar4 = str_10001f6a;
        if (((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) && (in_ECX[0x18] != 0)) {
          iVar2 = recovered_1000144c(in_EDX[1],in_EDX[2],4,2,(int)&local_814);
          if (iVar2 == 0) {
            pcVar4 = str_10001f7c;
          }
          else {
            uVar7 = 0;
            for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
              uVar6 = uVar7 | 1;
              uVar3 = uVar7 | 2;
              if (*(uint *)(in_EDX + iVar2 + 0x2c) == 0) {
                uVar3 = uVar7;
              }
              uVar7 = uVar3;
              if ((*(uint *)(in_EDX + iVar2 + 0x2c) & 1) != 0) {
                uVar7 = uVar6;
              }
            }
            iVar2 = recovered_100012ae();
            local_894 = (undefined *)(uVar7 | 4);
            if (iVar2 == 0) {
              local_894 = (undefined *)uVar7;
            }
            if (in_EDX[8] == 6) {
              if (in_EDX[9] != 0) {
                local_894 = (undefined *)((uint)local_894 | 2);
              }
            }
            local_874[0] = local_814 | (uint)local_894;
            iVar2 = recovered_100017d4(in_EDX[1],in_EDX[2],local_874[0]);
            if (iVar2 != 0) {
              recovered_1000144c(in_EDX[1],in_EDX[2],4,2,(int)local_874);
              if (((uint)local_894 & ~local_874[0]) == 0) {
                local_814 = 0;
                bVar1 = recovered_100016e1();
                if (((CONCAT31(extraout_var,bVar1) != 0) &&
                    (iVar2 = recovered_1000176e(), iVar2 != 0)) &&
                   (iVar2 = recovered_1000176e(), iVar2 != 0)) {
                  iVar2 = 200;
                  do {
                    bVar1 = iVar2 == 0;
                    iVar2 = iVar2 + -1;
                    if (bVar1) goto LAB_10000bd3;
                    recovered_10001821();
                    bVar1 = recovered_100016e1();
                  } while ((CONCAT31(extraout_var_00,bVar1) == 0) || ((local_814 & 0x4000000) != 0))
                  ;
                  recovered_1000176e();
                  recovered_100016e1();
                  local_814 = 0;
                  local_874[0] = 0;
                  bVar1 = recovered_100016e1();
                  if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
                     (bVar1 = recovered_100016e1(), CONCAT31(extraout_var_02,bVar1) != 0)) {
                    _DAT_10002128 = local_814;
                    DAT_1000212c = (undefined2)local_874[0];
                    if (((int)local_874[0] < 0 && (local_814 & 1) == 0) &&
                       ((char)(local_874[0] >> 8) != '\0' ||
                        ((((char)(local_814 >> 0x18) != '\0' || (char)(local_814 >> 8) != '\0') ||
                         ((char)(local_814 >> 0x10) != '\0' || (char)local_814 != '\0')) ||
                        (char)local_874[0] != '\0'))) {
                      recovered_100016c8();
                      local_894 = &DAT_10002300;
                      recovered_100016c8();
                      local_88c = (byte *)0x8;
                      while (bVar1 = local_88c != (byte *)0x0,
                            local_88c = (byte *)((int)local_88c + -1), bVar1) {
                        local_814 = 0;
                        local_874[0] = 0;
                        iVar2 = recovered_1000184c((int)local_894,0x800,(int)&local_814);
                        if (iVar2 == 0) goto LAB_10000bd3;
                        recovered_10001898(local_874[0]);
                        local_894 = local_894 + 0x800;
                      }
                      recovered_100018d3();
                      recovered_100018d3();
                      bVar1 = recovered_10001905(((uintptr_t)pf_module_state+0x315U));
                      if ((((CONCAT31(extraout_var_03,bVar1) != 0) &&
                           (iVar2 = recovered_1000176e(), iVar2 != 0)) &&
                          (iVar2 = recovered_1000176e(), iVar2 != 0)) &&
                         (iVar2 = recovered_1000176e(), iVar2 != 0)) {
                        for (iVar2 = 0x5200; iVar2 != 0x5400; iVar2 = iVar2 + 4) {
                          recovered_1000176e();
                        }
                        DAT_10002120 = 0;
                        DAT_1000211c = 0x4008012;
                        iVar2 = recovered_1000176e();
                        if (iVar2 != 0) {
                          puVar8 = &DAT_10006300;
                          recovered_100016c8();
                          local_894 = &DAT_10006400;
                          recovered_100016c8();
                          local_88c = (byte *)0x8;
                          while (bVar1 = local_88c != (byte *)0x0,
                                local_88c = (byte *)((int)local_88c + -1), bVar1) {
                            local_814 = 0;
                            local_874[0] = 0;
                            iVar2 = recovered_1000184c((int)local_894,0x800,(int)&local_814);
                            if (iVar2 == 0) goto LAB_10000bd3;
                            recovered_10001898(local_874[0]);
                            puVar8[0xc] = 1;
                            puVar8 = puVar8 + 0x10;
                            local_894 = local_894 + 0x800;
                          }
                          recovered_100018d3();
                          bVar1 = recovered_10001905(((uintptr_t)pf_module_state+0x4415U));
                          if (((CONCAT31(extraout_var_04,bVar1) != 0) &&
                              (iVar2 = recovered_1000176e(), iVar2 != 0)) &&
                             ((iVar2 = recovered_1000176e(), iVar2 != 0 &&
                              ((iVar2 = recovered_1000176e(), iVar2 != 0 &&
                               (iVar2 = recovered_1000176e(), iVar2 != 0)))))) {
                            DAT_10002124 = 0;
                            iVar2 = recovered_1000176e();
                            if ((iVar2 != 0) &&
                               (((bVar1 = recovered_100016e1(), CONCAT31(extraout_var_05,bVar1) != 0
                                 && (iVar2 = recovered_1000176e(), iVar2 != 0)) &&
                                (bVar1 = recovered_100016e1(), CONCAT31(extraout_var_06,bVar1) != 0)
                                ))) {
                              local_88c = &DAT_10002128;
                              local_87c = local_888;
                              DAT_10002118 = local_888;
                              DAT_10002114 = 1;
                              recovered_10000627(&DAT_10001eeb);
                              recovered_10001268(&DAT_10001f34);
                              local_894 = (undefined *)0x0;
                              do {
                                if (local_894 != (undefined *)0x0) {
                                  if (local_894 == (undefined *)0x6) goto LAB_10000f07;
                                  recovered_10001268(&DAT_10001f39);
                                }
                                recovered_100014b0((uint)*local_88c,2);
                                local_894 = (undefined *)((int)local_894 + 1);
                                local_88c = local_88c + 1;
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_10000bd3;
            }
            pcVar4 = str_10001f8e;
          }
        }
        recovered_10001268(pcVar4);
      }
    }
  }
LAB_10000bd3:
  recovered_10001569();
  return;
LAB_10000f07:
  pcVar4 = str_10001f3b;
  if ((local_87c & 2) == 0) {
    pcVar4 = str_10001f4b;
  }
  recovered_10001268(pcVar4);
  recovered_10001502(0x5dc);
  recovered_10000627(str_10001f5d);
  recovered_10001268(&DAT_10001fa1);
  recovered_100014b0((uint)*in_EDX,2);
  local_884 = &DAT_10001f39;
  recovered_10001268(&DAT_10001f39);
  recovered_100014b0((uint)in_EDX[1],2);
  recovered_10001268(&DAT_10001fa3);
  recovered_10001502((uint)in_EDX[2]);
  recovered_10000627(&DAT_10001fa5);
  recovered_100014b0((uint)*in_EDX,2);
  recovered_10001268(local_884);
  recovered_100014b0((uint)in_EDX[1],2);
  recovered_10001268(&DAT_10001fa3);
  recovered_10001502((uint)in_EDX[2]);
  recovered_10001268(&DAT_10001faa);
  recovered_100014b0((uint)*(ushort *)(in_EDX + 4),4);
  recovered_10001268(local_884);
  recovered_100014b0((uint)*(ushort *)(in_EDX + 6),4);
  recovered_10001268(&DAT_10001fad);
  if (local_414[0] != '\0') {
    recovered_10001268(&DAT_10001faf);
    recovered_10001268(local_414);
  }
  if (((code *)in_ECX[3] != (code *)0x0) &&
     (iVar2 = (*(code *)in_ECX[3])(local_874,str_10001eec,&local_814), iVar2 != 0)) {
    recovered_100016c8();
    local_814 = 0xc0;
    puVar5 = &DAT_10002128;
    local_810 = DAT_10002118 & 2 | 0xd;
    local_80c = 0x5dc;
    local_808 = 0x800;
    for (iVar2 = -6; iVar2 != 0; iVar2 = iVar2 + 1) {
      auStack_804[iVar2 + 6] = *puVar5;
      puVar5 = puVar5 + 1;
    }
    recovered_10000627(str_10001eec);
    recovered_10000627(str_10001fb2);
    if (((*in_ECX == 0x54584b57) && (0xcb < (uint)in_ECX[2])) &&
       (((code *)in_ECX[0x32] != (code *)0x0 &&
        (iVar2 = (*(code *)in_ECX[0x32])(&local_814,recovered_100019d6,recovered_10001be7),
        iVar2 != 0)))) {
      if (param_1 == (int *)0x0) {
        return;
      }
      *param_1 = *param_1 + 1;
      return;
    }
  }
  goto LAB_10000bd3;
}

#undef DAT_10001eeb
#undef DAT_10001f34
#undef DAT_10001f39
#undef DAT_10001fa1
#undef DAT_10001fa3
#undef DAT_10001fa5
#undef DAT_10001faa
#undef DAT_10001fad
#undef DAT_10001faf
#undef DAT_10002100
#undef DAT_10002104
#undef DAT_10002108
#undef DAT_10002109
#undef DAT_1000210a
#undef DAT_1000210b
#undef DAT_1000210c
#undef DAT_10002110
#undef DAT_10002114
#undef DAT_10002118
#undef DAT_1000211c
#undef DAT_10002120
#undef DAT_10002124
#undef DAT_10002128
#undef DAT_1000212c
#undef DAT_10002130
#undef DAT_10002300
#undef DAT_10006300
#undef DAT_10006400
#undef _DAT_10002128
#undef str_10001eec
#undef str_10001f3b
#undef str_10001f4b
#undef str_10001f5d
#undef str_10001f6a
#undef str_10001f7c
#undef str_10001f8e
#undef str_10001fb2
#undef auStack_804
#undef local_894
#undef local_88c
#undef local_888
#undef local_884
#undef local_880
#undef local_87c
#undef local_878
#undef local_874
#undef local_814
#undef local_810
#undef local_80c
#undef local_808
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001268
 */

void recovered_10001268(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_100012ae();
  if (param_1 != (char *)0x0 && in_ECX != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_1 == '\0') || (in_EDX <= uVar1)) break;
      *(char *)(in_ECX + -1 + uVar1) = *param_1;
      param_1 = param_1 + 1;
    }
    *(undefined1 *)(in_ECX + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ae
 */

int recovered_100012ae(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;

  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(in_ECX + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012cf
 */

undefined4 recovered_100012cf(byte param_1,undefined1 param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 in_DL;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (param_3 != (undefined1 *)0x0) {
    local_2c = in_DL;
    iVar2 = recovered_1000144c(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_1000144c(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_1000144c(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_1000144c(param_1,param_2,0xc,4,(int)&local_34);
        if (iVar2 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *param_3 = local_2c;
        param_3[1] = param_1;
        param_3[2] = param_2;
        *(uint *)(param_3 + 4) = local_30;
        *(ushort *)(param_3 + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        param_3[9] = (char)((uint)local_24 >> 0x10);
        param_3[8] = (char)((uint)local_24 >> 0x18);
        param_3[0xc] = PF_PART1(local_34, 2);
        local_1c = (uint)param_1;
        for (iVar2 = -0x18; iVar2 != 0; iVar2 = iVar2 + 4) {
          local_28 = 0;
          iVar3 = recovered_1000144c((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
          uVar1 = 0;
          if (iVar3 != 0) {
            uVar1 = local_28;
          }
          *(undefined4 *)(param_3 + iVar2 + 0x2c) = uVar1;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000144c
 */

undefined4
recovered_1000144c(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                  int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x60)) ||
     (param_5 == 0 || (code *)in_ECX[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x17])(in_DL,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

void recovered_100014b0(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_2 * 4;
  while( true ) {
    iVar4 = iVar4 + -4;
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) break;
    uVar2 = param_1 >> ((byte)iVar4 & 0x1f) & 0xf;
    cVar1 = (char)uVar2;
    cVar3 = cVar1 + '7';
    if (uVar2 < 10) {
      cVar3 = cVar1 + '0';
    }
    recovered_10001980(cVar3);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001502
 */

void recovered_10001502(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10001980(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10001980(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

#undef DAT_10002100
#define DAT_10002100 (*(int *)(((uintptr_t)pf_module_state + 0x215U)))
#undef DAT_10002104
#define DAT_10002104 (*(int *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_10002109
#define DAT_10002109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21eU)))
#undef DAT_1000210a
#define DAT_1000210a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000210b
#define DAT_1000210b (*(char *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_1000210c
#define DAT_1000210c (*(uint *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_10002114
#define DAT_10002114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x229U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001569
 */

void recovered_10001569(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar3;
  uint uVar4;

  DAT_10002114 = 0;
  if (DAT_10002100 != 0) {
    if (DAT_10002104 == 0) {
      uVar3 = 1;
    }
    else {
      uVar2 = recovered_1000176e();
      bVar1 = recovered_100016e1();
      uVar3 = 0;
      uVar4 = 0;
      if (CONCAT31(extraout_var,bVar1) != 0) {
        uVar4 = recovered_1000176e();
        uVar4 = uVar4 & uVar2;
      }
      bVar1 = recovered_100016e1();
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        uVar3 = recovered_1000176e();
        uVar3 = uVar3 & uVar4;
      }
      recovered_100016e1();
      recovered_100019ae();
      recovered_10001821();
      bVar1 = recovered_100016e1();
      if ((CONCAT31(extraout_var_01,bVar1) == 0) ||
         (bVar1 = recovered_100016e1(), CONCAT31(extraout_var_02,bVar1) == 0)) {
        uVar3 = 0;
      }
    }
    if (DAT_1000210b != '\0') {
      uVar2 = DAT_1000210c & 0xfffffffb;
      if (uVar3 != 0) {
        uVar2 = DAT_1000210c;
      }
      recovered_100017d4(DAT_10002109,DAT_1000210a,uVar2 & 0xffff);
      DAT_1000210b = '\0';
    }
  }
  return;
}

#undef DAT_10002100
#undef DAT_10002104
#undef DAT_10002109
#undef DAT_1000210a
#undef DAT_1000210b
#undef DAT_1000210c
#undef DAT_10002114

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016c8
 */

void recovered_100016c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  int in_EDX;
  bool bVar1;

  if (in_ECX != (undefined1 *)0x0) {
    while (bVar1 = in_EDX != 0, in_EDX = in_EDX + -1, bVar1) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}


#undef DAT_10002100
#define DAT_10002100 (*(int * *)(((uintptr_t)pf_module_state + 0x215U)))
#undef DAT_10002104
#define DAT_10002104 (*(int *)(((uintptr_t)pf_module_state + 0x219U)))
#define local_18 (*(undefined4 (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e1
 */

bool recovered_100016e1(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  undefined4 *in_EDX;
  code *pcVar2;

  local_18[0] = 0;
  if (DAT_10002104 == 0 || in_EDX == (undefined4 *)0x0) {
    return false;
  }
  if (DAT_10002100 == (int *)0x0) {
    return false;
  }
  if (*DAT_10002100 != 0x54584b57) {
    return false;
  }
  if ((uint)DAT_10002100[2] < 0xc0) {
    if ((uint)DAT_10002100[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar2 = (code *)DAT_10002100[0x2f];
    if (pcVar2 != (code *)0x0) goto LAB_10001745;
  }
  pcVar2 = (code *)DAT_10002100[0x1a];
  if (pcVar2 == (code *)0x0) {
    return false;
  }
LAB_10001745:
  iVar1 = (*pcVar2)(DAT_10002104 + in_ECX,4,local_18);
  if (iVar1 != 0) {
    *in_EDX = local_18[0];
  }
  return iVar1 != 0;
}

#undef DAT_10002100
#undef DAT_10002104
#undef local_18

#undef DAT_10002100
#define DAT_10002100 (*(int * *)(((uintptr_t)pf_module_state + 0x215U)))
#undef DAT_10002104
#define DAT_10002104 (*(int *)(((uintptr_t)pf_module_state + 0x219U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000176e
 */

undefined4 recovered_1000176e(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_ECX;
  code *pcVar2;

  if (((DAT_10002104 != 0) && (DAT_10002100 != (int *)0x0)) && (*DAT_10002100 == 0x54584b57)) {
    if ((uint)DAT_10002100[2] < 0xc4) {
      if ((uint)DAT_10002100[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)DAT_10002100[0x30];
      if (pcVar2 != (code *)0x0) goto LAB_100017bb;
    }
    pcVar2 = (code *)DAT_10002100[0x1b];
    if (pcVar2 != (code *)0x0) {
LAB_100017bb:
      uVar1 = (*pcVar2)(DAT_10002104 + in_ECX,4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002100
#undef DAT_10002104

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d4
 */

undefined4 recovered_100017d4(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     ((code *)in_ECX[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x18])(in_DL,param_1,param_2,4,2,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001821
 */

void recovered_10001821(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x33 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xc] != (code *)0x0)) {
    (*(code *)in_ECX[0xc])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000184c
 */

undefined4 recovered_1000184c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_3 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001898
 */

void recovered_10001898(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;
  undefined4 in_EDX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = (char)in_EDX;
    in_ECX[1] = (char)((uint)in_EDX >> 8);
    in_ECX[2] = (char)((uint)in_EDX >> 0x10);
    in_ECX[3] = (char)((uint)in_EDX >> 0x18);
    in_ECX[4] = (char)param_1;
    in_ECX[5] = (char)((uint)param_1 >> 8);
    in_ECX[6] = (char)((uint)param_1 >> 0x10);
    in_ECX[7] = (char)((uint)param_1 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d3
 */

void recovered_100018d3(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1d] != (code *)0x0)) {
    (*(code *)in_ECX[0x1d])();
  }
  return;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001905
 */

bool recovered_10001905(int param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  local_18[0] = 0;
  iVar1 = recovered_1000184c(param_1,0x80,(int)local_18);
  bVar2 = false;
  if ((iVar1 != 0) && ((local_18[0] & 0x7f) == 0)) {
    iVar1 = recovered_1000176e();
    if (iVar1 != 0) {
      iVar1 = recovered_1000176e();
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001980
 */

void recovered_10001980(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_100012ae();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019ae
 */

void recovered_100019ae(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x7b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1e] != (code *)0x0)) {
    (*(code *)in_ECX[0x1e])();
  }
  return;
}


#undef DAT_10002114
#define DAT_10002114 (*(int *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10002120
#define DAT_10002120 (*(uint *)(((uintptr_t)pf_module_state + 0x235U)))
#undef DAT_10002130
#define DAT_10002130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x245U)))
#undef DAT_10002208
#define DAT_10002208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31dU)))
#undef DAT_1000220c
#define DAT_1000220c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x321U)))
#undef DAT_1000220d
#define DAT_1000220d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x322U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d6
 */

undefined4 recovered_100019d6(int param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;

  recovered_10001d79();
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((param_1 != 0) && (DAT_10002114 != 0)) {
    iVar5 = DAT_10002120 * 0x10;
    recovered_100018d3();
    if (((&DAT_1000220c)[iVar5] & 1) != 0) {
      iVar3 = recovered_1000176e();
      if (iVar3 != 0) {
        recovered_100019ae();
        recovered_10001821();
        bVar2 = recovered_100016e1();
        if (CONCAT31(extraout_var,bVar2) != 0) {
          recovered_100018d3();
          if (((&DAT_1000220c)[iVar5] & 1) == 0) {
            iVar5 = recovered_10001da4();
            if (iVar5 != 0) {
              DAT_10002130 = 0;
              return 0;
            }
          }
          else {
            uVar1 = *(ushort *)(&DAT_10002208 + iVar5);
            uVar6 = (uint)uVar1;
            if (uVar1 < 0x801) {
              recovered_100018d3();
              uVar4 = 0;
              if ((((((&DAT_1000220c)[iVar5] & 2) != 0) && (uVar6 <= param_2)) && (0xd < uVar1)) &&
                 ((&DAT_1000220d)[iVar5] == '\0')) {
                recovered_10001e00(uVar6);
                uVar4 = 1;
                if (param_3 != (uint *)0x0) {
                  *param_3 = uVar6;
                }
              }
              *(undefined2 *)(&DAT_1000220c + iVar5) = 0;
              recovered_100018d3();
              iVar5 = recovered_1000176e();
              if ((iVar5 == 0) || (iVar5 = recovered_10001da4(), iVar5 == 0)) {
                recovered_10001569();
                DAT_10002130 = 0;
                return 0;
              }
              DAT_10002120 = DAT_10002120 + 1 & 7;
              DAT_10002130 = 0;
              return uVar4;
            }
          }
        }
      }
      recovered_10001569();
    }
  }
  DAT_10002130 = 0;
  return 0;
}

#undef DAT_10002114
#undef DAT_10002120
#undef DAT_10002130
#undef DAT_10002208
#undef DAT_1000220c
#undef DAT_1000220d

#undef DAT_10002114
#define DAT_10002114 (*(int *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10002124
#define DAT_10002124 (*(uint *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_10002130
#define DAT_10002130 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x245U)))
#undef DAT_10006308
#define DAT_10006308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x441dU)))
#undef DAT_10006309
#define DAT_10006309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x441eU)))
#undef DAT_1000630a
#define DAT_1000630a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x441fU)))
#undef DAT_1000630c
#define DAT_1000630c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4421U)))
#undef DAT_1000630e
#define DAT_1000630e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4423U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be7
 */

undefined4 recovered_10001be7(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  recovered_10001d79();
  if (((0xfffff80c < param_2 - 0x801U) && (param_1 != 0)) && (DAT_10002114 != 0)) {
    iVar1 = DAT_10002124 * 0x10;
    iVar2 = 999;
    while (recovered_100018d3(), ((&DAT_1000630c)[iVar1] & 1) == 0) {
      bVar4 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar4) goto LAB_10001d51;
      recovered_10001821();
    }
    recovered_10001e00(param_2);
    (&DAT_10006308)[iVar1] = (char)param_2;
    (&DAT_10006309)[iVar1] = (char)((uint)param_2 >> 8);
    *(undefined4 *)(&DAT_1000630a + iVar1) = 0xb00;
    *(undefined2 *)(&DAT_1000630e + iVar1) = 0;
    recovered_100018d3();
    recovered_100018d3();
    uVar3 = DAT_10002124 + 1;
    iVar2 = recovered_1000176e();
    if (iVar2 != 0) {
      iVar2 = 1000;
      while (bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4) {
        recovered_100018d3();
        if (((&DAT_1000630c)[iVar1] & 1) != 0) {
          DAT_10002124 = uVar3 & 7;
          DAT_10002130 = 0;
          return 1;
        }
        recovered_10001821();
      }
    }
LAB_10001d51:
    recovered_10001569();
  }
  DAT_10002130 = 0;
  return 0;
}

#undef DAT_10002114
#undef DAT_10002124
#undef DAT_10002130
#undef DAT_10006308
#undef DAT_10006309
#undef DAT_1000630a
#undef DAT_1000630c
#undef DAT_1000630e

#undef DAT_10002130
#define DAT_10002130 (*(int *)(((uintptr_t)pf_module_state + 0x245U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d79
 */

/* WARNING: Removing unreachable block (ram,0x10001d9e) */

void recovered_10001d79(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10002130;
  { __typeof__(DAT_10002130) pf_atomic_old = __atomic_exchange_n(&(DAT_10002130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10002130

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da4
 */

undefined4 recovered_10001da4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000176e();
  if (iVar1 != 0) {
    recovered_100019ae();
    recovered_100016e1();
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e00
 */

void recovered_10001e00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  int in_EDX;
  int iVar1;

  if (in_EDX != 0 && in_ECX != 0) {
    for (iVar1 = 0; param_1 != iVar1; iVar1 = iVar1 + 1) {
      *(undefined1 *)(in_ECX + iVar1) = *(undefined1 *)(in_EDX + iVar1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e2f
 */

undefined8 recovered_10001e2f(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10001e6a;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10001e6a;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10001e6a:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e71
 */

undefined8 recovered_10001e71(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb5
 */

undefined8 recovered_10001eb5(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
