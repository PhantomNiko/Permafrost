/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ec4f0 (*(uint32_t volatile *)(0x21ec4f0U))
#define DAT_021ec533 (*(uint8_t volatile *)(0x21ec533U))
#define DAT_021ec534 (*(uint8_t volatile *)(0x21ec534U))
#define DAT_021ec624 (*(uint8_t volatile *)(0x21ec624U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(char * *)(frame + 28))


uint recovered_206e5a0(char *in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  char *left;

  local_18 = 0;
  uVar7 = 0xffffffff;
  if ((in_ECX != (char *)0x0) && (*in_ECX != '\0')) {
    uVar2 = recovered_206e6c0((uint)in_ECX,&local_18);
    uVar3 = DAT_02238eec;
    if ((local_18 != 0 & (byte)uVar2) == 1) {
      if (uVar3 != 0) {
        uVar7 = 0;
        puVar8 = &DAT_021ec4f0;
        do {
          if (((char)puVar8[-1] == '\x01') && (*puVar8 == local_18)) {
            return uVar7;
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 0x4ca;
        } while (uVar3 != uVar7);
LAB_0206e627:
        uVar7 = 0;
        pcVar9 = &DAT_021ec534;
        local_14 = in_ECX;
LAB_0206e640:
        iVar6 = uVar7 * 0x1328;
        if ((&DAT_021ec4ec)[iVar6] != '\x01') goto LAB_0206e635;
        iVar4 = recovered_20022a0(&DAT_021ec624 + iVar6,local_14);
        if (iVar4 != 0) {
          left = &DAT_021ec533 + iVar6;
          pcVar5 = pcVar9;
          do {
            cVar1 = pcVar5[-1];
            if ((cVar1 == '/') || (cVar1 == '\\')) {
              left = pcVar5;
            }
            else if (cVar1 == '\0') goto code_r0x0206e695;
            pcVar5 = pcVar5 + 1;
          } while( true );
        }
      }
    }
    else if (uVar3 != 0) goto LAB_0206e627;
  }
  return uVar7;
code_r0x0206e695:
  iVar6 = recovered_20022a0(left,local_14);
  if (iVar6 == 0) {
    return uVar7;
  }
  uVar3 = DAT_02238eec;
LAB_0206e635:
  uVar7 = uVar7 + 1;
  pcVar9 = pcVar9 + 0x1328;
  if (uVar3 <= uVar7) {
    return 0xffffffff;
  }
  goto LAB_0206e640;
}
#undef DAT_021ec4ec
#undef DAT_021ec4f0
#undef DAT_021ec533
#undef DAT_021ec534
#undef DAT_021ec624
#undef DAT_02238eec
#undef local_18
#undef local_14
