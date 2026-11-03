#include "functions.h"
#undef DAT_00046184
#define DAT_00046184 (*(uint8_t *)(0x46184U))
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef DAT_00046383
#define DAT_00046383 (*(uint8_t *)(0x46383U))
#undef DAT_00046813
#define DAT_00046813 (*(uint8_t *)(0x46813U))
#undef DAT_0004681d
#define DAT_0004681d (*(uint8_t *)(0x4681dU))
#undef DAT_0004c5fc
#define DAT_0004c5fc (*(char *)(0x4c5fcU))
#undef DAT_000502b0
#define DAT_000502b0 (*(uint8_t *)(0x502b0U))
#undef DAT_000515c4
#define DAT_000515c4 (*(uint *)(0x515c4U))
#undef DAT_000515c8
#define DAT_000515c8 (*(uint8_t *)(0x515c8U))
#undef DAT_000516c8
#define DAT_000516c8 (*(uint16_t *)(0x516c8U))
#undef DAT_00081fe0
#define DAT_00081fe0 (*(uint *)(0x81fe0U))
#undef DAT_00081fe4
#define DAT_00081fe4 (*(int *)(0x81fe4U))
#undef DAT_00081fe8
#define DAT_00081fe8 (*(uint *)(0x81fe8U))
#undef DAT_00081fec
#define DAT_00081fec (*(uint8_t *)(0x81fecU))
#undef DAT_00081ff0
#define DAT_00081ff0 (*(uint8_t * *)(0x81ff0U))
#undef str_00046198
#define str_00046198 (*(char (*)[1])(0x46198U))
#undef str_000467fa
#define str_000467fa (*(char (*)[1])(0x467faU))
#undef str_00046806
#define str_00046806 (*(char (*)[1])(0x46806U))
#undef str_00046817
#define str_00046817 (*(char (*)[1])(0x46817U))
#undef str_00046821
#define str_00046821 (*(char (*)[1])(0x46821U))
#undef str_00046850
#define str_00046850 (*(char (*)[1])(0x46850U))
#undef str_00046875
#define str_00046875 (*(char (*)[1])(0x46875U))
#undef str_00046890
#define str_00046890 (*(char (*)[1])(0x46890U))
#undef str_00046896
#define str_00046896 (*(char (*)[1])(0x46896U))
#undef str_0004689c
#define str_0004689c (*(char (*)[1])(0x4689cU))
#undef str_000468aa
#define str_000468aa (*(char (*)[1])(0x468aaU))
#define local_500 (*(char (*)[544])(frame + 40))
#define local_2e0 (*(undefined1 (*)[256])(frame + 584))
#define local_1e0 (*(char (*)[160])(frame + 840))
#define local_140 (*(char (*)[64])(frame + 1000))
#define local_100 (*(char (*)[32])(frame + 1064))
#define local_e0 (*(char (*)[32])(frame + 1096))
#define local_c0 (*(char (*)[96])(frame + 1128))
#define local_60 (*(char (*)[32])(frame + 1224))
#define local_40 (*(char (*)[32])(frame + 1256))
#define local_20 (*(uint *)(frame + 1288))
#define local_1c (*(uint *)(frame + 1292))
#define local_18 (*(uint *)(frame + 1296))
#define local_14 (*(undefined * *)(frame + 1300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29de8
 */

void recovered_29de8(uint columns)

{
  unsigned char frame[1352];

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint extraout_EDX = 0;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;

  DAT_00081fe0 = 0;
  DAT_00081fe4 = 0;
  DAT_00081fe8 = 0;
  DAT_00081fec = 0;
  local_18 = columns;
  lVar7 = recovered_2a26e();
  recovered_2a1c2((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),local_40);
  uVar2 = recovered_20e79();
  recovered_2a1c2(uVar2,0,local_100);
  uVar2 = recovered_2a34f();
  recovered_2a1c2(uVar2,extraout_EDX,local_e0);
  uVar8 = recovered_2a361();
  pcVar10 = local_60;
  recovered_2a1c2((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),pcVar10);
  pcVar9 = str_00046817;
  recovered_21de7(local_1e0,0xa0,str_000467fa,str_00046806,&DAT_00046813,str_00046817);
  if (local_e0[0] != '\0') {
    pcVar9 = &DAT_0004681d;
    iVar3 = recovered_21415((int)local_e0,0x4681d);
    if (iVar3 != 0) {
      pcVar9 = pcVar10;
      iVar3 = recovered_21415((int)local_e0,(int)pcVar10);
      if (iVar3 != 0) {
        pcVar9 = str_00046821;
        pcVar10 = local_e0;
        goto LAB_00029f22;
      }
    }
  }
  if (local_60[0] != '\0') {
    pcVar9 = &DAT_0004681d;
    iVar3 = recovered_21415((int)pcVar10,0x4681d);
    if (iVar3 != 0) {
      pcVar9 = str_00046850;
      goto LAB_00029f22;
    }
  }
  pcVar10 = pcVar9;
  pcVar9 = str_00046875;
LAB_00029f22:
  recovered_21de7(local_c0,0x60,pcVar9,local_40,local_100,pcVar10,local_60);
  recovered_21de7(local_140,0x40,str_00046890,str_00046896);
  if (DAT_0004c5fc == '\x01') {
    recovered_2a37f(0x617e0,str_00046198,1);
    recovered_2a37f(0x617e0,&DAT_00046264,0);
    recovered_2a37f(0x617e0,local_1e0,1);
    recovered_2a37f(0x617e0,local_140,1);
    recovered_2a37f(0x617e0,local_c0,1);
    recovered_2a37f(0x617e0,&DAT_00046264,0);
    recovered_2a37f(0x617e0,str_0004689c,1);
    recovered_2a37f(0x617e0,&DAT_00046264,0);
    recovered_2a37f(0x617e0,str_000468aa,1);
    recovered_2a37f(0x617e0,&DAT_00046264,0);
  }
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_000515c8;
  uVar2 = 0;
  while (uVar2 < DAT_000515c4) {
    uVar4 = (uint)(ushort)(&DAT_000516c8)[uVar2 * 0x81];
    local_1c = uVar2;
    if (uVar4 == 0) {
      recovered_2a37f(0x617e0,&DAT_00046264,0);
    }
    else {
      uVar2 = 0;
      local_20 = uVar4;
      while ((uVar1 = local_18, uVar2 < local_20 && (DAT_00081fe0 < 0x200))) {
        uVar6 = uVar4 - local_18;
        if (local_18 <= uVar4) {
          uVar4 = local_18;
        }
        recovered_2a413(0x617e0,(int)(local_14 + uVar2),uVar4,0);
        uVar2 = uVar2 + uVar1;
        uVar4 = uVar6;
      }
    }
    local_14 = local_14 + 0x102;
    uVar2 = local_1c + 1;
  }
  puVar5 = &DAT_00046184;
  if (DAT_00081ff0 != (undefined *)0x0) {
    puVar5 = DAT_00081ff0;
  }
  recovered_21de7(local_500,0x220,&DAT_00046383,puVar5,&DAT_000502b0);
  uVar2 = 0;
  local_14 = (undefined *)recovered_213fa((int)local_500);
  while( true ) {
    uVar4 = (int)local_14 - uVar2;
    if (local_14 < uVar2 || uVar4 == 0) break;
    if (0x1ff < DAT_00081fe0) goto LAB_0002a168;
    if (local_18 <= uVar4) {
      uVar4 = local_18;
    }
    recovered_21348((int)local_2e0,(int)(local_500 + uVar2),uVar4);
    local_2e0[uVar4] = 0;
    recovered_2a37f(0x617e0,local_2e0,0);
    uVar2 = uVar2 + uVar4;
  }
  if (DAT_00081fe0 == 0) {
    recovered_2a37f(0x617e0,&DAT_00046264,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_0002a168:
    uVar2 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_00081fe0 < 0x200) {
        recovered_2a37f(0x617e0,&DAT_00046264,0);
      }
    }
    else {
      uVar2 = (uint)local_14 % local_18;
    }
  }
  DAT_00081fe4 = DAT_00081fe0 - 1;
  DAT_00081fe8 = uVar2;
  DAT_00081fec = 1;
  return;
}
