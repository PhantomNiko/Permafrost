/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d77d8 (*(uint64_t volatile *)(0x220c4c0U))
#define DAT_020d77e0 (*(uint64_t volatile *)(0x220c4c8U))
ulonglong recovered_207a600(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulonglong uVar9;
  long lVar10;
  char *pcVar11;

  uVar3 = DAT_020d77d8;
  if (uVar3 == 0) {
    return 0;
  }
  lVar10 = DAT_020d77e0;
  lVar8 = 0x5f2;
  lVar4 = 0x501;
  uVar5 = 0;
LAB_02052c40:
  if (param_1 != 0) {
    uVar9 = uVar5 * 0x4370 + lVar10;
    pcVar7 = (char *)(uVar9 + 0x5f1);
    iVar2 = recovered_2002eb0(pcVar7,(char *)param_1);
    if (iVar2 == 0) {
      return uVar9;
    }
    pcVar11 = (char *)(lVar10 + lVar8);
    do {
      cVar1 = pcVar11[-1];
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        pcVar7 = pcVar11;
      }
      else if (cVar1 == '\0') goto code_r0x02052c98;
      pcVar11 = pcVar11 + 1;
    } while( true );
  }
  goto LAB_02052c26;
code_r0x02052c98:
  pcVar11 = (char *)(param_1 + 1);
  pcVar6 = (char *)param_1;
  do {
    cVar1 = pcVar11[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar6 = pcVar11;
    }
    else if (cVar1 == '\0') break;
    pcVar11 = pcVar11 + 1;
  } while( true );
  iVar2 = recovered_2002eb0(pcVar7,pcVar6);
  if (iVar2 == 0) {
    return uVar9;
  }
  pcVar7 = (char *)(uVar9 + 0x500);
  iVar2 = recovered_2002eb0(pcVar7,(char *)param_1);
  if (iVar2 == 0) {
    return uVar9;
  }
  pcVar11 = (char *)(lVar10 + lVar4);
  do {
    cVar1 = pcVar11[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar7 = pcVar11;
    }
    else if (cVar1 == '\0') break;
    pcVar11 = pcVar11 + 1;
  } while( true );
  pcVar11 = (char *)(param_1 + 1);
  pcVar6 = (char *)param_1;
  do {
    cVar1 = pcVar11[-1];
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      pcVar6 = pcVar11;
    }
    else if (cVar1 == '\0') break;
    pcVar11 = pcVar11 + 1;
  } while( true );
  iVar2 = recovered_2002eb0(pcVar7,pcVar6);
  if (iVar2 == 0) {
    return uVar9;
  }
  lVar10 = DAT_020d77e0;
  uVar3 = DAT_020d77d8;
LAB_02052c26:
  uVar5 = uVar5 + 1;
  lVar8 = lVar8 + 0x4370;
  lVar4 = lVar4 + 0x4370;
  if (uVar3 <= uVar5) {
    return 0;
  }
  goto LAB_02052c40;
}
