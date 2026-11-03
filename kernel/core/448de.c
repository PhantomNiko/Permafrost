#include "functions.h"
#undef DAT_00084196
#define DAT_00084196 (*(uint8_t *)(0x84196U))
#undef DAT_00084198
#define DAT_00084198 (*(uint8_t *)(0x84198U))
#undef DAT_0008419c
#define DAT_0008419c (*(uint * *)(0x8419cU))
#undef DAT_000841a0
#define DAT_000841a0 (*(uint8_t *)(0x841a0U))
#undef DAT_000841ac
#define DAT_000841ac (*(uint32_t *)(0x841acU))
#undef DAT_000841b4
#define DAT_000841b4 (*(uint32_t *)(0x841b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x448de
 */

uint recovered_448de(void)

{
  unsigned char frame[64];

  if (DAT_0008419c != (uint *)0x0) {
    recovered_2c225(DAT_0008419c);
  }
  DAT_0008419c = (uint *)0x0;
  recovered_47237((int *)&DAT_000841a0);
  recovered_47288(&DAT_000841ac);
  recovered_472c6(0x84198);
  DAT_000841b4 = 0;
  DAT_00084198 = 0;
  DAT_00084196 = 0;
  return 0;
}
