/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
#define appppppppppuStackY_568 (*(ulong ********** (*)[128])(frame + 24))
#define in_stack_fffffffffffffe98 (*(undefined8 *)(frame + 1048))
#define in_stack_fffffffffffffea0 (*(ulong *)(frame + 1056))
#define in_stack_fffffffffffffea8 (*(ulong ******* *)(frame + 1064))
#define in_stack_fffffffffffffeb0 (*(ulong ******* *)(frame + 1072))
#define in_stack_fffffffffffffeb8 (*(uint * *)(frame + 1080))
#define in_stack_fffffffffffffec0 (*(ulong ******* *)(frame + 1088))
#define in_stack_fffffffffffffec8 (*(ulong ******* *)(frame + 1096))
#define in_stack_fffffffffffffed0 (*(ulong ******* *)(frame + 1104))
#define local_38 (*(ulong *********** *)(frame + 1352))
#define local_40 (*(int * *)(frame + 1344))
#define local_48 (*(ulong *********** *)(frame + 1336))
#define local_50 (*(uint *********** *)(frame + 1328))
#define local_54 (*(uint *)(frame + 1324))
#define local_60 (*(ulong ***** *)(frame + 1312))
#define local_70 (*(uint ********** *)(frame + 1296))
#define local_80 (*(uint ********** *)(frame + 1280))
#define local_90 (*(uint ********** *)(frame + 1264))
#define local_a0 (*(ulong *********** *)(frame + 1248))
#define local_a8 (*(undefined4 *)(frame + 1240))
#define local_b8 (*(undefined8 *)(frame + 1224))
#define local_c0 (*(undefined4 *)(frame + 1216))
#define local_c8 (*(undefined8 *)(frame + 1208))
#define ppppppppppuStack_68 (*(uint ********** *)(frame + 1304))
#define ppppppppppuStack_78 (*(uint ********** *)(frame + 1288))
#define ppppppppppuStack_88 (*(uint ********** *)(frame + 1272))
#define str_020a3acf (*(char (*)[1])(0x20f4290U))
#define str_020a3bae (*(char (*)[1])(0x20f436fU))
#define str_020a47c0 (*(char (*)[1])(0x20f4f4dU))
#define str_020a47e7 (*(char (*)[1])(0x20f4f74U))
#define str_020a4813 (*(char (*)[1])(0x20f4fa0U))
#define str_020a4848 (*(char (*)[1])(0x20f4fd4U))
#define str_020a487f (*(char (*)[1])(0x20f500aU))
#define str_020a48a3 (*(char (*)[1])(0x20f502dU))
#define str_020a48ce (*(char (*)[1])(0x20f5058U))
#define str_020a48ef (*(char (*)[1])(0x20f5079U))
#define str_020ab09b (*(char (*)[1])(0x20fc719U))
#define str_020ab0dd (*(char (*)[1])(0x20fc75aU))
#define uStack_94 (*(undefined4 *)(frame + 1260))
#define uStack_98 (*(undefined4 *)(frame + 1256))
#define uStack_b0 (*(undefined8 *)(frame + 1232))
uint recovered_20a81b0(ulong *param_1,int *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                      ulong *******in_R9,undefined8 param_7,ulong ****param_8,ulong ***param_9,
                      ulong ***param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                      undefined8 param_14)

{
  unsigned char frame[1440] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  uint ***********pppppppppppuVar5;
  byte bVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  ulong ***********pppppppppppuVar10;
  void *buffer;
  undefined4 *puVar11;
  long lVar12;
  ulong ***********pppppppppppuVar13;
  char *pcVar14;
  ulong **********ppppppppppuVar15;
  ulong ***********pppppppppppuVar16;
  char *format;
  ulong *puVar17;
  ulong ****ppppuVar18;
  ulong ***********pppppppppppuVar19;
  ulong uVar20;
  ulong **********ppppppppppuVar21;
  long *plVar22;
  ulong **********ppppppppppuVar23;
  undefined8 uVar24;
  ulong ***unaff_R12;
  ulong ***pppuVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  char cVar29;

  local_54 = 0;
  local_a0 = (ulong ***********)0x0;
  uStack_98 = 0;
  local_90 = (uint **********)0x0;
  ppppppppppuStack_88 = (uint **********)0x0;
  local_80 = (uint **********)0x0;
  ppppppppppuStack_78 = (uint **********)0x0;
  local_70 = (uint **********)0x0;
  ppppppppppuStack_68 = (uint **********)0x0;
  local_60 = (ulong *****)0x0;
  if (((param_5 == (ulong *)0x0 || param_2 == (int *)0x0) || (*param_2 != 9)) ||
     (lVar12 = *(long *)(param_2 + 0xe), lVar12 == 0)) {
    pcVar14 = str_020a47c0;
  }
  else {
    local_40 = param_2;
    local_38 = (ulong ***********)param_1;
    if (*(char *)(lVar12 + 0xb) == '\x01') {
      if (param_4 == (ulong *)0x0) {
        bVar6 = 0;
      }
      else {
        uVar8 = recovered_20a9b70((uint *)(lVar12 + 0x20),(uint *)param_3);
        bVar6 = (byte)uVar8;
      }
      pppuVar25 = (ulong ***)((ulong)(bVar6 ^ 1) + (long)param_4);
      unaff_R12 = (ulong ***)param_3;
      if (pppuVar25 == (ulong ***)0x0) {
        param_4 = (ulong *)0x0;
        pppppppppppuVar10 = (ulong ***********)0x0;
        pppppppppppuVar13 = (ulong ***********)0x0;
        goto LAB_0206aad1;
      }
      local_50 = (uint ***********)param_5;
      pppppppppppuVar10 = recovered_2000ad0((long)pppuVar25 * 0x40);
      local_48 = pppppppppppuVar10;
      if (pppppppppppuVar10 != (ulong ***********)0x0) {
        if ((ulong)(bVar6 ^ 1) + (long)param_4 == 1) {
          uVar20 = 0;
        }
        else {
          pppppppppppuVar13 = pppppppppppuVar10 + 0xf;
          uVar20 = 0;
          do {
            pppppppppppuVar13[-0xf] = (ulong **********)0x0;
            *(undefined4 *)(pppppppppppuVar13 + -0xe) = 0;
            pppppppppppuVar13[-0xd] = (ulong **********)0x0;
            pppppppppppuVar13[-0xc] = (ulong **********)0x0;
            pppppppppppuVar13[-0xb] = (ulong **********)0x0;
            pppppppppppuVar13[-10] = (ulong **********)0x0;
            pppppppppppuVar13[-9] = (ulong **********)0x0;
            pppppppppppuVar13[-8] = (ulong **********)0x0;
            pppppppppppuVar13[-7] = (ulong **********)0x0;
            *(undefined4 *)(pppppppppppuVar13 + -6) = 0;
            pppppppppppuVar13[-5] = (ulong **********)0x0;
            pppppppppppuVar13[-4] = (ulong **********)0x0;
            pppppppppppuVar13[-3] = (ulong **********)0x0;
            pppppppppppuVar13[-2] = (ulong **********)0x0;
            pppppppppppuVar13[-1] = (ulong **********)0x0;
            *pppppppppppuVar13 = (ulong **********)0x0;
            uVar20 = uVar20 + 2;
            pppppppppppuVar13 = pppppppppppuVar13 + 0x10;
          } while (((ulong)pppuVar25 & 0xfffffffffffffffe) != uVar20);
        }
        if (((ulong)pppuVar25 & 1) != 0) {
          pppppppppppuVar10[uVar20 * 8] = (ulong **********)0x0;
          *(undefined4 *)(pppppppppppuVar10 + uVar20 * 8 + 1) = 0;
          pppppppppppuVar10[uVar20 * 8 + 2] = (ulong **********)0x0;
          (pppppppppppuVar10 + uVar20 * 8 + 2)[1] = (ulong **********)0x0;
          pppppppppppuVar10[uVar20 * 8 + 4] = (ulong **********)0x0;
          (pppppppppppuVar10 + uVar20 * 8 + 4)[1] = (ulong **********)0x0;
          pppppppppppuVar10[uVar20 * 8 + 6] = (ulong **********)0x0;
          (pppppppppppuVar10 + uVar20 * 8 + 6)[1] = (ulong **********)0x0;
        }
        if (bVar6 != 0) {
          iVar9 = 0;
LAB_0206aa79:
          if (param_4 != (ulong *)0x0) {
            puVar26 = (undefined8 *)((long)pppppppppppuVar10 + (ulong)(uint)(iVar9 << 6));
            puVar17 = param_3;
LAB_0206aa90:
            uVar8 = recovered_20a0670(puVar26,puVar17);
            pppppppppppuVar10 = local_48;
            if ((char)uVar8 != '\0') goto code_r0x0206aaa3;
            pppppppppppuVar13 = local_48;
            do {
              recovered_205ec00(pppppppppppuVar13);
              pppppppppppuVar13 = pppppppppppuVar13 + 8;
              pppuVar25 = (ulong ***)((long)pppuVar25 - 1);
            } while (pppuVar25 != (ulong ***)0x0);
            goto LAB_0206afde;
          }
          pppppppppppuVar13 = pppppppppppuVar10;
          param_5 = (ulong *)local_50;
          param_4 = (ulong *)pppuVar25;
          goto LAB_0206aad1;
        }
        uVar8 = recovered_20a0670(pppppppppppuVar10,(undefined8 *)(*(long *)(local_40 + 0xe) + 0x20)
                                 );
        iVar9 = 1;
        if ((char)uVar8 != '\0') goto LAB_0206aa79;
        pppppppppppuVar13 = pppppppppppuVar10;
        do {
          recovered_205ec00(pppppppppppuVar13);
          pppppppppppuVar13 = pppppppppppuVar13 + 8;
          pppuVar25 = (ulong ***)((long)pppuVar25 - 1);
        } while (pppuVar25 != (ulong ***)0x0);
LAB_0206afde:
        recovered_2000bb0(pppppppppppuVar10);
      }
      pcVar14 = str_020a47e7;
LAB_0206afed:
      param_1 = (ulong *)local_38;
    }
    else {
      pppppppppppuVar13 = (ulong ***********)0x0;
      pppppppppppuVar10 = (ulong ***********)param_3;
LAB_0206aad1:
      piVar1 = *(int **)(local_40 + 0xe);
      if (piVar1[1] == 2) {
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        pppppppppppuVar19 = (ulong ***********)str_020a3bae;
        if (*(ulong ************)(piVar1 + 4) != (ulong ***********)0x0) {
          pppppppppppuVar19 = *(ulong ************)(piVar1 + 4);
        }
        if (*(long *)(piVar1 + 0x22) != 0) {
          buffer = (void *)0x0;
          local_50 = (uint ***********)param_5;
          local_48 = pppppppppppuVar19;
          recovered_2002110(appppppppppuStackY_568 + 0x80,0,0xa0);
          if ((ulong ***)param_4 != (ulong ***)0x0) {
            buffer = recovered_2000ad0((long)param_4 * 0x28);
            fVar4 = DAT_020a1570;
            if (buffer == (void *)0x0) {
              if (pppppppppppuVar13 != (ulong ***********)0x0) {
                pppppppppppuVar10 = pppppppppppuVar13;
                do {
                  recovered_205ec00(pppppppppppuVar10);
                  pppppppppppuVar10 = pppppppppppuVar10 + 8;
                  param_4 = (ulong *)((long)param_4 + -1);
                } while ((ulong ***)param_4 != (ulong ***)0x0);
              }
              recovered_2000bb0(pppppppppppuVar13);
              pcVar14 = str_020a4848;
              pppppppppppuVar19 = local_48;
              param_1 = (ulong *)local_38;
              goto LAB_0206a93b;
            }
            puVar11 = (undefined4 *)((long)buffer + 0x20);
            pppppppppppuVar19 = pppppppppppuVar10;
            pppuVar25 = (ulong ***)param_4;
            do {
              *(undefined8 *)(puVar11 + -8) = 0;
              puVar11[-6] = 0;
              *(undefined8 *)(puVar11 + -4) = 0;
              *(undefined8 *)(puVar11 + -2) = 0;
              *puVar11 = 0;
              if (pppppppppppuVar10 == (ulong ***********)0x0) {
LAB_0206b283:
                recovered_2000bb0(buffer);
                if (pppppppppppuVar13 != (ulong ***********)0x0) {
                  pppppppppppuVar10 = pppppppppppuVar13;
                  do {
                    recovered_205ec00(pppppppppppuVar10);
                    pppppppppppuVar10 = pppppppppppuVar10 + 8;
                    param_4 = (ulong *)((long)param_4 + -1);
                  } while ((ulong ***)param_4 != (ulong ***)0x0);
                }
                goto LAB_0206b2a4;
              }
              puVar11[-7] = 0;
              *(undefined8 *)(puVar11 + -4) = 0;
              *puVar11 = 0;
              switch((uintptr_t)(*(undefined4 *)pppppppppppuVar19)) {
              case 0:
                goto switchD_0206ad21_caseD_0;
              case 1:
                uVar8 = *(uint *)((long)pppppppppppuVar19 + 4);
                fVar28 = (float)(int)uVar8;
                break;
              case 2:
                fVar28 = *(float *)(pppppppppppuVar19 + 1);
                uVar8 = (uint)fVar28;
                break;
              case 3:
                ppppppppppuVar23 = pppppppppppuVar19[2];
                if (ppppppppppuVar23 == (ulong **********)0x0) {
                  ppppppppppuVar23 = (ulong **********)&DAT_020a259c;
                }
                fVar28 = 0.0;
                uVar8 = 0;
                goto LAB_0206acab;
              case 4:
                ppppppppppuVar21 = pppppppppppuVar19[4];
                if ((ulong)ppppppppppuVar21 >> 0x20 != 0) {
                  pcVar14 = str_020ab09b;
                  goto LAB_0206b274;
                }
                ppppppppppuVar15 = pppppppppppuVar19[3];
                fVar28 = 0.0;
                uVar8 = 0;
                ppppppppppuVar23 = (ulong **********)0x0;
                goto LAB_0206acaf;
              case 5:
                bVar27 = *(int *)((long)pppppppppppuVar19 + 4) != 0;
                fVar28 = fVar4;
                if (!bVar27) {
                  fVar28 = 0.0;
                }
                uVar8 = (uint)bVar27;
                break;
              case 6:
                uVar8 = *(uint *)((long)pppppppppppuVar19 + 4);
                ppppppppppuVar23 = (ulong **********)0x0;
                fVar28 = 0.0;
                goto LAB_0206acab;
              default:
                pcVar14 = str_020ab0dd;
LAB_0206b274:
                pf_varargs_205eb00___(local_38,(char *)local_48,pcVar14);
                goto LAB_0206b283;
              }
              ppppppppppuVar23 = (ulong **********)0x0;
LAB_0206acab:
              ppppppppppuVar15 = (ulong **********)0x0;
              ppppppppppuVar21 = (ulong **********)0x0;
LAB_0206acaf:
              puVar11[-8] = *(undefined4 *)pppppppppppuVar19;
              puVar11[-7] = uVar8;
              puVar11[-6] = fVar28;
              *(ulong ***********)(puVar11 + -4) = ppppppppppuVar23;
              *(ulong ***********)(puVar11 + -2) = ppppppppppuVar15;
              *puVar11 = (int)ppppppppppuVar21;
switchD_0206ad21_caseD_0:
              pppppppppppuVar19 = pppppppppppuVar19 + 8;
              puVar11 = puVar11 + 10;
              pppuVar25 = (ulong ***)((long)pppuVar25 + -1);
              in_R9 = (ulong *******)pppppppppppuVar10;
            } while (pppuVar25 != (ulong ***)0x0);
          }
          pcVar14 = (char *)(appppppppppuStackY_568 + 0x80);
          uVar24 = 0xa0;
          iVar9 = (**(code **)(*(long *)(local_40 + 0xe) + 0x88))
                            (buffer,(ulong)param_4 & 0xffffffff,&local_c8,pcVar14);
          recovered_2000bb0(buffer);
          cVar29 = (char)in_stack_fffffffffffffe98;
          if (iVar9 != 0) {
            if ((ulong ***)param_4 != (ulong ***)0x0 && pppppppppppuVar13 != (ulong ***********)0x0)
            {
              pppppppppppuVar10 = pppppppppppuVar13;
              do {
                recovered_205ec00(pppppppppppuVar10);
                pppppppppppuVar10 = pppppppppppuVar10 + 8;
                param_4 = (ulong *)((long)param_4 + -1);
              } while ((ulong ***)param_4 != (ulong ***)0x0);
            }
            recovered_2000bb0(pppppppppppuVar13);
            uVar8 = recovered_20b0c60((int *)local_38,(char *)local_48,(undefined4 *)&local_c8,
                                      local_50,uVar24,in_R9);
            return uVar8;
          }
          if ((ulong ***)param_4 != (ulong ***)0x0 && pppppppppppuVar13 != (ulong ***********)0x0) {
            pppppppppppuVar10 = pppppppppppuVar13;
            do {
              recovered_205ec00(pppppppppppuVar10);
              cVar29 = (char)in_stack_fffffffffffffe98;
              pppppppppppuVar10 = pppppppppppuVar10 + 8;
              param_4 = (ulong *)((long)param_4 + -1);
            } while ((ulong ***)param_4 != (ulong ***)0x0);
          }
          recovered_2000bb0(pppppppppppuVar13);
          if (cVar29 == '\0') {
            pcVar14 = str_020a487f;
          }
          format = &DAT_020a25e3;
          pppppppppppuVar10 = local_48;
LAB_0206b105:
          pf_varargs_205eb00__8_(local_38,(char *)pppppppppppuVar10,format,(ulonglong)pcVar14);
          return 0;
        }
        if ((ulong ***)param_4 != (ulong ***)0x0 && pppppppppppuVar13 != (ulong ***********)0x0) {
          pppppppppppuVar10 = pppppppppppuVar13;
          do {
            recovered_205ec00(pppppppppppuVar10);
            pppppppppppuVar10 = pppppppppppuVar10 + 8;
            param_4 = (ulong *)((long)param_4 + -1);
          } while ((ulong ***)param_4 != (ulong ***)0x0);
        }
        recovered_2000bb0(pppppppppppuVar13);
        pcVar14 = str_020a4813;
        param_1 = (ulong *)local_38;
        goto LAB_0206a93b;
      }
      if (piVar1[1] == 1) {
        ppppuVar18 = (ulong ****)&DAT_020a259c;
        if (*(ulong *****)(piVar1 + 6) != (ulong ****)0x0) {
          ppppuVar18 = *(ulong *****)(piVar1 + 6);
        }
        uVar8 = recovered_20a9cb0((ulong ***)local_38,ppppuVar18,(ulong ***)pppppppppppuVar10,
                                  (ulong ***)param_4,(uint ***********)param_5,in_R9,
                                  in_stack_fffffffffffffe98,in_stack_fffffffffffffea0,
                                  (ulong *)in_stack_fffffffffffffea8,
                                  (char *)in_stack_fffffffffffffeb0,in_stack_fffffffffffffeb8,
                                  (undefined1 *)in_stack_fffffffffffffec0,
                                  (ulong *)in_stack_fffffffffffffec8);
        if ((ulong ***)param_4 != (ulong ***)0x0 && pppppppppppuVar13 != (ulong ***********)0x0) {
          pppppppppppuVar10 = pppppppppppuVar13;
          do {
            recovered_205ec00(pppppppppppuVar10);
            pppppppppppuVar10 = pppppppppppuVar10 + 8;
            param_4 = (ulong *)((long)param_4 + -1);
          } while ((ulong ***)param_4 != (ulong ***)0x0);
        }
LAB_0206ab31:
        recovered_2000bb0(pppppppppppuVar13);
        return uVar8;
      }
      if (((ulong ***)param_4 != (ulong ***)0x0) && ((char)piVar1[2] != '\0')) {
        if (pppppppppppuVar13 != (ulong ***********)0x0) {
          pppppppppppuVar10 = pppppppppppuVar13;
          do {
            recovered_205ec00(pppppppppppuVar10);
            pppppppppppuVar10 = pppppppppppuVar10 + 8;
            param_4 = (ulong *)((long)param_4 + -1);
          } while ((ulong ***)param_4 != (ulong ***)0x0);
        }
        recovered_2000bb0(pppppppppppuVar13);
        pppppppppppuVar19 = (ulong ***********)str_020a3bae;
        if (*(ulong ************)(*(long *)(local_40 + 0xe) + 0x10) != (ulong ***********)0x0) {
          pppppppppppuVar19 = *(ulong ************)(*(long *)(local_40 + 0xe) + 0x10);
        }
        pcVar14 = str_020a48a3;
LAB_0206ac4a:
        param_1 = (ulong *)local_38;
        goto LAB_0206a93b;
      }
      if (*(char *)((long)piVar1 + 9) == '\x01') {
        uVar8 = recovered_20b0e60((int *)local_38,piVar1,pppppppppppuVar10,(ulong)param_4,param_5,
                                  in_R9);
        if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
          pppppppppppuVar10 = pppppppppppuVar13;
          do {
            recovered_205ec00(pppppppppppuVar10);
            pppppppppppuVar10 = pppppppppppuVar10 + 8;
            param_4 = (ulong *)((long)param_4 + -1);
          } while ((ulong ***)param_4 != (ulong ***)0x0);
        }
        goto LAB_0206ab31;
      }
      local_50 = (uint ***********)param_5;
      uVar7 = recovered_20b10a0();
      if (uVar7 == '\0') {
        pppppppppppuVar10 = pppppppppppuVar13;
        if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
          do {
            recovered_205ec00(pppppppppppuVar13);
            pppppppppppuVar13 = pppppppppppuVar13 + 8;
            param_4 = (ulong *)((long)param_4 + -1);
          } while ((ulong ***)param_4 != (ulong ***)0x0);
        }
        goto LAB_0206afde;
      }
      lVar12 = *(long *)(local_40 + 0xe);
      pcVar14 = *(char **)(lVar12 + 0x10);
      if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
        lVar12 = DAT_020e60e0;
        uVar24 = DAT_020e60f0;
        uVar24 = DAT_020e60f0;
        lVar2 = DAT_020e60f0;
        plVar22 = (long *)(lVar12 * 0x18 + lVar2 + -0x18);
        if ((plVar22 == (long *)0x0 || lVar12 == 0) ||
           (uVar8 = recovered_20df440(plVar22,(long)pcVar14,(long)local_40), (char)uVar8 == '\0')) {
          recovered_20b1250();
          if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
            pppppppppppuVar10 = pppppppppppuVar13;
            do {
              recovered_205ec00(pppppppppppuVar10);
              pppppppppppuVar10 = pppppppppppuVar10 + 8;
              param_4 = (ulong *)((long)param_4 + -1);
            } while ((ulong ***)param_4 != (ulong ***)0x0);
          }
          recovered_2000bb0(pppppppppppuVar13);
          pppppppppppuVar19 = *(ulong ************)(*(long *)(local_40 + 0xe) + 0x10);
          pcVar14 = str_020a47e7;
          goto LAB_0206ac4a;
        }
        lVar12 = *(long *)(local_40 + 0xe);
      }
      if (*(long *)(lVar12 + 0x68) == 0) {
        pppuVar25 = (ulong ***)0x0;
      }
      else {
        unaff_R12 = (ulong ***)0x0;
        pppppppppppuVar19 = pppppppppppuVar10;
        do {
          in_stack_fffffffffffffe98 = 0;
          in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffff00000000;
          in_stack_fffffffffffffea8 = (ulong *******)0x0;
          in_stack_fffffffffffffeb0 = (ulong *******)0x0;
          in_stack_fffffffffffffeb8 = (uint *)0x0;
          in_stack_fffffffffffffec0 = (ulong *******)0x0;
          in_stack_fffffffffffffec8 = (ulong *******)0x0;
          in_stack_fffffffffffffed0 = (ulong *******)0x0;
          lVar2 = DAT_020e60e0;
          if (lVar2 == 0) {
LAB_0206b0ad:
            recovered_20b1250();
            if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0)
            {
              pppppppppppuVar10 = pppppppppppuVar13;
              do {
                recovered_205ec00(pppppppppppuVar10);
                pppppppppppuVar10 = pppppppppppuVar10 + 8;
                param_4 = (ulong *)((long)param_4 + -1);
              } while ((ulong ***)param_4 != (ulong ***)0x0);
            }
            recovered_2000bb0(pppppppppppuVar13);
            pcVar14 = *(char **)(*(long *)(*(long *)(local_40 + 0xe) + 0x60) + (long)unaff_R12 * 8);
            format = str_020a48ce;
            pppppppppppuVar10 = (ulong ***********)pcVar14;
            goto LAB_0206b105;
          }
          lVar3 = DAT_020e60f0;
          plVar22 = (long *)(lVar3 + lVar2 * 0x18 + -0x18);
          if (plVar22 == (long *)0x0) goto LAB_0206b0ad;
          pppppppppppuVar16 = (ulong ***********)0x0;
          if (unaff_R12 < param_4) {
            pppppppppppuVar16 = pppppppppppuVar19;
          }
          if (pppppppppppuVar16 == (ulong ***********)0x0) {
            pppppppppppuVar16 = appppppppppuStackY_568 + 0x80;
          }
          uVar8 = recovered_20df440(plVar22,*(long *)(*(long *)(lVar12 + 0x60) + (long)unaff_R12 * 8
                                                     ),(long)pppppppppppuVar16);
          if ((char)uVar8 == '\0') goto LAB_0206b0ad;
          unaff_R12 = (ulong ***)((long)unaff_R12 + 1);
          lVar12 = *(long *)(local_40 + 0xe);
          pppuVar25 = *(ulong ****)(lVar12 + 0x68);
          pppppppppppuVar19 = pppppppppppuVar19 + 8;
        } while (unaff_R12 < pppuVar25);
      }
      if (*(char *)(lVar12 + 10) == '\x01') {
        pppppppppppuVar10 = pppppppppppuVar10 + (long)pppuVar25 * 8;
        uVar20 = (long)param_4 - (long)pppuVar25;
        bVar27 = uVar20 == 0;
        if (param_4 < pppuVar25) {
          uVar20 = 0;
        }
        if (param_4 < pppuVar25 || bVar27) {
          pppppppppppuVar10 = (ulong ***********)0x0;
        }
        uVar7 = recovered_20b12f0((long)pppppppppppuVar10,uVar20);
        if (uVar7 == '\0') {
          recovered_20b1250();
          if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
            pppppppppppuVar10 = pppppppppppuVar13;
            do {
              recovered_205ec00(pppppppppppuVar10);
              pppppppppppuVar10 = pppppppppppuVar10 + 8;
              param_4 = (ulong *)((long)param_4 + -1);
            } while ((ulong ***)param_4 != (ulong ***)0x0);
          }
          recovered_2000bb0(pppppppppppuVar13);
          pcVar14 = str_020a48ef;
          goto LAB_0206afed;
        }
        uVar8 = recovered_2096580(*(ulong ************)(*(long *)(local_40 + 0xe) + 0x70),
                                  *(ulong *************)(*(long *)(local_40 + 0xe) + 0x78),&local_60
                                  ,(ulong ******)&local_54,&local_a0,(ulong ***********)in_R9,
                                  in_stack_fffffffffffffe98,in_stack_fffffffffffffea0,
                                  in_stack_fffffffffffffea8,in_stack_fffffffffffffeb0,
                                  (long *)in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0,
                                  in_stack_fffffffffffffec8,in_stack_fffffffffffffed0);
        if ((char)uVar8 == '\0') {
          recovered_205ec00(&local_a0);
          recovered_20b13e0();
          goto LAB_0206b358;
        }
        recovered_20b13e0();
      }
      else {
        uVar8 = recovered_2096580(*(ulong ************)(lVar12 + 0x70),
                                  *(ulong *************)(lVar12 + 0x78),&local_60,
                                  (ulong ******)&local_54,&local_a0,(ulong ***********)in_R9,
                                  in_stack_fffffffffffffe98,in_stack_fffffffffffffea0,
                                  in_stack_fffffffffffffea8,in_stack_fffffffffffffeb0,
                                  (long *)in_stack_fffffffffffffeb8,in_stack_fffffffffffffec0,
                                  in_stack_fffffffffffffec8,in_stack_fffffffffffffed0);
        if ((char)uVar8 == '\0') {
          recovered_205ec00(&local_a0);
LAB_0206b358:
          recovered_20b1250();
          if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
            pppppppppppuVar10 = pppppppppppuVar13;
            do {
              recovered_205ec00(pppppppppppuVar10);
              pppppppppppuVar10 = pppppppppppuVar10 + 8;
              param_4 = (ulong *)((long)param_4 + -1);
            } while ((ulong ***)param_4 != (ulong ***)0x0);
          }
LAB_0206b2a4:
          recovered_2000bb0(pppppppppppuVar13);
          return 0;
        }
      }
      recovered_20b1250();
      if (pppppppppppuVar13 != (ulong ***********)0x0 && (ulong ***)param_4 != (ulong ***)0x0) {
        pppppppppppuVar10 = pppppppppppuVar13;
        do {
          recovered_205ec00(pppppppppppuVar10);
          pppppppppppuVar10 = pppppppppppuVar10 + 8;
          param_4 = (ulong *)((long)param_4 + -1);
        } while ((ulong ***)param_4 != (ulong ***)0x0);
      }
      recovered_2000bb0(pppppppppppuVar13);
      pppppppppppuVar5 = local_50;
      if (local_54 != 1) {
        if ((local_54 & 0xfffffffe) == 2) {
          recovered_205ec00(local_50);
          pppppppppppuVar5[6] = local_70;
          pppppppppppuVar5[7] = ppppppppppuStack_68;
          pppppppppppuVar5[4] = local_80;
          pppppppppppuVar5[5] = ppppppppppuStack_78;
          pppppppppppuVar5[2] = local_90;
          pppppppppppuVar5[3] = ppppppppppuStack_88;
          *pppppppppppuVar5 = (uint **********)local_a0;
          pppppppppppuVar5[1] = (uint **********)CONCAT44(uStack_94,uStack_98);
        }
        else {
          recovered_205ec00(&local_a0);
          *local_50 = (uint **********)0x0;
          *(undefined4 *)(local_50 + 1) = 0;
          local_50[2] = (uint **********)0x0;
          local_50[3] = (uint **********)0x0;
          local_50[4] = (uint **********)0x0;
          local_50[5] = (uint **********)0x0;
          local_50[6] = (uint **********)0x0;
          local_50[7] = (uint **********)0x0;
        }
        return (uint)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
      }
      recovered_205ec00(&local_a0);
      pcVar14 = str_020a3acf;
      param_1 = (ulong *)(appppppppppuStackY_568 + 0x80);
    }
  }
  pppppppppppuVar19 = (ulong ***********)0x0;
LAB_0206a93b:
  pf_varargs_205eb00___(param_1,(char *)pppppppppppuVar19,pcVar14);
  return 0;
code_r0x0206aaa3:
  puVar26 = puVar26 + 8;
  puVar17 = puVar17 + 8;
  param_4 = (ulong *)((long)param_4 + -1);
  if (param_4 == (ulong *)0x0) goto code_r0x0206aab3;
  goto LAB_0206aa90;
code_r0x0206aab3:
  pppppppppppuVar13 = local_48;
  param_5 = (ulong *)local_50;
  param_4 = (ulong *)pppuVar25;
  goto LAB_0206aad1;
}
