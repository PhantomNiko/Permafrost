#include "functions.h"
/* Keep the native validator character separate from the volume-name buffer. */
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4049e624
 */

undefined4 recovered_4049e624(char *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  char local_124 [128];
  byte local_a4 [132];

  if (param_1 == (char *)0x0) {
    return 0;
  }
  pcVar5 = local_124;
  if (*param_1 != '[') {
    return 0;
  }
  iVar3 = 1;
  uVar7 = 0;
  while (cVar1 = param_1[iVar3], cVar1 != '\0' && cVar1 != ']') {
    iVar3 = iVar3 + 1;
    if (uVar7 + 1 < 0x80) {
      local_124[uVar7] = cVar1;
      uVar7 = uVar7 + 1;
    }
  }
  uVar6 = 0x7fffffff;
  local_124[uVar7] = '\0';
  if ((cVar1 == ']') && (iVar3 + 1U < 0x82)) {
    iVar2 = 0;
    if (local_124[0] == '[') {
      pcVar5 = local_124 + 1;
    }
    for (; (bVar4 = pcVar5[iVar2], bVar4 != 0 && (bVar4 != 0x5d && iVar2 != 0x7f));
        iVar2 = iVar2 + 1) {
      local_a4[iVar2] = bVar4;
    }
    local_a4[iVar2] = 0;
    if (local_124[0] == '[') {
      uVar6 = 0x7fffffff;
      if (bVar4 != 0x5d) goto LAB_4049e7f8;
      bVar4 = local_124[iVar2 + 2];
    }
    uVar6 = 0x7fffffff;
    if ((bVar4 == 0) && (uVar6 = 0x7fffffff, local_a4[0] != 0)) {
      byte pf_volume_character = local_a4[0];
      iVar8 = 0;
      iVar2 = 1;
      uVar7 = 1;
      do {
        if (iVar2 == 0x80) goto LAB_4049e7f8;
        if (pf_volume_character == 0x5c) {
          if (iVar8 == 0) goto LAB_4049e7f8;
          uVar7 = uVar7 + 1;
          iVar8 = 0;
          if (6 < uVar7) goto LAB_4049e7f8;
        }
        else {
          bVar9 = 9 < (byte)(pf_volume_character - 0x30);
          bVar4 = pf_volume_character;
          if (bVar9) {
            bVar4 = (pf_volume_character & 0xdf) + 0xbf;
          }
          if ((bVar9 && 0x19 < bVar4) && (pf_volume_character != 0x5f && pf_volume_character != 0x2d))
          goto LAB_4049e7f8;
          iVar8 = iVar8 + 1;
        }
        pf_volume_character = local_a4[iVar2];
        iVar2 = iVar2 + 1;
      } while (pf_volume_character != 0);
      if (((iVar8 != 0) && (1 < uVar7)) &&
         (uVar6 = recovered_404e01c8(0xfffffffe,local_a4,0x80), 0x7fffffff < uVar6)) {
        uVar6 = 0x7fffffff;
      }
    }
  }
LAB_4049e7f8:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar6;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1 + iVar3 + (uint)(cVar1 == ']');
  }
  return 1;
}

