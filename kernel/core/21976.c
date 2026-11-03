#include "functions.h"
#undef str_0004261c
#define str_0004261c (*(char (*)[1])(0x4261cU))
#undef str_0004262d
#define str_0004262d (*(char (*)[1])(0x4262dU))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21976
 */

void recovered_21976(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,char param_6)

{
  unsigned char frame[105];

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  pcVar3 = str_0004262d;
  if (param_6 != '\0') {
    pcVar3 = str_0004261c;
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
    recovered_21917(local_18,puVar1,param_3,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}
