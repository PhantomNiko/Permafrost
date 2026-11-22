/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2051ec0(undefined4 incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = (char)incoming_ecx;
  if ((byte)(cVar1 - 0x30U) < 10 || (byte)(cVar1 + 0xbfU) < 0x1a) {
switchD_0204a0b8_caseD_21:
    return CONCAT31((int3)((uint)incoming_ecx >> 8),1);
  }
  switch((uintptr_t)(cVar1)) {
  case '!':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '-':
  case '@':
  case '^':
  case '_':
  case '`':
  case '{':
  case '}':
  case '~':
    goto switchD_0204a0b8_caseD_21;
  default:
    return 0;
  }
}
