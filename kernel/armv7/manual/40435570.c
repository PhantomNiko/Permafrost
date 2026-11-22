#include "functions.h"


#undef DAT_405316e8
#undef DAT_405316ec
#undef DAT_405316f0
#undef DAT_405316f4
#undef DAT_405316f8
#undef DAT_40531710

#undef DAT_405418dc
#define DAT_405418dc (*(uint8_t volatile *)(0x405418dcU))
#undef DAT_4054c104
#define DAT_4054c104 (*(uint32_t volatile *)(0x4054c104U))
#undef DAT_4054c310
#define DAT_4054c310 (*(uint32_t volatile *)(0x4054c310U))
#undef DAT_4054c354
#define DAT_4054c354 (*(uint32_t volatile *)(0x4054c354U))
#undef DAT_4055cc3c
#define DAT_4055cc3c (*(uint8_t volatile *)(0x4055cc3cU))
#undef DAT_4064c2c0
#define DAT_4064c2c0 (*(uint32_t volatile *)(0x4064c2c0U))
#undef DAT_4064c2c4
#define DAT_4064c2c4 (*(uint32_t volatile *)(0x4064c2c4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef UNK_405493d0
#define UNK_405493d0 (*(uint8_t volatile *)(0x405493d0U))
#define local_15 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40435570
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint recovered_40435570(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uchar uVar3;
  uint sVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *extraout_r2 = 0;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;

  recovered_40434d38();
  local_15 = 0;
  uVar5 = recovered_404061bc();
  if (0x1f < uVar5) {
    uVar5 = 0;
  }
  puVar8 = &DAT_4054c310 + uVar5 * 0x12;
  puVar10 = (undefined4 *)*puVar8;
  (&DAT_4054c354)[uVar5 * 0x12] = uVar5;
  if (puVar10 != (undefined4 *)0x0) {
    if (puVar10[0x1d] != 0) {
      puVar8 = (undefined4 *)0x0;
      do {
        if (*(char *)(puVar8 + 0x10151e3c) == '\x01') {
          puVar7 = puVar8 + 0x10151e3c;
          uVar5 = (uint)*(byte *)(puVar8 + 0x10151e3d);
          bVar11 = uVar5 == 1;
          if (bVar11) {
            uVar5 = puVar8[0x10151e59];
          }
          if (bVar11 && uVar5 == puVar10[0x1d]) goto LAB_40435604;
        }
        puVar8 = puVar8 + 0x2e;
      } while (puVar8 != (undefined4 *)0x1700);
    }
    puVar7 = puVar10;
LAB_40435604:
    if (puVar7[4] != 0) {
      puVar8 = (undefined4 *)0x0;
      bVar11 = false;
      while( true ) {
        iVar1 = (int)puVar8 * 0x294;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar6 = (uint *)(&UNK_405493d0 + iVar1);
        while( true ) {
          uVar5 = (uint)(byte)puVar6[-10];
          bVar12 = uVar5 == 1;
          if (bVar12) {
            uVar5 = puVar6[-8];
          }
          if (bVar12 && uVar5 == puVar7[4]) break;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar6 = puVar6 + 0xa5;
          if (puVar8 == (undefined4 *)0x11) {
            if (bVar11) {
              return 0;
            }
            goto LAB_40435688;
          }
        }
        if ((*puVar6 & 0xe) == 10) break;
        bVar11 = true;
        if (puVar8 == (undefined4 *)&DataAbort) {
          return 0;
        }
      }
    }
  }
LAB_40435688:
  cVar2 = DAT_405418dc;
  if (cVar2 == '\x01') {
    while (uVar3 = recovered_404120fc(&local_15,(uint)puVar8), uVar3 != '\0') {
      cVar2 = DAT_4055cc3c;
      if ((cVar2 != '\x01') || (DAT_4055cc3c = 0, puVar8 = extraout_r2, local_15 != 10)) {
        uVar5 = (uint)local_15;
        switch((uintptr_t)(uVar5)) {
        case 0xe8bd80f8:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
          halt_baddata();
        }
        if (uVar5 == 0x7f) {
          return 0xe08;
        }
        if (0x5e < uVar5 - 0x20) {
          uVar5 = 0;
        }
        return uVar5;
      }
    }
  }
  uVar5 = DAT_4064c2c0;
  if (uVar5 != 0) {
    uVar9 = 0;
    puVar8 = &DAT_4064c2c4;
    do {
      if ((code *)*puVar8 != (code *)0x0) {
        uVar5 = (*(code *)*puVar8)();
        if (uVar5 != 0) goto LAB_4043574c;
        uVar5 = DAT_4064c2c0;
      }
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x4f;
    } while (uVar9 < uVar5);
    if (uVar5 != 0) {
      return 0;
    }
  }
  sVar4 = recovered_40407e00();
  uVar5 = (uint)sVar4;
  if (uVar5 == 0) {
    return 0;
  }
LAB_4043574c:
  DAT_4054c104 = uVar5 & 0x70000;
  return uVar5;
}
