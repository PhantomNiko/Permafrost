#include "functions.h"
#undef DAT_0002ce7f
#define DAT_0002ce7f (*(uint8_t *)(0x2ce7fU))
#undef DAT_0002ceaf
#define DAT_0002ceaf (*(uint8_t *)(0x2ceafU))
#undef DAT_0002ced2
#define DAT_0002ced2 (*(uint8_t *)(0x2ced2U))
#undef str_0002ce87
#define str_0002ce87 (*(char (*)[1])(0x2ce87U))
#undef str_0002ceb3
#define str_0002ceb3 (*(char (*)[1])(0x2ceb3U))
#undef str_0002ced4
#define str_0002ced4 (*(char (*)[1])(0x2ced4U))
#undef str_0002cee3
#define str_0002cee3 (*(char (*)[1])(0x2cee3U))
#undef str_0002cf0a
#define str_0002cf0a (*(char (*)[1])(0x2cf0aU))
#undef str_0002cf20
#define str_0002cf20 (*(char (*)[1])(0x2cf20U))
#undef str_0002cf45
#define str_0002cf45 (*(char (*)[1])(0x2cf45U))
#undef str_0002cf65
#define str_0002cf65 (*(char (*)[1])(0x2cf65U))
#undef str_0002cf83
#define str_0002cf83 (*(char (*)[1])(0x2cf83U))
#undef str_0002cf99
#define str_0002cf99 (*(char (*)[1])(0x2cf99U))
#undef str_0002cfb6
#define str_0002cfb6 (*(char (*)[1])(0x2cfb6U))
#undef str_0002cfca
#define str_0002cfca (*(char (*)[1])(0x2cfcaU))
#undef str_0002cfe1
#define str_0002cfe1 (*(char (*)[1])(0x2cfe1U))
#undef str_0002d00a
#define str_0002d00a (*(char (*)[1])(0x2d00aU))
#undef str_0002d01e
#define str_0002d01e (*(char (*)[1])(0x2d01eU))
#undef str_0002d02f
#define str_0002d02f (*(char (*)[1])(0x2d02fU))
#undef str_0002d03c
#define str_0002d03c (*(char (*)[1])(0x2d03cU))
#define local_88 (*(undefined * (*)[8])(frame + 48))
#define local_66 (*(ushort *)(frame + 82))
#define local_64 (*(int (*)[2])(frame + 84))
#define local_5c (*(uint (*)[2])(frame + 92))
#define local_54 (*(float (*)[6])(frame + 100))
#define local_3c (*(uint (*)[2])(frame + 124))
#define local_34 (*(float (*)[4])(frame + 132))
#define local_24 (*(int *)(frame + 148))
#define local_20 (*(int *)(frame + 152))
#define local_1c (*(uint * *)(frame + 156))
#define local_18 (*(byte * *)(frame + 160))
#define local_14 (*(byte * *)(frame + 164))
#define name (*(byte * *)(frame + 16))
#define format (*(char * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27b50
 */

char recovered_27b50(undefined4 *param_1,int *param_2)

{
  unsigned char frame[216];

  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined **ppuVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ushort in_FPUControlWord = pf_fpu_control();
  
  uVar4 = recovered_284c4((int)param_1,0x2ce7f);
  if ((char)uVar4 != '\0') {
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_34[0] = 0.0;
    local_34[1] = 0.0;
    local_34[2] = 0.0;
    local_34[3] = 0.0;
    local_24 = 0;
    local_20 = 0;
    cVar2 = recovered_27b50(param_1,(int *)local_3c);
    if (cVar2 == '\0') {
      return '\0';
    }
    if (local_3c[0] != 1) {
      if (local_3c[0] == 2) {
        recovered_24f15(local_5c,-local_34[0]);
        goto LAB_00027c99;
      }
      if (local_3c[0] != 5) {
        recovered_24daf(local_3c);
        format = str_0002ce87;
        name = &DAT_0002ce7f;
        goto LAB_00027cbf;
      }
    }
    recovered_28508(local_5c,-local_3c[1]);
LAB_00027c99:
    puVar8 = local_5c;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    recovered_24daf(local_3c);
    return '\x01';
  }
  uVar4 = recovered_284c4((int)param_1,0x2cea9);
  if ((char)uVar4 != '\0') {
LAB_00027bdd:
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_34[0] = 0.0;
    local_34[1] = 0.0;
    local_34[2] = 0.0;
    local_34[3] = 0.0;
    local_24 = 0;
    local_20 = 0;
    cVar2 = recovered_27b50(param_1,(int *)local_3c);
    if (cVar2 == '\0') {
      return '\0';
    }
    uVar4 = recovered_26564((int *)local_3c);
    recovered_27014(local_5c,(uint)(byte)((byte)uVar4 ^ 1));
    puVar8 = local_5c;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    recovered_24daf(local_3c);
    return cVar2;
  }
  if (param_1 == (undefined4 *)0x0) {
    return '\0';
  }
  uVar6 = param_1[2];
  if (*(uint *)param_1[1] <= uVar6) {
    if (param_2 == (int *)0x0) {
      return '\0';
    }
    format = str_0002ceb3;
LAB_00027c7a:
    name = &DAT_0002ceaf;
    goto LAB_00027cbf;
  }
  uVar1 = ((uint *)param_1[1])[2];
  local_1c = (uint *)param_2;
  iVar7 = recovered_26458(*(int *)(uVar1 + uVar6 * 4),0x2ceab);
  if ((char)iVar7 != '\0') {
    param_1[2] = uVar6 + 1;
    param_2 = (int *)local_1c;
    goto LAB_00027bdd;
  }
  if (local_1c == (uint *)0x0) {
    return '\0';
  }
  param_1[2] = uVar6 + 1;
  name = *(byte **)(uVar1 + uVar6 * 4);
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_34[0] = 0.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_24 = 0;
  local_20 = 0;
  iVar7 = recovered_20cea((int)name,0x2ced0);
  if (iVar7 == 0) {
    uVar4 = recovered_26473(param_1,local_3c);
    puVar8 = local_1c;
    if ((char)uVar4 == '\0') {
      return '\0';
    }
    uVar4 = recovered_284c4((int)param_1,0x2ced2);
    if ((char)uVar4 == '\0') {
      recovered_24daf(local_3c);
      format = str_0002ced4;
      name = &DAT_0002ced2;
      goto LAB_00027cbf;
    }
LAB_000280ce:
    local_14 = name;
    while( true ) {
      if ((*(uint *)param_1[1] <= (uint)param_1[2]) ||
         (iVar7 = recovered_20cea(*(int *)(((uint *)param_1[1])[2] + param_1[2] * 4),0x2cee1),
         iVar7 != 0)) {
        recovered_24daf(puVar8);
        puVar10 = local_3c;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
        }
        return '\x01';
      }
      local_5c[0] = 0;
      local_5c[1] = 0;
      local_54[0] = 0.0;
      local_54[1] = 0.0;
      local_54[2] = 0.0;
      local_54[3] = 0.0;
      local_54[4] = 0.0;
      local_54[5] = 0.0;
      local_88[0] = (undefined *)0x0;
      local_88[1] = (undefined *)0x0;
      local_88[2] = (undefined *)0x0;
      local_88[3] = (undefined *)0x0;
      local_88[4] = (undefined *)0x0;
      local_88[5] = (undefined *)0x0;
      local_88[6] = (undefined *)0x0;
      local_88[7] = (undefined *)0x0;
      param_1[2] = param_1[2] + 1;
      uVar4 = recovered_26473(param_1,local_5c);
      if ((char)uVar4 == '\0') goto LAB_0002834d;
      uVar4 = recovered_284c4((int)param_1,0x2cf06);
      if ((char)uVar4 == '\0') break;
      uVar4 = recovered_2af9d((int *)local_3c,(int *)local_5c,(int)local_88);
      local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),(char)uVar4);
      recovered_24daf(local_5c);
      recovered_24daf(local_3c);
      if ((char)local_18 == '\0') {
        format = str_0002d03c;
        goto LAB_000281e3;
      }
      recovered_24daf(local_3c);
      ppuVar9 = local_88;
      puVar8 = local_3c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = (uint)*ppuVar9;
        ppuVar9 = ppuVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar8 = local_1c;
    }
    recovered_24daf(local_5c);
    recovered_24daf(local_3c);
    format = str_0002d02f;
  }
  else {
    iVar7 = recovered_20cea((int)name,0x2cee1);
    puVar8 = local_1c;
    if (iVar7 != 0) {
      iVar7 = recovered_20cea((int)name,0x2cf1e);
      if (iVar7 == 0) {
        bVar3 = recovered_285ca(local_3c);
        if (!bVar3) {
LAB_000284b6:
          format = str_0002cf20;
          goto LAB_000284be;
        }
        uVar4 = recovered_284c4((int)param_1,0x2cf43);
        if ((char)uVar4 == '\0') {
          local_14 = name;
          do {
            local_5c[0] = 0;
            local_5c[1] = 0;
            local_54[0] = 0.0;
            local_54[1] = 0.0;
            local_54[2] = 0.0;
            local_54[3] = 0.0;
            local_54[4] = 0.0;
            local_54[5] = 0.0;
            local_88[0] = (undefined *)0x0;
            local_88[1] = (undefined *)0x0;
            local_88[2] = (undefined *)0x0;
            local_88[3] = (undefined *)0x0;
            local_88[4] = (undefined *)0x0;
            local_88[5] = (undefined *)0x0;
            local_88[6] = (undefined *)0x0;
            local_88[7] = (undefined *)0x0;
            local_64[0] = 0;
            uVar6 = param_1[2];
            if (*(uint *)param_1[1] <= uVar6) {
              recovered_24daf(local_3c);
              format = str_0002cf45;
              goto LAB_00027c7a;
            }
            uVar1 = ((uint *)param_1[1])[2];
            param_1[2] = uVar6 + 1;
            name = *(byte **)(uVar1 + uVar6 * 4);
            bVar3 = recovered_2861c((char *)name);
            if (bVar3) {
              uVar4 = recovered_28655((int)name,(int)local_5c);
              if ((char)uVar4 == '\0') {
                recovered_24daf(local_3c);
                format = str_0002cf65;
                goto LAB_000284be;
              }
            }
            else {
              uVar4 = recovered_286b0((int)name,(int *)(local_5c + 1));
              if ((char)uVar4 == '\0') {
                iVar7 = recovered_28826((char *)name);
                if (((char)iVar7 == '\0') ||
                   (uVar4 = recovered_24e95((int)name,local_54), (char)uVar4 == '\0')) {
                  iVar7 = recovered_26458((int)name,0x2cf78);
                  if ((char)iVar7 == '\0') {
                    iVar7 = recovered_26458((int)name,0x2cf7d);
                    if ((char)iVar7 == '\0') {
                      uVar6 = recovered_28877(name);
                      if ((char)uVar6 != '\0') {
                        uVar6 = recovered_24c66(local_5c,name);
                        if ((char)uVar6 != '\0') goto LAB_00027fa9;
                        recovered_24daf(local_3c);
                        goto LAB_000284b6;
                      }
                      recovered_24daf(local_3c);
                      format = str_0002cf83;
                      goto LAB_000284be;
                    }
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = 1;
                  }
                  recovered_27014(local_5c,iVar7);
                }
                else {
                  local_5c[0] = 2;
                }
              }
              else {
                local_5c[0] = 1;
              }
            }
LAB_00027fa9:
            uVar4 = recovered_284c4((int)param_1,0x2cf95);
            if (((char)uVar4 == '\0') &&
               (uVar4 = recovered_284c4((int)param_1,0x2cf97), (char)uVar4 == '\0')) {
              recovered_24daf(local_5c);
              recovered_24daf(local_3c);
              format = str_0002cf99;
              goto LAB_000284be;
            }
            local_18 = name;
            uVar4 = recovered_26473(param_1,(uint *)local_88);
            if ((char)uVar4 == '\0') {
              recovered_24daf(local_5c);
              goto LAB_0002834d;
            }
            bVar3 = recovered_288cc((int *)local_5c,local_64);
            if (!bVar3) {
              recovered_24daf(local_88);
              recovered_24daf(local_5c);
              recovered_24daf(local_3c);
              format = str_0002cf83;
              goto LAB_0002837d;
            }
            puVar5 = (undefined4 *)recovered_28989(local_20,local_64[0],'\x01');
            recovered_20aee(local_64[0]);
            local_64[0] = 0;
            if ((puVar5 == (undefined4 *)0x0) ||
               (uVar4 = recovered_25048(puVar5,local_88), (char)uVar4 == '\0')) {
              recovered_24daf(local_88);
              recovered_24daf(local_5c);
              recovered_24daf(local_3c);
              format = str_0002cf20;
              goto LAB_0002837d;
            }
            recovered_24daf(local_88);
            recovered_24daf(local_5c);
            uVar4 = recovered_284c4((int)param_1,0x2cf43);
            if ((char)uVar4 != '\0') goto LAB_000282f3;
            uVar4 = recovered_284c4((int)param_1,0x2cf08);
          } while ((char)uVar4 != '\0');
          recovered_24daf(local_3c);
          format = str_0002cfb6;
LAB_0002837d:
          name = local_18;
          goto LAB_00027cbf;
        }
      }
      else {
        bVar3 = recovered_2861c((char *)name);
        if (bVar3) {
          uVar4 = recovered_28655((int)name,(int)local_3c);
          if ((char)uVar4 == '\0') {
            format = str_0002cfca;
            goto LAB_000284be;
          }
        }
        else {
          iVar7 = recovered_26458((int)name,0x2cf78);
          if ((char)iVar7 == '\0') {
            iVar7 = recovered_26458((int)name,0x2cf7d);
            if ((char)iVar7 == '\0') {
              uVar4 = recovered_286b0((int)name,(int *)(local_3c + 1));
              if ((char)uVar4 == '\0') {
                iVar7 = recovered_28826((char *)name);
                if (((char)iVar7 == '\0') ||
                   (uVar4 = recovered_24e95((int)name,local_34), (char)uVar4 == '\0')) {
                  uVar6 = recovered_28877(name);
                  if ((char)uVar6 == '\0') {
                    format = str_0002d01e;
                    goto LAB_000284be;
                  }
                  uVar4 = recovered_284c4((int)param_1,0x2ced0);
                  if ((char)uVar4 == '\0') {
                    uVar6 = recovered_2af4b((void *)*param_1,(char *)name,local_3c);
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                  }
                  else {
                    local_88[0] = (undefined *)0x0;
                    local_88[1] = (undefined *)0x0;
                    local_88[2] = (undefined *)0x0;
                    local_14 = name;
                    uVar4 = recovered_284c4((int)param_1,0x2ced2);
                    puVar11 = (undefined *)0x0;
                    puVar12 = (undefined *)0x0;
                    if ((char)uVar4 == '\0') {
                      do {
                        local_5c[0] = 0;
                        local_5c[1] = 0;
                        local_54[0] = 0.0;
                        local_54[1] = 0.0;
                        local_54[2] = 0.0;
                        local_54[3] = 0.0;
                        local_54[4] = 0.0;
                        local_54[5] = 0.0;
                        uVar4 = recovered_26473(param_1,local_5c);
                        if ((char)uVar4 == '\0') {
                          recovered_24daf(local_5c);
                          recovered_28ab1((uint *)local_88);
                          return '\0';
                        }
                        uVar4 = recovered_28af3((int *)local_88,(int)local_5c);
                        local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),(char)uVar4);
                        recovered_24daf(local_5c);
                        if ((char)local_18 == '\0') {
                          recovered_28ab1((uint *)local_88);
                          format = str_0002cfe1;
                          goto LAB_000281e3;
                        }
                        uVar4 = recovered_284c4((int)param_1,0x2ced2);
                        if ((char)uVar4 != '\0') {
                          puVar11 = local_88[0];
                          puVar12 = local_88[2];
                          goto LAB_000282c9;
                        }
                        uVar4 = recovered_284c4((int)param_1,0x2cf08);
                      } while ((char)uVar4 != '\0');
                      recovered_28ab1((uint *)local_88);
                      format = str_0002d00a;
                      goto LAB_000281e3;
                    }
LAB_000282c9:
                    uVar6 = recovered_28be0((undefined *******)*param_1,local_14,puVar12,puVar11,
                                            local_3c);
                    local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),(char)uVar6);
                    recovered_28ab1((uint *)local_88);
                    if ((char)local_18 == '\0') {
LAB_0002834d:
                      recovered_24daf(local_3c);
                      return '\0';
                    }
LAB_000282f3:
                    puVar8 = local_1c;
LAB_000282f6:
                    name = local_14;
                  }
                }
                else {
                  local_3c[0] = 2;
                  local_66 = in_FPUControlWord | 0xc00;
                  local_3c[1] = (uint)ROUND(local_34[0]);
                }
              }
              else {
                local_3c[0] = 1;
                local_34[0] = (float)(int)local_3c[1];
              }
              goto LAB_000280ce;
            }
            iVar7 = 0;
          }
          else {
            iVar7 = 1;
          }
          recovered_27014(local_3c,iVar7);
        }
      }
      goto LAB_000280ce;
    }
    bVar3 = recovered_28534(local_3c);
    if (!bVar3) {
      format = str_0002cee3;
LAB_000284be:
      goto LAB_00027cbf;
    }
    uVar4 = recovered_284c4((int)param_1,0x2cf06);
    if ((char)uVar4 != '\0') goto LAB_000280ce;
    local_14 = name;
    do {
      local_5c[0] = 0;
      local_5c[1] = 0;
      local_54[0] = 0.0;
      local_54[1] = 0.0;
      local_54[2] = 0.0;
      local_54[3] = 0.0;
      local_54[4] = 0.0;
      local_54[5] = 0.0;
      uVar4 = recovered_26473(param_1,local_5c);
      if ((char)uVar4 == '\0') goto LAB_0002834d;
      uVar4 = recovered_28586(local_24,(int)local_5c);
      local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),(char)uVar4);
      recovered_24daf(local_5c);
      if ((char)local_18 == '\0') {
        recovered_24daf(local_3c);
        format = str_0002cee3;
        goto LAB_000281e3;
      }
      uVar4 = recovered_284c4((int)param_1,0x2cf06);
      if ((char)uVar4 != '\0') goto LAB_000282f6;
      uVar4 = recovered_284c4((int)param_1,0x2cf08);
    } while ((char)uVar4 != '\0');
    recovered_24daf(local_3c);
    format = str_0002cf0a;
  }
LAB_000281e3:
  name = local_14;
LAB_00027cbf:
  recovered_2609c(*param_1,(char *)name,format);
  return '\0';
}

