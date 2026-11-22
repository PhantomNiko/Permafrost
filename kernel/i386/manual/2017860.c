#include "functions.h"
#undef DAT_02130000
#define DAT_02130000 (*(uint8_t volatile *)(0x2130000U))
#undef DAT_02130001
#define DAT_02130001 (*(uint8_t volatile *)(0x2130001U))
#undef DAT_02130002
#define DAT_02130002 (*(uint8_t volatile *)(0x2130002U))
#undef DAT_02130003
#define DAT_02130003 (*(uint8_t volatile *)(0x2130003U))
#undef DAT_02130004
#define DAT_02130004 (*(uint8_t volatile *)(0x2130004U))
#undef DAT_02130005
#define DAT_02130005 (*(uint8_t volatile *)(0x2130005U))
#undef DAT_02130006
#define DAT_02130006 (*(uint8_t volatile *)(0x2130006U))
#undef DAT_02130007
#define DAT_02130007 (*(uint8_t volatile *)(0x2130007U))
#undef DAT_02130008
#define DAT_02130008 (*(uint8_t volatile *)(0x2130008U))
#undef DAT_02130009
#define DAT_02130009 (*(uint8_t volatile *)(0x2130009U))
#undef DAT_0213000a
#define DAT_0213000a (*(uint8_t volatile *)(0x213000aU))
#undef DAT_0213000b
#define DAT_0213000b (*(uint8_t volatile *)(0x213000bU))
#undef DAT_0213000c
#define DAT_0213000c (*(uint8_t volatile *)(0x213000cU))
#undef DAT_0213000d
#define DAT_0213000d (*(uint8_t volatile *)(0x213000dU))
#undef DAT_0213000e
#define DAT_0213000e (*(uint8_t volatile *)(0x213000eU))
#undef DAT_0213000f
#define DAT_0213000f (*(uint8_t volatile *)(0x213000fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2017860
 */

void recovered_2017860(uint pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_02130000 = 1;
  DAT_02130001 = 0;
  DAT_02130002 = 0;
  DAT_02130003 = 0;
  DAT_02130004 = (char)pointer;
  DAT_02130005 = (char)(pointer >> 8);
  DAT_02130006 = (char)(pointer >> 0x10);
  DAT_02130007 = (char)(pointer >> 0x18);
  DAT_02130008 = 0;
  DAT_02130009 = 0;
  DAT_0213000a = 0;
  DAT_0213000b = 0;
  DAT_0213000c = 0;
  DAT_0213000d = 0;
  DAT_0213000e = 0;
  DAT_0213000f = 0;
  return;
}
