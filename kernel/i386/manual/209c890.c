/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02245260 (*(uint8_t volatile *)(0x2245260U))
#define DAT_02245268 (*(uint32_t volatile *)(0x2245268U))
#define DAT_0224526c (*(uint32_t volatile *)(0x224526cU))
#define DAT_02245270 (*(uint8_t volatile *)(0x2245270U))
#define DAT_02245274 (*(uint8_t volatile *)(0x2245274U))
#define DAT_02245278 (*(uint8_t volatile *)(0x2245278U))
#define Ram02245270 (*(uint32_t volatile *)(0x2245270U))
#define Ram02245274 (*(uint32_t volatile *)(0x2245274U))
#define Ram02245278 (*(uint32_t volatile *)(0x2245278U))
#define local_14 (*(uint *)(frame + 28))
#define local_10 (*(uint *)(frame + 32))


longlong recovered_209c890(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;

  recovered_20b63c0();
  cVar2 = DAT_02245260;
  if (cVar2 == '\x01') {
    local_10 = 0;
    local_14 = 0;
    uVar6 = recovered_20b64c0((longlong *)&local_14);
    if ((char)uVar6 != '\0') {
      uVar3 = DAT_0224526c;
      uVar7 = DAT_02245268;
      if (uVar3 <= local_10 && (uint)(local_14 < uVar7) <= local_10 - uVar3) {
        uVar8 = CONCAT44((local_10 - uVar3) - (uint)(local_14 < uVar7),local_14 - uVar7);
        goto LAB_0209c8fd;
      }
    }
  }
  uVar7 = recovered_20081a0();
  uVar6 = Ram02245278;
  uVar6 = Ram02245278;
  iVar4 = Ram02245278;
  lVar1 = (ulonglong)(uVar7 - iVar4) * 0xd6a1;
  uVar8 = recovered_20012c0((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),1000000,0);
LAB_0209c8fd:
  uVar7 = Ram02245270;
  uVar6 = Ram02245270;
  iVar4 = Ram02245270;
  uVar6 = Ram02245274;
  uVar6 = Ram02245274;
  iVar5 = Ram02245274;
  return CONCAT44((int)(uVar8 >> 0x20) + iVar5 + (uint)CARRY4((uint)uVar8,uVar7),(uint)uVar8 + iVar4
                 );
}
#undef DAT_02245260
#undef DAT_02245268
#undef DAT_0224526c
#undef DAT_02245270
#undef DAT_02245274
#undef DAT_02245278
#undef Ram02245270
#undef Ram02245274
#undef Ram02245278
#undef local_14
#undef local_10
