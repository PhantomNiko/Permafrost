/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0214bc38 (*(uint8_t volatile *)(0x214bc38U))
#define DAT_0214bc3c (*(uint32_t volatile *)(0x214bc3cU))
#define PTR_str_020c5884_020de16c (*(char * volatile *)(0x20de16cU))
#define PTR_str_020c5884_020de170 (*(char * volatile *)(0x20de170U))
#define str_020c5884 (*(char (*)[1])(0x20c5884U))
#define str_020c588b (*(char (*)[1])(0x20c588bU))
#define str_020c5894 (*(char (*)[1])(0x20c5894U))
#define str_020c589c (*(char (*)[1])(0x20c589cU))
#define str_020c58ab (*(char (*)[1])(0x20c58abU))
#define local_34 (*(uint (*)[8])(frame + 28))
#define local_14 (*(uint *)(frame + 60))


void recovered_204bb00(undefined1 *in_ECX,uint in_EDX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;

  if (in_EDX != 0 && in_ECX != (undefined1 *)0x0) {
    cVar1 = DAT_0214bc38;
    if (cVar1 == '\0') {
      recovered_2001e00(local_34,0,0x24);
      DAT_0214bc3c = 0;
      PTR_str_020c5884_020de16c = str_020c5884;
      PTR_str_020c5884_020de170 = str_020c5884;
      bVar3 = recovered_20124e0(local_34);
      if (bVar3 != 0) {
        DAT_0214bc3c = local_34[0];
        pcVar4 = str_020c588b;
        if (((short)local_34[0] < 0) || (pcVar4 = str_020c5894, 0xf < local_14)) {
          PTR_str_020c5884_020de16c = pcVar4;
        }
        pcVar4 = str_020c589c;
        if (((~local_34[0] & 0x400040) == 0) || (pcVar4 = str_020c58ab, (local_34[0] & 4) != 0)) {
          PTR_str_020c5884_020de170 = pcVar4;
        }
      }
      DAT_0214bc38 = 1;
    }
    if ((in_EDX < 0x80) || (uVar2 = DAT_0214bc3c, (uVar2 & 0x8000) == 0)) {
      recovered_2001e00(in_ECX,0,in_EDX);
    }
    else {
      for (; in_EDX != 0; in_EDX = in_EDX - 1) {
        *in_ECX = 0;
        in_ECX = in_ECX + 1;
      }
    }
  }
  return;
}
#undef DAT_0214bc38
#undef DAT_0214bc3c
#undef PTR_str_020c5884_020de16c
#undef PTR_str_020c5884_020de170
#undef str_020c5884
#undef str_020c588b
#undef str_020c5894
#undef str_020c589c
#undef str_020c58ab
#undef local_34
#undef local_14
