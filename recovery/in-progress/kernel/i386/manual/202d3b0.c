/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#define DAT_020d9d54 (*(uint32_t volatile *)(0x20d9d54U))
#define DAT_020d9d58 (*(uint32_t volatile *)(0x20d9d58U))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6c (*(uint32_t volatile *)(0x20d9d6cU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020d9ff6 (*(uint8_t volatile *)(0x20d9ff6U))
#define Ram020d9d6a (*(uint16_t volatile *)(0x20d9d6aU))


undefined4 recovered_202d3b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_2026f10();
  if ((param_1 == 0) || (iVar1 = DAT_020d9d48, iVar1 == param_1)) {
    DAT_020d9d48 = 0;
    DAT_020d9d65 = 0;
    DAT_020d9d4c = 0;
    DAT_020d9d6c = 0;
    DAT_020d9d54 = 0;
    DAT_020d9d58 = 0;
    Ram020d9d6a = 0;
    DAT_020d9d70 = 0;
    DAT_020d9f05 = 0;
    DAT_020d9ff6 = 0;
    return 1;
  }
  return 0;
}
#undef DAT_020d9d48
#undef DAT_020d9d4c
#undef DAT_020d9d54
#undef DAT_020d9d58
#undef DAT_020d9d65
#undef DAT_020d9d6a
#undef DAT_020d9d6c
#undef DAT_020d9d70
#undef DAT_020d9f05
#undef DAT_020d9ff6
#undef Ram020d9d6a
