/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_206e9c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = (char)param_1;
  if ((byte)(cVar1 - 0x30U) < 10 || (byte)(cVar1 + 0xbfU) < 0x1a) {
switchD_02058505_caseD_21:
    return '\x01';
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
    goto switchD_02058505_caseD_21;
  default:
    return '\0';
  }
}
