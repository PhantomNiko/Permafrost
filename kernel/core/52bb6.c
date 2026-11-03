#include "functions.h"
#undef DAT_00093a22
#define DAT_00093a22 (*(uint8_t *)(0x93a22U))
#undef DAT_00093a24
#define DAT_00093a24 (*(uint8_t *)(0x93a24U))
#undef DAT_00093a28
#define DAT_00093a28 (*(uint * *)(0x93a28U))
#undef DAT_00093a2c
#define DAT_00093a2c (*(uint8_t *)(0x93a2cU))
#undef DAT_00093a38
#define DAT_00093a38 (*(uint32_t *)(0x93a38U))
#undef DAT_00093a40
#define DAT_00093a40 (*(uint32_t *)(0x93a40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x52bb6
 */

uint recovered_52bb6(void)

{
  unsigned char frame[64] = {0};

  if (DAT_00093a28 != (uint *)0x0) {
    recovered_3a522(DAT_00093a28);
  }
  DAT_00093a28 = (uint *)0x0;
  recovered_55328((int *)&DAT_00093a2c);
  recovered_55379(&DAT_00093a38);
  recovered_553b7(0x93a24);
  DAT_00093a40 = 0;
  DAT_00093a24 = 0;
  DAT_00093a22 = 0;
  return 0;
}
