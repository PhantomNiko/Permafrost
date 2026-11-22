/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c7875 (*(char (*)[1])(0x20c7875U))
#define str_020c787d (*(char (*)[1])(0x20c787dU))
#define str_020c7887 (*(char (*)[1])(0x20c7887U))
#define str_020c7d21 (*(char (*)[1])(0x20c7d21U))
#define str_020c7d29 (*(char (*)[1])(0x20c7d29U))


char * recovered_2062510(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0xb7) {
    switch((uintptr_t)(in_ECX)) {
    case 3:
      return &DAT_020c5f80;
    case 8:
      return &DAT_020c5f8c;
    case 0x14:
      return str_020c7875;
    case 0x15:
      return str_020c787d;
    case 0x28:
      return &DAT_020c5fa8;
    case 0x3e:
      return str_020c5f85;
    }
  }
  else {
    if (in_ECX == 0xb7) {
      return str_020c7d21;
    }
    if (in_ECX == 0xf3) {
      return str_020c7d29;
    }
    if (in_ECX == 0x102) {
      return str_020c7887;
    }
  }
  return str_020c5bb8;
}
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c7875
#undef str_020c787d
#undef str_020c7887
#undef str_020c7d21
#undef str_020c7d29
