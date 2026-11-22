#include "functions.h"
#undef DAT_82473983
#define DAT_82473983 (*(uint8_t *)(0x82473983U))
#undef DAT_82473a33
#define DAT_82473a33 (*(uint8_t *)(0x82473a33U))
#undef DAT_8247442e
#define DAT_8247442e (*(uint8_t *)(0x8247442eU))
#undef DAT_8247931d
#define DAT_8247931d (*(uint8_t *)(0x8247931dU))
#undef DAT_824866fc
#define DAT_824866fc (*(uint64_t volatile *)(0x824866fcU))
#undef str_82475be5
#define str_82475be5 (*(char (*)[1])(0x82475be5U))
#undef str_824792ad
#define str_824792ad (*(char (*)[1])(0x824792adU))
#undef str_824792cc
#define str_824792cc (*(char (*)[1])(0x824792ccU))
#undef str_824792e5
#define str_824792e5 (*(char (*)[1])(0x824792e5U))
#undef str_824792fb
#define str_824792fb (*(char (*)[1])(0x824792fbU))
#undef str_82479321
#define str_82479321 (*(char (*)[1])(0x82479321U))
#undef str_824867b4
#define str_824867b4 (*(char volatile (*)[1])(0x824867b4U))
#define acStack_10042 (*(char (*)[241])(frame + 4142))
#define uStack_10048 (*(uint *)(frame + 4136))
#define uStack_10050 (*(undefined8 *)(frame + 4128))
#define acStack_10140 (*(char (*)[240])(frame + 3888))
#define cStack_10141 (*(char *)(frame + 3887))
#define acStack_11051 (*(char (*)[3856])(frame + 31))
#define uStack_11060 (*(undefined4 *)(frame + 16))
#define iStack_74 (*(int *)(frame + 69628))
#define uStack_78 (*(uint *)(frame + 69624))
#define uStack_7c (*(undefined4 *)(frame + 69620))
#define auStack_260 (*(undefined1 (*)[484])(frame + 69136))
#define acStack_fe60 (*(char (*)[64512])(frame + 4624))
#define auStack_ff51 (*(undefined1 (*)[241])(frame + 4383))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x82427e2c
 */

undefined4 recovered_82427e2c(undefined8 param_1,char *param_2,undefined8 param_3)

{
  unsigned char frame[69776] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint capacity;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  bool bVar15;
  undefined4 uVar16;

  bVar15 = false;
  uVar16 = 0;
  uVar13 = 0;
  bVar3 = false;
  bVar2 = false;
  uVar14 = 0;
  uStack_10050 = param_1;
  bVar4 = true;
LAB_82427e84:
  bVar9 = bVar4;
  iVar6 = recovered_82423f78(&uStack_10050,&cStack_10141,0xf1);
  capacity = (uint)param_3;
  if (iVar6 != 0) {
    if (bVar9) goto code_r0x82427ea0;
    goto LAB_82427ec4;
  }
  if (uVar14 == 0) {
    recovered_82401ff0(acStack_11051,0xf1,&DAT_82473a33,0x824867b4);
    uVar14 = 1;
  }
  uVar11 = 0;
  uStack_11060 = 1;
  do {
    if ((uVar14 & 0xffffffff) <= uVar11) {
      return uStack_11060;
    }
    uStack_10048 = 0;
    recovered_82425908(acStack_11051 + uVar11 * 0xf1,str_824867b4,auStack_ff51);
    iVar6 = recovered_82425b14(auStack_ff51,auStack_260);
    pcVar7 = str_824792fb;
    if (iVar6 == 0) {
LAB_824281d0:
      recovered_82424658(param_2,capacity,pcVar7,(ulonglong)auStack_ff51);
      uStack_11060 = 0;
    }
    else {
      if (1 < (uint)uVar14) {
        recovered_82424658(param_2,capacity,&DAT_8247931d,(ulonglong)auStack_ff51);
      }
      if (iStack_74 == 2) {
        if (!bVar2) {
LAB_82678b4c:
          recovered_82441f48(auStack_ff51,acStack_10042);
          recovered_82400b14(acStack_fe60,0,0xfc00);
          iVar6 = PF_PART4(DAT_824866fc, 0);
          uVar5 = recovered_824225d0(iVar6,acStack_10042,acStack_fe60,0x80,&uStack_10048);
          if (uVar5 == 0) {
            pcVar7 = str_82479321;
            goto LAB_824281d0;
          }
          if (0x80 < uStack_10048) {
            uStack_10048 = 0x80;
          }
          if (bVar3) {
            recovered_8244a564(param_2,param_3,&DAT_82473983,0,1,uVar16,uVar13);
            recovered_8244a564(param_2,param_3,&DAT_8247442e,0,1,uVar16,uVar13);
          }
          pcVar7 = acStack_fe60;
          for (uVar12 = 0; uVar12 < uStack_10048; uVar12 = uVar12 + 1) {
            iVar6 = recovered_8244274c(acStack_10042,pcVar7);
            if ((iVar6 != 0) && ((bVar3 || bVar15 || (*pcVar7 != '.')))) {
              if (*(int *)(pcVar7 + 0x1ec) == 2) {
                bVar8 = 1;
              }
              else {
                bVar8 = (byte)pcVar7[0x1e8] >> 1 & 1;
              }
              recovered_8244a564(param_2,param_3,pcVar7,*(undefined4 *)(pcVar7 + 0x1e4),bVar8,uVar16
                                 ,uVar13);
            }
            pcVar7 = pcVar7 + 0x1f8;
          }
          goto LAB_824281e4;
        }
        uVar5 = 1;
      }
      else {
        if (!bVar2 && (uStack_78 & 2) != 0) goto LAB_82678b4c;
        uVar5 = uStack_78 >> 1 & 1;
      }
      recovered_8244a564(param_2,param_3,auStack_260,uStack_7c,uVar5,uVar16,uVar13);
    }
LAB_824281e4:
    uVar11 = uVar11 + 1;
  } while( true );
code_r0x82427ea0:
  iVar6 = recovered_82400e0c(&cStack_10141,(char *)0x824792aa);
  bVar4 = false;
  if (iVar6 != 0) {
    iVar6 = recovered_82400e0c(&cStack_10141,str_82475be5);
    if (iVar6 == 0) {
      recovered_82423f1c(param_2,param_3,str_824792ad);
      return 1;
    }
LAB_82427ec4:
    if ((bool)(bVar9 & cStack_10141 == '-') && acStack_10140[0] != '\0') {
      pcVar7 = acStack_10140;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                do {
                  pcVar10 = pcVar7 + 1;
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar10;
                } while (cVar1 == '1');
                if (cVar1 != 'A') break;
                bVar15 = true;
              }
              if (cVar1 != 'F') break;
              uVar13 = 1;
            }
            if (cVar1 != 'a') break;
            bVar3 = true;
          }
          if (cVar1 != 'd') break;
          bVar2 = true;
        }
        if (cVar1 != 'l') break;
        uVar16 = 1;
      }
      if (cVar1 == '\0') {
        bVar4 = true;
        goto LAB_82427e84;
      }
      recovered_82424658(param_2,capacity,str_824792cc,(ulong)(uint)(int)cVar1);
    }
    else {
      if (uVar14 != 0x10) {
        recovered_82401ff0
                  (acStack_11051 + uVar14 * 0xf1,0xf1,&DAT_82473a33,(ulonglong)&cStack_10141);
        uVar14 = uVar14 + 1;
        bVar4 = bVar9;
        goto LAB_82427e84;
      }
      recovered_82423f1c(param_2,param_3,str_824792e5);
    }
    return 0;
  }
  goto LAB_82427e84;
}
