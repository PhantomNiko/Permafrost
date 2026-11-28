/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d2c
 */

void * recovered_10000d2c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002dfc
#define DAT_10002dfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_10002da0
#define str_10002da0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10002dbb
#define str_10002dbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bU)))
#undef str_10002dcb
#define str_10002dcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bU)))
#define local_4cc (*(int *)(pf_stack_frame + 20))
#define local_4c8 (*(int *)(pf_stack_frame + 24))
#define local_4c4 (*(undefined1 (*)[1220])(pf_stack_frame + 28))
#define local_4b8 (*(char *)(pf_stack_frame + 40))
#define local_498 (*(undefined4 *)(pf_stack_frame + 72))
#define local_494 (*(undefined4 *)(pf_stack_frame + 76))
#define local_490 (*(undefined4 *)(pf_stack_frame + 80))
#define local_48c (*(undefined4 *)(pf_stack_frame + 84))
#define local_488 (*(undefined4 *)(pf_stack_frame + 88))
#define local_484 (*(undefined4 *)(pf_stack_frame + 92))
#define local_440 (*(undefined1 (*)[1088])(pf_stack_frame + 160))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d42
 */

uint recovered_10000d42(void *api)

{
  unsigned char pf_stack_frame[1280] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_10000fec();
    recovered_10000fec();
    recovered_10000fec();
    recovered_10001005(str_10002da0);
    if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
       (iVar1 = (**(code **)((int)api + 0xc))(&DAT_10002dfc,str_10002dbb,local_414), iVar1 != 0)) {
      if ((*(int *)api == 0x54584b57) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        for (iVar1 = 0; iVar1 != 8; iVar1 = iVar1 + 1) {
          for (iVar4 = 0; iVar4 != 0x20; iVar4 = iVar4 + 1) {
            iVar2 = recovered_10002025((byte)iVar4,0,local_4c4);
            if ((iVar2 != 0) && (recovered_10001024(&local_4cc), local_4b8 < '\0')) {
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_10002025((byte)iVar4,(char)iVar2 + '\b',local_440);
                if (iVar3 != 0) {
                  recovered_10001024(&local_4cc);
                }
              }
            }
          }
        }
      }
      if (local_4c8 != 0) {
        local_498 = 0x58;
        local_494 = 7;
        local_490 = 48000;
        local_48c = 2;
        local_488 = 0x10;
        local_484 = 0x2000;
        recovered_10001005(str_10002dcb);
        recovered_10000fec();
        iVar1 = recovered_10001a91(((uintptr_t)pf_module_state+0x560U),0x300,48000,2,0x10);
        if ((((iVar1 != 0) && (*(int *)api == 0x54584b57)) && (0xe3 < *(uint *)((int)api + 8))) &&
           ((*(code **)((int)api + 0xe0) != (code *)0x0 &&
            (iVar1 = (**(code **)((int)api + 0xe0))
                               (&local_498,recovered_10001a91,recovered_10001ef0), iVar1 != 0)))) {
          if (*(code **)((int)api + 0xc) == (code *)0x0) {
            return 1;
          }
          (**(code **)((int)api + 0xc))(&DAT_10002dfc,str_10002dbb,local_414);
          return 1;
        }
        recovered_10001f1a();
      }
    }
  }
  return 0;
}

#undef DAT_10002dfc
#undef str_10002da0
#undef str_10002dbb
#undef str_10002dcb
#undef local_4cc
#undef local_4c8
#undef local_4c4
#undef local_4b8
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_440
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fec
 */

void recovered_10000fec(void)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001005
 */

void recovered_10001005(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10001fbe(param_1);
  }
  return;
}


#undef DAT_10002dfc
#define DAT_10002dfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10002e43
#define DAT_10002e43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef DAT_10002e45
#define DAT_10002e45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa5U)))
#undef DAT_10002e47
#define DAT_10002e47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7U)))
#undef DAT_10002e49
#define DAT_10002e49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9U)))
#undef DAT_10002e4e
#define DAT_10002e4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef DAT_10002e51
#define DAT_10002e51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_10002e53
#define DAT_10002e53 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb3U)))
#undef DAT_10003100
#define DAT_10003100 (*(int * *)(((uintptr_t)pf_module_state + 0x360U)))
#undef DAT_10003104
#define DAT_10003104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_10003108
#define DAT_10003108 (*(uint *)(((uintptr_t)pf_module_state + 0x368U)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x36cU)))
#undef DAT_10003110
#define DAT_10003110 (*(int *)(((uintptr_t)pf_module_state + 0x370U)))
#undef DAT_10003114
#define DAT_10003114 (*(uint *)(((uintptr_t)pf_module_state + 0x374U)))
#undef DAT_10003118
#define DAT_10003118 (*(uint *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_1000311c
#define DAT_1000311c (*(uint *)(((uintptr_t)pf_module_state + 0x37cU)))
#undef DAT_10003120
#define DAT_10003120 (*(byte *)(((uintptr_t)pf_module_state + 0x380U)))
#undef DAT_10003121
#define DAT_10003121 (*(byte *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_10003122
#define DAT_10003122 (*(byte *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_10003123
#define DAT_10003123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_10003124
#define DAT_10003124 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_10003128
#define DAT_10003128 (*(int *)(((uintptr_t)pf_module_state + 0x388U)))
#undef str_10002dfd
#define str_10002dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dU)))
#undef str_10002e0c
#define str_10002e0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cU)))
#undef str_10002e1e
#define str_10002e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_10002e30
#define str_10002e30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1180))
#define local_8a0 (*(uint *)(pf_stack_frame + 16))
#define local_898 (*(uint *)(pf_stack_frame + 24))
#define local_894 (*(uint *)(pf_stack_frame + 28))
#define local_890 (*(uint *)(pf_stack_frame + 32))
#define local_88c (*(int *)(pf_stack_frame + 36))
#define local_888 (*(undefined4 *)(pf_stack_frame + 40))
#define local_884 (*(uint *)(pf_stack_frame + 44))
#define local_880 (*(uint *)(pf_stack_frame + 48))
#define local_87c (*(uint *)(pf_stack_frame + 52))
#define local_878 (*(uint *)(pf_stack_frame + 56))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 60))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001024
 */

void recovered_10001024(int *param_1)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  int extraout_EAX_09 = 0;
  int extraout_EAX_10 = 0;
  int extraout_EAX_11 = 0;
  undefined3 extraout_var_01 = 0;
  char *pcVar5;
  int *in_ECX;
  byte *in_EDX;
  uint uVar6;

  if (in_EDX == (byte *)0x0) {
    return;
  }
  if (*(short *)(in_EDX + 4) != -0x7f7a) {
    return;
  }
  if (in_EDX[8] != 4) {
    return;
  }
  if (in_EDX[9] != 3) {
    return;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  if (DAT_10003128 != 0) {
    return;
  }
  recovered_10001005(&DAT_10002dfc);
  local_888 = 0;
  local_890 = 0;
  local_88c = 0;
  if (in_ECX == (int *)0x0) goto LAB_10001552;
  recovered_10000fec();
  local_874[0] = 0;
  uVar4 = *(uint *)(in_EDX + 0x14);
  if ((uVar4 & 1) != 0 || uVar4 == 0) goto LAB_10001552;
  local_898 = uVar4;
  recovered_100021a2(in_EDX[1],in_EDX[2],0x10,4,(int)&local_898);
  uVar4 = 0;
  if ((local_898 & 7) == 4) {
    local_874[0] = *(uint *)(in_EDX + 0x18);
    recovered_100021a2(in_EDX[1],in_EDX[2],0x14,4,(int)local_874);
    uVar4 = local_874[0];
  }
  uVar2 = 0xfffffffc;
  if ((local_898 & 1) == 0) {
    uVar2 = 0xfffffff0;
  }
  uVar2 = uVar2 & local_898;
  if (uVar2 == 0 && uVar4 == 0) goto LAB_10001552;
  DAT_10003104 = 0;
  local_814[0] = 0;
  if (*in_ECX != 0x54584b57) goto LAB_10001552;
  uVar6 = in_ECX[2];
  if (uVar6 < 0xbc) {
LAB_100011f8:
    if (((uVar6 < 0x68 || uVar4 != 0) || ((code *)in_ECX[0x19] == (code *)0x0)) ||
       (iVar3 = (*(code *)in_ECX[0x19])(uVar2,0,0x1000,local_814), iVar3 == 0)) goto LAB_10001552;
    DAT_10003104 = local_814[0];
  }
  else {
    local_894 = uVar6;
    if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_100011f8;
    iVar3 = (*(code *)in_ECX[0x2e])(uVar2,uVar4,0x1000,&DAT_10003104);
    if (iVar3 == 0) goto LAB_10001552;
  }
  iVar3 = recovered_100021a2(in_EDX[1],in_EDX[2],4,2,(int)&local_888);
  if (iVar3 == 0) goto LAB_10001552;
  DAT_10003120 = *in_EDX;
  DAT_10003121 = in_EDX[1];
  DAT_10003122 = in_EDX[2];
  local_894 = (uint)DAT_10003122;
  DAT_10003124 = (undefined2)local_888;
  DAT_10003123 = 1;
  DAT_10003108 = (uint)DAT_10003121 << 0xb | (uint)DAT_10003120 << 0x10 | local_894 << 8 |
                 0x80000000;
  local_814[0] = 0;
  pcVar5 = str_10002e0c;
  DAT_10003100 = in_ECX;
  if (((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) && (in_ECX[0x18] != 0)) {
    iVar3 = recovered_100021a2(DAT_10003121,DAT_10003122,4,2,(int)local_814);
    if (iVar3 == 0) {
      pcVar5 = str_10002e1e;
      goto LAB_10001539;
    }
    uVar4 = 0;
    for (iVar3 = -0x18; iVar3 != 0; iVar3 = iVar3 + 4) {
      uVar6 = uVar4 | 1;
      uVar2 = uVar4 | 2;
      if (*(uint *)(in_EDX + iVar3 + 0x2c) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      if ((*(uint *)(in_EDX + iVar3 + 0x2c) & 1) != 0) {
        uVar4 = uVar6;
      }
    }
    iVar3 = recovered_10002004();
    local_8a0 = uVar4 | 4;
    if (iVar3 == 0) {
      local_8a0 = uVar4;
    }
    if (in_EDX[8] == 6) {
      if (in_EDX[9] != 0) {
        local_8a0 = local_8a0 | 2;
      }
    }
    local_874[0] = local_814[0] | local_8a0;
    iVar3 = recovered_100026b3(in_EDX[1],in_EDX[2],local_874[0]);
    if (iVar3 == 0) {
      pcVar5 = str_10002e30;
      goto LAB_10001539;
    }
    recovered_100021a2(in_EDX[1],in_EDX[2],4,2,(int)local_874);
    if ((((local_8a0 & ~local_874[0]) == 0) &&
        (iVar3 = recovered_10002498(0,&DAT_1000310c), iVar3 != 0)) && ((DAT_1000310c & 0xf000) != 0)
       ) {
      DAT_10003110 = (DAT_1000310c >> 3 & 0x1e0) + 0x80;
      recovered_100024e6();
      bVar1 = recovered_1000250d();
      if (((CONCAT31(extraout_var,bVar1) != 0) && (iVar3 = recovered_100024e6(), iVar3 != 0)) &&
         (bVar1 = recovered_1000250d(), CONCAT31(extraout_var_00,bVar1) != 0)) {
        local_8a0 = 10000;
        while (bVar1 = local_8a0 != 0, local_8a0 = local_8a0 + -1, bVar1) {
          iVar3 = recovered_10002498(0xe,&local_890);
          if ((iVar3 != 0) && ((local_890 & 0x7fff) != 0)) goto LAB_1000156a;
          recovered_10002583();
        }
        if ((local_890 & 0x7fff) != 0) {
LAB_1000156a:
          for (DAT_10003114 = 0; DAT_10003114 < 0xf; DAT_10003114 = DAT_10003114 + 1) {
            if ((((local_890 >> (DAT_10003114 & 0x1f) & 1) != 0) &&
                (recovered_100025ae(&local_88c), extraout_EAX != 0)) &&
               (local_88c - 1U < 0xfffffffe)) {
              local_814[0] = 0;
              recovered_100025ae(local_814);
              if (extraout_EAX_00 != 0) {
                local_87c = local_814[0] >> 0x10 & 0xff;
                local_878 = local_814[0] & 0xff;
                uVar4 = 0;
                while (uVar4 != local_878) {
                  local_874[0] = 0;
                  local_898 = 0;
                  local_894 = uVar4;
                  recovered_100025ae(local_874);
                  if (((extraout_EAX_01 != 0) && ((char)local_874[0] == '\x01')) &&
                     (recovered_100025ae(&local_898), extraout_EAX_02 != 0)) {
                    recovered_100025d2(0);
                    uVar4 = local_898 >> 0x10 & 0xff;
                    uVar2 = local_898 & 0xff;
                    while (bVar1 = uVar2 != 0, uVar2 = uVar2 - 1, bVar1) {
                      local_880 = 0;
                      recovered_100025ae(&local_880);
                      if (extraout_EAX_03 != 0) {
                        uVar6 = local_880 >> 0x14 & 0xf;
                        if (DAT_10003118 == 0 && uVar6 == 0) {
                          DAT_10003118 = uVar4;
                        }
                        else if ((uVar6 == 4) && (DAT_1000311c == 0)) {
                          local_884 = 0;
                          recovered_100025ae(&local_884);
                          if ((extraout_EAX_04 != 0) && ((local_884 & 0x10) != 0)) {
                            DAT_1000311c = uVar4;
                          }
                        }
                      }
                      uVar4 = uVar4 + 1;
                    }
                    if ((DAT_10003118 != 0) && (DAT_1000311c != 0)) {
                      if ((((0xe < DAT_10003114) ||
                           ((((recovered_100025d2(0), extraout_EAX_05 == 0 ||
                              (recovered_100025f7(0x11), extraout_EAX_06 == 0)) ||
                             (recovered_100025d2(0x10), extraout_EAX_07 == 0)) ||
                            ((recovered_100025d2(0), extraout_EAX_08 == 0 ||
                             (recovered_100025d2(0x40), extraout_EAX_09 == 0)))))) ||
                          (recovered_100025d2(2), extraout_EAX_10 == 0)) ||
                         ((recovered_100025f7(0xb04a), extraout_EAX_11 == 0 ||
                          (bVar1 = recovered_1000261c(), CONCAT31(extraout_var_01,bVar1) == 0))))
                      goto LAB_1000154d;
                      DAT_10003128 = 1;
                      recovered_10001005(&DAT_10002dfc);
                      pcVar5 = recovered_10002206();
                      recovered_10001005(str_10002dfd);
                      recovered_10001fbe(&DAT_10002e43);
                      recovered_10002ac4((uint)*in_EDX,2);
                      recovered_10001fbe(&DAT_10002e45);
                      recovered_10002ac4((uint)in_EDX[1],2);
                      recovered_10001fbe(&DAT_10002e47);
                      recovered_10002b16((uint)in_EDX[2]);
                      recovered_10001005(&DAT_10002e49);
                      recovered_10002ac4((uint)*in_EDX,2);
                      recovered_10001fbe(&DAT_10002e45);
                      recovered_10002ac4((uint)in_EDX[1],2);
                      recovered_10001fbe(&DAT_10002e47);
                      recovered_10002b16((uint)in_EDX[2]);
                      recovered_10001fbe(&DAT_10002e4e);
                      recovered_10002ac4((uint)*(ushort *)(in_EDX + 4),4);
                      recovered_10001fbe(&DAT_10002e45);
                      recovered_10002ac4((uint)*(ushort *)(in_EDX + 6),4);
                      recovered_10001fbe(&DAT_10002e51);
                      if (local_414[0] != '\0') {
                        recovered_10001fbe(&DAT_10002e53);
                        recovered_10001fbe(local_414);
                      }
                      if (((code *)in_ECX[3] != (code *)0x0) &&
                         (iVar3 = (*(code *)in_ECX[3])(local_874,pcVar5,local_814), iVar3 != 0)) {
                        if (param_1 == (int *)0x0) {
                          return;
                        }
                        param_1[1] = param_1[1] + 1;
                        return;
                      }
                      goto LAB_10001552;
                    }
                  }
                  uVar4 = local_894 + 1;
                }
              }
            }
            DAT_10003118 = 0;
            DAT_1000311c = 0;
          }
        }
      }
    }
  }
  else {
LAB_10001539:
    recovered_10001fbe(pcVar5);
  }
LAB_1000154d:
  recovered_10001f1a();
LAB_10001552:
  recovered_10001f1a();
  return;
}

#undef DAT_10002dfc
#undef DAT_10002e43
#undef DAT_10002e45
#undef DAT_10002e47
#undef DAT_10002e49
#undef DAT_10002e4e
#undef DAT_10002e51
#undef DAT_10002e53
#undef DAT_10003100
#undef DAT_10003104
#undef DAT_10003108
#undef DAT_1000310c
#undef DAT_10003110
#undef DAT_10003114
#undef DAT_10003118
#undef DAT_1000311c
#undef DAT_10003120
#undef DAT_10003121
#undef DAT_10003122
#undef DAT_10003123
#undef DAT_10003124
#undef DAT_10003128
#undef str_10002dfd
#undef str_10002e0c
#undef str_10002e1e
#undef str_10002e30
#undef local_414
#undef local_8a0
#undef local_898
#undef local_894
#undef local_890
#undef local_88c
#undef local_888
#undef local_884
#undef local_880
#undef local_87c
#undef local_878
#undef local_874
#undef local_814

#undef DAT_10003104
#define DAT_10003104 (*(int *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36cU)))
#undef DAT_10003110
#define DAT_10003110 (*(int *)(((uintptr_t)pf_module_state + 0x370U)))
#undef DAT_10003128
#define DAT_10003128 (*(int *)(((uintptr_t)pf_module_state + 0x388U)))
#undef DAT_10003200
#define DAT_10003200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x460U)))
#undef DAT_10003201
#define DAT_10003201 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef DAT_10003202
#define DAT_10003202 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x462U)))
#undef DAT_10003203
#define DAT_10003203 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x463U)))
#undef DAT_10003204
#define DAT_10003204 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x464U)))
#undef DAT_10003205
#define DAT_10003205 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x465U)))
#undef DAT_10003206
#define DAT_10003206 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x466U)))
#undef DAT_10003207
#define DAT_10003207 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x467U)))
#undef DAT_10003208
#define DAT_10003208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x468U)))
#undef DAT_10003209
#define DAT_10003209 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x469U)))
#undef DAT_1000320a
#define DAT_1000320a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x46aU)))
#undef DAT_1000320e
#define DAT_1000320e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x46eU)))
#undef DAT_10003300
#define DAT_10003300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_10005300
#define DAT_10005300 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2560U)))
#define local_30 (*(undefined4 *)(pf_stack_frame + 16))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a91
 */

undefined4 recovered_10001a91(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined1 *puVar4;

  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  local_24 = 0;
  if ((param_2 & 3) != 0) {
    return 0;
  }
  if (param_5 != 0x10) {
    return 0;
  }
  if (param_4 != 2) {
    return 0;
  }
  if (param_3 != 48000) {
    return 0;
  }
  if (param_2 - 0x2001 < 0xffffe000) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_10003128 == 0) {
    return 0;
  }
  recovered_10002c14();
  iVar2 = recovered_10002c3f(((uintptr_t)pf_module_state+0x460U),0x10,(int)(local_20 + 2));
  if (iVar2 == 0) {
    DAT_10005300 = 0;
    return 0;
  }
  puVar4 = &DAT_10003300;
  iVar2 = recovered_10002c3f(((uintptr_t)pf_module_state+0x560U),param_2,(int)(local_20 + 1));
  if (iVar2 != 0) {
    bVar1 = recovered_1000261c();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      DAT_10005300 = 0;
      return 0;
    }
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *puVar4 = *(undefined1 *)(param_1 + uVar3);
      puVar4 = puVar4 + 1;
    }
    recovered_10000fec();
    DAT_10003200 = (undefined1)local_20[1];
    DAT_10003201 = (undefined1)(local_20[1] >> 8);
    DAT_10003202 = (undefined1)(local_20[1] >> 0x10);
    DAT_10003203 = (undefined1)(local_20[1] >> 0x18);
    DAT_10003204 = 0;
    DAT_10003205 = 0;
    DAT_10003206 = 0;
    DAT_10003207 = 0;
    DAT_10003208 = (undefined1)param_2;
    DAT_10003209 = (undefined1)(param_2 >> 8);
    DAT_1000320a = 0x10000;
    DAT_1000320e = 0;
    recovered_10002c8b();
    recovered_10002c8b();
    iVar2 = recovered_100024e6();
    if (iVar2 == 0) {
      DAT_10005300 = 0;
      return 0;
    }
    iVar2 = recovered_10002a06();
    if (((((iVar2 != 0) && (iVar2 = recovered_10002a06(), iVar2 != 0)) &&
         (iVar2 = recovered_100024e6(), iVar2 != 0)) &&
        ((iVar2 = recovered_100024e6(), iVar2 != 0 && (iVar2 = recovered_10002cbd(), iVar2 != 0))))
       && (iVar2 = recovered_10002cbd(), iVar2 != 0)) {
      iVar2 = recovered_10002a06();
      if (iVar2 == 0) {
        DAT_10005300 = 0;
        return 0;
      }
      local_30 = 0;
      uVar3 = ~((((param_2 >> 2) * 1000000) / 48000 + 50000) / 100);
      while( true ) {
        if (((uVar3 == 0) || (DAT_10003104 == 0)) ||
           ((iVar2 = recovered_10002700(1,(int)local_20), iVar2 == 0 ||
            ((iVar2 = recovered_100027b0(DAT_10003110 + 4,&local_24), iVar2 == 0 ||
             ((local_20[0] & 0x18) != 0)))))) goto LAB_10001ee5;
        if (((local_20[0] & 4) != 0) || (param_2 <= local_24)) break;
        recovered_10002583();
        uVar3 = uVar3 + 1;
      }
      local_30 = 1;
LAB_10001ee5:
      recovered_10002a2d();
      DAT_10005300 = 0;
      return local_30;
    }
  }
  DAT_10005300 = 0;
  return 0;
}

#undef DAT_10003104
#undef DAT_1000310c
#undef DAT_10003110
#undef DAT_10003128
#undef DAT_10003200
#undef DAT_10003201
#undef DAT_10003202
#undef DAT_10003203
#undef DAT_10003204
#undef DAT_10003205
#undef DAT_10003206
#undef DAT_10003207
#undef DAT_10003208
#undef DAT_10003209
#undef DAT_1000320a
#undef DAT_1000320e
#undef DAT_10003300
#undef DAT_10005300
#undef local_30
#undef local_24
#undef local_20

#undef DAT_10005300
#define DAT_10005300 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef0
 */

void recovered_10001ef0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002c14();
  recovered_10002a2d();
  DAT_10005300 = 0;
  return;
}

#undef DAT_10005300

#undef DAT_10003100
#define DAT_10003100 (*(int *)(((uintptr_t)pf_module_state + 0x360U)))
#undef DAT_10003104
#define DAT_10003104 (*(int *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_10003110
#define DAT_10003110 (*(int *)(((uintptr_t)pf_module_state + 0x370U)))
#undef DAT_10003121
#define DAT_10003121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_10003122
#define DAT_10003122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_10003123
#define DAT_10003123 (*(char *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_10003124
#define DAT_10003124 (*(ushort *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_10003128
#define DAT_10003128 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x388U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f1a
 */

void recovered_10001f1a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10003104 != 0 && DAT_10003100 != 0) {
    if (DAT_10003110 != 0) {
      recovered_10002a2d();
    }
    recovered_100024e6();
  }
  if ((DAT_10003100 != 0) && (DAT_10003123 != '\0')) {
    recovered_100026b3(DAT_10003121,DAT_10003122,(uint)DAT_10003124);
  }
  DAT_10003128 = 0;
  return;
}

#undef DAT_10003100
#undef DAT_10003104
#undef DAT_10003110
#undef DAT_10003121
#undef DAT_10003122
#undef DAT_10003123
#undef DAT_10003124
#undef DAT_10003128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbe
 */

void recovered_10001fbe(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10002004();
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
 * Address: 0x10002004
 */

int recovered_10002004(void)

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
 * Address: 0x10002025
 */

undefined4 recovered_10002025(byte param_1,undefined1 param_2,undefined1 *param_3)

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
    iVar2 = recovered_100021a2(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_100021a2(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_100021a2(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_100021a2(param_1,param_2,0xc,4,(int)&local_34);
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
          iVar3 = recovered_100021a2((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
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
 * Address: 0x100021a2
 */

undefined4
recovered_100021a2(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
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


#undef str_10002df2
#define str_10002df2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52U)))
#undef str_10002e56
#define str_10002e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6U)))
#undef str_10002e61
#define str_10002e61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1U)))
#undef str_10002e70
#define str_10002e70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_10002e81
#define str_10002e81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1U)))
#undef str_10002e94
#define str_10002e94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10002ea7
#define str_10002ea7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_10002eb7
#define str_10002eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_10002ec6
#define str_10002ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x126U)))
#undef str_10002ed5
#define str_10002ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10002ee6
#define str_10002ee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x146U)))
#undef str_10002ef1
#define str_10002ef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10002efd
#define str_10002efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_10002f06
#define str_10002f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10002f11
#define str_10002f11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002f1a
#define str_10002f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_10002f22
#define str_10002f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10002f2b
#define str_10002f2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_10002f32
#define str_10002f32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_10002f45
#define str_10002f45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
#undef str_10002f58
#define str_10002f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
#undef str_10002f6b
#define str_10002f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002206
 */

char * recovered_10002206(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  char *pcVar2;
  int in_ECX;

  sVar1 = *(short *)(in_ECX + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
      return str_10002f06;
    }
LAB_10002386:
    pcVar2 = str_10002f32;
    switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
    case 1:
      pcVar2 = str_10002f58;
      break;
    case 2:
      pcVar2 = str_10002f45;
      break;
    case 3:
      break;
    case 4:
      pcVar2 = str_10002f6b;
      break;
    case 0xc:
      if (*(char *)(in_ECX + 9) == '\x03') {
LAB_100023bf:
        pcVar2 = recovered_10002bab();
        return pcVar2;
      }
    default:
      pcVar2 = str_10002e56;
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(in_ECX + 6) == 0x194) {
        return str_10002efd;
      }
      goto LAB_10002386;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
LAB_10002324:
        return str_10002f2b;
      }
      goto LAB_10002386;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(in_ECX + 6) == 0x2bad) goto LAB_10002324;
      goto LAB_10002386;
    }
    if (sVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_10002f22;
      }
      goto LAB_10002386;
    }
    if (sVar1 == 0x1234) {
      if (*(short *)(in_ECX + 6) == 0x1111) {
        return str_10002f11;
      }
      goto LAB_10002386;
    }
    if (sVar1 == -0x7f7a) {
      if (*(short *)(in_ECX + 6) == 0x100e) {
        return str_10002ef1;
      }
      if (*(char *)(in_ECX + 8) == '\f') {
        if (*(char *)(in_ECX + 9) == '\x03') goto LAB_100023bf;
      }
      else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
        return str_10002df2;
      }
      goto LAB_10002386;
    }
    if (sVar1 == 0x1b36) {
      if (*(short *)(in_ECX + 6) == 0x100) {
        return str_10002f1a;
      }
      goto LAB_10002386;
    }
    if (sVar1 != 0x1af4) goto LAB_10002386;
    pcVar2 = str_10002e61;
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002293_caseD_1042:
      pcVar2 = str_10002e70;
      break;
    case 0x1043:
switchD_10002293_caseD_1043:
      pcVar2 = str_10002e94;
      break;
    case 0x1044:
switchD_10002293_caseD_1044:
      pcVar2 = str_10002eb7;
      break;
    case 0x1045:
switchD_10002293_caseD_1045:
      pcVar2 = str_10002e81;
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
switchD_10002293_caseD_1046:
      pcVar2 = str_10002ee6;
      break;
    case 0x1048:
switchD_10002293_caseD_1048:
      pcVar2 = str_10002ea7;
      break;
    case 0x1050:
      pcVar2 = str_10002ec6;
      break;
    case 0x1052:
      pcVar2 = str_10002ed5;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002293_caseD_1042;
      case 0x1002:
        goto switchD_10002293_caseD_1045;
      case 0x1003:
        goto switchD_10002293_caseD_1043;
      case 0x1004:
        goto switchD_10002293_caseD_1048;
      case 0x1005:
        goto switchD_10002293_caseD_1044;
      default:
        goto switchD_10002293_caseD_1046;
      }
    }
  }
  return pcVar2;
}

#undef str_10002df2
#undef str_10002e56
#undef str_10002e61
#undef str_10002e70
#undef str_10002e81
#undef str_10002e94
#undef str_10002ea7
#undef str_10002eb7
#undef str_10002ec6
#undef str_10002ed5
#undef str_10002ee6
#undef str_10002ef1
#undef str_10002efd
#undef str_10002f06
#undef str_10002f11
#undef str_10002f1a
#undef str_10002f22
#undef str_10002f2b
#undef str_10002f32
#undef str_10002f45
#undef str_10002f58
#undef str_10002f6b

#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002498
 */

undefined4 recovered_10002498(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_10002700(2,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e6
 */

undefined4 recovered_100024e6(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002766();
  return uVar1;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000250d
 */

bool recovered_1000250d(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint in_ECX;
  uint uVar2;

  local_18[0] = 0;
  for (uVar2 = 0; uVar2 != 10000; uVar2 = uVar2 + 1) {
    iVar1 = recovered_100027b0(8,local_18);
    if ((iVar1 != 0) && ((local_18[0] & 1) == in_ECX)) break;
    recovered_10002583();
  }
  return uVar2 < 10000;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002583
 */

void recovered_10002583(void)

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
 * Address: 0x100025ae
 */

void recovered_100025ae(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_EDX;

  recovered_100027fe(in_EDX & 0xff,param_1);
  return;
}


#define local_20 (*(undefined4 (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d2
 */

void recovered_100025d2(byte param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  recovered_100027fe((uint)param_1,local_20);
  return;
}

#undef local_20

#define local_20 (*(undefined4 (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f7
 */

void recovered_100025f7(ushort param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  recovered_100027fe((uint)param_1,local_20);
  return;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000261c
 */

bool recovered_1000261c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined3 extraout_var_00 = 0;

  bVar1 = recovered_10002a2d();
  if ((((CONCAT31(extraout_var,bVar1) == 0) || (iVar2 = recovered_10002a06(), iVar2 == 0)) ||
      (bVar1 = recovered_1000298b(1), CONCAT31(extraout_var_00,bVar1) == 0)) ||
     (iVar2 = recovered_10002a06(), iVar2 == 0)) {
    return false;
  }
  bVar1 = recovered_1000298b(0);
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026b3
 */

undefined4 recovered_100026b3(undefined1 param_1,undefined1 param_2,undefined4 param_3)

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
 * Address: 0x10002700
 */

undefined4 recovered_10002700(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  code *pcVar2;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_1000274e;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_1000274e:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002766
 */

undefined4 recovered_10002766(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int *in_ECX;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10002794;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10002794:
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return 0;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b0
 */

undefined4 recovered_100027b0(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_10002700(4,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 (*)[7])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027fe
 */

undefined4 recovered_100027fe(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  int iVar3;

  local_20 = 0;
  local_1c[0] = 0;
  if ((param_2 != (undefined4 *)0x0) &&
     (bVar1 = recovered_1000298b(0), CONCAT31(extraout_var,bVar1) != 0)) {
    recovered_10002a06();
    iVar2 = recovered_100024e6();
    if ((iVar2 != 0) && (iVar2 = recovered_10002a06(), iVar2 != 0)) {
      iVar2 = 1000;
      while ((bVar1 = iVar2 != 0, iVar2 = iVar2 + -1, bVar1 &&
             ((iVar3 = recovered_10002498(0x68,&local_20), iVar3 == 0 || ((local_20 & 3) != 2))))) {
        recovered_10002583();
      }
      if ((local_20 & 3) == 2) {
        iVar2 = recovered_100027b0(100,local_1c);
        if (iVar2 == 0) {
          return 0;
        }
        recovered_10002a06();
        *param_2 = local_1c[0];
        return 1;
      }
    }
  }
  return 0;
}

#undef local_20
#undef local_1c

#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000298b
 */

bool recovered_1000298b(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 in_ECX;
  uint in_EDX;
  uint uVar2;

  local_1c = 0;
  local_18 = in_EDX;
  for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
    iVar1 = recovered_10002498(in_ECX,&local_1c);
    if ((iVar1 != 0) && ((local_1c & local_18) == param_1)) break;
    recovered_10002583();
  }
  return uVar2 < 1000;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a06
 */

undefined4 recovered_10002a06(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002766();
  return uVar1;
}


#undef DAT_10003100
#define DAT_10003100 (*(int *)(((uintptr_t)pf_module_state + 0x360U)))
#undef DAT_10003104
#define DAT_10003104 (*(int *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_10003110
#define DAT_10003110 (*(int *)(((uintptr_t)pf_module_state + 0x370U)))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a2d
 */

bool recovered_10002a2d(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  local_18[0] = 0;
  bVar1 = false;
  if (DAT_10003110 != 0 && (DAT_10003104 != 0 && DAT_10003100 != 0)) {
    recovered_10002498(DAT_10003110,local_18);
    local_18[0] = local_18[0] & 0xfffffffd;
    iVar2 = recovered_10002a06();
    if (iVar2 != 0) {
      bVar1 = recovered_1000298b(0);
    }
  }
  return bVar1;
}

#undef DAT_10003100
#undef DAT_10003104
#undef DAT_10003110
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac4
 */

void recovered_10002ac4(uint param_1,int param_2)

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
    recovered_10002b7d(cVar3);
  }
  return;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b16
 */

void recovered_10002b16(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10002b7d(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10002b7d(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b7d
 */

void recovered_10002b7d(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10002004();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


#undef DAT_10002f81
#define DAT_10002f81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_10002f86
#define DAT_10002f86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
#undef DAT_10002f8b
#define DAT_10002f8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ebU)))
#undef DAT_10002f90
#define DAT_10002f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_10002f95
#define str_10002f95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10002fa0
#define str_10002fa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x200U)))
#undef str_10002fa9
#define str_10002fa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bab
 */

char * recovered_10002bab(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int in_ECX;

  if (in_ECX == 0) {
    pcVar1 = &DAT_10002f81;
  }
  else if (in_ECX == 0xfe) {
    pcVar1 = str_10002fa0;
  }
  else if (in_ECX == 0x20) {
    pcVar1 = &DAT_10002f8b;
  }
  else if (in_ECX == 0x30) {
    pcVar1 = &DAT_10002f90;
  }
  else if (in_ECX == 0x80) {
    pcVar1 = str_10002f95;
  }
  else if (in_ECX == 0x10) {
    pcVar1 = &DAT_10002f86;
  }
  else {
    pcVar1 = str_10002fa9;
  }
  return pcVar1;
}

#undef DAT_10002f81
#undef DAT_10002f86
#undef DAT_10002f8b
#undef DAT_10002f90
#undef str_10002f95
#undef str_10002fa0
#undef str_10002fa9

#undef DAT_10005300
#define DAT_10005300 (*(int *)(((uintptr_t)pf_module_state + 0x2560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c14
 */

/* WARNING: Removing unreachable block (ram,0x10002c39) */

void recovered_10002c14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10005300;
  { __typeof__(DAT_10005300) pf_atomic_old = __atomic_exchange_n(&(DAT_10005300),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10005300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3f
 */

undefined4 recovered_10002c3f(int param_1,undefined4 param_2,int param_3)

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
 * Address: 0x10002c8b
 */

void recovered_10002c8b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1d] != (code *)0x0)) {
    (*(code *)in_ECX[0x1d])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cbd
 */

undefined4 recovered_10002cbd(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10002766();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce4
 */

undefined8 recovered_10002ce4(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10002d1f;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002d1f;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002d1f:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d26
 */

undefined8 recovered_10002d26(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002d6a
 */

undefined8 recovered_10002d6a(uint param_1,uint param_2,uint param_3)

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
