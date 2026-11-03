#include "functions.h"
#undef DAT_0005cee4
#define DAT_0005cee4 (*(uint8_t *)(0x5cee4U))
#undef LAB_0002c3c1
#define LAB_0002c3c1 (*(uint8_t *)(0x2c3c1U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_50 (*(int * *)(frame + 268))
#define local_4c (*(int * *)(frame + 272))
#define local_48 (*(undefined4 *)(frame + 276))
#define local_44 (*(undefined8 *)(frame + 280))
#define local_34 (*(int * *)(frame + 296))
#define local_30 (*(int * *)(frame + 300))
#define local_2c (*(int * *)(frame + 304))
#define local_28 (*(int * *)(frame + 308))
#define local_24 (*(int * *)(frame + 312))
#define local_20 (*(int * *)(frame + 316))
#define local_1c (*(undefined4 *)(frame + 320))
#define local_18 (*(int * *)(frame + 324))
#define local_14 (*(undefined4 *)(frame + 328))
#define local_ac (*(undefined4 *)(frame + 176))
#define local_a8 (*(undefined4 *)(frame + 180))
#define local_94 (*(undefined * *)(frame + 200))
#define local_90 (*(undefined * *)(frame + 204))
#define local_8c (*(undefined1 * *)(frame + 208))
#define local_88 (*(undefined1 * *)(frame + 212))
#define local_84 (*(undefined1 * *)(frame + 216))
#define local_78 (*(int * *)(frame + 228))
#define local_74 (*(int * *)(frame + 232))
#define local_70 (*(undefined4 *)(frame + 236))
#define local_6c (*(int * *)(frame + 240))
#define local_68 (*(undefined4 *)(frame + 244))
#define local_60 (*(int * *)(frame + 252))
#define auStackY_14c (*(undefined1 (*)[128])(frame + 16))
#define local_5c (*(undefined8 *)(frame + 256))
#define local_54 (*(undefined4 *)(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b90e
 */

bool FUN_0002b90e(int param_1,int *param_2)

{
  unsigned char frame[380] = {0};

  byte *pbVar1;
  char cVar2;
  byte bVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  undefined2 extraout_var = 0;
  int *piVar14;

  local_8c = (undefined1 *)((int)(uintptr_t)(frame + 348) + -4);
  local_84 = auStackY_14c + 0x80;
  local_50 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_78 = (int *)0x0;
  local_74 = (int *)0x0;
  local_70 = 0;
  piVar8 = (int *)param_2[1];
  local_94 = PTR_LAB_0005d040;
  local_90 = &DAT_0005cee4;
  local_88 = &LAB_0002c3c1;
  recovered_234cb(&local_ac);
  if (((int *)0x1 < piVar8) && (SBORROW1('\0',*(char *)*param_2))) {
    local_18 = (int *)0x0;
    piVar10 = (int *)0x0;
    do {
      iVar6 = *param_2;
      do {
        piVar14 = (int *)((int)piVar10 + 6);
        if ((piVar8 < piVar14) || (!SBORROW1('\0',*(char *)(iVar6 + (int)piVar10)))) {
LAB_0002ba4e:
          bVar5 = false;
          if (((local_4c != (int *)0x0 & (byte)local_18) != 1) || (local_74 == (int *)0x0))
          goto LAB_0002c388;
          goto LAB_0002bc25;
        }
        local_14 = (int *)(*(int *)(iVar6 + 2 + (int)piVar10) + (int)piVar14);
        if (piVar8 < local_14) goto LAB_0002be3a;
        cVar2 = *(char *)(iVar6 + 1 + (int)piVar10);
        if (cVar2 == '\x03') goto LAB_0002ba4e;
        if (cVar2 == '\x02') {
          local_18 = (int *)CONCAT31((int3)((uint)piVar10 >> 8),1);
          ppiVar13 = &local_78;
          goto LAB_0002b9cf;
        }
        piVar10 = local_14;
      } while (cVar2 != '\x01');
      ppiVar13 = &local_50;
LAB_0002b9cf:
      local_a8 = 1;
      recovered_25dac((int *)ppiVar13,(int)*ppiVar13 + (int)ppiVar13[1],
                      (undefined1 *)((int)piVar14 + iVar6),(undefined1 *)(iVar6 + (int)local_14));
      piVar8 = (int *)param_2[1];
      piVar10 = local_14;
    } while( true );
  }
  local_a8 = 2;
  piVar8 = (int *)recovered_2cb66(param_2,0x5755a,0);
  if (piVar8 != (int *)0xffffffff) {
    puVar11 = (undefined1 *)*param_2;
    piVar10 = (int *)param_2[1];
    piVar14 = piVar8;
    if (piVar8 <= piVar10) {
      piVar14 = piVar10;
    }
    for (; piVar8 < piVar10; piVar8 = (int *)((int)piVar8 + 1)) {
      if ((puVar11[(int)piVar8] == '\n') || (puVar11[(int)piVar8] == '\r')) goto LAB_0002ba73;
    }
    piVar8 = piVar14;
LAB_0002ba73:
    piVar14 = piVar10;
    if (piVar10 < piVar8) {
      piVar14 = piVar8;
    }
    for (; piVar8 < piVar10; piVar8 = (int *)((int)piVar8 + 1)) {
      if ((puVar11[(int)piVar8] != '\r') && (local_14 = piVar8, puVar11[(int)piVar8] != '\n'))
      goto LAB_0002ba91;
    }
    local_14 = piVar14;
LAB_0002ba91:
    local_a8 = 3;
    recovered_25d8a((int *)&local_50,puVar11,puVar11 + (int)local_14);
    local_a8 = 4;
    local_18 = (int *)recovered_2cb66(param_2,0x5756c,(uint)local_14);
    if (local_18 == (int *)0xffffffff) {
      local_18 = (int *)param_2[1];
    }
    local_24 = (int *)0x0;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_a8 = 5;
    recovered_2cbd8((int *)&local_24,(int)local_18 - (int)local_14);
    piVar8 = local_18;
    for (piVar10 = local_14; piVar10 < piVar8; piVar10 = (int *)((int)piVar10 + 1)) {
      bVar3 = *(byte *)(*param_2 + (int)piVar10);
      if (((byte)(bVar3 - 0x30) < 10) || (bVar3 - 0x61 < 6)) {
LAB_0002bb37:
        local_a8 = 6;
        local_14 = piVar10;
        recovered_2cc28((int *)&local_24,bVar3);
        piVar8 = local_18;
        piVar10 = local_14;
      }
      else if (bVar3 - 0x41 < 6) goto LAB_0002bb37;
    }
    if (((uint)local_20 & 1) != 0) {
      *(undefined1 *)((int)local_24 + -1 + (int)local_20) = 0;
      local_20 = (int *)((int)local_20 + -1);
    }
    if (local_20 != (int *)0x0) {
      local_a8 = 7;
      recovered_29a7c((int *)&local_78,(uint)local_20 >> 1);
      piVar8 = (int *)0x1;
      while( true ) {
        dVar4 = local_44;
        piVar10 = local_74;
        if (local_20 <= piVar8) break;
        PF_PART5(local_44, 3) = SUB85(dVar4,3);
        PF_PART3(local_44, 0) =
             (uint3)CONCAT11(*(undefined1 *)((int)local_24 + (int)piVar8),
                             *(undefined1 *)((int)local_24 + -1 + (int)piVar8));
        local_a8 = 8;
        local_14 = piVar8;
        iVar6 = recovered_21da0((byte *)&local_44,(undefined4 *)0x0,0x10);
        local_6c = (int *)CONCAT31(PF_PART3(local_6c, 1),(char)iVar6);
        local_a8 = 9;
        recovered_2ccb8((int *)&local_78,(undefined1 *)&local_6c);
        piVar8 = (int *)((int)local_14 + 2);
      }
      if (local_4c != (int *)0x0) {
        recovered_23194();
        if (piVar10 == (int *)0x0) goto LAB_0002be3a;
LAB_0002bc25:
        local_a8 = 10;
        uVar7 = recovered_2cb66((int *)&local_50,0x57578,0);
        if (uVar7 != 0xffffffff) {
          piVar8 = (int *)(uVar7 + 9);
          do {
            if (local_4c <= piVar8) goto LAB_0002bd1e;
            pbVar1 = (byte *)((int)local_50 + (int)piVar8);
            piVar8 = (int *)((int)piVar8 + 1);
          } while ((*pbVar1 | 0x20) != 0x7b);
          local_44 = 0.0;
          local_5c = 0.0;
          local_a8 = 0xb;
          local_30 = piVar8;
          bVar5 = recovered_2ccfb((int *)&local_50,(uint *)&local_30,(double *)&local_24);
          if (bVar5) {
            local_a8 = 0xc;
            bVar5 = recovered_2ccfb((int *)&local_50,(uint *)&local_30,(double *)&local_44);
            if (bVar5) {
              local_a8 = 0xd;
              bVar5 = recovered_2ccfb((int *)&local_50,(uint *)&local_30,(double *)&local_6c);
              if (bVar5) {
                local_a8 = 0xe;
                bVar5 = recovered_2ccfb((int *)&local_50,(uint *)&local_30,(double *)&local_5c);
                if (bVar5) {
                  dVar4 = 0.0;
                  if (0.0 < local_5c) {
                    dVar4 = local_5c;
                  }
                  *(double *)(param_1 + 0xc) = dVar4;
                  dVar4 = 0.0;
                  if (local_44 < -0.0) {
                    dVar4 = -local_44;
                  }
                  *(double *)(param_1 + 0x14) = dVar4;
                }
              }
            }
          }
        }
LAB_0002bd1e:
        local_28 = (int *)(param_1 + 0x20);
        piVar8 = (int *)0x0;
        while (piVar8 < local_4c) {
          local_a8 = 0xf;
          uVar7 = recovered_2cb66((int *)&local_50,0x57582,(uint)piVar8);
          if (uVar7 == 0xffffffff) break;
          piVar8 = (int *)(uVar7 + 3);
          local_44 = pf_bits_double(CONCAT44(PF_PART4(local_44, 4),piVar8));
          local_6c = (int *)0x0;
          uVar9 = recovered_2cd47((int *)&local_50,(uint *)&local_44,(int *)&local_6c);
          if ((local_6c < (int *)0x100 & (byte)uVar9) == 1) {
            local_14 = local_6c;
            recovered_2cdd5((int *)&local_50,(uint *)&local_44);
            if (((int *)local_44 < local_4c) &&
               (*(char *)((int)local_50 + (int)(int *)local_44) == '/')) {
              local_18 = local_50;
              local_2c = (int *)((int)(int *)local_44 + 1);
              for (piVar10 = local_2c; piVar10 < local_4c; piVar10 = (int *)((int)piVar10 + 1)) {
                uVar7 = *(byte *)((int)local_50 + (int)piVar10) - 9;
                if ((uVar7 < 0x18) && ((0x80001fU >> (uVar7 & 0x1f) & 1) != 0)) goto LAB_0002bdd7;
              }
              piVar10 = local_4c;
LAB_0002bdd7:
              if ((int)piVar10 - (int)local_2c != 0) {
                local_a8 = 0x10;
                local_34 = piVar10;
                recovered_2ce44((int *)&local_24,(int)local_50 + (int)local_2c,
                                (int)piVar10 - (int)local_2c);
                recovered_2ce04(local_28 + (int)local_14 * 3,&local_24);
                recovered_23194();
                piVar8 = local_34;
              }
            }
          }
        }
        if (local_74 == (int *)0x0) {
          local_5c = 0.0;
          local_54 = 0;
LAB_0002c37a:
          bVar5 = false;
        }
        else {
          local_24 = (int *)0x0;
          local_20 = (int *)0x0;
          local_1c = 0;
          local_a8 = 0x11;
          recovered_29a7c((int *)&local_24,(uint)local_74);
          local_34 = local_78;
          local_28 = local_74;
          piVar8 = (int *)CONCAT22(extraout_var,0xd971);
          piVar10 = (int *)0x0;
          while (local_28 != piVar10) {
            local_18 = (int *)(uint)*(byte *)((int)local_34 + (int)piVar10);
            local_44 = pf_bits_double(CONCAT71(PF_PART7(local_44, 1),
                                        (byte)((uint)piVar8 >> 8) ^
                                        *(byte *)((int)local_34 + (int)piVar10)));
            local_a8 = 0x12;
            local_2c = piVar8;
            local_14 = piVar10;
            recovered_2b424((int *)&local_24,(undefined1 *)&local_44);
            piVar8 = (int *)((((uint)local_18 & 0xffff) + (int)local_2c) * -0x3193 + 0x58bf);
            piVar10 = (int *)((int)local_14 + 1);
          }
          piVar8 = (int *)0x0;
          if (local_20 < (int *)0x5) {
            local_54 = 0;
            local_2c = (int *)0x0;
          }
          else {
            recovered_2cf7c((int *)&local_24,(int)local_24,(int)(local_24 + 1));
            local_54 = local_1c;
            piVar8 = local_24;
            local_24 = (int *)0x0;
            local_1c = 0;
            local_2c = local_20;
          }
          local_5c = pf_bits_double(CONCAT44(local_2c,piVar8));
          local_20 = (int *)0x0;
          recovered_23194();
          if (local_2c == (int *)0x0) goto LAB_0002c37a;
          local_a8 = 0x13;
          local_18 = piVar8;
          uVar7 = recovered_2cb66((int *)&local_5c,0x57586,0);
          if (uVar7 != 0xffffffff) {
            local_24 = (int *)(uVar7 + 6);
            local_44 = (double)((ulonglong)local_44 & 0xffffffff00000000);
            uVar9 = recovered_2cd47((int *)&local_5c,(uint *)&local_24,(int *)&local_44);
            if ((char)uVar9 != '\0') {
              *(int **)(param_1 + 0x1c) = (int *)local_44;
            }
          }
          local_a8 = 0x14;
          local_28 = (int *)recovered_2cb66((int *)&local_5c,0x5758d,0);
          local_a8 = 0x15;
          piVar8 = (int *)recovered_2cb66((int *)&local_5c,0x57594,0);
          if (local_28 < piVar8 && (piVar8 != (int *)0xffffffff && local_28 != (int *)0xffffffff)) {
            local_34 = (int *)(param_1 + 0xc20);
            piVar10 = local_28;
            local_14 = piVar8;
            while( true ) {
              local_a8 = 0x16;
              piVar10 = (int *)recovered_2cb66((int *)&local_5c,0x57582,(uint)piVar10);
              if ((piVar10 == (int *)0xffffffff) || (local_14 <= piVar10)) break;
              piVar10 = (int *)((int)piVar10 + 3);
              local_30 = (int *)0x0;
              local_60 = (int *)0x0;
              local_6c = piVar10;
              uVar9 = recovered_2cd47((int *)&local_5c,(uint *)&local_6c,(int *)&local_30);
              if (((char)uVar9 != '\0') &&
                 (uVar9 = recovered_2cd47((int *)&local_5c,(uint *)&local_6c,(int *)&local_60),
                 (-1 < (int)local_60 & (byte)uVar9) == 1)) {
                local_28 = local_60;
                recovered_2cdd5((int *)&local_5c,(uint *)&local_6c);
                piVar14 = local_30;
                piVar8 = (int *)((int)local_6c + 2);
                if ((piVar8 <= local_2c) &&
                   ((*(char *)((int)local_18 + (int)local_6c) == 'R' &&
                    (*(char *)((int)local_18 + 1 + (int)local_6c) == 'D')))) {
                  if ((piVar8 < local_2c) && (*(char *)((int)local_18 + (int)piVar8) == ' ')) {
                    piVar8 = (int *)((int)local_6c + 3);
                  }
                  local_6c = piVar8;
                  piVar10 = local_6c;
                  if ((local_2c < local_6c) || ((int *)((int)local_2c - (int)local_6c) < local_28))
                  goto LAB_0002c37a;
                  if (-1 < (int)local_30) {
                    if (*(int **)(param_1 + 0xc24) <= local_30) {
                      local_a8 = 0x17;
                      recovered_2cfd6(local_34,(int)local_30 + 1);
                    }
                    puVar11 = (undefined1 *)((int)local_18 + (int)piVar10);
                    local_a8 = 0x18;
                    recovered_2dea8(&local_24,puVar11,(undefined1 *)((int)local_28 + (int)puVar11));
                    local_a8 = 0x19;
                    recovered_2d04c((int *)&local_44,(int *)&local_24,*(uint *)(param_1 + 0x1c));
                    recovered_253bc((undefined4 *)((int)piVar14 * 0xc + *local_34),
                                    (undefined4 *)&local_44);
                    local_44 = (double)((ulonglong)local_44 & 0xffffffff);
                    recovered_23194();
                    local_20 = (int *)0x0;
                    recovered_23194();
                  }
                  piVar10 = (int *)((int)piVar10 + (int)local_28);
                }
              }
            }
            local_28 = (int *)(param_1 + 0xc2c);
            local_18 = (int *)local_5c;
            local_2c = PF_PART4(local_5c, 4);
            piVar8 = PF_PART4(local_5c, 4);
            piVar10 = (int *)local_5c;
            piVar14 = local_14;
            while (piVar14 < piVar8) {
              if (*(char *)((int)piVar10 + (int)piVar14) == '/') {
                piVar14 = (int *)((int)piVar14 + 1);
                for (local_30 = piVar14; local_30 < piVar8; local_30 = (int *)((int)local_30 + 1)) {
                  uVar7 = (uint)*(byte *)((int)piVar10 + (int)local_30);
                  if (((uVar7 - 9 < 5) || (uVar7 == 0x20)) || (uVar7 == 0x2f)) goto LAB_0002c206;
                }
                local_30 = piVar8;
LAB_0002c206:
                if ((int)local_30 - (int)piVar14 != 0) {
                  local_a8 = 0x1a;
                  recovered_2ce44((int *)&local_24,(int)piVar14 + (int)piVar10,
                                  (int)local_30 - (int)piVar14);
                  local_60 = (int *)0x0;
                  uVar9 = recovered_2cd47((int *)&local_5c,(uint *)&local_30,(int *)&local_60);
                  if (((byte)uVar9 & -1 < (int)local_60) == 0) {
                    piVar14 = local_30;
                  }
                  else {
                    local_14 = local_60;
                    recovered_2cdd5((int *)&local_5c,(uint *)&local_30);
                    piVar8 = (int *)((int)local_30 + 2);
                    piVar14 = local_30;
                    if (((piVar8 <= local_2c) && (*(char *)((int)local_18 + (int)local_30) == 'R'))
                       && (*(char *)((int)local_18 + 1 + (int)local_30) == 'D')) {
                      if (piVar8 < local_2c) {
                        if (*(char *)((int)local_18 + 2 + (int)local_30) == ' ') {
                          piVar8 = (int *)((int)local_30 + 3);
                        }
                      }
                      if ((local_2c < piVar8) || ((int *)((int)local_2c - (int)piVar8) < local_14))
                      {
                        recovered_23194();
                        goto LAB_0002c37a;
                      }
                      local_a8 = 0x1b;
                      local_34 = piVar8;
                      recovered_2dea8((undefined4 *)&local_44,
                                      (undefined1 *)((int)local_18 + (int)piVar8),
                                      (undefined1 *)((int)local_14 + (int)local_18 + (int)piVar8));
                      local_a8 = 0x1c;
                      recovered_2d04c((int *)&local_6c,(int *)&local_44,*(uint *)(param_1 + 0x1c));
                      local_a8 = 0x1d;
                      puVar12 = (undefined4 *)recovered_2d1b2(local_28,&local_24);
                      recovered_253bc(puVar12,&local_6c);
                      local_68 = 0;
                      recovered_23194();
                      piVar14 = (int *)((int)local_34 + (int)local_14);
                      local_44 = (double)((ulonglong)local_44 & 0xffffffff);
                      recovered_23194();
                    }
                  }
                  piVar10 = local_18;
                  piVar8 = local_2c;
                  recovered_23194();
                }
              }
              else {
                piVar14 = (int *)((int)piVar14 + 1);
              }
            }
            bVar5 = *(int *)(param_1 + 0xc30) != 0;
          }
          else {
            bVar5 = false;
          }
        }
        local_5c = (double)((ulonglong)local_5c & 0xffffffff);
        recovered_23194();
        goto LAB_0002c388;
      }
    }
    recovered_23194();
  }
LAB_0002be3a:
  bVar5 = false;
LAB_0002c388:
  local_74 = (int *)0x0;
  recovered_23194();
  local_4c = (int *)0x0;
  recovered_23194();
  recovered_234e0(&local_ac);
  return bVar5;
}
