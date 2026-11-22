/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de4fc (*(uint32_t volatile *)(0x20de4fcU))
#define DAT_02245260 (*(uint8_t volatile *)(0x2245260U))
#define DAT_02245268 (*(uint32_t volatile *)(0x2245268U))
#define DAT_0224526c (*(uint32_t volatile *)(0x224526cU))
#define DAT_02245270 (*(uint8_t volatile *)(0x2245270U))
#define DAT_02245274 (*(uint8_t volatile *)(0x2245274U))
#define DAT_02245278 (*(uint8_t volatile *)(0x2245278U))
#define DAT_0224527c (*(uint8_t volatile *)(0x224527cU))
#define Ram02245270 (*(uint32_t volatile *)(0x2245270U))
#define Ram02245274 (*(uint32_t volatile *)(0x2245274U))
#define Ram02245278 (*(uint32_t volatile *)(0x2245278U))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))


undefined4 recovered_203bbb0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  recovered_2026f10();
  local_10 = 0;
  local_14 = 0;
  Ram02245274 = param_2;
  Ram02245270 = param_1;
  uVar1 = recovered_20081a0();
  Ram02245278 = uVar1;
  uVar2 = recovered_20b64c0((longlong *)&local_14);
  if ((char)uVar2 == '\0') {
    local_14 = 0;
    local_10 = 0;
  }
  DAT_0224526c = local_10;
  DAT_02245268 = local_14;
  DAT_02245260 = (char)uVar2;
  DAT_020de4fc = 9;
  DAT_0224527c = 1;
  return 1;
}
#undef DAT_020de4fc
#undef DAT_02245260
#undef DAT_02245268
#undef DAT_0224526c
#undef DAT_02245270
#undef DAT_02245274
#undef DAT_02245278
#undef DAT_0224527c
#undef Ram02245270
#undef Ram02245274
#undef Ram02245278
#undef local_14
#undef local_10
