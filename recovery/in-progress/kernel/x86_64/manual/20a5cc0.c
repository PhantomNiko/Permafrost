/* Preserve the validated volume name during prefix scanning.
 * Pooka's Free Software License. */
#include "functions.h"
undefined8 recovered_20a5cc0(char *param_1,int *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[376] __attribute__((aligned(16))) = {0};

  char local_138[312];
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 != '[') {
    return 0;
  }
  uVar2 = 0;
  for (lVar6 = 1; (cVar8 = param_1[lVar6], cVar8 != '\0' && (cVar8 != ']')); lVar6 = lVar6 + 1) {
    if (uVar2 + 1 < 0x80) {
      local_138[uVar2] = cVar8;
      uVar2 = uVar2 + 1;
    }
  }
  local_138[uVar2] = '\0';
  uVar2 = (ulong)(cVar8 == ']');
  iVar4 = 0x7fffffff;
  if (uVar2 + lVar6 < 0x82 && cVar8 == ']') {
    pcVar5 = local_138;
    if (local_138[0] == '[') {
      pcVar5 = local_138 + 1;
    }
    uVar10 = 0;
    for (uVar7 = 3; (cVar8 = pcVar5[uVar7 - 3], cVar8 != '\0' && (cVar8 != ']')); uVar7 = uVar7 + 4)
    {
      local_138[uVar7 + 0x7d] = cVar8;
      cVar8 = pcVar5[uVar7 - 2];
      if ((cVar8 == '\0') || (cVar8 == ']')) {
        uVar7 = uVar7 - 2;
        goto LAB_020a5e07;
      }
      local_138[uVar7 + 0x7e] = cVar8;
      cVar8 = pcVar5[uVar7 - 1];
      if ((cVar8 == '\0') || (cVar8 == ']')) {
        uVar7 = uVar7 - 1;
        goto LAB_020a5e07;
      }
      local_138[uVar7 + 0x7f] = cVar8;
      cVar8 = pcVar5[uVar7];
      if ((cVar8 == '\0') || (cVar8 == ']')) goto LAB_020a5e07;
      if (uVar7 == 0x7f) {
        uVar7 = uVar10 | 3;
        goto LAB_020a5e07;
      }
      uVar10 = uVar10 + 4;
      local_138[uVar7 + 0x80] = cVar8;
    }
    uVar7 = uVar7 - 3;
LAB_020a5e07:
    local_138[uVar7 + 0x80] = '\0';
    iVar4 = 0x7fffffff;
    if (local_138[0] == '[') {
      if (cVar8 != ']') goto LAB_020a5f10;
      cVar8 = local_138[uVar7 + 2];
    }
    if ((cVar8 == '\0') && (local_138[0x80] != 0)) {
      char volume_character = local_138[0x80];
      lVar3 = 1;
      lVar9 = 0;
      uVar7 = 1;
      do {
        if (lVar3 == 0x80) goto LAB_020a5f10;
        if (volume_character == 0x5c) {
          if ((lVar9 == 0) || (uVar7 = uVar7 + 1, 6 < uVar7)) goto LAB_020a5f10;
          lVar9 = 0;
        }
        else {
          if ((((9 < (byte)(volume_character - 0x30U)) &&
               (0x19 < (byte)((volume_character & 0xdfU) + 0xbf))) && (volume_character != 0x5f)) &&
             (volume_character != 0x2d)) goto LAB_020a5f10;
          lVar9 = lVar9 + 1;
        }
        volume_character = local_138[lVar3 + 0x80];
        lVar3 = lVar3 + 1;
      } while (volume_character != 0);
      if (1 < uVar7 && lVar9 != 0) {
        iVar1 = recovered_20e1fa0(-2,(byte *)(local_138 + 0x80),0x80);
        iVar4 = 0x7fffffff;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
      }
    }
  }
LAB_020a5f10:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1 + lVar6 + uVar2;
  }
  return 1;
}
