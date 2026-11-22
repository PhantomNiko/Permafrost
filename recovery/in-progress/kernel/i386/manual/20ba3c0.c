/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_022452a8 (*(uint32_t volatile *)(0x22452a8U))
#define DAT_022452ac (*(uint32_t volatile *)(0x22452acU))
#define DAT_022452b0 (*(uint32_t volatile *)(0x22452b0U))
#define DAT_022452c4 (*(uint32_t volatile *)(0x22452c4U))
#define DAT_022452d0 (*(uint32_t volatile *)(0x22452d0U))


ulonglong recovered_20ba3c0(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uchar uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;

  while( true ) {
    iVar4 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
    if (iVar4 == 0) break;
    do {
      iVar4 = DAT_021468f8;
    } while (iVar4 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  iVar4 = 0;
  if ((*incoming_ecx == '\x01') && (incoming_ecx[3] == '\x01')) {
    iVar4 = *(int *)(incoming_ecx + 0x74);
    incoming_ecx[3] = '\0';
    if ((iVar4 == 0) && (iVar2 = DAT_022452c4, iVar2 != 0)) {
      uVar1 = DAT_022452c4;
      iVar2 = DAT_022452c4;
      DAT_022452c4 = iVar2 + -1;
      uVar1 = DAT_022452c4;
      uVar1 = DAT_022452c4;
      uVar1 = DAT_022452c4;
    }
    if (((char)incoming_edx != '\0') && (iVar2 = DAT_022452d0, iVar2 != 0)) {
      uVar1 = DAT_022452d0;
      iVar2 = DAT_022452d0;
      DAT_022452d0 = iVar2 + -1;
      uVar1 = DAT_022452d0;
      uVar1 = DAT_022452d0;
      uVar1 = DAT_022452d0;
    }
    if (incoming_ecx[2] == '\x01') {
      uVar3 = recovered_2006ec0();
      iVar4 = CONCAT31(extraout_var,uVar3);
      incoming_edx = extraout_EDX;
      if (iVar4 == 0) {
        recovered_205a9f0(incoming_ecx);
        iVar4 = extraout_EAX;
        incoming_edx = extraout_EDX_00;
      }
    }
    else {
      iVar2 = DAT_022452ac;
      *(int *)(incoming_ecx + 8) = iVar2 + 1;
      iVar2 = DAT_022452b0;
      incoming_edx = iVar2 + 1;
      DAT_022452b0 = incoming_edx;
      *(uint *)(incoming_ecx + 0xc) = incoming_edx;
      if (iVar4 == 0) {
        uVar1 = DAT_022452a8;
        iVar4 = DAT_022452a8;
        DAT_022452a8 = iVar4 + 1;
        uVar1 = DAT_022452a8;
        uVar1 = DAT_022452a8;
        uVar1 = DAT_022452a8;
        recovered_2006f80();
        iVar4 = extraout_EAX_00;
        incoming_edx = extraout_EDX_01;
      }
    }
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_021468f8 = 0;
  return CONCAT44(incoming_edx,iVar4);
}
#undef DAT_021468f8
#undef DAT_022452a8
#undef DAT_022452ac
#undef DAT_022452b0
#undef DAT_022452c4
#undef DAT_022452d0
