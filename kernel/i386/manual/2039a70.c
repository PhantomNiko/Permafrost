/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de14c (*(uint32_t volatile *)(0x20de14cU))
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_02148000 (*(uint32_t volatile *)(0x2148000U))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_021e00c8 (*(uint32_t volatile *)(0x21e00c8U))
#define DAT_021e00cc (*(uint8_t volatile *)(0x21e00ccU))
#define DAT_021e00cd (*(uint8_t volatile *)(0x21e00cdU))
#define DAT_022452a8 (*(uint32_t volatile *)(0x22452a8U))
#define DAT_022452b4 (*(uint32_t volatile *)(0x22452b4U))
#define DAT_022452b8 (*(uint8_t volatile *)(0x22452b8U))
#define DAT_022452c4 (*(uint32_t volatile *)(0x22452c4U))
#define UNK_02147ffc (*(uint8_t volatile *)(0x2147ffcU))
#define UNK_02147ffe (*(uint8_t volatile *)(0x2147ffeU))
#define UNK_02147fff (*(uint8_t volatile *)(0x2147fffU))
#define UNK_02148070 (*(uint8_t volatile *)(0x2148070U))
#define str_020c643e (*(char (*)[1])(0x20c643eU))


/* Pooka's Free Software License. */
uint recovered_2039a70(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *incoming_edx;
  int pf_selected_task_slot;
  char cVar1;
  uchar uVar2;
  bool bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  uint incoming_edx_00;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint uVar5;
  char *pcVar6;
  char *incoming_ecx;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;

  uVar2 = recovered_2006ec0();
  uVar5 = 0;
  uVar4 = 0;
  if (CONCAT31(extraout_var,uVar2) < 0x20) {
    uVar4 = CONCAT31(extraout_var,uVar2);
  }
  (&DAT_0214b364)[uVar4 * 0x12] = uVar4;
  iVar7 = __atomic_exchange_n(&(DAT_022452b4),1,__ATOMIC_SEQ_CST);
  if (iVar7 != 0) {
    return 0;
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  cVar1 = DAT_022452b8;
  if (cVar1 == '\x01') goto LAB_02039b76;
  incoming_edx = &DAT_0214b320 + uVar4 * 0x12;
  DAT_022452b8 = 1;
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_022452b4 = 0;
  if (in_ECX == 0) {
LAB_02039b24:
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      iVar7 = DAT_021468f8;
      while (iVar7 != 0) {
        iVar7 = DAT_021468f8;
      }
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    iVar7 = 0x20;
    pcVar6 = &DAT_021468fc;
    do {
      if (((*pcVar6 == '\x01') && (pcVar6[2] == '\x01')) && (pcVar6[3] == '\0')) {
        recovered_205a9f0(pcVar6);
      }
      pcVar6 = pcVar6 + 0xb8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = DAT_022452a8;
    if ((iVar7 != 0) || (iVar7 = DAT_022452c4, iVar7 != 0)) {
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_021468f8 = 0;
      while( true ) {
        iVar7 = __atomic_exchange_n(&(DAT_022452b4),1,__ATOMIC_SEQ_CST);
        if (iVar7 == 0) break;
        do {
          iVar7 = DAT_022452b4;
        } while (iVar7 != 0);
      }
LAB_02039d8d:
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_022452b8 = 0;
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_022452b4 = 0;
      return 0;
    }
    pcVar6 = recovered_20b9e00(0,&pf_selected_task_slot);
    if (pcVar6 == (char *)0x0) {
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_021468f8 = 0;
      while( true ) {
        iVar7 = __atomic_exchange_n(&(DAT_022452b4),1,__ATOMIC_SEQ_CST);
        if (iVar7 == 0) break;
        do {
          iVar7 = DAT_022452b4;
        } while (iVar7 != 0);
      }
      goto LAB_02039d8d;
    }
    bVar3 = recovered_20b9fd0((int)pcVar6);
    bVar8 = in_ECX != 0;
    if (bVar3) {
      in_ECX = (uint)bVar8;
    }
    incoming_ecx = *(char **)(pcVar6 + 0x74);
    if ((in_ECX < 2) && (uVar4 = DAT_020de14c, uVar4 < 2)) {
LAB_02039c9a:
      bVar3 = false;
LAB_02039c9c:
      if (incoming_ecx != (char *)0x0) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_021468f8 = 0;
        uVar4 = recovered_205d360(incoming_ecx,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),bVar8));
        if ((char)uVar4 == '\0') {
          pcVar6[2] = '\x01';
          uVar4 = 0;
          recovered_20ba3c0(pcVar6,0);
        }
        else {
          uVar5 = incoming_edx_00;
          if (bVar3) {
            recovered_20ba4a0((uint)incoming_ecx,incoming_edx_00);
            uVar5 = extraout_EDX_02;
          }
          uVar4 = 0;
          if (in_ECX != 0) {
            uint pf_burst_start = recovered_20081a0();
            do {
              if (pcVar6 == (char *)0x0) {
                while( true ) {
                  iVar7 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
                  if (iVar7 == 0) break;
                  do {
                    iVar7 = DAT_021468f8;
                  } while (iVar7 != 0);
                }
                __atomic_thread_fence(__ATOMIC_SEQ_CST);
                pcVar6 = recovered_20b9e00((int)incoming_ecx,&pf_selected_task_slot);
                __atomic_thread_fence(__ATOMIC_SEQ_CST);
                DAT_021468f8 = 0;
                uVar5 = extraout_EDX_03;
                if (pcVar6 == (char *)0x0) goto LAB_02039e10;
              }
              recovered_20ba160(pcVar6,incoming_edx);
              uVar4 = uVar4 + 1;
              uVar9 = recovered_20ba3c0(pcVar6,0);
              uVar5 = (uint)(uVar9 >> 0x20);
              pcVar6 = (char *)0x0;
              if ((uint)(recovered_20081a0() - pf_burst_start) != 0) {in_ECX=uVar4;break;}
            } while (uVar4 != in_ECX);
            uVar4 = in_ECX;
          }
LAB_02039e10:
          if (bVar3) {
            recovered_20ba510((int)incoming_ecx,uVar5);
          }
          if (*incoming_ecx == '\x01') {
            bVar3 = recovered_205a8a0((uint)incoming_ecx);
            if (bVar3) {
              bVar3 = (incoming_ecx[0x28] & 1U) == 0;
              if (!bVar3) {
                incoming_ecx = (char *)0x0;
              }
              DAT_021e00c8 = incoming_ecx;
              DAT_021e00cc = bVar3;
              DAT_021e00cd = bVar3;
            }
            else {
              recovered_205a830(str_020c643e);
              recovered_205a930();
            }
          }
        }
        recovered_20b9da0();
        return uVar4;
      }
    }
    else if (incoming_ecx != (char *)0x0) {
      iVar7 = -0x1700;
      do {
        if ((((((&UNK_02147ffc)[iVar7] == '\x01') && ((&UNK_02147ffe)[iVar7] == '\0')) &&
             ((&UNK_02147fff)[iVar7] == '\0')) &&
            ((*(char *)((int)&DAT_02148000 + iVar7) == '\0' &&
             (*(char *)((int)&DAT_02148000 + iVar7 + 1) == '\0')))) &&
           (*(char **)(&UNK_02148070 + iVar7) == incoming_ecx)) {
          bVar3 = true;
          goto LAB_02039c9c;
        }
        iVar7 = iVar7 + 0xb8;
      } while (iVar7 != 0);
      goto LAB_02039c9a;
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    DAT_021468f8 = 0;
    recovered_20ba160(pcVar6,incoming_edx);
    recovered_20ba3c0(pcVar6,0);
    uVar5 = 1;
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_022452b4),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      do {
        iVar7 = DAT_022452b4;
      } while (iVar7 != 0);
    }
  }
  else {
    uVar5 = 0;
    uVar4 = extraout_EDX;
    do {
      uVar4 = recovered_20b9c20((int)incoming_edx,uVar4);
      if (uVar4 == 0) {
        if (uVar5 != 0) goto LAB_02039b5b;
        goto LAB_02039b24;
      }
      uVar5 = uVar5 + 1;
      uVar4 = extraout_EDX_00;
    } while (in_ECX != uVar5);
    uVar5 = in_ECX;
LAB_02039b5b:
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_022452b4),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      do {
        iVar7 = DAT_022452b4;
      } while (iVar7 != 0);
    }
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_022452b8 = 0;
LAB_02039b76:
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_022452b4 = 0;
  return uVar5;
}
#undef DAT_020de14c
#undef DAT_021468f8
#undef DAT_021468fc
#undef DAT_02148000
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_021e00c8
#undef DAT_021e00cc
#undef DAT_021e00cd
#undef DAT_022452a8
#undef DAT_022452b4
#undef DAT_022452b8
#undef DAT_022452c4
#undef UNK_02147ffc
#undef UNK_02147ffe
#undef UNK_02147fff
#undef UNK_02148070
#undef str_020c643e
