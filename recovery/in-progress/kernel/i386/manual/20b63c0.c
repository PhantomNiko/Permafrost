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
#define local_c (*(undefined4 *)(frame + 36))
#define local_8 (*(undefined4 *)(frame + 40))


void recovered_20b63c0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  uint uVar3;

  local_10 = 0;
  local_14 = 0;
  cVar1 = DAT_0224527c;
  if (cVar1 == '\0') {
    uVar2 = recovered_20b64c0((longlong *)&local_14);
    if ((char)uVar2 == '\0') {
      local_8 = 0;
      local_c = 0;
      Ram02245274 = 0;
      Ram02245270 = 0;
      uVar3 = recovered_20081a0();
      Ram02245278 = uVar3;
      uVar2 = recovered_20b64c0((longlong *)&local_c);
      if ((char)uVar2 == '\0') {
        local_c = 0;
        local_8 = 0;
      }
      DAT_0224526c = local_8;
      DAT_02245268 = local_c;
      DAT_02245260 = (char)uVar2;
      DAT_020de4fc = 0x10;
    }
    else {
      local_8 = 0;
      local_c = 0;
      Ram02245274 = local_10;
      Ram02245270 = local_14;
      uVar3 = recovered_20081a0();
      Ram02245278 = uVar3;
      uVar2 = recovered_20b64c0((longlong *)&local_c);
      if ((char)uVar2 == '\0') {
        local_c = 0;
        local_8 = 0;
      }
      DAT_0224526c = local_8;
      DAT_02245268 = local_c;
      DAT_02245260 = (char)uVar2;
      DAT_020de4fc = 3;
    }
    DAT_0224527c = 1;
  }
  return;
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
#undef local_c
#undef local_8
