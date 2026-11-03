#include "functions.h"
#undef DAT_000574a1
#define DAT_000574a1 (*(uint8_t *)(0x574a1U))
#undef str_000574a4
#define str_000574a4 (*(char (*)[1])(0x574a4U))
#undef str_000574b1
#define str_000574b1 (*(char (*)[1])(0x574b1U))
#undef str_000574bb
#define str_000574bb (*(char (*)[1])(0x574bbU))
#undef str_000574cf
#define str_000574cf (*(char (*)[1])(0x574cfU))
#undef str_000574dd
#define str_000574dd (*(char (*)[1])(0x574ddU))
#undef str_000574ef
#define str_000574ef (*(char (*)[1])(0x574efU))
#undef str_000574fb
#define str_000574fb (*(char (*)[1])(0x574fbU))
#undef str_0005750c
#define str_0005750c (*(char (*)[1])(0x5750cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2300d
 */

char * FUN_0002300d(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_000574a1;
    break;
  case 2:
    pcVar1 = str_000574a4;
    break;
  case 5:
    pcVar1 = str_000574b1;
    break;
  case 9:
    pcVar1 = str_000574bb;
    break;
  case 0xc:
    pcVar1 = str_000574cf;
    break;
  case 0xd:
    pcVar1 = str_000574dd;
    break;
  default:
    if (param_1 == 0x11) {
      return str_000574ef;
    }
    if (param_1 == 0x16) {
      return str_000574fb;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_0005750c;
  }
  return pcVar1;
}
