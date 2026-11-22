/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
#define DAT_020c77ec (*(uint32_t volatile *)(0x223dc04U))
#define local_11 (*(byte *)(frame + 31))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(uint *)(frame + 20))
#define local_20 (*(int *)(frame + 16))
uint recovered_2074430(int in_ECX,uint in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;

  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar4 = recovered_20744f0(in_ECX,in_EDX,&local_20,&local_1c,&local_18);
  uVar3 = local_18;
  uVar2 = local_1c;
  iVar1 = local_20;
  local_11 = (byte)uVar4;
  if (local_11 != 0) {
    buffer = (undefined4 *)DAT_020c77e4;
    if (buffer != (undefined4 *)0x0) {
      iVar6 = DAT_020c77e8;
      if (iVar6 != 0) {
        puVar5 = buffer;
        do {
          recovered_2001710((void *)*puVar5);
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      recovered_2001710(buffer);
      uVar4 = (uint)local_11;
    }
    DAT_020c77e4 = iVar1;
    DAT_020c77e8 = uVar2;
    DAT_020c77ec = uVar3;
  }
  return uVar4;
}
