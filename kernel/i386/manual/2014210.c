#include "functions.h"
#undef DAT_02104396
#define DAT_02104396 (*(uint8_t volatile *)(0x2104396U))
#undef DAT_02108000
#define DAT_02108000 (*(uint8_t volatile *)(0x2108000U))
#undef DAT_02108001
#define DAT_02108001 (*(uint8_t volatile *)(0x2108001U))
#undef DAT_02108002
#define DAT_02108002 (*(uint8_t volatile *)(0x2108002U))
#undef DAT_02108003
#define DAT_02108003 (*(uint8_t volatile *)(0x2108003U))
#undef DAT_02108004
#define DAT_02108004 (*(uint8_t volatile *)(0x2108004U))
#undef DAT_02108005
#define DAT_02108005 (*(uint8_t volatile *)(0x2108005U))
#undef DAT_02108006
#define DAT_02108006 (*(uint8_t volatile *)(0x2108006U))
#undef DAT_02108007
#define DAT_02108007 (*(uint8_t volatile *)(0x2108007U))
#undef DAT_02108008
#define DAT_02108008 (*(uint8_t volatile *)(0x2108008U))
#undef DAT_02108009
#define DAT_02108009 (*(uint8_t volatile *)(0x2108009U))
#undef DAT_0210800a
#define DAT_0210800a (*(uint8_t volatile *)(0x210800aU))
#undef DAT_0210800b
#define DAT_0210800b (*(uint8_t volatile *)(0x210800bU))
#undef DAT_0210800c
#define DAT_0210800c (*(uint8_t volatile *)(0x210800cU))
#undef DAT_0210800d
#define DAT_0210800d (*(uint8_t volatile *)(0x210800dU))
#undef DAT_0210800e
#define DAT_0210800e (*(uint8_t volatile *)(0x210800eU))
#undef DAT_0210800f
#define DAT_0210800f (*(uint8_t volatile *)(0x210800fU))
#undef DAT_02108010
#define DAT_02108010 (*(uint8_t volatile *)(0x2108010U))
#undef DAT_02108011
#define DAT_02108011 (*(uint8_t volatile *)(0x2108011U))
#undef DAT_02108012
#define DAT_02108012 (*(uint8_t volatile *)(0x2108012U))
#undef DAT_02108013
#define DAT_02108013 (*(uint8_t volatile *)(0x2108013U))
#undef DAT_0210a000
#define DAT_0210a000 (*(uint8_t volatile *)(0x210a000U))
#undef Ram02104396
#define Ram02104396 (*(uint16_t volatile *)(0x2104396U))
#define local_c (*(uint (*)[2])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014210
 */

uint recovered_2014210(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_c[1] = 0;
  local_c[0] = 0;
  if (size != 0) {
    recovered_2001e00(&DAT_02108000,0,0x2000);
    recovered_2001e00(&DAT_0210a000,0,8);
    uVar1 = recovered_20091e0(0x210a000,8,local_c);
    if ((char)uVar1 != '\0') {
      Ram02104396 = 1;
      DAT_02108000 = (char)local_c[0];
      DAT_02108001 = (char)(local_c[0] >> 8);
      DAT_02108002 = (char)(local_c[0] >> 0x10);
      DAT_02108003 = (char)(local_c[0] >> 0x18);
      DAT_02108004 = (char)local_c[1];
      DAT_02108005 = (char)(local_c[1] >> 8);
      DAT_02108006 = (char)(local_c[1] >> 0x10);
      DAT_02108007 = (char)(local_c[1] >> 0x18);
      DAT_02108008 = 8;
      DAT_02108009 = 0;
      DAT_0210800a = 0;
      DAT_0210800b = 0;
      DAT_0210800c = 0;
      DAT_0210800d = 0;
      DAT_0210800e = 0;
      DAT_0210800f = 0;
      DAT_02108010 = 0;
      DAT_02108011 = 0;
      DAT_02108012 = 0;
      DAT_02108013 = 0;
      return 1;
    }
  }
  return 0;
}
