#include "functions.h"
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(int *)(0x5e6b8U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(void * *)(0x5e6c8U))
#undef DAT_0005e6d0
#define DAT_0005e6d0 (*(uint *)(0x5e6d0U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(int *)(0x5e6d4U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef str_000575bd
#define str_000575bd (*(char (*)[1])(0x575bdU))
#undef str_000575d3
#define str_000575d3 (*(char (*)[1])(0x575d3U))
#undef str_000575f3
#define str_000575f3 (*(char (*)[1])(0x575f3U))
#undef str_00057614
#define str_00057614 (*(char (*)[1])(0x57614U))
#undef str_00057636
#define str_00057636 (*(char (*)[1])(0x57636U))
#undef str_00057653
#define str_00057653 (*(char (*)[1])(0x57653U))
#undef str_00057676
#define str_00057676 (*(char (*)[1])(0x57676U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30596
 */

int recovered_30596(void)

{
  unsigned char frame[92] = {0};

  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;

  iVar4 = DAT_0005e6d4;
  uVar2 = DAT_0005e6c4;
  bVar1 = DAT_0005e6b4;
  if ((((DAT_0005e924 == 0) || (DAT_0005e71c != '\x01')) || (DAT_0005e6b8 == 0)) ||
     ((DAT_0005e6d4 != 1 && (DAT_0005e6d4 != 6)))) {
    pcVar8 = str_000575bd;
  }
  else if ((DAT_0005e6d0 & 1) == 0) {
    pvVar6 = (void *)recovered_306a8();
    pvVar3 = DAT_0005e6c8;
    if (pvVar6 == (void *)0x0) {
      pcVar8 = str_000575f3;
      DAT_0005e6c8 = pvVar3;
    }
    else {
      if (pvVar6 <= DAT_0005e6c8) {
        pcVar8 = recovered_307ed(DAT_0005e6d4);
        format = str_00057614;
LAB_00030685:
        recovered_307b4(format,pcVar8);
        return 1;
      }
      DAT_0005e6c8 = pvVar6;
      bVar5 = recovered_30806();
      if (bVar5) {
        uVar7 = recovered_3228e((uint)bVar1,uVar2,pvVar6,DAT_0005e6d0);
        if (((char)uVar7 != '\0') && (DAT_0005e6d4 == iVar4)) {
          pcVar8 = recovered_307ed(iVar4);
          format = str_00057676;
          goto LAB_00030685;
        }
        pcVar8 = str_00057653;
      }
      else {
        pcVar8 = str_00057636;
        DAT_0005e6c8 = pvVar3;
      }
    }
  }
  else {
    pcVar8 = str_000575d3;
  }
  recovered_3018f(pcVar8);
  return 0;
}
