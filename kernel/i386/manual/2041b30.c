/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d67d3 (*(uint8_t *)(0x20d67d3U))


undefined4 recovered_2041b30(char *in_ECX,undefined1 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong count;

  if (in_EDX == (undefined1 *)0x0 || in_ECX == (char *)0x0) {
LAB_02041ba3:
    return 0;
  }
  *in_EDX = 0;
  pcVar2 = recovered_20025d0(in_ECX,&DAT_020d67d3);
  if (pcVar2 != (char *)0x0) {
    in_ECX = pcVar2 + 3;
  }
  cVar1 = *in_ECX;
  count = 0;
  if (cVar1 == '[') {
    return 0;
  }
  do {
    switch((uintptr_t)(cVar1)) {
    case '\0':
    case '#':
    case '/':
    case ':':
    case '?':
      if (count - 0x100 < 0xffffff01) {
        return 0;
      }
      recovered_2001b70(in_EDX,in_ECX,count);
      in_EDX[count] = 0;
      return CONCAT31((int3)(count >> 8),1);
    default:
      cVar1 = in_ECX[count + 1];
      count = count + 1;
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case ' ':
      goto LAB_02041ba3;
    }
  } while( true );
}
#undef DAT_020d67d3
