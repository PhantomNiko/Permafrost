/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e372 (*(uint8_t *)(0x82473a77U))
#define str_4044e375 (*(char (*)[1])(0x82473a7aU))
#define str_4044e382 (*(char (*)[1])(0x82473a87U))
#define str_4044e38c (*(char (*)[1])(0x82473a91U))
#define str_4044e3a0 (*(char (*)[1])(0x82473aa5U))
#define str_4044e3ae (*(char (*)[1])(0x82473ab3U))
#define str_4044e3c0 (*(char (*)[1])(0x82473ac5U))
#define str_4044e3cc (*(char (*)[1])(0x82473ad1U))
#define str_4044e3dd (*(char (*)[1])(0x82473ae2U))
char * recovered_8240f830(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_4044e372;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_40407498_caseD_1;
  case 2:
    return str_4044e375;
  case 5:
    return str_4044e382;
  case 9:
    return str_4044e38c;
  case 0xc:
    return str_4044e3a0;
  case 0xd:
    return str_4044e3ae;
  default:
    if (param_1 == 0x11) {
      return str_4044e3c0;
    }
    if (param_1 == 0x16) {
      return str_4044e3cc;
    }
switchD_40407498_caseD_1:
    return str_4044e3dd;
  }
}
