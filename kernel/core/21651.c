#include "functions.h"
#undef str_0002caa4
#define str_0002caa4 (*(char (*)[1])(0x2caa4U))
#undef str_0002cab5
#define str_0002cab5 (*(char (*)[1])(0x2cab5U))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21651
 */

void __fastcall
recovered_21651(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6)

{
  unsigned char frame[105];

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = str_0002cab5;
  if (param_6 != '\0') {
    pcVar3 = str_0002caa4;
  }
  iVar2 = 0;
  local_18 = param_1;
  local_14 = param_2;
  do {
    acStack_39[iVar2 + 1] = pcVar3[param_4 % param_5];
    puVar1 = local_14;
    iVar2 = iVar2 + 1;
    bVar4 = param_5 <= param_4;
    param_4 = param_4 / param_5;
  } while (bVar4);
  while (iVar2 != 0) {
    recovered_215f2(local_18,puVar1,param_3,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}

