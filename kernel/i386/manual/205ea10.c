/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_0214690c (*(uint32_t volatile *)(0x214690cU))
#define DAT_021ec4e0 (*(uint32_t volatile *)(0x21ec4e0U))


void recovered_205ea10(uint process)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  uVar2 = DAT_021ec4e0;
  DAT_021ec4e0 = process;
  if (process == 0) {
LAB_0205eac4:
    DAT_021ec4e0 = uVar2;
    return;
  }
  do {
    while( true ) {
      iVar1 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
      if (iVar1 == 0) break;
      do {
        iVar1 = DAT_021468f8;
      } while (iVar1 != 0);
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    uVar4 = 0;
    bVar5 = true;
    puVar3 = &DAT_0214690c;
    do {
      if (((char)puVar3[-4] == '\x01') && (*puVar3 == process)) break;
      bVar5 = uVar4 < 0x1f;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x2e;
    } while (uVar4 != 0x20);
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    DAT_021468f8 = 0;
    if (!bVar5) goto LAB_0205eac4;
    uVar4 = DAT_020de164;
    if (0xfff < uVar4) {
      uVar4 = 0x1000;
    }
    recovered_2039a70(uVar4);
  } while( true );
}
#undef DAT_020de164
#undef DAT_021468f8
#undef DAT_0214690c
#undef DAT_021ec4e0
