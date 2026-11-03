#include "functions.h"
#undef DAT_0002310c
#define DAT_0002310c (*(uint8_t *)(0x2310cU))
#undef DAT_0005cd4c
#define DAT_0005cd4c (*(uint8_t *)(0x5cd4cU))
#undef LAB_00023130
#define LAB_00023130 (*(uint8_t *)(0x23130U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(undefined1 * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x230cf
 */

uint recovered_230cf(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = &LAB_00023130;
  local_28 = &DAT_0005cd4c;
  local_20 = &DAT_0002310c;
  local_40 = 1;
  recovered_234cb(&local_44);
  recovered_211e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
