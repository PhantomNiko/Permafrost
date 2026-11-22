/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044f25f (*(uint8_t *)(0x82474fa4U))
#define acStack_131 (*(char (*)[241])(frame + 271))
#define acStack_222 (*(char (*)[241])(frame + 30))
ulong recovered_82469ee4(long param_1,char *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;

  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    *param_2 = '\0';
    recovered_82421274(param_1,acStack_131);
    pcVar3 = recovered_82425c6c(acStack_131);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      bVar2 = recovered_824336e8((long)pcVar3,&DAT_4044f25f);
      if (!bVar2) {
        return (ulong)bVar2;
      }
      uVar4 = recovered_82400de8(pcVar3);
      if (0xffffffffffffff14 < uVar4 - 0xf1) {
        uVar4 = uVar4 - 5;
        recovered_82400928(acStack_222,pcVar3,uVar4);
        acStack_222[uVar4] = '\0';
        *param_2 = '/';
        uVar5 = 1;
        pcVar3 = acStack_222;
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar5 = uVar5 + 1;
          cVar1 = '/';
          if (*pcVar3 != '~') {
            cVar1 = *pcVar3;
          }
          param_2 = param_2 + 1;
          *param_2 = cVar1;
          pcVar3 = pcVar3 + 1;
        }
        param_2[1] = '\0';
        while( true ) {
          uVar4 = (ulong)(uVar5 != 0 && uVar5 - 1 != 0);
          if (uVar5 < 2) {
            return uVar4;
          }
          if (*param_2 != '/') break;
          *param_2 = '\0';
          uVar5 = uVar5 - 1;
          param_2 = param_2 + -1;
        }
        return uVar4;
      }
    }
  }
  return 0;
}
