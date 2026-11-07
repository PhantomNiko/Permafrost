/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e433 (*(uint8_t *)(0x20c515dU))
#define str_0208e436 (*(char (*)[1])(0x20c5160U))
#define str_0208e443 (*(char (*)[1])(0x20c516dU))
#define str_0208e44d (*(char (*)[1])(0x20c5177U))
#define str_0208e461 (*(char (*)[1])(0x20c518bU))
#define str_0208e46f (*(char (*)[1])(0x20c5199U))
#define str_0208e481 (*(char (*)[1])(0x20c51abU))
#define str_0208e48d (*(char (*)[1])(0x20c51b7U))
#define str_0208e49e (*(char (*)[1])(0x20c51c8U))
char * recovered_2019370(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_0208e433;
  default:
    return str_0208e49e;
  case 2:
    return str_0208e436;
  case 5:
    return str_0208e443;
  case 9:
    return str_0208e44d;
  case 0xc:
    return str_0208e461;
  case 0xd:
    return str_0208e46f;
  case 0x11:
    return str_0208e481;
  case 0x16:
    return str_0208e48d;
  }
}
