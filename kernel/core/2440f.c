#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#undef DAT_0002cb7f
#define DAT_0002cb7f (*(uint8_t *)(0x2cb7fU))
#undef DAT_0003f1c8
#define DAT_0003f1c8 (*(int *)(0x3f1c8U))
#undef DAT_0003f1cc
#define DAT_0003f1cc (*(uint8_t *)(0x3f1ccU))
#undef DAT_0004f1cc
#define DAT_0004f1cc (*(char *)(0x4f1ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2440f
 */

uint recovered_2440f(char *param_1)

{
  unsigned char frame[64];

  uint uVar1;
  uint extraout_EAX = 0;
  char *pcVar2;
  
  pcVar2 = &DAT_0002ca9c;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  if (DAT_0003f1c8 == 0x100) {
    recovered_20c3e(0x3f1cc,0x3f2cc,0xff00);
    DAT_0003f1c8 = 0xff;
  }
  uVar1 = recovered_216bc(&DAT_0003f1cc + DAT_0003f1c8 * 0x100,0x100,&DAT_0002cb77,pcVar2);
  DAT_0003f1c8 = DAT_0003f1c8 + 1;
  if (DAT_0004f1cc == '\x01') {
    recovered_2449b(pcVar2);
    recovered_2449b(&DAT_0002cb7f);
    return extraout_EAX;
  }
  return uVar1;
}

