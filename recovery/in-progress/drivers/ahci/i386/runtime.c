/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005cf
 */

void * recovered_100005cf(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003744
#define DAT_10003744 (*(int * *)(((uintptr_t)pf_module_state + 0xa6cU)))
#undef str_10002edb
#define str_10002edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_10002eed
#define str_10002eed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_10002efa
#define str_10002efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_10002f08
#define str_10002f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x230U)))
#define local_1f8 (*(code * *)(pf_stack_frame + 56))
#define local_1f4 (*(code * *)(pf_stack_frame + 60))
#define local_1f0 (*(code * *)(pf_stack_frame + 64))
#define local_1ec (*(code * *)(pf_stack_frame + 68))
#define local_1e8 (*(code * *)(pf_stack_frame + 72))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_1dc (*(undefined4 *)(pf_stack_frame + 84))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_1d4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 96))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 100))
#define local_1c8 (*(undefined4 *)(pf_stack_frame + 104))
#define local_1c4 (*(undefined4 *)(pf_stack_frame + 108))
#define local_1bc (*(code * *)(pf_stack_frame + 116))
#define local_218 (*(int *)(pf_stack_frame + 24))
#define local_20c (*(int *)(pf_stack_frame + 36))
#define local_200 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1fc (*(int *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e5
 */

uint recovered_100005e5(void *api)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    DAT_1000301c = 0;
    DAT_10003020 = 0;
    recovered_100008e7();
    recovered_100008e7();
    DAT_10003744 = api;
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((int)api + 8))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      local_218 = 0;
      for (iVar4 = 0; iVar4 != 0x100; iVar4 = iVar4 + 1) {
        for (iVar1 = 0; iVar1 != 0x20; iVar1 = iVar1 + 1) {
          iVar2 = recovered_10001936((byte)iVar1,0,(undefined1 *)&local_1d0);
          if (iVar2 != 0) {
            iVar2 = recovered_10000900();
            local_218 = iVar2 + local_218;
            if ((char)local_1c4 < '\0') {
              local_20c = local_218;
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_10001936((byte)iVar1,(char)iVar2 + '\b',(undefined1 *)&local_200);
                if (iVar3 != 0) {
                  iVar3 = recovered_10000900();
                  local_20c = local_20c + iVar3;
                }
              }
              local_218 = local_20c;
            }
          }
        }
      }
      if (DAT_10003020 != 0 && local_218 != 0) {
        local_200 = 3;
        local_1f8 = recovered_100016df;
        local_1f4 = recovered_10001772;
        local_1f0 = recovered_10001798;
        local_1ec = recovered_100017be;
        local_1e8 = recovered_1000187a;
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1d4 = 0;
        local_1fc = DAT_10003020;
        recovered_100008e7();
        local_1d0 = 0x1bc;
        local_1cc = 1;
        local_1c8 = 0x11;
        local_1c4 = 0x13;
        local_1bc = recovered_10002acc;
        recovered_10001b17(str_10002edb);
        recovered_10001b17(str_10002eed);
        recovered_10001b17(str_10002efa);
        recovered_10001b17(str_10002f08);
        if (((DAT_10003744 != (int *)0x0) && (*DAT_10003744 == 0x54584b57)) &&
           (((0xef < (uint)DAT_10003744[2] &&
             (((((code *)DAT_10003744[0x3b] != (code *)0x0 &&
                (iVar4 = (*(code *)DAT_10003744[0x3b])(&local_1d0), iVar4 != 0)) &&
               (*(int *)api == 0x54584b57)) &&
              ((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0))))))
            && (iVar4 = (**(code **)((int)api + 0xd0))(&local_200), iVar4 != 0)))) {
          return 1;
        }
      }
    }
    recovered_1000168b();
  }
  return 0;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003744
#undef str_10002edb
#undef str_10002eed
#undef str_10002efa
#undef str_10002f08
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1bc
#undef local_218
#undef local_20c
#undef local_200
#undef local_1fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e7
 */

void recovered_100008e7(void)

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


#undef DAT_10002d02
#define DAT_10002d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_10002e48
#define DAT_10002e48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x170U)))
#undef DAT_10002ebb
#define DAT_10002ebb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e3U)))
#undef DAT_10002ebd
#define DAT_10002ebd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef DAT_10002ebf
#define DAT_10002ebf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef DAT_10002ec4
#define DAT_10002ec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#undef DAT_10002ec7
#define DAT_10002ec7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef DAT_10002ec9
#define DAT_10002ec9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10003028
#define DAT_10003028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1000302c
#define DAT_1000302c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_10003030
#define DAT_10003030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10003034
#define DAT_10003034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_10003035
#define DAT_10003035 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35dU)))
#undef DAT_10003036
#define DAT_10003036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_10003037
#define DAT_10003037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef DAT_10003038
#define DAT_10003038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x360U)))
#undef DAT_1000303c
#define DAT_1000303c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003068
#define DAT_10003068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x390U)))
#undef DAT_1000306c
#define DAT_1000306c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x394U)))
#undef DAT_10003070
#define DAT_10003070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_10003074
#define DAT_10003074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x39cU)))
#undef DAT_10003078
#define DAT_10003078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a0U)))
#undef DAT_1000307c
#define DAT_1000307c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a4U)))
#undef DAT_10003080
#define DAT_10003080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a8U)))
#undef DAT_10003088
#define DAT_10003088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b0U)))
#undef DAT_100030cc
#define DAT_100030cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_10003110
#define DAT_10003110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_10003111
#define DAT_10003111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x439U)))
#undef DAT_10003112
#define DAT_10003112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43aU)))
#undef DAT_10003113
#define DAT_10003113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43bU)))
#undef DAT_10003114
#define DAT_10003114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_10003115
#define DAT_10003115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43dU)))
#undef DAT_1000313b
#define DAT_1000313b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x463U)))
#undef str_10002dd7
#define str_10002dd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_10002ddf
#define str_10002ddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_10002de8
#define str_10002de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#undef str_10002df6
#define str_10002df6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_10002e0b
#define str_10002e0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x133U)))
#undef str_10002e1d
#define str_10002e1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_10002e2f
#define str_10002e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157U)))
#undef str_10002e7e
#define str_10002e7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a6U)))
#define local_894 (*(char * *)(pf_stack_frame + 28))
#define local_890 (*(uint *)(pf_stack_frame + 32))
#define local_88c (*(uint *)(pf_stack_frame + 36))
#define local_888 (*(uint *)(pf_stack_frame + 40))
#define local_884 (*(int *)(pf_stack_frame + 44))
#define local_880 (*(uint *)(pf_stack_frame + 48))
#define local_87c (*(int * *)(pf_stack_frame + 52))
#define local_878 (*(char * *)(pf_stack_frame + 56))
#define local_874 (*(uint (*)[541])(pf_stack_frame + 60))
#define local_814 (*(uint (*)[517])(pf_stack_frame + 156))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1180))
#define local_898 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000900
 */

undefined4 recovered_10000900(void)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  undefined3 extraout_var_05 = 0;
  int iVar11;
  int iVar12;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int *in_ECX;
  byte *in_EDX;
  uint uVar13;
  char cVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;

  local_88c = 0;
  local_890 = 0;
  sVar5 = *(short *)(in_EDX + 6);
  if (((in_EDX[8] != 1) || (in_EDX[9] != 6)) || (in_EDX[10] != 1)) {
    if (in_EDX[8] != 1) {
      return 0;
    }
    if (in_EDX[9] != 4) {
      return 0;
    }
    if (*(short *)(in_EDX + 4) != -0x7f7a) {
      return 0;
    }
    if (((sVar5 != 0x282a) && (sVar5 != -0x62f9)) && (sVar5 != -0x62fb)) {
      return 0;
    }
  }
  if (1 < DAT_1000301c) {
    return 0;
  }
  iVar8 = DAT_1000301c * 0x20;
  iVar11 = DAT_1000301c * 8;
  recovered_100008e7();
  *(uint *)(&DAT_10003028 + iVar8) = DAT_1000301c;
  bVar2 = *in_EDX;
  (&DAT_10003034)[iVar8] = bVar2;
  bVar3 = in_EDX[1];
  (&DAT_10003035)[iVar8] = bVar3;
  bVar4 = in_EDX[2];
  (&DAT_10003036)[iVar8] = bVar4;
  *(uint *)(&DAT_1000303c + iVar8) =
       (uint)bVar4 << 8 | (uint)bVar3 << 0xb | (uint)bVar2 << 0x10 | 0x80000000;
  local_894 = &DAT_10002d02;
  recovered_10001b17(&DAT_10002d02);
  iVar9 = recovered_10001ab3(in_EDX[1],in_EDX[2],4,2,(int)&local_88c);
  if (iVar9 == 0) {
LAB_10000b0c:
    recovered_10001b36();
    return 0;
  }
  *(undefined2 *)(&DAT_10003038 + iVar8) = (undefined2)local_88c;
  (&DAT_10003037)[iVar8] = 1;
  local_814[0] = 0;
  pcVar10 = str_10002e0b;
  if (((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) &&
     ((99 < (uint)in_ECX[2] && (in_ECX[0x18] != 0)))) {
    iVar9 = recovered_10001ab3(in_EDX[1],in_EDX[2],4,2,(int)local_814);
    if (iVar9 == 0) {
      pcVar10 = str_10002e1d;
    }
    else {
      uVar15 = 0;
      for (iVar9 = -0x18; iVar9 != 0; iVar9 = iVar9 + 4) {
        uVar13 = uVar15 | 1;
        uVar17 = uVar15 | 2;
        if (*(uint *)(in_EDX + iVar9 + 0x2c) == 0) {
          uVar17 = uVar15;
        }
        uVar15 = uVar17;
        if ((*(uint *)(in_EDX + iVar9 + 0x2c) & 1) != 0) {
          uVar15 = uVar13;
        }
      }
      iVar9 = recovered_10001fd8();
      uVar17 = uVar15 | 4;
      if (iVar9 == 0) {
        uVar17 = uVar15;
      }
      if (in_EDX[8] == 6) {
        if (in_EDX[9] != 0) {
          uVar17 = uVar17 | 2;
        }
      }
      local_874[0] = local_814[0] | uVar17;
      iVar9 = recovered_10001f8b(in_EDX[1],in_EDX[2],local_874[0]);
      if (iVar9 != 0) {
        recovered_10001ab3(in_EDX[1],in_EDX[2],4,2,(int)local_874);
        if ((uVar17 & ~local_874[0]) != 0) goto LAB_10000b2f;
        piVar16 = (int *)(&DAT_1000302c + iVar8);
        iVar9 = recovered_10001d5f(0x100,piVar16);
        if ((iVar9 == 0) || (*piVar16 == 0)) {
          uVar15 = *(uint *)(in_EDX + 0x28);
LAB_10000dde:
          recovered_10001b61(uVar15);
        }
        else {
          local_814[0] = 0;
          local_874[0] = 0;
          local_898 = 0;
          bVar6 = recovered_10001e64(4,local_814);
          if (local_814[0] != 0xffffffff && CONCAT31(extraout_var,bVar6) != 0) {
            local_814[0] = local_814[0] & 0x7ffffffd | 0x80000000;
            iVar9 = recovered_10002285(4,local_814[0]);
            if (iVar9 != 0) {
              local_87c = (int *)(&DAT_10003030 + iVar8);
              bVar6 = recovered_10001e64(0,local_87c);
              if (((CONCAT31(extraout_var_00,bVar6) != 0) &&
                  (bVar6 = recovered_10001e64(0x24,local_874), CONCAT31(extraout_var_01,bVar6) != 0)
                  ) && (bVar6 = recovered_10001e64(0x28,&local_898),
                       CONCAT31(extraout_var_02,bVar6) != 0)) {
                if ((local_874[0] & local_898 & 1) == 0) {
LAB_10000dec:
                  bVar6 = recovered_10001e64(0xc,&local_890);
                  if (1 < local_890 + 1 && CONCAT31(extraout_var_04,bVar6) != 0) {
                    uVar15 = 0;
                    uVar17 = 0;
                    while (uVar15 != 0x20) {
                      uVar13 = uVar15 & 0x1f;
                      uVar15 = uVar15 + 1;
                      if ((local_890 >> uVar13 & 1) != 0) {
                        uVar17 = uVar15;
                      }
                    }
                    iVar9 = recovered_10001d5f(uVar17 * 0x80 + 0x100,piVar16);
                    if ((iVar9 != 0) && (*piVar16 != 0)) {
                      (&DAT_10003024)[iVar11] = 1;
                      uVar15 = 0;
                      local_888 = DAT_10003020;
                      local_878 = str_10002e7e;
                      uVar17 = DAT_10003020;
                      while ((uVar15 < 0x20 && (uVar17 < 8))) {
                        if ((local_890 >> (uVar15 & 0x1f) & 1) != 0) {
                          iVar9 = uVar17 * 0xdc;
                          local_814[0] = 0;
                          local_874[0] = 0;
                          recovered_100008e7();
                          (&DAT_10003068)[uVar17 * 0x37] = *(undefined4 *)(&DAT_10003028 + iVar8);
                          iVar11 = *(int *)(&DAT_1000302c + iVar8);
                          *(uint *)(&DAT_1000306c + iVar9) = uVar15;
                          *(uint *)(&DAT_10003070 + iVar9) = uVar15 * 0x80 + 0x100 + iVar11;
                          local_884 = iVar9;
                          local_880 = uVar15;
                          recovered_100021ad(local_814);
                          if ((((extraout_EAX == 0) || ((local_814[0] & 0xf0f) != 0x103)) ||
                              (recovered_100021ad(local_874), extraout_EAX_00 == 0)) ||
                             (local_874[0] != 0x101)) {
                            *(undefined4 *)(&DAT_10003070 + iVar9) = 0;
                          }
                          else {
                            bVar6 = recovered_100020df();
                            if (CONCAT31(extraout_var_05,bVar6) == 0) {
                              recovered_10001b36();
                              *(undefined4 *)(&DAT_10003070 + iVar9) = 0;
                            }
                            else {
                              uVar15 = recovered_10002813(&DAT_10003074 + uVar17 * 0x37);
                              *(uint *)(&DAT_10003078 + iVar9) = uVar15;
                              uVar15 = recovered_10002813((int *)(iVar9 + ((uintptr_t)pf_module_state+0x3acU)));
                              *(uint *)(&DAT_10003088 + iVar9) = uVar15;
                              if (uVar15 != 0 && *(int *)(&DAT_10003078 + iVar9) != 0) {
                                iVar11 = recovered_10002869(*(int *)(&DAT_10003078 + iVar9),
                                                            (int)(&DAT_1000307c + iVar9));
                                if (((iVar11 != 0) &&
                                    ((*(ushort *)(&DAT_1000307c + iVar9) & 0xfff) == 0)) &&
                                   ((*(int *)(&DAT_10003080 + iVar9) == 0 || (*local_87c < 0)))) {
                                  iVar11 = 0;
                                  piVar16 = (int *)(&DAT_100030cc + iVar9);
LAB_1000105f:
                                  if (iVar11 != 0x10000) {
                                    iVar12 = recovered_10002869(*(int *)(&DAT_10003088 + iVar9) +
                                                                iVar11,(int)(piVar16 + -0x10));
                                    if ((iVar12 != 0) &&
                                       ((*(ushort *)(piVar16 + -0x10) & 0xfff) == 0))
                                    goto code_r0x100010a5;
                                    goto LAB_10001020;
                                  }
                                  recovered_100008e7();
                                  recovered_100008e7();
                                  recovered_100028b7();
                                  recovered_100028b7();
                                  recovered_100021df(0);
                                  if (((((extraout_EAX_01 == 0) ||
                                        (recovered_100021df(*(undefined4 *)(&DAT_1000307c + iVar9)),
                                        extraout_EAX_02 == 0)) ||
                                       (recovered_100021df(*(undefined4 *)(&DAT_10003080 + iVar9)),
                                       extraout_EAX_03 == 0)) ||
                                      (((recovered_100021df(*(int *)(&DAT_1000307c + iVar9) + 0x400)
                                        , extraout_EAX_04 == 0 ||
                                        (recovered_100021df(*(undefined4 *)(&DAT_10003080 + iVar9)),
                                        extraout_EAX_05 == 0)) ||
                                       (recovered_100021df(0xffffffff), extraout_EAX_06 == 0)))) ||
                                     ((recovered_100021df(0xffffffff), extraout_EAX_07 == 0 ||
                                      (iVar11 = recovered_1000232e(), iVar11 == 0))))
                                  goto LAB_10001020;
                                  (&DAT_10003064)[uVar17 * 0x37] = 1;
                                  iVar11 = recovered_10002431(0xec,0,0,0x200,0);
                                  if (((iVar11 == 0) ||
                                      (((iVar11 = *(int *)(&DAT_10003088 + iVar9), iVar11 == 0 ||
                                        (*(char *)(iVar11 + 1) < '\0')) ||
                                       ((~*(byte *)(iVar11 + 99) & 3) != 0)))) ||
                                     (((*(byte *)(iVar11 + 0xd5) & 0xd0) == 0x50 &&
                                      (*(int *)(iVar11 + 0xea) != 0x100)))) {
LAB_10001326:
                                    recovered_10001b36();
                                    goto LAB_10001020;
                                  }
                                  bVar2 = *(byte *)(iVar11 + 0xa7);
                                  (&DAT_10003112)[iVar9] = (bVar2 & 0xd0) == 0x50;
                                  (&DAT_10003113)[iVar9] = (bVar2 & 0xe0) == 0x60;
                                  bVar6 = (bVar2 & 0xc4) == 0x44;
                                  (&DAT_10003111)[iVar9] = bVar6;
                                  uVar15 = *(uint *)(iVar11 + 0x78);
                                  if (bVar6) {
                                    iVar12 = *(int *)(iVar11 + 0xcc);
                                    uVar13 = *(uint *)(iVar11 + 200);
                                    if (*(uint *)(iVar11 + 200) == 0 && iVar12 == 0) {
                                      (&DAT_10003111)[iVar9] = 0;
                                      goto LAB_100012bd;
                                    }
                                  }
                                  else {
LAB_100012bd:
                                    iVar12 = 0;
                                    uVar13 = uVar15;
                                    if (uVar15 == 0) goto LAB_10001326;
                                  }
                                  (&DAT_10003110)[iVar9] = iVar12 != 0;
                                  (&DAT_1000310c)[uVar17 * 0x37] = -(uint)(iVar12 != 0) | uVar13;
                                  for (uVar15 = 0; uVar15 < 0x28; uVar15 = uVar15 + 2) {
                                    cVar14 = *(char *)(iVar11 + 0x37 + uVar15);
                                    cVar7 = *(char *)(iVar11 + 0x36 + uVar15);
                                    if (0x5e < (byte)(cVar14 - 0x20U)) {
                                      cVar14 = ' ';
                                    }
                                    (&DAT_10003114)[uVar15 + local_884] = cVar14;
                                    if (0x5e < (byte)(cVar7 - 0x20U)) {
                                      cVar7 = ' ';
                                    }
                                    (&DAT_10003115)[uVar15 + local_884] = cVar7;
                                  }
                                  iVar11 = 0;
                                  do {
                                    iVar9 = iVar11;
                                    if (iVar9 == -0x28) break;
                                    iVar11 = iVar9 + -1;
                                  } while ((&DAT_1000313b)[iVar9 + local_884] == ' ');
                                  *(undefined1 *)
                                   (iVar9 + 0xd8 + (int)(&DAT_10003064 + uVar17 * 0x37)) = 0;
                                  DAT_10003020 = DAT_10003020 + 1;
                                  goto LAB_10001039;
                                }
                              }
LAB_10001020:
                              recovered_10002079();
                            }
                          }
LAB_10001039:
                          uVar15 = local_880;
                          uVar17 = DAT_10003020;
                        }
                        uVar15 = uVar15 + 1;
                      }
                      uVar17 = uVar17 - local_888;
                      if (uVar17 != 0) {
                        DAT_1000301c = DAT_1000301c + 1;
                        recovered_10001b17(local_894);
                        recovered_10001ede(uVar17);
                        pcVar10 = str_10002ddf;
                        if (uVar17 == 1) {
                          pcVar10 = str_10002dd7;
                        }
                        recovered_10001f45(pcVar10);
                        recovered_10001f45(&DAT_10003114 + local_888 * 0xdc);
                        recovered_10001b17(str_10002de8);
                        recovered_10001f45(&DAT_10002ebb);
                        recovered_10001ff9((uint)*in_EDX,2);
                        recovered_10001f45(&DAT_10002e48);
                        recovered_10001ff9((uint)in_EDX[1],2);
                        local_894 = &DAT_10002ebd;
                        recovered_10001f45(&DAT_10002ebd);
                        recovered_10001ede((uint)in_EDX[2]);
                        recovered_10001b17(&DAT_10002ebf);
                        recovered_10001ff9((uint)*in_EDX,2);
                        recovered_10001f45(&DAT_10002e48);
                        recovered_10001ff9((uint)in_EDX[1],2);
                        recovered_10001f45(local_894);
                        recovered_10001ede((uint)in_EDX[2]);
                        recovered_10001f45(&DAT_10002ec4);
                        recovered_10001ff9((uint)*(ushort *)(in_EDX + 4),4);
                        recovered_10001f45(&DAT_10002e48);
                        recovered_10001ff9((uint)*(ushort *)(in_EDX + 6),4);
                        recovered_10001f45(&DAT_10002ec7);
                        if (local_414[0] != '\0') {
                          recovered_10001f45(&DAT_10002ec9);
                          recovered_10001f45(local_414);
                        }
                        if ((code *)in_ECX[3] != (code *)0x0) {
                          (*(code *)in_ECX[3])(local_874,str_10002df6,local_814);
                        }
                        return 1;
                      }
                      recovered_10001c93();
                      goto LAB_10000b0c;
                    }
                  }
                  uVar15 = local_890;
                  goto LAB_10000dde;
                }
                iVar9 = recovered_10002285(0x28,local_898 | 2);
                if (iVar9 != 0) {
                  iVar9 = 0x7ea;
                  while (bVar6 = iVar9 != 0, iVar9 = iVar9 + -1, bVar6) {
                    bVar6 = recovered_10001e64(0x28,&local_898);
                    if (CONCAT31(extraout_var_03,bVar6) == 0) goto LAB_100013a9;
                    if ((local_898 & 0x13) == 2) goto LAB_10000dec;
                    recovered_100022d8();
                  }
                  recovered_10001b36();
                }
              }
            }
          }
LAB_100013a9:
          local_814[0] = 0;
          recovered_10001e64(4,local_814);
          recovered_10001b61(local_814[0]);
        }
        recovered_10001c93();
        return 0;
      }
      pcVar10 = str_10002e2f;
    }
  }
  recovered_10001f45(pcVar10);
LAB_10000b2f:
  recovered_10001b61(local_88c);
  recovered_10001c93();
  return 0;
code_r0x100010a5:
  piVar1 = piVar16 + 1;
  iVar11 = iVar11 + 0x1000;
  iVar12 = *piVar16;
  piVar16 = piVar1;
  if ((iVar12 == 0) || (*local_87c < 0)) goto LAB_1000105f;
  goto LAB_10001020;
}

#undef DAT_10002d02
#undef DAT_10002e48
#undef DAT_10002ebb
#undef DAT_10002ebd
#undef DAT_10002ebf
#undef DAT_10002ec4
#undef DAT_10002ec7
#undef DAT_10002ec9
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_1000302c
#undef DAT_10003030
#undef DAT_10003034
#undef DAT_10003035
#undef DAT_10003036
#undef DAT_10003037
#undef DAT_10003038
#undef DAT_1000303c
#undef DAT_10003064
#undef DAT_10003068
#undef DAT_1000306c
#undef DAT_10003070
#undef DAT_10003074
#undef DAT_10003078
#undef DAT_1000307c
#undef DAT_10003080
#undef DAT_10003088
#undef DAT_100030cc
#undef DAT_1000310c
#undef DAT_10003110
#undef DAT_10003111
#undef DAT_10003112
#undef DAT_10003113
#undef DAT_10003114
#undef DAT_10003115
#undef DAT_1000313b
#undef str_10002dd7
#undef str_10002ddf
#undef str_10002de8
#undef str_10002df6
#undef str_10002e0b
#undef str_10002e1d
#undef str_10002e2f
#undef str_10002e7e
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
#undef local_414
#undef local_898

#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10003744
#define DAT_10003744 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000168b
 */

void recovered_1000168b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  bool bVar3;

  iVar1 = 2;
  piVar2 = &DAT_10003024;
  while (bVar3 = iVar1 != 0, iVar1 = iVar1 + -1, bVar3) {
    if ((*piVar2 != 0) || (*(char *)((int)piVar2 + 0x13) != '\0')) {
      recovered_10001c93();
    }
    piVar2 = piVar2 + 8;
  }
  DAT_1000301c = 0;
  DAT_10003020 = 0;
  DAT_10003744 = 0;
  return;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003744

#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_10003114
#define DAT_10003114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_10002ecc
#define str_10002ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016df
 */

undefined4 recovered_100016df(uint param_1,undefined4 *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;

  uVar1 = 0;
  if (((param_1 < DAT_10003020) && (param_2 != (undefined4 *)0x0)) &&
     ((&DAT_10003064)[param_1 * 0x37] != 0)) {
    *param_2 = (&DAT_1000310c)[param_1 * 0x37];
    uVar1 = 1;
    if (param_4 != 0 && param_3 != 0) {
      pcVar3 = str_10002ecc;
      if ((&DAT_10003114)[param_1 * 0xdc] != '\0') {
        pcVar3 = &DAT_10003114 + param_1 * 0xdc;
      }
      for (iVar4 = 0; iVar2 = param_4 + -1, param_4 + -1 != iVar4; iVar4 = iVar4 + 1) {
        if (pcVar3[iVar4] == '\0') {
          iVar2 = iVar4;
          break;
        }
        *(char *)(param_3 + iVar4) = pcVar3[iVar4];
      }
      *(undefined1 *)(param_3 + iVar2) = 0;
    }
  }
  return uVar1;
}

#undef DAT_10003020
#undef DAT_10003064
#undef DAT_1000310c
#undef DAT_10003114
#undef str_10002ecc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001772
 */

void recovered_10001772(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100028e9(param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001798
 */

void recovered_10001798(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100028e9(param_3,param_4,1);
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003744
#define DAT_10003744 (*(int *)(((uintptr_t)pf_module_state + 0xa6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017be
 */

undefined4 recovered_100017be(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;

  uVar3 = 0;
  piVar4 = (int *)0x0;
  if (param_1 < DAT_10003020) {
    piVar4 = &DAT_10003064 + param_1 * 0x37;
    if (*piVar4 == 0) {
      piVar4 = (int *)0x0;
    }
  }
  if (((piVar4 != (int *)0x0) && (DAT_10003744 != 0)) && (uVar2 = piVar4[1], uVar2 < DAT_1000301c))
  {
    bVar1 = *(byte *)((int)piVar4 + 0xaf);
    if ((bVar1 == 0) && (*(char *)((int)piVar4 + 0xae) != '\x01')) {
      uVar3 = 1;
    }
    else {
      recovered_10002aad();
      uVar3 = 0;
      if (((&DAT_10003024)[uVar2 * 8] != 0) && (*piVar4 != 0)) {
        uVar3 = recovered_10002431((bVar1 & *(byte *)((int)piVar4 + 0xad)) * '\x03' - 0x19,0,0,0,0);
      }
      *(undefined4 *)(&DAT_10003040 + uVar2 * 0x20) = 0;
    }
  }
  return uVar3;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003040
#undef DAT_10003064
#undef DAT_10003744

#undef DAT_10002ed6
#define DAT_10002ed6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feU)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003034
#define DAT_10003034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_10003035
#define DAT_10003035 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35dU)))
#undef DAT_10003036
#define DAT_10003036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003068
#define DAT_10003068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x390U)))
#undef DAT_1000306c
#define DAT_1000306c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x394U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000187a
 */

undefined4 recovered_1000187a(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 *puVar7;
  int iVar8;

  uVar5 = 0;
  if ((param_1 < DAT_10003020) && ((&DAT_10003064)[param_1 * 0x37] != 0)) {
    uVar4 = *(uint *)(&DAT_1000306c + param_1 * 0xdc);
    iVar8 = (&DAT_10003068)[param_1 * 0x37] * 0x20;
    uVar1 = (&DAT_10003034)[iVar8];
    uVar2 = (&DAT_10003035)[iVar8];
    uVar3 = (&DAT_10003036)[iVar8];
    for (iVar8 = -0x40; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 0x40 + iVar8) = 0;
    }
    puVar7 = &DAT_10002ed6;
    for (iVar8 = -4; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 4 + iVar8) = *puVar7;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    bVar6 = 0;
    for (iVar8 = -4; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(char *)(param_2 + 0xc + iVar8) = (char)(uVar4 >> (bVar6 & 0x1f));
      bVar6 = bVar6 + 8;
    }
    uVar5 = 1;
    for (iVar8 = -8; iVar8 != 0; iVar8 = iVar8 + 1) {
      *(undefined1 *)(param_2 + 0x18 + iVar8) = 0;
    }
  }
  return uVar5;
}

#undef DAT_10002ed6
#undef DAT_10003020
#undef DAT_10003034
#undef DAT_10003035
#undef DAT_10003036
#undef DAT_10003064
#undef DAT_10003068
#undef DAT_1000306c

#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined1 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001936
 */

undefined4 recovered_10001936(byte param_1,undefined1 param_2,undefined1 *param_3)

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
    iVar2 = recovered_10001ab3(param_1,param_2,0,4,(int)&local_30);
    if (((iVar2 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10001ab3(param_1,param_2,8,4,(int)&local_24);
      uVar1 = 0;
      if (iVar2 != 0) {
        local_20 = (undefined4 *)(param_3 + 0x10);
        iVar2 = recovered_10001ab3(param_1,param_2,4,4,(int)local_20);
        if (iVar2 == 0) {
          *local_20 = 0;
        }
        iVar2 = recovered_10001ab3(param_1,param_2,0xc,4,(int)&local_34);
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
          iVar3 = recovered_10001ab3((char)local_1c,param_2,(short)iVar2 + 0x28,4,(int)&local_28);
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
 * Address: 0x10001ab3
 */

undefined4
recovered_10001ab3(undefined1 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
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
 * Address: 0x10001b17
 */

void recovered_10001b17(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10001f45(param_1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b36
 */

void recovered_10001b36(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x2b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[10] != (code *)0x0)) {
    (*(code *)in_ECX[10])();
  }
  return;
}


#undef DAT_10002e48
#define DAT_10002e48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x170U)))
#undef DAT_10002e52
#define DAT_10002e52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10002e55
#define DAT_10002e55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dU)))
#undef str_10002e42
#define str_10002e42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_10002e4a
#define str_10002e4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b61
 */

void recovered_10001b61(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  char *in_EDX;

  recovered_10001b17(str_10002e42);
  recovered_10001ff9((uint)*(ushort *)(in_ECX + 4),4);
  recovered_10001f45(&DAT_10002e48);
  recovered_10001ff9((uint)*(ushort *)(in_ECX + 6),4);
  recovered_10001f45(str_10002e4a);
  recovered_10001ff9((uint)*(byte *)(in_ECX + 8),2);
  recovered_10001ff9((uint)*(byte *)(in_ECX + 9),2);
  recovered_10001f45(&DAT_10002e52);
  recovered_10001f45(in_EDX);
  recovered_10001f45(&DAT_10002e55);
  recovered_10001ff9(param_1,8);
  recovered_10001b36();
  return;
}

#undef DAT_10002e48
#undef DAT_10002e52
#undef DAT_10002e55
#undef str_10002e42
#undef str_10002e4a

#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003744
#define DAT_10003744 (*(int *)(((uintptr_t)pf_module_state + 0xa6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c93
 */

void recovered_10001c93(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int *piVar5;

  if ((in_ECX != (undefined4 *)0x0) && (DAT_10003744 != 0)) {
    *in_ECX = 0;
    bVar1 = true;
    piVar5 = &DAT_10003064;
    uVar3 = DAT_10003020;
    for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
      if ((piVar5[1] == in_ECX[1]) && ((*piVar5 != 0 || (piVar5[4] != 0)))) {
        iVar2 = recovered_10002079();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        uVar3 = DAT_10003020;
      }
      piVar5 = piVar5 + 0x37;
    }
    if (*(char *)((int)in_ECX + 0x13) != '\0') {
      uVar3 = in_ECX[5] & 0xfffffffb;
      if (bVar1) {
        uVar3 = in_ECX[5];
      }
      recovered_10001f8b(*(undefined1 *)((int)in_ECX + 0x11),*(undefined1 *)((int)in_ECX + 0x12),
                         uVar3 & 0xffff);
      *(undefined1 *)((int)in_ECX + 0x13) = 0;
    }
  }
  return;
}

#undef DAT_10003020
#undef DAT_10003064
#undef DAT_10003744

#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d5f
 */

undefined4 recovered_10001d5f(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;
  undefined4 uVar3;

  uVar3 = 0;
  if (((param_2 != (undefined4 *)0x0 && in_EDX != 0) && ((*(uint *)(in_EDX + 0x24) & 7) != 4)) &&
     (local_20 = *(uint *)(in_EDX + 0x28), (local_20 & 1) == 0 && local_20 != 0)) {
    local_18 = (uint)*(byte *)(in_EDX + 1);
    recovered_10001ab3(*(byte *)(in_EDX + 1),*(undefined1 *)(in_EDX + 2),0x24,4,(int)&local_20);
    if ((local_20 & 7) != 4) {
      uVar1 = 0xfffffffc;
      if ((local_20 & 1) == 0) {
        uVar1 = 0xfffffff0;
      }
      if ((param_1 != 0) && (uVar1 = uVar1 & local_20, uVar1 != 0)) {
        *param_2 = 0;
        local_1c = 0;
        uVar3 = 0;
        if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
          if ((uint)in_ECX[2] < 0xbc) {
            if ((uint)in_ECX[2] < 0x68) {
              return 0;
            }
          }
          else if ((code *)in_ECX[0x2e] != (code *)0x0) {
            uVar3 = (*(code *)in_ECX[0x2e])(uVar1,0,param_1,param_2);
            return uVar3;
          }
          if (((code *)in_ECX[0x19] != (code *)0x0) &&
             (iVar2 = (*(code *)in_ECX[0x19])(uVar1,0,param_1,&local_1c), iVar2 != 0)) {
            *param_2 = local_1c;
            uVar3 = 1;
          }
        }
      }
    }
  }
  return uVar3;
}

#undef local_20
#undef local_1c
#undef local_18

#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

bool recovered_10001e64(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;

  local_14[0] = 0;
  if (in_EDX == 0 || param_2 == (undefined4 *)0x0) {
    return false;
  }
  if (in_ECX == (int *)0x0) {
    return false;
  }
  if (*in_ECX != 0x54584b57) {
    return false;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_10001eb5;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return false;
  }
LAB_10001eb5:
  iVar2 = (*pcVar1)(in_EDX + param_1,4,local_14);
  if (iVar2 != 0) {
    *param_2 = local_14[0];
  }
  return iVar2 != 0;
}

#undef local_14

#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ede
 */

void recovered_10001ede(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_1000204b(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_1000204b(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f45
 */

void recovered_10001f45(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_10001fd8();
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
 * Address: 0x10001f8b
 */

undefined4 recovered_10001f8b(undefined1 param_1,undefined1 param_2,undefined4 param_3)

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
 * Address: 0x10001fd8
 */

int recovered_10001fd8(void)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff9
 */

void recovered_10001ff9(uint param_1,int param_2)

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
    recovered_1000204b(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000204b
 */

void recovered_1000204b(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_10001fd8();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002079
 */

undefined4 recovered_10002079(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  undefined4 *in_ECX;

  *in_ECX = 0;
  if ((in_ECX[3] != 0) && (bVar1 = recovered_100020df(), CONCAT31(extraout_var,bVar1) == 0)) {
    return 0;
  }
  if (in_ECX[4] != 0) {
    recovered_10002303();
  }
  if (in_ECX[8] != 0) {
    recovered_10002303();
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  return 1;
}


#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020df
 */

bool recovered_100020df(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int iVar1;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;

  local_18[0] = 0;
  recovered_100021ad(local_18);
  if (local_18[0] == 0xffffffff || extraout_EAX == 0) {
    return false;
  }
  if ((local_18[0] & 0x8001) != 0) {
    recovered_100021df(local_18[0] & 0xfffffffe);
    if (extraout_EAX_00 == 0) {
      return false;
    }
    iVar1 = recovered_10002211();
    if (iVar1 == 0) {
      return false;
    }
  }
  recovered_100021ad(local_18);
  if (extraout_EAX_01 == 0) {
    return false;
  }
  if ((local_18[0] & 0x4010) != 0) {
    recovered_100021df(local_18[0] & 0xffffffef);
    if (extraout_EAX_02 == 0) {
      return false;
    }
    iVar1 = recovered_10002211();
    if (iVar1 == 0) {
      return false;
    }
  }
  recovered_100021ad(local_18);
  return extraout_EAX_03 != 0 && (local_18[0] & 0xc011) == 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ad
 */

void recovered_100021ad(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_EDX;

  recovered_10001e64(in_EDX,param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021df
 */

void recovered_100021df(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_EDX;

  recovered_10002285(in_EDX,param_1);
  return;
}


#define local_1c (*(uint (*)[7])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002211
 */

undefined4 recovered_10002211(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  uint in_EDX;
  int iVar1;
  bool bVar2;

  local_1c[1] = 0x10002226;
  iVar1 = 0x1f5;
  while( true ) {
    bVar2 = iVar1 == 0;
    iVar1 = iVar1 + -1;
    if (bVar2) {
      return 0;
    }
    local_1c[0] = 0;
    recovered_100021ad(local_1c);
    if (extraout_EAX == 0) {
      return 0;
    }
    if (local_1c[0] == 0xffffffff) {
      return 0;
    }
    if ((local_1c[0] & in_EDX) == 0) break;
    recovered_100022d8();
  }
  return 1;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002285
 */

undefined4 recovered_10002285(int param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int *in_ECX;
  int in_EDX;

  if (((in_EDX != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_100022b7;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_100022b7:
      uVar2 = (*pcVar1)(in_EDX + param_1,4,param_2);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d8
 */

void recovered_100022d8(void)

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
 * Address: 0x10002303
 */

void recovered_10002303(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x3b < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xe] != (code *)0x0)) {
    (*(code *)in_ECX[0xe])();
  }
  return;
}


#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
#define local_20 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000232e
 */

undefined4 recovered_1000232e(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  undefined4 extraout_EAX_03 = 0;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;

  local_18[0] = 0;
  local_1c = 0;
  local_20 = 0;
  recovered_100021ad(local_18);
  uVar1 = 0;
  if (extraout_EAX != 0) {
    local_18[0] = local_18[0] & 0xfffffe9 | 0x10000016;
    recovered_100021df(local_18[0]);
    if (extraout_EAX_00 != 0) {
      iVar2 = 0x3e9;
      while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
        recovered_100021ad(&local_1c);
        if ((extraout_EAX_01 == 0) || (recovered_100021ad(&local_20), extraout_EAX_02 == 0)) {
          return 0;
        }
        if (((local_1c & 0x88) == 0) && ((local_20 & 0xf0f) == 0x103)) break;
        recovered_100022d8();
      }
      uVar1 = 0;
      if (((local_1c & 0x88) == 0) && ((local_20 & 0xf0f) == 0x103)) {
        recovered_100021df(local_18[0] | 1);
        uVar1 = extraout_EAX_03;
      }
    }
  }
  return uVar1;
}

#undef local_1c
#undef local_18
#undef local_20

#undef DAT_10003744
#define DAT_10003744 (*(int * *)(((uintptr_t)pf_module_state + 0xa6cU)))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(uint *)(pf_stack_frame + 60))
#define local_20 (*(int *)(pf_stack_frame + 64))
#define local_1c (*(int *)(pf_stack_frame + 68))
#define local_18 (*(int *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002431
 */

undefined4
recovered_10002431(byte param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  undefined3 extraout_var = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int iVar6;
  int *in_EDX;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;

  if ((((param_4 & 1) == 0) && (param_4 < 0x10001)) && (*in_EDX != 0)) {
    pbVar2 = (byte *)in_EDX[5];
    uVar5 = param_4 + 0xfff >> 0xc;
    local_20 = in_EDX[6];
    local_1c = local_20 + 0x800;
    recovered_100008e7();
    cVar1 = *(char *)((int)in_EDX + 0xad);
    for (iVar6 = -0x14; iVar6 != 0; iVar6 = iVar6 + 1) {
      pbVar2[iVar6 + 0x814] = 0;
    }
    pbVar2[0x800] = 0x27;
    pbVar2[0x801] = 0x80;
    pbVar2[0x802] = param_1;
    pbVar2[0x804] = (byte)param_2;
    pbVar2[0x805] = (byte)((uint)param_2 >> 8);
    pbVar2[0x806] = (byte)((uint)param_2 >> 0x10);
    bVar9 = (byte)((uint)param_2 >> 0x18);
    if (cVar1 == '\0') {
      bVar9 = bVar9 & 0xf | 0x40;
    }
    else {
      pbVar2[0x808] = bVar9;
      pbVar2[0x80d] = (byte)((uint)param_3 >> 8);
      bVar9 = 0x40;
    }
    pbVar2[0x807] = bVar9;
    pbVar2[0x80c] = (byte)param_3;
    local_18 = uVar5 * 4;
    uVar10 = param_4;
    for (iVar6 = 0; local_18 != iVar6; iVar6 = iVar6 + 4) {
      if (uVar10 == 0) {
        return 0;
      }
      uVar3 = *(uint *)((int)in_EDX + iVar6 + 0x28);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar7 = 0x1000;
      if (uVar10 < 0x1000) {
        uVar7 = uVar10;
      }
      *(uint *)(pbVar2 + iVar6 * 4 + 0x880) = uVar3;
      uVar11 = *(undefined4 *)((int)in_EDX + iVar6 + 0x68);
      pbVar2[iVar6 * 4 + 0x884] = (byte)uVar11;
      pbVar2[iVar6 * 4 + 0x885] = (byte)((uint)uVar11 >> 8);
      pbVar2[iVar6 * 4 + 0x886] = (byte)((uint)uVar11 >> 0x10);
      pbVar2[iVar6 * 4 + 0x887] = (byte)((uint)uVar11 >> 0x18);
      iVar8 = uVar7 + 0x3fffff;
      pbVar2[iVar6 * 4 + 0x88c] = (byte)iVar8;
      pbVar2[iVar6 * 4 + 0x88d] = (byte)((uint)iVar8 >> 8);
      pbVar2[iVar6 * 4 + 0x88e] = (byte)((uint)iVar8 >> 0x10) & 0x3f;
      pbVar2[iVar6 * 4 + 0x88f] = 0;
      uVar10 = uVar10 - 0x1000;
    }
    recovered_100008e7();
    *pbVar2 = (param_5 != 0) << 6 | 5;
    pbVar2[1] = 0;
    pbVar2[2] = (byte)uVar5;
    pbVar2[3] = 0;
    pbVar2[8] = (byte)local_20;
    pbVar2[9] = (byte)((uint)local_1c >> 8);
    pbVar2[10] = (byte)((uint)local_1c >> 0x10);
    pbVar2[0xb] = (byte)((uint)local_1c >> 0x18);
    *(int *)(pbVar2 + 0xc) = in_EDX[7];
    if (param_4 != 0) {
      recovered_100028b7();
    }
    iVar6 = in_EDX[5];
    uVar11 = 0x1000;
    recovered_100028b7();
    if (((DAT_10003744 != (int *)0x0) && (*DAT_10003744 == 0x54584b57)) &&
       ((0x7b < (uint)DAT_10003744[2] && ((code *)DAT_10003744[0x1e] != (code *)0x0)))) {
      (*(code *)DAT_10003744[0x1e])(iVar6,uVar11);
    }
    recovered_100021df(0xffffffff);
    if (((extraout_EAX != 0) && (recovered_100021df(0xffffffff), extraout_EAX_00 != 0)) &&
       (recovered_100021df(1), extraout_EAX_01 != 0)) {
      for (uVar5 = 0; uVar5 < 15000000; uVar5 = uVar5 + 100) {
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        recovered_100021ad(&local_24);
        if ((((extraout_EAX_02 == 0) || (recovered_100021ad(&local_28), extraout_EAX_03 == 0)) ||
            (recovered_100021ad(&local_2c), extraout_EAX_04 == 0)) || (local_24 == 0xffffffff))
        break;
        if ((local_2c & 1) != 0 || (local_28 & 0x78000000) != 0) {
          bVar4 = recovered_100020df();
          if (((CONCAT31(extraout_var,bVar4) != 0) &&
              (recovered_100021df(0xffffffff), extraout_EAX_05 != 0)) &&
             ((recovered_100021df(0xffffffff), extraout_EAX_06 != 0 &&
              (iVar6 = recovered_1000232e(), iVar6 != 0)))) {
            return 0;
          }
          break;
        }
        if ((local_24 & 1) == 0) {
          if (param_5 == 0 && param_4 != 0) {
            recovered_100028b7();
            return 1;
          }
          return 1;
        }
        recovered_100022d8();
      }
      recovered_10002079();
    }
  }
  return 0;
}

#undef DAT_10003744
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002813
 */

uint recovered_10002813(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;

  uVar2 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 = 0, in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57))
     && ((0x37 < (uint)in_ECX[2] && ((code *)in_ECX[0xd] != (code *)0x0)))) {
    iVar1 = (*(code *)in_ECX[0xd])(in_EDX + 0xfff);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      uVar2 = iVar1 + 0xfffU & 0xfffff000;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002869
 */

undefined4 recovered_10002869(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_2 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b7
 */

void recovered_100028b7(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x77 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0x1d] != (code *)0x0)) {
    (*(code *)in_ECX[0x1d])();
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(uint *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003744
#define DAT_10003744 (*(int *)(((uintptr_t)pf_module_state + 0xa6cU)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_20 (*(int *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e9
 */

undefined4 recovered_100028e9(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint in_ECX;
  byte bVar8;
  uint in_EDX;
  uint uVar9;
  int *piVar10;

  uVar3 = 0;
  piVar10 = (int *)0x0;
  if (in_ECX < DAT_10003020) {
    piVar10 = &DAT_10003064 + in_ECX * 0x37;
    if (*piVar10 == 0) {
      piVar10 = (int *)0x0;
    }
  }
  if ((((param_2 != 0) && (local_20 = param_1, param_1 != 0)) && (piVar10 != (int *)0x0)) &&
     ((DAT_10003744 != 0 && (uVar2 = piVar10[1], uVar2 < DAT_1000301c)))) {
    recovered_10002aad();
    if (((&DAT_10003024)[uVar2 * 8] == 0) ||
       ((*piVar10 == 0 || (piVar10[0x2a] - in_EDX < param_2 || (uint)piVar10[0x2a] < in_EDX)))) {
LAB_1000297f:
      uVar3 = 0;
    }
    else {
      local_28 = in_EDX;
      for (; param_2 != 0; param_2 = param_2 - uVar4) {
        uVar4 = 0x80;
        if (param_2 < 0x80) {
          uVar4 = param_2;
        }
        cVar1 = *(char *)((int)piVar10 + 0xad);
        bVar8 = 0xca;
        if (cVar1 != '\0') {
          bVar8 = 0x35;
        }
        bVar7 = 200;
        if (cVar1 != '\0') {
          bVar7 = 0x25;
        }
        if (param_3 != 0) {
          bVar7 = bVar8;
        }
        if (((uint)piVar10[0x2a] < local_28) || (piVar10[0x2a] - local_28 < uVar4))
        goto LAB_1000297f;
        if (cVar1 == '\0') {
          uVar3 = 0;
          if (CARRY4(local_28,uVar4) != 0 ||
              -(uint)CARRY4(local_28,uVar4) < (uint)(0x10000000 < local_28 + uVar4))
          goto LAB_10002981;
        }
        uVar9 = uVar4 * 0x200;
        if (param_3 != 0) {
          for (uVar5 = 0; uVar9 != uVar5; uVar5 = uVar5 + 1) {
            *(undefined1 *)(piVar10[9] + uVar5) = *(undefined1 *)(local_20 + uVar5);
          }
        }
        iVar6 = recovered_10002431(bVar7,local_28,uVar4,uVar9,param_3);
        if (iVar6 == 0) goto LAB_1000297f;
        if (param_3 == 0) {
          for (uVar5 = 0; uVar9 != uVar5; uVar5 = uVar5 + 1) {
            *(undefined1 *)(local_20 + uVar5) = *(undefined1 *)(piVar10[9] + uVar5);
          }
        }
        local_20 = local_20 + uVar9;
        local_28 = local_28 + uVar4;
      }
      uVar3 = 1;
    }
LAB_10002981:
    *(undefined4 *)(&DAT_10003040 + uVar2 * 0x20) = 0;
  }
  return uVar3;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003040
#undef DAT_10003064
#undef DAT_10003744
#undef local_28
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aad
 */

void recovered_10002aad(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(in_ECX + 0x1c)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(in_ECX + 0x1c) != 0);
  }
  return;
}


#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x344U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10003064
#define DAT_10003064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10003744
#define DAT_10003744 (*(int * *)(((uintptr_t)pf_module_state + 0xa6cU)))
#undef str_10002edb
#define str_10002edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_10002eed
#define str_10002eed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_10002f36
#define str_10002f36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10002f49
#define str_10002f49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002acc
 */

undefined4 recovered_10002acc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;

  uVar1 = 0;
  if (DAT_10003020 != 0 && (DAT_10003744 != (int *)0x0 && param_1 != (undefined4 *)0x0)) {
    uVar6 = 0;
    piVar2 = &DAT_10003064;
    iVar4 = 0;
    iVar5 = 0;
    iVar3 = DAT_10003020;
    while (bVar7 = iVar3 != 0, iVar3 = iVar3 + -1, bVar7) {
      if (*piVar2 != 0) {
        bVar7 = CARRY4(uVar6,piVar2[0x2a]);
        uVar6 = uVar6 + piVar2[0x2a];
        iVar4 = iVar4 + (uint)bVar7;
        iVar5 = iVar5 + 1;
      }
      piVar2 = piVar2 + 0x37;
    }
    recovered_100008e7();
    *param_1 = 500;
    param_1[1] = 1;
    param_1[3] = 0x11;
    uVar1 = 9;
    if (iVar5 == DAT_10003020) {
      uVar1 = 0x13;
    }
    param_1[4] = uVar1;
    uVar1 = 0;
    if ((((DAT_10003744 != (int *)0x0) && (*DAT_10003744 == 0x54584b57)) &&
        (0x2f < (uint)DAT_10003744[2])) && ((code *)DAT_10003744[0xb] != (code *)0x0)) {
      uVar1 = (*(code *)DAT_10003744[0xb])();
    }
    param_1[6] = uVar1;
    param_1[0x11] = DAT_1000301c;
    param_1[0x12] = iVar5;
    param_1[0x13] = uVar6;
    param_1[0x14] = iVar4;
    recovered_10001b17(str_10002edb);
    recovered_10001b17(str_10002eed);
    recovered_10001b17(str_10002f36);
    recovered_10001b17(str_10002f49);
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003064
#undef DAT_10003744
#undef str_10002edb
#undef str_10002eed
#undef str_10002f36
#undef str_10002f49

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c1c
 */

undefined8 recovered_10002c1c(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10002c57;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10002c57;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10002c57:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c5e
 */

undefined8 recovered_10002c5e(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002ca2
 */

undefined8 recovered_10002ca2(uint param_1,uint param_2,uint param_3)

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
