/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a3b08 (*(uint8_t *)(0x20f42c9U))
#define DAT_020a3b0c (*(uint8_t *)(0x20f42cdU))
#define DAT_020a3b13 (*(uint8_t *)(0x20f42d4U))
#define DAT_020a3dc1 (*(uint8_t *)(0x20f4582U))
#define DAT_020a3dc2 (*(uint8_t *)(0x20f4583U))
#define DAT_020a3f28 (*(uint8_t *)(0x20f46e9U))
#define DAT_020a3f29 (*(uint8_t *)(0x20f46eaU))
#define DAT_020a3f2a (*(uint8_t *)(0x20f46ebU))
#define DAT_020a3f2b (*(uint8_t *)(0x20f46ecU))
#define apppppppppuStackY_628 (*(ulong ********* (*)[128])(frame + 24))
#define in_stack_fffffffffffffdd8 (*(undefined8 *)(frame + 1048))
#define in_stack_fffffffffffffde0 (*(undefined8 *)(frame + 1056))
#define in_stack_fffffffffffffde8 (*(ulong ******* *)(frame + 1064))
#define in_stack_fffffffffffffdf0 (*(ulong ******* *)(frame + 1072))
#define in_stack_fffffffffffffdf8 (*(long * *)(frame + 1080))
#define in_stack_fffffffffffffe00 (*(ulong ******* *)(frame + 1088))
#define in_stack_fffffffffffffe08 (*(ulong ******* *)(frame + 1096))
#define in_stack_fffffffffffffe10 (*(ulong ******* *)(frame + 1104))
#define local_19 (*(char *)(frame + 1575))
#define local_20 (*(uint *)(frame + 1568))
#define local_28 (*(undefined8 * *)(frame + 1560))
#define local_38 (*(undefined8 *)(frame + 1544))
#define local_40 (*(ulong ********** *)(frame + 1536))
#define local_48 (*(ulong *)(frame + 1528))
#define local_58 (*(undefined8 *)(frame + 1512))
#define local_68 (*(undefined8 *)(frame + 1496))
#define local_78 (*(undefined8 *)(frame + 1480))
#define local_80 (*(undefined4 *)(frame + 1472))
#define local_88 (*(ulong *********** *)(frame + 1464))
#define local_90 (*(ulong ********** *)(frame + 1456))
#define local_98 (*(int * *)(frame + 1448))
#define local_a8 (*(ulong (*)[2])(frame + 1432))
#define local_e8 (*(ulong ***** (*)[8])(frame + 1368))
#define str_020a3acf (*(char (*)[1])(0x20f4290U))
#define str_020a3ae9 (*(char (*)[1])(0x20f42aaU))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
#define str_020a3b1e (*(char (*)[1])(0x20f42dfU))
#define str_020a3b63 (*(char (*)[1])(0x20f4324U))
#define str_020a3b7b (*(char (*)[1])(0x20f433cU))
#define str_020a3ba7 (*(char (*)[1])(0x20f4368U))
#define str_020a3bae (*(char (*)[1])(0x20f436fU))
#define str_020a3bbd (*(char (*)[1])(0x20f437eU))
#define str_020a3bc3 (*(char (*)[1])(0x20f4384U))
#define str_020a3e52 (*(char (*)[1])(0x20f4613U))
#define str_020a3ea6 (*(char (*)[1])(0x20f4667U))
#define str_020ab9fe (*(char (*)[1])(0x20fe54bU))
#define uStack_50 (*(undefined8 *)(frame + 1520))
#define uStack_60 (*(undefined8 *)(frame + 1504))
#define uStack_70 (*(undefined8 *)(frame + 1488))
void recovered_2065610(undefined1 *param_1,undefined8 in_R8,ulong *******in_R9,undefined8 param_4,
                      ulong ************param_5,ulong ******param_6,ulong ******param_7,
                      undefined8 param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  ulong **********out;
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uchar uVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  ulong ************in_R8_00;

  pcVar8 = &DAT_020a259c;
  if (param_1 != (undefined1 *)0x0) {
    pcVar8 = param_1;
  }
  out = apppppppppuStackY_628 + 0x80;
  pf_varargs_20039e0__8_((char *)out,0x140,&DAT_020a25e3,(ulonglong)pcVar8);
  local_48 = 0;
  local_90 = out;
  local_40 = out;
  uVar6 = recovered_2003450((char *)out,';');
  if (uVar6 != 0) {
    local_e8[0] = (ulong *****)0x0;
    PF_PART4(local_38, 0) = 0;
    local_88 = (ulong ***********)0x0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uVar5 = recovered_2096580(&local_90,(ulong ************)0x1,local_e8,(ulong ******)&local_38,
                              &local_88,(ulong ***********)in_R9,in_stack_fffffffffffffdd8,
                              in_stack_fffffffffffffde0,in_stack_fffffffffffffde8,
                              in_stack_fffffffffffffdf0,in_stack_fffffffffffffdf8,
                              in_stack_fffffffffffffe00,in_stack_fffffffffffffe08,
                              in_stack_fffffffffffffe10);
    if ((char)uVar5 != '\0') {
      if ((uint)local_38 == 1) {
        pcVar8 = str_020a3acf;
      }
      else {
        if (((uint)local_38 & 0xfffffffe) != 2) {
          if ((int)local_88 != 0) {
            recovered_20e9090((long)&local_88);
          }
          goto LAB_020443a9;
        }
        pcVar8 = str_020a3ae9;
      }
      pf_varargs_205eb00___(&local_48,(char *)0x0,pcVar8);
    }
    goto LAB_020443a9;
  }
  uVar4 = recovered_209c670((long)(apppppppppuStackY_628 + 0x80),&local_38);
  puVar3 = local_28;
  if (uVar4 == '\0') {
    pf_varargs_205eb00___(&local_48,(char *)0x0,str_020a3b63);
    return;
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = (int *)0x0;
  if (CONCAT44(PF_PART4(local_38, 4),(uint)local_38) == 0) {
    recovered_2000bb0(local_28);
    return;
  }
  pbVar2 = (byte *)*local_28;
  if (pbVar2 == (byte *)0x0) {
LAB_02044596:
    if ((CONCAT44(PF_PART4(local_38, 4),(uint)local_38) == 1) ||
       (((uVar5 = recovered_209cd00((char *)pbVar2,str_020a3bbd), (char)uVar5 == '\0' &&
         (uVar5 = recovered_209cd00((char *)pbVar2,str_020a3bc3), (char)uVar5 == '\0')) ||
        (uVar5 = recovered_209cd00((char *)puVar3[1],str_020a3bae), (char)uVar5 == '\0')))) {
      if (pbVar2 != (byte *)0x0) {
        bVar1 = *pbVar2;
        if (bVar1 == 0) {
          pcVar7 = &DAT_020a3f28;
        }
        else {
          if (bVar1 != 0x66) {
            uVar5 = bVar1 - 0x20 & 0xff;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              uVar5 = (uint)bVar1;
            }
            pcVar8 = (char *)(ulong)uVar5;
            if ((char)uVar5 != 'F') goto LAB_0204467f;
          }
          bVar1 = pbVar2[1];
          if (bVar1 == 0) {
            pcVar7 = &DAT_020a3f29;
          }
          else {
            if (bVar1 != 0x6f) {
              uVar5 = bVar1 - 0x20 & 0xff;
              if (0x19 < (byte)(bVar1 + 0x9f)) {
                uVar5 = (uint)bVar1;
              }
              pcVar8 = (char *)(ulong)uVar5;
              if ((char)uVar5 != 'O') goto LAB_0204467f;
            }
            bVar1 = pbVar2[2];
            if (bVar1 == 0) {
              pcVar7 = &DAT_020a3f2a;
            }
            else {
              if (bVar1 != 0x72) {
                uVar5 = bVar1 - 0x20 & 0xff;
                if (0x19 < (byte)(bVar1 + 0x9f)) {
                  uVar5 = (uint)bVar1;
                }
                pcVar8 = (char *)(ulong)uVar5;
                if ((char)uVar5 != 'R') goto LAB_0204467f;
              }
              if (pbVar2[3] != 0) goto LAB_0204467f;
              pcVar7 = &DAT_020a3f2b;
            }
          }
        }
        if (*pcVar7 == '\0') goto LAB_0204471f;
      }
LAB_0204467f:
      uVar5 = recovered_209cd00((char *)pbVar2,str_020a3e52);
      if ((((((char)uVar5 == '\0') &&
            (uVar5 = recovered_209cd00((char *)pbVar2,str_020a3ea6), (char)uVar5 == '\0')) &&
           ((uVar5 = recovered_209cd00((char *)pbVar2,str_020a3b7b), (char)uVar5 == '\0' &&
            ((uVar5 = recovered_209cd00((char *)pbVar2,str_020a3ba7), (char)uVar5 == '\0' &&
             (uVar5 = recovered_209cd00((char *)pbVar2,&DAT_020a3b08), (char)uVar5 == '\0')))))) &&
          (uVar5 = recovered_209cd00((char *)pbVar2,&DAT_020a3b0c), (char)uVar5 == '\0')) &&
         ((uVar5 = recovered_209cd00((char *)pbVar2,&DAT_020a3b13), (char)uVar5 == '\0' &&
          (uVar5 = recovered_209cd00((char *)pbVar2,str_020a3b18), (char)uVar5 == '\0')))) {
        local_20 = local_20 & 0xffffff00;
        uVar4 = recovered_20a08a0((int *)&local_48,(ulong ****)&local_38,(ulong ***)&local_20,
                                  (ulong ***)pcVar8,in_R8,in_R9,in_stack_fffffffffffffdd8,
                                  in_stack_fffffffffffffde0,(long)in_stack_fffffffffffffde8,
                                  (long *)in_stack_fffffffffffffdf0,
                                  (undefined1 *)in_stack_fffffffffffffdf8);
        if ((uVar4 == '\0') || ((char)local_20 == '\x01')) {
          recovered_209cca0(&local_38);
          return;
        }
        local_88 = (ulong ***********)0x0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_19 = '\0';
        in_R8_00 = &local_88;
        pcVar8 = &local_19;
        uVar4 = recovered_20e9280(&local_48,&local_38,(byte *)local_e8,local_a8,(long)in_R8_00,
                                  pcVar8);
        if (uVar4 != '\0') {
          if (local_19 == '\x01') {
            recovered_20e9970((char *)local_e8,local_98,local_a8[0],(int *)&local_88,
                              (uint *)in_R8_00,pcVar8);
          }
          else {
            uVar4 = recovered_20a1890((int *)&local_48,&local_38,(ulong *)&local_88);
            if ((uVar4 != '\0') && ((int)local_88 != 0)) {
              recovered_20e9090((long)&local_88);
            }
          }
        }
        recovered_209ce10(local_a8);
        recovered_209cca0(&local_38);
LAB_020443a9:
        recovered_205ec00(&local_88);
        return;
      }
    }
  }
  else {
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      pcVar8 = str_020a3bae;
LAB_0204458d:
      if (*pcVar8 != '\0') goto LAB_02044596;
    }
    else {
      if (bVar1 != 0x69) {
        bVar10 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar10 = bVar1;
        }
        if (bVar10 == 0x49) goto LAB_02044335;
LAB_020443f5:
        if (bVar1 != 0x66) {
          pcVar8 = (char *)(ulong)bVar1;
          bVar10 = bVar1 - 0x20;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            bVar10 = bVar1;
          }
          if (bVar10 != 0x46) goto LAB_02044596;
        }
        bVar1 = pbVar2[1];
        if (bVar1 == 0) {
          pcVar8 = str_020a3bae + 1;
        }
        else {
          if (bVar1 != 0x75) {
            pcVar8 = (char *)(ulong)bVar1;
            bVar10 = bVar1 - 0x20;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              bVar10 = bVar1;
            }
            if (bVar10 != 0x55) goto LAB_02044596;
          }
          bVar1 = pbVar2[2];
          if (bVar1 == 0) {
            pcVar8 = str_020a3bae + 2;
          }
          else {
            if (bVar1 != 0x6e) {
              pcVar8 = (char *)(ulong)bVar1;
              bVar10 = bVar1 - 0x20;
              if (0x19 < (byte)(bVar1 + 0x9f)) {
                bVar10 = bVar1;
              }
              if (bVar10 != 0x4e) goto LAB_02044596;
            }
            bVar1 = pbVar2[3];
            if (bVar1 == 0) {
              pcVar8 = str_020a3bae + 3;
            }
            else {
              if (bVar1 != 99) {
                pcVar8 = (char *)(ulong)bVar1;
                bVar10 = bVar1 - 0x20;
                if (0x19 < (byte)(bVar1 + 0x9f)) {
                  bVar10 = bVar1;
                }
                if (bVar10 != 0x43) goto LAB_02044596;
              }
              bVar1 = pbVar2[4];
              if (bVar1 == 0) {
                pcVar8 = str_020a3bae + 4;
              }
              else {
                if (bVar1 != 0x74) {
                  pcVar8 = (char *)(ulong)bVar1;
                  bVar10 = bVar1 - 0x20;
                  if (0x19 < (byte)(bVar1 + 0x9f)) {
                    bVar10 = bVar1;
                  }
                  if (bVar10 != 0x54) goto LAB_02044596;
                }
                bVar1 = pbVar2[5];
                if (bVar1 == 0) {
                  pcVar8 = str_020a3bae + 5;
                }
                else {
                  if (bVar1 != 0x69) {
                    pcVar8 = (char *)(ulong)bVar1;
                    bVar10 = bVar1 - 0x20;
                    if (0x19 < (byte)(bVar1 + 0x9f)) {
                      bVar10 = bVar1;
                    }
                    if (bVar10 != 0x49) goto LAB_02044596;
                  }
                  bVar1 = pbVar2[6];
                  if (bVar1 == 0) {
                    pcVar8 = str_020a3bae + 6;
                  }
                  else {
                    if (bVar1 != 0x6f) {
                      pcVar8 = (char *)(ulong)bVar1;
                      bVar10 = bVar1 - 0x20;
                      if (0x19 < (byte)(bVar1 + 0x9f)) {
                        bVar10 = bVar1;
                      }
                      if (bVar10 != 0x4f) goto LAB_02044596;
                    }
                    bVar1 = pbVar2[7];
                    if (bVar1 == 0) {
                      pcVar8 = str_020a3bae + 7;
                    }
                    else {
                      if (bVar1 != 0x6e) {
                        pcVar8 = (char *)(ulong)bVar1;
                        bVar10 = bVar1 - 0x20;
                        if (0x19 < (byte)(bVar1 + 0x9f)) {
                          bVar10 = bVar1;
                        }
                        if (bVar10 != 0x4e) goto LAB_02044596;
                      }
                      pcVar8 = (char *)(ulong)bVar1;
                      if (pbVar2[8] != 0) goto LAB_02044596;
                      pcVar8 = str_020a3bae + 8;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0204458d;
      }
LAB_02044335:
      bVar10 = pbVar2[1];
      if (bVar10 == 0) {
        pcVar8 = &DAT_020a3dc1;
      }
      else {
        if (bVar10 != 0x66) {
          bVar11 = bVar10 - 0x20;
          if (0x19 < (byte)(bVar10 + 0x9f)) {
            bVar11 = bVar10;
          }
          if (bVar11 != 0x46) goto LAB_020443f5;
        }
        if (pbVar2[2] != 0) goto LAB_020443f5;
        pcVar8 = &DAT_020a3dc2;
      }
      if (*pcVar8 != '\0') goto LAB_020443f5;
    }
  }
LAB_0204471f:
  local_e8[0] = (ulong *****)0x0;
  local_20 = 0;
  local_88 = (ulong ***********)0x0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = recovered_2096580(&local_90,(ulong ************)0x1,local_e8,(ulong ******)&local_20,
                            &local_88,(ulong ***********)in_R9,in_stack_fffffffffffffdd8,
                            in_stack_fffffffffffffde0,in_stack_fffffffffffffde8,
                            in_stack_fffffffffffffdf0,in_stack_fffffffffffffdf8,
                            in_stack_fffffffffffffe00,in_stack_fffffffffffffe08,
                            in_stack_fffffffffffffe10);
  if ((char)uVar5 == '\0') {
    recovered_205ec00(&local_88);
    if (CONCAT44(PF_PART4(local_38, 4),(uint)local_38) != 0) {
      uVar9 = 0;
      do {
        recovered_2000bb0((void *)local_28[uVar9]);
        uVar9 = uVar9 + 1;
      } while (uVar9 < CONCAT44(PF_PART4(local_38, 4),(uint)local_38));
    }
    goto LAB_02044836;
  }
  if (local_20 == 1) {
    pcVar8 = str_020a3acf;
LAB_020447fa:
    pf_varargs_205eb00___(&local_48,(char *)0x0,pcVar8);
  }
  else {
    if ((local_20 & 0xfffffffe) == 2) {
      pcVar8 = str_020a3ae9;
      goto LAB_020447fa;
    }
    if (local_e8[0] == (ulong *****)0x0) {
      uVar5 = recovered_209cd00((char *)*local_28,&DAT_020a3b0c);
      pcVar8 = str_020a3b1e;
      if ((char)uVar5 != '\0') {
        pcVar8 = str_020ab9fe;
      }
      goto LAB_020447fa;
    }
  }
  recovered_205ec00(&local_88);
  if (CONCAT44(PF_PART4(local_38, 4),(uint)local_38) != 0) {
    uVar9 = 0;
    do {
      recovered_2000bb0((void *)local_28[uVar9]);
      uVar9 = uVar9 + 1;
    } while (uVar9 < CONCAT44(PF_PART4(local_38, 4),(uint)local_38));
  }
LAB_02044836:
  recovered_2000bb0(local_28);
  return;
}
