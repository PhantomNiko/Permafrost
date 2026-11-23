/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100089c8
#define DAT_100089c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x318U)))
#undef DAT_100089d0
#define DAT_100089d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x320U)))
#undef DAT_10008ad8
#define DAT_10008ad8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x428U)))
#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
#undef DAT_10009532
#define DAT_10009532 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe82U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a58U)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7a5cU)))
#undef UINT_8201082c
#define UINT_8201082c (*(uint *)(0x8201082cU))
#undef _DAT_10010108
#define _DAT_10010108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a58U)))
#undef str_10008a21
#define str_10008a21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_10008a41
#define str_10008a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_10008a51
#define str_10008a51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a1U)))
#undef str_10008a58
#define str_10008a58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a8U)))
#undef str_10008a68
#define str_10008a68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b8U)))
#undef str_10008a73
#define str_10008a73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c3U)))
#undef str_10008a7a
#define str_10008a7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
#undef str_10008a82
#define str_10008a82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d2U)))
#undef str_10008aa0
#define str_10008aa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f0U)))
#undef str_10008abb
#define str_10008abb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10008b17
#define str_10008b17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
#undef str_10008d21
#define str_10008d21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x671U)))
#undef str_10008d31
#define str_10008d31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x681U)))
#undef str_10008d63
#define str_10008d63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b3U)))
#undef str_10008d83
#define str_10008d83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d3U)))
#undef str_1000952b
#define str_1000952b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7bU)))
#define iStack_42e8 (*(int *)(pf_stack_frame + 24))
#define uStack_42e4 (*(uint *)(pf_stack_frame + 28))
#define uStack_42e0 (*(uint *)(pf_stack_frame + 32))
#define uStack_42dc (*(uint *)(pf_stack_frame + 36))
#define pvStack_42b8 (*(void * *)(pf_stack_frame + 72))
#define uStack_3f98 (*(uint *)(pf_stack_frame + 872))
#define bStack_3f94 (*(byte *)(pf_stack_frame + 876))
#define uStack_3f93 (*(undefined1 *)(pf_stack_frame + 877))
#define auStack_3f90 (*(undefined1 (*)[16272])(pf_stack_frame + 880))
#define uStack_3f80 (*(ulonglong *)(pf_stack_frame + 896))
#define uStack_3f78 (*(ulonglong *)(pf_stack_frame + 904))
#define pvStack_3f60 (*(void * *)(pf_stack_frame + 928))
#define lStack_3f58 (*(long *)(pf_stack_frame + 936))
#define lStack_3f50 (*(long *)(pf_stack_frame + 944))
#define uStack_3f38 (*(undefined8 *)(pf_stack_frame + 968))
#define uStack_3f30 (*(uint *)(pf_stack_frame + 976))
#define uStack_3f2c (*(undefined8 *)(pf_stack_frame + 980))
#define uStack_3f24 (*(uint *)(pf_stack_frame + 988))
#define bStack_3f20 (*(byte *)(pf_stack_frame + 992))
#define bStack_3f1f (*(byte *)(pf_stack_frame + 993))
#define bStack_3f1e (*(byte *)(pf_stack_frame + 994))
#define iStack_3f1c (*(int *)(pf_stack_frame + 996))
#define uStack_3f18 (*(undefined8 *)(pf_stack_frame + 1000))
#define pbStack_3f10 (*(byte * *)(pf_stack_frame + 1008))
#define uStack_3f08 (*(ulong *)(pf_stack_frame + 1016))
#define uStack_3f00 (*(ulong *)(pf_stack_frame + 1024))
#define iStack_3ef4 (*(int *)(pf_stack_frame + 1036))
#define lStack_3ef0 (*(long *)(pf_stack_frame + 1040))
#define iStack_3ee0 (*(int *)(pf_stack_frame + 1056))
#define uStack_3edc (*(uint *)(pf_stack_frame + 1060))
#define iStack_3ed8 (*(int *)(pf_stack_frame + 1064))
#define uStack_3ed4 (*(uint *)(pf_stack_frame + 1068))
#define uStack_3ed0 (*(uint *)(pf_stack_frame + 1072))
#define uStack_3ec8 (*(ulong *)(pf_stack_frame + 1080))
#define uStack_3ebc (*(uint *)(pf_stack_frame + 1092))
#define uStack_3eb8 (*(undefined4 *)(pf_stack_frame + 1096))
#define iStack_3eb4 (*(int *)(pf_stack_frame + 1100))
#define bStack_3eb0 (*(byte *)(pf_stack_frame + 1104))
#define cStack_3eaf (*(char *)(pf_stack_frame + 1105))
#define cStack_3eae (*(char *)(pf_stack_frame + 1106))
#define iStack_3ea8 (*(int *)(pf_stack_frame + 1112))
#define iStack_3ea4 (*(int *)(pf_stack_frame + 1116))
#define iStack_3ea0 (*(int *)(pf_stack_frame + 1120))
#define iStack_3e9c (*(int *)(pf_stack_frame + 1124))
#define puStack_3e98 (*(undefined1 * *)(pf_stack_frame + 1128))
#define pcStack_3e88 (*(char * *)(pf_stack_frame + 1144))
#define acStack_3e78 (*(char (*)[15992])(pf_stack_frame + 1160))
#define acStack_3df8 (*(char (*)[15864])(pf_stack_frame + 1288))
#define auStack_3d78 (*(undefined1 (*)[15736])(pf_stack_frame + 1416))
#define acStack_3d50 (*(char (*)[15696])(pf_stack_frame + 1456))
#define iStack_3d28 (*(int *)(pf_stack_frame + 1496))
#define uStack_3d24 (*(undefined4 *)(pf_stack_frame + 1500))
#define auStack_3d20 (*(undefined1 (*)[15648])(pf_stack_frame + 1504))
#define cStack_3ce0 (*(char *)(pf_stack_frame + 1568))
#define cStack_3cdf (*(char *)(pf_stack_frame + 1569))
#define bStack_3cdd (*(bool *)(pf_stack_frame + 1571))
#define uStack_3cdc (*(undefined4 *)(pf_stack_frame + 1572))
#define uStack_3cd8 (*(uint *)(pf_stack_frame + 1576))
#define auStack_3ccc (*(undefined1 (*)[15564])(pf_stack_frame + 1588))
#define auStack_3c8c (*(undefined1 (*)[15500])(pf_stack_frame + 1652))
#define auStack_3b8c (*(undefined1 (*)[15244])(pf_stack_frame + 1908))
#define uStack_3a8c (*(undefined4 *)(pf_stack_frame + 2164))
#define uStack_3a88 (*(undefined4 *)(pf_stack_frame + 2168))
#define auStack_3a7c (*(undefined1 (*)[14972])(pf_stack_frame + 2180))
#define auStack_3974 (*(undefined1 (*)[14708])(pf_stack_frame + 2444))
#define acStack_386c (*(char (*)[14444])(pf_stack_frame + 2708))
#define auStack_3864 (*(undefined1 (*)[14436])(pf_stack_frame + 2716))
#define auStack_385c (*(undefined1 (*)[14428])(pf_stack_frame + 2724))
#define aiStack_3854 (*(int (*)[3605])(pf_stack_frame + 2732))
#define acStack_3847 (*(char (*)[14407])(pf_stack_frame + 2745))
#define iStack_b5c (*(int *)(pf_stack_frame + 14244))
#define iStack_b58 (*(int *)(pf_stack_frame + 14248))
#define iStack_b54 (*(int *)(pf_stack_frame + 14252))
#define uStack_b50 (*(undefined4 *)(pf_stack_frame + 14256))
#define uStack_b4c (*(undefined4 *)(pf_stack_frame + 14260))
#define uStack_9f4 (*(uint *)(pf_stack_frame + 14604))
#define iStack_9ec (*(int *)(pf_stack_frame + 14612))
#define uStack_9e8 (*(undefined8 *)(pf_stack_frame + 14616))
#define uStack_9e0 (*(undefined4 *)(pf_stack_frame + 14624))
#define uStack_9dc (*(uint *)(pf_stack_frame + 14628))
#define iStack_9d8 (*(int *)(pf_stack_frame + 14632))
#define iStack_9d4 (*(int *)(pf_stack_frame + 14636))
#define iStack_9d0 (*(int *)(pf_stack_frame + 14640))
#define bStack_9cc (*(byte *)(pf_stack_frame + 14644))
#define cStack_9cb (*(char *)(pf_stack_frame + 14645))
#define bStack_9ca (*(byte *)(pf_stack_frame + 14646))
#define cStack_9c9 (*(char *)(pf_stack_frame + 14647))
#define acStack_9c8 (*(char (*)[2504])(pf_stack_frame + 14648))
#define piStack_648 (*(int * *)(pf_stack_frame + 15544))
#define iStack_640 (*(int *)(pf_stack_frame + 15552))
#define iStack_63c (*(int *)(pf_stack_frame + 15556))
#define iStack_638 (*(int *)(pf_stack_frame + 15560))
#define iStack_634 (*(int *)(pf_stack_frame + 15564))
#define iStack_630 (*(int *)(pf_stack_frame + 15568))
#define cStack_62c (*(char *)(pf_stack_frame + 15572))
#define acStack_624 (*(char (*)[1572])(pf_stack_frame + 15580))
#define uStack_534 (*(uint *)(pf_stack_frame + 15820))
#define cStack_52c (*(char *)(pf_stack_frame + 15828))
#define iStack_528 (*(int *)(pf_stack_frame + 15832))
#define uStack_4b8 (*(undefined4 *)(pf_stack_frame + 15944))
#define cStack_4b0 (*(char *)(pf_stack_frame + 15952))
#define aiStack_4ac (*(int (*)[299])(pf_stack_frame + 15956))
#define iStack_310 (*(int *)(pf_stack_frame + 16368))
#define uStack_30c (*(undefined1 *)(pf_stack_frame + 16372))
#define uStack_308 (*(undefined8 *)(pf_stack_frame + 16376))
#define iStack_300 (*(int *)(pf_stack_frame + 16384))
#define uStack_2fc (*(undefined8 *)(pf_stack_frame + 16388))
#define uStack_2f4 (*(uint *)(pf_stack_frame + 16396))
#define iStack_2f0 (*(int *)(pf_stack_frame + 16400))
#define uStack_2e0 (*(uint *)(pf_stack_frame + 16416))
#define uStack_2dc (*(undefined8 *)(pf_stack_frame + 16420))
#define iStack_2d4 (*(int *)(pf_stack_frame + 16428))
#define iStack_2d0 (*(int *)(pf_stack_frame + 16432))
#define iStack_2cc (*(int *)(pf_stack_frame + 16436))
#define uStack_2c8 (*(uint *)(pf_stack_frame + 16440))
#define piStack_90 (*(int * *)(pf_stack_frame + 17008))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 17016))
#define uStack_80 (*(uint *)(pf_stack_frame + 17024))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int recovered_100005f0(int argc,char **argv)

{
  unsigned char pf_stack_frame[17184] __attribute__((aligned(16))) = {0};

  undefined1 *dst;
  long *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  void *pixels;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  byte *pbVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  ulong size;
  ulong uVar32;
  ulong uVar33;
  int *piVar34;
  long lVar35;
  uint128 auVar36;
  uint128 auVar37;
  uint128 auVar38;

  if ((argc == 0) || (argv == (char **)0x0)) {
    _DAT_10010108 = 0;
    if (argv == (char **)0x0) {
LAB_1000065c:
      pbVar31 = (byte *)0x0;
      goto LAB_10000660;
    }
  }
  else {
    if (*argv == (char *)0x0) {
      uVar10 = 0;
    }
    else {
      pcVar19 = strstr(*argv,str_10008a51);
      uVar10 = (uint)(pcVar19 != (char *)0x0);
    }
    _DAT_10010108 = (ulong)uVar10;
  }
  for (lVar35 = 1; lVar35 < argc; lVar35 = lVar35 + 1) {
    iVar11 = strcmp(argv[lVar35],str_10008a58);
    if (iVar11 == 0) {
      _DAT_10010108 = CONCAT44(DAT_1001010c,1);
    }
    iVar11 = strncmp(argv[lVar35],str_10008a68,10);
    if (iVar11 == 0) {
      pcVar19 = argv[lVar35] + 10;
LAB_100008a4:
      cVar2 = *pcVar19;
      if (cVar2 == '\0') goto LAB_1000202c;
      uVar10 = 0;
      while (pcVar19 = pcVar19 + 1, cVar2 != '\0') {
        if (((byte)(cVar2 - 0x3aU) < 0xf6) || (((byte)(cVar2 - 0x30) ^ 0x7ffffffe) / 10 < uVar10))
        goto LAB_1000202c;
        uVar10 = (uint)(byte)(cVar2 - 0x30) + uVar10 * 10;
        cVar2 = *pcVar19;
      }
      if (uVar10 == 0) goto LAB_1000202c;
      _DAT_10010108 = CONCAT44(uVar10,DAT_10010108);
    }
    else {
      iVar11 = strncmp(argv[lVar35],str_10008a73,6);
      if (iVar11 == 0) {
        pcVar19 = argv[lVar35] + 6;
        goto LAB_100008a4;
      }
    }
  }
  pbVar31 = (byte *)0x0;
  if ((1 < argc) && (argv != (char **)0x0)) {
    uVar27 = (ulong)(uint)argc;
    do {
      do {
        uVar27 = uVar27 - 1;
        if (uVar27 == 0) goto LAB_1000065c;
        argv = argv + 1;
        pcVar19 = *argv;
      } while (((pcVar19 == (char *)0x0) ||
               (pcVar20 = strchr(pcVar19,0x3d),
               pcVar20 == (char *)0x0 || pcVar20 == pcVar19)) ||
              (uVar33 = (long)pcVar20 - (long)pcVar19, 0xf < uVar33));
      memcpy(&uStack_308,pcVar19,uVar33);
      *(undefined1 *)((long)&uStack_308 + uVar33) = 0;
      bVar6 = recovered_10003830((byte *)&uStack_308,(byte *)str_10008a7a);
    } while (!bVar6);
    pbVar31 = (byte *)(pcVar20 + 1);
  }
LAB_10000660:
  memset(&iStack_42e8,0,0x3fe0);
  uVar22 = recovered_10003890((long *)&pbStack_3f10,&uStack_3f00,0x40,0xffffffffffffffff);
  if ((((int)uVar22 != 0) &&
      (uVar22 = recovered_10003930((long)&iStack_42e8,0x80), (int)uVar22 != 0)) &&
     (uVar27 = recovered_10003998((long)&iStack_42e8), (uVar27 & 1) != 0)) {
    uVar10 = 400;
    if (DAT_10010108 != 0) {
      uVar10 = 0x2a8;
    }
    pcVar19 = str_1000952b;
    if (DAT_10010108 != 0) {
      pcVar19 = str_10008a51;
    }
    pf_app_window_spec(&uStack_308,pcVar19,0x2f8,uVar10);
    uStack_2f4 = terror_ui_colour(0);
    uStack_2c8 = uStack_2c8 | 1;
    uVar10 = terror_ui_window_open(&iStack_42e8,&uStack_308);
    if (uVar10 != 0) {
      pcVar19 = str_10008a82;
      if (DAT_10010108 != 1) {
        pcVar19 = str_10008aa0;
      }
      terror_ui_window_set_custom_menus(&iStack_42e8,pcVar19);
      if ((pvStack_3f60 != (void *)0x0) ||
         (pvStack_3f60 = pvStack_42b8, pvStack_42b8 != (void *)0x0)) {
        uStack_3f18 = DAT_100089c8;
        memset(&piStack_90,0,0x18);
        uVar22 = recovered_10003ba0(&DAT_10008ad8,0xffffffff,0,&piStack_90);
        if ((int)uVar22 != 0) {
          if (PF_PART4(uStack_88, 4) - 1U < 0x40) {
            uStack_3f18 = CONCAT44(PF_PART4(uStack_3f18, 4),PF_PART4(uStack_88, 4));
          }
          if (uStack_80 - 1 < 0x40) {
            uStack_3f18 = CONCAT44(uStack_80,(int)uStack_3f18);
          }
          recovered_10003c0c((long *)&piStack_90);
        }
        pcVar19 = str_1000952b;
        if (DAT_10010108 != 0) {
          pcVar19 = str_10008a51;
        }
        recovered_10003ab4((long)&iStack_42e8,(byte *)pcVar19);
        if (DAT_10010108 != 0) {
          snprintf(acStack_3e78,0x80,str_10008abb);
          iStack_3d28 = DAT_1001010c;
          bStack_9cc = 1;
        }
        uStack_3ebc = recovered_10003aec((long)&iStack_42e8);
        cStack_3eaf = '\x01';
        if (DAT_10010108 == 0) {
          uVar22 = recovered_10002058();
          cStack_3eae = (int)uVar22 != 0;
        }
        else {
          cStack_3eae = false;
        }
        uVar10 = uStack_3eb8 >> 0xc;
        if (pbVar31 != (byte *)0x0) {
          recovered_1000208c((long)&iStack_42e8,pbVar31);
        }
        uVar27 = DAT_100089d0;
        bVar6 = true;
        uVar10 = uVar10 & 1;
LAB_10000a20:
        if (cStack_3eaf == '\x01') {
          terror_ui_window_begin_frame(&iStack_42e8);
          uVar25 = uStack_42e0;
          uVar26 = uStack_42e4;
          memset(&uStack_308,0,0x278);
          uVar12 = terror_ui_window_query(&iStack_42e8,&uStack_308);
          if ((uVar12 != 0) && (uVar12 = terror_ui_window_sync_buffer(&iStack_42e8,&uStack_308), uVar12 != 0))
          {
            pvStack_3f60 = pvStack_42b8;
            if (uStack_42e4 != uVar26 || uStack_42e0 != uVar25) {
              bStack_3eb0 = 1;
            }
            uStack_3f38 = uStack_2dc;
            uStack_3f30 = uStack_2e0;
            if ((iStack_2d4 != 0) && (iStack_2d4 != iStack_3eb4)) {
              iStack_3eb4 = iStack_2d4;
              if ((iStack_2d0 == 2) && (iStack_2cc == 0)) {
                recovered_10004fec((long)&iStack_42e8);
              }
              else if (iStack_2d0 == 2 && iStack_2cc == 1) {
                recovered_100050fc((long)&iStack_42e8);
              }
            }
            if ((uStack_2e0 & 0x11) == 0) {
              uVar26 = (uint)bStack_3eb0;
              if (uVar26 == 1) {
                bStack_3eb0 = 0;
              }
              bVar7 = recovered_10002640((long)&iStack_42e8);
              uVar25 = 0;
              if (iStack_3ea8 != 0) {

                uVar25 = 0;
                if (__atomic_fetch_or(&iStack_3ea4,0,__ATOMIC_ACQ_REL) == 0) goto LAB_10001038;
                bVar8 = recovered_10004608((long)&iStack_42e8);
                if (DAT_10010108 == 0) {
                  if (*pcStack_3e88 == '\0') {
                    if (iStack_3ea0 == 0) {
                      recovered_10003ab4((long)&iStack_42e8,(byte *)str_10008b17);
                    }
                  }
                  else {
                    PF_PART4(uStack_308, 0) = (uint)pcStack_3e88;
                    PF_PART4(uStack_308, 4) = (uint)((ulong)pcStack_3e88 >> 0x20);
                    piStack_90 = (int *)0x0;
                    uVar22 = recovered_10003d98((long)&iStack_42e8,&uStack_308,(ulong *)&piStack_90)
                    ;
                    if ((int)uVar22 != 0) {
                      bVar24 = false;
                      pbVar23 = (byte *)CONCAT44(PF_PART4(uStack_308, 4),(uint)uStack_308);
                      pbVar31 = pbVar23;
                      pbVar5 = pbVar23;
                      do {
                        bVar3 = *pbVar5;
                        if (bVar3 == 10) {
                          uVar33 = recovered_10003c44((long)&iStack_42e8,pbVar23,
                                                      (long)pbVar31 - (long)pbVar23,1);
                          if ((uVar33 & 1) == 0) goto LAB_10000d4c;
                          bVar24 = false;
                          pbVar23 = pbVar5 + 1;
                        }
                        else if (bVar3 != 0xd) {
                          if (bVar3 == 0) goto LAB_10000d44;
                          bVar24 = true;
                        }
                        pbVar31 = pbVar31 + 1;
                        pbVar5 = pbVar5 + 1;
                      } while( true );
                    }
                  }
                }
                else {
                  if ((uint)uStack_9e8 != 0) {
                    if (DAT_1001010c == 0) {
                      if (iStack_9d4 == iStack_9d8) {
                        _DAT_10010108 = CONCAT44((uint)uStack_9e8,DAT_10010108);
                        iStack_3d28 = (uint)uStack_9e8;
                      }
                    }
                    else if ((iStack_b5c == 0) || (iStack_b54 != 0)) goto LAB_10000b60;
                    piVar34 = aiStack_3854;
                    for (uVar33 = (ulong)uStack_9f4; uVar33 != 0; uVar33 = uVar33 - 1) {
                      if (*piVar34 == 0) {
                        *piVar34 = (uint)uStack_9e8;
                      }
                      piVar34 = piVar34 + 0x5a;
                    }
                    piVar34 = piStack_648;
                    for (uVar33 = (ulong)uStack_534; uVar33 != 0; uVar33 = uVar33 - 1) {
                      if ((*piVar34 == 0) && (*(char *)((long)piVar34 + 0x15) == '\x01')) {
                        *piVar34 = (uint)uStack_9e8;
                      }
                      piVar34 = piVar34 + 0x43;
                    }
                  }
LAB_10000b60:
                  uStack_3d24 = uStack_3cdc;
                  memcpy(auStack_3d20,auStack_3ccc,0x40);
                  if ((uint)uStack_9e8 == DAT_1001010c) {
                    cStack_9c9 = cStack_3cdf;
                    if (cStack_9cb == '\x01') {
                      snprintf(acStack_3d50,0x28,&DAT_10008c9a,auStack_3d78);
                      memcpy(auStack_3974,auStack_3a7c,0x108);
                      memcpy(auStack_3864,acStack_386c,8);
                      memcpy(auStack_3b8c,auStack_3c8c,0x100);
                      uStack_3a88 = uStack_3a8c;
                      if (((iStack_b5c == 0) && (iStack_9d4 == iStack_9d8)) &&
                         (acStack_386c[uStack_3cd8] == '\0')) {
                        for (lVar35 = 0; lVar35 != 8; lVar35 = lVar35 + 1) {
                          if (acStack_386c[lVar35] != '\0') {
                            uStack_3cd8 = (uint)lVar35;
                            break;
                          }
                        }
                      }
                    }
                    if (acStack_9c8[0] == '\0') {
                      snprintf(acStack_3e78,0x80,&DAT_10008c9a,acStack_3df8);
                    }
                  }
                  iVar11 = iStack_9ec;
                  if (iStack_b5c == 0) {
LAB_10000eb4:
                    if ((cStack_3cdf != '\x01') || (cStack_3ce0 == '\x01')) {
LAB_10000ecc:
                      iStack_9d0 = uStack_3eb8 + 0x3c;
                    }
                  }
                  else {
                    if (iStack_9ec == 2) goto LAB_10000ecc;
                    piVar34 = piStack_648 + 6;
                    for (uVar33 = (ulong)uStack_534; uVar33 != 0; uVar33 = uVar33 - 1) {
                      if (*piVar34 == iStack_b58) {
                        *(undefined1 *)((long)piVar34 + -3) = 0;
                        *(bool *)((long)piVar34 + -2) = iStack_9ec != 1;
                      }
                      piVar34 = piVar34 + 0x43;
                    }
                    iVar13 = 1;
                    dst = auStack_385c;
                    for (uVar33 = (ulong)uStack_9f4; uVar33 != 0; uVar33 = uVar33 - 1) {
                      if (*(int *)(dst + 4) == iStack_b58) {
                        memset(dst,0,0x168);
                        uVar25 = uStack_9f4 - iVar13;
                        uStack_9f4 = uStack_9f4 - 1;
                        memmove(dst,dst + 0x168,(ulong)uVar25 * 0x168);
                        memset(auStack_385c + (ulong)uStack_9f4 * 0x168,0,0x168);
                        break;
                      }
                      iVar13 = iVar13 + 1;
                      dst = dst + 0x168;
                    }
                    if (iVar11 == 1) {
                      if (iStack_b5c != 2) goto LAB_10000eb0;
                      bStack_9cc = 1;
                    }
                    else {
                      pcVar19 = str_10008d31;
                      if (acStack_3df8[0] != '\0') {
                        pcVar19 = acStack_3df8;
                      }
                      snprintf(acStack_9c8,0x80,str_10008d21,(uint)uStack_9e8,pcVar19);
                      snprintf(acStack_3e78,0x80,&DAT_10008c9a,acStack_9c8);
LAB_10000eb0:
                      if (iStack_b5c == 0) goto LAB_10000eb4;
                    }
                  }
                  memset(&iStack_b5c,0,0x168);
                  if (cStack_52c == '\x01') {
                    lVar35 = 0;
                    for (uVar33 = 0; piVar34 = piStack_648, uVar33 < uStack_534; uVar33 = uVar33 + 1
                        ) {
                      if (*(int *)((long)piStack_648 + lVar35) == iStack_640) {
                        if (((iStack_634 != 0) &&
                            (*(int *)((long)piStack_648 + lVar35 + 0xc) == iStack_634)) &&
                           (*(int *)((long)piStack_648 + lVar35 + 4) == iStack_63c))
                        goto LAB_1000100c;
                        if (((((*(char *)((long)piStack_648 + lVar35 + 0x14) == '\x01') &&
                              (*(int *)((long)piStack_648 + lVar35 + 0xc) == 0)) &&
                             ((*(byte *)((long)piStack_648 + lVar35 + 0x15) & 1) == 0)) &&
                            (((*(byte *)((long)piStack_648 + lVar35 + 0x16) & 1) == 0 &&
                             (cStack_62c == '\x01')))) &&
                           ((*(int *)((long)piStack_648 + lVar35 + 8) == iStack_638 &&
                            ((*(int *)((long)piStack_648 + lVar35 + 0x10) == iStack_630 &&
                             (iVar11 = strcmp((char *)((long)piStack_648 + lVar35 + 0x1c
                                                                  ),acStack_624), iVar11 == 0))))))
                        {
                          *(int *)((long)piVar34 + lVar35 + 0xc) = iStack_634;
                          goto LAB_1000100c;
                        }
                      }
                      lVar35 = lVar35 + 0x10c;
                    }
                    uVar33 = recovered_10004d4c((long)&iStack_42e8);
                    if ((uVar33 & 1) == 0) {
                      snprintf(acStack_3e78,0x80,str_10008d63);
                    }
                    else {
                      uVar33 = (ulong)uStack_534;
                      uStack_534 = uStack_534 + 1;
                      memcpy(piStack_648 + uVar33 * 0x43,&iStack_640,0x10c);
                    }
                  }
                }
                goto LAB_1000100c;
              }
              goto LAB_10001038;
            }
          }
        }
        if (cStack_3eae == '\x01') {
          recovered_10005b4c();
        }
        while ((iStack_3ea8 != 0 && (iStack_3ea4 == 0))) {
          recovered_10002640((long)&iStack_42e8);
          recovered_10003800();
        }
        terror_ui_scrollbar_release(auStack_3f90);
        if (iStack_42e8 != 0) {
          terror_ui_window_close(&iStack_42e8);
        }
        if (lStack_3f58 != 0) {
          recovered_10003a74(lStack_3f58);
        }
        recovered_10003a74(lStack_3ef0);
        recovered_10003a74(lStack_3f50);
        recovered_10003a2c((long)&iStack_42e8);
        if (piStack_648 != (int *)0x0) {
          recovered_10003a74(piStack_648);
        }
        return 1;
      }
      terror_ui_window_close(&iStack_42e8);
    }
  }
  recovered_10003a2c((long)&iStack_42e8);
  recovered_10003a74(lStack_3f58);
  recovered_10003a74(lStack_3f50);
  lStack_3f58 = 0;
  bVar6 = recovered_10003b58(0x28);
  uVar10 = (uint)bVar6;
  if (bVar6) {
    uVar10 = UINT_82010828;
    if (uVar10 != 0) {
      (*(code *)(ulong)uVar10)(str_10008a21);
    }
LAB_1000202c:
    uVar10 = 0;
  }
  return uVar10;
LAB_10000d44:
  if (bVar24) {
    recovered_10003c44((long)&iStack_42e8,pbVar23,(long)pbVar31 - (long)pbVar23,1);
  }
LAB_10000d4c:
  recovered_10003a74(piStack_90);
LAB_1000100c:
  *pcStack_3e88 = '\0';
  *puStack_3e98 = 0;
  iStack_3e9c = 0;
  iStack_3ea4 = 0;
  iStack_3ea8 = 0;
  if (bVar8) {
    uStack_3ebc = recovered_10003aec((long)&iStack_42e8);
  }
  uVar25 = 1;
LAB_10001038:
  uVar26 = bVar7 | uVar25 | uVar26;
  if (DAT_10010108 == 0) {
    uVar33 = recovered_10002704(str_10008a41);
    if ((int)uVar33 != 0) {
      uVar26 = 1;
    }
    if (DAT_10010108 != 0) goto LAB_1000106c;
  }
  else {
LAB_1000106c:
    if (iStack_3ea8 == 0) {
      memset(&iStack_b5c,0,0x168);
      iVar11 = iStack_9d0;
      uVar25 = uStack_3eb8;
      piVar34 = aiStack_4ac;
      if (cStack_4b0 == '\0') {
        piVar34 = &DAT_1001010c;
      }
      uStack_9e8 = CONCAT44(uStack_3cd8,*piVar34);
      uStack_9e0 = uStack_4b8;
      iStack_9d4 = iStack_9d8;
      uStack_9dc = uStack_3eb8;
      bStack_9ca = true;
      if (((bStack_9cc & 1) == 0) && (*piVar34 != 0)) {
        bStack_9ca = uStack_3eb8 % 0x3c == 0;
      }
      iStack_9ec = 0;
      if (cStack_4b0 == '\0') {
        uVar33 = 0;
      }
      else {
        uVar33 = 0;
        pcVar19 = acStack_3847;
        while ((uVar33 < uStack_9f4 &&
               ((*(int *)(pcVar19 + -0x15) != 1 ||
                (iVar13 = strcmp(pcVar19,str_10008d83), iVar13 != 0))))) {
          uVar33 = uVar33 + 1;
          pcVar19 = pcVar19 + 0x168;
        }
        uVar33 = uVar33 & 0xffffffff;
      }
      uVar28 = (ulong)uStack_9f4;
      if (uVar33 < uVar28) {
        iVar13 = strcmp(acStack_3847 + uVar33 * 0x168,str_10008d83);
        bVar8 = iVar13 == 0;
        uVar28 = (ulong)uStack_9f4;
      }
      else {
        bVar8 = false;
      }
      if ((uVar28 <= uVar33) || (!(bool)(-1 < (int)(uVar25 - iVar11) | bVar8))) {
        if ((int)(uVar25 - iVar11) < 0) goto LAB_10001290;
        if ((bStack_9cc & 1) == 0) {

          if (__atomic_fetch_or(&iStack_310,0,__ATOMIC_ACQ_REL) != 0) {
            bStack_3cdd = uStack_3eb8 % 0x3c == 0;
            if (uStack_3eb8 % 0x3c == 0) {
              uStack_30c = 0;
            }
            else {
              if ((uStack_3eb8 & 3) != 0) goto LAB_10001290;
              uStack_30c = 1;
            }
            goto LAB_10001240;
          }
        }
        uStack_30c = 0;
        bStack_3cdd = true;
      }
      else {
        memcpy(&iStack_b5c,auStack_385c + uVar33 * 0x168,0x168);
        uStack_30c = 0;
        uStack_9e8 = CONCAT44(uStack_b50,iStack_b54);
        uStack_9e0 = uStack_b4c;
        bStack_9ca = bStack_9ca | iStack_b54 == 0;
        bStack_3cdd = false;
      }
LAB_10001240:
      bStack_9cc = 0;
      iStack_3ea4 = 0;
      iStack_3ea8 = 1;
      pcVar19 = str_1000952b;
      if (DAT_10010108 != 0) {
        pcVar19 = str_10008a51;
      }
      uVar22 = recovered_100027a8(&iStack_42e8,pcVar19);
      iStack_3e9c = (int)uVar22;
      if (iStack_3e9c == 0) {
        iStack_3ea8 = 0;
        iStack_9d0 = uStack_3eb8 + 0x3c;
      }
    }
  }
LAB_10001290:
  uVar12 = uStack_3f24;
  uVar25 = uStack_3f30;
  iVar13 = PF_PART4(uStack_3f2c, 4);
  iVar11 = (uint)uStack_3f2c;
  bStack_3f94 = 0;
  memset(&uStack_308,0,0x30);
  uVar14 = terror_ui_window_pointer_state_ex(&iStack_42e8,&uStack_308);
  iVar30 = iStack_2f0;
  uVar18 = uStack_2f4;
  uVar15 = PF_PART4(uStack_308, 4);
  uVar16 = (uint)uStack_308;
  if (uVar14 != 0) {
    if ((bStack_3f20 & 1) == 0) {
      bStack_3f20 = 1;
      iVar17 = 0x17c;
      if (uStack_42e4 != 0) {
        iVar17 = (int)uStack_42e4 / 2;
      }
      iVar29 = 200;
      if (uStack_42e0 != 0) {
        iVar29 = (int)uStack_42e0 / 2;
      }
      uStack_3f2c = CONCAT44(iVar29,iVar17);
    }
    uVar22 = CONCAT44(iStack_2f0,uStack_2f4);
    if (((uint)uStack_308 >> 1 & 1) == 0) {
      bStack_3f94 = false;
    }
    else {
      auVar37 = recovered_10005a3c((long)&iStack_42e8);
      auVar36 = recovered_100059f8((long)&iStack_42e8);
      bStack_3f94 = recovered_100052a4(uVar18,iVar30,PF_PART8(auVar36, 0),
                                       PF_PART8(auVar36, 8) & 0xffffffff |
                                       (ulong)(uint)((PF_PART4(auVar37, 4) + PF_PART4(auVar37, 12)) -
                                                    PF_PART4(auVar36, 4)) << 0x20);
    }
    if ((uVar16 >> 2 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar33 = CONCAT44(uStack_42e0 - 1,uStack_42e4 - 1);
      uStack_3f2c = NEON_smin(uVar22,uVar33 ^ (uVar33 ^ uVar27) &
                                              CONCAT44(-(uint)(uStack_42e0 == 0),
                                                       -(uint)(uStack_42e4 == 0)),4);
      uStack_3f2c = CONCAT44(-(uint)(-1 < iVar30),-(uint)(-1 < (int)uVar18)) & uStack_3f2c;
    }
    uStack_3f24 = uVar15;
  }
  uVar25 = uVar25 & 6;
  if (DAT_10010108 == 0) {
    if ((uVar25 == 2) && (uVar33 = recovered_10002704(str_10008a41), (int)uVar33 == 0))
    goto LAB_100013e8;
  }
  else {
    uVar26 = ((iVar11 != (uint)uStack_3f2c || iVar13 != PF_PART4(uStack_3f2c, 4)) || uVar12 != uStack_3f24)
             | uVar26;
    if (uVar25 == 2) {
LAB_100013e8:
      iVar11 = 0;
      uVar12 = 0;
LAB_100013f0:
      do {
        uVar16 = uVar12;
        if ((iVar11 == 0x18) || (bVar8 = recovered_10003b58(0x2c), !bVar8)) {
LAB_100016ac:
          uVar26 = uVar16 | uVar26;
          goto LAB_100016cc;
        }
        uVar12 = UINT_8201082c;
        if ((uVar12 == 0) || (uVar15 = (*(code *)(ulong)uVar12)(), uVar15 == 0)) goto LAB_100016ac;
        iVar11 = iVar11 + 1;
        uVar18 = uVar15 >> 8 & 0xff;
        uVar12 = uVar16;
      } while ((uVar15 & 0x800000ff) == 0x80000000 && uVar18 == 0);
      uVar14 = uVar15 & 0xff;
      if ((uVar15 >> 0x12 & 1) != 0) {
        if ((((uVar15 & 0xbf) == 3) || (uVar14 == 99)) || (uVar18 == 0x2e)) {
          uVar33 = recovered_10004fec((long)&iStack_42e8);
          uVar12 = (uint)uVar33 | uVar16;
        }
        else if ((((uVar15 & 0xbf) == 0x16) || (uVar14 == 0x76)) || (uVar18 == 0x2f)) {
          if ((DAT_10010108 == 0) || (iStack_528 == 0)) {
            bVar8 = recovered_100050fc((long)&iStack_42e8);
            uVar12 = 1;
            if (bVar8) goto LAB_100013f0;
          }
          else {
            uVar22 = recovered_100053c8((undefined1 *)&uStack_308,0x42);
            uVar33 = 0;
            uVar15 = (uint)uVar22;
            uVar12 = uVar15;
            if (0x41 < uVar15) {
              uVar12 = 0x42;
            }
            for (; (uVar12 != uVar33 && (bVar7 = *(byte *)((long)&uStack_308 + uVar33), bVar7 != 0))
                ; uVar33 = uVar33 + 1) {
              if (0x1f < bVar7) {
                recovered_10005a58((long)&iStack_42e8,(uint)bVar7,0);
              }
            }
            uVar12 = 1;
            if (uVar15 != 0) goto LAB_100013f0;
          }
          uVar12 = uVar16;
        }
        goto LAB_100013f0;
      }
      if (DAT_10010108 != 0) {
        bVar8 = recovered_10005a58((long)&iStack_42e8,uVar14,uVar18);
        uVar12 = 1;
        if (bVar8) goto LAB_100013f0;
      }
      if ((uVar15 >> 0x11 & 1) != 0) {
        uVar12 = uVar16;
        if (((cStack_3eae == '\x01') && (iStack_3ea8 != 0)) &&
           (((uVar15 & 0xbf) == 3 || ((uVar14 == 99 || (uVar18 == 0x2e)))))) {
          recovered_10005b4c();
          recovered_100047e0((long)&iStack_42e8,&DAT_10009532);
LAB_100015d4:
          if (pbStack_3f10 != (byte *)0x0) {
            *pbStack_3f10 = 0;
          }
          uStack_3f08 = 0;
          uVar12 = 1;
        }
        goto LAB_100013f0;
      }
      if (uVar14 - 0x20 < 0x5f) {
        uVar12 = uVar16;
        if (uStack_3f08 < 0xfffffffffffffffe) {
          uVar22 = recovered_10003890((long *)&pbStack_3f10,&uStack_3f00,uStack_3f08 + 2,
                                      0xffffffffffffffff);
          if ((int)uVar22 != 0) {
            pbStack_3f10[uStack_3f08] = (byte)uVar15;
            pbStack_3f10[uStack_3f08 + 1] = 0;
            uVar12 = 1;
            uStack_3f08 = uStack_3f08 + 1;
          }
        }
        goto LAB_100013f0;
      }
      if ((uVar18 == 0xe) || (uVar15 = uVar15 & 0xff, uVar15 == 0x7f || uVar15 == 8)) {
        uVar12 = 1;
        if (uStack_3f08 != 0) {
          do {
            uStack_3f08 = uStack_3f08 - 1;
            if (uStack_3f08 == 0) break;
          } while ((pbStack_3f10[uStack_3f08] & 0xc0) == 0x80);
          pbStack_3f10[uStack_3f08] = 0;
          uVar12 = 1;
        }
        goto LAB_100013f0;
      }
      if ((uVar18 == 0x1c || uVar15 == 0xd) || uVar15 == 10) {
        bVar8 = recovered_1000208c((long)&iStack_42e8,pbStack_3f10);
        uVar12 = 1;
        if (bVar8) goto LAB_100015d4;
        goto LAB_100013f0;
      }
      uVar12 = uVar16;
      if (uVar14 != 0x1b && uVar18 != 1) goto LAB_100013f0;
      cStack_3eaf = '\0';
      uVar26 = 1;
    }
  }
LAB_100016cc:
  uVar16 = uStack_3f24;
  iVar11 = PF_PART4(uStack_3f2c, 4);
  uVar12 = (uint)uStack_3f2c;
  if ((uStack_3f24 & 1) == 0) {
    bStack_3f1e = 0;
  }
  else {
    if ((bStack_3f1f & 1) == 0) {
      if (DAT_10010108 != 0) {
        memset(&uStack_308,0,0x2c);
        PF_PART4(uStack_308, 0) = 1;
        PF_PART4(uStack_308, 4) = uVar12;
        iStack_300 = iVar11;
        uStack_2fc = 0x100000001;
        piStack_90 = &iStack_42e8;
        uStack_88 = &uStack_308;
        uStack_80 = uStack_80 & 0xffffff00;
        recovered_10005e38((long *)&piStack_90);
        uVar26 = uStack_80 & 0xff | uVar26;
        if (DAT_10010108 != 0) goto LAB_10001798;
      }
      auVar38 = recovered_100059f8((long)&iStack_42e8);
      auVar37 = recovered_10007b50((long)&iStack_42e8);
      uVar15 = uStack_3ebc;
      auVar36 = recovered_10007c04((long)&iStack_42e8);
      bVar8 = recovered_100052a4(uVar12,iVar11,PF_PART8(auVar36, 0),PF_PART8(auVar36, 8));
      if (bVar8) {
        iVar13 = 1;
LAB_10001778:
        recovered_10007c20((long)&iStack_42e8,iVar13);
      }
      else {
        auVar36 = recovered_10005a3c((long)&iStack_42e8);
        bVar8 = recovered_100052a4(uVar12,iVar11,PF_PART8(auVar36, 0),PF_PART8(auVar36, 8));
        if (bVar8) {
          iVar13 = 0;
          goto LAB_10001778;
        }
        bVar8 = recovered_100052a4(uVar12,iVar11,PF_PART8(auVar38, 0),PF_PART8(auVar38, 8));
        if (!bVar8) goto LAB_10001798;
        bVar8 = recovered_100052a4(uVar12,iVar11,PF_PART8(auVar37, 0),PF_PART8(auVar37, 8));
        if (!bVar8) {
          auVar37 = recovered_100059f8((long)&iStack_42e8);
          auVar36 = recovered_10007b50((long)&iStack_42e8);
          uVar12 = recovered_10003aec((long)&iStack_42e8);
          uVar18 = PF_PART4(auVar37, 12) - PF_PART4(auVar36, 12);
          if (((int)uVar12 >= 1 && uVar18 != 0) && ((int)uVar12 < 1 || -1 < (int)uVar18)) {
            lVar35 = 0;
            if ((ulong)uVar18 != 0) {
              lVar35 = (long)((long)((iVar11 - PF_PART4(auVar37, 4)) + PF_PART4(auVar36, 12) / -2) * (ulong)uVar12
                             ) / (long)(ulong)uVar18;
            }
            if (lVar35 <= (long)(ulong)uVar12) {
              uVar12 = (uint)lVar35;
            }
            uStack_3ebc = 0;
            if (-1 < lVar35) {
              uStack_3ebc = uVar12;
            }
            recovered_1000357c((long)&iStack_42e8);
          }
          else {
            uStack_3ebc = 0;
          }
        }
        auVar37 = recovered_10007b50((long)&iStack_42e8);
        bStack_3f1e = 1;
        iStack_3f1c = iVar11 - PF_PART4(auVar37, 4);
      }
      uVar26 = uStack_3ebc != uVar15 | uVar26;
    }
LAB_10001798:
    if (bStack_3f1e == 1) {
      auVar37 = recovered_100059f8((long)&iStack_42e8);
      auVar36 = recovered_10007b50((long)&iStack_42e8);
      uVar12 = recovered_10003aec((long)&iStack_42e8);
      uVar18 = uStack_3ebc;
      uVar15 = PF_PART4(auVar37, 12) - PF_PART4(auVar36, 12);
      if ((bStack_3f1e == 1 && 0 < (int)uVar12) && 0 < (int)uVar15) {
        lVar35 = 0;
        if ((ulong)uVar15 != 0) {
          lVar35 = (long)((long)(iVar11 - (iStack_3f1c + PF_PART4(auVar37, 4))) * (ulong)uVar12) /
                   (long)(ulong)uVar15;
        }
        if (lVar35 <= (long)(ulong)uVar12) {
          uVar12 = (uint)lVar35;
        }
        uStack_3ebc = 0;
        if (-1 < lVar35) {
          uStack_3ebc = uVar12;
        }
        recovered_1000357c((long)&iStack_42e8);
        uVar26 = uStack_3ebc != uVar18 | uVar26;
      }
    }
  }
  uVar15 = uStack_3ebc;
  bStack_3f1f = (byte)uVar16 & 1;
  recovered_1000357c((long)&iStack_42e8);
  uVar16 = uStack_3f98;
  uVar12 = uStack_3eb8 >> 0xc & 1;
  if (uVar25 != 2) {
    uVar12 = 1;
  }
  bVar8 = uVar12 != uVar10 || uStack_3ebc != uVar15;
  if (((bStack_3f94 & 1) == 0) && ((bStack_3f1e & 1) == 0)) {
    if (uStack_3f98 == 0) {
      uVar10 = 0;
      goto LAB_10001888;
    }
    iVar11 = -1;
  }
  else {
    uVar10 = uStack_3f98;
    if (0x1f < uStack_3f98) goto LAB_10001888;
    iVar11 = 1;
  }
  uStack_3f98 = iVar11 + uStack_3f98;
  uVar10 = uStack_3f98;
LAB_10001888:
  iVar11 = recovered_10007c38(uVar16);
  iVar13 = recovered_10007c38(uVar10);
  if ((bVar6 || (bVar8 || (uVar26 & 1) != 0)) || (iVar11 != iVar13)) {
    if ((bVar6 || (bVar8 || (uVar26 & 1) != 0)) ||
       (uVar9 = terror_ui_scrollbar_restore(auStack_3f90,&iStack_42e8), uVar9 == '\0')) {
      if (DAT_10010108 == 0) {
        uVar10 = 0x2f8;
        if (uStack_42e4 != 0) {
          uVar10 = uStack_42e4;
        }
        uVar16 = 400;
        if (uStack_42e0 != 0) {
          uVar16 = uStack_42e0;
        }
        uVar15 = recovered_100080e8();
        recovered_10007f7c((long)&iStack_42e8,0,CONCAT44(uVar16,uVar10),uVar15 & 0xffffff);
        auVar37 = recovered_1000419c((long)&iStack_42e8);
        uVar10 = recovered_100080f0(1);
        uVar16 = recovered_10004160((long)&iStack_42e8);
        iVar11 = recovered_10003f20((long)&iStack_42e8);
        PF_PART4(uStack_308, 0) = 0;
        uVar33 = recovered_100052d0((long)&iStack_42e8,(long)(int)uStack_3ebc,
                                    (undefined4 *)&uStack_308);
        uVar15 = recovered_100080e8();
        recovered_10007f7c((long)&iStack_42e8,PF_PART8(auVar37, 0),PF_PART8(auVar37, 8),uVar15 & 0xffffff);
        uVar15 = recovered_100080f0(3);
        recovered_10007d7c((long)&iStack_42e8,PF_PART8(auVar37, 0),PF_PART8(auVar37, 8),uVar15 & 0xffffff);
        iVar13 = (int)uVar33;
        if (-1 < iVar13) {
          iVar30 = 0;
          uVar33 = uVar33 & 0xffffffff;
          piVar34 = &iStack_b54;
          for (uVar28 = uVar33; iVar17 = (int)uVar28, iVar17 < iStack_3ef4 && iVar30 < iVar11;
              uVar28 = uVar28 + 1) {
            if (iVar17 < 0) {
              pcVar19 = &DAT_10008ada;
            }
            else {
              pcVar19 = &DAT_10008ada;
              if (lStack_3f58 != 0) {
                pcVar19 = (char *)(lStack_3f50 +
                                  *(long *)(lStack_3f58 + (uVar28 & 0x7fffffff) * 0x10));
              }
            }
            size = *(ulong *)(lStack_3f58 + uVar28 * 0x10 + 8);
            if ((uStack_3edc == uVar16 && iStack_3ee0 != iVar17) &&
                (uStack_3edc != uVar16 || iVar17 <= iStack_3ee0)) {
              plVar1 = (long *)(lStack_3ef0 + uVar28 * 8);
              uVar32 = plVar1[1] - *plVar1;
              if (0x7ffffffe < uVar32) {
                uVar32 = 0x7fffffff;
              }
              iVar17 = (int)uVar32;
            }
            else {
              iVar17 = recovered_10004080((long)&iStack_42e8,pcVar19,size);
            }
            uVar15 = (uint)uStack_308;
            uVar18 = (uint)uStack_308 - iVar17;
            if ((int)(uint)uStack_308 < iVar17) {
              if (((uVar28 == uVar33 && iStack_3ed8 == iVar13) && uStack_3ed4 == (uint)uStack_308)
                  && uStack_3ed0 == uVar16) {
                uVar32 = uStack_3ec8;
              }
              else {
                uVar32 = 0;
                for (iVar29 = 0; iVar29 < (int)uVar15 && uVar32 < size; iVar29 = iVar29 + 1) {
                  uVar21 = recovered_10004368((long)pcVar19,size,uVar32,(ulong)uVar16);
                  uVar32 = recovered_1000441c(pcVar19,size,uVar32,(int)uVar21);
                }
                if (uVar28 == uVar33) {
                  uStack_3ed4 = uVar15;
                  iStack_3ed8 = iVar13;
                  uStack_3ed0 = uVar16;
                  uStack_3ec8 = uVar32;
                }
              }
              for (; (int)uVar15 < iVar17 && iVar30 < iVar11; uVar15 = uVar15 + 1) {
                uVar21 = recovered_10004368((long)pcVar19,size,uVar32,(ulong)uVar16);
                iVar29 = PF_PART4(uStack_3f18, 4) + 2;
                if (((int32_t)PF_PART4(uStack_3f18, 4)) < 1) {
                  iVar29 = 0xc;
                }
                iVar4 = PF_PART4(auVar37, 4) + 2 + iVar29 * iVar30;
                iVar29 = PF_PART4(uStack_3f18, 4);
                if (((int32_t)PF_PART4(uStack_3f18, 4)) < 1) {
                  iVar29 = 10;
                }
                if (PF_PART4(auVar37, 4) + PF_PART4(auVar37, 12) < iVar4 + iVar29) goto LAB_10001c2c;
                uVar14 = (uint)uVar21;
                uVar18 = uVar14;
                if ((int)uVar14 < 1) {
                  uVar18 = uVar16;
                }
                piVar34 = (int *)((ulong)piVar34 & 0xffffffffff000000 | (ulong)uVar10 & 0xffffff);
                recovered_10008114((long)&iStack_42e8,PF_PART4(auVar37, 0) + 4,iVar4,
                                   (long)(pcVar19 + uVar32),(ulong)uVar18,(uint)piVar34);
                if (0 < (int)uVar14) {
                  uVar32 = recovered_1000441c(pcVar19,size,uVar32,uVar14);
                }
                iVar30 = iVar30 + 1;
              }
              uVar18 = 0;
            }
            PF_PART4(uStack_308, 0) = uVar18;
          }
        }
LAB_10001c2c:
        recovered_100035ac((long)&iStack_42e8);
        auVar37 = recovered_10007a70((long)&iStack_42e8);
        iVar11 = PF_PART4(uStack_3f18, 4);
        if (((int32_t)PF_PART4(uStack_3f18, 4)) < 1) {
          iVar11 = 10;
        }
        iVar11 = (PF_PART4(auVar37, 12) - iVar11) / 2 + PF_PART4(auVar37, 4);
        uVar10 = recovered_100080f0(2);
        recovered_10007f7c((long)&iStack_42e8,PF_PART8(auVar37, 0),PF_PART8(auVar37, 8),uVar10 & 0xffffff);
        uVar10 = recovered_100080f0(3);
        recovered_10007d7c((long)&iStack_42e8,PF_PART8(auVar37, 0),PF_PART8(auVar37, 8),uVar10 & 0xffffff);
        iVar13 = (int)uStack_3f18;
        if ((int)uStack_3f18 < 1) {
          iVar13 = 6;
        }
        uVar10 = 0;
        if (iVar13 != 0) {
          uVar10 = (PF_PART4(auVar37, 8) + -10) / iVar13;
        }
        uVar33 = (long)(int)uVar10 - 0x10;
        if (0xff < uVar33) {
          uVar33 = 0x100;
        }
        if ((int)uVar10 < 0x11) {
          uVar33 = 1;
        }
        uVar28 = 0;
        if (uVar33 <= uStack_3f08) {
          uVar28 = uStack_3f08 - uVar33;
        }
        for (; uVar33 = uStack_3f08, uVar28 < uStack_3f08; uVar28 = uVar28 + 1) {
          if ((pbStack_3f10[uVar28] & 0xc0) != 0x80) {
            uVar33 = uVar28;
            break;
          }
        }
        recovered_10004660((long)&uStack_308,0x180,(long)(pbStack_3f10 + uVar33));
        uVar16 = PF_PART4(auVar37, 0) + 4;
        uVar15 = recovered_100080f0(1);
        recovered_10008114((long)&iStack_42e8,uVar16,iVar11,(long)&uStack_308,(ulong)uVar10,
                           uVar15 & 0xffffff);
        if (((uStack_3f30 & 6) == 2) && ((PF_PART1(uStack_3eb8, 1) >> 4 & 1) == 0)) {
          uVar33 = strlen((char *)&uStack_308);
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          uVar18 = (uint)uVar33;
          uVar15 = uVar18;
          if ((int)uVar10 <= (int)uVar18) {
            uVar15 = uVar10;
          }
          uVar10 = 0;
          if (-1 < (int)uVar18) {
            uVar10 = uVar15;
          }
          iVar13 = (int)uStack_3f18;
          if ((int)uStack_3f18 < 1) {
            iVar13 = 6;
          }
          iVar30 = PF_PART4(uStack_3f18, 4);
          if (((int32_t)PF_PART4(uStack_3f18, 4)) < 1) {
            iVar30 = 10;
          }
          uVar15 = (int)uStack_3f18 - 1;
          if (uVar15 == 0 || (int)uStack_3f18 < 1) {
            uVar15 = 5;
          }
          uVar18 = recovered_100080f0(4);
          recovered_10007c78((long)&iStack_42e8,
                             CONCAT44(iVar11 + iVar30 + -1,uVar16 + uVar10 * iVar13),
                             (ulong)uVar15 | 0x200000000,uVar18 & 0xffffff);
        }
      }
      else {
        memset(&uStack_308,0,0x2c);
        if ((uStack_3f30 & 6) == 2) {
          PF_PART4(uStack_308, 0) = 1;
          PF_PART4(uStack_308, 4) = (uint)uStack_3f2c;
          iStack_300 = (int)(uStack_3f2c >> 0x20);
          uStack_2fc = CONCAT44(PF_PART4(uStack_2fc, 4),uStack_3f24);
        }
        piStack_90 = &iStack_42e8;
        uStack_88 = &uStack_308;
        uStack_80 = uStack_80 & 0xffffff00;
        recovered_10005e38((long *)&piStack_90);
      }
      pixels = pvStack_3f60;
      uVar15 = uStack_42dc;
      uVar16 = uStack_42e0;
      uVar10 = uStack_42e4;
      pcVar19 = str_1000952b;
      if (DAT_10010108 != 0) {
        pcVar19 = str_10008a51;
      }
      uVar18 = terror_ui_colour(0);
      terror_ui_window_present(&iStack_42e8,pcVar19,pixels,uVar10,uVar16,uVar15,uVar18);
    }
    else {
      uStack_3f93 = 1;
      recovered_100035ac((long)&iStack_42e8);
      uStack_3f93 = 0;
      pf_app_terror_ui_window_present_rect(&iStack_42e8,uStack_3f80,uStack_3f78);
    }
  }
  uStack_3eb8 = uStack_3eb8 + 1;
  uVar10 = uVar12;
  if (uStack_3f98 - 1 < 0x1f) {
    uVar26 = 2;
  }
  else {
    if (bVar8 || (uVar26 & 1) != 0) {
      recovered_10003800();
      bVar6 = false;
      goto LAB_10000a20;
    }
    uVar26 = 6;
    if (uVar25 != 2) {
      uVar26 = 0x18;
    }
  }
  terror_ui_yield_frames(uVar26);
  bVar6 = false;
  goto LAB_10000a20;
}

#undef DAT_100089c8
#undef DAT_100089d0
#undef DAT_10008ad8
#undef DAT_10008ada
#undef DAT_10008c9a
#undef DAT_10009532
#undef DAT_10010108
#undef DAT_1001010c
#undef UINT_8201082c
#undef _DAT_10010108
#undef str_10008a21
#undef str_10008a41
#undef str_10008a51
#undef str_10008a58
#undef str_10008a68
#undef str_10008a73
#undef str_10008a7a
#undef str_10008a82
#undef str_10008aa0
#undef str_10008abb
#undef str_10008b17
#undef str_10008d21
#undef str_10008d31
#undef str_10008d63
#undef str_10008d83
#undef str_1000952b
#undef iStack_42e8
#undef uStack_42e4
#undef uStack_42e0
#undef uStack_42dc
#undef pvStack_42b8
#undef uStack_3f98
#undef bStack_3f94
#undef uStack_3f93
#undef auStack_3f90
#undef uStack_3f80
#undef uStack_3f78
#undef pvStack_3f60
#undef lStack_3f58
#undef lStack_3f50
#undef uStack_3f38
#undef uStack_3f30
#undef uStack_3f2c
#undef uStack_3f24
#undef bStack_3f20
#undef bStack_3f1f
#undef bStack_3f1e
#undef iStack_3f1c
#undef uStack_3f18
#undef pbStack_3f10
#undef uStack_3f08
#undef uStack_3f00
#undef iStack_3ef4
#undef lStack_3ef0
#undef iStack_3ee0
#undef uStack_3edc
#undef iStack_3ed8
#undef uStack_3ed4
#undef uStack_3ed0
#undef uStack_3ec8
#undef uStack_3ebc
#undef uStack_3eb8
#undef iStack_3eb4
#undef bStack_3eb0
#undef cStack_3eaf
#undef cStack_3eae
#undef iStack_3ea8
#undef iStack_3ea4
#undef iStack_3ea0
#undef iStack_3e9c
#undef puStack_3e98
#undef pcStack_3e88
#undef acStack_3e78
#undef acStack_3df8
#undef auStack_3d78
#undef acStack_3d50
#undef iStack_3d28
#undef uStack_3d24
#undef auStack_3d20
#undef cStack_3ce0
#undef cStack_3cdf
#undef bStack_3cdd
#undef uStack_3cdc
#undef uStack_3cd8
#undef auStack_3ccc
#undef auStack_3c8c
#undef auStack_3b8c
#undef uStack_3a8c
#undef uStack_3a88
#undef auStack_3a7c
#undef auStack_3974
#undef acStack_386c
#undef auStack_3864
#undef auStack_385c
#undef aiStack_3854
#undef acStack_3847
#undef iStack_b5c
#undef iStack_b58
#undef iStack_b54
#undef uStack_b50
#undef uStack_b4c
#undef uStack_9f4
#undef iStack_9ec
#undef uStack_9e8
#undef uStack_9e0
#undef uStack_9dc
#undef iStack_9d8
#undef iStack_9d4
#undef iStack_9d0
#undef bStack_9cc
#undef cStack_9cb
#undef bStack_9ca
#undef cStack_9c9
#undef acStack_9c8
#undef piStack_648
#undef iStack_640
#undef iStack_63c
#undef iStack_638
#undef iStack_634
#undef iStack_630
#undef cStack_62c
#undef acStack_624
#undef uStack_534
#undef cStack_52c
#undef iStack_528
#undef uStack_4b8
#undef cStack_4b0
#undef aiStack_4ac
#undef iStack_310
#undef uStack_30c
#undef uStack_308
#undef iStack_300
#undef uStack_2fc
#undef uStack_2f4
#undef iStack_2f0
#undef uStack_2e0
#undef uStack_2dc
#undef iStack_2d4
#undef iStack_2d0
#undef iStack_2cc
#undef uStack_2c8
#undef piStack_90
#undef uStack_88
#undef uStack_80

#undef UNK_82010a3c
#define UNK_82010a3c (*(uint *)(0x82010a3cU))
#undef uRam0000000082010a3c
#define uRam0000000082010a3c (*(uint32_t *)(0x82010a3cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002058
 */

undefined8 recovered_10002058(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003b58(0x23c);
  if ((bVar1) && (uRam0000000082010a3c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000082010a3c)();
    return uVar2;
  }
  return 0;
}

#undef UNK_82010a3c
#undef uRam0000000082010a3c

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10008b05
#define DAT_10008b05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x455U)))
#undef DAT_10008b3e
#define DAT_10008b3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48eU)))
#undef DAT_10008c6b
#define DAT_10008c6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bbU)))
#undef DAT_10008c6f
#define DAT_10008c6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfU)))
#undef DAT_10008c74
#define DAT_10008c74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c4U)))
#undef DAT_10008c78
#define DAT_10008c78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c8U)))
#undef DAT_10008c7d
#define DAT_10008c7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_10008c82
#define DAT_10008c82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d2U)))
#undef DAT_10008cfb
#define DAT_10008cfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef DAT_10008d00
#define DAT_10008d00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x650U)))
#undef DAT_10008d05
#define DAT_10008d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x655U)))
#undef DAT_10008d13
#define DAT_10008d13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_10008d18
#define DAT_10008d18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x668U)))
#undef DAT_10008d1d
#define DAT_10008d1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66dU)))
#undef DAT_10010108
#define DAT_10010108 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint *)(((uintptr_t)pf_module_state + 0x7a5cU)))
#undef UNK_82010a48
#define UNK_82010a48 (*(uint *)(0x82010a48U))
#undef str_10008a01
#define str_10008a01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
#undef str_10008adb
#define str_10008adb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42bU)))
#undef str_10008b07
#define str_10008b07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10008b17
#define str_10008b17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
#undef str_10008b1d
#define str_10008b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_10008b42
#define str_10008b42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x492U)))
#undef str_10008b6a
#define str_10008b6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_10008b79
#define str_10008b79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c9U)))
#undef str_10008b9f
#define str_10008b9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_10008bdb
#define str_10008bdb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#undef str_10008c07
#define str_10008c07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x557U)))
#undef str_10008c40
#define str_10008c40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x590U)))
#undef str_10008c86
#define str_10008c86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d6U)))
#undef str_10008c8d
#define str_10008c8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ddU)))
#undef str_10008c94
#define str_10008c94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_10008d0a
#define str_10008d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65aU)))
#undef uRam0000000082010a48
#define uRam0000000082010a48 (*(uint32_t *)(0x82010a48U))
#define abStack_150 (*(byte (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000208c
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000208c(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  ulong n;
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 *dst;
  ulong uVar16;
  void *dst_00;
  long lVar17;

  if (DAT_10010108 != 0) {
    bVar6 = false;
    if (param_2 != (byte *)0x0) {
      if (*param_2 == 0) {
        bVar6 = false;
      }
      else {
        uVar13 = strlen((char *)param_2);
        if ((uVar13 < 0xea) &&
           ((((*param_2 == 0x24 || (uVar13 < 0xde)) || (*(int *)(param_1 + 0x3e30) == 0)) ||
            (DAT_1001010c >> 0x1e != 0)))) {
          pcVar14 = str_10008bdb;
          pbVar10 = param_2;
          do {
            bVar5 = *pbVar10;
            if (bVar5 == 0) {
              uVar9 = *(uint *)(param_1 + 0x38f4);
              if (uVar9 == 0x20) {
LAB_10004500:
                bVar6 = false;
                pcVar14 = str_10008c07;
              }
              else {
                if (*param_2 != 0x24) {
                  uVar12 = recovered_10004d4c(param_1);
                  if ((int)uVar12 == 0) goto LAB_10004500;
                  uVar9 = *(uint *)(param_1 + 0x38f4);
                }
                lVar17 = param_1 + (ulong)uVar9 * 0x168;
                *(uint *)(param_1 + 0x38f4) = uVar9 + 1;
                memset((void *)(lVar17 + 0xa8c),0,0x168);
                *(undefined4 *)(lVar17 + 0xa8c) = 1;
                iVar8 = *(int *)(param_1 + 0x38f8) + 1;
                *(int *)(param_1 + 0x38f8) = iVar8;
                *(int *)(lVar17 + 0xa90) = iVar8;
                *(uint *)(lVar17 + 0xa94) = DAT_1001010c;
                *(undefined4 *)(lVar17 + 0xa98) = *(undefined4 *)(param_1 + 0x610);
                *(undefined4 *)(lVar17 + 0xa9c) = *(undefined4 *)(param_1 + 0x3e30);
                memcpy((void *)(lVar17 + 0xaa1),param_2,uVar13 + 1);
                if (*param_2 != 0x24) {
                  uVar9 = *(uint *)(param_1 + 0x3db4);
                  *(uint *)(param_1 + 0x3db4) = uVar9 + 1;
                  dst = (undefined4 *)(*(long *)(param_1 + 0x3ca0) + (ulong)uVar9 * 0x10c);
                  memset(dst,0,0x10c);
                  uVar3 = *(undefined4 *)(lVar17 + 0xa98);
                  *dst = *(undefined4 *)(lVar17 + 0xa94);
                  dst[4] = uVar3;
                  iVar8 = *(int *)(lVar17 + 0xa9c);
                  if (iVar8 == 0) {
                    iVar8 = -1;
                  }
                  dst[2] = iVar8;
                  *(undefined2 *)(dst + 5) = 0x101;
                  dst[6] = *(undefined4 *)(lVar17 + 0xa90);
                  memcpy(dst + 7,param_2,uVar13 + 1);
                }
                *(undefined4 *)(param_1 + 0x618) = 0;
                *(undefined1 *)(param_1 + 0x3920) = 0;
                bVar6 = true;
                pcVar14 = str_10008c40;
              }
              goto LAB_100045f4;
            }
            pbVar10 = pbVar10 + 1;
          } while (0x1f < bVar5);
          bVar6 = false;
        }
        else {
          bVar6 = false;
          pcVar14 = str_10008b9f;
        }
LAB_100045f4:
        snprintf((char *)(param_1 + 0x470),0x80,pcVar14);
      }
    }
    return bVar6;
  }
  bVar6 = recovered_10004608(param_1);
  if (((*(char *)(param_1 + 0x43a) == '\x01') && (*(int *)(param_1 + 0x440) != 0)) &&
     (uVar13 = recovered_1000462c(), (uVar13 & 1) != 0)) {
    pbVar10 = &DAT_10008ada;
    if (param_2 != (byte *)0x0) {
      pbVar10 = param_2;
    }
    bVar6 = recovered_10003b58(0x248);
    if (((bVar6) && (uRam0000000082010a48 != 0)) &&
       (iVar8 = (*(code *)(ulong)uRam0000000082010a48)(pbVar10), iVar8 != 0)) {
      return true;
    }
    pcVar14 = str_10008adb;
LAB_100025f0:
    recovered_10003ab4(param_1,(byte *)pcVar14);
  }
  else {
    pbVar10 = recovered_10004db8(param_2);
    bVar7 = false;
    if (pbVar10 != (byte *)0x0) {
      bVar5 = *pbVar10;
      if (bVar5 == 0) {
        bVar7 = false;
      }
      else {
        pbVar11 = recovered_10004db8(pbVar10);
        if ((pbVar11 == (byte *)0x0) || (bVar4 = *pbVar11, bVar4 == 0)) {
LAB_100021d0:
          for (lVar17 = 0;
              ((0x2c < bVar5 || ((1L << ((ulong)(uint)bVar5 & 0x3f) & 0x100100000201U) == 0)) &&
              (lVar17 != 0x3f)); lVar17 = lVar17 + 1) {
            abStack_150[lVar17] = bVar5;
            bVar5 = pbVar10[lVar17 + 1];
          }
          abStack_150[lVar17] = 0;
          bVar7 = recovered_10003830(abStack_150,&DAT_10008c6b);
          if (((!bVar7) && (bVar7 = recovered_10003830(abStack_150,&DAT_10008c6f), !bVar7)) &&
             ((((bVar7 = recovered_10003830(abStack_150,&DAT_10008c74), !bVar7 &&
                ((bVar7 = recovered_10003830(abStack_150,&DAT_10008c78), !bVar7 &&
                 (bVar7 = recovered_10003830(abStack_150,&DAT_10008c7d), !bVar7)))) &&
               (bVar7 = recovered_10003830(abStack_150,&DAT_10008c82), !bVar7)) &&
              ((bVar7 = recovered_10003830(abStack_150,(byte *)str_10008c86), !bVar7 &&
               (bVar7 = recovered_10003830(abStack_150,(byte *)str_10008c8d), !bVar7)))))) {
            bVar7 = recovered_10003830(abStack_150,(byte *)str_10008c94);
            goto LAB_100022a4;
          }
        }
        else if (bVar4 != 0x3e) {
          uVar15 = (uint)bVar4;
          uVar9 = uVar15 | 0x20;
          if (0x19 < uVar15 - 0x41) {
            uVar9 = uVar15;
          }
          pbVar1 = pbVar11;
          if (uVar9 == 0x69) {
            pbVar1 = pbVar11 + 1;
          }
          bVar4 = *pbVar1;
          if (bVar4 - 0x30U < 10) {
            pbVar11 = pbVar11 + (uVar9 == 0x69);
            while( true ) {
              pbVar11 = pbVar11 + 1;
              if (9 < bVar4 - 0x30U) break;
              bVar4 = *pbVar11;
            }
            if (bVar4 == 0x3e) goto LAB_100022a0;
          }
          goto LAB_100021d0;
        }
LAB_100022a0:
        bVar7 = true;
      }
    }
LAB_100022a4:
    recovered_10004660((long)abStack_150,0x100,((uintptr_t)pf_module_state + 0x42aU));
    uVar12 = recovered_10003ab4(param_1,&DAT_10008ada);
    if ((int)uVar12 != 0) {
      *(undefined4 *)(param_1 + 0x428) = 1;
      recovered_100047e0(param_1,abStack_150);
      pbVar10 = &DAT_10008ada;
      if (param_2 != (byte *)0x0) {
        pbVar10 = param_2;
      }
      recovered_100047e0(param_1,pbVar10);
      recovered_100047e0(param_1,&DAT_10008b05);
    }
    if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
      if (bVar6) {
        uVar9 = recovered_10003aec(param_1);
        *(uint *)(param_1 + 0x42c) = uVar9;
      }
      return true;
    }
    if (bVar7 == false) {
      uVar13 = recovered_10002704(str_10008b07);
      if (((((int)uVar13 == 0) && (*param_2 != 0)) &&
          (uVar9 = recovered_10004ab4(param_2), (uVar9 & 1) == 0)) &&
         (((((bVar7 = recovered_10004af8((char *)param_2,&DAT_10008cfb), bVar7 ||
             (bVar7 = recovered_10004af8((char *)param_2,&DAT_10008d00), bVar7)) ||
            ((bVar7 = recovered_10004af8((char *)param_2,&DAT_10008d05), bVar7 ||
             ((bVar7 = recovered_10004af8((char *)param_2,(byte *)str_10008d0a), bVar7 ||
              (bVar7 = recovered_10004af8((char *)param_2,&DAT_10008d13), bVar7)))))) ||
           ((bVar7 = recovered_10004af8((char *)param_2,&DAT_10008d18), bVar7 ||
            (bVar7 = recovered_10004af8((char *)param_2,&DAT_10008d1d), bVar7)))) &&
          (bVar7 = recovered_100049ac((char *)param_2), !bVar7)))) {
        uVar9 = recovered_10004a40((char *)param_2);
        uVar12 = recovered_100049f4(param_2,(ulong)(uVar9 | 0x80000000));
        bVar7 = (int)uVar12 != 0;
        if ((int)uVar12 == 0) {
          recovered_10003ab4(param_1,(byte *)str_10008b17);
        }
        if (!bVar6) {
          return bVar7;
        }
        uVar9 = recovered_10003aec(param_1);
        goto LAB_10002354;
      }
      if (*(int *)(param_1 + 0x440) == 0) {
        uVar13 = recovered_10002704(str_10008b07);
        if (((int)uVar13 != 0) || (uVar9 = recovered_10004ab4(param_2), (uVar9 & 1) != 0))
        goto LAB_10002440;
        bVar7 = recovered_10004af8((char *)param_2,&DAT_10008b3e);
        goto LAB_10002444;
      }
    }
    else if (*(int *)(param_1 + 0x440) == 0) {
LAB_10002440:
      bVar7 = false;
LAB_10002444:
      uVar13 = strlen((char *)param_2);
      if (uVar13 != 0xffffffffffffffff) {
        n = uVar13 + 1;
        uVar16 = n;
        if (bVar7 != false) {
          if (0x7fffffffffffffee < uVar13) goto LAB_100025e8;
          uVar16 = uVar13 * 2 + 0x22;
        }
        pbVar10 = (byte *)0x0;
        pbVar11 = *(byte **)(param_1 + 0x450);
        if ((pbVar11 != (byte *)0x0) && (pbVar11 <= param_2)) {
          if ((ulong)((long)param_2 - (long)pbVar11) < *(ulong *)(param_1 + 0x458)) {
            pbVar10 = (byte *)recovered_10003e28(n);
            if (pbVar10 == (byte *)0x0) goto LAB_100025e8;
            memcpy(pbVar10,param_2,n);
            param_2 = pbVar10;
          }
          else {
            pbVar10 = (byte *)0x0;
          }
        }
        uVar12 = recovered_10003930(param_1,uVar16);
        if ((int)uVar12 != 0) {
          dst_00 = *(void **)(param_1 + 0x450);
          if (bVar7 == false) {
            memcpy(dst_00,param_2,n);
LAB_10002558:
            recovered_10003a74(pbVar10);
            **(undefined1 **)(param_1 + 0x460) = 0;
            *(undefined4 *)(param_1 + 0x444) = 0;
            *(undefined4 *)(param_1 + 0x448) = 0;
            *(undefined4 *)(param_1 + 0x440) = 1;
            uVar12 = recovered_100027a8(param_1,str_10008b6a);
            *(int *)(param_1 + 0x44c) = (int)uVar12;
            if ((int)uVar12 == 0) {
              *(undefined4 *)(param_1 + 0x440) = 0;
              *(undefined4 *)(param_1 + 0x444) = 0;
              recovered_10003ab4(param_1,(byte *)str_10008b79);
            }
            if (bVar6) {
              uVar9 = recovered_10003aec(param_1);
              *(uint *)(param_1 + 0x42c) = uVar9;
            }
            return *(int *)(param_1 + 0x44c) != 0;
          }
          if ((dst_00 != (void *)0x0) && (uVar13 = *(ulong *)(param_1 + 0x458), 0x1f < uVar13)) {
            lVar17 = 0x1f;
            memcpy(dst_00,str_10008a01,0x1f);
            for (; bVar5 = *param_2, bVar5 != 0; param_2 = param_2 + 1) {
              lVar2 = 1;
              if (bVar5 == 0x22 || bVar5 == 0x2f) {
                lVar2 = 2;
              }
              if (uVar13 < lVar17 + lVar2 + 3U) goto LAB_100025e0;
              if ((bVar5 == 0x2f) || (bVar5 == 0x22)) {
                *(undefined1 *)((long)dst_00 + lVar17) = 0x2f;
                lVar17 = lVar17 + 1;
                bVar5 = *param_2;
              }
              *(byte *)((long)dst_00 + lVar17) = bVar5;
              lVar17 = lVar17 + 1;
            }
            if (lVar17 + 3U <= uVar13) {
              *(undefined2 *)((long)dst_00 + lVar17) = 0x7d22;
              *(undefined1 *)((undefined2 *)((long)dst_00 + lVar17) + 1) = 0;
              goto LAB_10002558;
            }
          }
        }
LAB_100025e0:
        recovered_10003a74(pbVar10);
      }
LAB_100025e8:
      pcVar14 = str_10008b42;
      goto LAB_100025f0;
    }
    recovered_10003ab4(param_1,(byte *)str_10008b1d);
    if (bVar6) {
      uVar9 = recovered_10003aec(param_1);
      bVar7 = false;
LAB_10002354:
      *(uint *)(param_1 + 0x42c) = uVar9;
      return bVar7;
    }
  }
  return false;
}

#undef DAT_10008ada
#undef DAT_10008b05
#undef DAT_10008b3e
#undef DAT_10008c6b
#undef DAT_10008c6f
#undef DAT_10008c74
#undef DAT_10008c78
#undef DAT_10008c7d
#undef DAT_10008c82
#undef DAT_10008cfb
#undef DAT_10008d00
#undef DAT_10008d05
#undef DAT_10008d13
#undef DAT_10008d18
#undef DAT_10008d1d
#undef DAT_10010108
#undef DAT_1001010c
#undef UNK_82010a48
#undef str_10008a01
#undef str_10008adb
#undef str_10008b07
#undef str_10008b17
#undef str_10008b1d
#undef str_10008b42
#undef str_10008b6a
#undef str_10008b79
#undef str_10008b9f
#undef str_10008bdb
#undef str_10008c07
#undef str_10008c40
#undef str_10008c86
#undef str_10008c8d
#undef str_10008c94
#undef str_10008d0a
#undef uRam0000000082010a48
#undef abStack_150

#undef DAT_82010a40
#define DAT_82010a40 (*(uint8_t *)(0x82010a40U))
#undef _DAT_82010a40
#define _DAT_82010a40 (*(uint *)(0x82010a40U))
#define abStack_440 (*(byte (*)[1088])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_10002640(long param_1)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;

  if ((param_1 == 0) || (*(char *)(param_1 + 0x43a) != '\x01')) {
    bVar6 = 0;
  }
  else {
    bVar1 = recovered_10004608(param_1);
    bVar6 = 0;
    iVar7 = 0x10;
    do {
      bVar2 = recovered_10003b58(0x240);
      if (((!bVar2) || (_DAT_82010a40 == 0)) ||
         (iVar3 = (*(code *)(ulong)_DAT_82010a40)(abStack_440,0x400), iVar3 == 0)) break;
      recovered_100047e0(param_1,abStack_440);
      iVar7 = iVar7 + -1;
      bVar6 = 1;
    } while (iVar7 != 0);
    uVar5 = recovered_1000462c();
    if ((int)uVar5 != *(int *)(param_1 + 0x43c)) {
      *(int *)(param_1 + 0x43c) = (int)uVar5;
      bVar6 = 1;
    }
    if ((bVar6 & bVar1) != 0) {
      uVar4 = recovered_10003aec(param_1);
      *(uint *)(param_1 + 0x42c) = uVar4;
    }
  }
  return bVar6;
}

#undef DAT_82010a40
#undef _DAT_82010a40
#undef abStack_440

#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_28 (*(byte * *)(pf_stack_frame + 40))
#define local_18 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002704
 */

ulong recovered_10002704(undefined8 param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_38 = 0;
  local_30 = 0;
  local_28 = (byte *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  uVar2 = recovered_10004fb0(param_1,&local_38);
  if ((int)uVar2 != 0) {
    if (((uint)local_38 & 0xfffffffb) == 1) {
      uVar2 = (ulong)(PF_PART4(local_38, 4) != 0);
    }
    else {
      if ((uint)local_38 == 3 && local_28 != (byte *)0x0) {
        uVar1 = *local_28 - 0x54;
        if (uVar1 < 0x26 && (1L << ((ulong)uVar1 & 0x3f) & 0x2100000021U) != 0) {
          return 1;
        }
        if (*local_28 == 0x31) {
          return 1;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

#undef local_38
#undef local_30
#undef local_28
#undef local_18
#undef uStack_20

#undef UINT_82010894
#define UINT_82010894 (*(uint *)(0x82010894U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a8
 */

undefined8 recovered_100027a8(void *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x94);
  if ((bVar1) && (uVar2 = UINT_82010894, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(recovered_100027f8,param_1,param_2);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010894

#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
#undef DAT_10008cf0
#define DAT_10008cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x640U)))
#undef DAT_10008f5b
#define DAT_10008f5b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8abU)))
#undef DAT_10008fec
#define DAT_10008fec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9d8U)))
#undef DAT_10009101
#define DAT_10009101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa51U)))
#undef DAT_1000931f
#define DAT_1000931f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6fU)))
#undef DAT_10010108
#define DAT_10010108 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
#undef str_10008cf5
#define str_10008cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x645U)))
#undef str_10008d83
#define str_10008d83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d3U)))
#undef str_10008d8b
#define str_10008d8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dbU)))
#undef str_10008da4
#define str_10008da4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f4U)))
#undef str_10008def
#define str_10008def (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73fU)))
#undef str_10008e07
#define str_10008e07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x757U)))
#undef str_10008e2f
#define str_10008e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77fU)))
#undef str_10008e56
#define str_10008e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a6U)))
#undef str_10008e83
#define str_10008e83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_10008eaf
#define str_10008eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
#undef str_10008f0b
#define str_10008f0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_10008f60
#define str_10008f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b0U)))
#undef str_10008f92
#define str_10008f92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e2U)))
#undef str_10008fa7
#define str_10008fa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f7U)))
#undef str_10008ff1
#define str_10008ff1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x941U)))
#undef str_10009028
#define str_10009028 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x978U)))
#undef str_10009031
#define str_10009031 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x981U)))
#undef str_10009050
#define str_10009050 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a0U)))
#undef str_1000908d
#define str_1000908d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9ddU)))
#undef str_100090a4
#define str_100090a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f4U)))
#undef str_100090d4
#define str_100090d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa24U)))
#undef str_100090ec
#define str_100090ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3cU)))
#undef str_1000910f
#define str_1000910f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5fU)))
#undef str_10009120
#define str_10009120 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#undef str_10009160
#define str_10009160 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab0U)))
#undef str_10009185
#define str_10009185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad5U)))
#undef str_1000918f
#define str_1000918f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadfU)))
#undef str_100091c2
#define str_100091c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb12U)))
#undef str_100092f7
#define str_100092f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc47U)))
#undef str_10009322
#define str_10009322 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_10009355
#define str_10009355 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca5U)))
#undef str_10009380
#define str_10009380 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd0U)))
#undef str_1000939f
#define str_1000939f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcefU)))
#undef str_100093d6
#define str_100093d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd26U)))
#undef str_1000951a
#define str_1000951a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6aU)))
#define in_stack_fffffffffffffc60 (*(char * *)(pf_stack_frame + 16))
#define aiStack_370 (*(int (*)[220])(pf_stack_frame + 64))
#define acStack_170 (*(char (*)[368])(pf_stack_frame + 576))
#define auStack_110 (*(uint (*)[68])(pf_stack_frame + 672))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f8
 */

bool recovered_100027f8(long param_1)

{
  unsigned char pf_stack_frame[976] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  char cVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulonglong arg3;
  long lVar13;
  long lVar14;
  uint *dst;
  char *pcVar15;
  byte bVar16;
  uint uVar17;
  char *pcVar18;
  long lVar19;

  if (param_1 == 0) {
    return true;
  }
  **(undefined1 **)(param_1 + 0x460) = 0;
  if (*(char *)(param_1 + 0x43a) == '\x01') {
    recovered_10002058();
  }
  if (DAT_10010108 == 0) {
    bVar1 = recovered_100049ac(*(char **)(param_1 + 0x450));
    pcVar18 = *(char **)(param_1 + 0x450);
    if (bVar1) {
      uVar3 = recovered_10004a40(pcVar18);
      uVar6 = recovered_100049f4(pcVar18,(ulong)uVar3);
      uVar3 = (uint)uVar6;
    }
    else {
      uVar6 = recovered_1000541c(pcVar18,*(undefined8 *)(param_1 + 0x460),
                                 (ulong)*(uint *)(param_1 + 0x468));
      uVar3 = (uint)uVar6;
    }
    goto LAB_10003210;
  }
  *(undefined1 *)(param_1 + 0x3dbc) = 0;
  **(undefined1 **)(param_1 + 0x460) = 0;
  if ((*(int *)(param_1 + 0x378c) == 1) &&
     (iVar2 = strcmp((char *)(param_1 + 0x37a1),str_10008d83), iVar2 == 0)) {
    *(undefined2 *)(param_1 + 0x3e38) = 0;
    snprintf((char *)(param_1 + 0x3f58),0x80,str_10008d8b);
    snprintf((char *)(param_1 + 0x4f0),0x80,&DAT_10008c9a,(char *)(param_1 + 0x3f58));
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x38fc) = 1;
    goto LAB_10003210;
  }
  if ((*(byte *)(param_1 + 0x60b) & 1) == 0) {
    bVar16 = *(byte *)(param_1 + 0x391e);
  }
  else {
    bVar16 = 1;
  }
  *(undefined2 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x60a) = 0;
  *(undefined1 *)(param_1 + 0x391d) = 0;
  if ((bVar16 & 1) != 0) {
    in_stack_fffffffffffffc60 = (char *)(ulong)*(uint *)param_1;
    snprintf((char *)auStack_110,0xc0,str_10008ff1,*(uint *)param_1);
    uVar6 = recovered_1000541c(auStack_110,aiStack_370,0x100);
    if ((int)uVar6 != 0) {
      uVar7 = recovered_10005850();
      *(undefined4 *)(param_1 + 0x60c) = 0;
      uVar3 = (uint)uVar7;
      if (0xf < uVar3) {
        uVar3 = 0x10;
      }
      pcVar18 = (char *)0x1;
      while (uVar4 = (uint)pcVar18, uVar4 - uVar3 != 1) {
        snprintf(acStack_170,0x60,str_10009028,uVar4);
        in_stack_fffffffffffffc60 = pcVar18;
        uVar7 = recovered_10005850();
        if ((int)uVar7 != 0) {
          uVar17 = *(uint *)(param_1 + 0x60c);
          *(uint *)(param_1 + 0x60c) = uVar17 + 1;
          *(int *)(param_1 + 0x61c + (ulong)uVar17 * 4) = (int)uVar7;
        }
        pcVar18 = (char *)(ulong)(uVar4 + 1);
      }
      if ((*(int *)(param_1 + 0x3900) == 0) && (*(int *)(param_1 + 0x60c) != 0)) {
        *(undefined4 *)(param_1 + 0x3900) = *(undefined4 *)(param_1 + 0x61c);
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x3900);
  uVar7 = (ulong)uVar3;
  if (uVar3 == 0) {
    pcVar18 = str_10009031;
LAB_10002bd0:
    snprintf((char *)(param_1 + 0x4f0),0x80,pcVar18,in_stack_fffffffffffffc60);
LAB_10002ca0:
    if ((*(byte *)(param_1 + 0x60b) & 1) == 0) {
LAB_10002e40:
      (void)__atomic_exchange_n(&(*(undefined4 *)(param_1 + 0x3fd8)),0,__ATOMIC_ACQ_REL);
      if (*(int *)(param_1 + 0x378c) != 0) {
        uVar3 = 0;
        uVar11 = 2;
LAB_10002e64:
        *(undefined4 *)(param_1 + 0x38fc) = uVar11;
        goto LAB_10003210;
      }
LAB_1000320c:
      uVar3 = 0;
      goto LAB_10003210;
    }
    uVar3 = 0;
LAB_10002cac:
    (void)__atomic_exchange_n(&(*(uint *)(param_1 + 0x3fd8)),uVar3,__ATOMIC_ACQ_REL);
  }
  else {
    if (*(uint *)(param_1 + 0x868) != uVar3) {
      *(uint *)(param_1 + 0x868) = uVar3;
      *(undefined4 *)(param_1 + 0x85c) = 0;
      *(undefined4 *)(param_1 + 0x864) = 0x3c;
    }
    snprintf((char *)auStack_110,0xc0,str_10009050,
                       *(uint *)param_1,uVar3);
    uVar6 = recovered_1000541c(auStack_110,aiStack_370,0x100);
    if ((int)uVar6 == 0) {
      pcVar18 = strstr((char *)aiStack_370,&DAT_10009088);
      in_stack_fffffffffffffc60 = str_1000908d;
      if (pcVar18 == (char *)0x0) {
        in_stack_fffffffffffffc60 = str_100090a4;
      }
      *(bool *)(param_1 + 0x608) = pcVar18 != (char *)0x0;
      pcVar18 = &DAT_10008c9a;
      goto LAB_10002bd0;
    }
    snprintf(acStack_170,0x60,str_100090d4,*(uint *)param_1);
    uVar5 = recovered_10002704(acStack_170);
    *(char *)(param_1 + 0x609) = (char)uVar5;
    snprintf(acStack_170,0x60,str_100090ec,*(uint *)param_1);
    uVar5 = recovered_10002704(acStack_170);
    *(char *)(param_1 + 0x60a) = (char)uVar5;
    recovered_100058e4(param_1,&DAT_10009101,(undefined1 *)(param_1 + 0x570),0x28);
    uVar5 = recovered_10005850();
    uVar3 = (uint)uVar5;
    if (7 < uVar3) {
      uVar3 = 8;
    }
    *(uint *)(param_1 + 0x614) = uVar3;
    memset((void *)(param_1 + 0xa7c),0,8);
    lVar19 = 0x86c;
    for (uVar5 = 0; uVar3 = (uint)uVar7, uVar5 < *(uint *)(param_1 + 0x614); uVar5 = uVar5 + 1) {
      snprintf(acStack_170,0x60,str_1000910f,(uint)uVar5);
      recovered_100058e4(param_1,acStack_170,(undefined1 *)(param_1 + lVar19),0x21);
      snprintf(acStack_170,0x60,(char *)((uintptr_t)pf_module_state + 0xa69U),(uint)uVar5);
      uVar8 = recovered_10005850();
      *(char *)(param_1 + uVar5 + 0xa7c) = (char)uVar8;
      lVar19 = lVar19 + 0x21;
    }
    *(undefined1 *)(param_1 + 0x391d) = 1;
    if (((bVar16 & 1) != 0) ||
       (uVar4 = *(uint *)(param_1 + 0x864), *(uint *)(param_1 + 0x864) = uVar4 + 1, 0x3b < uVar4)) {
      *(undefined4 *)(param_1 + 0x864) = 0;
      uVar7 = (ulong)*(uint *)(param_1 + 0x3900);
      snprintf((char *)auStack_110,0xc0,str_10009120,
                         *(uint *)param_1,*(uint *)(param_1 + 0x3900));
      uVar6 = recovered_1000541c(auStack_110,aiStack_370,0x100);
      uVar3 = (uint)uVar7;
      if ((int)uVar6 != 0) {
        uVar5 = recovered_10005850();
        *(undefined4 *)(param_1 + 0x85c) = 0;
        uVar4 = (uint)uVar5;
        if (0x3f < uVar4) {
          uVar4 = 0x40;
        }
        for (uVar17 = 1; uVar3 = (uint)uVar7, uVar17 - uVar4 != 1; uVar17 = uVar17 + 1) {
          snprintf(acStack_170,0x60,(char *)((uintptr_t)pf_module_state + 0xaa9U),uVar17);
          uVar5 = recovered_10005850();
          if ((int)uVar5 - 1U < 0xfffffffe) {
            uVar3 = *(uint *)(param_1 + 0x85c);
            *(uint *)(param_1 + 0x85c) = uVar3 + 1;
            *(int *)(param_1 + 0x65c + (ulong)uVar3 * 4) = (int)uVar5;
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x609) == '\x01') {
      pcVar18 = str_10009185;
      if (*(char *)(param_1 + 0x60a) == '\0') {
        pcVar18 = str_1000918f;
      }
    }
    else {
      pcVar18 = str_10009160;
    }
    snprintf((char *)(param_1 + 0x4f0),0x80,&DAT_10008c9a,pcVar18);
    if ((*(char *)(param_1 + 0x3e38) == '\x01') && (*(char *)(param_1 + 0x60a) == '\x01')) {
      pcVar18 = (char *)(ulong)(*(int *)(param_1 + 0x3e4c) + 1);
      uVar3 = *(int *)(param_1 + 0x3e48) + 1;
      pcVar9 = str_100091c2;
LAB_10002c70:
      snprintf((char *)(param_1 + 0x4f0),0x80,pcVar9,(ulonglong)pcVar18,uVar3);
    }
    else if ((*(char *)(param_1 + 0x3f58) != '\0') && (*(char *)(param_1 + 0x60a) == '\x01')) {
      pcVar18 = (char *)(param_1 + 0x3f58);
      pcVar9 = &DAT_10008c9a;
      goto LAB_10002c70;
    }
    if (*(char *)(param_1 + 0x609) != '\x01') goto LAB_10002ca0;
    uVar4 = *(uint *)(param_1 + 0x3900);
    uVar17 = uVar4 >> 0x1e;
    uVar3 = (uint)*(byte *)(param_1 + 0x60a);
    if ((*(byte *)(param_1 + 0x60b) & 1) != 0) {
      if (uVar17 == 0) {
        uVar3 = 1;
      }
      goto LAB_10002cac;
    }
    iVar2 = *(int *)(param_1 + 0x378c);
    if ((*(byte *)(param_1 + 0x60a) & 1) == 0) {
      if (iVar2 != 2) {
        if ((*(char *)(param_1 + 0x3fdc) == '\x01') && (uVar17 == 0)) goto LAB_10002cd0;
        goto LAB_10002e40;
      }
LAB_10002d94:
      *(undefined4 *)(param_1 + 0x38fc) = 3;
      bVar1 = recovered_1000547c(acStack_170,0x44,(byte *)(param_1 + 0x3891));
      if (bVar1) {
        bVar1 = recovered_1000547c((undefined1 *)auStack_110,0x84,(byte *)(param_1 + 0x38b2));
        if (bVar1) {
          pcVar18 = &DAT_10008cf0;
          if (*(char *)(param_1 + 0x37a0) == '\0') {
            pcVar18 = str_10008cf5;
          }
          snprintf((char *)aiStack_370,0x200,str_10008da4,*(uint *)param_1,uVar4,
                             *(uint *)(param_1 + 0x3798),acStack_170,auStack_110,pcVar18);
          uVar6 = recovered_1000541c(aiStack_370,*(undefined8 *)(param_1 + 0x460),
                                     (ulong)*(uint *)(param_1 + 0x468));
          if ((int)uVar6 == 0) {
            bVar1 = recovered_100054e4(*(undefined8 *)(param_1 + 0x460));
            uVar11 = 2;
            if (!bVar1) {
              uVar11 = 3;
            }
            *(undefined4 *)(param_1 + 0x38fc) = uVar11;
            if (bVar1) {
              pcVar18 = str_10008e07;
            }
            else {
              pcVar18 = *(char **)(param_1 + 0x460);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x38fc) = 1;
            pcVar18 = str_10008def;
          }
          uVar3 = (uint)((int)uVar6 != 0);
          pcVar9 = &DAT_10008c9a;
          goto LAB_1000327c;
        }
      }
      goto LAB_1000320c;
    }
LAB_10002cd0:
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x38fc) = 3;
      if (*(char *)(param_1 + 0x37a1) != '$') {
        *(undefined1 *)(param_1 + 0x3f58) = 0;
        uVar7 = recovered_10005574(param_1);
        if ((uVar7 & 1) == 0) {
          bVar1 = recovered_100054e4(*(undefined8 *)(param_1 + 0x460));
          uVar11 = 2;
          if (!bVar1) {
            uVar11 = 3;
          }
          *(undefined4 *)(param_1 + 0x38fc) = uVar11;
          if (!bVar1) goto LAB_100031f8;
          pcVar18 = str_10008e2f;
          goto LAB_100031fc;
        }
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x38fc) = 1;
        pcVar9 = str_10008e56;
LAB_1000327c:
        snprintf((char *)(param_1 + 0x4f0),0x80,pcVar9,pcVar18);
        goto LAB_10003210;
      }
      if (*(char *)(param_1 + 0x3e38) == '\x01') {
        pcVar9 = str_100092f7;
LAB_10003364:
        snprintf((char *)(param_1 + 0x4f0),0x80,pcVar9,pcVar18);
        bVar1 = recovered_100054e4(*(undefined8 *)(param_1 + 0x460));
        uVar3 = 0;
        uVar11 = 2;
        if (!bVar1) {
          uVar11 = 3;
        }
      }
      else {
        lVar19 = param_1 + 0x37a1;
        lVar13 = param_1 + 0x37a0;
        do {
          lVar14 = lVar13;
          lVar19 = lVar19 + 1;
          lVar13 = lVar14 + 1;
        } while (*(char *)(lVar14 + 2) == ' ');
        pcVar9 = strstr((char *)(lVar14 + 2),&DAT_1000931f);
        if (pcVar9 == (char *)0x0) {
          uVar7 = strlen((char *)(lVar14 + 2));
        }
        else {
          uVar7 = (long)pcVar9 - lVar19;
        }
        pcVar12 = (char *)(lVar14 + 1 + uVar7);
        do {
          uVar5 = uVar7;
          if (uVar5 == 0) goto LAB_1000335c;
          uVar7 = uVar5 - 1;
          cVar10 = *pcVar12;
          pcVar12 = pcVar12 + -1;
        } while (cVar10 == ' ');
        if ((0x7e < uVar7) || (*(int *)(param_1 + 0x3908) == 0)) {
LAB_1000335c:
          pcVar9 = str_10009322;
          goto LAB_10003364;
        }
        pcVar12 = (char *)(param_1 + 0x3e58);
        memcpy(pcVar12,(void *)(lVar14 + 2),uVar5);
        *(undefined1 *)(param_1 + uVar7 + 0x3e59) = 0;
        pcVar15 = pcVar12;
        if (pcVar9 != (char *)0x0) {
          pcVar15 = pcVar9 + 2;
        }
        pcVar15 = pcVar15 + -1;
        do {
          pcVar15 = pcVar15 + 1;
        } while (*pcVar15 == ' ');
        uVar7 = strlen(pcVar15);
        if ((uVar7 - 0x80 < 0xffffffffffffff81) || (*pcVar15 != '/')) {
          pcVar9 = str_10009355;
          goto LAB_10003364;
        }
        for (uVar5 = 0; uVar7 != uVar5; uVar5 = uVar5 + 1) {
          bVar16 = pcVar15[uVar5];
          if (((bVar16 < 0x20) || (bVar16 == 0x5c)) ||
             ((uVar5 != 0 && ((bVar16 == 0x2e && (pcVar15[uVar5 - 1] == '.')))))) {
            pcVar9 = str_10009380;
            goto LAB_10003364;
          }
        }
        memcpy((void *)(param_1 + 0x3ed8),pcVar15,uVar7 + 1);
        aiStack_370[2] = 0;
        aiStack_370[0] = 0;
        aiStack_370[1] = 0;
        uVar6 = recovered_1000593c(pcVar12,aiStack_370);
        if ((int)uVar6 == 0) {
LAB_100033e4:
          pcVar9 = str_1000939f;
          goto LAB_10003364;
        }
        if (0xffdc < (uint)aiStack_370[1] || aiStack_370[1] != 0 && aiStack_370[0] == 0)
        goto LAB_100033e4;
        *(undefined4 *)(param_1 + 0x3e3c) = *(undefined4 *)(param_1 + 0x3900);
        *(undefined4 *)(param_1 + 0x3e40) = *(undefined4 *)(param_1 + 0x3908);
        *(undefined4 *)(param_1 + 0x3e44) = *(undefined4 *)(param_1 + 0x3904);
        *(int *)(param_1 + 0x3e50) = aiStack_370[1];
        *(uint *)(param_1 + 0x3e48) = (aiStack_370[1] + 99U) / 100;
        *(undefined4 *)(param_1 + 0x3e4c) = 0;
        *(undefined1 *)(param_1 + 0x3e39) = 0;
        *(undefined1 *)(param_1 + 0x3e38) = 1;
        *(undefined1 *)(param_1 + 0x3f58) = 0;
        uVar7 = recovered_100056b4(param_1);
        if ((uVar7 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x3e38) = 0;
          pcVar18 = *(char **)(param_1 + 0x460);
          pcVar9 = str_100093d6;
          goto LAB_10003364;
        }
        uVar3 = 1;
        uVar11 = 1;
      }
      goto LAB_10002e64;
    }
    if (iVar2 == 2) goto LAB_10002d94;
    if ((((*(char *)(param_1 + 0x3e38) == '\x01') && (*(char *)(param_1 + 0x3e39) == '\x01')) &&
        (0x1df < (uint)(*(int *)(param_1 + 0x390c) - *(int *)(param_1 + 0x3e54)))) &&
       (uVar7 = recovered_100056b4(param_1), (uVar7 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x3e39) = 0;
      *(undefined4 *)(param_1 + 0x3e54) = *(undefined4 *)(param_1 + 0x390c);
      snprintf((char *)(param_1 + 0x4f0),0x80,str_10008e83,*(void **)(param_1 + 0x460));
    }
    if (((*(char *)(param_1 + 0x3e38) == '\x01') && ((*(byte *)(param_1 + 0x3e39) & 1) == 0)) &&
       (0x3b < (uint)(*(int *)(param_1 + 0x390c) - *(int *)(param_1 + 0x3e54)))) {
      recovered_100056b4(param_1);
    }
    lVar19 = 0x39a0;
    uVar3 = *(uint *)(param_1 + 0x3900);
    for (uVar7 = 0; uVar7 != 0x20; uVar7 = uVar7 + 1) {
      if (*(uint *)(param_1 + lVar19) == 0 || *(uint *)(param_1 + lVar19) == uVar3)
      goto LAB_10002e98;
      lVar19 = lVar19 + 0x18;
    }
    uVar7 = 0;
LAB_10002e98:
    dst = (uint *)(param_1 + 0x39a0 + (uVar7 & 0xffffffff) * 0x18);
    if (*dst != uVar3) {
      memset(dst,0,0x18);
      dst[5] = 0x3c;
      uVar3 = *(uint *)(param_1 + 0x3900);
    }
    *dst = uVar3;
    snprintf((char *)aiStack_370,0x200,str_10008eaf,*(uint *)param_1,uVar3,dst[1],dst[2]);
    uVar6 = recovered_1000541c(aiStack_370,*(undefined8 *)(param_1 + 0x460),
                               (ulong)*(uint *)(param_1 + 0x468));
    if ((int)uVar6 == 0) {
LAB_100031f8:
      pcVar18 = *(char **)(param_1 + 0x460);
LAB_100031fc:
      snprintf((char *)(param_1 + 0x4f0),0x80,&DAT_10008c9a,pcVar18);
      goto LAB_1000320c;
    }
    uVar7 = recovered_10005850();
    dst[1] = (uint)uVar7;
    uVar7 = recovered_10005850();
    dst[2] = (uint)uVar7;
    uVar7 = recovered_10005850();
    if ((int)uVar7 != 0) {
      snprintf((char *)(param_1 + 0x4f0),0x80,str_10008f0b);
    }
    uVar7 = recovered_10005850();
    if ((int)uVar7 == 1) {
      memset((void *)(param_1 + 0x3ca8),0,0x10c);
      *(undefined4 *)(param_1 + 0x3ca8) = *(undefined4 *)(param_1 + 0x3900);
      uVar7 = recovered_10005850();
      *(int *)(param_1 + 0x3cac) = (int)uVar7;
      uVar7 = recovered_10005850();
      *(int *)(param_1 + 0x3cb0) = (int)uVar7;
      uVar7 = recovered_10005850();
      *(int *)(param_1 + 0x3cb4) = (int)uVar7;
      uVar7 = recovered_10005850();
      *(int *)(param_1 + 0x3cb8) = (int)uVar7;
      recovered_100058e4(param_1,&DAT_10008f5b,(undefined1 *)(param_1 + 0x3cc4),0xf0);
      cVar10 = *(char *)(param_1 + 0x3cc4);
      if (cVar10 == '$') {
        uVar7 = strlen((char *)(param_1 + 0x3cc4));
        if (uVar7 < 0xe) {
LAB_10003188:
          cVar10 = *(char *)(param_1 + 0x3cc4);
        }
        else {
          cVar10 = *(char *)(param_1 + 0x3cc4);
          if (cVar10 == '$') {
            auStack_110[0] = 0;
            auStack_110[1] = 0;
            lVar13 = param_1 + 0x3cc5;
            for (lVar19 = 0; lVar19 != 2; lVar19 = lVar19 + 1) {
              for (lVar14 = 0; lVar14 != 6; lVar14 = lVar14 + 1) {
                cVar10 = *(char *)(lVar13 + lVar14);
                uVar3 = (int)cVar10 - 0x30;
                if (9 < uVar3) {
                  iVar2 = (int)cVar10;
                  if ((int)cVar10 - 0x41U < 6) {
                    uVar3 = iVar2 - 0x37;
                  }
                  else {
                    if (5 < iVar2 - 0x61U) goto LAB_10003424;
                    uVar3 = iVar2 - 0x57;
                  }
                }
                if ((int)uVar3 < 0) goto LAB_10003424;
                auStack_110[lVar19] = uVar3 | auStack_110[lVar19] << 4;
              }
              lVar13 = lVar13 + 6;
            }
            bVar16 = *(byte *)(param_1 + 0x3cd1);
            if ((bVar16 < 0x40 && (1L << ((ulong)bVar16 & 0x3f) & 0x8400000200000000U) != 0) &&
               ((uVar7 == 0xe || (bVar16 == 0x3a)))) {
              if (((bVar16 == 0x3f) || (bVar16 == 0x21)) &&
                 ((((*(char *)(param_1 + 0x3e38) == '\x01' &&
                    (*(char *)(param_1 + 0x3e39) == '\x01')) &&
                   (*(int *)(param_1 + 0x3cac) == *(int *)(param_1 + 0x3e40))) &&
                  ((auStack_110[0] == *(uint *)(param_1 + 0x3e48) &&
                   (auStack_110[1] == *(uint *)(param_1 + 0x3e4c))))))) {
                *(undefined1 *)(param_1 + 0x3e39) = 0;
                if (bVar16 == 0x3f) {
                  *(undefined1 *)(param_1 + 0x3e38) = 0;
                  arg3 = (ulonglong)(auStack_110[1] + 1);
                  pcVar18 = str_10008f60;
                }
                else {
                  if (auStack_110[1] != auStack_110[0]) {
                    *(uint *)(param_1 + 0x3e4c) = auStack_110[1] + 1;
                    recovered_100056b4(param_1);
                    goto LAB_10003574;
                  }
                  *(undefined1 *)(param_1 + 0x3e38) = 0;
                  arg3 = param_1 + 0x3ed8;
                  pcVar18 = str_10008f92;
                }
                snprintf((char *)(param_1 + 0x3f58),0x80,pcVar18,arg3);
                snprintf((char *)(param_1 + 0x4f0),0x80,&DAT_10008c9a,
                                   (char *)(param_1 + 0x3f58));
              }
LAB_10003574:
              *(undefined1 *)(param_1 + 0x3dbc) = 0;
              goto LAB_10002cc0;
            }
LAB_10003424:
            cVar10 = '$';
          }
        }
      }
      bVar1 = cVar10 != '\0';
LAB_10003430:
      *(bool *)(param_1 + 0x3dbc) = bVar1;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x3900);
      if ((uVar3 >> 0x1e == 0) &&
         ((dst[3] < dst[4] || (uVar4 = dst[5], dst[5] = uVar4 + 1, 0x3b < uVar4)))) {
        dst[5] = 0;
        snprintf((char *)aiStack_370,0x200,str_10008fa7,*(uint *)param_1,uVar3,dst[3]);
        uVar6 = recovered_1000541c(aiStack_370,*(undefined8 *)(param_1 + 0x460),
                                   (ulong)*(uint *)(param_1 + 0x468));
        if ((int)uVar6 == 0) goto LAB_1000320c;
        uVar7 = recovered_10005850();
        dst[4] = (uint)uVar7;
        if (dst[3] < (uint)uVar7) {
          dst[3] = dst[3] + 1;
          memset((void *)(param_1 + 0x3ca8),0,0x10c);
          *(undefined4 *)(param_1 + 0x3ca8) = *(undefined4 *)(param_1 + 0x3900);
          uVar7 = recovered_10005850();
          *(int *)(param_1 + 0x3cac) = (int)uVar7;
          uVar7 = recovered_10005850();
          *(int *)(param_1 + 0x3cb0) = (int)uVar7;
          uVar7 = recovered_10005850();
          *(int *)(param_1 + 0x3cb4) = (int)uVar7;
          uVar7 = recovered_10005850();
          *(int *)(param_1 + 0x3cb8) = (int)uVar7;
          snprintf((char *)auStack_110,0x60,str_1000951a,*(uint *)param_1,&DAT_10008fec);
          uVar7 = recovered_10002704(auStack_110);
          *(char *)(param_1 + 0x3cbc) = (char)uVar7;
          recovered_100058e4(param_1,&DAT_10008f5b,(undefined1 *)(param_1 + 0x3cc4),0xf0);
          bVar1 = false;
          if (*(int *)(param_1 + 0x3cb4) != 0) goto LAB_10003188;
          goto LAB_10003430;
        }
      }
    }
  }
LAB_10002cc0:
  uVar3 = 1;
LAB_10003210:
  *(uint *)(param_1 + 0x448) = uVar3;
  (void)__atomic_exchange_n(&(*(undefined4 *)(param_1 + 0x444)),1,__ATOMIC_ACQ_REL);
  return *(int *)(param_1 + 0x448) == 0;
}

#undef DAT_10008c9a
#undef DAT_10008cf0
#undef DAT_10008f5b
#undef DAT_10008fec
#undef DAT_10009088
#undef DAT_10009101
#undef DAT_1000931f
#undef DAT_10010108
#undef str_10008cf5
#undef str_10008d83
#undef str_10008d8b
#undef str_10008da4
#undef str_10008def
#undef str_10008e07
#undef str_10008e2f
#undef str_10008e56
#undef str_10008e83
#undef str_10008eaf
#undef str_10008f0b
#undef str_10008f60
#undef str_10008f92
#undef str_10008fa7
#undef str_10008ff1
#undef str_10009028
#undef str_10009031
#undef str_10009050
#undef str_1000908d
#undef str_100090a4
#undef str_100090d4
#undef str_100090ec
#undef str_1000910f
#undef str_10009120
#undef str_10009160
#undef str_10009185
#undef str_1000918f
#undef str_100091c2
#undef str_100092f7
#undef str_10009322
#undef str_10009355
#undef str_10009380
#undef str_1000939f
#undef str_100093d6
#undef str_1000951a
#undef in_stack_fffffffffffffc60
#undef aiStack_370
#undef acStack_170
#undef auStack_110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000357c
 */

void recovered_1000357c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = *(uint *)(param_1 + 0x42c);
  uVar3 = recovered_10003aec(param_1);
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x42c) = uVar3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ac
 */

void recovered_100035ac(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint128 auVar12;
  uint128 auVar13;
  uint128 auVar14;
  uint128 auVar15;

  auVar12 = recovered_100059f8(param_1);
  uVar7 = PF_PART8(auVar12, 0);
  auVar13 = recovered_10007b50(param_1);
  uVar1 = terror_ui_colour(0xb);
  auVar14 = recovered_10007c04(param_1);
  uVar5 = PF_PART8(auVar14, 0);
  auVar15 = recovered_10005a3c(param_1);
  if ((*(byte *)(param_1 + 0x355) & 1) == 0) {
    uVar3 = PF_PART4(auVar12, 4);
    uVar2 = uVar3;
    if ((int)PF_PART4(auVar14, 4) <= (int)uVar3) {
      uVar2 = PF_PART4(auVar14, 4);
    }
    iVar8 = PF_PART4(auVar15, 4) + PF_PART4(auVar15, 12);
    iVar6 = uVar3 + PF_PART4(auVar12, 12);
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x358),(void *)param_1,
                       uVar7 & 0xffffffff | (ulong)uVar2 << 0x20,
                       (ulong)(iVar8 - uVar2) << 0x20 | 0xc);
  }
  uVar2 = recovered_10007c38(*(uint *)(param_1 + 0x350));
  uVar9 = (ulong)uVar2;
  uVar11 = PF_PART8(auVar12, 8) & 0xffffffff00000000;
  uVar3 = terror_ui_colour(5);
  recovered_10007c78(param_1,uVar7,uVar11 | uVar9,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff);
  uVar3 = terror_ui_colour(8);
  recovered_10007d7c(param_1,uVar7,uVar11 | uVar9,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff);
  if (0 < PF_PART4(auVar13, 12)) {
    iVar8 = PF_PART4(auVar13, 0);
    iVar6 = PF_PART4(auVar13, 4);
    if (2 < uVar2) {
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 1;
    }
    uVar3 = terror_ui_colour(6);
    recovered_10007c78(param_1,CONCAT44(iVar6,iVar8),
                       CONCAT44(PF_PART4(auVar13, 12) + (uint)(2 < uVar2) * -2,
                                uVar2 + (uint)(2 < uVar2) * -2),
                       uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff);
    uVar3 = terror_ui_colour(9);
    recovered_10007d7c(param_1,PF_PART8(auVar13, 0),PF_PART8(auVar13, 8) & 0xffffffff00000000 | uVar9,
                       uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff);
  }
  uVar3 = uVar1 >> 0x10 & 0xff;
  uVar11 = PF_PART8(auVar14, 8) & 0xffffffff00000000;
  uVar7 = PF_PART8(auVar15, 8) & 0xffffffff00000000;
  uVar4 = terror_ui_colour(7);
  recovered_10007c78(param_1,uVar5,uVar11 | uVar9,
                     uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff);
  uVar4 = terror_ui_colour(10);
  recovered_10007d7c(param_1,uVar5,uVar11 | uVar9,
                     uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff);
  recovered_10007e20(param_1,uVar5,uVar11 | uVar9,1,
                     uVar1 & 0xff00 | uVar1 << 0x10 & 0xffffff | uVar3);
  uVar4 = terror_ui_colour(7);
  recovered_10007c78(param_1,PF_PART8(auVar15, 0),uVar7 | uVar9,
                     uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff);
  uVar4 = terror_ui_colour(10);
  recovered_10007d7c(param_1,PF_PART8(auVar15, 0),uVar7 | uVar9,
                     uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff);
  uVar4 = (int)(uVar2 + 1) / 2;
  if (3 < (int)uVar4) {
    uVar4 = 4;
  }
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  iVar8 = PF_PART4(auVar15, 4) + -2 + PF_PART4(auVar15, 12) / 2;
  for (lVar10 = -(ulong)uVar4; lVar10 != 0; lVar10 = lVar10 + 1) {
    uVar4 = uVar4 - 1;
    recovered_10007c78(param_1,CONCAT44(iVar8,((int)uVar2 / 2 + PF_PART4(auVar15, 0)) - uVar4),
                       (ulong)(uVar4 * 2) | 0x100000001,
                       uVar1 & 0xff00 | uVar1 << 0x10 & 0xffffff | uVar3);
    iVar8 = iVar8 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003800
 */

void recovered_10003800(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10003b58(0x9c);
  if ((bVar2) && (uVar1 = UINT_8201089c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)();
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003830
 */

bool recovered_10003830(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    do {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == 0 && bVar3 == 0;
      }
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 == bVar2);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003890
 */

undefined8 recovered_10003890(long *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;

  uVar2 = 0;
  if (((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 - 1 < param_4)) {
    uVar4 = *param_2;
    if ((*param_1 == 0) || (uVar4 < param_3)) {
      uVar5 = 0x40;
      if (uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar4 = param_3;
      if (uVar5 <= param_4) {
        uVar4 = uVar5;
      }
      while (uVar4 < param_3) {
        uVar5 = uVar4 << 1;
        bVar1 = uVar4 <= param_4 >> 1;
        uVar4 = param_3;
        if (bVar1) {
          uVar4 = uVar5;
        }
      }
      puVar3 = (undefined1 *)recovered_10003b18(*param_1,uVar4);
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      if (*param_1 == 0) {
        *puVar3 = 0;
      }
      *param_1 = (long)puVar3;
      *param_2 = uVar4;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

undefined8 recovered_10003930(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;

  if ((param_1 == 0) ||
     (uVar5 = recovered_10003890((long *)(param_1 + 0x450),(ulong *)(param_1 + 0x458),param_2,
                                 0xffffffffffffffff), (int)uVar5 == 0)) {
    return 0;
  }
  if (param_2 < 0x1001) {
    param_2 = 0x1000;
  }
  if (0xfffffffe < param_2) {
    param_2 = 0xffffffff;
  }
  plVar2 = (long *)(param_1 + 0x460);
  puVar3 = (ulong *)(param_1 + 0x468);
  uVar5 = 0;
  if (((plVar2 != (long *)0x0) && (puVar3 != (ulong *)0x0)) && (param_2 - 1 < 0xffffffff)) {
    uVar6 = *puVar3;
    if ((*plVar2 == 0) || (uVar6 < param_2)) {
      uVar7 = 0x40;
      if (uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar6 = param_2;
      if (uVar7 < 0x100000000) {
        uVar6 = uVar7;
      }
      while (uVar6 < param_2) {
        uVar7 = uVar6 << 1;
        bVar1 = uVar6 < 0x80000000;
        uVar6 = param_2;
        if (bVar1) {
          uVar6 = uVar7;
        }
      }
      puVar4 = (undefined1 *)recovered_10003b18(*plVar2,uVar6);
      if (puVar4 == (undefined1 *)0x0) {
        return 0;
      }
      if (*plVar2 == 0) {
        *puVar4 = 0;
      }
      *plVar2 = (long)puVar4;
      *puVar3 = uVar6;
    }
    uVar5 = 1;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003998
 */

undefined8 recovered_10003998(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;

  if (param_1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x3f4);
  if (iVar4 == 0x7fffffff) {
LAB_100039b8:
    uVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3f0);
    if ((int)uVar3 <= iVar4) {
      uVar1 = 0x10;
      if (uVar3 != 0) {
        uVar1 = uVar3;
      }
      uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      if (uVar1 >> 0x1e != 0) {
        uVar7 = 0x7fffffff;
      }
      uVar2 = 0x10;
      if (uVar3 != 0) {
        uVar2 = uVar7;
      }
      if (uVar2 <= (ulong)(long)iVar4 || uVar2 >> 0x1f != 0) goto LAB_100039b8;
      lVar6 = recovered_10003b18(*(undefined8 *)(param_1 + 0x390),uVar2 << 4);
      if (lVar6 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0x390) = lVar6;
      *(int *)(param_1 + 0x3f0) = (int)uVar2;
    }
    uVar5 = 1;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a2c
 */

void recovered_10003a2c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003a74(*(undefined8 *)(param_1 + 0x3d8));
  recovered_10003a74(*(undefined8 *)(param_1 + 0x450));
  recovered_10003a74(*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  return;
}


#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a74
 */

void recovered_10003a74(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10003b58(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#define uStack_40 (*(ulong *)(pf_stack_frame + 16))
#define pbStack_38 (*(byte * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab4
 */

/* WARNING: Removing unreachable block (ram,0x10003ce4) */

undefined8 recovered_10003ab4(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;

  pbVar1 = &DAT_10008ada;
  if (param_2 != (byte *)0x0) {
    pbVar1 = param_2;
  }
  uVar4 = strlen((char *)pbVar1);
  if (param_1 == 0) {
    return 0;
  }
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x3a0) == -1 || -*(long *)(param_1 + 0x3a0) - 2U < uVar4) {
    return 0;
  }
  uStack_40 = 0;
  pbStack_38 = pbVar1;
  uVar5 = recovered_10003d98(param_1,(ulong *)&pbStack_38,&uStack_40);
  if ((int)uVar5 == 0) {
    return 0;
  }
  uVar5 = recovered_10003998(param_1);
  if ((int)uVar5 != 0) {
    uVar5 = recovered_10003890((long *)(param_1 + 0x398),(ulong *)(param_1 + 0x3a8),
                               uVar4 + *(long *)(param_1 + 0x3a0) + 1,0xffffffffffffffff);
    if ((int)uVar5 != 0) {
      lVar6 = 0;
      iVar3 = *(int *)(param_1 + 0x3f4);
      lVar7 = *(long *)(param_1 + 0x3a0);
      pbVar1 = pbStack_38;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        bVar8 = *pbVar1;
        if (bVar8 < 0x21) {
          bVar8 = 0x20;
        }
        *(byte *)(*(long *)(param_1 + 0x398) + lVar7 + lVar6) = bVar8;
        lVar6 = lVar6 + 1;
        pbVar1 = pbVar1 + 1;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x398) + lVar6 + lVar7) = 0;
      plVar2 = (long *)(*(long *)(param_1 + 0x390) + (long)iVar3 * 0x10);
      *plVar2 = lVar7;
      plVar2[1] = lVar6;
      *(long *)(param_1 + 0x3a0) = lVar6 + lVar7 + 1;
      *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      *(undefined4 *)(param_1 + 0x428) = 0;
      if (iVar3 < *(int *)(param_1 + 0x408)) {
        *(int *)(param_1 + 0x408) = iVar3;
      }
      if (*(int *)(param_1 + 0x410) == iVar3) {
        *(undefined4 *)(param_1 + 0x410) = 0xffffffff;
      }
      uVar5 = 1;
      goto LAB_10003d78;
    }
  }
  uVar5 = 0;
LAB_10003d78:
  recovered_10003a74(uStack_40);
  return uVar5;
}

#undef DAT_10008ada
#undef uStack_40
#undef pbStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aec
 */

uint recovered_10003aec(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;

  uVar3 = recovered_10003e70(param_1);
  iVar2 = recovered_10003f20(param_1);
  uVar1 = (int)uVar3 - iVar2;
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b18
 */

undefined8 recovered_10003b18(void *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10003b58(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return pvVar3;
  }
  return 0;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b58
 */

bool recovered_10003b58(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba0
 */

undefined8 recovered_10003ba0(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2,0x80000001,(uint)param_3,param_4);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef PTR_FUN_10010010
#define PTR_FUN_10010010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c0c
 */

void recovered_10003c0c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    recovered_10003a74(*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10010010)(param_1,0,0x18);
  return;
}

#undef PTR_FUN_10010010

#define local_38 (*(byte * *)(pf_stack_frame + 24))
#define uStack_40 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c44
 */

undefined8 recovered_10003c44(long param_1,byte *param_2,ulong param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x3a0) == -1 || -*(long *)(param_1 + 0x3a0) - 2U < param_3) {
    return 0;
  }
  uStack_40 = 0;
  local_38 = param_2;
  uVar4 = recovered_10003d98(param_1,(ulong *)&local_38,&uStack_40);
  if ((int)uVar4 == 0) {
    return 0;
  }
  uVar4 = recovered_10003998(param_1);
  if ((int)uVar4 != 0) {
    uVar4 = recovered_10003890((long *)(param_1 + 0x398),(ulong *)(param_1 + 0x3a8),
                               param_3 + *(long *)(param_1 + 0x3a0) + 1,0xffffffffffffffff);
    if ((int)uVar4 != 0) {
      lVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x3f4);
      lVar6 = *(long *)(param_1 + 0x3a0);
      pbVar1 = local_38;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        bVar7 = *pbVar1;
        if ((param_4 == 0) || (bVar7 != 0xd)) {
          if (bVar7 < 0x21) {
            bVar7 = 0x20;
          }
          *(byte *)(*(long *)(param_1 + 0x398) + lVar6 + lVar5) = bVar7;
          lVar5 = lVar5 + 1;
        }
        pbVar1 = pbVar1 + 1;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x398) + lVar5 + lVar6) = 0;
      plVar2 = (long *)(*(long *)(param_1 + 0x390) + (long)iVar3 * 0x10);
      *plVar2 = lVar6;
      plVar2[1] = lVar5;
      *(long *)(param_1 + 0x3a0) = lVar5 + lVar6 + 1;
      *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      *(undefined4 *)(param_1 + 0x428) = 0;
      if (iVar3 < *(int *)(param_1 + 0x408)) {
        *(int *)(param_1 + 0x408) = iVar3;
      }
      if (*(int *)(param_1 + 0x410) == iVar3) {
        *(undefined4 *)(param_1 + 0x410) = 0xffffffff;
      }
      uVar4 = 1;
      goto LAB_10003d78;
    }
  }
  uVar4 = 0;
LAB_10003d78:
  recovered_10003a74(uStack_40);
  return uVar4;
}

#undef local_38
#undef uStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d98
 */

undefined8 recovered_10003d98(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  ulong uVar1;
  void *dst;
  undefined8 uVar2;
  char *pcVar3;

  *param_3 = 0;
  text = (char *)*param_2;
  pcVar3 = *(char **)(param_1 + 0x398);
  if ((pcVar3 == (char *)0x0 || text < pcVar3) ||
     (*(ulong *)(param_1 + 0x3a0) <= (ulong)((long)text - (long)pcVar3))) {
    return 1;
  }
  uVar1 = strlen(text);
  if (uVar1 == 0xffffffffffffffff) {
    uVar2 = 0;
  }
  else {
    dst = (void *)recovered_10003e28(uVar1 + 1);
    *param_3 = (ulong)dst;
    uVar2 = 0;
    if (dst != (void *)0x0) {
      memcpy(dst,(void *)*param_2,uVar1 + 1);
      *param_2 = *param_3;
      uVar2 = 1;
    }
  }
  return uVar2;
}


#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e28
 */

undefined8 recovered_10003e28(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10003b58(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return 0;
}

#undef UINT_8201084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

ulong recovered_10003e70(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;

  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = recovered_10003f60(param_1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      uVar1 = *(uint *)(param_1 + 0x3f4);
      lVar6 = 8;
      for (uVar5 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar5; uVar5 = uVar5 + 1) {
        pcVar4 = recovered_10004118(param_1,(uint)uVar5);
        iVar2 = recovered_10004080(param_1,pcVar4,*(ulong *)(*(long *)(param_1 + 0x390) + lVar6));
        if ((int)((uint)uVar3 ^ 0x7fffffff) < iVar2) {
          return 0x7fffffff;
        }
        uVar3 = (ulong)(iVar2 + (uint)uVar3);
        lVar6 = lVar6 + 0x10;
      }
    }
    else {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x3f8) + (long)*(int *)(param_1 + 0x3f4) * 8);
      if (0x7ffffffe < uVar3) {
        uVar3 = 0x7fffffff;
      }
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

int recovered_10003f20(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_1000419c(param_1);
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x3d4), iVar2 < 1)) {
    iVar2 = 10;
  }
  iVar1 = 0;
  if (iVar2 + 2 != 0) {
    iVar1 = PF_PART4(auVar3, 12) / (iVar2 + 2);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f60
 */

undefined8 recovered_10003f60(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;

  if (*(long *)(param_1 + 0x390) == 0) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x3f4);
  uVar11 = (long)iVar10 + 1;
  if (uVar11 >> 0x3d == 0) {
    uVar8 = *(ulong *)(param_1 + 0x400);
    if (uVar8 < uVar11) {
      uVar1 = 0x10;
      if (uVar8 != 0) {
        uVar1 = uVar8;
      }
      do {
        uVar8 = uVar1;
        uVar1 = uVar8 << 1;
      } while (uVar8 < uVar11);
      lVar5 = recovered_10003b18(*(undefined8 *)(param_1 + 0x3f8),uVar8 << 3);
      if (lVar5 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0x3f8) = lVar5;
      *(ulong *)(param_1 + 0x400) = uVar8;
      iVar10 = *(int *)(param_1 + 0x3f4);
    }
    iVar3 = recovered_10004160(param_1);
    if ((iVar3 != *(int *)(param_1 + 0x40c)) || (iVar7 = *(int *)(param_1 + 0x408), iVar10 < iVar7))
    {
      iVar7 = 0;
      *(undefined4 *)(param_1 + 0x408) = 0;
      *(int *)(param_1 + 0x40c) = iVar3;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x3f8);
    *puVar9 = 0;
    lVar5 = (long)iVar7;
    uVar11 = lVar5 << 4 | 8;
    plVar2 = puVar9 + iVar7;
    for (; lVar5 < iVar10; lVar5 = lVar5 + 1) {
      lVar12 = *plVar2;
      pcVar6 = recovered_10004118(param_1,(uint)lVar5);
      iVar3 = recovered_10004080(param_1,pcVar6,*(ulong *)(*(long *)(param_1 + 0x390) + uVar11));
      plVar2[1] = lVar12 + iVar3;
      uVar11 = uVar11 + 0x10;
      plVar2 = plVar2 + 1;
    }
    *(int *)(param_1 + 0x408) = iVar10;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

int recovered_10004080(long param_1,char *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong start;
  int iVar3;

  uVar1 = recovered_10004160(param_1);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    for (start = 0; start < param_3; start = recovered_1000441c(param_2,param_3,start,(int)uVar2)) {
      uVar2 = recovered_10004368((long)param_2,param_3,start,(ulong)uVar1);
      if ((int)uVar2 < 1) break;
      if (iVar3 == 0x7fffffff) {
        return 0x7fffffff;
      }
      iVar3 = iVar3 + 1;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
  }
  return iVar3;
}


#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004118
 */

undefined1 * recovered_10004118(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == 0) || ((int)param_2 < 0)) || (*(long *)(param_1 + 0x390) == 0)) ||
     (*(int *)(param_1 + 0x3f4) <= (int)param_2)) {
    return &DAT_10008ada;
  }
  return (undefined1 *)
         (*(long *)(param_1 + 0x398) + *(long *)(*(long *)(param_1 + 0x390) + (ulong)param_2 * 0x10)
         );
}

#undef DAT_10008ada

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004160
 */

int recovered_10004160(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_1000419c(param_1);
  iVar2 = 6;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x3d0), iVar2 < 1)) {
    iVar2 = 6;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (PF_PART4(auVar3, 8) + -8) / iVar2;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


#undef DAT_100089d8
#define DAT_100089d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_100089e0
#define DAT_100089e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x330U)))
#undef DAT_10010108
#define DAT_10010108 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000419c
 */

uint128 recovered_1000419c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint128 auVar7;

  iVar4 = DAT_10010108;
  if ((param_1 == 0) || (iVar6 = *(int *)(param_1 + 0x3d4), iVar6 < 1)) {
    iVar6 = 10;
  }
  if (DAT_10010108 == 0) {
    uVar5 = 10;
  }
  else {
    iVar1 = recovered_100042d8(param_1);
    uVar5 = iVar1 + 10;
  }
  if (param_1 == 0) {
    uVar3 = DAT_100089d8;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 4);
    iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    uVar3 = CONCAT44(iVar2 + (int)((ulong)DAT_100089e0 >> 0x20),iVar1 + (int)DAT_100089e0);
    uVar3 = uVar3 ^ (uVar3 ^ DAT_100089d8) & CONCAT44(-(uint)(iVar2 == 0),-(uint)(iVar1 == 0));
  }
  iVar1 = (int)(uVar3 >> 0x20) - (iVar6 + uVar5);
  iVar6 = iVar1 + -0x14;
  if (iVar4 == 0) {
    iVar4 = (int)uVar3;
    uVar3 = 0x12;
  }
  else {
    iVar2 = recovered_10004334(param_1);
    uVar3 = (ulong)(iVar2 + 0xc);
    iVar4 = 0x2f8;
    if (param_1 != 0) {
      iVar4 = 0x2f8;
      if (*(int *)(param_1 + 4) != 0) {
        iVar4 = *(int *)(param_1 + 4);
      }
    }
    iVar4 = (iVar4 - iVar2) + -0x18;
  }
  if (param_1 == 0) {
    if (iVar4 < 0xf) {
      iVar4 = 0xe;
    }
LAB_100042a8:
    if (0x17 < iVar1 + -0xc) goto LAB_100042b8;
    iVar2 = 10;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3d0) + 8;
    if (*(int *)(param_1 + 0x3d0) < 1) {
      iVar2 = 0xe;
    }
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x3d4);
    if (iVar2 < 1) goto LAB_100042a8;
    if (iVar2 + 6 <= iVar6) goto LAB_100042b8;
  }
  iVar6 = iVar2 + 6;
LAB_100042b8:
  PF_PART8(auVar7, 0) = uVar3 | (ulong)uVar5 << 0x20;
  PF_PART4(auVar7, 12) = iVar6;
  PF_PART4(auVar7, 8) = iVar4;
  return auVar7;
}

#undef DAT_100089d8
#undef DAT_100089e0
#undef DAT_10010108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d8
 */

int recovered_100042d8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x3d4), iVar2 < 1)) {
    iVar2 = 10;
  }
  iVar1 = recovered_10004334(param_1);
  if (iVar1 == 0) {
    if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x3d4), iVar1 < 1)) {
      iVar1 = 10;
    }
    iVar1 = iVar1 + 0x42;
  }
  else {
    iVar1 = 0x24;
  }
  return iVar1 + iVar2 * 2 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004334
 */

undefined4 recovered_10004334(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == 0) {
    return 0xd8;
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = 0xa4;
  if (699 < uVar2) {
    uVar3 = 0xd8;
  }
  uVar1 = 0;
  if (0x207 < (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0xd8;
  if (uVar2 != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

ulong recovered_10004368(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_1 == 0) {
    return 0;
  }
  uVar4 = param_2 - param_3;
  if ((param_2 < param_3 || uVar4 == 0) || (int)param_4 < 1) {
    return 0;
  }
  if ((param_4 & 0xffffffff) < uVar4) {
    lVar1 = param_1 + param_3;
    uVar5 = 0xffffffff;
    for (uVar6 = 0;
        ((param_4 & 0xffffffff) != uVar6 && (cVar3 = *(char *)(lVar1 + uVar6), cVar3 != '\0'));
        uVar6 = uVar6 + 1) {
      uVar2 = (uint)uVar6;
      if (cVar3 != '\t' && cVar3 != ' ') {
        uVar2 = (uint)uVar5;
      }
      uVar5 = (ulong)uVar2;
    }
    if (0 < (int)(uint)uVar5) {
      return uVar5;
    }
    for (; 0 < (int)param_4; param_4 = (ulong)((int)param_4 - 1)) {
      if ((*(byte *)(lVar1 + (param_4 & 0xffffffff)) & 0xc0) != 0x80) {
        return param_4;
      }
    }
    for (uVar6 = 1; uVar6 < uVar4; uVar6 = uVar6 + 1) {
      if ((*(byte *)(lVar1 + uVar6) & 0xc0) != 0x80) {
        return uVar6;
      }
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000441c
 */

ulong recovered_1000441c(char *text,ulong size,ulong start,int length)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = start + (long)length;
      ((text != (char *)0x0 && (uVar1 < size)) && (text[uVar1] == ' ' || text[uVar1] == '\t'));
      uVar1 = uVar1 + 1) {
  }
  return uVar1;
}


#undef DAT_1001010c
#define DAT_1001010c (*(uint *)(((uintptr_t)pf_module_state + 0x7a5cU)))
#undef str_10008b9f
#define str_10008b9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_10008bdb
#define str_10008bdb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#undef str_10008c07
#define str_10008c07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x557U)))
#undef str_10008c40
#define str_10008c40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x590U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000444c
 */

undefined8 recovered_1000444c(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  char *arg2;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined4 *dst;
  long lVar8;

  uVar7 = 0;
  if (param_2 != (byte *)0x0) {
    if (*param_2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar4 = strlen((char *)param_2);
      if ((uVar4 < 0xea) &&
         ((((*param_2 == 0x24 || (uVar4 < 0xde)) || (*(int *)(param_1 + 0x3e30) == 0)) ||
          (DAT_1001010c >> 0x1e != 0)))) {
        arg2 = str_10008bdb;
        pbVar6 = param_2;
        do {
          bVar3 = *pbVar6;
          if (bVar3 == 0) {
            uVar5 = *(uint *)(param_1 + 0x38f4);
            if (uVar5 == 0x20) {
LAB_10004500:
              uVar7 = 0;
              arg2 = str_10008c07;
            }
            else {
              if (*param_2 != 0x24) {
                uVar7 = recovered_10004d4c(param_1);
                if ((int)uVar7 == 0) goto LAB_10004500;
                uVar5 = *(uint *)(param_1 + 0x38f4);
              }
              lVar8 = param_1 + (ulong)uVar5 * 0x168;
              *(uint *)(param_1 + 0x38f4) = uVar5 + 1;
              memset((void *)(lVar8 + 0xa8c),0,0x168);
              *(undefined4 *)(lVar8 + 0xa8c) = 1;
              iVar1 = *(int *)(param_1 + 0x38f8) + 1;
              *(int *)(param_1 + 0x38f8) = iVar1;
              *(int *)(lVar8 + 0xa90) = iVar1;
              *(uint *)(lVar8 + 0xa94) = DAT_1001010c;
              *(undefined4 *)(lVar8 + 0xa98) = *(undefined4 *)(param_1 + 0x610);
              *(undefined4 *)(lVar8 + 0xa9c) = *(undefined4 *)(param_1 + 0x3e30);
              memcpy((void *)(lVar8 + 0xaa1),param_2,uVar4 + 1);
              if (*param_2 != 0x24) {
                uVar5 = *(uint *)(param_1 + 0x3db4);
                *(uint *)(param_1 + 0x3db4) = uVar5 + 1;
                dst = (undefined4 *)(*(long *)(param_1 + 0x3ca0) + (ulong)uVar5 * 0x10c);
                memset(dst,0,0x10c);
                uVar2 = *(undefined4 *)(lVar8 + 0xa98);
                *dst = *(undefined4 *)(lVar8 + 0xa94);
                dst[4] = uVar2;
                iVar1 = *(int *)(lVar8 + 0xa9c);
                if (iVar1 == 0) {
                  iVar1 = -1;
                }
                dst[2] = iVar1;
                *(undefined2 *)(dst + 5) = 0x101;
                dst[6] = *(undefined4 *)(lVar8 + 0xa90);
                memcpy(dst + 7,param_2,uVar4 + 1);
              }
              *(undefined4 *)(param_1 + 0x618) = 0;
              *(undefined1 *)(param_1 + 0x3920) = 0;
              uVar7 = 1;
              arg2 = str_10008c40;
            }
            goto LAB_100045f4;
          }
          pbVar6 = pbVar6 + 1;
        } while (0x1f < bVar3);
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        arg2 = str_10008b9f;
      }
LAB_100045f4:
      snprintf((char *)(param_1 + 0x470),0x80,arg2);
    }
  }
  return uVar7;
}

#undef DAT_1001010c
#undef str_10008b9f
#undef str_10008bdb
#undef str_10008c07
#undef str_10008c40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004608
 */

bool recovered_10004608(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(param_1 + 0x42c);
  uVar2 = recovered_10003aec(param_1);
  return (int)uVar2 <= iVar1;
}


#undef UNK_82010a44
#define UNK_82010a44 (*(uint *)(0x82010a44U))
#undef uRam0000000082010a44
#define uRam0000000082010a44 (*(uint32_t *)(0x82010a44U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000462c
 */

undefined8 recovered_1000462c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003b58(0x244);
  if ((bVar1) && (uRam0000000082010a44 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000082010a44)();
    return uVar2;
  }
  return 0;
}

#undef UNK_82010a44
#undef uRam0000000082010a44

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
#undef DAT_10008cd9
#define DAT_10008cd9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x629U)))
#undef DAT_10008cde
#define DAT_10008cde (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62eU)))
#undef DAT_10010108
#define DAT_10010108 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
#undef str_10008a41
#define str_10008a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_10008b07
#define str_10008b07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10008c9d
#define str_10008c9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5edU)))
#undef str_10008cb3
#define str_10008cb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x603U)))
#undef str_10008cc5
#define str_10008cc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_10008ce1
#define str_10008ce1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x631U)))
#define auStack_1c0 (*(undefined1 (*)[448])(pf_stack_frame + 32))
#define acStack_c0 (*(char (*)[192])(pf_stack_frame + 288))
#define in_stack_fffffffffffffe38 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004660
 */

void recovered_10004660(long param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *arg2;
  char *pcVar2;

  if (param_1 == 0) {
    return;
  }
  if (DAT_10010108 == 0) {
    uVar1 = recovered_1000462c();
    if ((uVar1 & 1) != 0) {
      if (((uint)uVar1 >> 1 & 1) != 0) {
        if (param_3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = strlen((char *)param_3);
        }
        if (param_2 <= uVar1) {
          uVar1 = param_2 - 1;
        }
        memset((void *)param_1,0x2a,uVar1);
        *(undefined1 *)(param_1 + uVar1) = 0;
        return;
      }
      pcVar2 = &DAT_10008ada;
      if (param_3 != 0) {
        pcVar2 = (char *)param_3;
      }
      arg2 = &DAT_10008c9a;
      goto LAB_10004768;
    }
    if (DAT_10010108 != 0) goto LAB_10004694;
    uVar1 = recovered_10002704(str_10008b07);
    pcVar2 = (char *)((uintptr_t)pf_module_state + 0x63dU);
    if ((int)uVar1 != 0) {
      pcVar2 = str_10008ce1;
    }
  }
  else {
LAB_10004694:
    pcVar2 = &DAT_10008cde;
  }
  snprintf(acStack_c0,0x80,&DAT_10008c9a,pcVar2);
  if ((DAT_10010108 == 0) && (uVar1 = recovered_10002704(str_10008a41), (int)uVar1 != 0)) {
    recovered_10004df8(str_10008c9d,acStack_c0,0x80,str_10008cb3);
    in_stack_fffffffffffffe38 = auStack_1c0;
    recovered_10004df8(str_10008cc5,auStack_1c0,0x100,&DAT_10008ada);
  }
  else {
    in_stack_fffffffffffffe38 = &DAT_10008ada;
    if (param_3 != 0) {
      in_stack_fffffffffffffe38 = (undefined1 *)param_3;
    }
  }
  pcVar2 = acStack_c0;
  arg2 = &DAT_10008cd9;
LAB_10004768:
  snprintf((char *)param_1,param_2,arg2,pcVar2,in_stack_fffffffffffffe38);
  return;
}

#undef DAT_10008ada
#undef DAT_10008c9a
#undef DAT_10008cd9
#undef DAT_10008cde
#undef DAT_10010108
#undef str_10008a41
#undef str_10008b07
#undef str_10008c9d
#undef str_10008cb3
#undef str_10008cc5
#undef str_10008ce1
#undef auStack_1c0
#undef acStack_c0
#undef in_stack_fffffffffffffe38

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

void recovered_100047e0(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;

  if (((param_1 != 0) && (param_2 != (byte *)0x0)) && (*(long *)(param_1 + 0x390) != 0)) {
    uStack_70 = 0;
    local_68 = param_2;
    uVar4 = recovered_10003d98(param_1,(ulong *)&local_68,&uStack_70);
    if ((int)uVar4 != 0) {
      pbVar5 = local_68;
      do {
        bVar6 = *pbVar5;
        if (bVar6 == 8) {
          if ((*(int *)(param_1 + 0x428) != 0) && (0 < (int)*(uint *)(param_1 + 0x3f4))) {
            lVar1 = *(long *)(param_1 + 0x390) + (ulong)*(uint *)(param_1 + 0x3f4) * 0x10;
            lVar7 = *(long *)(lVar1 + -8);
            if (lVar7 != 0) {
              lVar2 = *(long *)(param_1 + 0x398) + *(long *)(lVar1 + -0x10);
              do {
                lVar7 = lVar7 + -1;
                if (lVar7 == 0) break;
              } while ((*(byte *)(lVar2 + lVar7) & 0xc0) == 0x80);
              *(undefined1 *)(lVar2 + lVar7) = 0;
              *(long *)(lVar1 + -8) = lVar7;
              lVar7 = *(long *)(lVar1 + -0x10) + lVar7;
              goto LAB_1000494c;
            }
          }
        }
        else if (bVar6 == 10) {
          if ((*(int *)(param_1 + 0x428) == 0) &&
             (uVar4 = recovered_10003ab4(param_1,&DAT_10008ada), (int)uVar4 == 0))
          goto LAB_10004984;
          *(undefined4 *)(param_1 + 0x428) = 0;
        }
        else if (bVar6 != 0xd) {
          if (bVar6 == 0) {
LAB_10004984:
            recovered_10003a74(uStack_70);
            return;
          }
          if (bVar6 < 0x21) {
            bVar6 = 0x20;
          }
          if (*(int *)(param_1 + 0x428) == 0) {
            uVar4 = recovered_10003ab4(param_1,&DAT_10008ada);
            if ((int)uVar4 == 0) goto LAB_10004984;
            *(undefined4 *)(param_1 + 0x428) = 1;
          }
          if (*(long *)(param_1 + 0x3a0) == -1) goto LAB_10004984;
          lVar7 = *(long *)(param_1 + 0x390);
          iVar3 = *(int *)(param_1 + 0x3f4);
          uVar4 = recovered_10003890((long *)(param_1 + 0x398),(ulong *)(param_1 + 0x3a8),
                                     *(long *)(param_1 + 0x3a0) + 1,0xffffffffffffffff);
          if ((int)uVar4 == 0) goto LAB_10004984;
          lVar7 = lVar7 + (long)iVar3 * 0x10;
          lVar2 = *(long *)(lVar7 + -8);
          lVar1 = *(long *)(param_1 + 0x398) + *(long *)(lVar7 + -0x10);
          *(long *)(lVar7 + -8) = lVar2 + 1;
          *(byte *)(lVar1 + lVar2) = bVar6;
          *(undefined1 *)(lVar1 + *(long *)(lVar7 + -8)) = 0;
          lVar7 = *(long *)(lVar7 + -0x10) + *(long *)(lVar7 + -8);
LAB_1000494c:
          *(long *)(param_1 + 0x3a0) = lVar7 + 1;
          iVar3 = *(int *)(param_1 + 0x3f4) + -1;
          if (*(int *)(param_1 + 0x3f4) <= *(int *)(param_1 + 0x408)) {
            *(int *)(param_1 + 0x408) = iVar3;
          }
          if (*(int *)(param_1 + 0x410) == iVar3) {
            *(undefined4 *)(param_1 + 0x410) = 0xffffffff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while( true );
    }
  }
  return;
}

#undef DAT_10008ada
#undef local_68
#undef uStack_70

#undef DAT_10008d13
#define DAT_10008d13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef _DAT_82010a20
#define _DAT_82010a20 (*(uint *)(0x82010a20U))
#undef str_10008d0a
#define str_10008d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65aU)))
#define acStack_130 (*(char (*)[304])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100049ac(char *param_1)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;

  if (param_1 == (char *)0x0) {
    return false;
  }
  bVar4 = recovered_10004af8(param_1,(byte *)str_10008d0a);
  if (bVar4) {
    return true;
  }
  pcVar3 = acStack_130;
  if (param_1 == (char *)0x0) {
    return false;
  }
  uVar5 = strlen(param_1);
  if (((uVar5 == 0) || (param_1[uVar5 - 1] != '>')) || (*param_1 != '[')) goto LAB_10004c0c;
  uVar6 = 0;
  for (lVar7 = 1; (cVar1 = param_1[lVar7], cVar1 != '\0' && (cVar1 != ']')); lVar7 = lVar7 + 1) {
    if (uVar6 + 1 < 0x80) {
      acStack_130[uVar6] = cVar1;
      uVar6 = uVar6 + 1;
    }
  }
  acStack_130[uVar6] = '\0';
  if ((cVar1 == ']') && (lVar7 + 1U < 0x82)) {
    lVar7 = 0;
    if (acStack_130[0] == '[') {
      pcVar3 = acStack_130 + 1;
    }
    for (; ((cVar1 = pcVar3[lVar7], cVar1 != '\0' && (cVar1 != ']')) && (lVar7 != 0x7f));
        lVar7 = lVar7 + 1) {
      acStack_130[lVar7 + 0x80] = cVar1;
    }
    acStack_130[lVar7 + 0x80] = '\0';
    if (acStack_130[0] == '[') {
      if (cVar1 != ']') goto LAB_10004c08;
      cVar1 = acStack_130[lVar7 + 2];
    }
    if (cVar1 == '\0') {
      lVar7 = 0;
      uVar6 = 1;
      do {
        lVar10 = 0;
        while( true ) {
          bVar2 = acStack_130[lVar7 + 0x80];
          if (bVar2 == 0) {
            if (((lVar10 != 0) && (1 < uVar6)) &&
               ((bVar4 = recovered_10003b58(0x220), bVar4 && (_DAT_82010a20 != 0)))) {
              (*(code *)(ulong)_DAT_82010a20)(0xfffffffe,acStack_130 + 0x80,0x80);
            }
            goto LAB_10004c08;
          }
          if (lVar7 == 0x7f) goto LAB_10004c08;
          if (bVar2 == 0x5c) break;
          if (((9 < (byte)(bVar2 - 0x30U) && 0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (bVar2 != 0x5f)
              ) && (bVar2 != 0x2d)) goto LAB_10004c08;
          lVar10 = lVar10 + -1;
          lVar7 = lVar7 + 1;
        }
        if (lVar10 == 0) break;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (uVar6 < 7);
    }
  }
LAB_10004c08:
  uVar5 = uVar5 - 1;
LAB_10004c0c:
  uVar6 = strlen(&DAT_10008d13);
  if (uVar6 - 1 < uVar5) {
    lVar7 = -uVar6;
    pbVar11 = &DAT_10008d13;
    do {
      bVar4 = lVar7 == 0;
      if (lVar7 == 0) {
        return true;
      }
      bVar2 = param_1[lVar7 + uVar5];
      uVar8 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar8 = (uint)bVar2;
      }
      bVar2 = *pbVar11;
      uVar9 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar9 = (uint)bVar2;
      }
      lVar7 = lVar7 + 1;
      pbVar11 = pbVar11 + 1;
    } while (uVar8 == uVar9);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

#undef DAT_10008d13
#undef DAT_82010a20
#undef _DAT_82010a20
#undef str_10008d0a
#undef acStack_130

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f4
 */

undefined8 recovered_100049f4(char *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x90);
  if ((bVar1) && (uVar2 = UINT_82010890, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2);
    return (ulong)uVar2;
  }
  return 0;
}


#undef DAT_10008d13
#define DAT_10008d13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_10008d18
#define DAT_10008d18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x668U)))
#undef DAT_10008d1d
#define DAT_10008d1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66dU)))
#undef str_10008d0a
#define str_10008d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a40
 */

undefined4 recovered_10004a40(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;

  bVar1 = recovered_10004af8(param_1,(byte *)str_10008d0a);
  if (bVar1) {
    uVar2 = 5;
  }
  else {
    bVar1 = recovered_10004af8(param_1,&DAT_10008d13);
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      bVar1 = recovered_10004af8(param_1,&DAT_10008d18);
      if (bVar1) {
        uVar2 = 3;
      }
      else {
        bVar1 = recovered_10004af8(param_1,&DAT_10008d1d);
        uVar2 = 4;
        if (!bVar1) {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10008d13
#undef DAT_10008d18
#undef DAT_10008d1d
#undef str_10008d0a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab4
 */

uint recovered_10004ab4(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  do {
    if (param_1 == (byte *)0x0) {
      uVar1 = 0;
LAB_10004af0:
      return uVar1 & 1;
    }
    uVar2 = (ulong)*param_1;
    if ((uVar2 < 0x21) && ((0x100002601U >> (uVar2 & 0x3f) & 1) != 0)) {
      uVar1 = (uint)(0x100002600 >> (uVar2 & 0x3f));
      goto LAB_10004af0;
    }
    param_1 = param_1 + 1;
  } while( true );
}


#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef _DAT_82010a20
#define _DAT_82010a20 (*(uint *)(0x82010a20U))
#define acStack_130 (*(char (*)[304])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004af8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004af8(char *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;

  pcVar3 = acStack_130;
  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (byte *)0x0) {
    return false;
  }
  uVar5 = strlen(param_1);
  if (((uVar5 == 0) || (param_1[uVar5 - 1] != '>')) || (*param_1 != '[')) goto LAB_10004c0c;
  uVar6 = 0;
  for (lVar7 = 1; (cVar1 = param_1[lVar7], cVar1 != '\0' && (cVar1 != ']')); lVar7 = lVar7 + 1) {
    if (uVar6 + 1 < 0x80) {
      acStack_130[uVar6] = cVar1;
      uVar6 = uVar6 + 1;
    }
  }
  acStack_130[uVar6] = '\0';
  if ((cVar1 == ']') && (lVar7 + 1U < 0x82)) {
    lVar7 = 0;
    if (acStack_130[0] == '[') {
      pcVar3 = acStack_130 + 1;
    }
    for (; ((cVar1 = pcVar3[lVar7], cVar1 != '\0' && (cVar1 != ']')) && (lVar7 != 0x7f));
        lVar7 = lVar7 + 1) {
      acStack_130[lVar7 + 0x80] = cVar1;
    }
    acStack_130[lVar7 + 0x80] = '\0';
    if (acStack_130[0] == '[') {
      if (cVar1 != ']') goto LAB_10004c08;
      cVar1 = acStack_130[lVar7 + 2];
    }
    if (cVar1 == '\0') {
      lVar7 = 0;
      uVar6 = 1;
      do {
        lVar10 = 0;
        while( true ) {
          bVar2 = acStack_130[lVar7 + 0x80];
          if (bVar2 == 0) {
            if (((lVar10 != 0) && (1 < uVar6)) &&
               ((bVar4 = recovered_10003b58(0x220), bVar4 && (_DAT_82010a20 != 0)))) {
              (*(code *)(ulong)_DAT_82010a20)(0xfffffffe,acStack_130 + 0x80,0x80);
            }
            goto LAB_10004c08;
          }
          if (lVar7 == 0x7f) goto LAB_10004c08;
          if (bVar2 == 0x5c) break;
          if (((9 < (byte)(bVar2 - 0x30U) && 0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (bVar2 != 0x5f)
              ) && (bVar2 != 0x2d)) goto LAB_10004c08;
          lVar10 = lVar10 + -1;
          lVar7 = lVar7 + 1;
        }
        if (lVar10 == 0) break;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (uVar6 < 7);
    }
  }
LAB_10004c08:
  uVar5 = uVar5 - 1;
LAB_10004c0c:
  uVar6 = strlen((char *)param_2);
  if (uVar6 - 1 < uVar5) {
    lVar7 = -uVar6;
    do {
      bVar4 = lVar7 == 0;
      if (lVar7 == 0) {
        return true;
      }
      bVar2 = param_1[lVar7 + uVar5];
      uVar8 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar8 = (uint)bVar2;
      }
      bVar2 = *param_2;
      uVar9 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar9 = (uint)bVar2;
      }
      lVar7 = lVar7 + 1;
      param_2 = param_2 + 1;
    } while (uVar8 == uVar9);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

#undef DAT_82010a20
#undef _DAT_82010a20
#undef acStack_130

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d4c
 */

undefined8 recovered_10004d4c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;

  uVar2 = *(uint *)(param_1 + 0x3db8);
  if (*(uint *)(param_1 + 0x3db4) < uVar2) {
    return 1;
  }
  uVar3 = 0;
  uVar1 = 0x80;
  if (uVar2 != 0) {
    uVar1 = uVar2 << 1;
  }
  if (((uVar2 <= uVar1) && (uVar1 < 0x10001)) &&
     (lVar4 = recovered_10003b18(*(undefined8 *)(param_1 + 0x3ca0),(ulong)(uVar1 * 0x10c)),
     uVar3 = 0, lVar4 != 0)) {
    *(long *)(param_1 + 0x3ca0) = lVar4;
    *(uint *)(param_1 + 0x3db8) = uVar1;
    uVar3 = 1;
  }
  return uVar3;
}


#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004db8
 */

byte * recovered_10004db8(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (param_1 == (byte *)0x0) {
      return &DAT_10008ada;
    }
    if (0x20 < *param_1 || (1L << ((ulong)*param_1 & 0x3f) & 0x100002600U) == 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

#undef DAT_10008ada

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10008cf0
#define DAT_10008cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x640U)))
#undef str_10008cf5
#define str_10008cf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x645U)))
#define local_48 (*(long *)(pf_stack_frame + 56))
#define local_38 (*(undefined4 *)(pf_stack_frame + 72))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 64))
#define local_64 (*(byte (*)[100])(pf_stack_frame + 28))
#define local_58 (*(undefined8 *)(pf_stack_frame + 40))
#define local_50 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df8
 */

void recovered_10004df8(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;

  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_2 != (undefined1 *)0x0) {
    uVar6 = recovered_10004fb0(param_1,&local_58);
    iVar5 = (int)uVar6;
    if ((iVar5 == 0) || ((int)local_58 != 3 || local_48 == 0)) {
      if ((iVar5 == 0) || ((int)local_58 != 1)) {
        if ((iVar5 == 0) || ((int)local_58 != 5)) {
          lVar8 = 0;
          puVar2 = &DAT_10008ada;
          if (param_4 != (undefined1 *)0x0) {
            puVar2 = param_4;
          }
          for (; ((int)lVar8 + 1U < param_3 && (puVar2[lVar8] != '\0')); lVar8 = lVar8 + 1) {
            param_2[lVar8] = puVar2[lVar8];
          }
        }
        else {
          lVar8 = 0;
          pcVar1 = str_10008cf5;
          if (PF_PART4(local_58, 4) != 0) {
            pcVar1 = &DAT_10008cf0;
          }
          for (; ((int)lVar8 + 1U < param_3 && (pcVar1[lVar8] != '\0')); lVar8 = lVar8 + 1) {
            param_2[lVar8] = pcVar1[lVar8];
          }
        }
        param_2[lVar8] = 0;
      }
      else {
        uVar10 = -PF_PART4(local_58, 4);
        if (-1 < local_58) {
          uVar10 = PF_PART4(local_58, 4);
        }
        uVar11 = 0;
        do {
          uVar7 = uVar11;
          local_64[uVar7] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
          bVar3 = 8 < uVar10;
          bVar4 = uVar10 != 9;
          uVar11 = uVar7 + 1;
          uVar10 = uVar10 / 10;
        } while ((10 >= uVar7 && bVar3) && (10 < uVar7 || bVar4));
        if (local_58 < 0) {
          *param_2 = 0x2d;
        }
        uVar11 = (ulong)(local_58 < 0);
        pbVar9 = param_2 + uVar11;
        for (; uVar11 = uVar11 + 1, uVar7 != 0xffffffffffffffff && uVar11 < param_3;
            uVar7 = uVar7 - 1) {
          *pbVar9 = local_64[uVar7];
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = 0;
      }
    }
    else {
      for (lVar8 = 0; ((int)lVar8 + 1U < param_3 && (*(char *)(local_48 + lVar8) != '\0'));
          lVar8 = lVar8 + 1) {
        param_2[lVar8] = *(char *)(local_48 + lVar8);
      }
      param_2[lVar8] = 0;
    }
  }
  return;
}

#undef DAT_10008ada
#undef DAT_10008cf0
#undef str_10008cf5
#undef local_48
#undef local_38
#undef uStack_40
#undef local_64
#undef local_58
#undef local_50

#undef UNK_82010a04
#define UNK_82010a04 (*(uint *)(0x82010a04U))
#undef uRam0000000082010a04
#define uRam0000000082010a04 (*(uint32_t *)(0x82010a04U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fb0
 */

undefined8 recovered_10004fb0(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003b58(0x204);
  if ((bVar1) && (uRam0000000082010a04 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000082010a04)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef UNK_82010a04
#undef uRam0000000082010a04

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fec
 */

ulong recovered_10004fec(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  char *text;
  ulong uVar5;
  int iVar6;
  uint128 auVar7;

  if (param_1 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x3bc);
  iVar1 = *(int *)(param_1 + 0x3c0);
  auVar7 = recovered_1000419c(param_1);
  bVar2 = recovered_100052a4(iVar6,iVar1,PF_PART8(auVar7, 0),PF_PART8(auVar7, 8));
  if (bVar2) {
    iVar6 = *(int *)(param_1 + 0x3d4) + 2;
    if (*(int *)(param_1 + 0x3d4) < 1) {
      iVar6 = 0xc;
    }
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = ((iVar1 - PF_PART4(auVar7, 4)) + -2) / iVar6;
    }
    uVar4 = recovered_100052d0(param_1,(long)*(int *)(param_1 + 0x42c) +
                                       (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)),
                               (undefined4 *)0x0);
    if (-1 < (int)(uint)uVar4) {
      text = recovered_10004118(param_1,(uint)uVar4);
      goto joined_r0x10005088;
    }
  }
  text = *(char **)(param_1 + 0x3d8);
joined_r0x10005088:
  if (((text == (char *)0x0) || (*text == '\0')) && (0 < *(int *)(param_1 + 0x3f4))) {
    text = recovered_10004118(param_1,*(int *)(param_1 + 0x3f4) - 1);
  }
  uVar5 = strlen(text);
  bVar2 = recovered_10003b58(0x180);
  uVar4 = (ulong)bVar2;
  if (bVar2) {
    uVar3 = UINT_82010980;
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)uVar3)(text,(uint)uVar5);
      uVar4 = (ulong)uVar3;
      if (uVar3 != 0) {
        uVar4 = 1;
        *(undefined1 *)(param_1 + 0x438) = 1;
      }
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050fc
 */

bool recovered_100050fc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;

  bVar3 = recovered_10003b58(0x188);
  if (!bVar3) {
    return bVar3;
  }
  uVar4 = UINT_82010988;
  if (uVar4 != 0) {
    uVar4 = (*(code *)(ulong)uVar4)();
    if (param_1 == 0) {
      return false;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 < 2) {
      return false;
    }
    uVar13 = *(ulong *)(param_1 + 0x3e0);
    pbVar5 = (byte *)recovered_10003e28((ulong)uVar4);
    if (pbVar5 == (byte *)0x0) {
      return false;
    }
    uVar6 = recovered_100053c8(pbVar5,(ulong)uVar4);
    uVar4 = (uint)uVar6;
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    else {
      lVar9 = -1;
      uVar10 = 1;
      do {
        uVar12 = uVar10;
        if (uVar4 == uVar12) {
          bVar1 = *pbVar5;
          break;
        }
        bVar1 = pbVar5[(uVar6 & 0xffffffff) + lVar9 & 0xffffffff];
        lVar9 = lVar9 + -1;
        uVar10 = uVar12 + 1;
      } while ((bVar1 & 0xc0) == 0x80);
      uVar10 = (uint)bVar1;
      if (uVar10 - 0xf0 < 5) {
        uVar11 = 4;
      }
      else if ((uVar10 & 0xf0) == 0xe0) {
        uVar11 = 3;
      }
      else {
        uVar11 = 1;
        if (uVar10 - 0xc2 < 0x1e) {
          uVar11 = 2;
        }
      }
      uVar10 = uVar4 - uVar12;
      if (uVar11 <= uVar12) {
        uVar10 = uVar4;
      }
      uVar6 = (ulong)uVar10;
    }
    if (uVar13 <= -uVar6 - 2) {
      uVar7 = recovered_10003890((long *)(param_1 + 0x3d8),(ulong *)(param_1 + 1000),
                                 uVar13 + uVar6 + 1,0xffffffffffffffff);
      if ((int)uVar7 != 0) {
        bVar3 = false;
        for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
          bVar2 = pbVar5[uVar8];
          bVar1 = 0x20;
          if ((bVar2 & 0xfb) != 9 && bVar2 != 10) {
            bVar1 = bVar2;
          }
          if ((0x1f < bVar1) && (bVar1 != 0x7f)) {
            *(byte *)(*(long *)(param_1 + 0x3d8) + uVar13) = bVar1;
            uVar13 = uVar13 + 1;
            bVar3 = true;
          }
        }
        *(undefined1 *)(*(long *)(param_1 + 0x3d8) + uVar13) = 0;
        *(ulong *)(param_1 + 0x3e0) = uVar13;
        recovered_10003a74(pbVar5);
        if (!bVar3) {
          return false;
        }
        *(undefined1 *)(param_1 + 0x438) = 1;
        return true;
      }
    }
    recovered_10003a74(pbVar5);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a4
 */

bool recovered_100052a4(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar3 <= param_2) && iVar1 != param_1) &&
         ((param_1 < iVar2 || param_2 < iVar3) || param_1 <= iVar1)) &&
         param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

ulong recovered_100052d0(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;

  if ((param_1 != 0) && (-1 < (long)param_2)) {
    uVar4 = recovered_10003f60(param_1);
    uVar2 = *(uint *)(param_1 + 0x3f4);
    if ((uVar4 & 1) == 0) {
      lVar9 = 8;
      for (uVar4 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar4; uVar4 = uVar4 + 1) {
        pcVar5 = recovered_10004118(param_1,(uint)uVar4);
        iVar3 = recovered_10004080(param_1,pcVar5,*(ulong *)(*(long *)(param_1 + 0x390) + lVar9));
        if ((long)param_2 < (long)iVar3) {
          if (param_3 == (undefined4 *)0x0) {
            return uVar4;
          }
          goto LAB_100053b8;
        }
        param_2 = param_2 - (long)iVar3;
        lVar9 = lVar9 + 0x10;
      }
    }
    else {
      uVar4 = 0;
      uVar6 = uVar2;
      while( true ) {
        uVar8 = (uint)uVar4;
        if (uVar6 - uVar8 == 0 || (int)uVar6 < (int)uVar8) break;
        uVar1 = (int)(uVar6 - uVar8) / 2 + uVar8;
        uVar7 = *(ulong *)(*(long *)(param_1 + 0x3f8) + (long)(int)(uVar1 + 1) * 8);
        if (uVar7 <= param_2) {
          uVar8 = uVar1 + 1;
        }
        uVar4 = (ulong)uVar8;
        if (uVar7 <= param_2) {
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
      }
      if (uVar8 != uVar2) {
        if (param_3 == (undefined4 *)0x0) {
          return uVar4;
        }
        param_2 = param_2 - *(long *)(*(long *)(param_1 + 0x3f8) + (long)(int)uVar8 * 8);
LAB_100053b8:
        *param_3 = (int)param_2;
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053c8
 */

undefined8 recovered_100053c8(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x184);
  if (bVar1) {
    uVar2 = UINT_82010984;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10005404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2);
      return (ulong)uVar2;
    }
  }
  else if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


#undef UINT_82010898
#define UINT_82010898 (*(uint *)(0x82010898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000541c
 */

undefined8 recovered_1000541c(char *param_1,char *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x98);
  if ((bVar1) && (uVar2 = UINT_82010898, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000546c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,(uint)param_3);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010898

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000547c
 */

bool recovered_1000547c(undefined1 *param_1,ulong param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;

  *param_1 = 0x22;
  lVar1 = 1;
  for (; bVar2 = *param_3, bVar2 != 0; param_3 = param_3 + 1) {
    if (bVar2 < 0x20 || param_2 <= lVar1 + 3U) goto LAB_100054d8;
    if ((bVar2 == 0x2f) || (bVar2 == 0x22)) {
      param_1[lVar1] = 0x2f;
      lVar1 = lVar1 + 1;
      bVar2 = *param_3;
    }
    param_1[lVar1] = bVar2;
    lVar1 = lVar1 + 1;
  }
  *(undefined2 *)(param_1 + lVar1) = 0x22;
LAB_100054d8:
  return bVar2 == 0;
}


#undef str_100091f2
#define str_100091f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb42U)))
#undef str_10009205
#define str_10009205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb55U)))
#undef str_10009236
#define str_10009236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb86U)))
#undef str_10009252
#define str_10009252 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba2U)))
#undef str_10009274
#define str_10009274 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc4U)))
#undef str_100092a2
#define str_100092a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_100092e3
#define str_100092e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc33U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e4
 */

bool recovered_100054e4(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;

  pcVar2 = strstr(param_1,str_100091f2);
  if ((((pcVar2 == (char *)0x0) &&
       (pcVar2 = strstr(param_1,str_10009205), pcVar2 == (char *)0x0)) &&
      (pcVar2 = strstr(param_1,str_10009236), pcVar2 == (char *)0x0)) &&
     (((pcVar2 = strstr(param_1,str_10009252), pcVar2 == (char *)0x0 &&
       (pcVar2 = strstr(param_1,str_10009274), pcVar2 == (char *)0x0)) &&
      (pcVar2 = strstr(param_1,str_100092a2), pcVar2 == (char *)0x0)))) {
    pcVar2 = strstr(param_1,str_100092e3);
    bVar1 = pcVar2 != (char *)0x0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

#undef str_100091f2
#undef str_10009205
#undef str_10009236
#undef str_10009252
#undef str_10009274
#undef str_100092a2
#undef str_100092e3

#undef str_100093fe
#define str_100093fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4eU)))
#undef str_10009434
#define str_10009434 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd84U)))
#undef str_1000947e
#define str_1000947e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdceU)))
#define abStack_4b1 (*(byte (*)[1201])(pf_stack_frame + 31))
#define auStack_438 (*(undefined1 (*)[1080])(pf_stack_frame + 152))
#define acStack_260 (*(char (*)[608])(pf_stack_frame + 624))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005574
 */

ulong recovered_10005574(long param_1)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  ulong n;
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint in_w1;
  uint in_w2;
  uint in_w3;
  char *in_x4;

  uVar2 = strlen(in_x4);
  if (uVar2 - 0xea < 0xffffffffffffff17) {
    uVar3 = 0;
  }
  else {
    n = uVar2;
    if (0x77 < uVar2) {
      n = 0x78;
    }
    memcpy(abStack_4b1,in_x4,n);
    abStack_4b1[n] = 0;
    bVar1 = recovered_1000547c(auStack_438,0x1d8,abStack_4b1);
    uVar3 = (ulong)bVar1;
    if (bVar1) {
      snprintf(acStack_260,0x200,str_100093fe,*(uint *)param_1,auStack_438);
      uVar3 = recovered_1000541c(acStack_260,*(undefined8 *)(param_1 + 0x460),
                                 (ulong)*(uint *)(param_1 + 0x468));
      if ((int)uVar3 != 0) {
        if (0x78 < uVar2) {
          bVar1 = recovered_1000547c(auStack_438,0x1d8,(byte *)(in_x4 + n));
          if (!bVar1) {
            return (ulong)bVar1;
          }
          snprintf(acStack_260,0x200,str_10009434,*(uint *)param_1,*(uint *)param_1,
                             auStack_438);
          uVar2 = recovered_1000541c(acStack_260,*(undefined8 *)(param_1 + 0x460),
                                     (ulong)*(uint *)(param_1 + 0x468));
          if ((int)uVar2 == 0) {
            return uVar2;
          }
        }
        snprintf(acStack_260,0x200,str_1000947e,*(uint *)param_1,in_w1,*(uint *)param_1,
                           in_w2,in_w3);
        uVar4 = recovered_1000541c(acStack_260,*(undefined8 *)(param_1 + 0x460),
                                   (ulong)*(uint *)(param_1 + 0x468));
        uVar3 = (ulong)((int)uVar4 != 0);
      }
    }
  }
  return uVar3;
}

#undef str_100093fe
#undef str_10009434
#undef str_1000947e
#undef abStack_4b1
#undef auStack_438
#undef acStack_260

#undef str_100094d1
#define str_100094d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe21U)))
#undef str_10009509
#define str_10009509 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe59U)))
#define uStack_150 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_148 (*(undefined4 *)(pf_stack_frame + 24))
#define auStack_140 (*(undefined1 (*)[320])(pf_stack_frame + 32))
#define acStack_132 (*(char (*)[306])(pf_stack_frame + 46))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b4
 */

undefined8 recovered_100056b4(long param_1)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;

  uVar1 = *(uint *)(param_1 + 0x3e48);
  uVar2 = *(uint *)(param_1 + 0x3e4c);
  lVar5 = recovered_10005978(auStack_140,uVar1,uVar2);
  if (lVar5 == 0) {
    return 0;
  }
  if (uVar2 == uVar1) {
    uVar6 = strlen((char *)(param_1 + 0x3ed8));
    if (0xef < uVar6 + lVar5) {
      return 0;
    }
    memcpy(auStack_140 + lVar5,(void *)(param_1 + 0x3ed8),uVar6 + 1);
  }
  else {
    uStack_148 = 0;
    uStack_150 = 0;
    uVar7 = recovered_1000593c(param_1 + 0x3e58,&uStack_150);
    if ((int)uVar7 == 0) {
      return 0;
    }
    if (PF_PART4(uStack_150, 4) != *(uint *)(param_1 + 0x3e50)) {
      return 0;
    }
    uVar6 = uStack_150 & 0xffffffff;
    if ((int)uStack_150 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3e4c);
    uVar8 = (ulong)PF_PART4(uStack_150, 4) + (ulong)uVar1 * -100;
    if (99 < uVar8) {
      uVar8 = 100;
    }
    if ((ulong)PF_PART4(uStack_150, 4) == (ulong)uVar1 * 100) {
      return 0;
    }
    lVar5 = recovered_10005978(auStack_140,*(uint *)(param_1 + 0x3e48),uVar1);
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = uVar8 * 2;
    pbVar3 = (byte *)(uVar6 + (ulong)uVar1 * 100);
    pcVar4 = acStack_132 + 1;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar4[-1] = str_10009509[*pbVar3 >> 4];
      *pcVar4 = str_10009509[(ulong)*pbVar3 & 0xf];
      pbVar3 = pbVar3 + 1;
      pcVar4 = pcVar4 + 2;
    }
    acStack_132[lVar5] = '\0';
  }
  uVar6 = recovered_10005574(param_1);
  if ((int)uVar6 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x3e39) = 1;
  *(undefined4 *)(param_1 + 0x3e54) = *(undefined4 *)(param_1 + 0x390c);
  snprintf((char *)(param_1 + 0x4f0),0x80,str_100094d1,*(int *)(param_1 + 0x3e4c) + 1,
                     *(int *)(param_1 + 0x3e48) + 1);
  return 1;
}

#undef str_100094d1
#undef str_10009509
#undef uStack_150
#undef uStack_148
#undef auStack_140
#undef acStack_132

#undef str_1000951a
#define str_1000951a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6aU)))
#define acStack_98 (*(char (*)[152])(pf_stack_frame + 24))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 120))
#define fStack_30 (*(float *)(pf_stack_frame + 128))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 144))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005850
 */

ulong recovered_10005850(void)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint *in_x0;
  ulong uVar1;
  void *in_x1;

  snprintf(acStack_98,0x60,str_1000951a,*in_x0,in_x1);
  uStack_38 = 0;
  fStack_30 = 0.0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar1 = recovered_10004fb0(acStack_98,&uStack_38);
  if ((int)uVar1 != 0) {
    if ((int)uStack_38 == 5) {
      uVar1 = (ulong)(PF_PART4(uStack_38, 4) != 0);
    }
    else if ((int)uStack_38 == 2) {
      uVar1 = (ulong)(uint)(int)fStack_30;
    }
    else if ((int)uStack_38 == 1) {
      uVar1 = (ulong)PF_PART4(uStack_38, 4);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef str_1000951a
#undef acStack_98
#undef uStack_38
#undef fStack_30
#undef uStack_28
#undef uStack_20
#undef uStack_18

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef str_1000951a
#define str_1000951a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6aU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058e4
 */

void recovered_100058e4(uint *param_1,void *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};


  snprintf(acStack_80,0x60,str_1000951a,*param_1,param_2);
  recovered_10004df8(acStack_80,param_3,param_4,&DAT_10008ada);
  return;
}

#undef DAT_10008ada
#undef str_1000951a
#undef acStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000593c
 */

undefined8 recovered_1000593c(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003b58(0x34);
  if ((bVar1) && (uVar2 = UINT_82010834, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10019004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
    return (ulong)uVar2;
  }
  return 0;
}


#undef str_10009509
#define str_10009509 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe59U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005978
 */

undefined8 recovered_10005978(undefined1 *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  uVar2 = 0;
  if ((param_1 != (undefined1 *)0x0) && ((param_3 | param_2) >> 0x18 == 0)) {
    pcVar4 = param_1 + 1;
    *param_1 = 0x24;
    for (lVar3 = 0; lVar3 != 2; lVar3 = lVar3 + 1) {
      uVar1 = param_2;
      if (lVar3 != 0) {
        uVar1 = param_3;
      }
      lVar5 = 0x18;
      pcVar6 = pcVar4;
      do {
        lVar5 = lVar5 + -4;
        *pcVar6 = str_10009509[(ulong)(uVar1 >> (ulong)((uint)lVar5 & 0x1f)) & 0xf];
        pcVar6 = pcVar6 + 1;
      } while (lVar5 != 0);
      pcVar4 = pcVar4 + 6;
    }
    *(undefined2 *)(param_1 + 0xd) = 0x3a;
    uVar2 = 0xe;
  }
  return uVar2;
}

#undef str_10009509

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f8
 */

uint128 recovered_100059f8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar3 = recovered_1000419c(param_1);
  PF_PART8(auVar2, 0) = PF_PART8(auVar3, 0) & 0xffffffff00000000 | 10;
  lVar1 = 0x120000000c;
  if (0x15 < PF_PART4(auVar3, 12) + -0x1e) {
    lVar1 = (PF_PART8(auVar3, 8) & 0xffffffff00000000) - 0x21fffffff4;
  }
  PF_PART8(auVar2, 8) = lVar1;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a3c
 */

uint128 recovered_10005a3c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000419c(param_1);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000) -
                 0xdfffffff6;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a58
 */

bool recovered_10005a58(long param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;

  iVar1 = *(int *)(param_1 + 0x3dc0);
  if (iVar1 != 0) {
    if (param_2 == 0x1b || param_3 == 1) {
      recovered_10005b7c(param_1);
    }
    else if (param_2 == 9) {
      *(uint *)(param_1 + 0x3dc4) = *(uint *)(param_1 + 0x3dc4) ^ 1;
    }
    else if ((param_3 == 0x1c || param_2 == 0xd) || param_2 == 10) {
      recovered_10005b94(param_1);
    }
    else {
      if (iVar1 == 2) {
        lVar4 = 0x3dcd;
        uVar5 = 0x21;
      }
      else {
        bVar2 = *(int *)(param_1 + 0x3dc4) != 0;
        uVar5 = 0x21;
        if (bVar2) {
          uVar5 = 0x41;
        }
        lVar4 = 0x3dcd;
        if (bVar2) {
          lVar4 = 0x3dee;
        }
      }
      text = (char *)(param_1 + lVar4);
      uVar3 = strlen(text);
      if (((param_3 == 0xe || param_2 == 0x7f) || param_2 == 8) && (uVar3 != 0)) {
        text[uVar3 - 1] = '\0';
      }
      else if (param_2 - 0x20U < 0x5f && uVar3 + 1 < uVar5) {
        text[uVar3] = (char)param_2;
        text[uVar3 + 1] = '\0';
      }
    }
  }
  return iVar1 != 0;
}


#undef UNK_82010a4c
#define UNK_82010a4c (*(uint *)(0x82010a4cU))
#undef uRam0000000082010a4c
#define uRam0000000082010a4c (*(uint32_t *)(0x82010a4cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b4c
 */

void recovered_10005b4c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10003b58(0x24c);
  if ((bVar1) && (uRam0000000082010a4c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uRam0000000082010a4c)();
    return;
  }
  return;
}

#undef UNK_82010a4c
#undef uRam0000000082010a4c

#undef PTR_FUN_10010010
#define PTR_FUN_10010010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b7c
 */

void recovered_10005b7c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x3dc0) = 0;
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10010010)(param_1 + 0x3dee,0,0x41);
  return;
}

#undef PTR_FUN_10010010

#undef DAT_10009536
#define DAT_10009536 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe86U)))
#undef DAT_100095f1
#define DAT_100095f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf41U)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7a5cU)))
#undef PTR_FUN_10010018
#define PTR_FUN_10010018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef str_1000953a
#define str_1000953a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8aU)))
#undef str_10009567
#define str_10009567 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb7U)))
#undef str_10009594
#define str_10009594 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee4U)))
#undef str_100095c4
#define str_100095c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf14U)))
#undef str_100095e9
#define str_100095e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf39U)))
#undef str_100095f6
#define str_100095f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf46U)))
#undef str_10009638
#define str_10009638 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf88U)))
#undef str_10009665
#define str_10009665 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b94
 */

void recovered_10005b94(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *a;
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;

  a = (byte *)(param_1 + 0x3dcd);
  if (*(int *)(param_1 + 0x3dc0) == 2) {
    iVar4 = strcmp((char *)a,&DAT_10009536);
    if (iVar4 == 0) {
      iVar4 = 0;
LAB_10005cc8:
      *(int *)(param_1 + 0x3e30) = iVar4;
      *(undefined4 *)(param_1 + 0x618) = 0;
      *(int *)(param_1 + 0x3910) = *(int *)(param_1 + 0x3910) + 1;
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
      return;
    }
    pbVar8 = (byte *)(param_1 + 0x3dce);
    if (*(char *)(param_1 + 0x3dcd) != '!') {
      pbVar8 = a;
    }
    uVar5 = strlen((char *)pbVar8);
    if (uVar5 == 8) {
      iVar4 = 0;
      while( true ) {
        bVar1 = *pbVar8;
        if (bVar1 == 0) break;
        uVar7 = bVar1 - 0x30U;
        if (uVar7 < 10) {
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = (uint)bVar1;
          if (uVar7 - 0x61 < 6) {
            uVar7 = uVar7 - 0x57;
          }
          else {
            if (5 < uVar7 - 0x41) {
              pcVar6 = str_10009567;
              goto LAB_10005d80;
            }
            uVar7 = uVar7 - 0x37;
          }
        }
        iVar4 = uVar7 + iVar4 * 0x10;
        pbVar8 = pbVar8 + 1;
      }
      if (1 < iVar4 + 1U) goto LAB_10005cc8;
      pcVar6 = str_10009594;
    }
    else {
      pcVar6 = str_1000953a;
    }
  }
  else if ((*a == 0) || (*(char *)(param_1 + 0x3dee) == '\0')) {
    pcVar6 = str_100095c4;
  }
  else {
    pbVar8 = (byte *)(param_1 + 0x3dee);
    uVar5 = strlen((char *)pbVar8);
    iVar4 = strcmp((char *)pbVar8,str_100095e9);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    else {
      iVar4 = strcmp((char *)pbVar8,&DAT_100095f1);
      bVar3 = iVar4 == 0;
    }
    if ((uVar5 == 0x40) || (uVar5 == 0x20)) {
      bVar3 = true;
      pbVar2 = pbVar8;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        bVar1 = *pbVar2;
        if (9 < bVar1 - 0x30U && 5 < bVar1 - 0x61U) {
          bVar3 = (bool)(bVar1 - 0x41U < 6 & bVar3);
        }
        pbVar2 = pbVar2 + 1;
      }
    }
    if ((*(int *)(param_1 + 0x3dc8) - 8U < 0xfffffff9) || (!(bool)(*a != 0 & bVar3))) {
      pcVar6 = str_100095f6;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x38f4);
      if (uVar7 == 0x20) {
        pcVar6 = str_10009638;
      }
      else {
        lVar9 = param_1 + (ulong)uVar7 * 0x168;
        *(uint *)(param_1 + 0x38f4) = uVar7 + 1;
        memset((void *)(lVar9 + 0xa8c),0,0x168);
        *(undefined4 *)(lVar9 + 0xa8c) = 2;
        iVar4 = *(int *)(param_1 + 0x38f8) + 1;
        *(int *)(param_1 + 0x38f8) = iVar4;
        *(int *)(lVar9 + 0xa90) = iVar4;
        *(undefined4 *)(lVar9 + 0xa94) = DAT_1001010c;
        *(undefined4 *)(lVar9 + 0xa98) = *(undefined4 *)(param_1 + 0x3dc8);
        *(undefined1 *)(lVar9 + 0xaa0) = *(undefined1 *)(param_1 + 0x3dcc);
        memcpy((void *)(lVar9 + 0xb91),a,0x21);
        memcpy((void *)(lVar9 + 0xbb2),pbVar8,0x41);
        *(undefined4 *)(param_1 + 0x3dc0) = 0;
        memset(pbVar8,0,0x41);
        *(undefined1 *)(param_1 + 0x3920) = 0;
        pcVar6 = str_10009665;
      }
    }
  }
LAB_10005d80:
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x2cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10010018)(param_1 + 0x470,0x80,pcVar6);
  return;
}

#undef DAT_10009536
#undef DAT_100095f1
#undef DAT_1001010c
#undef PTR_FUN_10010018
#undef str_1000953a
#undef str_10009567
#undef str_10009594
#undef str_100095c4
#undef str_100095e9
#undef str_100095f6
#undef str_10009638
#undef str_10009665

#undef DAT_10008ada
#define DAT_10008ada (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
#undef DAT_100097c2
#define DAT_100097c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1112U)))
#undef DAT_100098bf
#define DAT_100098bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x120fU)))
#undef DAT_100098c1
#define DAT_100098c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1211U)))
#undef DAT_100098fb
#define DAT_100098fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124bU)))
#undef str_10008a51
#define str_10008a51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a1U)))
#undef str_10008f53
#define str_10008f53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a3U)))
#undef str_100096b6
#define str_100096b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1006U)))
#undef str_100096d7
#define str_100096d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1027U)))
#undef str_100097a6
#define str_100097a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f6U)))
#undef str_100097ac
#define str_100097ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fcU)))
#undef str_100097b9
#define str_100097b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1109U)))
#undef str_100097c7
#define str_100097c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1117U)))
#undef str_100097cf
#define str_100097cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111fU)))
#undef str_100097dd
#define str_100097dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112dU)))
#undef str_100097ed
#define str_100097ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113dU)))
#undef str_100097fd
#define str_100097fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114dU)))
#undef str_10009816
#define str_10009816 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1166U)))
#undef str_10009829
#define str_10009829 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1179U)))
#undef str_1000982f
#define str_1000982f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_10009836
#define str_10009836 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1186U)))
#undef str_1000983e
#define str_1000983e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118eU)))
#undef str_1000984c
#define str_1000984c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119cU)))
#undef str_1000987f
#define str_1000987f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cfU)))
#undef str_10009885
#define str_10009885 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d5U)))
#undef str_1000988e
#define str_1000988e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11deU)))
#undef str_10009895
#define str_10009895 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e5U)))
#undef str_1000989e
#define str_1000989e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eeU)))
#undef str_100098a4
#define str_100098a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11f4U)))
#undef str_100098b5
#define str_100098b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1205U)))
#undef str_100098c6
#define str_100098c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1216U)))
#undef str_100098d4
#define str_100098d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1224U)))
#undef str_100098f0
#define str_100098f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1240U)))
#define in_stack_ffffffffffffdf98 (*(char * *)(pf_stack_frame + 24))
#define uStack_2050 (*(undefined8 *)(pf_stack_frame + 48))
#define iStack_2018 (*(int *)(pf_stack_frame + 104))
#define iStack_1fe0 (*(int *)(pf_stack_frame + 160))
#define auStack_1fd0 (*(undefined1 (*)[8144])(pf_stack_frame + 176))
#define auStack_1f70 (*(undefined1 (*)[8048])(pf_stack_frame + 272))
#define auStack_1f10 (*(undefined1 (*)[7952])(pf_stack_frame + 368))
#define acStack_1eac (*(char (*)[7852])(pf_stack_frame + 468))
#define acStack_1ea8 (*(char (*)[7848])(pf_stack_frame + 472))
#define acStack_1e68 (*(char (*)[7784])(pf_stack_frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e38
 */

void recovered_10005e38(long *param_1)

{
  unsigned char pf_stack_frame[8352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  pf_u96 auVar6;
  uint128 auVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  char *arg2;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  int *piVar35;
  uint128 auVar36;

  lVar28 = *param_1;
  if (lVar28 == 0) {
    uVar11 = 0x190000002f8;
  }
  else {
    iVar13 = 0x2f8;
    if (*(int *)(lVar28 + 4) != 0) {
      iVar13 = *(int *)(lVar28 + 4);
    }
    iVar24 = 400;
    if (*(int *)(lVar28 + 8) != 0) {
      iVar24 = *(int *)(lVar28 + 8);
    }
    uVar11 = CONCAT44(iVar24,iVar13);
  }
  recovered_10006c40(param_1,0,uVar11,0);
  lVar20 = param_1[1];
  if ((*(int *)(lVar28 + 0x3dc0) == 0) || (lVar20 == 0)) {
    if (*(int *)(lVar28 + 0x3dc0) != 0) goto LAB_10005ee0;
  }
  else {
    if (*(int *)(lVar20 + 0x10) != 0) {
      recovered_10006c84(param_1);
      *(undefined1 *)(param_1 + 2) = 1;
    }
LAB_10005ee0:
    param_1[1] = 0;
  }
  lVar28 = *param_1;
  uVar9 = recovered_10004334(lVar28);
  if (lVar28 == 0) {
    if (uVar9 != 0) {
      uVar17 = 0x19000000000;
      iVar13 = 0x1c;
      goto LAB_10005f38;
    }
    lVar28 = 0;
  }
  else if (*(int *)(lVar28 + 0x3d4) < 1) {
    if (uVar9 != 0) {
      iVar13 = 0x1c;
      goto LAB_10005f24;
    }
  }
  else if (uVar9 != 0) {
    iVar13 = *(int *)(lVar28 + 0x3d4) + 0x12;
LAB_10005f24:
    uVar31 = 400;
    if (*(uint *)(lVar28 + 8) != 0) {
      uVar31 = *(uint *)(lVar28 + 8);
    }
    uVar17 = (ulong)uVar31 << 0x20;
LAB_10005f38:
    recovered_10006c40(param_1,0,uVar17 | uVar9,0x2d);
    iVar24 = uVar9 - 0x1c;
    if ((lVar28 == 0) || (iVar14 = *(int *)(lVar28 + 0x3d4), iVar14 < 1)) {
      iVar14 = 10;
    }
    recovered_10007254(param_1,0xc0000000e,CONCAT44(iVar14 + 2,iVar24),str_10008a51,1);
    if ((lVar28 == 0) || (iVar14 = *(int *)(lVar28 + 0x3d4), iVar14 < 1)) {
      iVar14 = 10;
    }
    pcVar18 = str_100097ac;
    if (*(char *)(lVar28 + 0x598) != '\0') {
      pcVar18 = (char *)(lVar28 + 0x598);
    }
    uVar11 = CONCAT44(iVar13,uVar9 - 0x14);
    recovered_10007548(param_1,(ulong)(iVar14 + 0x1aU) << 0x20 | 10,uVar11,pcVar18,0,0,0);
    uVar9 = iVar13 + iVar14 + 0x1aU + 0x12;
    iVar14 = *(int *)(lVar28 + 0x3d4) + 2;
    if (*(int *)(lVar28 + 0x3d4) < 1) {
      iVar14 = 0xc;
    }
    recovered_10007254(param_1,(ulong)uVar9 << 0x20 | 0xe,CONCAT44(iVar14,iVar24),str_100097b9,0x31)
    ;
    uVar17 = 0;
    uVar31 = 0;
    iVar32 = *(int *)(lVar28 + 0x3d4);
    iVar14 = iVar32 + 10;
    iVar10 = 400;
    if (*(int *)(lVar28 + 8) != 0) {
      iVar10 = *(int *)(lVar28 + 8);
    }
    do {
      uVar31 = uVar31 + 1;
      while (uVar17 = uVar17 + 1, uVar17 != 0) {
        if (uVar17 == 8) {
          iVar19 = -2 - iVar32;
          if (iVar32 < 1) {
            iVar14 = 0x14;
            iVar19 = -0xc;
          }
          uVar23 = (iVar19 + iVar13 * -2 + iVar10) - 0x1c;
          uVar9 = iVar14 + uVar9;
          if (uVar23 - uVar9 == 0 || (int)uVar23 < (int)uVar9) {
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            if (iVar13 + 4 != 0) {
              uVar16 = (int)((uVar23 - uVar9) + -0xe) / (iVar13 + 4);
            }
          }
          uVar27 = iVar13 + 4;
          uVar17 = 0;
          iVar14 = uVar16 - (uVar16 < uVar31 && uVar16 != 0);
          pcVar18 = (char *)(lVar28 + 0x974);
          goto LAB_100060dc;
        }
        if ((*(char *)(lVar28 + uVar17 + 0xa84) != '\0') || (uVar17 == *(uint *)(lVar28 + 0x610)))
        break;
      }
    } while( true );
  }
LAB_10006390:
  uVar9 = recovered_10004334(lVar28);
  if (lVar28 == 0) {
    uVar31 = 0x2f8 - uVar9;
LAB_100063c8:
    iVar13 = 10;
  }
  else {
    iVar13 = 0x2f8;
    if (*(int *)(lVar28 + 4) != 0) {
      iVar13 = *(int *)(lVar28 + 4);
    }
    uVar31 = iVar13 - uVar9;
    iVar13 = *(int *)(lVar28 + 0x3d4);
    if (iVar13 < 1) goto LAB_100063c8;
  }
  iVar24 = iVar13 + 0x12;
  iVar10 = recovered_100042d8(lVar28);
  recovered_10006c40(param_1,(ulong)uVar9,CONCAT44(iVar10,uVar31),0);
  recovered_10007a04(lVar28,auStack_1f10);
  iVar14 = 0x34;
  if (0x1df < (int)uVar31) {
    iVar14 = 0x44;
  }
  if ((lVar28 == 0) || (iVar32 = *(int *)(lVar28 + 0x3d4), iVar32 < 1)) {
    iVar32 = 10;
  }
  iVar19 = 1;
  recovered_10007254(param_1,(ulong)(uVar9 + 0xe) | 0xc00000000,
                     CONCAT44(iVar32 + 2,uVar31 + iVar14 * -3 + -0x2c),auStack_1f10,1);
  iVar32 = iVar14 * -3 + -0x1c;
  while (iVar19 != -2) {
    if (lVar28 == 0) {
      iVar15 = 0x2f8;
    }
    else {
      iVar15 = 0x2f8;
      if (*(int *)(lVar28 + 4) != 0) {
        iVar15 = *(int *)(lVar28 + 4);
      }
    }
    pcVar18 = str_1000982f;
    if (iVar19 != 0) {
      pcVar18 = str_10009836;
    }
    uVar34 = 6;
    if (iVar19 != 0) {
      uVar34 = 7;
    }
    iVar19 = iVar19 + -1;
    pcVar21 = str_10009829;
    if (iVar19 != 0) {
      pcVar21 = pcVar18;
    }
    uVar1 = 5;
    if (iVar19 != 0) {
      uVar1 = uVar34;
    }
    recovered_10007548(param_1,(ulong)(uint)(iVar32 + iVar15) | 0x800000000,CONCAT44(iVar24,iVar14),
                       pcVar21,uVar1,0,0);
    iVar32 = iVar32 + iVar14 + 8;
  }
  pcVar21 = (char *)(ulong)*(uint *)(lVar28 + 0x38f4);
  pcVar18 = (char *)(lVar28 + 0x470);
  if (*(uint *)(lVar28 + 0x38f4) == 0) {
    pcVar21 = str_1000984c;
    if (*pcVar18 != '\0') {
      pcVar21 = pcVar18;
    }
    arg2 = &DAT_10008c9a;
  }
  else {
    arg2 = str_1000983e;
    in_stack_ffffffffffffdf98 = pcVar18;
  }
  snprintf(acStack_1e68,0xa0,arg2,(ulonglong)pcVar21,in_stack_ffffffffffffdf98);
  iVar14 = *(int *)(lVar28 + 0x3d4) + 2;
  if (*(int *)(lVar28 + 0x3d4) < 1) {
    iVar14 = 0xc;
  }
  recovered_10007254(param_1,CONCAT44(iVar13 + 0x20,uVar9 + 0xe),CONCAT44(iVar14,uVar31 - 0x1c),
                     acStack_1e68,0x31);
  if (uVar9 == 0) {
    uVar23 = *(int *)(lVar28 + 0x3d4) * 2 + 0x28;
    if (*(int *)(lVar28 + 0x3d4) < 1) {
      uVar23 = 0x3c;
    }
    uVar17 = (ulong)(uVar23 >> 1);
    iVar13 = (int)(uVar31 - 0x32) / 4;
    recovered_10007548(param_1,uVar17 << 0x21 | 10,CONCAT44(iVar24,iVar13),str_1000987f,0,0,0);
    recovered_10007548(param_1,(ulong)(iVar13 + 0x14) | uVar17 << 0x21,CONCAT44(iVar24,iVar13),
                       str_10009885,0x10,0,0);
    recovered_10007548(param_1,(ulong)(iVar13 * 2 + 0x1e) | uVar17 << 0x21,CONCAT44(iVar24,iVar13),
                       str_1000988e,3,0,0);
    recovered_10007548(param_1,(ulong)(iVar13 * 3 + 0x28) | uVar17 << 0x21,CONCAT44(iVar24,iVar13),
                       str_10009895,2,0,0);
  }
  recovered_10006c40(param_1,CONCAT44(iVar10 + -1,uVar9),(ulong)uVar31 | 0x100000000,0x15);
  lVar28 = *param_1;
  auVar36 = recovered_1000419c(lVar28);
  recovered_10006c40(param_1,PF_PART8(auVar36, 0),PF_PART8(auVar36, 8),0);
  iVar13 = PF_PART4(auVar36, 8) + -0x40;
  if (lVar28 == 0) {
    uVar9 = iVar13 / 6;
LAB_10006688:
    iVar14 = 10;
  }
  else {
    iVar24 = *(int *)(lVar28 + 0x3d0);
    if (iVar24 < 1) {
      iVar24 = 6;
    }
    iVar14 = *(int *)(lVar28 + 0x3d4);
    uVar9 = 0;
    if (iVar24 != 0) {
      uVar9 = iVar13 / iVar24;
    }
    if (iVar14 < 1) goto LAB_10006688;
  }
  if (0 < (int)uVar9) {
    iStack_1fe0 = 0;
    iVar13 = iVar14 + 2;
    iVar24 = PF_PART4(auVar36, 4);
    iStack_2018 = PF_PART4(auVar36, 12) + iVar24 + -8;
    uVar31 = *(uint *)(lVar28 + 0x3db4);
    if (0xee < uVar9) {
      uVar9 = 0xef;
    }
    iVar32 = PF_PART4(auVar36, 0);
    iVar10 = iVar32 + 0x32;
    uVar11 = CONCAT44(iVar13,PF_PART4(auVar36, 8) + -0x36);
    uVar23 = 0;
    do {
      do {
        auVar6 = PF_PART12(auVar36, 0);
        uVar33 = PF_PART8(auVar36, 0);
        uVar16 = uVar31;
        do {
          uVar16 = uVar16 - 1;
          if (uVar31 == 0) goto LAB_10006b08;
          lVar30 = *(long *)(lVar28 + 0x3ca0);
          uVar31 = uVar31 - 1;
          piVar35 = (int *)(lVar30 + (ulong)uVar31 * 0x10c);
          bVar8 = recovered_100079a4(lVar28,piVar35);
        } while (!bVar8);
        uVar27 = uVar23 + 1;
        bVar8 = uVar23 < *(uint *)(lVar28 + 0x618);
        uVar23 = uVar27;
      } while (bVar8);
      uVar17 = 0;
      lVar29 = 0;
      lVar30 = lVar30 + 0x1c;
      while( true ) {
        uStack_2050 = PF_PART8(auVar36, 8);
        PF_PART8(auVar7, 8) = uStack_2050;
        PF_PART8(auVar7, 0) = uVar33;
        cVar4 = *(char *)((long)piVar35 + lVar29 + 0x1c);
        if (cVar4 == '\0' || 0x1f < uVar17) break;
        uVar25 = 0;
        cVar5 = cVar4;
        uVar3 = 0;
        while( true ) {
          if ((cVar5 == '\0') || (cVar5 == '\n')) goto LAB_100067bc;
          if (uVar9 == uVar25) break;
          uVar2 = uVar25;
          if (cVar5 != ' ') {
            uVar2 = uVar3;
          }
          cVar5 = *(char *)((long)piVar35 + uVar25 + lVar29 + 0x1d);
          uVar25 = uVar25 + 1;
          uVar3 = uVar2;
        }
        uVar25 = (ulong)uVar9;
LAB_100067bc:
        if (uVar3 == 0 || cVar5 == '\n') {
          uVar3 = uVar25;
        }
        if (cVar5 != '\0') {
          uVar25 = uVar3;
        }
        pbVar26 = (byte *)(lVar30 + (ulong)uVar16 * 0x10c + lVar29 + uVar25);
        for (lVar22 = -uVar25; lVar22 != 0; lVar22 = lVar22 + 1) {
          if ((*pbVar26 & 0xc0) != 0x80) {
            uVar25 = -lVar22;
            goto LAB_10006850;
          }
          pbVar26 = pbVar26 + -1;
        }
        if (cVar4 == '\n') {
          uVar25 = 0;
        }
        else {
          for (lVar22 = 0; lVar22 != 0xee; lVar22 = lVar22 + 1) {
            if ((*(byte *)((long)piVar35 + lVar22 + lVar29 + 0x1d) & 0xc0) != 0x80) {
              uVar25 = lVar22 + 1;
              goto LAB_10006850;
            }
          }
          uVar25 = 0xef;
        }
LAB_10006850:
        lVar22 = uVar17 * 0xf0;
        memcpy(acStack_1e68 + lVar22,(void *)((long)piVar35 + lVar29 + 0x1c),uVar25);
        uVar17 = uVar17 + 1;
        (acStack_1e68 + lVar22)[uVar25] = '\0';
        lVar22 = uVar25 + lVar29;
        auVar36 = auVar7;
        if (*(char *)((long)piVar35 + lVar22 + 0x1c) == '\n') {
          lVar29 = lVar22 + 1;
        }
        else {
          do {
            lVar29 = lVar22;
            lVar22 = lVar29 + 1;
          } while (*(char *)(lVar30 + (ulong)uVar31 * 0x10c + lVar29) == ' ');
        }
      }
      if (uVar17 == 0) {
        acStack_1e68[0] = '\0';
        uVar17 = 1;
      }
      iVar19 = 0;
      if (iVar13 != 0) {
        iVar19 = ((iStack_2018 - iVar24) + -0xe) / iVar13;
      }
      uVar16 = iVar19 - 1;
      auVar6 = PF_PART12(auVar36, 0);
      if (uVar16 == 0 || iVar19 < 1) goto LAB_10006b08;
      uVar27 = (uint)uVar17;
      uVar12 = uVar27;
      if (uVar16 <= uVar27) {
        uVar12 = uVar16;
      }
      uVar17 = (ulong)uVar12;
      if ((char)piVar35[5] == '\x01') {
        pcVar18 = str_100098a4;
        if (((*(byte *)((long)piVar35 + 0x16) & 1) == 0) &&
           (pcVar18 = str_100098b5, *(char *)((long)piVar35 + 0x15) == '\0')) {
          pcVar18 = &DAT_10008ada;
        }
        snprintf(acStack_1ea8,0x40,str_1000989e,pcVar18);
        uVar16 = (uint)pcVar18;
        pcVar18 = &DAT_100098bf;
      }
      else {
        snprintf(acStack_1ea8,0x40,str_100097a6,piVar35[1]);
        uVar16 = (uint)*(byte *)(piVar35 + 1);
        pcVar18 = &DAT_100098c1;
      }
      snprintf(acStack_1eac,4,pcVar18,uVar16);
      iVar19 = iStack_2018 + iVar13 * ~uVar12;
      iVar15 = iVar19 + -0xe;
      pf_app_terror_ui_text(auStack_1f70,acStack_1eac);
      pf_app_terror_ui_view_alignment(auStack_1f10,auStack_1f70,1);
      uVar16 = terror_ui_colour(4);
      memcpy(auStack_1fd0,auStack_1f10,0x60);
      pf_app_terror_ui_view_foreground(auStack_1f70,auStack_1fd0,uVar16);
      memcpy(auStack_1f10,auStack_1f70,0x60);
      uVar16 = terror_ui_colour(0x2d);
      memcpy(auStack_1fd0,auStack_1f10,0x60);
      pf_app_terror_ui_view_background(auStack_1f70,auStack_1fd0,uVar16);
      memcpy(auStack_1f10,auStack_1f70,0x60);
      memcpy(auStack_1f70,auStack_1f10,0x60);
      recovered_1000708c(param_1,CONCAT44(iVar15,iVar32 + 4),0x2400000024,auStack_1f70);
      if ((*(byte *)((long)piVar35 + 0x16) & 1) == 0) {
        uVar16 = 0x31;
        if (*(char *)((long)piVar35 + 0x15) == '\0') {
          uVar16 = 4;
        }
        uVar25 = (ulong)uVar16;
      }
      else {
        uVar25 = 0x12;
      }
      recovered_10007254(param_1,CONCAT44(iVar15,iVar10),uVar11,acStack_1ea8,uVar25);
      uVar27 = uVar27 - uVar12;
      iVar15 = iVar14 + -0xc + iStack_2018 + iVar13 * ~uVar12;
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        recovered_10007254(param_1,CONCAT44(iVar15,iVar10),uVar11,
                           acStack_1e68 + (ulong)uVar27 * 0xf0,1);
        uVar27 = uVar27 + 1;
        iVar15 = iVar15 + iVar13;
      }
      iStack_2018 = iVar19 + -0x16;
      iStack_1fe0 = iStack_1fe0 + 1;
      PF_PART8(auVar36, 8) = uStack_2050;
      PF_PART8(auVar36, 0) = uVar33;
    } while( true );
  }
LAB_10006b6c:
  lVar28 = *param_1;
  auVar36 = recovered_10007a70(lVar28);
  recovered_10007a04(lVar28,auStack_1f10);
  snprintf(acStack_1e68,0x50,str_100098f0,auStack_1f10);
  if ((*(uint *)(lVar28 + 0x3b8) & 6) == 2) {
    uVar17 = (ulong)(*(int *)(lVar28 + 0x3dc0) == 0);
  }
  else {
    uVar17 = 0;
  }
  recovered_10007300(param_1,PF_PART8(auVar36, 0),PF_PART8(auVar36, 8),*(undefined8 *)(lVar28 + 0x3d8),
                     acStack_1e68,uVar17,0xd);
  recovered_10007548(param_1,(ulong)(PF_PART4(auVar36, 8) + PF_PART4(auVar36, 0) + 8) |
                             PF_PART8(auVar36, 0) & 0xffffffff00000000,
                     PF_PART8(auVar36, 8) & 0xffffffff00000000 | 0x58,&DAT_100098fb,8,0,0);
  param_1[1] = lVar20;
  recovered_10006c84(param_1);
  return;
LAB_100060dc:
  if (uVar17 == 8) goto LAB_10006188;
  if (((uVar17 == 0) || (*(char *)(lVar28 + uVar17 + 0xa84) != '\0')) ||
     (uVar17 == *(uint *)(lVar28 + 0x610))) {
    if (iVar14 == 0) goto LAB_10006188;
    pcVar21 = str_100097c7;
    if (uVar17 != 0) {
      pcVar21 = str_10008f53;
    }
    if (*pcVar18 != '\0') {
      pcVar21 = pcVar18;
    }
    snprintf(acStack_1e68,0x30,&DAT_100097c2,pcVar21);
    if (*(int *)(lVar28 + 0x3e30) == 0) {
      uVar12 = (uint)(uVar17 == *(uint *)(lVar28 + 0x610));
    }
    else {
      uVar12 = 0;
    }
    iVar14 = iVar14 + -1;
    recovered_10007548(param_1,(ulong)uVar9 << 0x20 | 10,uVar11,acStack_1e68,1,(int)uVar17,uVar12);
    uVar9 = uVar9 + uVar27;
  }
  uVar17 = uVar17 + 1;
  pcVar18 = pcVar18 + 0x21;
  goto LAB_100060dc;
LAB_10006188:
  if (uVar16 < uVar31 && (int)(uVar9 + iVar13) < (int)uVar23) {
    recovered_10007548(param_1,(ulong)uVar9 << 0x20 | 10,uVar11,str_100097cf,0x10,0,0);
    uVar9 = uVar9 + uVar27;
  }
  if ((lVar28 == 0) || (iVar14 = *(int *)(lVar28 + 0x3d4), iVar14 < 1)) {
    if ((int)(uVar9 + 0x1a) < (int)uVar23) {
      iVar14 = 10;
      goto LAB_10006208;
    }
LAB_100062d8:
    iVar14 = 10;
  }
  else if ((int)(uVar9 + iVar14 + 0x10) < (int)uVar23) {
LAB_10006208:
    recovered_10007254(param_1,(ulong)(uVar9 + 0xe) << 0x20 | 0xe,CONCAT44(iVar14 + 2,iVar24),
                       str_100097dd,0x31);
    if ((lVar28 == 0) || (iVar14 = *(int *)(lVar28 + 0x3d4), iVar14 < 1)) {
      iVar14 = 10;
    }
    iVar10 = 0;
    uVar9 = uVar9 + iVar14 + 0x18;
    uVar17 = (ulong)uVar9 << 0x20 | 10;
    iVar14 = uVar9 + iVar13;
    while ((iVar14 < (int)uVar23 && (uVar9 = recovered_10007404(lVar28,iVar10), uVar9 != 0))) {
      snprintf(acStack_1e68,0x20,str_100096d7,uVar9);
      recovered_10007548(param_1,uVar17,uVar11,acStack_1e68,4,uVar9,
                         (uint)(*(uint *)(lVar28 + 0x3e30) == uVar9));
      iVar10 = iVar10 + 1;
      uVar17 = uVar17 + ((ulong)uVar27 << 0x20);
      iVar14 = iVar14 + uVar27;
    }
    if ((lVar28 == 0) || (iVar14 = *(int *)(lVar28 + 0x3d4), iVar14 < 1)) goto LAB_100062d8;
  }
  pcVar18 = str_100097ed;
  if (*(char *)(lVar28 + 0x391f) == '\0') {
    pcVar18 = str_100097fd;
  }
  recovered_10007254(param_1,(ulong)uVar23 << 0x20 | 0xe,CONCAT44(iVar14 + 2,iVar24),pcVar18,0x31);
  iVar24 = *(int *)(lVar28 + 0x3d4) + 2;
  if (*(int *)(lVar28 + 0x3d4) < 1) {
    iVar24 = 0xc;
  }
  recovered_10007548(param_1,(ulong)(uVar23 + iVar24 + 8) << 0x20 | 10,uVar11,str_10009816,3,0,0);
  iVar24 = *(int *)(lVar28 + 0x3d4) + 2;
  if (*(int *)(lVar28 + 0x3d4) < 1) {
    iVar24 = 0xc;
  }
  recovered_10007548(param_1,(ulong)(iVar13 + uVar23 + iVar24 + 0xe) << 0x20 | 10,uVar11,
                     str_100096b6,2,0,0);
  lVar28 = *param_1;
  goto LAB_10006390;
LAB_10006b08:
  if (iStack_1fe0 == 0) {
    recovered_10007a04(lVar28,auStack_1f10);
    snprintf(acStack_1e68,0x50,str_100098c6,auStack_1f10);
    iVar14 = PF_PART4(auVar6, 0) + 0x10;
    iVar10 = PF_PART4(auVar6, 8) + -0x20;
    recovered_10007254(param_1,CONCAT44(iVar24 + 0x18,iVar14),CONCAT44(iVar13,iVar10),acStack_1e68,1
                      );
    recovered_10007254(param_1,CONCAT44(iVar24 + 0x18 + iVar13 * 2,iVar14),CONCAT44(iVar13,iVar10),
                       str_100098d4,0x31);
  }
  goto LAB_10006b6c;
}

#undef DAT_10008ada
#undef DAT_10008c9a
#undef DAT_100097c2
#undef DAT_100098bf
#undef DAT_100098c1
#undef DAT_100098fb
#undef str_10008a51
#undef str_10008f53
#undef str_100096b6
#undef str_100096d7
#undef str_100097a6
#undef str_100097ac
#undef str_100097b9
#undef str_100097c7
#undef str_100097cf
#undef str_100097dd
#undef str_100097ed
#undef str_100097fd
#undef str_10009816
#undef str_10009829
#undef str_1000982f
#undef str_10009836
#undef str_1000983e
#undef str_1000984c
#undef str_1000987f
#undef str_10009885
#undef str_1000988e
#undef str_10009895
#undef str_1000989e
#undef str_100098a4
#undef str_100098b5
#undef str_100098c6
#undef str_100098d4
#undef str_100098f0
#undef in_stack_ffffffffffffdf98
#undef uStack_2050
#undef iStack_2018
#undef iStack_1fe0
#undef auStack_1fd0
#undef auStack_1f70
#undef auStack_1f10
#undef acStack_1eac
#undef acStack_1ea8
#undef acStack_1e68

#define auStack_90 (*(undefined1 (*)[144])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c40
 */

void recovered_10006c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       )

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint rgb;

  rgb = terror_ui_colour((uint)param_4);
  pf_app_terror_ui_rectangle(auStack_90,rgb);
  recovered_1000708c(param_1,param_2,param_3,auStack_90);
  return;
}

#undef auStack_90

#undef DAT_10009713
#define DAT_10009713 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1063U)))
#undef DAT_10009718
#define DAT_10009718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1068U)))
#undef str_1000969a
#define str_1000969a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeaU)))
#undef str_100096b6
#define str_100096b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1006U)))
#undef str_100096c7
#define str_100096c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1017U)))
#undef str_100096d7
#define str_100096d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1027U)))
#undef str_100096df
#define str_100096df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102fU)))
#undef str_100096f2
#define str_100096f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1042U)))
#undef str_10009702
#define str_10009702 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1052U)))
#undef str_1000970a
#define str_1000970a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105aU)))
#undef str_1000971c
#define str_1000971c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106cU)))
#undef str_10009728
#define str_10009728 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1078U)))
#undef str_10009735
#define str_10009735 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1085U)))
#undef str_10009753
#define str_10009753 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10a3U)))
#undef str_10009780
#define str_10009780 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d0U)))
#undef str_10009792
#define str_10009792 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10e2U)))
#undef str_1000979f
#define str_1000979f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10efU)))
#define acStack_c0 (*(char (*)[192])(pf_stack_frame + 16))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 88))
#define bStack_64 (*(byte *)(pf_stack_frame + 108))
#define local_80 (*(ulong *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c84
 */

void recovered_10006c84(long *param_1)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint128 auVar12;

  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x3dc0) != 0) {
    recovered_100070d0((int *)&local_80,lVar8);
    recovered_10006c40(param_1,local_80,uStack_78,0x2d);
    iVar6 = *(int *)(lVar8 + 0x3d4) + 2;
    if (*(int *)(lVar8 + 0x3d4) < 1) {
      iVar6 = 0xc;
    }
    pcVar1 = str_1000969a;
    if (*(int *)(lVar8 + 0x3dc0) != 2) {
      pcVar1 = str_100096b6;
    }
    recovered_10007254(param_1,(local_80 & 0xffffffff00000000 | (ulong)((int)local_80 + 0x12)) +
                               0x1000000000,CONCAT44(iVar6,(int)uStack_78 + -0x24),pcVar1,1);
    if (*(int *)(lVar8 + 0x3dc0) == 2) {
      auVar12 = recovered_10007364(lVar8,0);
      recovered_10007300(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),lVar8 + 0x3dcd,str_100096c7,1,0xd);
      iVar6 = 0;
      iVar9 = 1;
      if (bStack_64 == 0) {
        iVar9 = 2;
      }
      for (; iVar9 != iVar6; iVar6 = iVar6 + 1) {
        uVar5 = recovered_10007404(lVar8,iVar6 + (*(int *)(lVar8 + 0x3e34) <<
                                                 (ulong)((bStack_64 ^ 1) & 0x1f)));
        if (uVar5 != 0) {
          snprintf(acStack_c0,0x30,str_100096d7,uVar5);
          auVar12 = recovered_10007364(lVar8,iVar6 + 1);
          recovered_10007548(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),acStack_c0,4,uVar5,0);
        }
      }
      iVar6 = recovered_10007404(lVar8,iVar9);
      if (iVar6 != 0) {
        auVar12 = recovered_10007364(lVar8,iVar9 + 1);
        recovered_10007548(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),str_100096df,0xf,0,0);
      }
    }
    else {
      snprintf(acStack_c0,0x40,str_100096f2,*(uint *)(lVar8 + 0x3dc8));
      auVar12 = recovered_10007364(lVar8,0);
      uVar5 = (PF_PART4(auVar12, 8) + -8) / 2;
      uVar10 = PF_PART8(auVar12, 8) & 0xffffffff00000000;
      recovered_10007548(param_1,PF_PART8(auVar12, 0),uVar10 | uVar5,acStack_c0,0xb,0,0);
      pcVar1 = str_10009702;
      if (*(byte *)(lVar8 + 0x3dcc) == 0) {
        pcVar1 = str_1000970a;
      }
      recovered_10007548(param_1,PF_PART8(auVar12, 0) & 0xffffffff00000000 |
                                 (ulong)(PF_PART4(auVar12, 0) + uVar5 + 8),uVar10 | uVar5,pcVar1,0xc,0,
                         (uint)*(byte *)(lVar8 + 0x3dcc));
      for (uVar5 = 1; uVar5 != 3; uVar5 = uVar5 + 1) {
        auVar12 = recovered_10007364(lVar8,uVar5);
        uVar10 = PF_PART8(auVar12, 0);
        if (bStack_64 == 0) {
          uVar7 = *(int *)(lVar8 + 0x3d4) + 2;
          if (*(int *)(lVar8 + 0x3d4) < 1) {
            uVar7 = 0xc;
          }
          pcVar1 = &DAT_10009713;
          if (uVar5 != 1) {
            pcVar1 = str_1000971c;
          }
          recovered_10007254(param_1,uVar10 & 0xffffffff | (ulong)(PF_PART4(auVar12, 4) - uVar7) << 0x20,
                             PF_PART8(auVar12, 8) & 0xffffffff | (ulong)uVar7 << 0x20,pcVar1,0x31);
        }
        else {
          uVar7 = *(int *)(lVar8 + 0x3d4) + 2;
          if (*(int *)(lVar8 + 0x3d4) < 1) {
            uVar7 = 0xc;
          }
          puVar2 = &DAT_10009713;
          if (uVar5 != 1) {
            puVar2 = &DAT_10009718;
          }
          recovered_10007254(param_1,uVar10 & 0xffffffff |
                                     (ulong)(uint)((int)(PF_PART4(auVar12, 12) - uVar7) / 2 + PF_PART4(auVar12, 4)
                                                  ) << 0x20,(ulong)uVar7 << 0x20 | 0x40,puVar2,0x31)
          ;
          iVar6 = PF_PART4(auVar12, 0);
          PF_PART8(auVar12, 8) = (ulong)(PF_PART4(auVar12, 8) - 0x48) | PF_PART8(auVar12, 8) & 0xffffffff00000000;
          PF_PART8(auVar12, 0) = (ulong)(iVar6 + 0x48) | uVar10 & 0xffffffff00000000;
        }
        bVar4 = uVar5 == 1;
        lVar3 = 0x3dcd;
        if (!bVar4) {
          lVar3 = 0x3dee;
        }
        pcVar1 = str_10009728;
        if (!bVar4) {
          pcVar1 = str_10009735;
        }
        uVar11 = 0xd;
        if (!bVar4) {
          uVar11 = 0xe;
        }
        recovered_10007300(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),lVar8 + lVar3,pcVar1,
                           (ulong)(bVar4 != (*(int *)(lVar8 + 0x3dc4) != 0)),uVar11);
      }
      if ((bStack_64 & 1) == 0) {
        auVar12 = recovered_10007364(lVar8,3);
        recovered_10007254(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),str_10009753,0x31);
      }
    }
    auVar12 = recovered_10007364(lVar8,4);
    pcVar1 = str_10009780;
    if (*(int *)(lVar8 + 0x3dc0) != 2) {
      pcVar1 = str_10009792;
    }
    recovered_10007548(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),pcVar1,9,0,0);
    auVar12 = recovered_10007364(lVar8,5);
    recovered_10007548(param_1,PF_PART8(auVar12, 0),PF_PART8(auVar12, 8),str_1000979f,10,0,0);
  }
  return;
}

#undef DAT_10009713
#undef DAT_10009718
#undef str_1000969a
#undef str_100096b6
#undef str_100096c7
#undef str_100096d7
#undef str_100096df
#undef str_100096f2
#undef str_10009702
#undef str_1000970a
#undef str_1000971c
#undef str_10009728
#undef str_10009735
#undef str_10009753
#undef str_10009780
#undef str_10009792
#undef str_1000979f
#undef acStack_c0
#undef uStack_78
#undef bStack_64
#undef local_80

#undef PTR_FUN_10010098
#define PTR_FUN_10010098 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x79e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000708c
 */

void recovered_1000708c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;

  bVar1 = true;
  bVar2 = false;
  if (0 < (int)param_3) {
    iVar4 = (int)((ulong)param_3 >> 0x20);
    bVar2 = SBORROW4(iVar4,1);
    bVar1 = iVar4 + -1 < 0;
  }
  if (bVar1 != bVar2) {
    return;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = param_1[1];
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xecU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10010098)(*param_1,param_4,param_2,param_3,uVar3);
  return;
}

#undef PTR_FUN_10010098

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d0
 */

void recovered_100070d0(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint128 auVar11;

  auVar11 = recovered_1000419c(param_2);
  iVar7 = 0x2e;
  iVar2 = 0x1c;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x3d4);
    iVar2 = iVar3 + 0x12;
    iVar7 = iVar3 + 0x24;
    if (iVar3 < 1) {
      iVar2 = 0x1c;
      iVar7 = 0x2e;
    }
  }
  param_1[4] = iVar2;
  param_1[6] = iVar7;
  iVar1 = PF_PART4(auVar11, 8);
  iVar3 = iVar1;
  if (iVar1 < 0x188) {
    iVar3 = 0x2f8;
  }
  if ((param_2 != 0) && (iVar1 < 0x188)) {
    iVar3 = 0x2f8;
    if (*(int *)(param_2 + 4) != 0) {
      iVar3 = *(int *)(param_2 + 4);
    }
  }
  if (0x24f < iVar3) {
    iVar3 = 0x250;
  }
  iVar4 = PF_PART4(auVar11, 4);
  iVar5 = 400;
  if (param_2 != 0) {
    iVar5 = 400;
    if (*(int *)(param_2 + 8) != 0) {
      iVar5 = *(int *)(param_2 + 8);
    }
  }
  iVar3 = iVar3 + -0x20;
  iVar6 = (iVar5 - iVar4) + -0xc;
  iVar5 = (uintptr_t)iVar2 * 5 + iVar7 + 0x62;
  iVar9 = 8;
  if (iVar5 <= iVar6) {
    iVar9 = 0x14;
  }
  *(bool *)(param_1 + 7) = iVar6 < iVar5;
  iVar10 = 4;
  if (iVar5 <= iVar6) {
    iVar10 = 5;
  }
  iVar7 = iVar7 + iVar10 * iVar2;
  iVar10 = iVar10 + -1;
  iVar5 = iVar7 + 0x12;
  iVar8 = iVar5 + iVar10 * iVar9;
  if (iVar6 < iVar8) {
    iVar6 = 0x178;
    if (param_2 != 0) {
      iVar6 = 0x178;
      if (*(int *)(param_2 + 8) != 0) {
        iVar6 = *(int *)(param_2 + 8) + -0x18;
      }
    }
    iVar4 = 0;
    if (iVar10 != 0) {
      iVar4 = ((iVar6 - iVar7) + -0x12) / iVar10;
    }
    iVar7 = iVar4;
    if (iVar9 <= iVar4) {
      iVar7 = iVar9;
    }
    iVar9 = 0;
    if (-1 < iVar4) {
      iVar9 = iVar7;
    }
    iVar8 = iVar5 + iVar9 * iVar10;
    iVar4 = 0xc;
  }
  param_1[5] = iVar9 + iVar2;
  if (iVar1 < iVar3) {
    iVar2 = 0x2f8;
    if (param_2 != 0) {
      iVar2 = 0x2f8;
      if (*(int *)(param_2 + 4) != 0) {
        iVar2 = *(int *)(param_2 + 4);
      }
    }
    iVar2 = (iVar2 - iVar3) / 2;
  }
  else {
    iVar2 = (iVar1 - iVar3) / 2 + PF_PART4(auVar11, 0);
  }
  if (iVar6 - iVar8 == 0 || iVar6 < iVar8) {
    iVar7 = 0;
  }
  else {
    iVar7 = (iVar6 - iVar8) / 2;
  }
  *param_1 = iVar2;
  param_1[1] = iVar7 + iVar4;
  param_1[2] = iVar3;
  param_1[3] = iVar8;
  return;
}


#define auStack_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 112))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007254
 */

void recovered_10007254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       undefined8 param_5)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uint value;

  pf_app_terror_ui_text(auStack_100,param_4);
  value = terror_ui_colour((uint)param_5);
  pf_app_terror_ui_view_foreground(auStack_a0,auStack_100,value);
  memcpy(auStack_160,auStack_a0,0x60);
  pf_app_terror_ui_view_alignment(auStack_100,auStack_160,3);
  memcpy(auStack_a0,auStack_100,0x60);
  memcpy(auStack_100,auStack_a0,0x60);
  recovered_1000708c(param_1,param_2,param_3,auStack_100);
  return;
}

#undef auStack_160
#undef auStack_100
#undef auStack_a0

#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define puStack_40 (*(undefined8 * *)(pf_stack_frame + 112))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 120))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007300
 */

void recovered_10007300(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6,undefined4 param_7)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  uStack_34 = 0;
  puStack_40 = param_1;
  uStack_38 = param_7;
  pf_app_terror_ui_text_field(auStack_a0,param_4,param_5,(uchar)param_6,recovered_10007620,&puStack_40);
  recovered_1000708c(param_1,param_2,param_3,auStack_a0);
  return;
}

#undef auStack_a0
#undef puStack_40
#undef uStack_38
#undef uStack_34

#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_24 (*(char *)(pf_stack_frame + 44))
#define iStack_3c (*(int *)(pf_stack_frame + 20))
#define iStack_28 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007364
 */

uint128 recovered_10007364(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  recovered_100070d0(&local_40,param_1);
  iVar1 = local_40 + 0x12;
  if ((param_2 & 0xfffffffe) == 4) {
    iVar2 = 3;
    if (local_24 == '\0') {
      iVar2 = 4;
    }
    iVar2 = iVar2 * local_2c;
    local_38 = (local_38 + -0x2c) / 2;
    if (param_2 == 5) {
      iVar1 = local_40 + local_38 + 0x1a;
    }
  }
  else {
    iVar2 = local_2c * param_2;
    local_38 = local_38 + -0x24;
  }
  PF_PART4(auVar3, 4) = iStack_28 + iStack_3c + iVar2;
  PF_PART4(auVar3, 0) = iVar1;
  PF_PART4(auVar3, 12) = local_30;
  PF_PART4(auVar3, 8) = local_38;
  return auVar3;
}

#undef local_40
#undef local_38
#undef local_30
#undef local_2c
#undef local_24
#undef iStack_3c
#undef iStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007404
 */

int recovered_10007404(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;

  iVar7 = 0;
  piVar1 = (int *)(param_1 + 0x75c);
  for (uVar8 = 0; uVar8 != *(uint *)(param_1 + 0x860); uVar8 = uVar8 + 1) {
    iVar10 = piVar1[uVar8];
    if (1 < iVar10 + 1U) {
      uVar9 = 0;
      do {
        if (uVar8 == uVar9) {
          if (iVar7 == param_2) {
            return iVar10;
          }
          iVar7 = iVar7 + 1;
          break;
        }
        piVar4 = piVar1 + uVar9;
        uVar9 = uVar9 + 1;
      } while (*piVar4 != iVar10);
    }
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x3db4);
  uVar8 = uVar9;
LAB_10007480:
  do {
    do {
      uVar11 = uVar8;
      iVar10 = (int)uVar11;
      if (iVar10 == 0) {
        return 0;
      }
      uVar8 = (ulong)(iVar10 - 1);
      piVar4 = (int *)(*(long *)(param_1 + 0x3ca0) + uVar8 * 0x10c);
      lVar2 = 8;
      if ((char)piVar4[5] == '\0') {
        lVar2 = 4;
      }
      iVar10 = *(int *)((long)piVar4 + lVar2);
    } while (*piVar4 != *(int *)(param_1 + 0x5c0) || iVar10 + 1U < 2);
    piVar5 = piVar1;
    uVar6 = (ulong)*(uint *)(param_1 + 0x860);
    do {
      if (uVar6 == 0) {
        piVar5 = (int *)(*(long *)(param_1 + 0x3ca0) + uVar9 * 0x10c + -0x10c);
        uVar6 = uVar9;
        goto LAB_100074e8;
      }
      iVar3 = *piVar5;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 != iVar10);
  } while( true );
LAB_100074e8:
  if (uVar6 <= uVar11) goto LAB_10007520;
  if (*piVar5 == *piVar4) {
    lVar2 = 8;
    if ((char)piVar5[5] == '\0') {
      lVar2 = 4;
    }
    if (*(int *)((long)piVar5 + lVar2) == iVar10) goto LAB_10007480;
  }
  piVar5 = piVar5 + -0x43;
  uVar6 = uVar6 - 1;
  goto LAB_100074e8;
LAB_10007520:
  if (iVar7 == param_2) {
    return iVar10;
  }
  iVar7 = iVar7 + 1;
  goto LAB_10007480;
}


#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 112))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 208))
#define puStack_50 (*(undefined8 * *)(pf_stack_frame + 304))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 312))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007548
 */

void recovered_10007548(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  uint uVar1;

  puStack_50 = param_1;
  uStack_48 = param_5;
  uStack_44 = param_6;
  pf_app_terror_ui_button(auStack_b0,param_4,recovered_10007620,&puStack_50);
  if (param_7 != 0) {
    uVar1 = terror_ui_colour(0x2b);
    memcpy(auStack_170,auStack_b0,0x60);
    pf_app_terror_ui_view_background(auStack_110,auStack_170,uVar1);
    memcpy(auStack_b0,auStack_110,0x60);
    uVar1 = terror_ui_colour(0xe);
    memcpy(auStack_170,auStack_b0,0x60);
    pf_app_terror_ui_view_foreground(auStack_110,auStack_170,uVar1);
    memcpy(auStack_b0,auStack_110,0x60);
  }
  memcpy(auStack_110,auStack_b0,0x60);
  recovered_1000708c(param_1,param_2,param_3,auStack_110);
  return;
}

#undef auStack_170
#undef auStack_110
#undef auStack_b0
#undef puStack_50
#undef uStack_48
#undef uStack_44

#undef DAT_100089e8
#define DAT_100089e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
#undef DAT_10009536
#define DAT_10009536 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe86U)))
#undef DAT_100095f1
#define DAT_100095f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf41U)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7a5cU)))
#undef PTR_FUN_10010010
#define PTR_FUN_10010010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef PTR_FUN_10010018
#define PTR_FUN_10010018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef str_1000953a
#define str_1000953a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8aU)))
#undef str_10009567
#define str_10009567 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb7U)))
#undef str_10009594
#define str_10009594 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee4U)))
#undef str_100095c4
#define str_100095c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf14U)))
#undef str_100095e9
#define str_100095e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf39U)))
#undef str_100095f6
#define str_100095f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf46U)))
#undef str_10009638
#define str_10009638 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf88U)))
#undef str_10009665
#define str_10009665 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb5U)))
#undef str_100097a6
#define str_100097a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f6U)))
#define in_stack_ffffffffffffffc8 (*(undefined8 *)(pf_stack_frame + 40))
#define aiStack_50 (*(int (*)[20])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

void recovered_10007620(long *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte *a;
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;

  plVar9 = (long *)*param_1;
  if ((*(byte *)(plVar9 + 2) & 1) != 0) {
    return;
  }
  lVar15 = *plVar9;
  *(undefined1 *)(plVar9 + 2) = 1;
  switch((uintptr_t)((int)param_1[1])) {
  case 0:
    uVar10 = *(uint *)(lVar15 + 0x5c4);
    if (uVar10 != 0) {
      lVar17 = 0;
      uVar11 = 0;
      do {
        lVar13 = 0;
        piVar14 = (int *)(lVar15 + 0x5c8 + lVar17 * 4);
        do {
          if (lVar17 - (ulong)uVar10 == lVar13) {
            DAT_1001010c = *(undefined4 *)(lVar15 + 0x5c8 + (ulong)uVar11 * 4);
            *(undefined4 *)(lVar15 + 0x5c0) = DAT_1001010c;
            *(undefined4 *)(lVar15 + 0x618) = 0;
            *(int *)(lVar15 + 0x3910) = *(int *)(lVar15 + 0x3910) + 1;
            *(undefined1 *)(lVar15 + 0x598) = 0;
            *(undefined4 *)(lVar15 + 0x860) = 0;
            *(undefined1 *)(lVar15 + 0x391f) = 0;
            memset((void *)(lVar15 + 0x974),0,0x108);
            memset((void *)(lVar15 + 0xa84),0,8);
            goto switchD_10007684_caseD_7;
          }
          iVar5 = *piVar14;
          lVar13 = lVar13 + -1;
          piVar14 = piVar14 + 1;
        } while (iVar5 != *(int *)(lVar15 + 0x5c0));
        lVar17 = lVar17 - lVar13;
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = (uint)lVar17 / uVar10;
        }
        uVar11 = (uint)lVar17 - uVar11 * uVar10;
      } while( true );
    }
  case 7:
switchD_10007684_caseD_7:
    *(undefined1 *)(lVar15 + 0x391c) = 1;
    break;
  case 1:
    if (7 < *(uint *)((long)param_1 + 0xc)) {
      return;
    }
    *(uint *)(lVar15 + 0x610) = *(uint *)((long)param_1 + 0xc);
    goto LAB_100077a4;
  case 2:
    uVar10 = *(uint *)(lVar15 + 0x610);
    uVar11 = uVar10;
    if (uVar10 < 2) {
      uVar11 = 1;
    }
    if (uVar10 == 0) {
      for (lVar17 = 0; lVar17 != 7; lVar17 = lVar17 + 1) {
        if (*(char *)(lVar15 + 0xa85 + lVar17) == '\0') {
          uVar10 = (int)lVar17 + 1;
          goto LAB_10007920;
        }
      }
      uVar10 = uVar11;
    }
LAB_10007920:
    *(undefined8 *)(lVar15 + 0x3dc0) = DAT_100089e8;
    goto LAB_1000792c;
  case 3:
    *(undefined4 *)(lVar15 + 0x3dc0) = 2;
    *(undefined4 *)(lVar15 + 0x3e34) = 0;
    if (*(uint *)(lVar15 + 0x3e30) == 0) {
      *(undefined1 *)(lVar15 + 0x3dcd) = 0;
    }
    else {
      snprintf((char *)(lVar15 + 0x3dcd),0x21,str_100097a6,*(uint *)(lVar15 + 0x3e30));
    }
    break;
  case 4:
    *(undefined4 *)(lVar15 + 0x3e30) = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)(lVar15 + 0x618) = 0;
    *(int *)(lVar15 + 0x3910) = *(int *)(lVar15 + 0x3910) + 1;
    *(undefined4 *)(lVar15 + 0x3dc0) = 0;
    break;
  case 5:
    uVar10 = 0;
    uVar11 = *(uint *)(lVar15 + 0x3db4);
    for (lVar17 = 0; (ulong)uVar11 * 0x10c != lVar17; lVar17 = lVar17 + 0x10c) {
      bVar4 = recovered_100079a4(lVar15,(int *)(*(long *)(lVar15 + 0x3ca0) + lVar17));
      uVar10 = uVar10 + bVar4;
    }
    uVar11 = *(int *)(lVar15 + 0x618) + 1;
    if (uVar11 < uVar10) {
      *(uint *)(lVar15 + 0x618) = uVar11;
    }
    break;
  case 6:
    *(undefined4 *)(lVar15 + 0x618) = 0;
    break;
  case 8:
    uVar7 = recovered_1000444c(lVar15,*(byte **)(lVar15 + 0x3d8));
    if ((int)uVar7 != 0) {
      if (*(undefined1 **)(lVar15 + 0x3d8) != (undefined1 *)0x0) {
        **(undefined1 **)(lVar15 + 0x3d8) = 0;
      }
      *(undefined8 *)(lVar15 + 0x3e0) = 0;
    }
    break;
  case 9:
    a = (byte *)(lVar15 + 0x3dcd);
    if (*(int *)(lVar15 + 0x3dc0) == 2) {
      iVar5 = strcmp((char *)a,&DAT_10009536);
      if (iVar5 == 0) {
        iVar5 = 0;
LAB_10005cc8:
        *(int *)(lVar15 + 0x3e30) = iVar5;
        *(undefined4 *)(lVar15 + 0x618) = 0;
        *(int *)(lVar15 + 0x3910) = *(int *)(lVar15 + 0x3910) + 1;
        *(undefined4 *)(lVar15 + 0x3dc0) = 0;
        return;
      }
      pbVar16 = (byte *)(lVar15 + 0x3dce);
      if (*(char *)(lVar15 + 0x3dcd) != '!') {
        pbVar16 = a;
      }
      uVar12 = strlen((char *)pbVar16);
      if (uVar12 == 8) {
        iVar5 = 0;
        while( true ) {
          bVar2 = *pbVar16;
          if (bVar2 == 0) break;
          uVar10 = bVar2 - 0x30U;
          if (uVar10 < 10) {
            uVar10 = uVar10 & 0xff;
          }
          else {
            uVar10 = (uint)bVar2;
            if (uVar10 - 0x61 < 6) {
              uVar10 = uVar10 - 0x57;
            }
            else {
              if (5 < uVar10 - 0x41) {
                pcVar8 = str_10009567;
                goto LAB_10005d80;
              }
              uVar10 = uVar10 - 0x37;
            }
          }
          iVar5 = uVar10 + iVar5 * 0x10;
          pbVar16 = pbVar16 + 1;
        }
        if (1 < iVar5 + 1U) goto LAB_10005cc8;
        pcVar8 = str_10009594;
      }
      else {
        pcVar8 = str_1000953a;
      }
    }
    else if ((*a == 0) || (*(char *)(lVar15 + 0x3dee) == '\0')) {
      pcVar8 = str_100095c4;
    }
    else {
      pbVar16 = (byte *)(lVar15 + 0x3dee);
      uVar12 = strlen((char *)pbVar16);
      iVar5 = strcmp((char *)pbVar16,str_100095e9);
      if (iVar5 == 0) {
        bVar4 = true;
      }
      else {
        iVar5 = strcmp((char *)pbVar16,&DAT_100095f1);
        bVar4 = iVar5 == 0;
      }
      if ((uVar12 == 0x40) || (uVar12 == 0x20)) {
        bVar4 = true;
        pbVar3 = pbVar16;
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          bVar2 = *pbVar3;
          if (9 < bVar2 - 0x30U && 5 < bVar2 - 0x61U) {
            bVar4 = (bool)(bVar2 - 0x41U < 6 & bVar4);
          }
          pbVar3 = pbVar3 + 1;
        }
      }
      if ((*(int *)(lVar15 + 0x3dc8) - 8U < 0xfffffff9) || (!(bool)(*a != 0 & bVar4))) {
        pcVar8 = str_100095f6;
      }
      else {
        uVar10 = *(uint *)(lVar15 + 0x38f4);
        if (uVar10 == 0x20) {
          pcVar8 = str_10009638;
        }
        else {
          lVar17 = lVar15 + (ulong)(uintptr_t)uVar10 * 0x168;
          *(uint *)(lVar15 + 0x38f4) = uVar10 + 1;
          memset((void *)(lVar17 + 0xa8c),0,0x168);
          *(undefined4 *)(lVar17 + 0xa8c) = 2;
          iVar5 = *(int *)(lVar15 + 0x38f8) + 1;
          *(int *)(lVar15 + 0x38f8) = iVar5;
          *(int *)(lVar17 + 0xa90) = iVar5;
          *(undefined4 *)(lVar17 + 0xa94) = DAT_1001010c;
          *(undefined4 *)(lVar17 + 0xa98) = *(undefined4 *)(lVar15 + 0x3dc8);
          *(undefined1 *)(lVar17 + 0xaa0) = *(undefined1 *)(lVar15 + 0x3dcc);
          memcpy((void *)(lVar17 + 0xb91),a,0x21);
          memcpy((void *)(lVar17 + 0xbb2),pbVar16,0x41);
          *(undefined4 *)(lVar15 + 0x3dc0) = 0;
          memset(pbVar16,0,0x41);
          *(undefined1 *)(lVar15 + 0x3920) = 0;
          pcVar8 = str_10009665;
        }
      }
    }
LAB_10005d80:
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x2cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_10010018)(lVar15 + 0x470,0x80,pcVar8);
    return;
  case 10:
    *(undefined4 *)(lVar15 + 0x3dc0) = 0;
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_10010010)(lVar15 + 0x3dee,0,0x41);
    return;
  case 0xb:
    uVar10 = *(uint *)(lVar15 + 0x3dc8) % 7 + 1;
LAB_1000792c:
    *(uint *)(lVar15 + 0x3dc8) = uVar10;
    *(undefined1 *)(lVar15 + 0x3dcc) = 1;
    snprintf((char *)(lVar15 + 0x3dcd),0x21,&DAT_10008c9a);
    *(undefined1 *)(lVar15 + 0x3dee) = 0;
    return;
  case 0xc:
    *(byte *)(lVar15 + 0x3dcc) = *(byte *)(lVar15 + 0x3dcc) ^ 1;
    break;
  case 0xd:
    *(undefined4 *)(lVar15 + 0x3dc4) = 0;
    break;
  case 0xe:
    *(undefined4 *)(lVar15 + 0x3dc4) = 1;
    break;
  case 0xf:
    recovered_100070d0(aiStack_50,lVar15);
    iVar1 = *(int *)(lVar15 + 0x3e34);
    iVar6 = recovered_10007404(lVar15,iVar1 + 1 <<
                                      (ulong)(((byte)((ulong)in_stack_ffffffffffffffc8 >> 0x20) ^ 1)
                                             & 0x1f));
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar1 + 1;
    }
    *(int *)(lVar15 + 0x3e34) = iVar5;
    break;
  case 0x10:
    uVar10 = 1;
    do {
      uVar12 = (ulong)(*(int *)(lVar15 + 0x610) + uVar10) & 7;
      if ((uVar10 & 7) == (-*(int *)(lVar15 + 0x610) & 7U)) break;
      uVar10 = uVar10 + 1;
    } while (*(char *)(lVar15 + 0xa84 + uVar12) == '\0');
    *(int *)(lVar15 + 0x610) = (int)uVar12;
LAB_100077a4:
    *(undefined4 *)(lVar15 + 0x3e30) = 0;
    *(undefined4 *)(lVar15 + 0x618) = 0;
    *(int *)(lVar15 + 0x3910) = *(int *)(lVar15 + 0x3910) + 1;
  }
  return;
}

#undef DAT_100089e8
#undef DAT_10008c9a
#undef DAT_10009536
#undef DAT_100095f1
#undef DAT_1001010c
#undef PTR_FUN_10010010
#undef PTR_FUN_10010018
#undef str_1000953a
#undef str_10009567
#undef str_10009594
#undef str_100095c4
#undef str_100095e9
#undef str_100095f6
#undef str_10009638
#undef str_10009665
#undef str_100097a6
#undef in_stack_ffffffffffffffc8
#undef aiStack_50

#undef DAT_10008c9a
#define DAT_10008c9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007944
 */

void recovered_10007944(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x3dc8) = param_2;
  *(undefined1 *)(param_1 + 0x3dcc) = 1;
  snprintf((char *)(param_1 + 0x3dcd),0x21,&DAT_10008c9a,
                     (void *)(param_1 + (ulong)param_2 * 0x20 + (ulong)param_2 + 0x974));
  *(undefined1 *)(param_1 + 0x3dee) = 0;
  return;
}

#undef DAT_10008c9a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079a4
 */

bool recovered_100079a4(long param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  if (*param_2 != *(int *)(param_1 + 0x5c0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x3e30) == 0) {
    if (param_2[4] != *(int *)(param_1 + 0x610)) {
      return false;
    }
    bVar1 = param_2[2] == -1;
  }
  else {
    iVar2 = param_2[2];
    if ((char)param_2[5] != '\x01') {
      if (iVar2 == -1) {
        return false;
      }
      iVar2 = param_2[1];
    }
    bVar1 = iVar2 == *(int *)(param_1 + 0x3e30);
  }
  return bVar1;
}


#undef DAT_100097c2
#define DAT_100097c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1112U)))
#undef str_100096d7
#define str_100096d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1027U)))
#undef str_100097c7
#define str_100097c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1117U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a04
 */

void recovered_10007a04(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *arg2;
  char *arg3;

  arg3 = (char *)(ulong)*(uint *)(param_1 + 0x3e30);
  if (*(uint *)(param_1 + 0x3e30) == 0) {
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x610) * 0x21;
    arg3 = str_100097c7;
    if (*(char *)(lVar1 + 0x974) != '\0') {
      arg3 = (char *)(lVar1 + 0x974);
    }
    arg2 = &DAT_100097c2;
  }
  else {
    arg2 = str_100096d7;
  }
  snprintf(param_2,0x38,arg2,(ulonglong)arg3);
  return;
}

#undef DAT_100097c2
#undef str_100096d7
#undef str_100097c7

#undef DAT_10010108
#define DAT_10010108 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a70
 */

uint128 recovered_10007a70(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint128 auVar7;

  auVar7 = recovered_1000419c(param_1);
  uVar1 = PF_PART4(auVar7, 12) + PF_PART4(auVar7, 4) + 8;
  iVar3 = 400;
  iVar5 = 0x2e4;
  if (param_1 != 0) {
    iVar5 = 0x2e4;
    if (*(int *)(param_1 + 4) != 0) {
      iVar5 = *(int *)(param_1 + 4) + -0x14;
    }
    iVar3 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar3 - uVar1;
  iVar4 = iVar3 + -10;
  if (DAT_10010108 != 0) {
    iVar5 = PF_PART4(auVar7, 8) + -0x60;
  }
  if (param_1 == 0) {
    if (iVar5 < 0xf) {
      iVar5 = 0xe;
    }
LAB_10007b18:
    if (0x1b < iVar3) goto LAB_10007b28;
    iVar6 = 10;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x3d0) + 8;
    if (*(int *)(param_1 + 0x3d0) < 1) {
      iVar6 = 0xe;
    }
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x3d4);
    if (iVar6 < 1) goto LAB_10007b18;
    if (iVar6 + 8 <= iVar4) goto LAB_10007b28;
  }
  iVar4 = iVar6 + 8;
LAB_10007b28:
  uVar2 = 10;
  if (DAT_10010108 != 0) {
    uVar2 = PF_PART8(auVar7, 0) & 0xffffffff;
  }
  PF_PART8(auVar7, 0) = uVar2 | (ulong)uVar1 << 0x20;
  PF_PART4(auVar7, 12) = iVar4;
  PF_PART4(auVar7, 8) = iVar5;
  return auVar7;
}

#undef DAT_10010108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b50
 */

uint128 recovered_10007b50(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint128 auVar9;
  uint128 auVar10;

  auVar9 = recovered_100059f8(param_1);
  uVar6 = PF_PART8(auVar9, 0) >> 0x20;
  uVar8 = PF_PART8(auVar9, 8) >> 0x20;
  iVar1 = recovered_10003f20(param_1);
  uVar3 = recovered_10003e70(param_1);
  uVar2 = recovered_10003aec(param_1);
  iVar5 = (int)uVar3;
  if (iVar1 < iVar5 && 0 < (int)uVar2) {
    uVar7 = PF_PART4(auVar9, 12);
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = (int)(iVar1 * uVar7) / iVar5;
    }
    if ((int)uVar4 < 0x13) {
      uVar4 = 0x12;
    }
    if ((int)uVar7 <= (int)uVar4) {
      uVar4 = uVar7;
    }
    uVar8 = (ulong)uVar4;
    iVar1 = 0;
    if ((ulong)uVar2 != 0) {
      iVar1 = (int)(((long)*(int *)(param_1 + 0x42c) * (long)(int)(uVar7 - uVar4)) /
                   (long)(ulong)uVar2);
    }
    uVar6 = (ulong)(uint)(iVar1 + PF_PART4(auVar9, 4));
  }
  PF_PART8(auVar10, 8) = PF_PART8(auVar9, 8) & 0xffffffff | uVar8 << 0x20;
  PF_PART8(auVar10, 0) = PF_PART8(auVar9, 0) & 0xffffffff | uVar6 << 0x20;
  return auVar10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c04
 */

uint128 recovered_10007c04(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_1000419c(param_1);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000) -
                 0x1dfffffff6;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c20
 */

void recovered_10007c20(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)(param_1 + 0x42c) + -1;
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x42c) + 1;
  }
  *(int *)(param_1 + 0x42c) = iVar3;
  uVar2 = *(uint *)(param_1 + 0x42c);
  uVar4 = recovered_10003aec(param_1);
  uVar1 = uVar2;
  if ((int)uVar4 <= (int)uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = 0;
  if (-1 < (int)uVar2) {
    uVar4 = uVar1;
  }
  *(uint *)(param_1 + 0x42c) = uVar4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c38
 */

int recovered_10007c38(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  return ((param_1 * 0x20 * param_1 * 0x20 * (param_1 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 +
          0x200 >> 10) + 2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c78
 */

void recovered_10007c78(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_w21;

  uVar7 = 0x2f8;
  if (param_1 != 0) {
    uVar7 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar7 = *(uint *)(param_1 + 4);
    }
  }
  uVar4 = (uint)param_2;
  uVar8 = uVar4;
  if ((int)uVar7 <= (int)uVar4) {
    uVar8 = uVar7;
  }
  uVar7 = 0;
  if (-1 < (int)uVar4) {
    uVar7 = uVar8;
  }
  uVar8 = 400;
  if (param_1 != 0) {
    uVar8 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar8 = *(uint *)(param_1 + 8);
    }
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar5;
  if ((int)uVar8 <= (int)uVar5) {
    uVar2 = uVar8;
  }
  uVar8 = 0;
  if (-1 < param_2) {
    uVar8 = uVar2;
  }
  iVar1 = uVar4 + (int)param_3;
  iVar9 = 0x2f8;
  if (param_1 != 0) {
    iVar9 = 0x2f8;
    if (*(int *)(param_1 + 4) != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
  }
  iVar6 = iVar1;
  if (iVar9 <= iVar1) {
    iVar6 = iVar9;
  }
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar6;
  }
  iVar1 = uVar5 + (int)((ulong)param_3 >> 0x20);
  iVar6 = 400;
  if (param_1 != 0) {
    iVar6 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar6 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar6 <= iVar1) {
    iVar3 = iVar6;
  }
  iVar6 = 0;
  if (-1 < iVar1) {
    iVar6 = iVar3;
  }
  for (; uVar4 = uVar7, (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
    for (; (int)uVar4 < iVar9; uVar4 = uVar4 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10007edc(param_1,uVar4,uVar8,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d7c
 */

void recovered_10007d7c(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_w21;
  uint uVar9;
  ulong uVar10;

  uVar10 = param_3 & 0xffffffff | 0x100000000;
  recovered_10007c78(param_1,param_2,uVar10,param_4 & 0xffffff);
  recovered_10007c78(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar10,param_4 & 0xffffff);
  recovered_10007c78(param_1,param_2,param_3 & 0xffffffff00000000 | 1,param_4 & 0xffffff);
  iVar1 = (int)param_3 + (int)param_2;
  uVar9 = iVar1 - 1;
  uVar6 = 0x2f8;
  if (param_1 != 0) {
    uVar6 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
  }
  uVar7 = uVar9;
  if ((int)uVar6 <= (int)uVar9) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if (-1 < (int)uVar9) {
    uVar6 = uVar7;
  }
  uVar7 = 400;
  if (param_1 != 0) {
    uVar7 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar7 = *(uint *)(param_1 + 8);
    }
  }
  uVar4 = (uint)(param_2 >> 0x20);
  uVar2 = uVar4;
  if ((int)uVar7 <= (int)uVar4) {
    uVar2 = uVar7;
  }
  uVar7 = 0;
  if (-1 < (long)((ulong)uVar9 | param_2 & 0xffffffff00000000)) {
    uVar7 = uVar2;
  }
  iVar8 = 0x2f8;
  if (param_1 != 0) {
    iVar8 = 0x2f8;
    if (*(int *)(param_1 + 4) != 0) {
      iVar8 = *(int *)(param_1 + 4);
    }
  }
  iVar5 = iVar1;
  if (iVar8 <= iVar1) {
    iVar5 = iVar8;
  }
  iVar8 = 0;
  if (-1 < iVar1) {
    iVar8 = iVar5;
  }
  iVar1 = uVar4 + (int)(param_3 >> 0x20);
  iVar5 = 400;
  if (param_1 != 0) {
    iVar5 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar5 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar5 <= iVar1) {
    iVar3 = iVar5;
  }
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar3;
  }
  for (; uVar9 = uVar6, (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
    for (; (int)uVar9 < iVar8; uVar9 = uVar9 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10007edc(param_1,uVar9,uVar7,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e20
 */

void recovered_10007e20(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;

  uVar3 = 0;
  uVar5 = ((int)param_3 + 1) / 2;
  if (3 < (int)uVar5) {
    uVar5 = 4;
  }
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  iVar2 = -4;
  if (param_4 == 0) {
    iVar2 = -2;
  }
  iVar2 = iVar2 + (int)((ulong)param_2 >> 0x20) + (int)((ulong)param_3 >> 0x20) / 2;
  for (lVar4 = -(ulong)uVar5; lVar4 != 0; lVar4 = lVar4 + 1) {
    uVar5 = uVar5 - 1;
    uVar1 = uVar3;
    if (param_4 == 0) {
      uVar1 = uVar5;
    }
    recovered_10007c78(param_1,CONCAT44(iVar2,((int)param_3 / 2 + (int)param_2) - uVar1),
                       (ulong)(uVar1 << 1) | 0x100000001,param_5 & 0xffffff);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007edc
 */

void recovered_10007edc(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  if (((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x388) != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    iVar1 = 0x2f8;
    if (iVar3 != 0) {
      iVar1 = iVar3;
    }
    if ((int)param_2 < iVar1) {
      iVar1 = 400;
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if ((int)param_3 < iVar1) {
        uVar2 = 0xbe0;
        if (iVar3 != 0) {
          uVar2 = iVar3 << 2;
        }
        if (*(uint *)(param_1 + 0xc) != 0) {
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        lVar4 = (ulong)param_2 * 4 + (ulong)uVar2 * (ulong)param_3;
        *(char *)(*(long *)(param_1 + 0x388) + lVar4) = (char)param_4;
        *(char *)(*(long *)(param_1 + 0x388) + lVar4 + 1) = (char)((uint)param_4 >> 8);
        *(char *)(*(long *)(param_1 + 0x388) + lVar4 + 2) = (char)((uint)param_4 >> 0x10);
        *(undefined1 *)(*(long *)(param_1 + 0x388) + lVar4 + 3) = 0xff;
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f7c
 */

void recovered_10007f7c(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  uVar6 = 0x2f8;
  if (param_1 != 0) {
    uVar6 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
  }
  uVar4 = (uint)param_2;
  uVar7 = uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if (-1 < (int)uVar4) {
    uVar6 = uVar7;
  }
  uVar7 = 400;
  if (param_1 != 0) {
    uVar7 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar7 = *(uint *)(param_1 + 8);
    }
  }
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar8;
  if ((int)uVar7 <= (int)uVar8) {
    uVar2 = uVar7;
  }
  uVar7 = 0;
  if (-1 < param_2) {
    uVar7 = uVar2;
  }
  iVar1 = uVar4 + (int)param_3;
  iVar9 = 0x2f8;
  if (param_1 != 0) {
    iVar9 = 0x2f8;
    if (*(int *)(param_1 + 4) != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
  }
  iVar10 = iVar1;
  if (iVar9 <= iVar1) {
    iVar10 = iVar9;
  }
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar10;
  }
  iVar1 = uVar8 + (int)((ulong)param_3 >> 0x20);
  if (param_1 == 0) {
    iVar10 = 400;
  }
  else {
    iVar10 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar10 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar10 <= iVar1) {
    iVar3 = iVar10;
  }
  iVar10 = 0;
  if (-1 < iVar1) {
    iVar10 = iVar3;
  }
  for (; uVar4 = uVar6, (int)uVar7 < iVar10; uVar7 = uVar7 + 1) {
    for (; (int)uVar4 < iVar9; uVar4 = uVar4 + 1) {
      if (((param_1 != 0) && (-1 < (int)(uVar4 | uVar7))) && (*(long *)(param_1 + 0x388) != 0)) {
        iVar3 = *(int *)(param_1 + 4);
        iVar1 = 0x2f8;
        if (iVar3 != 0) {
          iVar1 = iVar3;
        }
        if ((int)uVar4 < iVar1) {
          iVar1 = 400;
          if (*(int *)(param_1 + 8) != 0) {
            iVar1 = *(int *)(param_1 + 8);
          }
          if ((int)uVar7 < iVar1) {
            uVar2 = 0xbe0;
            if (iVar3 != 0) {
              uVar2 = iVar3 << 2;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar2 = *(uint *)(param_1 + 0xc);
            }
            lVar5 = (ulong)uVar4 * 4 + (ulong)uVar7 * (ulong)uVar2;
            *(char *)(*(long *)(param_1 + 0x388) + lVar5) = (char)param_4;
            *(char *)(*(long *)(param_1 + 0x388) + lVar5 + 1) = (char)((uint)param_4 >> 8);
            *(char *)(*(long *)(param_1 + 0x388) + lVar5 + 2) = (char)((uint)param_4 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x388) + lVar5 + 3) = 0xd9;
          }
        }
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080e8
 */

uint recovered_100080e8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = terror_ui_colour(0);
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

uint recovered_100080f0(uint role)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = terror_ui_colour(role);
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff;
}


#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(uint *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008114
 */

void recovered_10008114(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  if ((param_4 != 0) && (0 < (int)param_5)) {
    memset(&lStack_78,0,0x18);
    uVar4 = (param_6 & 0xff00ff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_10003ba0(param_4,param_5,(ulong)(uVar4 >> 0x10 | uVar4 << 0x10),&lStack_78);
    if ((int)uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar5 = 0; uVar5 < uStack_68; uVar5 = uVar5 + 1) {
          lVar7 = lStack_78;
          uVar4 = param_2;
          for (uVar6 = 0; uVar6 < uStack_6c; uVar6 = uVar6 + 1) {
            lVar3 = uVar5 * uStack_64;
            if (*(char *)(lVar7 + lVar3 + 3) != '\0') {
              lVar2 = lVar7 + uVar5 * uStack_64;
              param_5 = param_5 & 0xffffffffff000000 | (ulong)*(byte *)(lVar7 + lVar3) |
                        (ulong)*(byte *)(lVar2 + 1) << 8 | (ulong)*(byte *)(lVar2 + 2) << 0x10;
              recovered_10007edc(param_1,uVar4,(int)uVar5 + param_3,(int)param_5);
            }
            lVar7 = lVar7 + 4;
            uVar4 = uVar4 + 1;
          }
        }
      }
      recovered_10003c0c(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64
