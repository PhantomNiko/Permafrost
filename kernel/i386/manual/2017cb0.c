#include "functions.h"



#undef DAT_020e0004
#undef local_30
#undef local_28
#undef local_18

#undef DAT_020d9d38
#define DAT_020d9d38 (*(uint32_t volatile *)(0x20d9d38U))
#undef DAT_0213001c
#define DAT_0213001c (*(uint32_t volatile *)(0x213001cU))
#undef DAT_02130020
#define DAT_02130020 (*(uint8_t volatile *)(0x2130020U))
#define local_44 (*(undefined1 (*)[16])(frame + 28))
#define local_34 (*(undefined4 *)(frame + 44))
#define local_30 (*(undefined4 *)(frame + 48))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(uint *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2017cb0
 */

/* WARNING: Removing unreachable block (ram,0x02017e72) */
/* WARNING: Removing unreachable block (ram,0x02017de6) */
/* WARNING: Removing unreachable block (ram,0x02017d7a) */
/* WARNING: Removing unreachable block (ram,0x02017d30) */

uint recovered_2017cb0(void)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte in_ID = (byte)pf_cpu_cpuid_available();
  ulonglong uVar15;

  cVar5 = DAT_02130020;
  if (cVar5 == '\x01') {
    uVar8 = DAT_0213001c;
    return uVar8;
  }
  DAT_02130020 = 1;
  DAT_020d9d38 = in_ID;
  recovered_2001e00(&local_24,0,0x10);
  recovered_2001e00(&local_34,0,0x10);
  uVar8 = DAT_020d9d38;
  if ((int)uVar8 < 0) {
    uVar8 = (uint)(in_ID & 1);
    in_ID = uVar8 != 0;
    uVar8 = uVar8 * 0x200000 ^ (uint)(uVar8 != 1) * 0x200000;
    DAT_020d9d38 = uVar8 >> 0x15;
  }
  if (uVar8 == 0) {
    return 0;
  }
  puVar1 = (uint *)cpuid_basic_info(0);
  local_24 = *puVar1;
  local_20 = puVar1[1];
  local_18 = puVar1[2];
  local_1c = puVar1[3];
  uVar8 = DAT_020d9d38;
  if ((int)uVar8 < 0) {
    uVar8 = (uint)(in_ID & 1);
    in_ID = uVar8 != 0;
    uVar8 = uVar8 * 0x200000 ^ (uint)(uVar8 != 1) * 0x200000;
    DAT_020d9d38 = uVar8 >> 0x15;
  }
  if (uVar8 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)cpuid_Version_info(1);
  local_34 = *puVar2;
  local_30 = puVar2[1];
  local_28 = puVar2[2];
  local_2c = puVar2[3];
  if ((local_28 & 0x10) == 0) {
    return 0;
  }
  if (local_24 < 0x15) goto LAB_02017ea4;
  recovered_2001e00(local_44,0,0x10);
  uVar8 = DAT_020d9d38;
  if ((int)uVar8 < 0) {
    uVar8 = (uint)(in_ID & 1);
    in_ID = uVar8 != 0;
    uVar8 = uVar8 * 0x200000 ^ (uint)(uVar8 != 1) * 0x200000;
    DAT_020d9d38 = uVar8 >> 0x15;
  }
  if (uVar8 == 0) {
    uVar15 = 0;
  }
  else {
    puVar1 = (uint *)cpuid(0x15);
    uVar15 = 0;
    if (puVar1[3] != 0 && (puVar1[1] != 0 && *puVar1 != 0)) {
      lVar3 = (ulonglong)puVar1[3] * (ulonglong)puVar1[1];
      uVar15 = recovered_20012c0((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),*puVar1,0);
    }
  }
  if ((uVar15 == 0) && (0x15 < local_24)) {
    recovered_2001e00(local_44,0,0x10);
    uVar8 = DAT_020d9d38;
    if ((int)uVar8 < 0) {
      uVar8 = (uint)(in_ID & 1) * 0x200000 ^ (uint)((in_ID & 1) != 1) * 0x200000;
      DAT_020d9d38 = uVar8 >> 0x15;
    }
    if (uVar8 == 0) goto LAB_02017ea4;
    puVar1 = (uint *)cpuid(0x16);
    uVar15 = (ulonglong)*puVar1 * 1000000;
    if (*puVar1 == 0) goto LAB_02017ea4;
  }
  uVar8 = (uint)(uVar15 >> 0x20);
  if (uVar15 != 0) {
    if (uVar8 < 1000000 && (uint)(0xfff0bdc0 < (uint)uVar15) <= 999999 - uVar8) {
      uVar15 = recovered_20012c0((uint)(uVar15 + 999999),(uint)(uVar15 + 999999 >> 0x20),1000000,0);
      DAT_0213001c = (uint)uVar15;
      return (uint)uVar15;
    }
    return 0;
  }
LAB_02017ea4:
  bVar6 = in(0x61);
  out(0x61,(bVar6 & 0xfc) + 1);
  out(0x43,0xb0);
  out(0x42,0x9c);
  out(0x42,0x2e);
  iVar10 = 1000000;
  while (bVar7 = in(0x61), (bVar7 & 0x20) != 0) {
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) {
      out(0x61,bVar6);
      DAT_0213001c = 1000;
      return 1000;
    }
  }
  uVar4 = rdtsc();
  uVar11 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar8 = (uint)uVar4;
  uVar13 = 0;
  do {
    bVar7 = in(0x61);
    if ((bVar7 & 0x20) != 0) goto LAB_02017f06;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 20000000);
  uVar13 = 20000000;
LAB_02017f06:
  uVar4 = rdtsc();
  uVar12 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar9 = (uint)uVar4;
  out(0x61,bVar6);
  uVar14 = 1000;
  if (((uVar13 < 20000000) && (uVar11 < uVar12 || uVar11 - uVar12 < (uint)(uVar8 < uVar9))) &&
     (uVar13 = uVar9 - uVar8,
     iVar10 = ((uVar12 - uVar11) - (uint)(uVar9 < uVar8)) + -1 + (uint)(0x3b9add87 < uVar13),
     iVar10 == -1 && (uint)(uVar13 + 0xc4652278 < 0xc4653600) <= iVar10 + 1U)) {
    uVar14 = (uVar13 + 5000) / 10000;
  }
  DAT_0213001c = uVar14;
  return uVar14;
}
