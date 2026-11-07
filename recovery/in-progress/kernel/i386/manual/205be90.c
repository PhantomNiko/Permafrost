/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c1db8 (*(uint32_t volatile *)(0x21e0250U))
#define DAT_020c1dbc (*(uint32_t volatile *)(0x21e0254U))
int recovered_205be90(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;

  uVar2 = DAT_020c1db8;
  if (uVar2 == 0) {
    return 0;
  }
  iVar5 = DAT_020c1dbc;
  uVar7 = 0;
  iVar10 = 0x5d6;
  iVar8 = 0x4e5;
LAB_02044e3c:
  if (incoming_ecx != (char *)0x0) {
    iVar11 = uVar7 * 0x434c + iVar5;
    pcVar9 = (char *)(iVar11 + 0x5d5);
    iVar3 = recovered_20022a0(pcVar9,incoming_ecx);
    if (iVar3 == 0) {
      return iVar11;
    }
    pcVar4 = (char *)(iVar10 + iVar5);
    do {
      cVar1 = pcVar4[-1];
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        pcVar9 = pcVar4;
      }
      else if (cVar1 == '\0') goto code_r0x02044e95;
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
  goto LAB_02044e27;
code_r0x02044e95:
  pcVar4 = incoming_ecx + 1;
  pcVar6 = incoming_ecx;
  do {
    cVar1 = pcVar4[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar6 = pcVar4;
    }
    else if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while( true );
  iVar3 = recovered_20022a0(pcVar9,pcVar6);
  if (iVar3 == 0) {
    return iVar11;
  }
  pcVar9 = (char *)(iVar11 + 0x4e4);
  iVar3 = recovered_20022a0(pcVar9,incoming_ecx);
  if (iVar3 == 0) {
    return iVar11;
  }
  pcVar4 = (char *)(iVar5 + iVar8);
  do {
    cVar1 = pcVar4[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar9 = pcVar4;
    }
    else if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while( true );
  pcVar4 = incoming_ecx + 1;
  pcVar6 = incoming_ecx;
  do {
    cVar1 = pcVar4[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar6 = pcVar4;
    }
    else if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while( true );
  iVar5 = recovered_20022a0(pcVar9,pcVar6);
  if (iVar5 == 0) {
    return iVar11;
  }
  iVar5 = DAT_020c1dbc;
  uVar2 = DAT_020c1db8;
LAB_02044e27:
  uVar7 = uVar7 + 1;
  iVar10 = iVar10 + 0x434c;
  iVar8 = iVar8 + 0x434c;
  if (uVar2 <= uVar7) {
    return 0;
  }
  goto LAB_02044e3c;
}
