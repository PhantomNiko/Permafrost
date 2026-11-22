/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



void recovered_20a2200(undefined1 *in_ECX,int in_EDX,ushort param_3,byte param_4,uint param_5,
                      uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;

  recovered_2001e00(in_ECX,0,0x14);
  *in_ECX = 0x45;
  in_ECX[2] = (char)((uint)in_EDX >> 8);
  in_ECX[3] = (char)in_EDX;
  in_ECX[4] = (char)(param_3 >> 8);
  in_ECX[5] = (char)param_3;
  *(undefined2 *)(in_ECX + 6) = 0x40;
  in_ECX[8] = 0x40;
  in_ECX[9] = param_4;
  in_ECX[0xc] = (char)(param_5 >> 0x18);
  bVar3 = (byte)(param_5 >> 0x10);
  in_ECX[0xd] = bVar3;
  in_ECX[0xe] = (char)(param_5 >> 8);
  in_ECX[0xf] = (char)param_5;
  in_ECX[0x10] = (char)(param_6 >> 0x18);
  in_ECX[0x11] = (char)(param_6 >> 0x10);
  in_ECX[0x12] = (char)(param_6 >> 8);
  in_ECX[0x13] = (char)param_6;
  iVar4 = (uint)(ushort)(*(ushort *)(in_ECX + 0x10) << 8 | *(ushort *)(in_ECX + 0x10) >> 8) +
          (uint)(ushort)(*(ushort *)(in_ECX + 0xe) << 8 | *(ushort *)(in_ECX + 0xe) >> 8) +
          ((uint)bVar3 | (param_5 >> 0x18) << 8) +
          (uint)(ushort)(*(ushort *)(in_ECX + 10) << 8 | *(ushort *)(in_ECX + 10) >> 8) +
          (uint)param_3 + (uint)param_4 + (uint)(byte)in_ECX[1] + in_EDX;
  iVar1 = (param_6 & 0xffff) + 0x4500 + iVar4;
  uVar2 = (param_6 & 0xffff) + 0xc500 + iVar4;
  if ((short)iVar1 != iVar1) {
    do {
      uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
    } while (0xffff < uVar2);
  }
  *(ushort *)(in_ECX + 10) = ~(ushort)uVar2 << 8 | (ushort)~(ushort)uVar2 >> 8;
  return;
}
