/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2051d70(char *incoming_ecx,undefined1 *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (incoming_edx == (undefined1 *)0x0) {
    return in_EAX;
  }
  if (incoming_ecx[7] == ' ') {
    if (incoming_ecx[6] != ' ') {
      uVar9 = 6;
      goto LAB_02042af6;
    }
    if (incoming_ecx[5] != ' ') {
      uVar9 = 5;
      goto LAB_02042af6;
    }
    if (incoming_ecx[4] != ' ') {
      uVar9 = 4;
      goto LAB_02042af6;
    }
    if (incoming_ecx[3] != ' ') {
      uVar9 = 3;
      goto LAB_02042af6;
    }
    if (incoming_ecx[2] != ' ') {
      uVar9 = 2;
      goto LAB_02042af6;
    }
    if (incoming_ecx[1] != ' ') {
      uVar9 = 1;
      goto LAB_02042af6;
    }
    uVar3 = (uint)(*incoming_ecx == ' ');
    uVar9 = -uVar3;
  }
  else {
    uVar9 = 7;
LAB_02042af6:
    uVar3 = 0;
  }
  uVar5 = 3;
  if (((incoming_ecx[10] == ' ') && (uVar5 = 2, incoming_ecx[9] == ' ')) &&
     (uVar5 = 1, incoming_ecx[8] == ' ')) {
    bVar2 = false;
    uVar5 = 0;
    uVar8 = 0;
    if ((char)uVar3 != '\0') goto LAB_02042bc2;
LAB_02042b4b:
    if (0xee < uVar9) {
      uVar9 = 0xef;
    }
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      cVar1 = incoming_ecx[uVar7];
      bVar4 = cVar1 + 0xbf;
      uVar3 = (uint)CONCAT11(bVar4,cVar1);
      if (bVar4 < 0x1a) {
        uVar3 = CONCAT11(bVar4,cVar1) | 0x20;
      }
      incoming_edx[uVar7] = (char)uVar3;
      uVar6 = uVar7 + 1;
    } while (uVar9 + 1 != uVar6);
    uVar8 = uVar6;
    if (!bVar2) goto LAB_02042bc2;
    uVar3 = uVar7 + 2;
    incoming_edx[uVar6] = 0x2e;
    uVar8 = uVar3;
    if (0xee < uVar6) goto LAB_02042bc2;
  }
  else {
    bVar2 = true;
    if ((char)uVar3 == '\0') goto LAB_02042b4b;
    *incoming_edx = 0x2e;
    uVar3 = 1;
  }
  uVar9 = 0;
  do {
    bVar4 = incoming_ecx[uVar9 + 8];
    if ((byte)(bVar4 + 0xbf) < 0x1a) {
      bVar4 = bVar4 | 0x20;
    }
    incoming_edx[uVar9 + uVar3] = bVar4;
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar5);
  uVar3 = uVar3 + uVar9;
  uVar8 = uVar3;
LAB_02042bc2:
  incoming_edx[uVar8] = 0;
  return uVar3;
}
