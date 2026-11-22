/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c0134 (*(uint32_t volatile *)(0x214b108U))
#define DAT_020c0138 (*(uint32_t volatile *)(0x214b10cU))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(uint *)(frame + 20))
void recovered_209fff0(uint incoming_ecx,uint incoming_edx,uint param_3,uint param_4,byte param_5,
                      byte param_6,byte param_7)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  uVar10 = param_3 - incoming_ecx;
  bVar1 = (int)incoming_ecx <= (int)param_3;
  iVar11 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
  uVar5 = param_4 - incoming_edx;
  bVar2 = (int)incoming_edx <= (int)param_4;
  iVar6 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  iVar8 = iVar11 - iVar6;
  local_1c = DAT_020c0134;
  local_18 = DAT_020c0138;
  while( true ) {
    if ((((-1 < (int)incoming_ecx) && (-1 < (int)incoming_edx)) && (incoming_ecx < local_1c)) &&
       (incoming_edx < local_18)) {
      recovered_20a0100(incoming_ecx,incoming_edx,(uint)param_5,(uint)param_6,param_7);
      local_1c = DAT_020c0134;
      local_18 = DAT_020c0138;
    }
    if ((incoming_ecx == param_3) && (incoming_edx == param_4)) break;
    iVar4 = iVar6;
    iVar7 = (uint)(uVar10 != 0 && bVar1) * 2 + -1;
    if (iVar8 * 2 <= -iVar6) {
      iVar4 = 0;
      iVar7 = 0;
    }
    iVar3 = (uint)(uVar5 != 0 && bVar2) * 2 + -1;
    iVar9 = iVar11;
    if (iVar11 <= iVar8 * 2) {
      iVar3 = 0;
      iVar9 = 0;
    }
    iVar8 = (iVar8 - iVar4) + iVar9;
    incoming_ecx = incoming_ecx + iVar7;
    incoming_edx = incoming_edx + iVar3;
  }
  return;
}
