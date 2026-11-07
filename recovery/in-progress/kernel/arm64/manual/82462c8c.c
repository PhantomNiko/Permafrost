/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
#define DAT_40451f25 (*(uint8_t *)(0x8247bdc8U))
#define DAT_40494b70 (*(uint8_t volatile *)(0x8266f270U))
#define acStack_214 (*(char (*)[484])(frame + 28))
#define str_4044ece4 (*(char (*)[1])(0x82473bd8U))
void recovered_82462c8c(char *param_1,undefined1 *param_2)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char *left;
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;

  left = &DAT_4044e204;
  if (param_1 != (char *)0x0) {
    left = param_1;
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  *param_2 = 0;
  iVar3 = recovered_82400e0c(left,&DAT_40451f25);
  if (iVar3 == 0) {
    pcVar4 = &DAT_4044e204;
  }
  else {
    cVar1 = *left;
    if (cVar1 != '/') {
      if ((cVar1 == '~') && ((left[1] == '\\' || (left[1] == '/')))) {
        pcVar4 = left + 2;
        goto LAB_40442fb8;
      }
      cVar2 = DAT_40494b70;
      if ((cVar2 != '\0') && (cVar1 != '\\' && cVar1 != '\0')) {
        pf_varargs_404019bc_2(acStack_214,0x1e4,str_4044ece4,0x8266f270U,(ulonglong)left);
        recovered_82421274((long)acStack_214,param_2);
        return;
      }
    }
    pcVar4 = &DAT_40494b70;
    if (cVar1 != '\0') {
      pcVar4 = left;
    }
  }
LAB_40442fb8:
  recovered_82421274((long)pcVar4,param_2);
  return;
}
