/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_404558f7 (*(uint8_t *)(0x824836e7U))
#define DAT_404558fc (*(uint8_t *)(0x824836ecU))
#define PTR_DAT_4045a238 (*(uint8_t * *)(0x82486650U))
#define acStack_210 (*(char (*)[320])(frame + 16))
#define acStack_d0 (*(char (*)[64])(frame + 336))
#define auStack_90 (*(undefined4 (*)[6])(frame + 400))
#define str_40455833 (*(char (*)[1])(0x82483623U))
#define str_404558e8 (*(char (*)[1])(0x824836d8U))
#define str_40455900 (*(char (*)[1])(0x824836f0U))
#define str_4045590e (*(char (*)[1])(0x824836feU))
#define str_4045591d (*(char (*)[1])(0x8248370dU))
#define str_40455930 (*(char (*)[1])(0x82483720U))
#define str_40455941 (*(char (*)[1])(0x82483731U))
#define str_40455954 (*(char (*)[1])(0x82483744U))
#define str_40455966 (*(char (*)[1])(0x82483756U))
#define str_4045596c (*(char (*)[1])(0x8248375cU))
#define uStack_70 (*(undefined8 *)(frame + 432))
#define uStack_78 (*(undefined8 *)(frame + 424))
uchar recovered_8246d3c4(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong in_x0;
  undefined8 extraout_x0 = 0;
  undefined8 uVar5;
  ulonglong in_x1;
  ulonglong in_x2;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;

  uStack_78 = 0;
  uStack_70 = 0;
  recovered_8246d608();
  uVar5 = extraout_x0;
  if ((int)extraout_x0 == 0) goto LAB_404488f0;
  uVar1 = PF_PART4(uStack_70, 4) & 0xffff;
  if ((uStack_70 & 0xffff00000000) == 0 || uVar1 == 0xffff) {
    uVar5 = 0;
    goto LAB_404488f0;
  }
  recovered_8246d608();
  recovered_8246d608();
  recovered_8246d608();
  uVar2 = (uint)uStack_70;
  uVar9 = (uint)uStack_70 >> 0x18;
  puVar6 = auStack_90;
  for (lVar10 = 0; lVar10 != 6; lVar10 = lVar10 + 1) {
    *puVar6 = 0;
    recovered_8246d608();
    puVar6 = puVar6 + 1;
  }
  uVar3 = uVar2 >> 0x10 & 0xff;
  pf_varargs_404019bc_3(acStack_d0,0x40,(char *)0x82483611U,in_x0,in_x1,in_x2);
  uVar2 = uVar2 >> 8;
  recovered_82401ff0(acStack_210,0x140,str_40455833);
  if (uVar9 == 0xc && uVar3 == 3) {
    uVar1 = (uVar2 & 0xff) >> 4 | uVar2 << 0x1c;
    if (uVar1 < 4) {
      pcVar8 = (&PTR_DAT_4045a238)[uVar1];
    }
    else {
      pcVar8 = str_404558e8;
    }
  }
  else if (uVar9 == 1 && uVar3 == 6) {
    pcVar8 = &DAT_404558f7;
  }
  else if (uVar9 == 4 && uVar3 == 3) {
    pcVar8 = &DAT_404558fc;
  }
  else {
    if (uVar9 == 2) {
      pcVar7 = str_40455941;
      pcVar8 = str_40455930;
      uVar9 = 0x14e4;
LAB_404488bc:
      bVar4 = uVar1 == uVar9;
    }
    else {
      if (uVar9 == 6) {
        pcVar8 = str_40455954;
        goto LAB_404488e0;
      }
      if (uVar9 == 3) {
        pcVar7 = str_4045590e;
        if (uVar1 != 0x10de) {
          pcVar7 = str_4045591d;
        }
        pcVar8 = str_40455900;
        uVar9 = 0x8086;
        goto LAB_404488bc;
      }
      bVar4 = uVar3 == 5 && uVar9 == 0xc;
      pcVar7 = str_4045596c;
      pcVar8 = str_40455966;
    }
    if (!bVar4) {
      pcVar8 = pcVar7;
    }
  }
LAB_404488e0:
  recovered_82449180(acStack_d0,(long)pcVar8,(long)acStack_210);
  uVar5 = 1;
LAB_404488f0:
  return (uchar)uVar5;
}
