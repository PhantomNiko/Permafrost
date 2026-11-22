/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208feb8 (*(uint8_t *)(0x20cd4afU))
#define local_14 (*(uint *)(frame + 60))
#define local_18 (*(uint *)(frame + 56))
#define local_38 (*(char (*)[32])(frame + 24))
int recovered_20829e0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *left;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  if (incoming_ecx == 0) {
    return 0;
  }
  uVar3 = 0;
LAB_02058674:
  pf_varargs_2003aa0__4_(local_38,0x20,&DAT_0208feb8,uVar3 + 1);
  uVar1 = *(uint *)(incoming_ecx + 4);
  if (uVar1 == 0) {
    return uVar3;
  }
  iVar5 = 0;
  uVar4 = 0;
  local_18 = uVar3 + 1;
  local_14 = uVar3;
  do {
    left = *(char **)(*(int *)(incoming_ecx + 0xc) + iVar5);
    if (left != (char *)0x0) {
      iVar2 = recovered_20022a0(left,local_38);
      if (iVar2 == 0) break;
      uVar1 = *(uint *)(incoming_ecx + 4);
    }
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 0x28;
    if (uVar1 <= uVar4) {
      return local_14;
    }
  } while( true );
  uVar3 = local_18;
  if ((int)uVar4 < 0) {
    return local_14;
  }
  goto LAB_02058674;
}
