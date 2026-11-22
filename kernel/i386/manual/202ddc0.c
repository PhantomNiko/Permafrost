/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))


bool recovered_202ddc0(undefined4 *in_ECX,undefined1 *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;

  if (in_ECX == (undefined4 *)0x0) {
    if (in_EDX != (undefined1 *)0x0) {
      *in_EDX = 0;
    }
    return false;
  }
  pbVar5 = (byte *)*in_ECX;
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*pbVar5) - 9 < 5 || (*pbVar5 == 0x20)); pbVar5 = pbVar5 + 1) {
    }
  }
  if (in_EDX == (undefined1 *)0x0) {
    return false;
  }
  *in_EDX = 0;
  bVar1 = *pbVar5;
  uVar3 = (uint)bVar1;
  if (uVar3 == 0) {
    return false;
  }
  if ((uVar3 == 0x27) || (uVar3 == 0x22)) {
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar3;
    uVar3 = (uint)bVar1;
  }
  else {
    uVar4 = 0;
  }
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    pbVar5 = pbVar5 + 1;
    uVar2 = 0;
    do {
      if (uVar4 == 0) {
        if ((uVar3 - 9 < 0x18) && ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar4 == (int)(char)uVar3) goto LAB_0202dea6;
      if (uVar2 + 1 < param_3) {
        in_EDX[uVar2] = (char)uVar3;
        uVar2 = uVar2 + 1;
      }
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    pbVar5 = pbVar5 + -1;
  }
LAB_0202dea6:
  in_EDX[uVar2] = 0;
  for (; ((uint)(*pbVar5) - 9 < 5 || (*pbVar5 == 0x20)); pbVar5 = pbVar5 + 1) {
  }
  *in_ECX = pbVar5;
  return uVar2 != 0;
}
#undef DAT_020c5084
