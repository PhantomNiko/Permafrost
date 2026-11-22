/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_0214800c (*(uint32_t volatile *)(0x214800cU))
#define UNK_02147ffc (*(uint8_t volatile *)(0x2147ffcU))
#define UNK_02147ffe (*(uint8_t volatile *)(0x2147ffeU))
#define UNK_02148070 (*(uint8_t volatile *)(0x2148070U))


undefined4 recovered_203c1c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  recovered_2026f10();
  if (param_1 != 0) {
    while( true ) {
      iVar4 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
      if (iVar4 == 0) break;
      do {
        iVar4 = DAT_021468f8;
      } while (iVar4 != 0);
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    uVar3 = 0;
    bVar5 = true;
    pcVar1 = &DAT_021468fc;
    do {
      if (((*pcVar1 == '\x01') && (pcVar1[4] == '\x01')) && (*(int *)(pcVar1 + 0x10) == param_1)) {
        if (bVar5) {
          iVar4 = *(int *)(pcVar1 + 0x74);
          iVar2 = -0x1700;
          goto LAB_0203c26f;
        }
        break;
      }
      bVar5 = uVar3 < 0x1f;
      uVar3 = uVar3 + 1;
      pcVar1 = pcVar1 + 0xb8;
    } while (uVar3 != 0x20);
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    DAT_021468f8 = 0;
  }
  return 0;
LAB_0203c26f:
  if ((&UNK_02147ffc)[iVar2] == '\x01') {
    if (iVar4 == 0) {
      if (*(int *)((int)&DAT_0214800c + iVar2) == param_1) goto LAB_0203c260;
    }
    else if (*(int *)(&UNK_02148070 + iVar2) == iVar4) {
LAB_0203c260:
      (&UNK_02147ffe)[iVar2] = 1;
    }
  }
  iVar2 = iVar2 + 0xb8;
  if (iVar2 == 0) {
    iVar4 = 0x20;
    pcVar1 = &DAT_021468fc;
    do {
      if (((*pcVar1 == '\x01') && (pcVar1[2] == '\x01')) && (pcVar1[3] == '\0')) {
        recovered_205a9f0(pcVar1);
      }
      pcVar1 = pcVar1 + 0xb8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    DAT_021468f8 = 0;
    recovered_2006f80();
    return 1;
  }
  goto LAB_0203c26f;
}
#undef DAT_021468f8
#undef DAT_021468fc
#undef DAT_0214800c
#undef UNK_02147ffc
#undef UNK_02147ffe
#undef UNK_02148070
