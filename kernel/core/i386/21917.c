#include "functions.h"
#undef DAT_00045f4c
#define DAT_00045f4c (*(uint8_t *)(0x45f4cU))
#undef _DAT_00045f4c
#define _DAT_00045f4c (*(float *)(0x45f4cU))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21917
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21917(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[68];

  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;

  pbVar2 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar2 = pbVar2 + 1;
  }
  pbVar2 = pbVar2 + ((bVar1 - 0x2b & 0xfd) == 0);
  fVar7 = (float10)0;
  bVar4 = false;
  for (; bVar3 = *pbVar2, (byte)(bVar3 - 0x30) < 10; pbVar2 = pbVar2 + 1) {
    fVar7 = fVar7 * (float10)_DAT_00045f4c + (float10)(int)(bVar3 - 0x30);
    bVar4 = true;
  }
  fVar9 = (float10)1;
  fVar8 = (float10)0;
  if (bVar3 == 0x2e) {
    fVar9 = (float10)1;
    fVar8 = (float10)0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
      if (9 < (byte)(bVar3 - 0x30)) break;
      fVar8 = fVar8 * (float10)_DAT_00045f4c + (float10)(int)(bVar3 - 0x30);
      fVar9 = fVar9 * (float10)_DAT_00045f4c;
      bVar4 = true;
    }
  }
  if (bVar4) {
    fVar7 = fVar8 / fVar9 + fVar7;
    if ((bVar3 | 0x20) == 0x65) {
      if (pbVar2[1] == 0x2b) {
        local_14 = 1;
        pbVar6 = pbVar2 + 2;
      }
      else if (pbVar2[1] == 0x2d) {
        pbVar6 = pbVar2 + 2;
        local_14 = -1;
      }
      else {
        local_14 = 1;
        pbVar6 = pbVar2 + 1;
      }
      iVar5 = 0;
      bVar4 = false;
      for (; (byte)(*pbVar6 - 0x30) < 10; pbVar6 = pbVar6 + 1) {
        iVar5 = iVar5 * 10 + (uint)*pbVar6 + -0x30;
        bVar4 = true;
      }
      if (bVar4) {
        fVar7 = recovered_21546((double)fVar7,iVar5 * local_14);
        pbVar2 = pbVar6;
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pbVar2;
    }
    if (bVar1 == 0x2d) {
      fVar7 = -fVar7;
    }
  }
  else {
    fVar7 = (float10)0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return fVar7;
}
