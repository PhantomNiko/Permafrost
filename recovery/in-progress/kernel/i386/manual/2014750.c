#include "functions.h"
#undef DAT_021043ce
#define DAT_021043ce (*(uint8_t volatile *)(0x21043ceU))
#undef DAT_021043e6
#define DAT_021043e6 (*(uint16_t volatile *)(0x21043e6U))
#undef DAT_021043f8
#define DAT_021043f8 (*(uint32_t volatile *)(0x21043f8U))
#undef DAT_02104414
#define DAT_02104414 (*(uint32_t volatile *)(0x2104414U))
#define local_15 (*(undefined1 *)(frame + 43))
#define local_14 (*(undefined1 *)(frame + 44))
#define local_13 (*(undefined1 *)(frame + 45))
#define local_12 (*(undefined1 *)(frame + 46))
#define local_11 (*(undefined1 *)(frame + 47))
#define local_10 (*(undefined1 *)(frame + 48))
#define local_f (*(undefined1 *)(frame + 49))
#define local_e (*(undefined1 *)(frame + 50))
#define local_d (*(undefined1 *)(frame + 51))
#define local_c (*(undefined1 *)(frame + 52))
#define local_b (*(undefined1 *)(frame + 53))
#define local_a (*(undefined1 *)(frame + 54))
#define local_9 (*(undefined1 *)(frame + 55))
#define local_2c (*(undefined1 *)(frame + 20))
#define local_2b (*(undefined1 *)(frame + 21))
#define local_2a (*(undefined1 *)(frame + 22))
#define local_29 (*(undefined1 *)(frame + 23))
#define local_28 (*(undefined1 *)(frame + 24))
#define local_27 (*(undefined1 *)(frame + 25))
#define local_26 (*(undefined1 *)(frame + 26))
#define local_25 (*(undefined1 *)(frame + 27))
#define local_24 (*(undefined1 *)(frame + 28))
#define local_23 (*(undefined1 *)(frame + 29))
#define local_22 (*(undefined1 *)(frame + 30))
#define local_21 (*(undefined1 *)(frame + 31))
#define local_20 (*(undefined1 *)(frame + 32))
#define local_1f (*(undefined1 *)(frame + 33))
#define local_1e (*(undefined1 *)(frame + 34))
#define local_1d (*(undefined1 *)(frame + 35))
#define local_1c (*(undefined1 *)(frame + 36))
#define local_1b (*(undefined1 *)(frame + 37))
#define local_1a (*(undefined1 *)(frame + 38))
#define local_19 (*(undefined1 *)(frame + 39))
#define local_18 (*(undefined1 *)(frame + 40))
#define local_17 (*(undefined1 *)(frame + 41))
#define local_16 (*(undefined1 *)(frame + 42))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014750
 */

void recovered_2014750(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;

  uVar2 = DAT_021043e6;
  uVar4 = DAT_021043f8;
  if ((uVar4 < uVar2) && (cVar1 = DAT_021043ce, cVar1 == '\0')) {
    recovered_2001e00(&local_2c,0,0x24);
    local_2c = 1;
    local_2b = 0;
    local_2a = 0;
    local_29 = 0;
    local_28 = 0x1c;
    local_27 = 0;
    local_26 = 0;
    local_25 = 0;
    local_24 = 1;
    local_23 = 0;
    local_22 = 0;
    local_21 = 0;
    local_20 = 6;
    local_1f = 0;
    local_1e = 0;
    local_1d = 0;
    local_1c = 1;
    local_1b = 0;
    local_1a = 0;
    local_19 = 0;
    local_18 = 0;
    local_17 = 0;
    local_16 = 0;
    local_15 = 0;
    local_14 = 8;
    local_13 = 0;
    local_12 = 0;
    local_11 = 0;
    local_10 = 0;
    local_f = 0;
    local_e = 0;
    local_d = 0;
    local_c = 1;
    local_b = 0;
    local_a = 0;
    local_9 = 0;
    iVar3 = DAT_021043f8;
    uVar4 = 1;
    if (iVar3 != 0) {
      uVar4 = iVar3 * 2 + 3;
    }
    uVar4 = recovered_2014d30(uVar4 & 0xffff,&local_2c,0x24);
    if ((char)uVar4 != '\0') {
      DAT_021043ce = 1;
      DAT_02104414 = 0x41;
    }
  }
  return;
}
