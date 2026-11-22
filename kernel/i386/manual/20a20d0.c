/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148044 (*(uint32_t volatile *)(0x2148044U))
#define DAT_02148048 (*(uint32_t volatile *)(0x2148048U))
#define DAT_02148204 (*(uint32_t volatile *)(0x2148204U))
#define DAT_02148208 (*(uint32_t volatile *)(0x2148208U))
#define DAT_02148214 (*(uint32_t volatile *)(0x2148214U))
#define DAT_02148218 (*(uint32_t volatile *)(0x2148218U))
#define local_14 (*(uint *)(frame + 28))


undefined4 recovered_20a20d0(int in_ECX,undefined4 *in_EDX,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;

  if (in_EDX != (undefined4 *)0x0) {
    *in_EDX = 0;
  }
  if ((in_ECX != 0) && (uVar3 = recovered_20081a0(), 0 < (int)(param_3 - uVar3))) {
    do {
      local_14 = 0;
      recovered_2026f10();
      cVar1 = DAT_02148040;
      if ((cVar1 == '\x01') && (pcVar2 = (code *)DAT_02148048, pcVar2 != (code *)0x0)) {
        while( true ) {
          iVar4 = __atomic_exchange_n(&(DAT_02148044),1,__ATOMIC_SEQ_CST);
          if (iVar4 == 0) break;
          do {
            iVar4 = DAT_02148044;
          } while (iVar4 != 0);
        }
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        iVar4 = (*pcVar2)(in_ECX,0x800,&local_14);
        if (iVar4 == 0) {
          __atomic_thread_fence(__ATOMIC_SEQ_CST);
          DAT_02148044 = 0;
        }
        else {
          uVar3 = DAT_02148204;
          uVar5 = DAT_02148204;
          iVar4 = DAT_02148204;
          DAT_02148204 = iVar4 + 1;
          uVar5 = DAT_02148204;
          uVar5 = DAT_02148204;
          uVar5 = DAT_02148204;
          uVar5 = DAT_02148208;
          uVar5 = DAT_02148208;
          iVar4 = DAT_02148208;
          DAT_02148208 = iVar4 + (uint)(0xfffffffe < uVar3);
          uVar5 = DAT_02148208;
          uVar5 = DAT_02148208;
          uVar5 = DAT_02148208;
          uVar3 = DAT_02148214;
          uVar5 = DAT_02148214;
          iVar4 = DAT_02148214;
          DAT_02148214 = iVar4 + local_14;
          uVar5 = DAT_02148214;
          uVar5 = DAT_02148214;
          uVar5 = DAT_02148214;
          uVar5 = DAT_02148218;
          uVar5 = DAT_02148218;
          iVar4 = DAT_02148218;
          DAT_02148218 = iVar4 + (uint)CARRY4(uVar3,local_14);
          uVar5 = DAT_02148218;
          uVar5 = DAT_02148218;
          uVar5 = DAT_02148218;
          __atomic_thread_fence(__ATOMIC_SEQ_CST);
          DAT_02148044 = 0;
          if (0xd < local_14) {
            uVar5 = CONCAT31((int3)(local_14 >> 8),1);
            if (in_EDX == (undefined4 *)0x0) {
              return uVar5;
            }
            *in_EDX = local_14;
            return uVar5;
          }
        }
      }
      recovered_2026f10();
      recovered_200afa0(1000);
      uVar3 = recovered_20081a0();
    } while (0 < (int)(param_3 - uVar3));
  }
  return 0;
}
#undef DAT_02148040
#undef DAT_02148044
#undef DAT_02148048
#undef DAT_02148204
#undef DAT_02148208
#undef DAT_02148214
#undef DAT_02148218
#undef local_14
