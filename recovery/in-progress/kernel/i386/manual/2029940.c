/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_0215bc58 (*(uint32_t volatile *)(0x215bc58U))
#define DAT_0215bc5c (*(uint32_t volatile *)(0x215bc5cU))


undefined4 * recovered_2029940(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uchar uVar2;
  undefined4 *puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;

  iVar8 = in_ECX + (in_ECX == 0);
  puVar3 = (undefined4 *)0x0;
  if (in_ECX < 0xffffffec) {
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_0215bc58),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      do {
        iVar7 = DAT_0215bc58;
      } while (iVar7 != 0);
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    puVar3 = recovered_2001650(iVar8 + 0x14);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = recovered_2006ec0();
      uVar6 = 0;
      uVar4 = 0;
      if (CONCAT31(extraout_var,uVar2) < 0x20) {
        uVar4 = CONCAT31(extraout_var,uVar2);
      }
      (&DAT_0214b364)[uVar4 * 0x12] = uVar4;
      pcVar5 = (char *)(&DAT_0214b320)[uVar4 * 0x12];
      if (pcVar5 != (char *)0x0) {
        if (*(int *)(pcVar5 + 0x74) != 0) {
          iVar7 = 0x20;
          pcVar9 = &DAT_021468fc;
          do {
            if (((*pcVar9 == '\x01') && (pcVar9[4] == '\x01')) &&
               (*(int *)(pcVar9 + 0x74) == *(int *)(pcVar5 + 0x74))) {
              pcVar5 = pcVar9;
              break;
            }
            pcVar9 = pcVar9 + 0xb8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        uVar6 = *(undefined4 *)(pcVar5 + 0x10);
      }
      puVar3[2] = uVar6;
      puVar3[3] = 0x574d414c;
      puVar3[4] = iVar8;
      *puVar3 = 0;
      puVar1 = (undefined4 *)DAT_0215bc5c;
      puVar3[1] = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
      }
      DAT_0215bc5c = puVar3;
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    DAT_0215bc58 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = puVar3 + 5;
    }
  }
  return puVar3;
}
#undef DAT_021468fc
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_0215bc58
#undef DAT_0215bc5c
