/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

static const unsigned char pf_literal_10000fc8_DAT_10000fd4[] __attribute__((aligned(16)))={0x8c,0x29,0x00,0x00};
#undef DAT_10000fd4
#define DAT_10000fd4 (*(uint32_t *)((uintptr_t)pf_literal_10000fc8_DAT_10000fd4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc8
 */

int recovered_10000fc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((uintptr_t)pf_module_state+0x0U);
}

#undef DAT_10000fd4

static const unsigned char pf_literal_10000fd8_DAT_10000fe4[] __attribute__((aligned(16)))={0x1c,0x30,0x00,0x00};
#undef DAT_10000fe4
#define DAT_10000fe4 (*(uint32_t *)((uintptr_t)pf_literal_10000fd8_DAT_10000fe4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd8
 */

int recovered_10000fd8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ((uintptr_t)pf_module_state+0x6a0U);
}

#undef DAT_10000fe4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

bool recovered_10000fe8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x10;
}


static const unsigned char pf_literal_10000ff8_DAT_100017b0[] __attribute__((aligned(16)))={0xfc,0x00,0x00,0x00};
#undef DAT_100017b0
#define DAT_100017b0 (*(uint32_t *)((uintptr_t)pf_literal_10000ff8_DAT_100017b0))
static const unsigned char pf_literal_10000ff8_DAT_100017b4[] __attribute__((aligned(16)))={0x68,0x77,0x00,0x00};
#undef DAT_100017b4
#define DAT_100017b4 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017b4))
static const unsigned char pf_literal_10000ff8_DAT_100017b8[] __attribute__((aligned(16)))={0x48,0x29,0x00,0x00};
#undef DAT_100017b8
#define DAT_100017b8 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017b8))
static const unsigned char pf_literal_10000ff8_DAT_100017bc[] __attribute__((aligned(16)))={0x33,0x29,0x00,0x00};
#undef DAT_100017bc
#define DAT_100017bc (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017bc))
static const unsigned char pf_literal_10000ff8_DAT_100017c0[] __attribute__((aligned(16)))={0xf0,0x2e,0x00,0x00};
#undef DAT_100017c0
#define DAT_100017c0 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017c0))
static const unsigned char pf_literal_10000ff8_DAT_100017c4[] __attribute__((aligned(16)))={0xfe,0x28,0x00,0x00};
#undef DAT_100017c4
#define DAT_100017c4 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017c4))
static const unsigned char pf_literal_10000ff8_DAT_100017c8[] __attribute__((aligned(16)))={0xe0,0x28,0x00,0x00};
#undef DAT_100017c8
#define DAT_100017c8 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017c8))
static const unsigned char pf_literal_10000ff8_DAT_100017cc[] __attribute__((aligned(16)))={0x8b,0x28,0x00,0x00};
#undef DAT_100017cc
#define DAT_100017cc (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017cc))
static const unsigned char pf_literal_10000ff8_DAT_100017d0[] __attribute__((aligned(16)))={0x78,0x28,0x00,0x00};
#undef DAT_100017d0
#define DAT_100017d0 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017d0))
static const unsigned char pf_literal_10000ff8_DAT_100017d4[] __attribute__((aligned(16)))={0xcb,0x29,0x00,0x00};
#undef DAT_100017d4
#define DAT_100017d4 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017d4))
static const unsigned char pf_literal_10000ff8_DAT_100017d8[] __attribute__((aligned(16)))={0x3d,0x28,0x00,0x00};
#undef DAT_100017d8
#define DAT_100017d8 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017d8))
static const unsigned char pf_literal_10000ff8_DAT_100017dc[] __attribute__((aligned(16)))={0x12,0x28,0x00,0x00};
#undef DAT_100017dc
#define DAT_100017dc (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017dc))
static const unsigned char pf_literal_10000ff8_DAT_100017e0[] __attribute__((aligned(16)))={0xa8,0x2d,0x00,0x00};
#undef DAT_100017e0
#define DAT_100017e0 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017e0))
static const unsigned char pf_literal_10000ff8_DAT_100017e4[] __attribute__((aligned(16)))={0xef,0x27,0x00,0x00};
#undef DAT_100017e4
#define DAT_100017e4 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017e4))
static const unsigned char pf_literal_10000ff8_DAT_100017e8[] __attribute__((aligned(16)))={0xb8,0x27,0x00,0x00};
#undef DAT_100017e8
#define DAT_100017e8 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017e8))
static const unsigned char pf_literal_10000ff8_DAT_100017ec[] __attribute__((aligned(16)))={0x89,0x27,0x00,0x00};
#undef DAT_100017ec
#define DAT_100017ec (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017ec))
static const unsigned char pf_literal_10000ff8_DAT_100017f0[] __attribute__((aligned(16)))={0xa8,0x74,0x00,0x00};
#undef DAT_100017f0
#define DAT_100017f0 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017f0))
static const unsigned char pf_literal_10000ff8_DAT_100017f4[] __attribute__((aligned(16)))={0x5a,0x27,0x00,0x00};
#undef DAT_100017f4
#define DAT_100017f4 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017f4))
static const unsigned char pf_literal_10000ff8_DAT_100017f8[] __attribute__((aligned(16)))={0xd9,0x22,0x00,0x00};
#undef DAT_100017f8
#define DAT_100017f8 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017f8))
static const unsigned char pf_literal_10000ff8_DAT_100017fc[] __attribute__((aligned(16)))={0x80,0x23,0x00,0x00};
#undef DAT_100017fc
#define DAT_100017fc (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_100017fc))
static const unsigned char pf_literal_10000ff8_DAT_10001800[] __attribute__((aligned(16)))={0x98,0x72,0x00,0x00};
#undef DAT_10001800
#define DAT_10001800 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001800))
static const unsigned char pf_literal_10000ff8_DAT_10001804[] __attribute__((aligned(16)))={0x20,0x72,0x00,0x00};
#undef DAT_10001804
#define DAT_10001804 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001804))
static const unsigned char pf_literal_10000ff8_DAT_10001808[] __attribute__((aligned(16)))={0x25,0x25,0x00,0x00};
#undef DAT_10001808
#define DAT_10001808 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001808))
static const unsigned char pf_literal_10000ff8_DAT_1000180c[] __attribute__((aligned(16)))={0x1c,0x25,0x00,0x00};
#undef DAT_1000180c
#define DAT_1000180c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000180c))
static const unsigned char pf_literal_10000ff8_DAT_10001810[] __attribute__((aligned(16)))={0x69,0x27,0x00,0x00};
#undef DAT_10001810
#define DAT_10001810 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001810))
static const unsigned char pf_literal_10000ff8_DAT_10001814[] __attribute__((aligned(16)))={0xf0,0x73,0x00,0x00};
#undef DAT_10001814
#define DAT_10001814 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001814))
static const unsigned char pf_literal_10000ff8_DAT_10001818[] __attribute__((aligned(16)))={0x1e,0x27,0x00,0x00};
#undef DAT_10001818
#define DAT_10001818 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001818))
static const unsigned char pf_literal_10000ff8_DAT_1000181c[] __attribute__((aligned(16)))={0x06,0x27,0x00,0x00};
#undef DAT_1000181c
#define DAT_1000181c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000181c))
static const unsigned char pf_literal_10000ff8_DAT_10001820[] __attribute__((aligned(16)))={0x70,0x73,0x00,0x00};
#undef DAT_10001820
#define DAT_10001820 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001820))
static const unsigned char pf_literal_10000ff8_DAT_10001824[] __attribute__((aligned(16)))={0xaf,0x26,0x00,0x00};
#undef DAT_10001824
#define DAT_10001824 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001824))
static const unsigned char pf_literal_10000ff8_DAT_10001828[] __attribute__((aligned(16)))={0x96,0x26,0x00,0x00};
#undef DAT_10001828
#define DAT_10001828 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001828))
static const unsigned char pf_literal_10000ff8_DAT_1000182c[] __attribute__((aligned(16)))={0x81,0x25,0x00,0x00};
#undef DAT_1000182c
#define DAT_1000182c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000182c))
static const unsigned char pf_literal_10000ff8_DAT_10001830[] __attribute__((aligned(16)))={0xc8,0x71,0x00,0x00};
#undef DAT_10001830
#define DAT_10001830 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001830))
static const unsigned char pf_literal_10000ff8_DAT_10001834[] __attribute__((aligned(16)))={0x48,0x25,0x00,0x00};
#undef DAT_10001834
#define DAT_10001834 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001834))
static const unsigned char pf_literal_10000ff8_DAT_10001838[] __attribute__((aligned(16)))={0x43,0x25,0x00,0x00};
#undef DAT_10001838
#define DAT_10001838 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001838))
static const unsigned char pf_literal_10000ff8_DAT_1000183c[] __attribute__((aligned(16)))={0x6c,0x71,0x00,0x00};
#undef DAT_1000183c
#define DAT_1000183c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000183c))
static const unsigned char pf_literal_10000ff8_DAT_10001840[] __attribute__((aligned(16)))={0x07,0x25,0x00,0x00};
#undef DAT_10001840
#define DAT_10001840 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001840))
static const unsigned char pf_literal_10000ff8_DAT_10001844[] __attribute__((aligned(16)))={0x05,0x25,0x00,0x00};
#undef DAT_10001844
#define DAT_10001844 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001844))
static const unsigned char pf_literal_10000ff8_DAT_10001848[] __attribute__((aligned(16)))={0x0c,0x71,0x00,0x00};
#undef DAT_10001848
#define DAT_10001848 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001848))
static const unsigned char pf_literal_10000ff8_DAT_1000184c[] __attribute__((aligned(16)))={0xc1,0x24,0x00,0x00};
#undef DAT_1000184c
#define DAT_1000184c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000184c))
static const unsigned char pf_literal_10000ff8_DAT_10001850[] __attribute__((aligned(16)))={0xc1,0x24,0x00,0x00};
#undef DAT_10001850
#define DAT_10001850 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001850))
static const unsigned char pf_literal_10000ff8_DAT_10001854[] __attribute__((aligned(16)))={0xac,0x70,0x00,0x00};
#undef DAT_10001854
#define DAT_10001854 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001854))
static const unsigned char pf_literal_10000ff8_DAT_10001858[] __attribute__((aligned(16)))={0x7d,0x24,0x00,0x00};
#undef DAT_10001858
#define DAT_10001858 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001858))
static const unsigned char pf_literal_10000ff8_DAT_1000185c[] __attribute__((aligned(16)))={0xed,0x23,0x00,0x00};
#undef DAT_1000185c
#define DAT_1000185c (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_1000185c))
static const unsigned char pf_literal_10000ff8_DAT_10001860[] __attribute__((aligned(16)))={0x9f,0x26,0x00,0x00};
#undef DAT_10001860
#define DAT_10001860 (*(int *)((uintptr_t)pf_literal_10000ff8_DAT_10001860))
#define local_2354 (*(int (*)[2261])(pf_stack_frame + 268))
#define local_354 (*(undefined4 *)(pf_stack_frame + 8460))
#define local_350 (*(ulonglong (*)[106])(pf_stack_frame + 8464))
#define local_330 (*(char * *)(pf_stack_frame + 8496))
#define local_32c (*(char * *)(pf_stack_frame + 8500))
#define local_228 (*(char * *)(pf_stack_frame + 8760))
#define auStack_2450 (*(undefined4 (*)[2324])(pf_stack_frame + 16))
#define auStack_2344 (*(undefined4 (*)[2257])(pf_stack_frame + 284))
#define acStack_328 (*(char (*)[808])(pf_stack_frame + 8504))
#define acStack_224 (*(char (*)[548])(pf_stack_frame + 8764))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff8
 */

uint recovered_10000ff8(uint capability,uint operation,void *request)

{
  unsigned char pf_stack_frame[9344] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *begin;
  bool bVar13;

  if (request == (void *)0x0) {
    return 0;
  }
  if (capability != 0x10) {
    return 0;
  }
  iVar10 = *(int *)(((uintptr_t)pf_module_state+0x4e34U));
  if (iVar10 == 0) {
    return 0;
  }
  iVar3 = *(int *)request;
  bVar13 = iVar3 == 1;
  if (bVar13) {
    iVar3 = *(int *)((int)request + 4);
  }
  if (!bVar13 || iVar3 != 0x28) {
    return 0;
  }
  if (operation != 0x50001) {
    if (operation == 0x50003) {
      puVar11 = *(undefined4 **)((int)request + 8);
      if (puVar11 == (undefined4 *)0x0) {
        return 0;
      }
      recovered_10003744(puVar11 + 3,0,100);
      puVar11[1] = 0x70;
      puVar11[2] = 1;
      *puVar11 = 1;
      recovered_10001864(puVar11 + 4,(void *)(((uintptr_t)pf_module_state+0xb3U)),5);
      return 1;
    }
    if (operation == 0x50005) {
      (**(code **)(iVar10 + 8))((char *)(((uintptr_t)pf_module_state+0x7cU)));
      return 1;
    }
    return 0;
  }
  pcVar12 = *(char **)((int)request + 8);
  if (pcVar12 == (char *)0x0) {
    return 0;
  }
  uVar4 = recovered_10001a20(pcVar12);
  iVar3 = DAT_100017c0;
  begin = (char *)(((uintptr_t)pf_module_state+0x6a0U));
  local_228 = (char *)0x0;
  *(undefined1 *)(((uintptr_t)pf_module_state+0x4c30U)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x4c2cU)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x4c28U)) = 0;
  if (0x1ff < uVar4) {
    pcVar12 = (char *)(((uintptr_t)pf_module_state+0xd2U));
    goto LAB_10001130;
  }
  uVar4 = uVar4 + 1;
  recovered_10001864(acStack_224,pcVar12,uVar4);
  uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xe0U)));
  if (uVar2 == '\0') {
    pcVar9 = acStack_224;
    pcVar12 = (char *)(((uintptr_t)pf_module_state+0x4c31U));
  }
  else {
    pcVar9 = (char *)(((uintptr_t)pf_module_state+0x4c31U));
    uVar4 = recovered_10001a20(pcVar9);
    uVar4 = uVar4 + 1;
    pcVar12 = acStack_224;
  }
  recovered_10001864(pcVar12,pcVar9,uVar4);
  uVar4 = recovered_10001a20(acStack_224);
  uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xe3U)));
  if ((uVar2 == '\0') &&
     (uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xe8U))), uVar2 == '\0')) {
    uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xedU)));
    if (uVar2 != '\0') {
      *begin = '\0';
      *(undefined4 *)(((uintptr_t)pf_module_state+0x26a0U)) = 0;
      goto LAB_100011e8;
    }
    uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xf2U)));
    if (uVar2 == '\0') {
      uVar2 = recovered_10001ac8(acStack_224,(char *)(((uintptr_t)pf_module_state+0xf7U)));
      if (uVar2 != '\0') {
        recovered_10001afc(begin,begin + *(int *)(((uintptr_t)pf_module_state+0x26a0U)),0);
        goto LAB_100011e8;
      }
      pcVar12 = acStack_224 + uVar4;
      uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0xfcU)),&local_228)
      ;
      if (uVar2 != '\0') {
        recovered_10001ff0(local_228,pcVar12);
        goto LAB_100011e8;
      }
      uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x101U)),&local_228)
      ;
      if (uVar2 == '\0') {
        uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x106U)),
                                   &local_228);
        if (uVar2 == '\0') {
          uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x179U)),
                                     &local_228);
          if (uVar2 == '\0') {
            uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x18aU)),
                                       &local_228);
            if (uVar2 == '\0') {
              uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x1c5U)),
                                         &local_228);
              if (uVar2 == '\0') {
                uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x1e3U)),
                                           &local_228);
                if (uVar2 == '\0') {
                  uVar2 = recovered_10001f44(acStack_224,pcVar12,(char *)(((uintptr_t)pf_module_state+0x201U))
                                             ,&local_228);
                  if (uVar2 == '\0') {
                    uVar2 = recovered_10001f44(acStack_224,pcVar12,
                                               (char *)(((uintptr_t)pf_module_state+0x21dU)),&local_228);
                    if (uVar2 == '\0') {
                      uVar4 = recovered_10001a20(acStack_224);
                      if (uVar4 + 1 < 0x2000U - *(int *)(((uintptr_t)pf_module_state+0x26a0U))) {
                        recovered_10001864(begin + *(int *)(((uintptr_t)pf_module_state+0x26a0U)),acStack_224,uVar4);
                        piVar6 = (int *)(((uintptr_t)pf_module_state+0x26a0U));
                        iVar10 = *piVar6;
                        *piVar6 = iVar10 + uVar4 + 1;
                        begin[iVar10 + uVar4] = '\n';
                        iVar10 = *piVar6;
LAB_1000178c:
                        begin[iVar10] = '\0';
                        goto LAB_100011e8;
                      }
                      pcVar12 = (char *)(((uintptr_t)pf_module_state+0x23dU));
                    }
                    else {
                      uVar2 = recovered_10002b00(local_228,acStack_328);
                      if ((uVar2 == '\0') ||
                         (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x1c))
                                            (acStack_328,1), uVar4 != 0)) goto LAB_100011e8;
                      pcVar12 = (char *)(((uintptr_t)pf_module_state+0x221U));
                    }
                  }
                  else {
                    uVar2 = recovered_10002b00(local_228,acStack_328);
                    if ((uVar2 == '\0') ||
                       (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x1c))
                                          (acStack_328,0), uVar4 != 0)) goto LAB_100011e8;
                    pcVar12 = (char *)(((uintptr_t)pf_module_state+0x205U));
                  }
                }
                else {
                  uVar2 = recovered_10002b00(local_228,acStack_328);
                  if ((uVar2 == '\0') ||
                     (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x18))(acStack_328)
                     , uVar4 != 0)) goto LAB_100011e8;
                  pcVar12 = (char *)(((uintptr_t)pf_module_state+0x1ebU));
                }
              }
              else {
                uVar2 = recovered_10002b00(local_228,acStack_328);
                if ((uVar2 == '\0') ||
                   (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x14))(acStack_328),
                   uVar4 != 0)) goto LAB_100011e8;
                pcVar12 = (char *)(((uintptr_t)pf_module_state+0x1d0U));
              }
            }
            else {
              PF_PART4(local_350[0], 0) = 0;
              uVar2 = recovered_10002b00(local_228,acStack_328);
              if (uVar2 == '\0') goto LAB_100011e8;
              uVar5 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0xc))
                                (acStack_328,local_2354,0x1fff,(uint *)local_350);
              uVar4 = (uint)local_350[0];
              pcVar12 = (char *)(((uintptr_t)pf_module_state+0x18fU));
              if (((uVar5 != 0) && ((uint)local_350[0] >> 0xd == 0)) &&
                 ((uint)local_350[0] <= 0x1fffU - *(int *)(((uintptr_t)pf_module_state+0x26a0U)))) {
                uVar5 = 0;
                pcVar12 = (char *)(((uintptr_t)pf_module_state+0x1aaU));
                do {
                  if ((uint)local_350[0] == uVar5) {
                    recovered_10001864(begin + *(int *)(((uintptr_t)pf_module_state+0x26a0U)),local_2354,
                                       (uint)local_350[0]);
                    iVar10 = *(int *)(((uintptr_t)pf_module_state+0x26a0U)) + uVar4;
                    *(int *)(((uintptr_t)pf_module_state+0x26a0U)) = iVar10;
                    goto LAB_1000178c;
                  }
                  pcVar9 = (char *)((int)local_2354 + uVar5);
                  uVar5 = uVar5 + 1;
                } while (*pcVar9 != '\0');
              }
            }
          }
          else {
            uVar2 = recovered_10002b00(local_228,acStack_328);
            if ((uVar2 == '\0') ||
               (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x10))
                                  (acStack_328,begin,*(uint *)(((uintptr_t)pf_module_state+0x26a0U))), uVar4 != 0))
            goto LAB_100011e8;
            pcVar12 = (char *)(((uintptr_t)pf_module_state+0x17eU));
          }
        }
        else {
          local_330 = local_228;
          uVar4 = 0;
          local_354 = 0;
          local_32c = pcVar12;
          uVar2 = recovered_10002330(&local_330,acStack_328,0x40);
          if (uVar2 == '\0') {
            pcVar12 = (char *)(((uintptr_t)pf_module_state+0x10bU));
          }
          else {
            while( true ) {
              uVar2 = recovered_100023f8(&local_330);
              if (uVar2 != '\0' || (*(byte *)(((uintptr_t)pf_module_state+0x4c30U)) & 1) != 0) break;
              if (uVar4 == 8) {
                pcVar12 = (char *)(((uintptr_t)pf_module_state+0x11dU));
                goto LAB_10001130;
              }
              recovered_1000242c(local_2354,&local_330,7);
              iVar10 = local_2354[0];
              if (local_2354[0] == 1) {
                iVar10 = local_2354[2];
              }
              if (local_2354[0] != 1 || iVar10 != 0) {
                pcVar12 = (char *)(((uintptr_t)pf_module_state+0x130U));
                goto LAB_10001130;
              }
              *(int *)((int)local_350 + uVar4 * 4) = local_2354[1];
              uVar4 = uVar4 + 1;
            }
            if (((*(byte *)(((uintptr_t)pf_module_state+0x4c30U)) & 1) == 0) &&
               (uVar4 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x20))
                                  (acStack_328,uVar4,local_350,(ulonglong *)&local_354),
               uVar1 = local_354, uVar4 != 0)) {
              recovered_10003744(local_2354 + 3,0,0x100);
              local_2354[0] = 1;
              local_2354[2] = 0;
              local_2354[1] = uVar1;
              recovered_10002958((const unsigned char *)local_2354);
              pcVar7 = *(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8);
              pcVar12 = (char *)(((uintptr_t)pf_module_state+0x145U));
              goto LAB_100011e4;
            }
            pcVar12 = (char *)(((uintptr_t)pf_module_state+0x148U));
          }
        }
LAB_10001130:
        recovered_10001a3c(pcVar12);
        goto LAB_100011e8;
      }
      pcVar7 = *(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x24);
      pcVar12 = local_228;
    }
    else {
      pcVar7 = *(code **)(iVar10 + 8);
      pcVar12 = (char *)(((uintptr_t)pf_module_state+0x6a0U));
    }
  }
  else {
    pcVar7 = *(code **)(iVar10 + 8);
    pcVar12 = (char *)(((uintptr_t)pf_module_state+0x253U));
  }
LAB_100011e4:
  (*pcVar7)(pcVar12);
LAB_100011e8:
  uVar4 = 1;
  if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0') {
    uVar4 = 2;
  }
  return uVar4;
}

#undef DAT_100017b0
#undef DAT_100017b4
#undef DAT_100017b8
#undef DAT_100017bc
#undef DAT_100017c0
#undef DAT_100017c4
#undef DAT_100017c8
#undef DAT_100017cc
#undef DAT_100017d0
#undef DAT_100017d4
#undef DAT_100017d8
#undef DAT_100017dc
#undef DAT_100017e0
#undef DAT_100017e4
#undef DAT_100017e8
#undef DAT_100017ec
#undef DAT_100017f0
#undef DAT_100017f4
#undef DAT_100017f8
#undef DAT_100017fc
#undef DAT_10001800
#undef DAT_10001804
#undef DAT_10001808
#undef DAT_1000180c
#undef DAT_10001810
#undef DAT_10001814
#undef DAT_10001818
#undef DAT_1000181c
#undef DAT_10001820
#undef DAT_10001824
#undef DAT_10001828
#undef DAT_1000182c
#undef DAT_10001830
#undef DAT_10001834
#undef DAT_10001838
#undef DAT_1000183c
#undef DAT_10001840
#undef DAT_10001844
#undef DAT_10001848
#undef DAT_1000184c
#undef DAT_10001850
#undef DAT_10001854
#undef DAT_10001858
#undef DAT_1000185c
#undef DAT_10001860
#undef local_2354
#undef local_354
#undef local_350
#undef local_330
#undef local_32c
#undef local_228
#undef auStack_2450
#undef auStack_2344
#undef acStack_328
#undef acStack_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001864
 */

void recovered_10001864(void *out,void *src,uint length)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; length != 0; length = length - 1) {
    *(undefined1 *)out = *(undefined1 *)src;
    out = (undefined1 *)((int)out + 1);
    src = (undefined1 *)((int)src + 1);
  }
  return;
}


static const unsigned char pf_literal_1000187c_DAT_1000198c[] __attribute__((aligned(16)))={0xc4,0x20,0x00,0x00};
#undef DAT_1000198c
#define DAT_1000198c (*(int *)((uintptr_t)pf_literal_1000187c_DAT_1000198c))
static const unsigned char pf_literal_1000187c_DAT_10001990[] __attribute__((aligned(16)))={0x48,0x21,0x00,0x00};
#undef DAT_10001990
#define DAT_10001990 (*(int *)((uintptr_t)pf_literal_1000187c_DAT_10001990))
static const unsigned char pf_literal_1000187c_DAT_10001994[] __attribute__((aligned(16)))={0xb4,0x6e,0x00,0x00};
#undef DAT_10001994
#define DAT_10001994 (*(int *)((uintptr_t)pf_literal_1000187c_DAT_10001994))
static const unsigned char pf_literal_1000187c_DAT_10001998[] __attribute__((aligned(16)))={0xa7,0x20,0x00,0x00};
#undef DAT_10001998
#define DAT_10001998 (*(int *)((uintptr_t)pf_literal_1000187c_DAT_10001998))
static const unsigned char pf_literal_1000187c_DAT_1000199c[] __attribute__((aligned(16)))={0x78,0xa6,0x00,0x00};
#undef DAT_1000199c
#define DAT_1000199c (*(int *)((uintptr_t)pf_literal_1000187c_DAT_1000199c))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000187c
 */

uint recovered_1000187c(void *context,void *descriptor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uchar uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *extraout_r3;
  code *pcVar6;
  bool bVar7;

  uVar2 = recovered_100019a0(context);
  if (descriptor == (void *)(((uintptr_t)pf_module_state+0x0U))) {
    pcVar6 = extraout_r3;
    if (uVar2 != '\0') {
      pcVar6 = *(code **)((int)context + 0x24);
    }
    if (uVar2 != '\0' && pcVar6 != (code *)0x0) {
      piVar3 = (int *)(*pcVar6)(((uintptr_t)pf_module_state+0xb8U),1,0x28);
      *(int **)(((uintptr_t)pf_module_state+0x4e34U)) = piVar3;
      if (piVar3 != (int *)0x0) {
        iVar5 = *piVar3;
        bVar7 = iVar5 == 1;
        if (bVar7) {
          iVar5 = piVar3[1];
        }
        if (bVar7 && iVar5 == 0x28) {
          iVar5 = 0;
          if (piVar3[2] != 0) {
            iVar5 = piVar3[3];
          }
          if (piVar3[2] != 0 && iVar5 != 0) {
            iVar5 = 0;
            if (piVar3[4] != 0) {
              iVar5 = piVar3[5];
            }
            if (piVar3[4] != 0 && iVar5 != 0) {
              iVar5 = 0;
              if (piVar3[6] != 0) {
                iVar5 = piVar3[7];
              }
              if (piVar3[6] != 0 && iVar5 != 0) {
                piVar1 = piVar3 + 8;
                if (*piVar1 != 0) {
                  piVar3 = (int *)piVar3[9];
                }
                if (*piVar1 != 0 && piVar3 != (int *)0x0) {
                  uVar2 = recovered_100019a0(context);
                  if (uVar2 != '\0') {
                    descriptor = *(void **)((int)context + 0x14);
                  }
                  if (uVar2 != '\0' && descriptor != (code *)0x0) {
                    uVar4 = ((unsigned int (*)(const char *,unsigned int,unsigned int,void *,unsigned int))descriptor)(((uintptr_t)pf_module_state+0xcbU),3,0x240002,
                                          ((uintptr_t)pf_module_state+0x86a0U),0x20);
                    return uVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

#undef DAT_1000198c
#undef DAT_10001990
#undef DAT_10001994
#undef DAT_10001998
#undef DAT_1000199c

static const unsigned char pf_literal_100019a0_DAT_100019e4[] __attribute__((aligned(16)))={0x4b,0x4d,0x4f,0x44};
#undef DAT_100019e4
#define DAT_100019e4 (*(int *)((uintptr_t)pf_literal_100019a0_DAT_100019e4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a0
 */

uchar recovered_100019a0(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = '\0';
  if ((context != (void *)0x0) && (*(int *)context == DAT_100019e4)) {
    if (*(uint *)((int)context + 4) < 1100000) {
      return '\0';
    }
    if (0x27 < *(uint *)((int)context + 8)) {
      uVar1 = '\x01';
    }
  }
  return uVar1;
}

#undef DAT_100019e4

static const unsigned char pf_literal_100019e8_DAT_10001a1c[] __attribute__((aligned(16)))={0x13,0x20,0x00,0x00};
#undef DAT_10001a1c
#define DAT_10001a1c (*(int *)((uintptr_t)pf_literal_100019e8_DAT_10001a1c))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e8
 */

undefined4 recovered_100019e8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined4 uVar2;
  code *extraout_r1;
  code *UNRECOVERED_JUMPTABLE;

  uVar1 = recovered_100019a0(param_1);
  UNRECOVERED_JUMPTABLE = extraout_r1;
  if (uVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)((int)param_1 + 0x18);
  }
  if (uVar1 != '\0' && UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(((uintptr_t)pf_module_state+0xcbU));
    return uVar2;
  }
  return 0;
}

#undef DAT_10001a1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

uint recovered_10001a20(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (text[uVar2] != '\0');
  return uVar2;
}


static const unsigned char pf_literal_10001a3c_DAT_10001ab0[] __attribute__((aligned(16)))={0xa8,0x25,0x00,0x00};
#undef DAT_10001ab0
#define DAT_10001ab0 (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001ab0))
static const unsigned char pf_literal_10001a3c_DAT_10001ab4[] __attribute__((aligned(16)))={0x28,0x6d,0x00,0x00};
#undef DAT_10001ab4
#define DAT_10001ab4 (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001ab4))
static const unsigned char pf_literal_10001a3c_DAT_10001ab8[] __attribute__((aligned(16)))={0x38,0x21,0x00,0x00};
#undef DAT_10001ab8
#define DAT_10001ab8 (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001ab8))
static const unsigned char pf_literal_10001a3c_DAT_10001abc[] __attribute__((aligned(16)))={0x10,0x6d,0x00,0x00};
#undef DAT_10001abc
#define DAT_10001abc (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001abc))
static const unsigned char pf_literal_10001a3c_DAT_10001ac0[] __attribute__((aligned(16)))={0xfc,0x6c,0x00,0x00};
#undef DAT_10001ac0
#define DAT_10001ac0 (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001ac0))
static const unsigned char pf_literal_10001a3c_DAT_10001ac4[] __attribute__((aligned(16)))={0x01,0x20,0x00,0x00};
#undef DAT_10001ac4
#define DAT_10001ac4 (*(int *)((uintptr_t)pf_literal_10001a3c_DAT_10001ac4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a3c
 */

void recovered_10001a3c(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10001ab0;
  if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) == '\0') {
    (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))((char *)(((uintptr_t)pf_module_state+0x250U)));
    (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))(text);
    (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))((char *)(((uintptr_t)pf_module_state+0x145U)));
  }
  *(undefined1 *)(((uintptr_t)pf_module_state+0x4c30U)) = 1;
  return;
}

#undef DAT_10001ab0
#undef DAT_10001ab4
#undef DAT_10001ab8
#undef DAT_10001abc
#undef DAT_10001ac0
#undef DAT_10001ac4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ac8
 */

uchar recovered_10001ac8(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  while( true ) {
    cVar1 = *left;
    if ((cVar1 == '\0') || (cVar1 != *right)) break;
    right = right + 1;
    left = left + 1;
  }
  return cVar1 == *right;
}


static const unsigned char pf_literal_10001afc_DAT_10001f04[] __attribute__((aligned(16)))={0x1d,0x22,0x00,0x00};
#undef DAT_10001f04
#define DAT_10001f04 (*(uint32_t *)((uintptr_t)pf_literal_10001afc_DAT_10001f04))
static const unsigned char pf_literal_10001afc_DAT_10001f08[] __attribute__((aligned(16)))={0xa0,0x24,0x00,0x00};
#undef DAT_10001f08
#define DAT_10001f08 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f08))
static const unsigned char pf_literal_10001afc_DAT_10001f0c[] __attribute__((aligned(16)))={0xb5,0x21,0x00,0x00};
#undef DAT_10001f0c
#define DAT_10001f0c (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f0c))
static const unsigned char pf_literal_10001afc_DAT_10001f10[] __attribute__((aligned(16)))={0x97,0x21,0x00,0x00};
#undef DAT_10001f10
#define DAT_10001f10 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f10))
static const unsigned char pf_literal_10001afc_DAT_10001f14[] __attribute__((aligned(16)))={0x2b,0x21,0x00,0x00};
#undef DAT_10001f14
#define DAT_10001f14 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f14))
static const unsigned char pf_literal_10001afc_DAT_10001f18[] __attribute__((aligned(16)))={0x05,0x21,0x00,0x00};
#undef DAT_10001f18
#define DAT_10001f18 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f18))
static const unsigned char pf_literal_10001afc_DAT_10001f1c[] __attribute__((aligned(16)))={0xce,0x20,0x00,0x00};
#undef DAT_10001f1c
#define DAT_10001f1c (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f1c))
static const unsigned char pf_literal_10001afc_DAT_10001f20[] __attribute__((aligned(16)))={0x1a,0x20,0x00,0x00};
#undef DAT_10001f20
#define DAT_10001f20 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f20))
static const unsigned char pf_literal_10001afc_DAT_10001f24[] __attribute__((aligned(16)))={0x8d,0x20,0x00,0x00};
#undef DAT_10001f24
#define DAT_10001f24 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f24))
static const unsigned char pf_literal_10001afc_DAT_10001f28[] __attribute__((aligned(16)))={0x8e,0x1e,0x00,0x00};
#undef DAT_10001f28
#define DAT_10001f28 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f28))
static const unsigned char pf_literal_10001afc_DAT_10001f2c[] __attribute__((aligned(16)))={0x18,0x22,0x00,0x00};
#undef DAT_10001f2c
#define DAT_10001f2c (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f2c))
static const unsigned char pf_literal_10001afc_DAT_10001f30[] __attribute__((aligned(16)))={0xc8,0x21,0x00,0x00};
#undef DAT_10001f30
#define DAT_10001f30 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f30))
static const unsigned char pf_literal_10001afc_DAT_10001f34[] __attribute__((aligned(16)))={0xe5,0x1e,0x00,0x00};
#undef DAT_10001f34
#define DAT_10001f34 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f34))
static const unsigned char pf_literal_10001afc_DAT_10001f38[] __attribute__((aligned(16)))={0xb2,0x1e,0x00,0x00};
#undef DAT_10001f38
#define DAT_10001f38 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f38))
static const unsigned char pf_literal_10001afc_DAT_10001f3c[] __attribute__((aligned(16)))={0x8f,0x1e,0x00,0x00};
#undef DAT_10001f3c
#define DAT_10001f3c (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f3c))
static const unsigned char pf_literal_10001afc_DAT_10001f40[] __attribute__((aligned(16)))={0xa7,0x1e,0x00,0x00};
#undef DAT_10001f40
#define DAT_10001f40 (*(int *)((uintptr_t)pf_literal_10001afc_DAT_10001f40))
#define local_134 (*(char * *)(pf_stack_frame + 60))
#define local_130 (*(int *)(pf_stack_frame + 64))
#define local_2c (*(char * *)(pf_stack_frame + 324))
#define local_28 (*(char * (*)[10])(pf_stack_frame + 328))
#define local_154 (*(char * *)(pf_stack_frame + 28))
#define local_14c (*(char * *)(pf_stack_frame + 36))
#define local_148 (*(char * *)(pf_stack_frame + 40))
#define local_138 (*(char * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001afc
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_10001afc(char *begin,char *end,uint depth)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uchar uVar2;
  char *pcVar3;
  char *end_00;
  int iVar4;
  char *begin_00;
  char *pcVar5;
  int iVar6;
  char *end_01;

  if (0x10 < depth) {
    recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x3ddU)));
    return;
  }
LAB_10001b44:
  if (end <= begin) {
    return;
  }
LAB_10001b50:
  if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0') {
    return;
  }
  uVar1 = recovered_10002c14();
  if (uVar1 == '\0') {
    return;
  }
  pcVar3 = recovered_10002c6c(begin,end);
  local_28[0] = (char *)0x0;
  uVar1 = recovered_10001f44(begin,pcVar3,(char *)(((uintptr_t)pf_module_state+0x3f9U)),local_28);
  if ((uVar1 != '\0') ||
     (uVar2 = recovered_10001f44(begin,pcVar3,(char *)(((uintptr_t)pf_module_state+0x3ffU)),local_28),
     uVar2 != '\0')) {
    begin_00 = end;
    if (pcVar3 < end) {
      begin_00 = pcVar3 + 1;
    }
    end_01 = (char *)0x0;
    iVar6 = 0;
    local_148 = (char *)0x0;
    local_154 = (char *)0x0;
    local_14c = (char *)0x0;
    pcVar5 = begin_00;
LAB_10001c00:
    if (end <= pcVar5) goto LAB_10001d94;
    end_00 = recovered_10002c6c(pcVar5,end);
    local_2c = (char *)0x0;
    uVar2 = recovered_10001f44(pcVar5,end_00,(char *)(((uintptr_t)pf_module_state+0x3ffU)),(char **)0x0);
    if ((uVar2 == '\0') &&
       (uVar2 = recovered_10001f44(pcVar5,end_00,(char *)(((uintptr_t)pf_module_state+0x3f9U)),(char **)0x0),
       uVar2 == '\0')) {
      uVar2 = recovered_10001f44(pcVar5,end_00,(char *)(((uintptr_t)pf_module_state+0x402U)),&local_2c);
      if (uVar2 != '\0') {
        local_138 = local_2c;
        local_134 = end_00;
        uVar2 = recovered_100023f8(&local_138);
        if (uVar2 == '\0') {
          recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x406U)));
          iVar4 = 1;
        }
        else {
          if (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            goto LAB_10001c60;
          }
          local_14c = end;
          if (end_00 < end) {
            local_14c = end_00 + 1;
          }
          iVar4 = 5;
          iVar6 = 0;
          end_01 = pcVar5;
        }
        goto LAB_10001c70;
      }
      if (iVar6 == 0) {
        uVar2 = recovered_10001f44(pcVar5,end_00,(char *)(((uintptr_t)pf_module_state+0x415U)),&local_2c);
        iVar6 = 0;
        if (uVar2 == '\0') goto LAB_10001c60;
        local_138 = local_2c;
        local_134 = end_00;
        if ((uVar1 != '\0' || local_148 != (char *)0x0) ||
           (uVar2 = recovered_100023f8(&local_138), uVar2 == '\0')) {
          pcVar3 = (char *)(((uintptr_t)pf_module_state+0x41aU));
          goto LAB_10001ee8;
        }
        local_154 = end;
        if (end_00 < end) {
          local_154 = end_00 + 1;
        }
        local_148 = pcVar5;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
LAB_10001c60:
    pcVar5 = end;
    if (end_00 < end) {
      pcVar5 = end_00 + 1;
    }
    iVar4 = 0;
LAB_10001c70:
    if (iVar4 != 0) goto LAB_10001d74;
    goto LAB_10001c00;
  }
  uVar1 = recovered_10001f44(begin,pcVar3,(char *)(((uintptr_t)pf_module_state+0x415U)),(char **)0x0);
  if ((uVar1 == '\0') &&
     (uVar1 = recovered_10001f44(begin,pcVar3,(char *)(((uintptr_t)pf_module_state+0x402U)),(char **)0x0),
     uVar1 == '\0')) {
    recovered_10001ff0(begin,pcVar3);
    begin = end;
    if (pcVar3 < end) {
      begin = pcVar3 + 1;
    }
    goto LAB_10001b44;
  }
  pcVar3 = (char *)(((uintptr_t)pf_module_state+0x433U));
  goto LAB_10001ee8;
LAB_10001d74:
  if (iVar4 == 5) goto LAB_10001d94;
  if (iVar4 == 1) {
    return;
  }
  if (end <= begin) {
    return;
  }
  goto LAB_10001b50;
LAB_10001d94:
  if (end_01 == (char *)0x0) {
    pcVar3 = (char *)(((uintptr_t)pf_module_state+0x427U));
LAB_10001ee8:
    recovered_10001a3c(pcVar3);
    return;
  }
  if (local_148 == (char *)0x0) {
    local_148 = end_01;
  }
  while( true ) {
    recovered_10002c8c(&local_138,local_28[0],pcVar3);
    if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) == '\x01') {
      return;
    }
    if (local_138 == (char *)0x0) break;
    iVar6 = ((uintptr_t)pf_module_state+0x6a0U);
    pcVar5 = local_138;
    if (local_138 == (char *)0x3) {
      iVar6 = local_130;
      pcVar5 = local_134;
    }
    if (local_138 == (char *)0x3 && (pcVar5 == (char *)0x0 && iVar6 == 0)) break;
    recovered_10001afc(begin_00,local_148,depth + 1);
    if (((uVar1 == '\0') || (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0')) ||
       (uVar2 = recovered_10002c14(), uVar2 == '\0')) goto LAB_10001e70;
  }
  if (uVar1 == '\0' && local_154 != (char *)0x0) {
    recovered_10001afc(local_154,end_01,depth + 1);
  }
LAB_10001e70:
  begin = local_14c;
  goto LAB_10001b44;
}

#undef DAT_10001f04
#undef DAT_10001f08
#undef DAT_10001f0c
#undef DAT_10001f10
#undef DAT_10001f14
#undef DAT_10001f18
#undef DAT_10001f1c
#undef DAT_10001f20
#undef DAT_10001f24
#undef DAT_10001f28
#undef DAT_10001f2c
#undef DAT_10001f30
#undef DAT_10001f34
#undef DAT_10001f38
#undef DAT_10001f3c
#undef DAT_10001f40
#undef local_134
#undef local_130
#undef local_2c
#undef local_28
#undef local_154
#undef local_14c
#undef local_148
#undef local_138

#define acStack_40 (*(char (*)[64])(pf_stack_frame + 16))
#define local_20 (*(byte * *)(pf_stack_frame + 48))
#define local_1c (*(char * *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f44
 */

uchar recovered_10001f44(char *begin,char *end,char *keyword,char **after)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uchar uVar2;

  local_20 = (byte *)begin;
  local_1c = end;
  uVar1 = recovered_10002330(&local_20,acStack_40,0x20);
  uVar2 = '\0';
  if (((uVar1 != '\0') && (uVar1 = recovered_10001ac8(acStack_40,keyword), uVar1 != '\0')) &&
     ((end <= local_20 ||
      ((*local_20 - 9 < 0x18 && ((1 << (*local_20 - 9 & 0xff) & 0x800011U) != 0)))))) {
    recovered_10002cd0(&local_20);
    uVar2 = '\x01';
    if (after != (char **)0x0) {
      *after = (char *)local_20;
    }
  }
  return uVar2;
}

#undef acStack_40
#undef local_20
#undef local_1c

static const unsigned char pf_literal_10001ff0_DAT_100022f8[] __attribute__((aligned(16)))={0xfc,0x00,0x00,0x00};
#undef DAT_100022f8
#define DAT_100022f8 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_100022f8))
static const unsigned char pf_literal_10001ff0_DAT_100022fc[] __attribute__((aligned(16)))={0xcc,0x1d,0x00,0x00};
#undef DAT_100022fc
#define DAT_100022fc (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_100022fc))
static const unsigned char pf_literal_10001ff0_DAT_10002300[] __attribute__((aligned(16)))={0x4e,0x1b,0x00,0x00};
#undef DAT_10002300
#define DAT_10002300 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002300))
static const unsigned char pf_literal_10001ff0_DAT_10002304[] __attribute__((aligned(16)))={0x66,0x1d,0x00,0x00};
#undef DAT_10002304
#define DAT_10002304 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002304))
static const unsigned char pf_literal_10001ff0_DAT_10002308[] __attribute__((aligned(16)))={0x53,0x1d,0x00,0x00};
#undef DAT_10002308
#define DAT_10002308 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002308))
static const unsigned char pf_literal_10001ff0_DAT_1000230c[] __attribute__((aligned(16)))={0x41,0x1d,0x00,0x00};
#undef DAT_1000230c
#define DAT_1000230c (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_1000230c))
static const unsigned char pf_literal_10001ff0_DAT_10002310[] __attribute__((aligned(16)))={0xa4,0x1e,0x00,0x00};
#undef DAT_10002310
#define DAT_10002310 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002310))
static const unsigned char pf_literal_10001ff0_DAT_10002314[] __attribute__((aligned(16)))={0x97,0x1c,0x00,0x00};
#undef DAT_10002314
#define DAT_10002314 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002314))
static const unsigned char pf_literal_10001ff0_DAT_10002318[] __attribute__((aligned(16)))={0xc0,0x65,0x00,0x00};
#undef DAT_10002318
#define DAT_10002318 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002318))
static const unsigned char pf_literal_10001ff0_DAT_1000231c[] __attribute__((aligned(16)))={0xc5,0x18,0x00,0x00};
#undef DAT_1000231c
#define DAT_1000231c (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_1000231c))
static const unsigned char pf_literal_10001ff0_DAT_10002320[] __attribute__((aligned(16)))={0xeb,0x1b,0x00,0x00};
#undef DAT_10002320
#define DAT_10002320 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002320))
static const unsigned char pf_literal_10001ff0_DAT_10002324[] __attribute__((aligned(16)))={0xe3,0x1c,0x00,0x00};
#undef DAT_10002324
#define DAT_10002324 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002324))
static const unsigned char pf_literal_10001ff0_DAT_10002328[] __attribute__((aligned(16)))={0x68,0x66,0x00,0x00};
#undef DAT_10002328
#define DAT_10002328 (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_10002328))
static const unsigned char pf_literal_10001ff0_DAT_1000232c[] __attribute__((aligned(16)))={0x6d,0x19,0x00,0x00};
#undef DAT_1000232c
#define DAT_1000232c (*(int *)((uintptr_t)pf_literal_10001ff0_DAT_1000232c))
#define local_158 (*(undefined4 *)(pf_stack_frame + 280))
#define local_28 (*(char * *)(pf_stack_frame + 584))
#define local_24 (*(char * *)(pf_stack_frame + 588))
#define auStack_258 (*(undefined4 (*)[150])(pf_stack_frame + 24))
#define uStack_154 (*(undefined4 *)(pf_stack_frame + 284))
#define uStack_150 (*(undefined4 *)(pf_stack_frame + 288))
#define uStack_14c (*(undefined4 *)(pf_stack_frame + 292))
#define auStack_148 (*(undefined4 (*)[82])(pf_stack_frame + 296))
#define acStack_48 (*(char (*)[72])(pf_stack_frame + 552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff0
 */

void recovered_10001ff0(char *begin,char *end)

{
  unsigned char pf_stack_frame[656] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uchar uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;

  local_28 = begin;
  local_24 = end;
  recovered_10002cd0(&local_28);
  uVar3 = recovered_100023f8(&local_28);
  if (uVar3 != '\0') {
    return;
  }
  uVar3 = recovered_10002330(&local_28,acStack_48,0x20);
  if (uVar3 == '\0') {
LAB_100020dc:
    recovered_10002c8c(&local_158,begin,end);
  }
  else {
    recovered_10002cd0(&local_28);
    pcVar11 = local_28;
    if (((local_28 < end) && (*local_28 == '=')) &&
       ((pcVar6 = local_28 + 1, pcVar6 == end || (*pcVar6 != '=')))) {
      recovered_10002c8c(&local_158,pcVar6,end);
      iVar2 = DAT_100022fc;
      iVar7 = ((uintptr_t)pf_module_state+0x6a0U);
      if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0') {
        return;
      }
      pcVar11 = (char *)(((uintptr_t)pf_module_state+0x26a4U));
      iVar9 = *(int *)(((uintptr_t)pf_module_state+0x4c24U));
      for (iVar10 = 0; iVar9 != iVar10; iVar10 = iVar10 + 1) {
        uVar3 = recovered_10001ac8(pcVar11,acStack_48);
        if (uVar3 != '\0') goto LAB_10002280;
        pcVar11 = pcVar11 + 300;
      }
      iVar10 = iVar9;
LAB_10002280:
      if (iVar10 != 0x20) {
        if (iVar10 == iVar9) {
          *(int *)(((uintptr_t)pf_module_state+0x4c24U)) = iVar9 + 1;
          uVar5 = recovered_10001a20(acStack_48);
          recovered_10001864((void *)(iVar9 * 300 + iVar7 + 0x2004),acStack_48,uVar5 + 1);
        }
        recovered_10003728((void *)(iVar10 * 300 + iVar7 + 0x2024),&local_158,0x10c);
        return;
      }
      pcVar11 = (char *)(((uintptr_t)pf_module_state+0x482U));
    }
    else {
      uVar3 = recovered_10001ac8(acStack_48,(char *)(((uintptr_t)pf_module_state+0x496U)));
      if ((((uVar3 == '\0') &&
           (uVar3 = recovered_10001ac8(acStack_48,(char *)(((uintptr_t)pf_module_state+0x49bU))),
           uVar3 == '\0')) &&
          (uVar3 = recovered_10001ac8(acStack_48,(char *)(((uintptr_t)pf_module_state+0x4a1U))), uVar3 == '\0'
          )) || ((pcVar11 != end && (*pcVar11 == '(')))) goto LAB_100020dc;
      uVar3 = recovered_100023f8(&local_28);
      iVar2 = DAT_10002310;
      if (uVar3 != '\0') {
        uVar3 = recovered_10001ac8(acStack_48,(char *)(((uintptr_t)pf_module_state+0x49bU)));
        if (uVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x10002140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))
                    ((char *)(((uintptr_t)pf_module_state+0x145U)));
          return;
        }
        return;
      }
      pcVar11 = (char *)(((uintptr_t)pf_module_state+0x49bU));
      do {
        if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0') {
          return;
        }
        recovered_1000242c(&local_158,&local_28,0);
        if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) != '\0') {
          return;
        }
        recovered_10002958((const unsigned char *)&local_158);
        uVar3 = recovered_10001ac8(acStack_48,pcVar11);
        if (uVar3 == '\0') {
          (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))
                    ((char *)(((uintptr_t)pf_module_state+0x145U)));
        }
        recovered_10002cd0(&local_28);
        uVar3 = recovered_100023f8(&local_28);
        if (uVar3 != '\0') {
          return;
        }
        pcVar6 = local_28 + 1;
        cVar1 = *local_28;
        local_28 = pcVar6;
      } while (cVar1 == ',');
      pcVar11 = (char *)(((uintptr_t)pf_module_state+0x4a3U));
    }
    recovered_10001a3c(pcVar11);
  }
  return;
}

#undef DAT_100022f8
#undef DAT_100022fc
#undef DAT_10002300
#undef DAT_10002304
#undef DAT_10002308
#undef DAT_1000230c
#undef DAT_10002310
#undef DAT_10002314
#undef DAT_10002318
#undef DAT_1000231c
#undef DAT_10002320
#undef DAT_10002324
#undef DAT_10002328
#undef DAT_1000232c
#undef local_158
#undef local_28
#undef local_24
#undef auStack_258
#undef uStack_154
#undef uStack_150
#undef uStack_14c
#undef auStack_148
#undef acStack_48

static const unsigned char pf_literal_10002330_DAT_100023f4[] __attribute__((aligned(16)))={0x26,0x1a,0x00,0x00};
#undef DAT_100023f4
#define DAT_100023f4 (*(int *)((uintptr_t)pf_literal_10002330_DAT_100023f4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002330
 */

uchar recovered_10002330(void *cursor,char *out,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  recovered_10002cd0(cursor);
  pbVar2 = *(byte **)cursor;
  uVar1 = 0;
  pbVar3 = *(byte **)((int)cursor + 4);
  if (pbVar2 != pbVar3) {
    uVar4 = (uint)*pbVar2;
    bVar6 = 0x5e < uVar4;
    bVar5 = uVar4 != 0x5f;
    if (bVar5) {
      uVar4 = (uVar4 & 0xdf) - 0x41;
      bVar6 = 0x18 < uVar4;
    }
    if (!bVar6 || (!bVar5 || uVar4 == 0x19)) {
      while ((pbVar2 < pbVar3 &&
             (((uVar4 = (uint)*pbVar2, uVar4 - 0x30 < 10 || (uVar4 == 0x5f)) ||
              ((uVar4 & 0xdf) - 0x41 < 0x1a))))) {
        if (capacity <= uVar1 + 1) {
          recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x4b2U)));
          return '\0';
        }
        *(byte **)cursor = pbVar2 + 1;
        out[uVar1] = *pbVar2;
        pbVar2 = *(byte **)cursor;
        pbVar3 = *(byte **)((int)cursor + 4);
        uVar1 = uVar1 + 1;
      }
      out[uVar1] = '\0';
      uVar1 = 1;
    }
  }
  return (uchar)uVar1;
}

#undef DAT_100023f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f8
 */

uchar recovered_100023f8(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10002cd0(cursor);
  if (*(char **)cursor == *(char **)((int)cursor + 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = **(char **)cursor == '#';
  }
  return bVar1;
}


static const unsigned char pf_literal_1000242c_DAT_10002940[] __attribute__((aligned(16)))={0x9c,0x1b,0x00,0x00};
#undef DAT_10002940
#define DAT_10002940 (*(uint32_t *)((uintptr_t)pf_literal_1000242c_DAT_10002940))
static const unsigned char pf_literal_1000242c_DAT_10002944[] __attribute__((aligned(16)))={0xa2,0x19,0x00,0x00};
#undef DAT_10002944
#define DAT_10002944 (*(int *)((uintptr_t)pf_literal_1000242c_DAT_10002944))
static const unsigned char pf_literal_1000242c_DAT_10002948[] __attribute__((aligned(16)))={0x1c,0x14,0x00,0x00};
#undef DAT_10002948
#define DAT_10002948 (*(int *)((uintptr_t)pf_literal_1000242c_DAT_10002948))
static const unsigned char pf_literal_1000242c_DAT_1000294c[] __attribute__((aligned(16)))={0x83,0x16,0x00,0x00};
#undef DAT_1000294c
#define DAT_1000294c (*(int *)((uintptr_t)pf_literal_1000242c_DAT_1000294c))
static const unsigned char pf_literal_1000242c_DAT_10002950[] __attribute__((aligned(16)))={0x23,0x15,0x00,0x00};
#undef DAT_10002950
#define DAT_10002950 (*(int *)((uintptr_t)pf_literal_1000242c_DAT_10002950))
static const unsigned char pf_literal_1000242c_DAT_10002954[] __attribute__((aligned(16)))={0x34,0x15,0x00,0x00};
#undef DAT_10002954
#define DAT_10002954 (*(int *)((uintptr_t)pf_literal_1000242c_DAT_10002954))
#define acStack_124 (*(char (*)[292])(pf_stack_frame + 60))
#define local_14c (*(uint *)(pf_stack_frame + 20))
#define local_148 (*(int *)(pf_stack_frame + 24))
#define local_130 (*(int *)(pf_stack_frame + 48))
#define local_12c (*(uint *)(pf_stack_frame + 52))
#define local_128 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000242c
 */

void recovered_1000242c(void *out,void *cursor,uint precedence)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;

  recovered_10003744(out,0,0x10c);
  iVar1 = DAT_10002940;
  uVar4 = *(uint *)(((uintptr_t)pf_module_state+0x4c2cU)) + 1;
  *(uint *)(((uintptr_t)pf_module_state+0x4c2cU)) = uVar4;
  if (uVar4 < 0x11) {
    recovered_10002d14(out,cursor);
    pcVar5 = (char *)((int)out + 0xc);
    puVar6 = (uint *)((int)out + 4);
switchD_10002650_caseD_1:
    if (*(char *)(((uintptr_t)pf_module_state+0x4c30U)) == '\0') {
      recovered_10002cd0(cursor);
      pbVar7 = *(byte **)cursor;
      if (pbVar7 == *(byte **)((int)cursor + 4)) goto LAB_10002484;
      bVar15 = false;
      uVar4 = (uint)*pbVar7;
      if (pbVar7 + 1 < *(byte **)((int)cursor + 4)) {
        bVar15 = pbVar7[1] == 0x3d;
      }
      if ((uVar4 == 0x3d || uVar4 == 0x21) && (bVar15)) {
        iVar10 = 2;
        iVar9 = 3;
      }
      else if ((uVar4 & 0xfd) == 0x3c) {
        iVar10 = 1;
        if (bVar15) {
          iVar10 = 2;
        }
        iVar9 = 4;
      }
      else {
        uVar11 = uVar4 - 0x25 & 0xff;
        if ((10 < uVar11) || ((0x561U >> uVar11 & 1) == 0)) goto LAB_10002484;
        iVar10 = 1;
        iVar9 = *(int *)(((uintptr_t)pf_module_state+0x50U) + uVar11 * 4);
      }
      if (iVar9 < (int)precedence) goto LAB_10002484;
      *(byte **)cursor = pbVar7 + iVar10;
      recovered_1000242c(&local_130,cursor,iVar9 + 1);
      uVar2 = local_128;
      uVar11 = local_12c;
      if (uVar4 != 0x3d && uVar4 != 0x21) {
        if ((uVar4 == 0x2b) && (*(int *)out == 2 && local_130 == 2)) {
          uVar4 = recovered_10001a20(pcVar5);
          uVar11 = recovered_10001a20(acStack_124);
          if (uVar11 + uVar4 < 0x100) {
            recovered_10001864(pcVar5 + uVar4,acStack_124,uVar11 + 1);
          }
          else {
            recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x4e7U)));
          }
          goto switchD_10002650_caseD_1;
        }
        if (*(int *)out != 1 || local_130 != 1) {
          pcVar5 = (char *)(((uintptr_t)pf_module_state+0x4f7U));
          goto LAB_10002480;
        }
        lVar17 = CONCAT44(local_128,local_12c);
        uVar14 = *puVar6;
        uVar13 = *(uint *)((int)out + 8);
        lVar18 = *(longlong *)puVar6;
        uVar8 = uVar4 - 0x25;
        switch((uintptr_t)(uVar8)) {
        case 0:
        case 10:
          if (local_12c != 0 || local_128 != 0) {
            uVar4 = uVar14 | uVar13 ^ 0x80000000;
            bVar15 = uVar4 == 0;
            if (bVar15) {
              uVar4 = local_12c & local_128;
            }
            if (!bVar15 || uVar4 != 0xffffffff) {
              if (uVar8 < 0xb) {
                iVar9 = (int)local_128 >> 0x1f;
                switch((uintptr_t)(uVar8)) {
                case 0:
                  lVar18 = recovered_10003914(*(longlong *)puVar6,CONCAT44(local_128,local_12c));
                  *(longlong *)puVar6 = lVar18;
                  uVar4 = 0;
                  if (lVar18 != 0) {
                    uVar4 = (uint)((ulonglong)lVar18 >> 0x3f);
                  }
                  if (lVar18 != 0 && uVar4 != -iVar9) {
                    *(longlong *)puVar6 = lVar18 + lVar17;
                  }
                  break;
                case 5:
                  goto switchD_10002650_caseD_5;
                case 6:
                  goto switchD_10002650_caseD_6;
                case 8:
                  goto switchD_10002650_caseD_8;
                case 10:
                  lVar17 = recovered_100038c4(*(longlong *)puVar6,CONCAT44(local_128,local_12c));
                  lVar18 = recovered_10003914(lVar18,CONCAT44(uVar2,uVar11));
                  uVar4 = (uint)(lVar18 != 0 && iVar9 != (int)uVar13 >> 0x1f);
                  local_14c = (uint)lVar17;
                  *puVar6 = local_14c - uVar4;
                  local_148 = (int)((ulonglong)lVar17 >> 0x20);
                  *(uint *)((int)out + 8) = local_148 - (uint)(local_14c < uVar4);
                }
              }
              goto switchD_10002650_caseD_1;
            }
          }
          pcVar5 = (char *)(((uintptr_t)pf_module_state+0x514U));
          goto LAB_10002480;
        case 1:
        case 2:
        case 3:
        case 4:
        case 7:
        case 9:
          goto switchD_10002650_caseD_1;
        case 5:
switchD_10002650_caseD_5:
          *puVar6 = (uint)((ulonglong)uVar14 * (ulonglong)local_12c);
          *(uint *)((int)out + 8) =
               local_128 * uVar14 +
               local_12c * uVar13 + (int)((ulonglong)uVar14 * (ulonglong)local_12c >> 0x20);
          goto switchD_10002650_caseD_1;
        case 6:
switchD_10002650_caseD_6:
          *puVar6 = local_12c + uVar14;
          *(uint *)((int)out + 8) = local_128 + uVar13 + (uint)CARRY4(local_12c,uVar14);
          goto switchD_10002650_caseD_1;
        case 8:
switchD_10002650_caseD_8:
          *puVar6 = uVar14 - local_12c;
          *(uint *)((int)out + 8) = uVar13 - (local_128 + (uVar14 < local_12c));
          goto switchD_10002650_caseD_1;
        default:
          if (uVar4 == 0x3c) {
            *(undefined4 *)((int)out + 8) = 0;
            *(undefined4 *)out = 3;
            bVar15 = (int)(local_128 - (uVar13 + (local_12c < uVar14))) < 0 !=
                     (SBORROW4(local_128,uVar13) !=
                     SBORROW4(local_128 - uVar13,(uint)(local_12c < uVar14)));
            bVar16 = SBORROW4(uVar13,local_128) !=
                     SBORROW4(uVar13 - local_128,(uint)(uVar14 < local_12c));
            iVar9 = uVar13 - (local_128 + (uVar14 < local_12c));
          }
          else {
            if (uVar4 != 0x3e) goto switchD_10002650_caseD_1;
            *(undefined4 *)((int)out + 8) = 0;
            *(undefined4 *)out = 3;
            bVar15 = (int)(uVar13 - (local_128 + (uVar14 < local_12c))) < 0 !=
                     (SBORROW4(uVar13,local_128) !=
                     SBORROW4(uVar13 - local_128,(uint)(uVar14 < local_12c)));
            bVar16 = SBORROW4(local_128,uVar13) !=
                     SBORROW4(local_128 - uVar13,(uint)(local_12c < uVar14));
            iVar9 = local_128 - (uVar13 + (local_12c < uVar14));
          }
          bVar16 = iVar9 < 0 == bVar16;
          if (iVar10 == 2) {
            bVar16 = bVar15;
          }
          *puVar6 = (uint)!bVar16;
          goto switchD_10002650_caseD_1;
        }
      }
      uVar11 = 0;
      if (*(int *)out == local_130) {
        if (*(int *)out == 2) {
          bVar3 = recovered_10001ac8(pcVar5,acStack_124);
          uVar11 = (uint)bVar3;
        }
        else {
          uVar11 = (uint)(*puVar6 == local_12c && *(uint *)((int)out + 8) == local_128);
        }
      }
      recovered_10003744(pcVar5,0,0x100);
      *(undefined4 *)((int)out + 8) = 0;
      *(undefined4 *)out = 3;
      *puVar6 = uVar4 == 0x3d ^ uVar11 ^ 1;
      goto switchD_10002650_caseD_1;
    }
  }
  else {
    pcVar5 = (char *)(((uintptr_t)pf_module_state+0x4c6U));
LAB_10002480:
    recovered_10001a3c(pcVar5);
  }
LAB_10002484:
  piVar12 = (int *)(((uintptr_t)pf_module_state+0x4c2cU));
  *piVar12 = *piVar12 + -1;
  return;
}

#undef DAT_10002940
#undef DAT_10002944
#undef DAT_10002948
#undef DAT_1000294c
#undef DAT_10002950
#undef DAT_10002954
#undef acStack_124
#undef local_14c
#undef local_148
#undef local_130
#undef local_12c
#undef local_128

/* Recovered aggregate printer; Pooka's Free Software License. */
void recovered_10002958(const unsigned char *value){
 unsigned tag=*(const unsigned *)value; unsigned long long bits=0;for(unsigned i=0;i<8;i++)bits|=(unsigned long long)value[4+i]<<(8*i);
 void (*log)(const char *)=*(void (**)(const char *))((*(unsigned int *)(pf_module_state+0x4e34))+8);
 if(tag==0){log("nil");return;}if(tag==2){log((const char *)value+12);return;}if(tag==3){log(bits?"true":"false");return;}
 if((long long)bits<0){log("-");bits=0-bits;}char text[24];unsigned n=0;do{text[n++]=(char)('0'+bits%10);bits/=10;}while(bits);for(unsigned i=0;i<n/2;i++){char x=text[i];text[i]=text[n-1-i];text[n-1-i]=x;}text[n]=0;log(text);
}


static const unsigned char pf_literal_10002b00_DAT_10002c0c[] __attribute__((aligned(16)))={0x98,0x14,0x00,0x00};
#undef DAT_10002c0c
#define DAT_10002c0c (*(int *)((uintptr_t)pf_literal_10002b00_DAT_10002c0c))
static const unsigned char pf_literal_10002b00_DAT_10002c10[] __attribute__((aligned(16)))={0xe3,0x13,0x00,0x00};
#undef DAT_10002c10
#define DAT_10002c10 (*(int *)((uintptr_t)pf_literal_10002b00_DAT_10002c10))
#define local_18 (*(char * *)(pf_stack_frame + 296))
#define acStack_11c (*(char (*)[284])(pf_stack_frame + 36))
#define local_128 (*(uint (*)[74])(pf_stack_frame + 24))
#define local_1c (*(char * *)(pf_stack_frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b00
 */

uchar recovered_10002b00(char *input,char *out)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;

  local_1c = input;
  uVar1 = recovered_10001a20(input);
  local_18 = input + uVar1;
  recovered_10002cd0(&local_1c);
  if ((local_1c < local_18) && (*local_1c == '\'' || *local_1c == '\"')) {
    recovered_10002c8c(local_128,local_1c,local_18);
    uVar2 = (uint)*(byte *)(((uintptr_t)pf_module_state+0x4c30U));
    bVar3 = false;
    uVar1 = uVar2;
    if (uVar2 == 0) {
      uVar1 = local_128[0];
    }
    if (uVar2 == 0 && uVar1 == 2) {
      uVar1 = recovered_10001a20(acStack_11c);
      recovered_10001864(out,acStack_11c,uVar1 + 1);
      bVar3 = *out != '\0';
    }
  }
  else {
    for (uVar1 = (int)local_18 - (int)local_1c; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (local_1c[uVar1 - 1] != ' ' && local_1c[uVar1 - 1] != '\t') {
        if (uVar1 < 0x100) {
          recovered_10001864(out,local_1c,uVar1);
          out[uVar1] = '\0';
          return '\x01';
        }
        break;
      }
    }
    recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x683U)));
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_10002c0c
#undef DAT_10002c10
#undef local_18
#undef acStack_11c
#undef local_128
#undef local_1c

static const unsigned char pf_literal_10002c14_DAT_10002c64[] __attribute__((aligned(16)))={0xd4,0x13,0x00,0x00};
#undef DAT_10002c64
#define DAT_10002c64 (*(int *)((uintptr_t)pf_literal_10002c14_DAT_10002c64))
static const unsigned char pf_literal_10002c14_DAT_10002c68[] __attribute__((aligned(16)))={0x5f,0x11,0x00,0x00};
#undef DAT_10002c68
#define DAT_10002c68 (*(int *)((uintptr_t)pf_literal_10002c14_DAT_10002c68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c14
 */

uchar recovered_10002c14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = DAT_10002c64;
  uVar2 = *(uint *)(((uintptr_t)pf_module_state+0x4c28U)) + 1;
  *(uint *)(((uintptr_t)pf_module_state+0x4c28U)) = uVar2;
  if (10000 < uVar2) {
    recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x44fU)));
  }
  return ~*(byte *)(((uintptr_t)pf_module_state+0x4c30U)) & 1;
}

#undef DAT_10002c64
#undef DAT_10002c68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c6c
 */

char * recovered_10002c6c(char *begin,char *end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (end <= begin) {
      return begin;
    }
    if (*begin == '\n') break;
    begin = begin + 1;
  }
  return begin;
}


static const unsigned char pf_literal_10002c8c_DAT_10002ccc[] __attribute__((aligned(16)))={0x05,0x11,0x00,0x00};
#undef DAT_10002ccc
#define DAT_10002ccc (*(int *)((uintptr_t)pf_literal_10002c8c_DAT_10002ccc))
#define local_14 (*(char * *)(pf_stack_frame + 28))
#define pcStack_10 (*(char * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c8c
 */

void recovered_10002c8c(void *out,char *begin,char *end)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  local_14 = begin;
  pcStack_10 = end;
  recovered_1000242c(out,&local_14,0);
  uVar1 = recovered_100023f8(&local_14);
  if (uVar1 == '\0') {
    recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x469U)));
  }
  return;
}

#undef DAT_10002ccc
#undef local_14
#undef pcStack_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd0
 */

void recovered_10002cd0(void *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;

  pbVar1 = *(byte **)cursor;
  while ((pbVar1 < *(byte **)((int)cursor + 4) && (*pbVar1 - 9 < 0x18))) {
    if ((1 << (*pbVar1 - 9 & 0xff) & 0x800011U) == 0) {
      return;
    }
    pbVar1 = pbVar1 + 1;
    *(byte **)cursor = pbVar1;
  }
  return;
}


static const unsigned char pf_literal_10002d14_DAT_10003688[] __attribute__((aligned(16)))={0xfc,0x00,0x00,0x00};
#undef DAT_10003688
#define DAT_10003688 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003688))
static const unsigned char pf_literal_10002d14_DAT_1000368c[] __attribute__((aligned(16)))={0xb5,0x10,0x00,0x00};
#undef DAT_1000368c
#define DAT_1000368c (*(int *)((uintptr_t)pf_literal_10002d14_DAT_1000368c))
static const unsigned char pf_literal_10002d14_DAT_10003690[] __attribute__((aligned(16)))={0xd5,0x10,0x00,0x00};
#undef DAT_10003690
#define DAT_10003690 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003690))
static const unsigned char pf_literal_10002d14_DAT_10003694[] __attribute__((aligned(16)))={0x4e,0x0f,0x00,0x00};
#undef DAT_10003694
#define DAT_10003694 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003694))
static const unsigned char pf_literal_10002d14_DAT_10003698[] __attribute__((aligned(16)))={0x6f,0x0e,0x00,0x00};
#undef DAT_10003698
#define DAT_10003698 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003698))
static const unsigned char pf_literal_10002d14_DAT_1000369c[] __attribute__((aligned(16)))={0xfd,0x0e,0x00,0x00};
#undef DAT_1000369c
#define DAT_1000369c (*(int *)((uintptr_t)pf_literal_10002d14_DAT_1000369c))
static const unsigned char pf_literal_10002d14_DAT_100036a0[] __attribute__((aligned(16)))={0x41,0x0d,0x00,0x00};
#undef DAT_100036a0
#define DAT_100036a0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036a0))
static const unsigned char pf_literal_10002d14_DAT_100036a4[] __attribute__((aligned(16)))={0x9a,0x0d,0x00,0x00};
#undef DAT_100036a4
#define DAT_100036a4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036a4))
static const unsigned char pf_literal_10002d14_DAT_100036a8[] __attribute__((aligned(16)))={0x80,0x0d,0x00,0x00};
#undef DAT_100036a8
#define DAT_100036a8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036a8))
static const unsigned char pf_literal_10002d14_DAT_100036ac[] __attribute__((aligned(16)))={0x0d,0x0f,0x00,0x00};
#undef DAT_100036ac
#define DAT_100036ac (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036ac))
static const unsigned char pf_literal_10002d14_DAT_100036b0[] __attribute__((aligned(16)))={0xf9,0x0e,0x00,0x00};
#undef DAT_100036b0
#define DAT_100036b0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036b0))
static const unsigned char pf_literal_10002d14_DAT_100036b4[] __attribute__((aligned(16)))={0xe2,0x0e,0x00,0x00};
#undef DAT_100036b4
#define DAT_100036b4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036b4))
static const unsigned char pf_literal_10002d14_DAT_100036b8[] __attribute__((aligned(16)))={0x24,0x0e,0x00,0x00};
#undef DAT_100036b8
#define DAT_100036b8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036b8))
static const unsigned char pf_literal_10002d14_DAT_100036bc[] __attribute__((aligned(16)))={0x55,0x07,0x00,0x00};
#undef DAT_100036bc
#define DAT_100036bc (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036bc))
static const unsigned char pf_literal_10002d14_DAT_100036c0[] __attribute__((aligned(16)))={0x8c,0x0c,0x00,0x00};
#undef DAT_100036c0
#define DAT_100036c0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036c0))
static const unsigned char pf_literal_10002d14_DAT_100036c4[] __attribute__((aligned(16)))={0x65,0x0a,0x00,0x00};
#undef DAT_100036c4
#define DAT_100036c4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036c4))
static const unsigned char pf_literal_10002d14_DAT_100036c8[] __attribute__((aligned(16)))={0x8e,0x0a,0x00,0x00};
#undef DAT_100036c8
#define DAT_100036c8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036c8))
static const unsigned char pf_literal_10002d14_DAT_100036cc[] __attribute__((aligned(16)))={0x7b,0x0a,0x00,0x00};
#undef DAT_100036cc
#define DAT_100036cc (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036cc))
static const unsigned char pf_literal_10002d14_DAT_100036d0[] __attribute__((aligned(16)))={0x69,0x0a,0x00,0x00};
#undef DAT_100036d0
#define DAT_100036d0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036d0))
static const unsigned char pf_literal_10002d14_DAT_100036d4[] __attribute__((aligned(16)))={0x3f,0x0a,0x00,0x00};
#undef DAT_100036d4
#define DAT_100036d4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036d4))
static const unsigned char pf_literal_10002d14_DAT_100036d8[] __attribute__((aligned(16)))={0xe5,0x06,0x00,0x00};
#undef DAT_100036d8
#define DAT_100036d8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036d8))
static const unsigned char pf_literal_10002d14_DAT_100036dc[] __attribute__((aligned(16)))={0x80,0x53,0x00,0x00};
#undef DAT_100036dc
#define DAT_100036dc (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036dc))
static const unsigned char pf_literal_10002d14_DAT_100036e0[] __attribute__((aligned(16)))={0xb2,0x0a,0x00,0x00};
#undef DAT_100036e0
#define DAT_100036e0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036e0))
static const unsigned char pf_literal_10002d14_DAT_100036e4[] __attribute__((aligned(16)))={0x0e,0x06,0x00,0x00};
#undef DAT_100036e4
#define DAT_100036e4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036e4))
static const unsigned char pf_literal_10002d14_DAT_100036e8[] __attribute__((aligned(16)))={0x96,0x0a,0x00,0x00};
#undef DAT_100036e8
#define DAT_100036e8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036e8))
static const unsigned char pf_literal_10002d14_DAT_100036ec[] __attribute__((aligned(16)))={0x54,0x52,0x00,0x00};
#undef DAT_100036ec
#define DAT_100036ec (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036ec))
static const unsigned char pf_literal_10002d14_DAT_100036f0[] __attribute__((aligned(16)))={0x4c,0x05,0x00,0x00};
#undef DAT_100036f0
#define DAT_100036f0 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036f0))
static const unsigned char pf_literal_10002d14_DAT_100036f4[] __attribute__((aligned(16)))={0xb2,0x0a,0x00,0x00};
#undef DAT_100036f4
#define DAT_100036f4 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036f4))
static const unsigned char pf_literal_10002d14_DAT_100036f8[] __attribute__((aligned(16)))={0xf8,0x0a,0x00,0x00};
#undef DAT_100036f8
#define DAT_100036f8 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036f8))
static const unsigned char pf_literal_10002d14_DAT_100036fc[] __attribute__((aligned(16)))={0xb0,0x52,0x00,0x00};
#undef DAT_100036fc
#define DAT_100036fc (*(int *)((uintptr_t)pf_literal_10002d14_DAT_100036fc))
static const unsigned char pf_literal_10002d14_DAT_10003700[] __attribute__((aligned(16)))={0x31,0x0a,0x00,0x00};
#undef DAT_10003700
#define DAT_10003700 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003700))
static const unsigned char pf_literal_10002d14_DAT_10003704[] __attribute__((aligned(16)))={0xe4,0x51,0x00,0x00};
#undef DAT_10003704
#define DAT_10003704 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003704))
static const unsigned char pf_literal_10002d14_DAT_10003708[] __attribute__((aligned(16)))={0x75,0x05,0x00,0x00};
#undef DAT_10003708
#define DAT_10003708 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003708))
static const unsigned char pf_literal_10002d14_DAT_1000370c[] __attribute__((aligned(16)))={0x90,0x51,0x00,0x00};
#undef DAT_1000370c
#define DAT_1000370c (*(int *)((uintptr_t)pf_literal_10002d14_DAT_1000370c))
static const unsigned char pf_literal_10002d14_DAT_10003710[] __attribute__((aligned(16)))={0x69,0x05,0x00,0x00};
#undef DAT_10003710
#define DAT_10003710 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003710))
static const unsigned char pf_literal_10002d14_DAT_10003714[] __attribute__((aligned(16)))={0x68,0x51,0x00,0x00};
#undef DAT_10003714
#define DAT_10003714 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003714))
static const unsigned char pf_literal_10002d14_DAT_10003718[] __attribute__((aligned(16)))={0x15,0x04,0x00,0x00};
#undef DAT_10003718
#define DAT_10003718 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003718))
static const unsigned char pf_literal_10002d14_DAT_1000371c[] __attribute__((aligned(16)))={0x34,0x51,0x00,0x00};
#undef DAT_1000371c
#define DAT_1000371c (*(int *)((uintptr_t)pf_literal_10002d14_DAT_1000371c))
static const unsigned char pf_literal_10002d14_DAT_10003720[] __attribute__((aligned(16)))={0x52,0x09,0x00,0x00};
#undef DAT_10003720
#define DAT_10003720 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003720))
static const unsigned char pf_literal_10002d14_DAT_10003724[] __attribute__((aligned(16)))={0x45,0x0c,0x00,0x00};
#undef DAT_10003724
#define DAT_10003724 (*(int *)((uintptr_t)pf_literal_10002d14_DAT_10003724))
#define aiStack_ce0 (*(int (*)[824])(pf_stack_frame + 16))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 2976))
#define local_bdc (*(uint *)(pf_stack_frame + 276))
#define local_bd8 (*(undefined4 * *)(pf_stack_frame + 280))
#define local_bd4 (*(byte * *)(pf_stack_frame + 284))
#define local_bd0 (*(uint *)(pf_stack_frame + 288))
#define local_bcc (*(uint *)(pf_stack_frame + 292))
#define local_bc8 (*(ulonglong (*)[377])(pf_stack_frame + 296))
#define local_abc (*(int (*)[687])(pf_stack_frame + 564))
#define local_ab0 (*(char (*)[2736])(pf_stack_frame + 576))
#define local_9b0 (*(uint (*)[620])(pf_stack_frame + 832))
#define local_130 (*(int *)(pf_stack_frame + 3008))
#define local_12c (*(uint *)(pf_stack_frame + 3012))
#define local_128 (*(int *)(pf_stack_frame + 3016))
#define local_124 (*(byte (*)[292])(pf_stack_frame + 3020))
#define local_24 (*(undefined4 *)(pf_stack_frame + 3276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d14
 */

void recovered_10002d14(void *out,void *cursor)

{
  unsigned char pf_stack_frame[3344] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uchar uVar4;
  byte bVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  ulonglong uVar24;

  recovered_10003744(&local_130,0,0x10c);
  recovered_10002cd0(cursor);
  uVar4 = recovered_10002c14();
  if (uVar4 == '\0') {
LAB_10002dc4:
    pcVar7 = (char *)(((uintptr_t)pf_module_state+0x525U));
LAB_10002dcc:
    recovered_10001a3c(pcVar7);
LAB_10002dd0:
  }
  else {
    pbVar6 = *(byte **)cursor;
    pbVar20 = *(byte **)((int)cursor + 4);
    if (pbVar6 == pbVar20) goto LAB_10002dc4;
    pbVar18 = pbVar6 + 1;
    *(byte **)cursor = pbVar18;
    uVar19 = (uint)*pbVar6;
    if (uVar19 == 0x28) {
      recovered_1000242c(&local_130,cursor,0);
      recovered_10002cd0(cursor);
      pcVar7 = *(char **)cursor;
      if ((pcVar7 == *(char **)((int)cursor + 4)) || (*(char **)cursor = pcVar7 + 1, *pcVar7 != ')')
         ) {
        pcVar7 = (char *)(((uintptr_t)pf_module_state+0x539U));
LAB_10002fe0:
        recovered_10001a3c(pcVar7);
      }
LAB_10002fe4:
      piVar11 = &local_130;
LAB_10002fe8:
      recovered_10003728(out,piVar11,0x10c);
      return;
    }
    if ((uVar19 - 0x21 < 0xd) && ((1 << (uVar19 - 0x21 & 0xff) & 0x1401U) != 0)) {
      recovered_1000242c(&local_130,cursor,7);
      if (uVar19 == 0x21) {
        if (local_130 == 0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (uint)(local_130 == 3 && (local_12c == 0 && local_128 == 0));
        }
        recovered_10003744(local_124,0,0x100);
        local_12c = uVar19;
LAB_10002e60:
        local_128 = 0;
        local_130 = 3;
      }
      else {
        if (local_130 != 1) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x556U));
          goto LAB_10002fe0;
        }
        if (uVar19 == 0x2d) {
          bVar23 = local_12c != 0;
          local_12c = -local_12c;
          local_128 = -(local_128 + (uint)bVar23);
        }
      }
      goto LAB_10002fe4;
    }
    if (uVar19 == 0x27 || uVar19 == 0x22) {
      local_130 = 2;
      iVar22 = 0;
      while ((pbVar18 < pbVar20 && (*pbVar18 != uVar19))) {
        pbVar6 = pbVar18 + 1;
        *(byte **)cursor = pbVar6;
        bVar5 = *pbVar18;
        if ((bVar5 == 0x5c) && (bVar5 = 0x5c, pbVar6 < pbVar20)) {
          bVar2 = *pbVar6;
          uVar16 = (uint)bVar2;
          if (uVar16 == uVar19 || uVar16 == 0x5c) {
            pbVar6 = pbVar18 + 2;
            *(byte **)cursor = pbVar6;
            bVar5 = pbVar18[1];
          }
          else if (uVar19 == 0x22) {
            pbVar6 = pbVar18 + 2;
            *(byte **)cursor = pbVar6;
            if (uVar16 == 0x6e) {
              bVar5 = 10;
            }
            else if (uVar16 == 0x72) {
              bVar5 = 0xd;
            }
            else {
              bVar5 = bVar2;
              if (uVar16 == 0x74) {
                bVar5 = 9;
              }
            }
          }
        }
        if (iVar22 == 0xff) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x4e7U));
          goto LAB_10002fe0;
        }
        local_124[iVar22] = bVar5;
        iVar22 = iVar22 + 1;
        pbVar18 = pbVar6;
      }
      if (pbVar18 == pbVar20) {
        pcVar7 = (char *)(((uintptr_t)pf_module_state+0x581U));
        goto LAB_10002fe0;
      }
      *(byte **)cursor = pbVar18 + 1;
      goto LAB_10002fe4;
    }
    uVar16 = uVar19 - 0x30;
    if ((uVar16 & 0xff) < 10) {
      uVar14 = 10;
      iVar22 = 0;
      if ((uVar19 == 0x30) && (pbVar18 < pbVar20)) {
        uVar16 = 0;
        bVar23 = *pbVar18 == 0x78;
        if (bVar23) {
          pbVar18 = pbVar6 + 2;
          uVar14 = 0x10;
        }
        local_bdc = (uint)bVar23;
        if (bVar23) {
          *(byte **)cursor = pbVar18;
        }
      }
      else {
        local_bdc = 0;
      }
      uVar24 = (ulonglong)(uVar16 & 0xff);
      local_bd8 = out;
      local_bd4 = pbVar20;
      while( true ) {
        pbVar6 = pbVar18 + iVar22;
        if (local_bd4 <= pbVar6) break;
        iVar8 = (int)(char)*pbVar6;
        uVar19 = (uint)*pbVar6;
        if ((iVar8 - 0x30U & 0xff) < 10) {
          uVar16 = uVar19 - 0x30;
        }
        else if ((uVar19 - 0x61 & 0xff) < 6) {
          uVar16 = iVar8 - 0x57;
        }
        else {
          uVar16 = 99;
          if ((uVar19 - 0x41 & 0xff) < 6) {
            uVar16 = iVar8 - 0x37;
          }
        }
        if (uVar14 <= uVar16) break;
        local_bd0 = (uint)(uVar24 >> 0x20);
        local_bcc = (uint)uVar24;
        uVar24 = recovered_1000375c(CONCAT44(0xffffffff,~uVar16),(ulonglong)uVar14);
        uVar19 = (uint)(uVar24 >> 0x20);
        if (uVar19 <= local_bd0 && (uint)(local_bcc <= (uint)uVar24) <= uVar19 - local_bd0) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x595U));
          goto LAB_100031b0;
        }
        *(byte **)cursor = pbVar6 + 1;
        uVar24 = (ulonglong)uVar14 * (ulonglong)local_bcc + CONCAT44(local_bd0 * uVar14,uVar16);
        iVar22 = iVar22 + 1;
      }
      if ((local_bdc & iVar22 == 0) == 1) {
        recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x5aeU)));
      }
      puVar3 = local_bd8;
      recovered_10003744(local_bd8 + 3,0,0x100);
      *(ulonglong *)(puVar3 + 1) = uVar24;
      *puVar3 = 1;
      return;
    }
    *(byte **)cursor = pbVar6;
    uVar4 = recovered_10002330(cursor,acStack_150,0x20);
    if (uVar4 == '\0') {
      pcVar7 = (char *)(((uintptr_t)pf_module_state+0x5c8U));
      goto LAB_10002dcc;
    }
    uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x5d9U)));
    if (uVar4 != '\0') goto LAB_10002dd0;
    bVar5 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x5ddU)));
    if ((bVar5 != 0) ||
       (uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x5e2U))), uVar4 != '\0'))
    {
      local_12c = (uint)bVar5;
      goto LAB_10002e60;
    }
    recovered_10002cd0(cursor);
    iVar22 = DAT_100036b8;
    pcVar7 = *(char **)cursor;
    if ((*(char **)((int)cursor + 4) <= pcVar7) || (*pcVar7 != '(')) {
      iVar22 = *(int *)(((uintptr_t)pf_module_state+0x4c24U)) + 1;
      pcVar7 = (char *)(((uintptr_t)pf_module_state+0x26a4U));
      do {
        pcVar10 = pcVar7;
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x5f9U));
          goto LAB_10002dcc;
        }
        uVar4 = recovered_10001ac8(acStack_150,pcVar10);
        pcVar7 = pcVar10 + 300;
      } while (uVar4 == '\0');
      piVar11 = (int *)(pcVar10 + 0x20);
      goto LAB_10002fe8;
    }
    *(char **)cursor = pcVar7 + 1;
    local_bd8 = out;
    recovered_10002cd0(cursor);
    piVar11 = local_abc;
    iVar8 = 0;
    iVar21 = 1;
    while( true ) {
      pcVar7 = *(char **)cursor;
      pcVar10 = *(char **)((int)cursor + 4);
      if (pcVar10 <= pcVar7) break;
      if ((*pcVar7 == ')') || ((*(byte *)(iVar22 + ((uintptr_t)pf_module_state+0x3e0cU)) & 1) != 0)) goto LAB_1000332c;
      if (iVar21 == 10) {
        pcVar7 = (char *)(((uintptr_t)pf_module_state+0x11dU));
        goto LAB_100031b0;
      }
      recovered_1000242c(local_bc8,cursor,0);
      recovered_10003728(piVar11,local_bc8,0x10c);
      recovered_10002cd0(cursor);
      pcVar7 = *(char **)cursor;
      iVar8 = iVar8 + 1;
      pcVar10 = *(char **)((int)cursor + 4);
      if (pcVar10 <= pcVar7) goto LAB_1000332c;
      if (*pcVar7 != ',') {
        iVar8 = iVar21;
        goto LAB_1000332c;
      }
      *(char **)cursor = pcVar7 + 1;
      recovered_10002cd0(cursor);
      pbVar6 = *(byte **)cursor;
      bVar23 = pbVar6 != *(byte **)((int)cursor + 4);
      if (bVar23) {
        pbVar6 = (byte *)(uint)*pbVar6;
      }
      if (!bVar23 || pbVar6 == (byte *)0x29) {
        recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x5e8U)));
      }
      piVar11 = piVar11 + 0x43;
      iVar21 = iVar21 + 1;
    }
    iVar8 = iVar21 + -1;
LAB_1000332c:
    if ((pcVar7 == pcVar10) || (*(char **)cursor = pcVar7 + 1, *pcVar7 != ')')) {
      pcVar7 = (char *)(((uintptr_t)pf_module_state+0x539U));
LAB_100031b0:
      recovered_10001a3c(pcVar7);
    }
    else if (*(char *)(iVar22 + ((uintptr_t)pf_module_state+0x3e0cU)) != '\x01') {
      uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x496U)));
      if (((uVar4 == '\0') &&
          (uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x49bU))),
          uVar4 == '\0')) &&
         (uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x4a1U))), uVar4 == '\0'
         )) {
        if ((iVar8 == 0) || (local_abc[0] != 2)) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x60aU));
LAB_100034fc:
          recovered_10001a3c(pcVar7);
          goto LAB_10003500;
        }
        uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x106U)));
        if (uVar4 != '\0') {
          puVar17 = local_9b0;
          uVar19 = 0;
          local_24 = 0;
          while( true ) {
            if (iVar8 - 1U == uVar19) {
              uVar19 = (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x20))
                                 (local_ab0,iVar8 - 1U,local_bc8,(ulonglong *)&local_24);
              if (uVar19 == 0) {
                recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x148U)));
              }
              uVar13 = local_24;
              puVar3 = local_bd8;
              recovered_10003744(local_bd8 + 3,0,0x100);
              puVar3[2] = 0;
              puVar3[1] = uVar13;
              *puVar3 = 1;
              return;
            }
            uVar16 = *puVar17 | 2;
            bVar23 = uVar16 != 3;
            if (!bVar23) {
              uVar16 = puVar17[2];
            }
            if (bVar23 || uVar16 != 0) break;
            puVar1 = puVar17 + 1;
            puVar17 = puVar17 + 0x43;
            *(uint *)((int)local_bc8 + uVar19 * 4) = *puVar1;
            uVar19 = uVar19 + 1;
          }
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x62aU));
          goto LAB_100034fc;
        }
        if (iVar8 != 1) {
          pcVar7 = (char *)(((uintptr_t)pf_module_state+0x652U));
          goto LAB_100034fc;
        }
        uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x668U)));
        if (uVar4 == '\0') {
          uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x66dU)));
          if (uVar4 != '\0') {
            pcVar12 = *(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x18);
            goto LAB_100035b0;
          }
          uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x201U)));
          if (uVar4 == '\0') {
            uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x21dU)));
            if (uVar4 != '\0') {
              uVar19 = 1;
              iVar22 = *(int *)(((uintptr_t)pf_module_state+0x4e34U));
              goto LAB_10003628;
            }
            uVar4 = recovered_10001ac8(acStack_150,(char *)(((uintptr_t)pf_module_state+0x101U)));
            if (uVar4 == '\0') {
              recovered_10001a3c((char *)(((uintptr_t)pf_module_state+0x672U)));
              uVar19 = 0;
            }
            else {
              (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x24))(local_ab0);
              uVar19 = 1;
            }
          }
          else {
            uVar19 = 0;
            iVar22 = *(int *)(((uintptr_t)pf_module_state+0x4e34U));
LAB_10003628:
            uVar19 = (**(code **)(iVar22 + 0x1c))(local_ab0,uVar19);
          }
        }
        else {
          pcVar12 = *(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 0x14);
LAB_100035b0:
          uVar19 = (*pcVar12)(local_ab0);
        }
        local_bd8[1] = uVar19;
        *local_bd8 = 1;
        local_bd8[2] = 0;
      }
      else {
        iVar22 = DAT_10003688;
        piVar11 = local_abc;
        pcVar7 = (char *)(((uintptr_t)pf_module_state+0x49bU));
        pcVar10 = (char *)(((uintptr_t)pf_module_state+0x145U));
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          recovered_10002958((const unsigned char *)piVar11);
          uVar4 = recovered_10001ac8(acStack_150,pcVar7);
          if (uVar4 == '\0') {
            (**(code **)(*(int *)(((uintptr_t)pf_module_state+0x4e34U)) + 8))(pcVar10);
          }
          piVar11 = piVar11 + 0x43;
        }
LAB_10003500:
        local_bd8[2] = 0;
        local_bd8[1] = 0;
        *local_bd8 = 1;
      }
      out = local_bd8 + 3;
      uVar13 = 0x100;
      goto LAB_10002ddc;
    }
    out = local_bd8;
  }
  uVar13 = 0x10c;
LAB_10002ddc:
  recovered_10003744(out,0,uVar13);
  return;
}

#undef DAT_10003688
#undef DAT_1000368c
#undef DAT_10003690
#undef DAT_10003694
#undef DAT_10003698
#undef DAT_1000369c
#undef DAT_100036a0
#undef DAT_100036a4
#undef DAT_100036a8
#undef DAT_100036ac
#undef DAT_100036b0
#undef DAT_100036b4
#undef DAT_100036b8
#undef DAT_100036bc
#undef DAT_100036c0
#undef DAT_100036c4
#undef DAT_100036c8
#undef DAT_100036cc
#undef DAT_100036d0
#undef DAT_100036d4
#undef DAT_100036d8
#undef DAT_100036dc
#undef DAT_100036e0
#undef DAT_100036e4
#undef DAT_100036e8
#undef DAT_100036ec
#undef DAT_100036f0
#undef DAT_100036f4
#undef DAT_100036f8
#undef DAT_100036fc
#undef DAT_10003700
#undef DAT_10003704
#undef DAT_10003708
#undef DAT_1000370c
#undef DAT_10003710
#undef DAT_10003714
#undef DAT_10003718
#undef DAT_1000371c
#undef DAT_10003720
#undef DAT_10003724
#undef aiStack_ce0
#undef acStack_150
#undef local_bdc
#undef local_bd8
#undef local_bd4
#undef local_bd0
#undef local_bcc
#undef local_bc8
#undef local_abc
#undef local_ab0
#undef local_9b0
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003728
 */

void recovered_10003728(void *out,void *pf_input,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)pf_input + uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003744
 */

void recovered_10003744(int param_1,undefined1 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = param_2;
  }
  return;
}


static unsigned long long pf_divide(unsigned long long a,unsigned long long b,unsigned long long *rem){unsigned long long q=0,r=0;if(!b){if(rem)*rem=a;return ~0ULL;}for(unsigned i=64;i;i--){unsigned carry=(unsigned)(r>>63);r=(r<<1)|((a>>(i-1))&1);if(carry||r>=b){r-=b;q|=1ULL<<(i-1);}}if(rem)*rem=r;return q;}
unsigned long long recovered_1000375c(unsigned long long a,unsigned long long b){return pf_divide(a,b,0);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003778
 */

undefined8 recovered_10003778(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  uVar10 = 0;
  if (param_3 == 0 && param_4 == 0) {
    uVar9 = 0;
    uVar11 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = 0x3f;
    uVar9 = 0;
    uVar11 = 0;
    uVar8 = 0;
    while (uVar5 != 0xffffffff) {
      uVar4 = uVar9 << 1 | uVar10 >> 0x1f;
      uVar7 = uVar5 - 0x20;
      uVar6 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar6 = param_2 >> (uVar7 & 0xff);
      }
      uVar6 = uVar6 & 1 | uVar10 << 1;
      bVar1 = uVar4 <= param_4;
      bVar2 = (uint)(param_3 <= uVar6) <= uVar4 - param_4;
      bVar3 = 0x7fffffff < uVar9;
      uVar9 = uVar4 - (param_4 + (param_3 > uVar6));
      if (!bVar3 && (bVar1 && bVar2)) {
        uVar9 = uVar4;
      }
      uVar10 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar10 = 1 << (uVar7 & 0xff);
      }
      if (bVar3 || (!bVar1 || !bVar2)) {
        uVar8 = uVar8 | uVar10;
      }
      uVar10 = 1 << (uVar5 & 0xff);
      uVar5 = uVar5 - 1;
      if (-1 < (int)uVar7) {
        uVar10 = 0;
      }
      if (bVar3 || (!bVar1 || !bVar2)) {
        uVar11 = uVar11 | uVar10;
      }
      uVar10 = uVar6 - param_3;
      if (!bVar3 && (bVar1 && bVar2)) {
        uVar10 = uVar6;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = uVar9;
  }
  return CONCAT44(uVar8,uVar11);
}


unsigned long long recovered_10003890(unsigned long long a,unsigned long long b){unsigned long long r;pf_divide(a,b,&r);return r;}


long long recovered_100038c4(long long a,long long b){unsigned long long x=a<0?0-(unsigned long long)a:(unsigned long long)a,y=b<0?0-(unsigned long long)b:(unsigned long long)b,q=pf_divide(x,y,0);return (a<0)!=(b<0)?0-q:q;}


long long recovered_10003914(long long a,long long b){unsigned long long x=a<0?0-(unsigned long long)a:(unsigned long long)a,y=b<0?0-(unsigned long long)b:(unsigned long long)b,r;pf_divide(x,y,&r);return a<0?0-r:r;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000395c
 */

void recovered_1000395c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1000395c);
  (*pcVar1)();
}


/* Freestanding compiler clearing helper; Pooka's Free Software License. */
void __bzero(void *memory,unsigned long size){volatile unsigned char *bytes=memory;while(size--)*bytes++=0;}
void bzero(void *memory,unsigned long size){__bzero(memory,size); }

unsigned long long __udivdi3(unsigned long long a,unsigned long long b){return recovered_1000375c(a,b); }
void *memset(void *p,int value,unsigned long n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)value;return p;}
