#include "functions.h"
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2093ba0
 */

undefined4 recovered_2093ba0(char *in_ECX,int *in_EDX,undefined4 *param_3)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;

  if (in_ECX == (char *)0x0) {
    return 0;
  }
  if (*in_ECX != '[') {
    return 0;
  }
  uVar1 = 0;
  for (iVar8 = 1; (cVar4 = in_ECX[iVar8], cVar4 != '\0' && (cVar4 != ']')); iVar8 = iVar8 + 1) {
    if (uVar1 + 1 < 0x80) {
      local_114[uVar1] = cVar4;
      uVar1 = uVar1 + 1;
    }
  }
  local_114[uVar1] = '\0';
  uVar1 = (uint)(cVar4 == ']');
  iVar7 = 0x7fffffff;
  if (uVar1 + iVar8 < 0x82 && cVar4 == ']') {
    pcVar6 = local_114;
    if (local_114[0] == '[') {
      pcVar6 = local_114 + 1;
    }
    for (iVar2 = -0x7f;
        ((cVar4 = pcVar6[iVar2 + 0x7f], cVar4 != '\0' && (cVar4 != ']')) && (iVar2 != 0));
        iVar2 = iVar2 + 1) {
      local_114[iVar2 + 0xff] = cVar4;
    }
    local_114[iVar2 + 0xff] = '\0';
    iVar7 = 0x7fffffff;
    if (local_114[0] == '[') {
      if (cVar4 != ']') goto LAB_02093d3c;
      cVar4 = local_114[iVar2 + 0x81];
    }
    if ((cVar4 == '\0') && (local_114[0x80] != '\0')) {
      char volume_character = local_114[0x80];
      uVar3 = 1;
      iVar2 = 0;
      iVar7 = -0x7f;
      do {
        if (iVar7 == 0) {
LAB_02093cf6:
          iVar7 = 0x7fffffff;
          goto LAB_02093d3c;
        }
        if (volume_character == '\\') {
          if (iVar2 != 0) {
            uVar3 = uVar3 + 1;
            iVar2 = 0;
            if (uVar3 < 7) goto LAB_02093cae;
          }
          goto LAB_02093cf6;
        }
        if (((9 < (byte)(volume_character - 0x30U)) &&
            (uVar5 = CONCAT11(volume_character,volume_character) & 0xdfff, cVar4 = (char)uVar5,
            0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU))) && ((cVar4 != '_' && (cVar4 != '-'))))
        goto LAB_02093cf6;
        iVar2 = iVar2 + 1;
LAB_02093cae:
        volume_character = local_114[iVar7 + 0x100];
        iVar7 = iVar7 + 1;
      } while (volume_character != '\0');
      iVar7 = 0x7fffffff;
      if (1 < uVar3 && iVar2 != 0) {
        iVar2 = recovered_20d0940(-2,(byte *)(local_114 + 0x80),0x80);
        iVar7 = 0x7fffffff;
        if (-1 < iVar2) {
          iVar7 = iVar2;
        }
      }
    }
  }
LAB_02093d3c:
  if (in_EDX != (int *)0x0) {
    *in_EDX = iVar7;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = in_ECX + iVar8 + uVar1;
  }
  return 1;
}
