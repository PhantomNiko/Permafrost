/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003904
#define DAT_10003904 (*(uint32_t *)(0x10003904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f8
 */

void * recovered_100038f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4878U));
}

#undef DAT_10003904

#undef DAT_10003f5c
#define DAT_10003f5c (*(uint32_t *)(0x10003f5cU))
#undef DAT_10003f60
#define DAT_10003f60 (*(uint64_t *)(0x10003f60U))
#undef DAT_10003f68
#define DAT_10003f68 (*(uint64_t *)(0x10003f68U))
#undef DAT_10003f70
#define DAT_10003f70 (*(int *)(0x10003f70U))
#undef DAT_10003f74
#define DAT_10003f74 (*(int *)(0x10003f74U))
#undef DAT_10003f78
#define DAT_10003f78 (*(int *)(0x10003f78U))
#undef DAT_10003f7c
#define DAT_10003f7c (*(int *)(0x10003f7cU))
#undef DAT_10003f80
#define DAT_10003f80 (*(int *)(0x10003f80U))
#undef DAT_10003f84
#define DAT_10003f84 (*(int *)(0x10003f84U))
#undef DAT_10003f88
#define DAT_10003f88 (*(int *)(0x10003f88U))
#undef DAT_10003f8c
#define DAT_10003f8c (*(int *)(0x10003f8cU))
#undef DAT_10003f90
#define DAT_10003f90 (*(int *)(0x10003f90U))
#undef DAT_10003f94
#define DAT_10003f94 (*(int *)(0x10003f94U))
#undef DAT_10003f98
#define DAT_10003f98 (*(int *)(0x10003f98U))
#undef DAT_10003f9c
#define DAT_10003f9c (*(int *)(0x10003f9cU))
#undef DAT_10003fa0
#define DAT_10003fa0 (*(int *)(0x10003fa0U))
#undef DAT_10003fa4
#define DAT_10003fa4 (*(int *)(0x10003fa4U))
#undef DAT_10003fa8
#define DAT_10003fa8 (*(int *)(0x10003fa8U))
#undef DAT_10003fac
#define DAT_10003fac (*(int *)(0x10003facU))
#undef DAT_10003fb0
#define DAT_10003fb0 (*(int *)(0x10003fb0U))
#undef DAT_10003fb4
#define DAT_10003fb4 (*(int *)(0x10003fb4U))
#undef DAT_10003fb8
#define DAT_10003fb8 (*(int *)(0x10003fb8U))
#undef DAT_10003fbc
#define DAT_10003fbc (*(int *)(0x10003fbcU))
#undef DAT_10003fc0
#define DAT_10003fc0 (*(int *)(0x10003fc0U))
#undef DAT_10003fc4
#define DAT_10003fc4 (*(int *)(0x10003fc4U))
#undef DAT_10003fc8
#define DAT_10003fc8 (*(int *)(0x10003fc8U))
#undef DAT_10003fcc
#define DAT_10003fcc (*(int *)(0x10003fccU))
#undef DAT_10003fd0
#define DAT_10003fd0 (*(int *)(0x10003fd0U))
#undef DAT_10003fd4
#define DAT_10003fd4 (*(int *)(0x10003fd4U))
#undef DAT_10003fd8
#define DAT_10003fd8 (*(int *)(0x10003fd8U))
#undef DAT_10003fdc
#define DAT_10003fdc (*(int *)(0x10003fdcU))
#undef DAT_10003fe0
#define DAT_10003fe0 (*(int *)(0x10003fe0U))
#undef DAT_10003fe4
#define DAT_10003fe4 (*(int *)(0x10003fe4U))
#undef DAT_10003fe8
#define DAT_10003fe8 (*(int *)(0x10003fe8U))
#undef DAT_10003fec
#define DAT_10003fec (*(int *)(0x10003fecU))
#undef DAT_10003ff0
#define DAT_10003ff0 (*(int *)(0x10003ff0U))
#undef DAT_10003ff4
#define DAT_10003ff4 (*(int *)(0x10003ff4U))
#undef DAT_10003ff8
#define DAT_10003ff8 (*(int *)(0x10003ff8U))
#define auStack_4e4 (*(undefined1 (*)[768])(frame + 28))
#define auStack_1e4 (*(undefined4 (*)[13])(frame + 796))
#define auStack_190 (*(undefined1 (*)[100])(frame + 880))
#define auStack_e8 (*(undefined1 (*)[16])(frame + 1048))
#define local_1b0 (*(undefined4 *)(frame + 848))
#define uStack_ac (*(undefined8 *)(frame + 1108))
#define auStack_a4 (*(undefined1 (*)[64])(frame + 1116))
#define local_1ac (*(undefined4 *)(frame + 852))
#define auStack_64 (*(undefined1 (*)[68])(frame + 1180))
#define local_194 (*(int *)(frame + 876))
#define local_12c (*(uint *)(frame + 980))
#define local_d8 (*(uint *)(frame + 1064))
#define local_d4 (*(uint *)(frame + 1068))
#define local_d0 (*(uint *)(frame + 1072))
#define local_b4 (*(undefined8 *)(frame + 1100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003908
 */

int recovered_10003908(int *api)

{
  unsigned char frame[1312] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *extraout_r3;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint unaff_r10;
  uint unaff_r11;

  iVar3 = recovered_10003ffc(api);
  if (iVar3 == 0) {
    return 0;
  }
  recovered_10005ca0(auStack_4e4,0x70,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  recovered_10005c4c((int)auStack_4e4,0x70,(char *)(((uintptr_t)pf_module_state + 0xc5U)));
  if (api == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = api[1];
    uVar4 = recovered_10007150(uVar10,1000);
    if (999999 < uVar10) {
      uVar7 = uVar10 + uVar4 * -1000;
      uVar10 = recovered_10007150(uVar10,1000000);
      recovered_10005cb4((int)auStack_4e4,0x70,uVar10);
      recovered_10005c4c((int)auStack_4e4,0x70,(char *)(((uintptr_t)pf_module_state + 0xd5U)));
      uVar10 = recovered_100071a0(uVar4,1000);
      recovered_10005cb4((int)auStack_4e4,0x70,uVar10);
      if (uVar7 == 0) goto LAB_10003a24;
      recovered_10005c4c((int)auStack_4e4,0x70,(char *)(((uintptr_t)pf_module_state + 0xd5U)));
      uVar10 = uVar7;
    }
  }
  recovered_10005cb4((int)auStack_4e4,0x70,uVar10);
LAB_10003a24:
  recovered_10005c4c((int)auStack_4e4,0x70,(char *)(((uintptr_t)pf_module_state + 0xceU)));
  uVar10 = (*(uint32_t *)(uint64_t[]){0x9054584b57ULL});
  if (api == (int *)0x0) {
    recovered_10004030(auStack_190,0xa8);
    recovered_10004030((undefined1 *)auStack_1e4,0x54);
    bVar2 = true;
  }
  else {
    if (((*api == (*(uint32_t *)(uint64_t[]){0x9054584b57ULL})) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(auStack_4e4);
    }
    recovered_10004030(auStack_190,0xa8);
    recovered_10004030((undefined1 *)auStack_1e4,0x54);
    bVar2 = true;
    if (((*api == uVar10) && (0x3f < (uint)api[2])) && ((code *)api[0xf] != (code *)0x0)) {
      iVar3 = (*(code *)api[0xf])(auStack_190);
      bVar2 = iVar3 == 0;
    }
  }
  recovered_10004048(api,(undefined *)(((uintptr_t)&recovered_10004194)),auStack_1e4);
  bVar1 = recovered_100042c0(api);
  if (bVar1) {
    recovered_10004324(api,(undefined *)(((uintptr_t)&recovered_10004398)),auStack_1e4);
  }
  puVar11 = auStack_190;
  if (bVar2) {
    puVar11 = (undefined1 *)0x0;
  }
  recovered_10004428((int)puVar11,auStack_1e4,auStack_4e4);
  iVar3 = 0;
  pcVar6 = extraout_r3;
  if (api != (int *)0x0) {
    pcVar6 = (code *)api[3];
  }
  if ((api != (int *)0x0 && pcVar6 != (code *)0x0) &&
     (iVar5 = (*pcVar6)(((uintptr_t)pf_module_state + 0x3cU),((uintptr_t)pf_module_state + 0x4eU),auStack_4e4), iVar5 != 0
     )) {
    if ((code *)api[4] != (code *)0x0) {
      if (local_12c < 2) {
        local_12c = 1;
      }
      if (0x3f < local_12c) {
        local_12c = 0x40;
      }
      if (bVar2) {
        local_12c = 1;
      }
      (*(code *)api[4])(local_12c,local_12c * 0x60);
    }
    if ((code *)api[6] != (code *)0x0) {
      (*(code *)api[6])(0x80,0x100,0x100,0x10,3);
    }
    recovered_10004048(api,(undefined *)(((uintptr_t)&recovered_10004698)),auStack_1e4);
    bVar2 = recovered_100042c0(api);
    if (bVar2) {
      recovered_10004324(api,(undefined *)(((uintptr_t)&recovered_1000546c)),auStack_1e4);
    }
    uVar10 = (*(uint32_t *)(uint64_t[]){0x9054584b57ULL});
    if (local_194 == 0) {
      pcVar6 = (code *)api[8];
      *(int **)(((uintptr_t)pf_module_state + 0x890U)) = api;
      if ((pcVar6 == (code *)0x0) ||
         (iVar3 = (*pcVar6)(((uintptr_t)&recovered_10006a38),3,((uintptr_t)pf_module_state + 0x94U)), iVar3 == 0)) {
        uVar8 = 0;
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x754U));
      }
      else {
        uVar8 = 1;
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x73dU));
      }
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
      if ((((*api == uVar10) && (0xa7 < (uint)api[2])) && ((code *)api[0x29] != (code *)0x0)) &&
         (iVar3 = (*(code *)api[0x29])(((uintptr_t)&recovered_10006a68),7,((uintptr_t)pf_module_state + 0x94U)),
         iVar3 != 0)) {
        uVar8 = 1;
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x771U));
      }
      else {
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x789U));
      }
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
      local_1ac = uVar8;
    }
    else {
      recovered_10005c4c((int)auStack_4e4,0x300,(char *)(((uintptr_t)pf_module_state + 0x71U)));
    }
    bVar2 = true;
    uVar4 = *api;
    if ((*api == uVar10) && (uVar4 = api[2], 0x43 < (uint)api[2])) {
      uVar4 = 0;
      if ((code *)api[0x10] != (code *)0x0) {
        iVar3 = (*(code *)api[0x10])(auStack_e8);
        bVar2 = iVar3 == 0;
        uVar4 = local_d0;
        unaff_r10 = local_d4;
        unaff_r11 = local_d8;
      }
    }
    if (((bVar2) || (unaff_r11 == 0 || unaff_r10 == 0)) || (uVar4 == 0)) {
      recovered_10005c4c((int)auStack_4e4,0x300,(char *)(((uintptr_t)pf_module_state + 0x7a7U)));
      uVar8 = 0;
    }
    else {
      recovered_10005c4c((int)auStack_4e4,0x300,(char *)(((uintptr_t)pf_module_state + 0x248U)));
      recovered_10005c4c((int)auStack_4e4,0x300,(char *)(((uintptr_t)pf_module_state + 0x5e9U)));
      recovered_10005c4c((int)auStack_4e4,0x300,(char *)(((uintptr_t)pf_module_state + 0x24aU)));
      recovered_10005cb4((int)auStack_4e4,0x300,unaff_r11);
      pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x816U));
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
      recovered_10005cb4((int)auStack_4e4,0x300,unaff_r10);
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
      uVar10 = (*(uint32_t *)(uint64_t[]){0x9054584b57ULL});
      recovered_10005cb4((int)auStack_4e4,0x300,uVar4);
      if ((((*api == uVar10) && (0xb7 < (uint)api[2])) && ((code *)api[0x2d] != (code *)0x0)) &&
         (uVar4 = (*(code *)api[0x2d])(1), (uVar4 & 1) != 0)) {
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x7c0U));
      }
      else {
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x7e2U));
      }
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
      recovered_10004030((undefined1 *)&local_b4,0x90);
      local_b4 = (0xc00000090U);
      uStack_ac = (0x10000000007U);
      recovered_10005ca0(auStack_a4,0x40,(char *)(((uintptr_t)pf_module_state + 0x7feU)));
      recovered_10005ca0(auStack_64,0x40,(char *)(((uintptr_t)pf_module_state + 0x818U)));
      if (((*api == uVar10) && (199 < (uint)api[2])) &&
         (((code *)api[0x31] != (code *)0x0 &&
          (iVar3 = (*(code *)api[0x31])(&local_b4,((uintptr_t)&recovered_10006ab4)), iVar3 != 0)))) {
        uVar8 = 1;
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x82dU));
      }
      else {
        uVar8 = 0;
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x843U));
      }
      recovered_10005c4c((int)auStack_4e4,0x300,pcVar9);
    }
    local_1b0 = uVar8;
    recovered_10004428((int)puVar11,auStack_1e4,auStack_4e4);
    iVar3 = 1;
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(((uintptr_t)pf_module_state + 0x3cU),((uintptr_t)pf_module_state + 0x4eU),auStack_4e4);
    }
  }
  return iVar3;
}

#undef DAT_10003f5c
#undef DAT_10003f60
#undef DAT_10003f68
#undef DAT_10003f70
#undef DAT_10003f74
#undef DAT_10003f78
#undef DAT_10003f7c
#undef DAT_10003f80
#undef DAT_10003f84
#undef DAT_10003f88
#undef DAT_10003f8c
#undef DAT_10003f90
#undef DAT_10003f94
#undef DAT_10003f98
#undef DAT_10003f9c
#undef DAT_10003fa0
#undef DAT_10003fa4
#undef DAT_10003fa8
#undef DAT_10003fac
#undef DAT_10003fb0
#undef DAT_10003fb4
#undef DAT_10003fb8
#undef DAT_10003fbc
#undef DAT_10003fc0
#undef DAT_10003fc4
#undef DAT_10003fc8
#undef DAT_10003fcc
#undef DAT_10003fd0
#undef DAT_10003fd4
#undef DAT_10003fd8
#undef DAT_10003fdc
#undef DAT_10003fe0
#undef DAT_10003fe4
#undef DAT_10003fe8
#undef DAT_10003fec
#undef DAT_10003ff0
#undef DAT_10003ff4
#undef DAT_10003ff8
#undef auStack_4e4
#undef auStack_1e4
#undef auStack_190
#undef auStack_e8
#undef local_1b0
#undef uStack_ac
#undef auStack_a4
#undef local_1ac
#undef auStack_64
#undef local_194
#undef local_12c
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_b4

#undef DAT_1000402c
#define DAT_1000402c (*(int *)(0x1000402cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ffc
 */

undefined4 recovered_10003ffc(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 != (0x54584b57U)) {
      return 0;
    }
    if (0xf < (uint)param_1[2]) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_1000402c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004030
 */

void recovered_10004030(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10004190
#define DAT_10004190 (*(int *)(0x10004190U))
#define auStack_78 (*(undefined1 (*)[44])(frame + 24))
#define auStack_4c (*(undefined1 (*)[12])(frame + 68))
#define local_40 (*(char *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004048
 */

void recovered_10004048(int *param_1,undefined *param_2,undefined4 param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r6;
  uint uVar5;

  puVar1 = (undefined *)0x0;
  if (param_1 != (int *)0x0) {
    puVar1 = param_2;
    unaff_r6 = param_1;
  }
  if ((((param_1 != (int *)0x0 && puVar1 != (undefined *)0x0) && (*unaff_r6 == (0x54584b57U))) &&
      (0x5f < (uint)unaff_r6[2])) && (unaff_r6[0x17] != 0)) {
    for (uVar2 = 0; uVar2 != 0x10; uVar2 = uVar2 + 1) {
      for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
        iVar3 = recovered_10005dc8(unaff_r6,uVar2 & 0xff,uVar4 & 0xff,0,auStack_4c);
        if ((iVar3 != 0) &&
           ((*(code *)param_2)(unaff_r6,auStack_4c,param_3), 0x7fffffff < (uint)(int)local_40)) {
          for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
            iVar3 = recovered_10005dc8(unaff_r6,uVar2 & 0xff,uVar4 & 0xff,uVar5 & 0xff,auStack_78);
            if (iVar3 != 0) {
              (*(code *)param_2)(unaff_r6,auStack_78,param_3);
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_10004190
#undef auStack_78
#undef auStack_4c
#undef local_40

#undef DAT_100042b8
#define DAT_100042b8 (*(uint *)(0x100042b8U))
#undef DAT_100042bc
#define DAT_100042bc (*(uint *)(0x100042bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004194
 */

undefined4 recovered_10004194(undefined4 param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if (param_2 == 0 || param_3 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_2 + 4);
  if (sVar1 == 0x106b) {
    iVar4 = 0x40;
  }
  else if (sVar1 == -0x7f7a) {
    uVar3 = (uint)*(ushort *)(param_2 + 6);
    iVar4 = 0x4c;
    if ((0x1b < uVar3 - 0x2830) || (((0x800047fU) & 1 << (uVar3 - 0x2830 & 0xff)) == 0)) {
      uVar2 = 0x2815;
      if (uVar3 != 0x2815) {
        uVar2 = 0x2829;
      }
      if (uVar3 != 0x2815 && uVar3 != uVar2) {
        if (uVar3 != 0x2a02 && uVar3 != 0x2a00) goto LAB_1000429c;
        *(undefined4 *)(param_3 + 0x48) = 1;
        if (((0x1b < uVar3 - 0x2830) || (((0x800047fU) & 1 << (uVar3 - 0x2830 & 0xff)) == 0)) &&
           (uVar3 != 0x2829)) {
          uVar2 = 0x2815;
          goto LAB_10004200;
        }
      }
    }
  }
  else {
    if (sVar1 != 0x10de) goto LAB_1000429c;
    uVar3 = (uint)*(ushort *)(param_2 + 6);
    iVar4 = 0x44;
    if (((0x1e < uVar3 - 0xaa2) || (((0x408040b9U) & 1 << (uVar3 - 0xaa2 & 0xff)) == 0)) &&
       (uVar3 != 0x863)) {
      uVar2 = 0x867;
LAB_10004200:
      if (uVar3 != uVar2) goto LAB_1000429c;
    }
  }
  *(undefined4 *)(param_3 + iVar4) = 1;
LAB_1000429c:
  recovered_10006000(param_3);
  return 0;
}

#undef DAT_100042b8
#undef DAT_100042bc

#undef DAT_10004320
#define DAT_10004320 (*(int *)(0x10004320U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

bool recovered_100042c0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10003ffc(param_1);
  if ((param_1 != (int *)0x0 && iVar1 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x9c) {
      return false;
    }
    if (param_1[0x20] != 0) {
      return param_1[0x26] != 0;
    }
  }
  return false;
}

#undef DAT_10004320

#undef DAT_10004394
#define DAT_10004394 (*(int *)(0x10004394U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004324
 */

void recovered_10004324(int *param_1,undefined *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x83 < (uint)param_1[2])) &&
     (((code *)param_1[0x20] != (code *)0x0 && (iVar1 = (*(code *)param_1[0x20])(), iVar1 != 0)))) {
    recovered_1000607c(param_1,iVar1,10,param_2,param_3);
  }
  return;
}

#undef DAT_10004394

#undef DAT_1000441c
#define DAT_1000441c (*(int *)(0x1000441cU))
#undef DAT_10004420
#define DAT_10004420 (*(int *)(0x10004420U))
#undef DAT_10004424
#define DAT_10004424 (*(int *)(0x10004424U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004398
 */

undefined4 recovered_10004398(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;

  if ((param_2 != 0) && (param_4 != 0)) {
    bVar1 = recovered_100061b4(param_2,(byte *)(((uintptr_t)pf_module_state + 0xd7U)),param_3);
    if ((bVar1) ||
       ((bVar1 = recovered_100061b4(param_2,(byte *)(((uintptr_t)pf_module_state + 0xdfU)),extraout_r2), bVar1
        || (bVar1 = recovered_100061b4(param_2,(byte *)(((uintptr_t)pf_module_state + 0xe5U)),extraout_r2_00),
           bVar1)))) {
      *(undefined4 *)(param_4 + 0x3c) = 1;
    }
    recovered_10006000(param_4);
  }
  return 0;
}

#undef DAT_1000441c
#undef DAT_10004420
#undef DAT_10004424

#undef DAT_10004638
#define DAT_10004638 (*(int *)(0x10004638U))
#undef DAT_1000463c
#define DAT_1000463c (*(int *)(0x1000463cU))
#undef DAT_10004640
#define DAT_10004640 (*(int *)(0x10004640U))
#undef DAT_10004644
#define DAT_10004644 (*(int *)(0x10004644U))
#undef DAT_10004648
#define DAT_10004648 (*(int *)(0x10004648U))
#undef DAT_1000464c
#define DAT_1000464c (*(int *)(0x1000464cU))
#undef DAT_10004650
#define DAT_10004650 (*(int *)(0x10004650U))
#undef DAT_10004654
#define DAT_10004654 (*(int *)(0x10004654U))
#undef DAT_10004658
#define DAT_10004658 (*(int *)(0x10004658U))
#undef DAT_1000465c
#define DAT_1000465c (*(int *)(0x1000465cU))
#undef DAT_10004660
#define DAT_10004660 (*(int *)(0x10004660U))
#undef DAT_10004664
#define DAT_10004664 (*(int *)(0x10004664U))
#undef DAT_10004668
#define DAT_10004668 (*(int *)(0x10004668U))
#undef DAT_1000466c
#define DAT_1000466c (*(int *)(0x1000466cU))
#undef DAT_10004670
#define DAT_10004670 (*(int *)(0x10004670U))
#undef DAT_10004674
#define DAT_10004674 (*(int *)(0x10004674U))
#undef DAT_10004678
#define DAT_10004678 (*(int *)(0x10004678U))
#undef DAT_1000467c
#define DAT_1000467c (*(int *)(0x1000467cU))
#undef DAT_10004680
#define DAT_10004680 (*(int *)(0x10004680U))
#undef DAT_10004684
#define DAT_10004684 (*(int *)(0x10004684U))
#undef DAT_10004688
#define DAT_10004688 (*(int *)(0x10004688U))
#undef DAT_1000468c
#define DAT_1000468c (*(int *)(0x1000468cU))
#undef DAT_10004690
#define DAT_10004690 (*(int *)(0x10004690U))
#undef DAT_10004694
#define DAT_10004694 (*(int *)(0x10004694U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004428
 */

void recovered_10004428(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005ca0(param_3,0x300,(char *)(((uintptr_t)pf_module_state + 0xeaU)));
  if (param_1 != 0) {
    recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x14eU)),*(uint *)(param_1 + 100));
    recovered_10006354((int)param_3,0x300,(char *)(((uintptr_t)pf_module_state + 0x15eU)),(char *)(param_1 + 4))
    ;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x168U)),*param_2);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x173U)),param_2[1]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x181U)),param_2[2]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x191U)),param_2[3]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1a4U)),param_2[4]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1adU)),param_2[5]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1b5U)),param_2[6]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1bdU)),param_2[7]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1c1U)),param_2[8]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1c7U)),param_2[9]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1cdU)),param_2[10]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1d4U)),param_2[0xb]);
  recovered_100062f0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1dbU)),param_2[0xc]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1e3U)),param_2[0xd]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x1f7U)),param_2[0xe]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x205U)),param_2[0xf]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x213U)),param_2[0x10]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x21fU)),param_2[0x11]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x229U)),param_2[0x12]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x233U)),param_2[0x13]);
  recovered_100063e0((int)param_3,(char *)(((uintptr_t)pf_module_state + 0x23dU)),param_2[0x14]);
  return;
}

#undef DAT_10004638
#undef DAT_1000463c
#undef DAT_10004640
#undef DAT_10004644
#undef DAT_10004648
#undef DAT_1000464c
#undef DAT_10004650
#undef DAT_10004654
#undef DAT_10004658
#undef DAT_1000465c
#undef DAT_10004660
#undef DAT_10004664
#undef DAT_10004668
#undef DAT_1000466c
#undef DAT_10004670
#undef DAT_10004674
#undef DAT_10004678
#undef DAT_1000467c
#undef DAT_10004680
#undef DAT_10004684
#undef DAT_10004688
#undef DAT_1000468c
#undef DAT_10004690
#undef DAT_10004694

#undef DAT_100046e4
#define DAT_100046e4 (*(uint *)(0x100046e4U))
#undef DAT_10005364
#define DAT_10005364 (*(int *)(0x10005364U))
#undef DAT_10005368
#define DAT_10005368 (*(int *)(0x10005368U))
#undef DAT_1000536c
#define DAT_1000536c (*(int *)(0x1000536cU))
#undef DAT_10005370
#define DAT_10005370 (*(int *)(0x10005370U))
#undef DAT_10005374
#define DAT_10005374 (*(int *)(0x10005374U))
#undef DAT_10005378
#define DAT_10005378 (*(int *)(0x10005378U))
#undef DAT_1000537c
#define DAT_1000537c (*(int *)(0x1000537cU))
#undef DAT_10005380
#define DAT_10005380 (*(int *)(0x10005380U))
#undef DAT_10005384
#define DAT_10005384 (*(int *)(0x10005384U))
#undef DAT_10005388
#define DAT_10005388 (*(int *)(0x10005388U))
#undef DAT_1000538c
#define DAT_1000538c (*(int *)(0x1000538cU))
#undef DAT_10005390
#define DAT_10005390 (*(int *)(0x10005390U))
#undef DAT_10005394
#define DAT_10005394 (*(int *)(0x10005394U))
#undef DAT_10005398
#define DAT_10005398 (*(int *)(0x10005398U))
#undef DAT_1000539c
#define DAT_1000539c (*(int *)(0x1000539cU))
#undef DAT_100053a0
#define DAT_100053a0 (*(int *)(0x100053a0U))
#undef DAT_100053a4
#define DAT_100053a4 (*(int *)(0x100053a4U))
#undef DAT_100053a8
#define DAT_100053a8 (*(int *)(0x100053a8U))
#undef DAT_100053ac
#define DAT_100053ac (*(int *)(0x100053acU))
#undef DAT_100053b0
#define DAT_100053b0 (*(int *)(0x100053b0U))
#undef DAT_100053b4
#define DAT_100053b4 (*(int *)(0x100053b4U))
#undef DAT_100053b8
#define DAT_100053b8 (*(int *)(0x100053b8U))
#undef DAT_100053bc
#define DAT_100053bc (*(int *)(0x100053bcU))
#undef DAT_100053c0
#define DAT_100053c0 (*(int *)(0x100053c0U))
#undef DAT_100053c4
#define DAT_100053c4 (*(int *)(0x100053c4U))
#undef DAT_100053c8
#define DAT_100053c8 (*(int *)(0x100053c8U))
#undef DAT_100053cc
#define DAT_100053cc (*(int *)(0x100053ccU))
#undef DAT_100053d0
#define DAT_100053d0 (*(int *)(0x100053d0U))
#undef DAT_100053d4
#define DAT_100053d4 (*(int *)(0x100053d4U))
#undef DAT_100053d8
#define DAT_100053d8 (*(int *)(0x100053d8U))
#undef DAT_100053dc
#define DAT_100053dc (*(int *)(0x100053dcU))
#undef DAT_100053e0
#define DAT_100053e0 (*(int *)(0x100053e0U))
#undef DAT_100053e4
#define DAT_100053e4 (*(int *)(0x100053e4U))
#undef DAT_100053e8
#define DAT_100053e8 (*(int *)(0x100053e8U))
#undef DAT_100053ec
#define DAT_100053ec (*(int *)(0x100053ecU))
#undef DAT_100053f0
#define DAT_100053f0 (*(int *)(0x100053f0U))
#undef DAT_100053f4
#define DAT_100053f4 (*(int *)(0x100053f4U))
#undef DAT_100053f8
#define DAT_100053f8 (*(int *)(0x100053f8U))
#undef DAT_100053fc
#define DAT_100053fc (*(int *)(0x100053fcU))
#undef DAT_10005400
#define DAT_10005400 (*(int *)(0x10005400U))
#undef DAT_10005404
#define DAT_10005404 (*(int *)(0x10005404U))
#undef DAT_10005408
#define DAT_10005408 (*(int *)(0x10005408U))
#undef DAT_1000540c
#define DAT_1000540c (*(int *)(0x1000540cU))
#undef DAT_10005410
#define DAT_10005410 (*(int *)(0x10005410U))
#undef DAT_10005414
#define DAT_10005414 (*(int *)(0x10005414U))
#undef DAT_10005418
#define DAT_10005418 (*(int *)(0x10005418U))
#undef DAT_1000541c
#define DAT_1000541c (*(int *)(0x1000541cU))
#undef DAT_10005420
#define DAT_10005420 (*(int *)(0x10005420U))
#undef DAT_10005424
#define DAT_10005424 (*(int *)(0x10005424U))
#undef DAT_10005428
#define DAT_10005428 (*(int *)(0x10005428U))
#undef DAT_1000542c
#define DAT_1000542c (*(int *)(0x1000542cU))
#undef DAT_10005430
#define DAT_10005430 (*(int *)(0x10005430U))
#undef DAT_10005434
#define DAT_10005434 (*(int *)(0x10005434U))
#undef DAT_10005438
#define DAT_10005438 (*(int *)(0x10005438U))
#undef DAT_1000543c
#define DAT_1000543c (*(int *)(0x1000543cU))
#undef DAT_10005440
#define DAT_10005440 (*(int *)(0x10005440U))
#undef DAT_10005444
#define DAT_10005444 (*(int *)(0x10005444U))
#undef DAT_10005448
#define DAT_10005448 (*(int *)(0x10005448U))
#undef DAT_1000544c
#define DAT_1000544c (*(int *)(0x1000544cU))
#undef DAT_10005450
#define DAT_10005450 (*(int *)(0x10005450U))
#undef DAT_10005454
#define DAT_10005454 (*(int *)(0x10005454U))
#undef DAT_10005458
#define DAT_10005458 (*(int *)(0x10005458U))
#undef DAT_1000545c
#define DAT_1000545c (*(int *)(0x1000545cU))
#undef DAT_10005460
#define DAT_10005460 (*(int *)(0x10005460U))
#undef DAT_10005464
#define DAT_10005464 (*(int *)(0x10005464U))
#undef DAT_10005468
#define DAT_10005468 (*(int *)(0x10005468U))
#undef switchdataD_100046e4
#define switchdataD_100046e4 (*(uint *)(0x100046e4U))
#define local_84 (*(uint (*)[25])(frame + 1308))
#define local_590 (*(char (*)[640])(frame + 16))
#define local_310 (*(uint *)(frame + 656))
#define local_30c (*(uint *)(frame + 660))
#define local_308 (*(uint *)(frame + 664))
#define local_304 (*(uint (*)[160])(frame + 668))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004698
 */

undefined4 recovered_10004698(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1472] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int extraout_r0 = 0;
  int iVar8;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar9;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  char *pcVar10;
  uint extraout_r2_02 = 0;
  uint extraout_r2_03 = 0;
  uint extraout_r2_04 = 0;
  uint extraout_r2_05 = 0;
  uint extraout_r2_06 = 0;
  uint extraout_r2_07 = 0;
  uint extraout_r2_08 = 0;
  uint extraout_r2_09 = 0;
  uint extraout_r2_10 = 0;
  byte *pbVar11;
  code *extraout_r3;
  code *extraout_r3_00;
  code *extraout_r3_01;
  code *pcVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar6 = (uint)param_2[8];
  if (uVar6 - 1 < 0xc) {
    pbVar14 = (byte *)((int)&DAT_100046e4 + (0x324cU));
    switch((uintptr_t)(uVar6)) {
    case 1:
      pbVar14 = (byte *)(((uintptr_t)pf_module_state + 0x1adU));
      break;
    case 2:
      pbVar14 = (byte *)(((uintptr_t)pf_module_state + 0x1b5U));
      break;
    case 3:
      break;
    case 4:
      pbVar14 = (byte *)(((uintptr_t)pf_module_state + 0x1c1U));
      break;
    default:
      goto switchD_100046e0_caseD_5;
    case 0xc:
      if (param_2[9] != 3) goto switchD_100046e0_caseD_5;
      pbVar14 = (byte *)(((uintptr_t)pf_module_state + 0x1bdU));
    }
  }
  else {
switchD_100046e0_caseD_5:
    pbVar11 = (byte *)(((uintptr_t)pf_module_state + 0x1cdU));
    if (uVar6 != 6) {
      pbVar11 = (byte *)(((uintptr_t)pf_module_state + 0x271U));
    }
    pbVar14 = (byte *)(((uintptr_t)pf_module_state + 0x1d4U));
    if (uVar6 != 7) {
      pbVar14 = pbVar11;
    }
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = *param_3 + 1;
  recovered_10006410((int)param_3,(int)pbVar14,(uint)param_3);
  recovered_10005ca0(local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x257U)));
  recovered_10005c4c((int)local_590,0x280,(char *)pbVar14);
  recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x25dU)));
  bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x271U)),extraout_r2);
  iVar8 = (0x54584b57U);
  uVar9 = extraout_r1;
  uVar6 = extraout_r2_00;
  if (bVar4) goto LAB_10004dac;
  if (param_3[0x14] == 0) {
LAB_10004814:
    bVar4 = false;
    local_304[0] = 0;
    if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 100)) ||
       (param_1[0x18] == 0)) {
      recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x2dfU)));
    }
    else {
      iVar7 = recovered_10005f8c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                                 (int)local_304);
      if (iVar7 == 0) {
        pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x2f7U));
      }
      else {
        iVar7 = 5;
        uVar6 = extraout_r2_01;
        uVar13 = 0;
        while (iVar7 != 0xb) {
          iVar1 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          uVar6 = uVar13;
          if (*(uint *)(param_2 + iVar1) != 0) {
            uVar6 = uVar13 | 2;
          }
          if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
            uVar6 = uVar13 | 1;
          }
          uVar13 = uVar6;
        }
        bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1adU)),uVar6);
        if (((bVar4) ||
            (bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1b5U)),extraout_r2_06),
            bVar4)) ||
           ((bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1bdU)),extraout_r2_07),
            bVar4 || ((bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x2b2U)),
                                                  extraout_r2_08), bVar4 ||
                      (bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1c1U)),
                                                  extraout_r2_09), bVar4)))))) {
          uVar13 = uVar13 | 4;
        }
        else {
          bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1a4U)),extraout_r2_10);
          if (bVar4) {
            uVar13 = uVar13 | 4;
          }
        }
        if ((param_2[8] == 6) && (param_2[9] != 0)) {
          uVar13 = uVar13 | 2;
        }
        local_84[0] = local_304[0] | uVar13;
        if ((((*param_1 == iVar8) && (99 < (uint)param_1[2])) &&
            ((code *)param_1[0x18] != (code *)0x0)) &&
           (iVar8 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
           iVar8 != 0)) {
          recovered_10005f8c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                             (int)local_84);
          recovered_10006778((int)local_590,(char *)(((uintptr_t)pf_module_state + 0x328U)),local_304[0]);
          uVar6 = local_84[0];
          recovered_10006778((int)local_590,(char *)(((uintptr_t)pf_module_state + 0x339U)),local_84[0]);
          recovered_10006778((int)local_590,(char *)(((uintptr_t)pf_module_state + 0x349U)),uVar13);
          bVar4 = (uVar6 & uVar13) == uVar13;
          goto LAB_100048d0;
        }
        pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x30fU));
      }
      recovered_10005c4c((int)local_590,0x280,pcVar10);
      bVar4 = false;
    }
LAB_100048d0:
    bVar2 = 0;
    local_304[0] = 0;
    bVar3 = 0;
    local_84[0] = 0;
    local_308 = 0;
    local_30c = 0;
    local_310 = 0;
    if ((param_2[8] == 1) && (bVar3 = 0, param_2[9] == 6)) {
      iVar8 = recovered_10006840(param_1,(int)param_2,5,local_304);
      uVar6 = local_304[0];
      if (iVar8 == 0) {
        recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x358U)));
        bVar3 = 0;
      }
      else {
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x36eU)),local_304[0]);
        recovered_10006938(param_1,uVar6,0,(int)local_84);
        recovered_10006938(param_1,local_304[0],4,(int)&local_308);
        recovered_10006938(param_1,local_304[0],0xc,(int)&local_30c);
        recovered_10006938(param_1,local_304[0],0x10,(int)&local_310);
        if (-1 < (int)local_308) {
          recovered_10006954(param_1,local_304[0],4,local_308 | 0x80000000);
          recovered_10006938(param_1,local_304[0],4,(int)&local_308);
        }
        uVar6 = local_308;
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x377U)),local_84[0]);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x37fU)),uVar6);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x387U)),local_30c);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x391U)),local_310);
        bVar3 = 1;
      }
    }
    bVar5 = param_2[8];
    local_304[0] = 0;
    bVar16 = bVar5 == 4;
    local_84[0] = 0;
    if (bVar16) {
      bVar5 = param_2[9];
    }
    local_308 = 0;
    local_30c = 0;
    if (bVar16 && bVar5 == 3) {
      iVar8 = recovered_10006840(param_1,(int)param_2,0,local_304);
      uVar6 = local_304[0];
      if (iVar8 == 0) {
        recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x39dU)));
      }
      else {
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3b2U)),local_304[0]);
        recovered_10006938(param_1,uVar6,0,(int)local_84);
        recovered_10006938(param_1,local_304[0],8,(int)&local_308);
        if ((local_308 & 1) == 0) {
          recovered_10006954(param_1,local_304[0],8,local_308 | 1);
          recovered_10006938(param_1,local_304[0],8,(int)&local_308);
        }
        recovered_100069a0(param_1,local_304[0] + 0xe,2,(int)&local_30c);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3baU)),local_84[0]);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3c2U)),local_308);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3caU)),local_30c);
        bVar2 = 1;
      }
    }
    bVar5 = param_2[8];
    uVar6 = 0;
    bVar16 = bVar5 == 0xc;
    local_304[0] = 0;
    if (bVar16) {
      bVar5 = param_2[9];
    }
    local_84[0] = 0;
    local_308 = 0;
    if (bVar16 && bVar5 == 3) {
      if (param_2[10] == 0) {
        iVar8 = 0;
        local_30c = 0;
        bVar16 = (*(uint *)(param_2 + 0x24) & 1) == 0;
        local_310 = 0;
        if (!bVar16) {
          uVar6 = *(uint *)(param_2 + 0x24) & 0xffffffe0;
          bVar16 = uVar6 == 0;
        }
        if (bVar16) {
          do {
            if (iVar8 == 6) goto LAB_10005324;
            iVar7 = iVar8 * 4;
            iVar8 = iVar8 + 1;
          } while ((*(uint *)(param_2 + iVar7 + 0x14) & 1) == 0);
          uVar6 = *(uint *)(param_2 + iVar7 + 0x14) & 0xfffffffc;
          if (uVar6 == 0) {
LAB_10005324:
            recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3d6U)));
            uVar6 = 0;
            goto LAB_10004aac;
          }
        }
        recovered_100069f0(param_1,uVar6 & 0xffff,(int)&local_30c);
        recovered_100069f0(param_1,uVar6 & 0xffff | 2,(int)&local_310);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x3efU)),uVar6);
        recovered_10006778((int)local_590,(char *)(((uintptr_t)pf_module_state + 0x3f5U)),local_30c);
        recovered_10006778((int)local_590,(char *)(((uintptr_t)pf_module_state + 0x3fdU)),local_310);
      }
      else {
        iVar8 = recovered_10006840(param_1,(int)param_2,0,local_304);
        uVar13 = local_304[0];
        if (iVar8 == 0) {
          recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x405U)));
          goto LAB_10004aac;
        }
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x41fU)),local_304[0]);
        recovered_10006938(param_1,uVar13,0,(int)local_84);
        recovered_10006938(param_1,local_304[0],4,(int)&local_308);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x427U)),local_84[0]);
        recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x42fU)),local_308);
      }
      uVar6 = 1;
    }
LAB_10004aac:
    pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x2bbU));
    if (!(bool)(bVar3 | bVar4 | bVar2) && uVar6 == 0) {
      bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1a4U)),(uint)pcVar10);
      pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x2cbU));
      if (((bVar4) ||
          (bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x1b5U)),extraout_r2_02),
          bVar4)) ||
         ((bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0x2b2U)),extraout_r2_03),
          bVar4 || (bVar4 = recovered_10006244(pbVar14,(byte *)(((uintptr_t)pf_module_state + 0xabU)),
                                               extraout_r2_04), bVar4)))) {
        for (uVar6 = 0; uVar6 != 6; uVar6 = uVar6 + 1) {
          local_304[0] = 0;
          local_84[0] = 0;
          iVar8 = recovered_10006840(param_1,(int)param_2,uVar6,local_304);
          if (iVar8 != 0) {
            recovered_10005c4c((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x437U)));
            recovered_10005cb4((int)local_590,0x280,uVar6);
            uVar6 = local_304[0];
            recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x441U)),local_304[0]
                              );
            recovered_10006938(param_1,uVar6,0,(int)local_84);
            if (extraout_r0 != 0) {
              recovered_100068c8((int)local_590,0x280,(char *)(((uintptr_t)pf_module_state + 0x446U)),
                                 local_84[0]);
            }
            pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x2bbU));
            break;
          }
        }
      }
    }
  }
  else {
    bVar2 = param_2[8];
    bVar4 = bVar2 == 0xc;
    if (bVar4) {
      bVar2 = param_2[9];
    }
    if (!bVar4 || bVar2 != 3) goto LAB_10004814;
    pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x278U));
  }
  recovered_10005c4c((int)local_590,0x280,pcVar10);
  uVar9 = extraout_r1_00;
  uVar6 = extraout_r2_05;
LAB_10004dac:
  iVar8 = recovered_1000653c((uint)param_2,uVar9,uVar6);
  recovered_10005ca0((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x29cU)));
  recovered_10005c4c((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x44fU)));
  recovered_100067e0((int)local_84,0x60,(uint)*param_2,2);
  pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x451U));
  recovered_10005c4c((int)local_84,0x60,pcVar15);
  recovered_100067e0((int)local_84,0x60,(uint)param_2[1],2);
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xd5U));
  recovered_10005c4c((int)local_84,0x60,pcVar10);
  recovered_10005cb4((int)local_84,0x60,(uint)param_2[2]);
  recovered_10005ca0((undefined1 *)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x453U)));
  recovered_100067e0((int)local_304,0x280,(uint)*param_2,2);
  recovered_10005c4c((int)local_304,0x280,pcVar15);
  recovered_100067e0((int)local_304,0x280,(uint)param_2[1],2);
  recovered_10005c4c((int)local_304,0x280,pcVar10);
  recovered_10005cb4((int)local_304,0x280,(uint)param_2[2]);
  recovered_10005c4c((int)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x458U)));
  recovered_100067e0((int)local_304,0x280,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10005c4c((int)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x461U)));
  recovered_100067e0((int)local_304,0x280,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10005c4c((int)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x46aU)));
  recovered_100067e0((int)local_304,0x280,(uint)param_2[8],2);
  recovered_10005c4c((int)local_304,0x280,pcVar10);
  recovered_100067e0((int)local_304,0x280,(uint)param_2[9],2);
  recovered_10005c4c((int)local_304,0x280,pcVar10);
  recovered_100067e0((int)local_304,0x280,(uint)param_2[10],2);
  recovered_10005c4c((int)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x472U)));
  recovered_100067e0((int)local_304,0x280,(uint)param_2[0xb],2);
  pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x47dU));
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x24aU));
  pcVar12 = extraout_r3;
  for (uVar6 = 0; uVar6 != 6; uVar6 = uVar6 + 1) {
    uVar13 = *(uint *)(param_2 + uVar6 * 4 + 0x14);
    if (uVar13 != 0) {
      recovered_10005c4c((int)local_304,0x280,pcVar15);
      recovered_10005cb4((int)local_304,0x280,uVar6);
      recovered_10005c4c((int)local_304,0x280,pcVar10);
      recovered_100067e0((int)local_304,0x280,uVar13,8);
      pcVar12 = extraout_r3_00;
    }
  }
  if (local_590[0] != '\0') {
    recovered_10005c4c((int)local_304,0x280,(char *)(((uintptr_t)pf_module_state + 0x248U)));
    recovered_10005c4c((int)local_304,0x280,local_590);
    pcVar12 = extraout_r3_01;
  }
  if (param_1 != (int *)0x0) {
    pcVar12 = (code *)param_1[3];
  }
  if ((param_1 != (int *)0x0 && pcVar12 != (code *)0x0) &&
     (iVar8 = (*pcVar12)(local_84,iVar8,local_304), iVar8 != 0)) {
    param_3[1] = param_3[1] + 1;
  }
  return 1;
}

#undef DAT_100046e4
#undef DAT_10005364
#undef DAT_10005368
#undef DAT_1000536c
#undef DAT_10005370
#undef DAT_10005374
#undef DAT_10005378
#undef DAT_1000537c
#undef DAT_10005380
#undef DAT_10005384
#undef DAT_10005388
#undef DAT_1000538c
#undef DAT_10005390
#undef DAT_10005394
#undef DAT_10005398
#undef DAT_1000539c
#undef DAT_100053a0
#undef DAT_100053a4
#undef DAT_100053a8
#undef DAT_100053ac
#undef DAT_100053b0
#undef DAT_100053b4
#undef DAT_100053b8
#undef DAT_100053bc
#undef DAT_100053c0
#undef DAT_100053c4
#undef DAT_100053c8
#undef DAT_100053cc
#undef DAT_100053d0
#undef DAT_100053d4
#undef DAT_100053d8
#undef DAT_100053dc
#undef DAT_100053e0
#undef DAT_100053e4
#undef DAT_100053e8
#undef DAT_100053ec
#undef DAT_100053f0
#undef DAT_100053f4
#undef DAT_100053f8
#undef DAT_100053fc
#undef DAT_10005400
#undef DAT_10005404
#undef DAT_10005408
#undef DAT_1000540c
#undef DAT_10005410
#undef DAT_10005414
#undef DAT_10005418
#undef DAT_1000541c
#undef DAT_10005420
#undef DAT_10005424
#undef DAT_10005428
#undef DAT_1000542c
#undef DAT_10005430
#undef DAT_10005434
#undef DAT_10005438
#undef DAT_1000543c
#undef DAT_10005440
#undef DAT_10005444
#undef DAT_10005448
#undef DAT_1000544c
#undef DAT_10005450
#undef DAT_10005454
#undef DAT_10005458
#undef DAT_1000545c
#undef DAT_10005460
#undef DAT_10005464
#undef DAT_10005468
#undef switchdataD_100046e4
#undef local_84
#undef local_590
#undef local_310
#undef local_30c
#undef local_308
#undef local_304

#undef DAT_10005b68
#define DAT_10005b68 (*(int *)(0x10005b68U))
#undef DAT_10005b6c
#define DAT_10005b6c (*(int *)(0x10005b6cU))
#undef DAT_10005b70
#define DAT_10005b70 (*(int *)(0x10005b70U))
#undef DAT_10005b74
#define DAT_10005b74 (*(int *)(0x10005b74U))
#undef DAT_10005b78
#define DAT_10005b78 (*(int *)(0x10005b78U))
#undef DAT_10005b7c
#define DAT_10005b7c (*(int *)(0x10005b7cU))
#undef DAT_10005b80
#define DAT_10005b80 (*(int *)(0x10005b80U))
#undef DAT_10005b84
#define DAT_10005b84 (*(int *)(0x10005b84U))
#undef DAT_10005b88
#define DAT_10005b88 (*(int *)(0x10005b88U))
#undef DAT_10005b8c
#define DAT_10005b8c (*(int *)(0x10005b8cU))
#undef DAT_10005b90
#define DAT_10005b90 (*(int *)(0x10005b90U))
#undef DAT_10005b94
#define DAT_10005b94 (*(int *)(0x10005b94U))
#undef DAT_10005b98
#define DAT_10005b98 (*(int *)(0x10005b98U))
#undef DAT_10005b9c
#define DAT_10005b9c (*(int *)(0x10005b9cU))
#undef DAT_10005ba0
#define DAT_10005ba0 (*(int *)(0x10005ba0U))
#undef DAT_10005ba4
#define DAT_10005ba4 (*(int *)(0x10005ba4U))
#undef DAT_10005ba8
#define DAT_10005ba8 (*(int *)(0x10005ba8U))
#undef DAT_10005bac
#define DAT_10005bac (*(int *)(0x10005bacU))
#undef DAT_10005bb0
#define DAT_10005bb0 (*(int *)(0x10005bb0U))
#undef DAT_10005bb4
#define DAT_10005bb4 (*(int *)(0x10005bb4U))
#undef DAT_10005bb8
#define DAT_10005bb8 (*(int *)(0x10005bb8U))
#undef DAT_10005bbc
#define DAT_10005bbc (*(int *)(0x10005bbcU))
#undef DAT_10005bc0
#define DAT_10005bc0 (*(int *)(0x10005bc0U))
#undef DAT_10005bc4
#define DAT_10005bc4 (*(int *)(0x10005bc4U))
#undef DAT_10005bc8
#define DAT_10005bc8 (*(int *)(0x10005bc8U))
#undef DAT_10005bcc
#define DAT_10005bcc (*(int *)(0x10005bccU))
#undef DAT_10005bd0
#define DAT_10005bd0 (*(int *)(0x10005bd0U))
#undef DAT_10005bd4
#define DAT_10005bd4 (*(int *)(0x10005bd4U))
#undef DAT_10005bd8
#define DAT_10005bd8 (*(int *)(0x10005bd8U))
#undef DAT_10005bdc
#define DAT_10005bdc (*(int *)(0x10005bdcU))
#undef DAT_10005be0
#define DAT_10005be0 (*(int *)(0x10005be0U))
#undef DAT_10005be4
#define DAT_10005be4 (*(int *)(0x10005be4U))
#undef DAT_10005be8
#define DAT_10005be8 (*(int *)(0x10005be8U))
#undef DAT_10005bec
#define DAT_10005bec (*(int *)(0x10005becU))
#undef DAT_10005bf0
#define DAT_10005bf0 (*(int *)(0x10005bf0U))
#undef DAT_10005bf4
#define DAT_10005bf4 (*(int *)(0x10005bf4U))
#undef DAT_10005bf8
#define DAT_10005bf8 (*(int *)(0x10005bf8U))
#undef DAT_10005bfc
#define DAT_10005bfc (*(int *)(0x10005bfcU))
#undef DAT_10005c00
#define DAT_10005c00 (*(int *)(0x10005c00U))
#undef DAT_10005c04
#define DAT_10005c04 (*(int *)(0x10005c04U))
#undef DAT_10005c08
#define DAT_10005c08 (*(int *)(0x10005c08U))
#undef DAT_10005c0c
#define DAT_10005c0c (*(int *)(0x10005c0cU))
#undef DAT_10005c10
#define DAT_10005c10 (*(int *)(0x10005c10U))
#undef DAT_10005c14
#define DAT_10005c14 (*(int *)(0x10005c14U))
#undef DAT_10005c18
#define DAT_10005c18 (*(int *)(0x10005c18U))
#undef DAT_10005c1c
#define DAT_10005c1c (*(int *)(0x10005c1cU))
#undef DAT_10005c20
#define DAT_10005c20 (*(int *)(0x10005c20U))
#undef DAT_10005c24
#define DAT_10005c24 (*(int *)(0x10005c24U))
#undef DAT_10005c28
#define DAT_10005c28 (*(int *)(0x10005c28U))
#undef DAT_10005c2c
#define DAT_10005c2c (*(int *)(0x10005c2cU))
#undef DAT_10005c30
#define DAT_10005c30 (*(int *)(0x10005c30U))
#undef DAT_10005c34
#define DAT_10005c34 (*(int *)(0x10005c34U))
#undef DAT_10005c38
#define DAT_10005c38 (*(int *)(0x10005c38U))
#undef DAT_10005c3c
#define DAT_10005c3c (*(int *)(0x10005c3cU))
#undef DAT_10005c40
#define DAT_10005c40 (*(int *)(0x10005c40U))
#undef DAT_10005c44
#define DAT_10005c44 (*(int *)(0x10005c44U))
#undef DAT_10005c48
#define DAT_10005c48 (*(int *)(0x10005c48U))
#define local_54 (*(uint *)(frame + 668))
#define local_48 (*(uint *)(frame + 680))
#define auStack_2d4 (*(undefined1 (*)[384])(frame + 28))
#define local_44 (*(uint *)(frame + 684))
#define auStack_154 (*(undefined1 (*)[256])(frame + 412))
#define local_40 (*(uint *)(frame + 688))
#define local_3c (*(uint *)(frame + 692))
#define auStack_50 (*(undefined1 (*)[8])(frame + 672))
#define local_38 (*(uint *)(frame + 696))
#define local_34 (*(uint *)(frame + 700))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000546c
 */

undefined4 recovered_1000546c(int *param_1,uint *param_2,uint param_3,int param_4)

{
  unsigned char frame[784] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  uint extraout_r2_03 = 0;
  uint extraout_r2_04 = 0;
  uint extraout_r2_05 = 0;
  uint extraout_r2_06 = 0;
  uint extraout_r2_07 = 0;
  uint extraout_r2_08 = 0;
  uint extraout_r2_09 = 0;
  uint extraout_r2_10 = 0;
  uint uVar5;
  uint extraout_r2_11 = 0;
  uint extraout_r2_12 = 0;
  uint extraout_r2_13 = 0;
  uint extraout_r2_14 = 0;
  uint extraout_r2_15 = 0;
  uint extraout_r2_16 = 0;
  uint extraout_r2_17 = 0;
  uint extraout_r2_18 = 0;
  uint extraout_r2_19 = 0;
  uint extraout_r2_20 = 0;
  uint extraout_r2_21 = 0;
  uint extraout_r2_22 = 0;
  uint extraout_r2_23 = 0;
  uint extraout_r2_24 = 0;
  uint extraout_r2_25 = 0;
  uint extraout_r2_26 = 0;
  uint extraout_r2_27 = 0;
  uint extraout_r2_28 = 0;
  code *extraout_r3;
  code *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;

  bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5daU)),param_3);
  pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1a4U));
  uVar5 = extraout_r2;
  if ((((!bVar1) &&
       (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5e2U)),extraout_r2),
       uVar5 = extraout_r2_00, !bVar1)) &&
      (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5e9U)),extraout_r2_00),
      uVar5 = extraout_r2_01, !bVar1)) &&
     (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5f5U)),extraout_r2_01),
     uVar5 = extraout_r2_02, !bVar1)) {
    pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1adU));
    bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5f9U)),extraout_r2_02);
    uVar5 = extraout_r2_03;
    if ((((!bVar1) &&
         (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x5feU)),extraout_r2_03
                                    ), uVar5 = extraout_r2_04, !bVar1)) &&
        ((bVar1 = recovered_100061b4((int)param_2,pbVar7,extraout_r2_04), uVar5 = extraout_r2_05,
         !bVar1 && ((bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x604U)),
                                                extraout_r2_05), uVar5 = extraout_r2_06, !bVar1 &&
                    (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x609U)),
                                                extraout_r2_06), uVar5 = extraout_r2_07, !bVar1)))))
        ) && (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x60dU)),
                                         extraout_r2_07), uVar5 = extraout_r2_08, !bVar1)) {
      bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x612U)),extraout_r2_08);
      pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1c7U));
      uVar5 = extraout_r2_09;
      if ((((!bVar1) &&
           (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x61bU)),
                                       extraout_r2_09), uVar5 = extraout_r2_10, !bVar1)) &&
          (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x621U)),
                                      extraout_r2_10), uVar5 = extraout_r2_19, !bVar1)) &&
         (bVar1 = recovered_100061b4((int)param_2,pbVar7,extraout_r2_19), uVar5 = extraout_r2_20,
         !bVar1)) {
        pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1bdU));
        bVar1 = recovered_100061b4((int)param_2,pbVar7,extraout_r2_20);
        uVar5 = extraout_r2_21;
        if (!bVar1) {
          bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x629U)),extraout_r2_21
                                    );
          if (bVar1) {
            pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1b5U));
            uVar5 = extraout_r2_22;
          }
          else {
            pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1b5U));
            bVar1 = recovered_100061b4((int)param_2,pbVar7,extraout_r2_22);
            uVar5 = extraout_r2_23;
            if ((!bVar1) &&
               (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x632U)),
                                           extraout_r2_23), uVar5 = extraout_r2_24, !bVar1)) {
              pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1d4U));
              bVar1 = recovered_100061b4((int)param_2,pbVar7,extraout_r2_24);
              uVar5 = extraout_r2_25;
              if ((!bVar1) &&
                 (bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x637U)),
                                             extraout_r2_25), uVar5 = extraout_r2_26, !bVar1)) {
                bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x63cU)),
                                           extraout_r2_26);
                if (bVar1) {
                  pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1cdU));
                  uVar5 = extraout_r2_27;
                }
                else {
                  bVar1 = recovered_100061b4((int)param_2,(byte *)(((uintptr_t)pf_module_state + 0x640U)),
                                             extraout_r2_27);
                  pbVar7 = (byte *)(((uintptr_t)pf_module_state + 0x1cdU));
                  uVar5 = extraout_r2_28;
                  if (!bVar1) {
                    pbVar7 = (byte *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
  if ((param_2 != (uint *)0x0 && param_4 != 0) &&
     (*(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1, pbVar7 != (byte *)0x0)) {
    recovered_10006410(param_4,(int)pbVar7,uVar5);
    recovered_10005ca0(auStack_154,0x100,(char *)(((uintptr_t)pf_module_state + 0x5bfU)));
    puVar9 = param_2 + 9;
    if ((char)*puVar9 == '\0') {
      recovered_10005c4c((int)auStack_154,0x100,(char *)(((uintptr_t)pf_module_state + 0x699U)));
      recovered_100067e0((int)auStack_154,0x100,*param_2,8);
    }
    else {
      if ((char)*puVar9 != '/') {
        recovered_10005c4c((int)auStack_154,0x100,(char *)(((uintptr_t)pf_module_state + 0x44fU)));
      }
      recovered_10005c4c((int)auStack_154,0x100,(char *)puVar9);
    }
    recovered_10005ca0(auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x645U)));
    recovered_100067e0((int)auStack_2d4,0x180,*param_2,8);
    recovered_10006354((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x653U)),(char *)puVar9);
    puVar10 = param_2 + 0x41;
    recovered_10006354((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x658U)),(char *)puVar10);
    puVar9 = param_2 + 0x51;
    recovered_10006354((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x65dU)),(char *)puVar9);
    recovered_10006354((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x663U)),
                       (char *)(param_2 + 0x69));
    if ((param_2[4] & 0x10) != 0) {
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x66eU)),param_2[5]);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x271U)),param_2[6]);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x675U)),param_2[7]);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x67bU)),param_2[8]);
    }
    recovered_10006354((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x684U)),(char *)pbVar7);
    local_54 = 0;
    pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x6a0U));
    if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x9f < (uint)param_1[2])) &&
       (((code *)param_1[0x27] != (code *)0x0 &&
        (iVar3 = (*(code *)param_1[0x27])(*param_2,0,auStack_50), iVar3 != 0)))) {
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x6b7U)),local_44);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x6c2U)),local_40);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x6d1U)),local_3c);
      recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x6daU)),local_48);
      if ((local_48 & 0x20) == 0) {
        pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x6e3U));
      }
      else {
        recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x6f9U)),local_38);
        recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x700U)),local_34);
        uVar5 = extraout_r2_11;
        if ((3 < local_34) &&
           (iVar3 = recovered_100069a0(param_1,local_38,4,(int)&local_54), uVar5 = extraout_r2_12,
           iVar3 != 0)) {
          recovered_100068c8((int)auStack_2d4,0x180,(char *)(((uintptr_t)pf_module_state + 0x70cU)),local_54);
          uVar5 = extraout_r2_13;
        }
        bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x1bdU)),uVar5);
        pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x727U));
        if (((((bVar1) ||
              (bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x1adU)),extraout_r2_14)
              , bVar1)) ||
             (bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x1b5U)),extraout_r2_15),
             bVar1)) ||
            (((bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x1a4U)),extraout_r2_16)
              , bVar1 ||
              (bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x711U)),extraout_r2_17)
              , bVar1)) ||
             (bVar1 = recovered_10006244(pbVar7,(byte *)(((uintptr_t)pf_module_state + 0x71bU)),extraout_r2_18),
             bVar1)))) &&
           (((*param_1 == (0x54584b57U) && (0x7b < (uint)param_1[2])) &&
            ((code *)param_1[0x1e] != (code *)0x0)))) {
          (*(code *)param_1[0x1e])();
        }
      }
    }
    recovered_10005c4c((int)auStack_2d4,0x180,pcVar8);
    puVar11 = param_2 + 0x31;
    if ((((char)param_2[0x31] == '\0') && (puVar11 = puVar10, (char)*puVar10 == '\0')) &&
       (puVar11 = (uint *)(((uintptr_t)pf_module_state + 0x689U)), (char)*puVar9 != '\0')) {
      puVar11 = puVar9;
    }
    pcVar6 = extraout_r3;
    if (param_1 != (int *)0x0) {
      pcVar6 = (code *)param_1[3];
    }
    if (param_1 != (int *)0x0 && pcVar6 != (code *)0x0) {
      iVar4 = (*pcVar6)(auStack_154,puVar11,auStack_2d4);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = *(int *)(param_4 + 0xc);
      }
      uVar2 = 1;
      if (iVar4 != 0) {
        *(int *)(param_4 + 0xc) = iVar3 + 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_10005b68
#undef DAT_10005b6c
#undef DAT_10005b70
#undef DAT_10005b74
#undef DAT_10005b78
#undef DAT_10005b7c
#undef DAT_10005b80
#undef DAT_10005b84
#undef DAT_10005b88
#undef DAT_10005b8c
#undef DAT_10005b90
#undef DAT_10005b94
#undef DAT_10005b98
#undef DAT_10005b9c
#undef DAT_10005ba0
#undef DAT_10005ba4
#undef DAT_10005ba8
#undef DAT_10005bac
#undef DAT_10005bb0
#undef DAT_10005bb4
#undef DAT_10005bb8
#undef DAT_10005bbc
#undef DAT_10005bc0
#undef DAT_10005bc4
#undef DAT_10005bc8
#undef DAT_10005bcc
#undef DAT_10005bd0
#undef DAT_10005bd4
#undef DAT_10005bd8
#undef DAT_10005bdc
#undef DAT_10005be0
#undef DAT_10005be4
#undef DAT_10005be8
#undef DAT_10005bec
#undef DAT_10005bf0
#undef DAT_10005bf4
#undef DAT_10005bf8
#undef DAT_10005bfc
#undef DAT_10005c00
#undef DAT_10005c04
#undef DAT_10005c08
#undef DAT_10005c0c
#undef DAT_10005c10
#undef DAT_10005c14
#undef DAT_10005c18
#undef DAT_10005c1c
#undef DAT_10005c20
#undef DAT_10005c24
#undef DAT_10005c28
#undef DAT_10005c2c
#undef DAT_10005c30
#undef DAT_10005c34
#undef DAT_10005c38
#undef DAT_10005c3c
#undef DAT_10005c40
#undef DAT_10005c44
#undef DAT_10005c48
#undef local_54
#undef local_48
#undef auStack_2d4
#undef local_44
#undef auStack_154
#undef local_40
#undef local_3c
#undef auStack_50
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c4c
 */

void recovered_10005c4c(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10005da0(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ca0
 */

void recovered_10005ca0(undefined1 *param_1,uint in_r1,char *in_r2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10005c4c((int)param_1,in_r1,in_r2);
  return;
}


#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb4
 */

void recovered_10005cb4(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10005d64(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007150(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10005d64(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d64
 */

void recovered_10005d64(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005da0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005da0
 */

int recovered_10005da0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10005dc8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10005f8c((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10005f8c((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10005f8c((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10005f8c((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10005f8c((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10005ffc
#define DAT_10005ffc (*(uint8_t * *)(0x10005ffcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f8c
 */

undefined4
recovered_10005f8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
    if (param_7 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_7 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10005ffc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006000
 */

void recovered_10006000(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 1;
  if (*(int *)(param_1 + 0x44) != 0) goto LAB_10006010;
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x3c) == 0) goto LAB_1000604c;
  }
  else {
    if ((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x3c) != 0)) goto LAB_10006010;
LAB_1000604c:
    uVar1 = (uint)(*(int *)(param_1 + 0x40) != 0);
    if ((*(int *)(param_1 + 0x48) != 0) || (*(int *)(param_1 + 0x40) == 0)) goto LAB_10006010;
  }
  uVar1 = (uint)(*(int *)(param_1 + 0x4c) != 0);
LAB_10006010:
  *(uint *)(param_1 + 0x50) = uVar1;
  return;
}


#undef DAT_100061b0
#define DAT_100061b0 (*(int *)(0x100061b0U))
#define auStack_288 (*(undefined1 (*)[8])(frame + 24))
#define local_280 (*(int *)(frame + 32))
#define local_27c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000607c
 */

int recovered_1000607c(int *param_1,int param_2,int param_3,undefined *param_4,undefined4 param_5)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *unaff_r6;

  iVar1 = (0x54584b57U);
  iVar4 = 0;
  if (param_3 != 0) {
    unaff_r6 = (code *)param_4;
  }
  if (param_3 != 0 && param_4 != (undefined *)0x0) {
LAB_100060cc:
    if (param_2 != 0) {
      if ((param_1 != (int *)0x0) && (*param_1 == iVar1)) {
        uVar2 = param_1[2];
        if (0x9b < uVar2) {
          if ((code *)param_1[0x26] == (code *)0x0) goto LAB_10006138;
          iVar3 = (*(code *)param_1[0x26])(param_2);
          if (iVar3 == 0) {
            if (*param_1 == iVar1) {
              uVar2 = param_1[2];
              goto LAB_100060f4;
            }
            param_2 = 0;
          }
          else {
            (*unaff_r6)(param_1,auStack_288,param_3,param_5);
            iVar4 = iVar4 + 1;
            if (local_280 != 0) {
              iVar3 = recovered_1000607c(param_1,local_280,param_3 + -1,unaff_r6,param_5);
              iVar4 = iVar3 + iVar4;
            }
            param_2 = local_27c;
          }
          goto LAB_100060cc;
        }
LAB_100060f4:
        if (0x8b < uVar2) {
LAB_10006138:
          if ((code *)param_1[0x22] == (code *)0x0) goto LAB_10006158;
          param_2 = (*(code *)param_1[0x22])(param_2);
          goto LAB_100060cc;
        }
      }
LAB_10006158:
      param_2 = 0;
      goto LAB_100060cc;
    }
  }
  return iVar4;
}

#undef DAT_100061b0
#undef auStack_288
#undef local_280
#undef local_27c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061b4
 */

bool recovered_100061b4(int param_1,byte *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;

  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    bVar1 = recovered_10006244((byte *)(param_1 + 0x24),param_2,param_3);
    bVar2 = true;
    if ((((!bVar1) &&
         (bVar1 = recovered_10006244((byte *)(param_1 + 0xc4),param_2,extraout_r2), !bVar1)) &&
        (bVar1 = recovered_10006244((byte *)(param_1 + 0x104),param_2,extraout_r2_00), !bVar1)) &&
       (bVar1 = recovered_10006244((byte *)(param_1 + 0x144),param_2,extraout_r2_01), !bVar1)) {
      bVar2 = recovered_10006244((byte *)(param_1 + 0x1a4),param_2,extraout_r2_02);
    }
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006244
 */

bool recovered_10006244(byte *param_1,byte *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  if (param_1 == (byte *)0x0) {
    return false;
  }
  if (param_2 != (byte *)0x0) {
    param_3 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || param_3 == 0) {
    return false;
  }
  do {
    bVar1 = *param_1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) break;
    iVar5 = 0;
    uVar6 = uVar2;
    while (uVar4 = (uint)param_2[iVar5], uVar6 != 0) {
      if (uVar4 == 0) {
        return true;
      }
      uVar3 = uVar4;
      if (uVar4 - 0x41 < 0x1a) {
        uVar3 = uVar4 + 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 + 0x20;
      }
      if (uVar6 != uVar3) break;
      uVar6 = (uint)param_1[iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    param_1 = param_1 + 1;
  } while (uVar4 != 0);
  if (uVar2 != 0) {
    bVar1 = 1;
  }
  return (bool)bVar1;
}


#undef DAT_1000634c
#define DAT_1000634c (*(int *)(0x1000634cU))
#undef DAT_10006350
#define DAT_10006350 (*(int *)(0x10006350U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f0
 */

void recovered_100062f0(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005c4c(param_1,0x300,(char *)(((uintptr_t)pf_module_state + 0x248U)));
  recovered_10005c4c(param_1,0x300,param_2);
  recovered_10005c4c(param_1,0x300,(char *)(((uintptr_t)pf_module_state + 0x24aU)));
  recovered_10005cb4(param_1,0x300,param_3);
  return;
}

#undef DAT_1000634c
#undef DAT_10006350

#undef DAT_100063d8
#define DAT_100063d8 (*(int *)(0x100063d8U))
#undef DAT_100063dc
#define DAT_100063dc (*(int *)(0x100063dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006354
 */

void recovered_10006354(int param_1,uint param_2,char *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    return;
  }
  recovered_10005c4c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x248U)));
  recovered_10005c4c(param_1,param_2,param_3);
  recovered_10005c4c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x24aU)));
  recovered_10005c4c(param_1,param_2,param_4);
  return;
}

#undef DAT_100063d8
#undef DAT_100063dc

#undef DAT_10006408
#define DAT_10006408 (*(int *)(0x10006408U))
#undef DAT_1000640c
#define DAT_1000640c (*(int *)(0x1000640cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063e0
 */

void recovered_100063e0(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x24cU));
  if (param_3 == 0) {
    pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x251U));
  }
  recovered_10006354(param_1,0x300,param_2,pcVar1);
  return;
}

#undef DAT_10006408
#undef DAT_1000640c

#undef DAT_1000651c
#define DAT_1000651c (*(int *)(0x1000651cU))
#undef DAT_10006520
#define DAT_10006520 (*(int *)(0x10006520U))
#undef DAT_10006524
#define DAT_10006524 (*(int *)(0x10006524U))
#undef DAT_10006528
#define DAT_10006528 (*(int *)(0x10006528U))
#undef DAT_1000652c
#define DAT_1000652c (*(int *)(0x1000652cU))
#undef DAT_10006530
#define DAT_10006530 (*(int *)(0x10006530U))
#undef DAT_10006534
#define DAT_10006534 (*(int *)(0x10006534U))
#undef DAT_10006538
#define DAT_10006538 (*(int *)(0x10006538U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006410
 */

void recovered_10006410(int param_1,int param_2,uint in_r2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  uint extraout_r2_03 = 0;
  uint extraout_r2_04 = 0;
  uint extraout_r2_05 = 0;

  if (param_2 == 0) {
    return;
  }
  bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1a4U)),in_r2);
  iVar2 = 0x10;
  if (!bVar1) {
    bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1adU)),extraout_r2);
    iVar2 = 0x14;
    if (!bVar1) {
      bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1b5U)),extraout_r2_00)
      ;
      iVar2 = 0x18;
      if (!bVar1) {
        bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1bdU)),
                                   extraout_r2_01);
        iVar2 = 0x1c;
        if (!bVar1) {
          bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1c1U)),
                                     extraout_r2_02);
          iVar2 = 0x20;
          if (!bVar1) {
            bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1c7U)),
                                       extraout_r2_03);
            iVar2 = 0x24;
            if (!bVar1) {
              bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1cdU)),
                                         extraout_r2_04);
              iVar2 = 0x28;
              if (!bVar1) {
                bVar1 = recovered_10006244((byte *)param_2,(byte *)(((uintptr_t)pf_module_state + 0x1d4U)),
                                           extraout_r2_05);
                iVar2 = 0x2c;
                if (!bVar1) {
                  iVar2 = 0x30;
                }
              }
            }
          }
        }
      }
    }
  }
  *(int *)(param_1 + iVar2) = *(int *)(param_1 + iVar2) + 1;
  return;
}

#undef DAT_1000651c
#undef DAT_10006520
#undef DAT_10006524
#undef DAT_10006528
#undef DAT_1000652c
#undef DAT_10006530
#undef DAT_10006534
#undef DAT_10006538

#undef DAT_1000671c
#define DAT_1000671c (*(uint32_t *)(0x1000671cU))
#undef DAT_10006720
#define DAT_10006720 (*(int *)(0x10006720U))
#undef DAT_10006724
#define DAT_10006724 (*(int *)(0x10006724U))
#undef DAT_10006728
#define DAT_10006728 (*(int *)(0x10006728U))
#undef DAT_1000672c
#define DAT_1000672c (*(int *)(0x1000672cU))
#undef DAT_10006730
#define DAT_10006730 (*(int *)(0x10006730U))
#undef DAT_10006734
#define DAT_10006734 (*(int *)(0x10006734U))
#undef DAT_10006738
#define DAT_10006738 (*(int *)(0x10006738U))
#undef DAT_1000673c
#define DAT_1000673c (*(int *)(0x1000673cU))
#undef DAT_10006740
#define DAT_10006740 (*(int *)(0x10006740U))
#undef DAT_10006744
#define DAT_10006744 (*(int *)(0x10006744U))
#undef DAT_10006748
#define DAT_10006748 (*(int *)(0x10006748U))
#undef DAT_1000674c
#define DAT_1000674c (*(int *)(0x1000674cU))
#undef DAT_10006750
#define DAT_10006750 (*(int *)(0x10006750U))
#undef DAT_10006754
#define DAT_10006754 (*(int *)(0x10006754U))
#undef DAT_10006758
#define DAT_10006758 (*(int *)(0x10006758U))
#undef DAT_1000675c
#define DAT_1000675c (*(int *)(0x1000675cU))
#undef DAT_10006760
#define DAT_10006760 (*(int *)(0x10006760U))
#undef DAT_10006764
#define DAT_10006764 (*(int *)(0x10006764U))
#undef DAT_10006768
#define DAT_10006768 (*(int *)(0x10006768U))
#undef DAT_1000676c
#define DAT_1000676c (*(int *)(0x1000676cU))
#undef DAT_10006770
#define DAT_10006770 (*(int *)(0x10006770U))
#undef DAT_10006774
#define DAT_10006774 (*(int *)(0x10006774U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000653c
 */

int recovered_1000653c(uint param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;

  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\f') {
    if (*(char *)(param_1 + 9) == '\x03') {
      cVar1 = *(char *)(param_1 + 10);
      if (cVar1 == '\0') {
        return ((uintptr_t)pf_module_state + 0x588U);
      }
      if (cVar1 == -2) {
        return ((uintptr_t)pf_module_state + 0x5a7U);
      }
      if (cVar1 == ' ') {
        return ((uintptr_t)pf_module_state + 0x592U);
      }
      if (cVar1 == '0') {
        return ((uintptr_t)pf_module_state + 0x597U);
      }
      if (cVar1 == -0x80) {
        return ((uintptr_t)pf_module_state + 0x59cU);
      }
      if (cVar1 == '\x10') {
        iVar3 = ((uintptr_t)pf_module_state + 0x58dU);
      }
      else {
        iVar3 = ((uintptr_t)pf_module_state + 0x5b0U);
      }
      return iVar3;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 9) == '\x03') {
      return ((uintptr_t)pf_module_state + 0x492U);
    }
  }
  else {
    if (cVar1 == '\x01') {
      param_3 = (uint)*(byte *)(param_1 + 9);
    }
    if (cVar1 == '\x01' && param_3 == 6) {
      return ((uintptr_t)pf_module_state + 0x48dU);
    }
  }
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x106b) {
    return ((uintptr_t)pf_module_state + 0x518U);
  }
  if (sVar2 == -0x7f7a) {
    if (cVar1 == '\x03') {
      return ((uintptr_t)pf_module_state + 0x4b0U);
    }
    if (cVar1 == '\x06') {
      iVar3 = ((uintptr_t)pf_module_state + 0x4e6U);
      if (*(char *)(param_1 + 9) == '\x01') {
        iVar3 = ((uintptr_t)pf_module_state + 0x4d0U);
      }
      iVar4 = ((uintptr_t)pf_module_state + 0x4beU);
      if (*(char *)(param_1 + 9) != '\0') {
        iVar4 = iVar3;
      }
      return iVar4;
    }
    if (cVar1 == '\f') {
      param_1 = (uint)*(byte *)(param_1 + 9);
    }
    if (cVar1 == '\f' && param_1 == 5) {
      iVar3 = ((uintptr_t)pf_module_state + 0x4daU);
    }
    else {
      iVar3 = ((uintptr_t)pf_module_state + 0x4e6U);
    }
    return iVar3;
  }
  if (sVar2 == 0x1180) {
    return ((uintptr_t)pf_module_state + 0x50fU);
  }
  if (sVar2 == 0x11ab) {
    return ((uintptr_t)pf_module_state + 0x501U);
  }
  if (sVar2 == 0x14e4) {
    return ((uintptr_t)pf_module_state + 0x4f0U);
  }
  if (sVar2 == 0x10de) {
    iVar3 = ((uintptr_t)pf_module_state + 0x4a5U);
    if (cVar1 == '\x03') {
      iVar3 = ((uintptr_t)pf_module_state + 0x496U);
    }
    return iVar3;
  }
  if ((byte)(cVar1 - 1) < 6) {
    iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x488cU) + (uint)(byte)(cVar1 - 1) * 4);
  }
  else {
    iVar3 = ((uintptr_t)pf_module_state + 0x482U);
  }
  return iVar3;
}

#undef DAT_1000671c
#undef DAT_10006720
#undef DAT_10006724
#undef DAT_10006728
#undef DAT_1000672c
#undef DAT_10006730
#undef DAT_10006734
#undef DAT_10006738
#undef DAT_1000673c
#undef DAT_10006740
#undef DAT_10006744
#undef DAT_10006748
#undef DAT_1000674c
#undef DAT_10006750
#undef DAT_10006754
#undef DAT_10006758
#undef DAT_1000675c
#undef DAT_10006760
#undef DAT_10006764
#undef DAT_10006768
#undef DAT_1000676c
#undef DAT_10006770
#undef DAT_10006774

#undef DAT_100067d8
#define DAT_100067d8 (*(int *)(0x100067d8U))
#undef DAT_100067dc
#define DAT_100067dc (*(int *)(0x100067dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006778
 */

void recovered_10006778(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005c4c(param_1,0x280,(char *)(((uintptr_t)pf_module_state + 0x248U)));
  recovered_10005c4c(param_1,0x280,param_2);
  recovered_10005c4c(param_1,0x280,(char *)(((uintptr_t)pf_module_state + 0x24aU)));
  recovered_100067e0(param_1,0x280,param_3,4);
  return;
}

#undef DAT_100067d8
#undef DAT_100067dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e0
 */

void recovered_100067e0(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_10005d64(param_1,param_2,bVar3);
  }
  return;
}


#undef DAT_100068c4
#define DAT_100068c4 (*(int *)(0x100068c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

undefined4 recovered_10006840(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if (param_4 != (undefined4 *)0x0) {
    uVar4 = param_2 + 0x14;
    uVar2 = *(uint *)(uVar4 + param_3 * 4);
    if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
      *param_4 = 0;
      uVar2 = *(uint *)(uVar4 + param_3 * 4);
      uVar3 = 0xfffffffc;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xfffffff0;
      }
      bVar5 = param_1 == (int *)0x0;
      if (!bVar5) {
        uVar4 = uVar3 & uVar2;
        bVar5 = uVar4 == 0;
      }
      if ((((!bVar5) && (*param_1 == (0x54584b57U))) && (0x67 < (uint)param_1[2])) &&
         ((code *)param_1[0x19] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100068c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)param_1[0x19])(uVar4,0,0x1000);
        return uVar1;
      }
    }
  }
  return 0;
}

#undef DAT_100068c4

#undef DAT_10006930
#define DAT_10006930 (*(int *)(0x10006930U))
#undef DAT_10006934
#define DAT_10006934 (*(int *)(0x10006934U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c8
 */

void recovered_100068c8(int param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005c4c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x248U)));
  recovered_10005c4c(param_1,param_2,param_3);
  recovered_10005c4c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x24aU)));
  recovered_100067e0(param_1,param_2,param_4,8);
  return;
}

#undef DAT_10006930
#undef DAT_10006934

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006938
 */

void recovered_10006938(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_100069a0(param_1,param_3 + param_2,4,param_4);
  return;
}


#undef DAT_1000699c
#define DAT_1000699c (*(int *)(0x1000699cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006954
 */

void recovered_10006954(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 != 0 && param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x70) {
      return;
    }
    if ((code *)param_1[0x1b] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1b])(param_3 + param_2,4,param_4);
      return;
    }
  }
  return;
}

#undef DAT_1000699c

#undef DAT_100069ec
#define DAT_100069ec (*(uint8_t * *)(0x100069ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a0
 */

undefined4 recovered_100069a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x6b < (uint)param_1[2])) {
    UNRECOVERED_JUMPTABLE = (0x54584b57U);
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100069e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100069ec

#undef DAT_10006a34
#define DAT_10006a34 (*(int *)(0x10006a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069f0
 */

void recovered_100069f0(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *UNRECOVERED_JUMPTABLE;

  if (param_1 != (int *)0x0) {
    if (*param_1 != (0x54584b57U)) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[2];
    if ((code *)0x57 < UNRECOVERED_JUMPTABLE) {
      if (param_3 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x15];
      }
      if (param_3 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2,2);
        return;
      }
    }
  }
  return;
}

#undef DAT_10006a34

#undef DAT_10006a64
#define DAT_10006a64 (*(int *)(0x10006a64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a38
 */

undefined4 recovered_10006a38(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((*(int *)(((uintptr_t)pf_module_state + 0x890U)) == 0 || param_1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(((uintptr_t)pf_module_state + 0x890U)) + 0x24),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

#undef DAT_10006a64

#undef DAT_10006aac
#define DAT_10006aac (*(int *)(0x10006aacU))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(int *)(0x10006ab0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a68
 */

undefined4 recovered_10006a68(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;

  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x890U));
  if ((((piVar1 == (int *)0x0) || (*piVar1 != (0x54584b57U))) || ((uint)piVar1[2] < 0xac)) ||
     ((code *)piVar1[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar1[0x2a])();
  return uVar2;
}

#undef DAT_10006aac
#undef DAT_10006ab0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab4
 */

undefined4 recovered_10006ab4(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined8 uVar40;

  uVar3 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar25 = param_1;
    for (uVar22 = 0; uVar22 != param_2; uVar22 = uVar22 + 1) {
      piVar19 = (int *)(param_1 + uVar22 * 0x70);
      iVar4 = *piVar19;
      if (iVar4 == 3) {
        uVar9 = piVar19[0xe];
        bVar2 = recovered_10007058(piVar19 + 2);
        if (!bVar2) goto LAB_10006f10;
        uVar34 = piVar19[0x11];
        piVar5 = piVar19 + 0x10;
        uVar36 = piVar19[0x10];
        iVar4 = 0;
        uVar10 = uVar34;
        uVar14 = uVar34;
        uVar23 = uVar36;
        uVar30 = uVar36;
        while (iVar4 != 2) {
          iVar16 = iVar25 + iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          uVar15 = *(uint *)(iVar16 + 0x50);
          uVar11 = *(uint *)(iVar16 + 0x54);
          if ((int)uVar14 < (int)uVar11) {
            uVar14 = uVar11;
          }
          if ((int)uVar30 < (int)uVar15) {
            uVar30 = uVar15;
          }
          if ((int)uVar11 < (int)uVar10) {
            uVar10 = uVar11;
          }
          if ((int)uVar15 < (int)uVar23) {
            uVar23 = uVar15;
          }
        }
        if (-1 < (int)uVar30 && -1 < (int)uVar14) {
          iVar16 = piVar19[5];
          bVar2 = SBORROW4(uVar23,iVar16);
          iVar4 = uVar23 - iVar16;
          piVar31 = piVar19;
          if ((int)uVar23 < iVar16) {
            piVar31 = (int *)piVar19[6];
            bVar2 = SBORROW4(uVar10,(int)piVar31);
            iVar4 = uVar10 - (int)piVar31;
          }
          if (iVar4 < 0 != bVar2) {
            piVar6 = piVar19 + 0x18;
            iVar4 = *piVar6;
            piVar12 = piVar19 + 0x14;
            iVar17 = piVar19[0x19];
            lVar38 = recovered_1000711c(piVar5,piVar12,iVar4,iVar17);
            if ((int)piVar31 <= (int)uVar14) {
              uVar14 = (int)piVar31 - 1;
            }
            if (iVar16 <= (int)uVar30) {
              uVar30 = iVar16 - 1;
            }
            if (lVar38 != 0) {
              uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
              uVar23 = uVar23 & ~((int)uVar23 >> 0x1f);
              iVar16 = piVar19[0x15];
              iVar26 = piVar19[0x14];
              uVar39 = recovered_1000711c(piVar12,piVar6,uVar23,uVar10);
              iVar28 = (int)((ulonglong)uVar39 >> 0x20);
              lVar38 = recovered_1000711c(piVar6,piVar5,uVar23,uVar10);
              uVar40 = recovered_1000711c(piVar5,piVar12,uVar23,uVar10);
              iVar18 = piVar19[2];
              if (iVar18 == 0) {
                iVar18 = 0;
              }
              else if (piVar19[3] != 0) {
                iVar18 = 0;
              }
              uVar15 = uVar36 - iVar4;
              uVar36 = iVar26 - uVar36;
              uVar7 = iVar4 - iVar26;
              uVar35 = iVar17 - iVar16;
              uVar29 = iVar16 - uVar34;
              uVar11 = (uint)uVar40;
              while( true ) {
                uVar1 = (ulonglong)lVar38 >> 0x20;
                uVar13 = (uint)lVar38;
                iVar4 = (int)((ulonglong)uVar40 >> 0x20);
                uVar32 = (uint)uVar39;
                if ((int)uVar14 < (int)uVar10) break;
                uVar24 = piVar19[7] * uVar10 + iVar18;
                iVar8 = piVar19[7] * uVar10 + iVar18;
                iVar16 = iVar28;
                iVar26 = iVar4;
                uVar27 = uVar11;
                uVar33 = uVar23;
                uVar37 = uVar32;
                while( true ) {
                  iVar20 = (int)((ulonglong)lVar38 >> 0x20);
                  if ((int)uVar30 < (int)uVar33) break;
                  if ((((-1 < iVar16 && -1 < lVar38) && (-1 < iVar26)) ||
                      (((int)-(iVar16 + (uint)(uVar37 != 0)) < 0 ==
                        (SBORROW4(0,iVar16) != SBORROW4(-iVar16,(uint)(uVar37 != 0))) &&
                       ((bVar2 = (int)lVar38 != 0,
                        (int)-(iVar20 + (uint)bVar2) < 0 ==
                        (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar2)) &&
                        ((int)-(iVar26 + (uint)(uVar27 != 0)) < 0 ==
                         (SBORROW4(0,iVar26) != SBORROW4(-iVar26,(uint)(uVar27 != 0))))))))) &&
                     (iVar18 != 0)) {
                    if ((uVar24 & 3) == 0) {
                      *(uint *)(iVar8 + uVar33 * 4) =
                           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18;
                    }
                    else {
                      puVar21 = (undefined1 *)(iVar8 + uVar33 * 4);
                      *puVar21 = (char)(uVar9 >> 0x18);
                      puVar21[3] = (char)uVar9;
                      puVar21[2] = (char)(uVar9 >> 8);
                      puVar21[1] = (char)(uVar9 >> 0x10);
                    }
                  }
                  bVar2 = CARRY4(uVar27,uVar29);
                  uVar27 = uVar27 + uVar29;
                  iVar26 = iVar26 + ((int)uVar29 >> 0x1f) + (uint)bVar2;
                  uVar24 = uVar24 + 4;
                  uVar33 = uVar33 + 1;
                  lVar38 = lVar38 + (int)(uVar34 - iVar17);
                  bVar2 = CARRY4(uVar37,uVar35);
                  uVar37 = uVar37 + uVar35;
                  iVar16 = iVar16 + ((int)uVar35 >> 0x1f) + (uint)bVar2;
                }
                uVar40 = CONCAT44(iVar4 - (((int)uVar36 >> 0x1f) + (uint)(uVar11 < uVar36)),uVar11);
                lVar38 = CONCAT44((int)uVar1 - (((int)uVar15 >> 0x1f) + (uint)(uVar13 < uVar15)),
                                  uVar13 - uVar15);
                uVar39 = CONCAT44(iVar28,uVar32 - uVar7);
                uVar10 = uVar10 + 1;
                iVar28 = iVar28 - (((int)uVar7 >> 0x1f) + (uint)(uVar32 < uVar7));
                uVar11 = uVar11 - uVar36;
              }
            }
          }
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = piVar19[0xd];
          uVar10 = piVar19[10];
          uVar14 = piVar19[0xb];
          iVar16 = piVar19[0xc];
          uVar9 = piVar19[0xe];
        }
        else {
          if (iVar4 != 1) goto LAB_10006f10;
          iVar4 = piVar19[6];
          uVar14 = 0;
          uVar9 = piVar19[0xe];
          iVar16 = piVar19[5];
          uVar10 = 0;
        }
        iVar4 = recovered_10006f28(piVar19 + 2,uVar10,uVar14,iVar16,iVar4,uVar9);
        if (iVar4 == 0) {
          goto LAB_10006f10;
        }
      }
      iVar25 = iVar25 + 0x70;
    }
    uVar22 = param_2;
LAB_10006f10:
    uVar3 = 0;
    if (param_2 <= uVar22) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f28
 */

undefined4
recovered_10006f28(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r3 = 0;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  bVar1 = recovered_10007058(param_1);
  uVar7 = 0;
  iVar3 = param_5;
  if (0 < param_5) {
    iVar3 = param_4;
  }
  if ((0 < iVar3) && (bVar1)) {
    uVar2 = param_4 + param_2;
    uVar7 = 1;
    uVar5 = uVar2;
    uVar9 = extraout_r1;
    if (0 < (int)uVar2) {
      uVar5 = param_5 + param_3;
      uVar9 = uVar5;
    }
    if (0 < (int)uVar5) {
      uVar10 = param_1[3];
      bVar11 = SBORROW4(uVar10,param_2);
      iVar3 = uVar10 - param_2;
      bVar1 = uVar10 == param_2;
      uVar5 = extraout_r3;
      if ((int)param_2 < (int)uVar10) {
        uVar5 = param_1[4];
        bVar11 = SBORROW4(uVar5,param_3);
        iVar3 = uVar5 - param_3;
        bVar1 = uVar5 == param_3;
      }
      if (!bVar1 && iVar3 < 0 == bVar11) {
        if ((int)uVar9 < (int)uVar5) {
          uVar5 = uVar9;
        }
        if ((int)uVar2 < (int)uVar10) {
          uVar10 = uVar2;
        }
        uVar2 = param_2 & ~((int)param_2 >> 0x1f);
        iVar3 = recovered_100070dc(param_1,uVar9,1);
        for (uVar9 = param_3 & ~((int)param_3 >> 0x1f); (int)uVar9 < (int)uVar5; uVar9 = uVar9 + 1)
        {
          iVar4 = param_1[5];
          puVar8 = (uint *)(iVar4 * uVar9 + iVar3 + uVar2 * 4);
          uVar6 = uVar2;
          if (((uint)puVar8 & 3) == 0) {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              *(uint *)(iVar4 * uVar9 + iVar3 + uVar6 * 4) =
                   param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
                   param_6 >> 0x18;
            }
          }
          else {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              recovered_1000710c(puVar8,param_6);
              puVar8 = puVar8 + 1;
            }
          }
        }
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007058
 */

bool recovered_10007058(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint in_r12;

  if (param_1 == (int *)0x0) {
    return false;
  }
  bVar2 = false;
  if (param_1[6] == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      in_r12 = param_1[4];
    }
    if (uVar3 != 0 && in_r12 != 0) {
      if ((uint)(uVar3 << 2 <= (uint)param_1[5]) <= -(uVar3 >> 0x1e)) {
        return false;
      }
      if ((param_1[2] == 0) ||
         (lVar1 = (ulonglong)(uint)param_1[5] * (ulonglong)in_r12,
         (uint)-(int)((ulonglong)lVar1 >> 0x20) < (uint)((uint)lVar1 <= (uint)param_1[2]))) {
        if (*param_1 != 0) {
          bVar2 = param_1[1] == 0;
        }
        return bVar2;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070dc
 */

int recovered_100070dc(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (int *)0x0) {
    param_3 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (param_1[1] != 0) {
      param_3 = 0;
    }
    return param_3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000710c
 */

void recovered_1000710c(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000711c
 */

undefined8 recovered_1000711c(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;

  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)(param_4 - param_1[1]);
  uVar4 = (uint)lVar1;
  lVar2 = (longlong)(param_2[1] - param_1[1]) * (longlong)(param_3 - *param_1);
  uVar3 = (uint)lVar2;
  return CONCAT44((int)((ulonglong)lVar2 >> 0x20) -
                  ((int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar3 < uVar4)),uVar3 - uVar4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007150
 */

uint recovered_10007150(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071a0
 */

uint recovered_100071a0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d8
 */

uint recovered_100071d8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007248
 */

uint recovered_10007248(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072b0
 */

undefined8 recovered_100072b0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007394
 */

undefined8 recovered_10007394(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007414
 */

undefined8 recovered_10007414(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007534
 */

undefined8 recovered_10007534(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10007670
#define DAT_10007670 (*(double *)(0x10007670U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

undefined8 recovered_100075f0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10007670

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007678
 */

undefined8 recovered_10007678(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100075f0(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100075f0(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076c4
 */

void recovered_100076c4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100075f0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x874U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d4
 */

void recovered_100076d4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x85cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e4
 */

double recovered_100076e4(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000772c
 */

void recovered_1000772c(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_100076e4(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_100076e4(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007754
 */

float recovered_10007754(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100076e4(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

float recovered_10007770(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_1000772c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
