/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define UNK_02147ffc (*(uint8_t volatile *)(0x2147ffcU))
#define UNK_02147ffe (*(uint8_t volatile *)(0x2147ffeU))
#define UNK_02148070 (*(uint8_t volatile *)(0x2148070U))


void recovered_205a930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  char *pcVar2;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
      iVar1 = DAT_021468f8;
    } while (iVar1 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  iVar1 = -0x1700;
  do {
    if (((&UNK_02147ffc)[iVar1] == '\x01') && (*(int *)(&UNK_02148070 + iVar1) == in_ECX)) {
      (&UNK_02147ffe)[iVar1] = 1;
    }
    iVar1 = iVar1 + 0xb8;
  } while (iVar1 != 0);
  iVar1 = 0x20;
  pcVar2 = &DAT_021468fc;
  do {
    if (((*pcVar2 == '\x01') && (pcVar2[2] == '\x01')) && (pcVar2[3] == '\0')) {
      recovered_205a9f0(pcVar2);
    }
    pcVar2 = pcVar2 + 0xb8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_021468f8 = 0;
  return;
}
#undef DAT_021468f8
#undef DAT_021468fc
#undef UNK_02147ffc
#undef UNK_02147ffe
#undef UNK_02148070
