/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_20 (*(undefined8 * *)(frame + 32))
#define local_30 (*(ulong (*)[2])(frame + 16))
uchar recovered_209c520(long param_1,char *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;

  uVar2 = recovered_209c670(param_1,local_30);
  bVar7 = false;
  if ((uVar2 != '\0') && (local_30[0] != 0)) {
    pcVar3 = (char *)*local_20;
    if (param_2 == (char *)0x0 || pcVar3 == (char *)0x0) {
LAB_0205ecd4:
      bVar7 = false;
    }
    else {
      cVar4 = *pcVar3;
      while (cVar4 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *param_2;
        if (cVar1 == '\0') goto LAB_0205ecd4;
        if (cVar4 != cVar1) {
          cVar6 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar6 = cVar4;
          }
          cVar4 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar4 = cVar1;
          }
          if (cVar6 != cVar4) goto LAB_0205ecd4;
        }
        param_2 = param_2 + 1;
        cVar4 = *pcVar3;
      }
      bVar7 = *param_2 == '\0';
    }
    uVar5 = 0;
    do {
      recovered_2000bb0((void *)local_20[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_30[0]);
    recovered_2000bb0(local_20);
  }
  return bVar7;
}
