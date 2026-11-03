#include "functions.h"
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(int *)(0x47e18U))
#undef DAT_00047e24
#define DAT_00047e24 (*(uint32_t *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(void * *)(0x47e28U))
#undef DAT_00047e30
#define DAT_00047e30 (*(uint *)(0x47e30U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(byte *)(0x47e7cU))
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef str_00042641
#define str_00042641 (*(char (*)[1])(0x42641U))
#undef str_00042657
#define str_00042657 (*(char (*)[1])(0x42657U))
#undef str_00042677
#define str_00042677 (*(char (*)[1])(0x42677U))
#undef str_00042698
#define str_00042698 (*(char (*)[1])(0x42698U))
#undef str_000426ba
#define str_000426ba (*(char (*)[1])(0x426baU))
#undef str_000426d7
#define str_000426d7 (*(char (*)[1])(0x426d7U))
#undef str_000426fa
#define str_000426fa (*(char (*)[1])(0x426faU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d80
 */

int recovered_22d80(void)

{
  unsigned char frame[92];

  byte bVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 uVar6;
  char *pcVar7;

  iVar3 = DAT_00047e34;
  uVar6 = DAT_00047e24;
  bVar1 = DAT_00047e14;
  if ((DAT_00047e84 == 0) ||
     ((byte)(DAT_00047e34 - 3U < 0xfffffffe | DAT_00047e7c ^ 1 | DAT_00047e18 == 0) == 1)) {
    pcVar7 = str_00042641;
  }
  else if ((DAT_00047e30 & 1) == 0) {
    pvVar5 = (void *)recovered_22e9c();
    pvVar2 = DAT_00047e28;
    if (pvVar5 == (void *)0x0) {
      pcVar7 = str_00042677;
      DAT_00047e28 = pvVar2;
    }
    else {
      if (pvVar5 <= DAT_00047e28) {
        pcVar7 = recovered_22fdb(DAT_00047e34);
        format = str_00042698;
LAB_00022e72:
        recovered_22fa2(format,pcVar7);
        return 1;
      }
      DAT_00047e28 = pvVar5;
      bVar4 = recovered_22ff4();
      if (bVar4) {
        uVar6 = recovered_24819((uint)bVar1,uVar6,pvVar5,DAT_00047e30);
        if (((char)uVar6 != '\0') && (DAT_00047e34 == iVar3)) {
          pcVar7 = recovered_22fdb(iVar3);
          format = str_000426fa;
          goto LAB_00022e72;
        }
        pcVar7 = str_000426d7;
      }
      else {
        pcVar7 = str_000426ba;
        DAT_00047e28 = pvVar2;
      }
    }
  }
  else {
    pcVar7 = str_00042657;
  }
  recovered_22965(pcVar7);
  return 0;
}
