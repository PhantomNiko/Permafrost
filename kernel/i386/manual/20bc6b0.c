/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c4fe1 (*(uint8_t *)(0x20c4fe1U))
#define local_144 (*(undefined1 *)(frame + 28))
#define auStack_55 (*(undefined1 (*)[6])(frame + 267))
#define local_141 (*(undefined2 *)(frame + 31))
#define local_12f (*(undefined1 (*)[208])(frame + 49))
#define local_5f (*(undefined4 *)(frame + 257))
#define local_5b (*(undefined2 *)(frame + 261))
#define local_59 (*(undefined1 *)(frame + 263))
#define local_58 (*(undefined2 *)(frame + 264))
#define local_56 (*(undefined1 *)(frame + 266))
#define local_4f (*(undefined2 *)(frame + 273))
#define local_4d (*(undefined1 (*)[4])(frame + 275))
#define local_49 (*(undefined2 *)(frame + 279))
#define local_47 (*(undefined1 (*)[40])(frame + 281))
#define local_1f (*(undefined1 *)(frame + 321))
#define local_1e (*(undefined1 (*)[6])(frame + 322))
#define local_18 (*(undefined4 *)(frame + 328))
#define local_14 (*(uint *)(frame + 332))
#define local_14b (*(undefined2 *)(frame + 21))
#define local_149 (*(undefined1 *)(frame + 23))
#define local_147 (*(undefined1 *)(frame + 25))
#define local_146 (*(undefined1 *)(frame + 26))
#define local_145 (*(undefined1 *)(frame + 27))


bool recovered_20bc6b0(int in_ECX,int in_EDX,uint param_3,uint param_4)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;

  local_18 = 0x33060301;
  recovered_2001e00(&local_14b,0,300);
  local_14b = 0x101;
  local_149 = 6;
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  local_147 = (undefined1)((uint)uVar1 >> 0x18);
  local_146 = (undefined1)((uint)uVar1 >> 0x10);
  local_145 = (undefined1)((uint)uVar1 >> 8);
  local_144 = (undefined1)uVar1;
  local_141 = 0x80;
  recovered_2001b70(local_12f,(void *)(in_ECX + 2),6);
  local_5f = 0x63538263;
  local_1f = 1;
  recovered_2001b70(local_1e,(void *)(in_ECX + 2),6);
  local_14 = CONCAT31(PF_PART3(local_14, 1),(char)in_EDX);
  local_5b = 0x135;
  recovered_2001b70(&local_59,&local_14,1);
  local_58 = 0x73d;
  recovered_2001b70(&local_56,&local_1f,7);
  iVar3 = 0xc;
  if (in_EDX == 3) {
    if (param_3 == 0) {
      return false;
    }
    local_14 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
    local_4f = 0x432;
    recovered_2001b70(local_4d,&local_14,4);
    if (param_4 == 0) {
      iVar3 = 0x12;
    }
    else {
      local_14 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                 param_4 << 0x18;
      local_49 = 0x436;
      recovered_2001b70(local_47,&local_14,4);
      iVar3 = 0x18;
    }
  }
  *(undefined2 *)(local_12f + iVar3 + 0xd4) = 0x437;
  recovered_2001b70(auStack_55 + iVar3 + -4,&local_18,4);
  auStack_55[iVar3] = 0xff;
  bVar2 = recovered_20bcda0(in_ECX,&DAT_020c4fe1,0,0xffffffff,0x44,0x43,&local_14b,300);
  return bVar2;
}
#undef DAT_020c4fe1
#undef local_144
#undef auStack_55
#undef local_141
#undef local_12f
#undef local_5f
#undef local_5b
#undef local_59
#undef local_58
#undef local_56
#undef local_4f
#undef local_4d
#undef local_49
#undef local_47
#undef local_1f
#undef local_1e
#undef local_18
#undef local_14
#undef local_14b
#undef local_149
#undef local_147
#undef local_146
#undef local_145
