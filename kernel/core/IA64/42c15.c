#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_0004674e
#define DAT_0004674e (*(uint8_t *)(0x4674eU))
#undef str_0004ac6f
#define str_0004ac6f (*(char (*)[1])(0x4ac6fU))
#undef str_0004ac87
#define str_0004ac87 (*(char (*)[1])(0x4ac87U))
#define local_40 (*(undefined2 * *)(frame + 48))
#define local_3c (*(undefined4 *)(frame + 52))
#define local_38 (*(int *)(frame + 56))
#define local_34 (*(char * *)(frame + 60))
#define local_30 (*(byte * *)(frame + 64))
#define local_2c (*(undefined2 * *)(frame + 68))
#define local_28 (*(uint *)(frame + 72))
#define local_24 (*(byte ** *)(frame + 76))
#define local_20 (*(byte * *)(frame + 80))
#define local_1c (*(uint *)(frame + 84))
#define local_18 (*(uint *)(frame + 88))
#define local_14 (*(uint *)(frame + 92))
#define iStackY_60 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42c15
 */

byte recovered_42c15(uint param_1,byte **param_2,int *param_3,int param_4,int *param_5,char param_6)

{
  unsigned char frame[144];

  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined2 *value;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined1 uVar11;
  byte *pbVar10;
  uint uVar12;
  byte **ppbVar13;

  local_30 = (byte *)0x0;
  local_20 = &DAT_0004674e;
  if ((0xfffffffd < param_4 - 3U) && (*param_3 == 3)) {
    ppbVar13 = &local_30;
    local_18 = param_1;
    uVar3 = recovered_3faf5(param_1,(char *)param_2,(int)param_3,param_4,0,(int *)ppbVar13);
    param_1 = local_18;
    if ((char)uVar3 != '\0') {
      if (param_4 == 2) {
        ppbVar13 = &local_20;
        uVar3 = recovered_3faf5(local_18,(char *)param_2,(int)param_3,2,1,(int *)ppbVar13);
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
      value = recovered_211fa(0x20);
      if (value != (undefined2 *)0x0) {
        recovered_213af((int)value,0,0x20);
        *(undefined4 *)(value + 10) = 0;
        *(undefined4 *)(value + 0xc) = 0;
        *(undefined4 *)(value + 0xe) = 0;
        pbVar10 = &DAT_0004627c;
        if (local_30 != (byte *)0x0) {
          pbVar10 = local_30;
        }
        iVar4 = recovered_213fa((int)pbVar10);
        pvVar5 = recovered_29c3c((int)pbVar10,iVar4);
        *(void **)(value + 2) = pvVar5;
        if (pvVar5 != (void *)0x0) {
          pcVar6 = recovered_21460((char *)local_20,'w');
          if (param_6 != '\0') {
            if ((pcVar6 == (char *)0x0) &&
               (pcVar6 = recovered_21460((char *)local_20,'a'), pcVar6 == (char *)0x0)) {
              pbVar10 = &DAT_0004627c;
              if (local_30 != (byte *)0x0) {
                pbVar10 = local_30;
              }
              while ((*pbVar10 - 9 < 0x18 && ((0x80001fU >> (*pbVar10 - 9 & 0x1f) & 1) != 0))) {
                pbVar10 = pbVar10 + 1;
              }
              bVar2 = recovered_3fb5e((int)pbVar10,0x4acaa);
              if (bVar2) {
                iStackY_60 = 6;
              }
              else {
                bVar2 = recovered_3fb5e((int)pbVar10,0x4acb1);
                if (!bVar2) goto LAB_0004310c;
                iStackY_60 = 4;
              }
              pbVar10 = pbVar10 + iStackY_60 + -1;
              while( true ) {
                uVar7 = (uint)pbVar10[1];
                if ((0x17 < uVar7 - 9) || ((0x80001fU >> (uVar7 - 9 & 0x1f) & 1) == 0)) break;
                pbVar10 = pbVar10 + 1;
              }
              local_40 = (undefined2 *)0x0;
              local_3c = 0;
              local_38 = 0;
              uVar12 = 1;
              while ((uVar7 - 9 < 0x18 && ((0x80001fU >> (uVar7 - 9 & 0x1f) & 1) != 0))) {
                uVar7 = (uint)pbVar10[uVar12 + 1];
                uVar12 = uVar12 + 1;
              }
              local_2c = value;
              local_24 = param_2;
              uVar7 = recovered_213fa((int)(pbVar10 + 1));
              param_2 = local_24;
              local_28 = uVar12 - 1;
              local_1c = local_28;
              if (uVar7 < local_28) {
                local_1c = uVar7;
              }
              pbVar9 = pbVar10 + uVar7;
              for (; local_28 < uVar7; uVar7 = uVar7 - 1) {
                local_34 = (char *)(uint)*pbVar9;
                if (((char *)0x17 < local_34 + -9) ||
                   ((0x80001fU >> ((uint)(local_34 + -9) & 0x1f) & 1) == 0)) {
                  bVar1 = pbVar10[uVar12];
                  if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                    if (uVar12 < uVar7) {
                      uVar7 = uVar7 - (*pbVar9 == bVar1);
                    }
                    local_1c = uVar7;
                  }
                  else {
                    uVar12 = local_28;
                    local_1c = uVar7;
                  }
                  goto LAB_00043023;
                }
                pbVar9 = pbVar9 + -1;
              }
              uVar12 = local_28;
LAB_00043023:
              do {
                if (local_1c <= uVar12) {
                  puVar8 = recovered_29d41(&local_40);
                  if (puVar8 != (undefined1 *)0x0) {
                    iVar4 = recovered_213fa((int)puVar8);
                    *local_2c = 0x101;
                    *(undefined1 **)(local_2c + 4) = puVar8;
                    *(int *)(local_2c + 6) = iVar4;
                    value = local_2c;
                    goto LAB_000430c4;
                  }
                  break;
                }
                local_14 = CONCAT31(PF_PART3(local_14, 1),pbVar10[uVar12 + 1]);
                if ((pbVar10[uVar12 + 1] == 0x5c) && (uVar12 + 1 < local_1c)) {
                  bVar1 = pbVar10[uVar12 + 2];
                  if (bVar1 == 0x22) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),0x22);
                  }
                  else if (bVar1 == 0x27) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),0x27);
                  }
                  else if (bVar1 == 0x5c) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),0x5c);
                  }
                  else if (bVar1 == 0x74) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),9);
                  }
                  else if (bVar1 == 0x72) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),0xd);
                  }
                  else if (bVar1 == 0x6e) {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),10);
                  }
                  else {
                    local_14 = CONCAT31(PF_PART3(local_14, 1),bVar1);
                  }
                  uVar12 = uVar12 + 1;
                }
                uVar3 = recovered_29c88((int *)&local_40,(int)&local_14,1);
                uVar12 = uVar12 + 1;
              } while ((char)uVar3 != '\0');
              recovered_21203(local_38);
              value = local_2c;
            }
LAB_0004310c:
            recovered_454a4((int)value);
            recovered_21203((int)value);
            *param_5 = 0;
            param_5[1] = 0;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            param_5[8] = 0;
            return 1;
          }
          uVar7 = 0x101;
          if ((pcVar6 == (char *)0x0) &&
             (pcVar6 = recovered_21460((char *)local_20,'a'), pcVar6 == (char *)0x0)) {
            pcVar6 = recovered_21460((char *)local_20,'+');
            uVar7 = (uint)CONCAT11(pcVar6 != (char *)0x0,1);
          }
          pcVar6 = recovered_21460((char *)local_20,'r');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_21460((char *)local_20,'+');
            uVar7 = CONCAT31((int3)(uVar7 >> 8),(byte)(uVar7 >> 8) ^ 1 | pcVar6 != (char *)0x0);
          }
          pcVar6 = recovered_21460((char *)local_20,'a');
          *(char *)((int)value + 1) = (char)uVar7;
          uVar11 = (undefined1)(uVar7 >> 8);
          *(undefined1 *)(value + 1) = uVar11;
          if ((char)uVar7 != '\0') {
            local_28 = CONCAT31(PF_PART3(local_28, 1),uVar11);
            local_40 = (undefined2 *)0x0;
            local_14 = 0;
            local_34 = pcVar6;
            uVar3 = recovered_22705((int)local_30,&local_40,&local_14);
            if ((byte)uVar3 == 0) {
              if ((char)local_28 == '\0') {
                recovered_454a4((int)value);
                recovered_21203((int)value);
                *param_5 = 0;
                param_5[1] = 0;
                param_5[2] = 0;
                param_5[3] = 0;
                param_5[4] = 0;
                param_5[5] = 0;
                param_5[6] = 0;
                param_5[7] = 0;
                param_5[8] = 0;
                goto LAB_00042f67;
              }
            }
            else {
              local_2c = local_40;
              local_1c = local_14;
              recovered_21203(*(int *)(value + 4));
              *(undefined4 *)(value + 4) = 0;
              *(undefined4 *)(value + 6) = 0;
              *(undefined4 *)(value + 8) = 0;
              local_24 = recovered_211fa(local_1c + 1);
              uVar7 = local_1c;
              if (local_24 == (byte **)0x0) {
                recovered_454a4((int)value);
                recovered_21203((int)value);
                recovered_30f0b(local_18,(char *)param_2,str_0004ac87);
LAB_00042f67:
                return (byte)uVar3 ^ 1;
              }
              if (local_2c != (undefined2 *)0x0 && local_1c != 0) {
                recovered_21348((int)local_24,(int)local_2c,local_1c);
              }
              *(undefined1 *)((int)local_24 + uVar7) = 0;
              *(byte ***)(value + 4) = local_24;
              *(uint *)(value + 6) = uVar7;
            }
            uVar7 = (local_28 & 0xff) << 8;
            pcVar6 = local_34;
          }
          if (((((char)(uVar7 >> 8) == '\0') || (pcVar6 == (char *)0x0)) ||
              (*(int *)(value + 4) == 0)) ||
             (uVar3 = recovered_29c88((int *)(value + 10),*(int *)(value + 4),*(int *)(value + 6)),
             (char)uVar3 != '\0')) {
LAB_000430c4:
            iVar4 = recovered_454e0(param_5,(uint)value);
            if ((char)iVar4 != '\0') {
              return 1;
            }
          }
        }
        recovered_454a4((int)value);
        recovered_21203((int)value);
      }
      pcVar6 = str_0004ac87;
      param_1 = local_18;
      goto LAB_00042d7f;
    }
  }
  pcVar6 = str_0004ac6f;
  ppbVar13 = param_2;
LAB_00042d7f:
  recovered_30f0b(param_1,(char *)param_2,pcVar6,ppbVar13);
  return 0;
}
