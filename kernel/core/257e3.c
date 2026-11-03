#include "functions.h"
#undef DAT_0002ccc0
#define DAT_0002ccc0 (*(uint8_t *)(0x2ccc0U))
#undef str_0002ccc9
#define str_0002ccc9 (*(char (*)[1])(0x2ccc9U))
#undef str_0002cceb
#define str_0002cceb (*(char (*)[1])(0x2ccebU))
#undef str_0002cd06
#define str_0002cd06 (*(char (*)[1])(0x2cd06U))
#undef str_0002cd33
#define str_0002cd33 (*(char (*)[1])(0x2cd33U))
#undef str_0002cd4e
#define str_0002cd4e (*(char (*)[1])(0x2cd4eU))
#undef str_0002cd67
#define str_0002cd67 (*(char (*)[1])(0x2cd67U))
#undef str_0002cd8d
#define str_0002cd8d (*(char (*)[1])(0x2cd8dU))
#undef str_0002cdab
#define str_0002cdab (*(char (*)[1])(0x2cdabU))
#undef str_0002cde2
#define str_0002cde2 (*(char (*)[1])(0x2cde2U))
#undef str_0002ce03
#define str_0002ce03 (*(char (*)[1])(0x2ce03U))
#undef str_0002ce2d
#define str_0002ce2d (*(char (*)[1])(0x2ce2dU))
#define local_80 (*(uint *)(frame + 44))
#define local_7c (*(uint *)(frame + 48))
#define local_78 (*(uint (*)[2])(frame + 52))
#define local_70 (*(int * *)(frame + 60))
#define local_6c (*(undefined4 *)(frame + 64))
#define local_68 (*(undefined4 *)(frame + 68))
#define local_64 (*(undefined4 *)(frame + 72))
#define local_60 (*(undefined4 *)(frame + 76))
#define local_5c (*(undefined4 *)(frame + 80))
#define local_58 (*(uint *)(frame + 84))
#define local_54 (*(int *)(frame + 88))
#define local_50 (*(uint * *)(frame + 92))
#define local_4c (*(uint * *)(frame + 96))
#define local_48 (*(uint *)(frame + 100))
#define local_44 (*(uint *)(frame + 104))
#define local_40 (*(uint (*)[2])(frame + 108))
#define local_38 (*(int * *)(frame + 116))
#define local_34 (*(uint *)(frame + 120))
#define local_30 (*(int *)(frame + 124))
#define local_2c (*(uint (*)[2])(frame + 128))
#define local_24 (*(int * *)(frame + 136))
#define local_20 (*(undefined4 *)(frame + 140))
#define local_1c (*(uint *)(frame + 144))
#define line (*(uint * *)(frame + 16))
#define local_18 (*(int *)(frame + 148))
#define local_14 (*(uint *)(frame + 152))
#define pcVar9 (*(char * *)(frame + 20))
#define pcVar10 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x257e3
 */

undefined4 recovered_257e3(int param_1,uint param_2,uint *param_3)

{
  unsigned char frame[204];

  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_EAX = 0;
  uint uVar7;
  uint uVar8;
  
  local_18 = param_1;
  local_14 = param_2;
  do {
    line = &local_34;
    local_34 = *param_3;
    local_20 = CONCAT31((int3)((uint)param_1 >> 8),param_2 <= local_34);
    if (param_2 <= local_34) {
      return local_20;
    }
    local_30 = *(int *)(local_18 + local_34 * 4);
    uVar3 = recovered_26135(local_30,local_2c);
    if ((char)uVar3 == '\0') {
      pcVar10 = str_0002cceb;
      pcVar9 = (char *)0x0;
LAB_00025fe1:
      recovered_2609c((uint)line,pcVar9,pcVar10);
      return 0;
    }
    if (local_2c[0] == 0) {
      recovered_26419(local_2c);
LAB_0002597d:
      *param_3 = *param_3 + 1;
LAB_0002597f:
      param_1 = 2;
    }
    else {
      iVar6 = *local_24;
      iVar4 = recovered_26458(iVar6,0x2ccc0);
      if ((((char)iVar4 != '\0') || (iVar4 = recovered_26458(iVar6,0x2ccc4), (char)iVar4 != '\0'))
         || (iVar4 = recovered_26458(iVar6,0x2ccc9), (char)iVar4 != '\0')) {
        recovered_26419(local_2c);
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      }
      iVar4 = recovered_26458(iVar6,0x2cd03);
      if ((char)iVar4 == '\0') {
        iVar4 = recovered_26458(iVar6,0x2cd87);
        param_2 = local_14;
        if ((char)iVar4 == '\0') {
          iVar6 = recovered_26458(iVar6,0x2cddb);
          if ((char)iVar6 != '\0') {
            uVar8 = *param_3 + 1;
            local_1c = 0;
            iVar6 = local_18;
            uVar7 = local_14;
            local_7c = uVar8;
LAB_00025b07:
            if (uVar7 <= uVar8) {
              pcVar10 = str_0002cde2;
              goto LAB_00025fbc;
            }
            uVar3 = recovered_26135(*(int *)(iVar6 + uVar8 * 4),local_78);
            if ((char)uVar3 == '\0') goto LAB_00025b8e;
            if (local_78[0] == 0) goto LAB_00025b8e;
            iVar6 = *local_70;
            iVar5 = recovered_26458(iVar6,0x2cd03);
            iVar4 = 1;
            if ((char)iVar5 == '\0') {
              iVar4 = 1;
              iVar5 = recovered_26458(iVar6,0x2cd87);
              if (((char)iVar5 != '\0') ||
                 (iVar5 = recovered_26458(iVar6,0x2cddb), (char)iVar5 != '\0')) goto LAB_00025b7d;
              iVar4 = recovered_26458(iVar6,0x2ccc9);
              if ((char)iVar4 != '\0') {
                iVar4 = -1;
                if (local_1c != 0) goto LAB_00025b7d;
                recovered_26419(local_78);
                do {
                  iVar6 = local_18;
                  local_44 = local_7c;
                  uVar3 = recovered_257e3(local_18,local_14,&local_44);
                  if ((char)uVar3 == '\0') {
LAB_00026021:
                    recovered_26419(local_2c);
                    return 0;
                  }
                  if (local_44 != uVar8) {
                    recovered_26419(local_2c);
                    pcVar10 = str_0002ce03;
LAB_00025fbc:
                    pcVar9 = str_0002ccc9;
                    line = &local_34;
                    goto LAB_00025fe1;
                  }
                  local_54 = *(int *)(iVar6 + uVar8 * 4);
                  local_58 = uVar8;
                  uVar3 = recovered_26135(local_54,local_40);
                  if ((char)uVar3 == '\0') {
                    pcVar10 = str_0002cceb;
                    pcVar9 = (char *)0x0;
LAB_00026053:
                    line = &local_58;
                    goto LAB_00025fe1;
                  }
                  local_78[0] = 0;
                  local_78[1] = 0;
                  local_70 = (int *)0x0;
                  local_6c = 0;
                  local_68 = 0;
                  local_50 = &local_58;
                  local_64 = 0;
                  local_60 = 0;
                  local_48 = 1;
                  local_5c = 0;
                  local_4c = local_40;
                  uVar3 = recovered_26473(&local_50,local_78);
                  if ((char)uVar3 == '\0') {
                    recovered_26419(local_40);
                    goto LAB_00026021;
                  }
                  if (local_48 != local_40[0]) {
                    recovered_24daf(local_78);
                    recovered_26419(local_40);
                    recovered_26419(local_2c);
                    pcVar10 = str_0002ce2d;
                    pcVar9 = (char *)local_38[local_48];
                    goto LAB_00026053;
                  }
                  uVar3 = recovered_26564((int *)local_78);
                  recovered_24daf(local_78);
                  recovered_26419(local_40);
                } while ((char)uVar3 == '\0');
                *param_3 = uVar8 + 1;
                recovered_26419(local_2c);
LAB_00025df1:
                param_1 = 2;
                goto LAB_00025be8;
              }
              iVar6 = recovered_26458(iVar6,0x2ccc0);
              uVar7 = local_1c;
              bVar1 = local_1c != 0;
              recovered_26419(local_78);
              local_1c = uVar7 - (bVar1 & (byte)iVar6);
            }
            else {
LAB_00025b7d:
              recovered_26419(local_78);
              local_1c = local_1c + iVar4;
            }
            iVar6 = local_18;
            uVar7 = local_14;
LAB_00025b8e:
            uVar8 = uVar8 + 1;
            goto LAB_00025b07;
          }
          local_78[0] = local_78[0] & 0xffffff00;
          uVar3 = recovered_266b0((int)line,local_2c,(undefined1 *)local_78);
          param_2 = local_14;
          if (((char)uVar3 == '\0') ||
             (((char)local_78[0] == '\0' &&
              (uVar3 = recovered_26d92((int *)line,(int *)local_2c,(undefined4 *)0x0),
              (char)uVar3 == '\0')))) {
            recovered_26419(local_2c);
LAB_00025c64:
            param_1 = 1;
          }
          else {
            recovered_26419(local_2c);
            *param_3 = *param_3 + 1;
            param_1 = 0;
          }
        }
        else {
          local_1c = *param_3;
          local_7c = local_1c + 1;
          local_44 = 0;
          bVar1 = recovered_265be(local_18,local_14,local_7c,&local_44);
          if (bVar1) {
            do {
              local_58 = local_1c;
              local_54 = *(int *)(local_18 + local_1c * 4);
              uVar3 = recovered_26135(local_54,local_40);
              if ((char)uVar3 == '\0') {
                recovered_2609c((uint)&local_58,(char *)0x0,str_0002cceb);
                goto LAB_00025d7f;
              }
              local_78[0] = 0;
              local_78[1] = 0;
              local_70 = (int *)0x0;
              local_6c = 0;
              local_68 = 0;
              local_50 = &local_58;
              local_64 = 0;
              local_60 = 0;
              local_48 = 1;
              local_5c = 0;
              local_4c = local_40;
              uVar3 = recovered_26473(&local_50,local_78);
              if ((char)uVar3 == '\0') {
                recovered_26419(local_40);
                recovered_26419(local_2c);
LAB_00025dd5:
                param_1 = 1;
                goto LAB_00025ddb;
              }
              if (local_48 != local_40[0]) {
                recovered_24daf(local_78);
                recovered_26419(local_40);
                recovered_26419(local_2c);
                recovered_2609c((uint)&local_58,(char *)local_38[local_48],str_0002cdab);
                goto LAB_00025dd5;
              }
              uVar3 = recovered_26564((int *)local_78);
              recovered_24daf(local_78);
              recovered_26419(local_40);
              param_2 = local_14;
              if ((char)uVar3 == '\0') {
                recovered_26419(local_2c);
                *param_3 = local_44 + 1;
                goto LAB_00025df1;
              }
              local_80 = local_7c;
              uVar3 = recovered_257e3(local_18,local_14,&local_80);
              if ((char)uVar3 == '\0') {
                recovered_26419(local_2c);
                goto LAB_00025d7f;
              }
            } while ((local_80 < param_2) &&
                    (iVar6 = recovered_2605b(*(int *)(local_18 + local_80 * 4),0x2ccc0),
                    (char)iVar6 != '\0'));
            recovered_26419(local_2c);
            recovered_2609c((uint)&local_58,&DAT_0002ccc0,str_0002cd8d);
          }
          else {
            recovered_2609c((uint)&local_34,&DAT_0002ccc0,str_0002cd8d);
          }
LAB_00025d7f:
          param_1 = 1;
        }
      }
      else {
        local_78[0] = 0;
        local_78[1] = 0;
        local_70 = (int *)0x0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_48 = 1;
        local_5c = 0;
        local_50 = line;
        local_4c = local_2c;
        uVar3 = recovered_26473(&local_50,local_78);
        if ((char)uVar3 == '\0') {
          recovered_26419(local_2c);
        }
        else {
          if (local_48 == local_2c[0]) {
            uVar3 = recovered_26564((int *)local_78);
            recovered_24daf(local_78);
            recovered_26419(local_2c);
            param_2 = local_14;
            uVar7 = *param_3 + 1;
            *param_3 = uVar7;
            if ((char)uVar3 == '\0') {
              iVar6 = 0;
LAB_00025c71:
              if (uVar7 < param_2) {
                uVar3 = recovered_26135(*(int *)(local_18 + uVar7 * 4),local_40);
                if (((char)uVar3 == '\0') || (local_40[0] == 0)) break;
                iVar4 = *local_38;
                iVar5 = recovered_26458(iVar4,0x2cd03);
                if (((char)iVar5 != '\0') ||
                   ((iVar5 = recovered_26458(iVar4,0x2cd87), (char)iVar5 != '\0' ||
                    (iVar5 = recovered_26458(iVar4,0x2cddb), (char)iVar5 != '\0')))) {
                  recovered_26419(local_40);
                  iVar6 = iVar6 + 1;
LAB_00025ccf:
                  param_2 = local_14;
                  break;
                }
                iVar5 = recovered_26458(iVar4,0x2ccc0);
                if ((char)iVar5 == '\0') {
                  local_1c = local_1c & 0xffffff00;
                  iVar5 = recovered_26458(iVar4,0x2ccc9);
                  if ((char)iVar5 == '\0') {
                    iVar4 = recovered_26458(iVar4,0x2ccc4);
                    cVar2 = (char)local_1c;
                    if (((byte)iVar4 & iVar6 == 0) != 0) goto LAB_00025f41;
                    recovered_26419(local_40);
                  }
                  else {
                    recovered_26419(local_40);
                    bVar1 = iVar6 == 0;
                    iVar6 = iVar6 + -1;
                    if (bVar1) {
                      iVar6 = 0;
                    }
                  }
                  goto LAB_00025ccf;
                }
                cVar2 = (char)iVar5;
                if (iVar6 != 0) {
                  recovered_26419(local_40);
                  iVar6 = iVar6 + -1;
                  goto LAB_00025ccf;
                }
LAB_00025f41:
                recovered_26419(local_40);
                param_2 = local_14;
                if (cVar2 == '\0') {
                  *param_3 = uVar7 + 1;
                  uVar3 = recovered_257e3(local_18,local_14,param_3);
                  param_1 = 1;
                  if ((char)uVar3 == '\0') goto LAB_00025d82;
                  if ((param_2 <= *param_3) ||
                     (iVar6 = recovered_2605b(*(int *)(local_18 + *param_3 * 4),0x2ccc0),
                     (char)iVar6 == '\0')) {
                    pcVar9 = str_0002cd67;
                    goto LAB_00025e17;
                  }
                  uVar7 = *param_3;
                }
                *param_3 = uVar7 + 1;
                param_1 = 2;
LAB_00025ddb:
                goto LAB_00025d82;
              }
              pcVar10 = str_0002cd33;
              pcVar9 = &DAT_0002ccc0;
            }
            else {
              uVar3 = recovered_257e3(local_18,local_14,param_3);
              iVar6 = local_18;
              param_1 = 1;
              if ((char)uVar3 == '\0') goto LAB_00025d82;
              if (param_2 <= *param_3) {
                pcVar9 = str_0002cd33;
LAB_00025e17:
                recovered_2609c((uint)&local_34,&DAT_0002ccc0,pcVar9);
                goto LAB_00025c64;
              }
              iVar4 = recovered_2605b(*(int *)(local_18 + *param_3 * 4),0x2ccc4);
              if ((char)iVar4 == '\0') {
                iVar6 = recovered_2605b(*(int *)(iVar6 + *param_3 * 4),0x2ccc0);
                if ((char)iVar6 != '\0') goto LAB_0002597d;
                pcVar10 = str_0002cd4e;
                pcVar9 = (char *)0x0;
              }
              else {
                local_40[0] = 0;
                bVar1 = recovered_265be(iVar6,param_2,*param_3 + 1,local_40);
                if (bVar1) {
                  *param_3 = local_40[0] + 1;
                  goto LAB_0002597f;
                }
                pcVar10 = str_0002cd33;
                pcVar9 = &DAT_0002ccc0;
              }
            }
            recovered_2609c((uint)&local_34,pcVar9,pcVar10);
            goto LAB_00025d7f;
          }
          recovered_24daf(local_78);
          recovered_26419(local_2c);
          recovered_2609c((uint)line,(char *)local_24[local_48],str_0002cd06);
        }
        param_1 = 1;
LAB_00025be8:
        param_2 = local_14;
      }
    }
LAB_00025d82:
    if (param_1 == 1) {
      return local_20;
    }
  } while( true );
  uVar7 = uVar7 + 1;
  goto LAB_00025c71;
}

