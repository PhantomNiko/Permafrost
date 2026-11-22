/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define apppppppppppuStackY_548 (*(ulong *********** (*)[128])(frame + 24))
#define in_stack_fffffffffffffeb8 (*(ulong ****** *)(frame + 1048))
#define in_stack_fffffffffffffec0 (*(undefined8 *)(frame + 1056))
#define in_stack_fffffffffffffec8 (*(undefined8 *)(frame + 1064))
#define in_stack_fffffffffffffed0 (*(undefined8 *)(frame + 1072))
#define in_stack_fffffffffffffed8 (*(undefined8 *)(frame + 1080))
#define local_30 (*(ulong ******* *)(frame + 1328))
#define local_38 (*(ulong ******* *)(frame + 1320))
#define local_40 (*(ulong *)(frame + 1312))
#define local_48 (*(undefined8 *)(frame + 1304))
#define local_58 (*(undefined8 *)(frame + 1288))
#define local_68 (*(undefined8 *)(frame + 1272))
#define local_78 (*(undefined8 *)(frame + 1256))
#define local_88 (*(undefined8 *)(frame + 1240))
#define local_98 (*(undefined8 *)(frame + 1224))
#define local_a0 (*(undefined2 (*)[4])(frame + 1216))
#define str_020a2878 (*(char (*)[1])(0x20f4275U))
#define uStack_50 (*(undefined8 *)(frame + 1296))
#define uStack_60 (*(undefined8 *)(frame + 1280))
#define uStack_70 (*(undefined8 *)(frame + 1264))
#define uStack_80 (*(undefined8 *)(frame + 1248))
#define uStack_90 (*(undefined8 *)(frame + 1232))
uint recovered_20e6f60(long param_1,ulong *in_RCX,undefined1 *in_R8,ulong *******in_R9)

{
  unsigned char frame[1408] __attribute__((aligned(16))) = {0};

  ulong *******buffer;
  ulong *******pppppppuVar1;
  uchar uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *******in_R9_00;
  ulong ************ppppppppppppuVar5;
  ulong ******ppppppuVar6;
  ulong *******pppppppuVar7;

  local_38 = (ulong *******)0x0;
  local_30 = (ulong *******)0x0;
  local_40 = 0;
  local_a0[0] = 1;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar2 = recovered_20e7090(param_1,(undefined8 *)local_a0,(char *)(apppppppppppuStackY_548 + 0x80))
  ;
  if (uVar2 != '\0') {
    puVar4 = &local_40;
    ppppppppppppuVar5 = apppppppppppuStackY_548 + 0x80;
    ppppppuVar6 = (ulong ******)0xa0;
    uVar3 = recovered_20c0380((long)local_a0,(long *)&local_38,(ulong *)&local_30,puVar4,
                              (char *)ppppppppppppuVar5,0xa0);
    if ((char)uVar3 != '\0') {
      uVar3 = recovered_2096360(local_38,local_30,in_R9_00,puVar4,ppppppppppppuVar5,ppppppuVar6,
                                in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0,
                                in_stack_fffffffffffffec8,in_stack_fffffffffffffed0,
                                in_stack_fffffffffffffed8);
      pppppppuVar1 = local_30;
      buffer = local_38;
      if (local_38 != (ulong *******)0x0) {
        if (local_30 != (ulong *******)0x0) {
          pppppppuVar7 = (ulong *******)0x0;
          do {
            recovered_2000bb0(buffer[(long)pppppppuVar7]);
            buffer[(long)pppppppuVar7] = (ulong ******)0x0;
            pppppppuVar7 = (ulong *******)((long)pppppppuVar7 + 1);
          } while (pppppppuVar1 != pppppppuVar7);
        }
        recovered_2000bb0(buffer);
      }
      recovered_20c0290(local_a0);
      return uVar3;
    }
    recovered_20c0290(local_a0);
  }
  pf_varargs_2039720__8_(str_020a2878,(ulonglong)(apppppppppppuStackY_548 + 0x80));
  return 0;
}
