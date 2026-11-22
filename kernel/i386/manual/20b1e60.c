/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c57d0 (*(uint8_t *)(0x20c57d0U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_02130860 (*(uint8_t volatile *)(0x2130860U))
#define str_020d2711 (*(char (*)[1])(0x20d2711U))
#define str_020d2736 (*(char (*)[1])(0x20d2736U))
#define str_020d2760 (*(char (*)[1])(0x20d2760U))
#define str_020d278b (*(char (*)[1])(0x20d278bU))
#define str_020d27c1 (*(char (*)[1])(0x20d27c1U))
#define in_stack_fffffee0 (*(undefined1 * *)(frame + 32))
#define in_stack_fffffedc (*(undefined1 * *)(frame + 28))
#define local_111 (*(char (*)[241])(frame + 47))
#define local_20 (*(uchar * *)(frame + 288))
#define local_1c (*(uint *)(frame + 292))
#define local_18 (*(uchar * *)(frame + 296))
#define local_14 (*(uint *)(frame + 300))


uint recovered_20b1e60(int incoming_ecx,int incoming_edx)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint incoming_edx_01;
  uint in_EDX;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uchar *unaff_EBX;
  uchar *puVar7;
  undefined3 uVar8;
  undefined1 *puVar9;
  uchar *incoming_ecx_00;
  char *pcVar10;

  cVar2 = DAT_021307dc;
  if (cVar2 != '\x01') {
    return 0;
  }
  if (incoming_edx != 0) {
    uVar4 = 0;
    puVar7 = (uchar *)incoming_ecx;
    local_20 = (uchar *)incoming_ecx;
    local_1c = incoming_edx;
LAB_020b1eb0:
    if ((*(byte *)(incoming_ecx + uVar4 * 0x100 + 0xfc) & 2) != 0) {
      incoming_ecx_00 = (uchar *)(incoming_ecx + uVar4 * 0x100);
      puVar9 = (undefined1 *)0x0;
      local_18 = puVar7;
      local_14 = uVar4;
      do {
        if (puVar7[(int)puVar9] == '/') {
          if (puVar9 + -0xf1 < (undefined1 *)0xffffff10) goto LAB_020b1f19;
          in_stack_fffffedc = puVar9;
          recovered_2001b70(local_111,incoming_ecx_00,(ulong)puVar9);
          local_111[(int)puVar9] = '\0';
          puVar7 = local_18;
          in_stack_fffffee0 = (undefined1 *)0x20b1f15;
          uVar4 = recovered_202bce0(local_111,incoming_edx_00);
          incoming_edx = extraout_EDX;
          if ((char)uVar4 == '\0') goto LAB_020b1f19;
        }
        else if (puVar7[(int)puVar9] == '\0') goto LAB_020b1e8d;
        puVar9 = puVar9 + 1;
      } while( true );
    }
    goto LAB_020b1ea1;
  }
  goto LAB_020b203f;
LAB_020b1e8d:
  in_stack_fffffee0 = (undefined1 *)0x20b1e94;
  uVar5 = recovered_202bce0((char *)incoming_ecx_00,incoming_edx);
  uVar4 = local_14;
  incoming_ecx = (int)local_20;
  incoming_edx = local_1c;
  if ((char)uVar5 == '\0') {
LAB_020b1f19:
    pcVar10 = str_020d2711;
    incoming_ecx = (int)incoming_ecx_00;
    goto LAB_020b1f22;
  }
LAB_020b1ea1:
  uVar4 = uVar4 + 1;
  puVar7 = puVar7 + 0x100;
  if (uVar4 == incoming_edx) goto LAB_020b1f2f;
  goto LAB_020b1eb0;
LAB_020b1f2f:
  uVar4 = 0;
  puVar7 = (uchar *)incoming_ecx;
LAB_020b1f6a:
  unaff_EBX = (uchar *)(uVar4 * 0x100);
  if ((((uchar *)(incoming_ecx + 0xfc))[(int)unaff_EBX] & 2) == 0) {
    unaff_EBX = unaff_EBX + incoming_ecx;
    puVar9 = (undefined1 *)0x0;
    local_18 = puVar7;
    local_14 = uVar4;
    do {
      if (puVar7[(int)puVar9] == '/') {
        if (puVar9 + -0xf1 < (undefined1 *)0xffffff10) goto LAB_020b1fd9;
        in_stack_fffffedc = puVar9;
        recovered_2001b70(local_111,unaff_EBX,(ulong)puVar9);
        local_111[(int)puVar9] = '\0';
        puVar7 = local_18;
        uVar4 = recovered_202bce0(local_111,incoming_edx_01);
        if ((char)uVar4 == '\0') goto LAB_020b1fd9;
      }
      else if (puVar7[(int)puVar9] == '\0') goto LAB_020b1f35;
      puVar9 = puVar9 + 1;
    } while( true );
  }
  goto LAB_020b1f5b;
LAB_020b1f35:
  uVar5 = recovered_2028050((int)unaff_EBX,*(void **)(unaff_EBX + 0xf4),*(int *)(unaff_EBX + 0xf8));
  uVar4 = local_14;
  incoming_ecx = (int)local_20;
  incoming_edx = local_1c;
  if ((char)uVar5 == '\0') {
LAB_020b1fd9:
    cVar2 = DAT_02130860;
    in_stack_fffffedc = &DAT_020c5084;
    if (cVar2 != '\0') {
      in_stack_fffffedc = &DAT_020c57d0;
    }
    in_stack_fffffee0 = &DAT_02130860;
    pcVar10 = str_020d2736;
    incoming_ecx = (int)unaff_EBX;
    goto LAB_020b1f22;
  }
LAB_020b1f5b:
  uVar4 = uVar4 + 1;
  puVar7 = puVar7 + 0x100;
  if (uVar4 == incoming_edx) goto LAB_020b2023;
  goto LAB_020b1f6a;
LAB_020b2023:
  do {
    in_stack_fffffee0 = (undefined1 *)0x20b202c;
    uVar4 = recovered_202af10((uchar *)incoming_ecx,incoming_edx);
    if (uVar4 == 0xffffffff) {
      pcVar10 = str_020d2760;
LAB_020b1f22:
      pf_varargs_202ce90__4__4__4_
                (pcVar10,incoming_ecx,(uint)in_stack_fffffedc,(uint)in_stack_fffffee0);
      return 0;
    }
    iVar1 = DAT_02130724;
    *(undefined4 *)(iVar1 + 0xfc + uVar4 * 0x110) = *(undefined4 *)(incoming_ecx + 0xfc);
    incoming_ecx = incoming_ecx + 0x100;
    incoming_edx = incoming_edx - 1;
  } while (incoming_edx != 0);
LAB_020b203f:
  bVar3 = recovered_204cfa0();
  uVar8 = (undefined3)((uint)unaff_EBX >> 8);
  if (bVar3) {
    pbVar6 = recovered_204dd80(0);
    if ((char)pbVar6 != '\0') {
      return CONCAT31(uVar8,1);
    }
    pcVar10 = str_020d278b;
    uVar4 = extraout_EDX_00;
  }
  else {
    uVar4 = recovered_203e3a0(in_EDX);
    if ((char)uVar4 != '\0') {
      return CONCAT31(uVar8,1);
    }
    pcVar10 = str_020d27c1;
    uVar4 = extraout_EDX_01;
  }
  recovered_203e190(pcVar10,uVar4);
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c57d0
#undef DAT_02130724
#undef DAT_021307dc
#undef DAT_02130860
#undef str_020d2711
#undef str_020d2736
#undef str_020d2760
#undef str_020d278b
#undef str_020d27c1
#undef in_stack_fffffee0
#undef in_stack_fffffedc
#undef local_111
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
