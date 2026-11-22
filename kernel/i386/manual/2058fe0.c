/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_021e00c8 (*(uint32_t volatile *)(0x21e00c8U))
#define DAT_021e00cc (*(uint8_t volatile *)(0x21e00ccU))
#define DAT_021e00cd (*(uint8_t volatile *)(0x21e00cdU))
#define UNK_02147ffc (*(uint8_t volatile *)(0x2147ffcU))
#define UNK_02147ffe (*(uint8_t volatile *)(0x2147ffeU))
#define UNK_02148070 (*(uint8_t volatile *)(0x2148070U))


void recovered_2058fe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint in_EDX;
  char *pcVar5;

  cVar1 = DAT_021e00cc;
  if (cVar1 == '\x01') {
    pcVar5 = (char *)DAT_021e00c8;
    bVar2 = DAT_021e00cd;
    if ((pcVar5 != (char *)0x0 & bVar2) == 1) {
      if ((*pcVar5 == '\x01') && ((pcVar5[0x28] & 1U) == 0)) {
        uVar3 = recovered_2058b30(pcVar5,in_EDX);
        if ((char)uVar3 != '\0') {
          return;
        }
        while( true ) {
          iVar4 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
          if (iVar4 == 0) break;
          do {
            iVar4 = DAT_021468f8;
          } while (iVar4 != 0);
        }
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        iVar4 = -0x1700;
        do {
          if (((&UNK_02147ffc)[iVar4] == '\x01') && (*(char **)(&UNK_02148070 + iVar4) == pcVar5)) {
            (&UNK_02147ffe)[iVar4] = 1;
          }
          iVar4 = iVar4 + 0xb8;
        } while (iVar4 != 0);
        iVar4 = 0x20;
        pcVar5 = &DAT_021468fc;
        do {
          if (((*pcVar5 == '\x01') && (pcVar5[2] == '\x01')) && (pcVar5[3] == '\0')) {
            recovered_205a9f0(pcVar5);
          }
          pcVar5 = pcVar5 + 0xb8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_021468f8 = 0;
      }
      DAT_021e00c8 = 0;
      DAT_021e00cc = 0;
      DAT_021e00cd = 0;
    }
  }
  return;
}
#undef DAT_021468f8
#undef DAT_021468fc
#undef DAT_021e00c8
#undef DAT_021e00cc
#undef DAT_021e00cd
#undef UNK_02147ffc
#undef UNK_02147ffe
#undef UNK_02148070
