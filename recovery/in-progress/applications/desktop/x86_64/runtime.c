/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020720
#define DAT_10020720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x107U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022178
#define DAT_10022178 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5fU)))
#undef DAT_1002217c
#define DAT_1002217c (*(int *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022180
#define DAT_10022180 (*(int *)(((uintptr_t)pf_module_state + 0x1b67U)))
#undef DAT_10022184
#define DAT_10022184 (*(char *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002218c
#define DAT_1002218c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b73U)))
#undef DAT_10022190
#define DAT_10022190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b77U)))
#undef DAT_10022194
#define DAT_10022194 (*(char *)(((uintptr_t)pf_module_state + 0x1b7bU)))
#undef DAT_10022314
#define DAT_10022314 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cfbU)))
#undef DAT_1002231c
#define DAT_1002231c (*(uint *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022324
#define DAT_10022324 (*(int *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef DAT_10022340
#define DAT_10022340 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(int *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(void * *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022360
#define DAT_10022360 (*(byte *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10022368
#define DAT_10022368 (*(char * *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022370
#define DAT_10022370 (*(int *)(((uintptr_t)pf_module_state + 0x1d57U)))
#undef DAT_10022374
#define DAT_10022374 (*(char *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10022378
#define DAT_10022378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5fU)))
#undef DAT_10022379
#define DAT_10022379 (*(char *)(((uintptr_t)pf_module_state + 0x1d60U)))
#undef DAT_1002237c
#define DAT_1002237c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d63U)))
#undef DAT_10022388
#define DAT_10022388 (*(int *)(((uintptr_t)pf_module_state + 0x1d6fU)))
#undef DAT_1002238c
#define DAT_1002238c (*(uint *)(((uintptr_t)pf_module_state + 0x1d73U)))
#undef DAT_10022390
#define DAT_10022390 (*(uint *)(((uintptr_t)pf_module_state + 0x1d77U)))
#undef DAT_10022394
#define DAT_10022394 (*(uint *)(((uintptr_t)pf_module_state + 0x1d7bU)))
#undef DAT_100223d4
#define DAT_100223d4 (*(uint *)(((uintptr_t)pf_module_state + 0x1dbbU)))
#undef DAT_100223d8
#define DAT_100223d8 (*(uint *)(((uintptr_t)pf_module_state + 0x1dbfU)))
#undef DAT_100223dc
#define DAT_100223dc (*(uint *)(((uintptr_t)pf_module_state + 0x1dc3U)))
#undef DAT_100223e0
#define DAT_100223e0 (*(int *)(((uintptr_t)pf_module_state + 0x1dc7U)))
#undef DAT_100223e8
#define DAT_100223e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dcfU)))
#undef DAT_10022988
#define DAT_10022988 (*(void * *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_10022990
#define DAT_10022990 (*(void * *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_100229a0
#define DAT_100229a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_100252b0
#define DAT_100252b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c97U)))
#undef DAT_1002549c
#define DAT_1002549c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e83U)))
#undef DAT_10025698
#define DAT_10025698 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x507fU)))
#undef DAT_100256a8
#define DAT_100256a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x508fU)))
#undef DAT_100256b0
#define DAT_100256b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5097U)))
#undef DAT_10027048
#define DAT_10027048 (*(void * *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027090
#define DAT_10027090 (*(char *)(((uintptr_t)pf_module_state + 0x6a77U)))
#undef DAT_10027094
#define DAT_10027094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a7bU)))
#undef DAT_10027194
#define DAT_10027194 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7bU)))
#undef DAT_1012c4c8
#define DAT_1012c4c8 (*(char *)(((uintptr_t)pf_module_state + 0x10beafU)))
#undef DAT_1012c4c9
#define DAT_1012c4c9 (*(char *)(((uintptr_t)pf_module_state + 0x10beb0U)))
#undef DAT_1012c4cc
#define DAT_1012c4cc (*(int *)(((uintptr_t)pf_module_state + 0x10beb3U)))
#undef DAT_1012c4d0
#define DAT_1012c4d0 (*(char *)(((uintptr_t)pf_module_state + 0x10beb7U)))
#undef DAT_1012c4d1
#define DAT_1012c4d1 (*(char *)(((uintptr_t)pf_module_state + 0x10beb8U)))
#undef DAT_1012c4d2
#define DAT_1012c4d2 (*(char *)(((uintptr_t)pf_module_state + 0x10beb9U)))
#undef DAT_1012c4d3
#define DAT_1012c4d3 (*(char *)(((uintptr_t)pf_module_state + 0x10bebaU)))
#undef DAT_1012c4d4
#define DAT_1012c4d4 (*(char *)(((uintptr_t)pf_module_state + 0x10bebbU)))
#undef DAT_1012c4d5
#define DAT_1012c4d5 (*(char *)(((uintptr_t)pf_module_state + 0x10bebcU)))
#undef DAT_1012c4d6
#define DAT_1012c4d6 (*(char *)(((uintptr_t)pf_module_state + 0x10bebdU)))
#undef DAT_1012c4d7
#define DAT_1012c4d7 (*(char *)(((uintptr_t)pf_module_state + 0x10bebeU)))
#undef DAT_1012c4d8
#define DAT_1012c4d8 (*(char *)(((uintptr_t)pf_module_state + 0x10bebfU)))
#undef DAT_1012c4d9
#define DAT_1012c4d9 (*(char *)(((uintptr_t)pf_module_state + 0x10bec0U)))
#undef DAT_1012c4da
#define DAT_1012c4da (*(char *)(((uintptr_t)pf_module_state + 0x10bec1U)))
#undef DAT_1012c4db
#define DAT_1012c4db (*(char *)(((uintptr_t)pf_module_state + 0x10bec2U)))
#undef DAT_1012c4dc
#define DAT_1012c4dc (*(char *)(((uintptr_t)pf_module_state + 0x10bec3U)))
#undef DAT_1012c4dd
#define DAT_1012c4dd (*(char *)(((uintptr_t)pf_module_state + 0x10bec4U)))
#undef DAT_1012c4de
#define DAT_1012c4de (*(char *)(((uintptr_t)pf_module_state + 0x10bec5U)))
#undef DAT_1012c4df
#define DAT_1012c4df (*(char *)(((uintptr_t)pf_module_state + 0x10bec6U)))
#undef DAT_1012c4e0
#define DAT_1012c4e0 (*(char *)(((uintptr_t)pf_module_state + 0x10bec7U)))
#undef DAT_1012c4e1
#define DAT_1012c4e1 (*(char *)(((uintptr_t)pf_module_state + 0x10bec8U)))
#undef DAT_1012c4e2
#define DAT_1012c4e2 (*(char *)(((uintptr_t)pf_module_state + 0x10bec9U)))
#undef DAT_1012c4e3
#define DAT_1012c4e3 (*(char *)(((uintptr_t)pf_module_state + 0x10becaU)))
#undef DAT_1012c4e4
#define DAT_1012c4e4 (*(char *)(((uintptr_t)pf_module_state + 0x10becbU)))
#undef DAT_1012c4e5
#define DAT_1012c4e5 (*(char *)(((uintptr_t)pf_module_state + 0x10beccU)))
#undef DAT_1012c4e6
#define DAT_1012c4e6 (*(char *)(((uintptr_t)pf_module_state + 0x10becdU)))
#undef DAT_1012c4e7
#define DAT_1012c4e7 (*(char *)(((uintptr_t)pf_module_state + 0x10beceU)))
#undef DAT_1012c4e8
#define DAT_1012c4e8 (*(char *)(((uintptr_t)pf_module_state + 0x10becfU)))
#undef DAT_1012c4e9
#define DAT_1012c4e9 (*(char *)(((uintptr_t)pf_module_state + 0x10bed0U)))
#undef DAT_1012c4ea
#define DAT_1012c4ea (*(char *)(((uintptr_t)pf_module_state + 0x10bed1U)))
#undef DAT_1012c4eb
#define DAT_1012c4eb (*(char *)(((uintptr_t)pf_module_state + 0x10bed2U)))
#undef DAT_1012c4ec
#define DAT_1012c4ec (*(char *)(((uintptr_t)pf_module_state + 0x10bed3U)))
#undef DAT_1012c4ed
#define DAT_1012c4ed (*(char *)(((uintptr_t)pf_module_state + 0x10bed4U)))
#undef DAT_1012c4ee
#define DAT_1012c4ee (*(char *)(((uintptr_t)pf_module_state + 0x10bed5U)))
#undef DAT_1012c4ef
#define DAT_1012c4ef (*(char *)(((uintptr_t)pf_module_state + 0x10bed6U)))
#undef DAT_1012c4f0
#define DAT_1012c4f0 (*(char *)(((uintptr_t)pf_module_state + 0x10bed7U)))
#undef DAT_1012c4f1
#define DAT_1012c4f1 (*(char *)(((uintptr_t)pf_module_state + 0x10bed8U)))
#undef DAT_1012c4f2
#define DAT_1012c4f2 (*(char *)(((uintptr_t)pf_module_state + 0x10bed9U)))
#undef DAT_1012c4f3
#define DAT_1012c4f3 (*(char *)(((uintptr_t)pf_module_state + 0x10bedaU)))
#undef DAT_1012c4f4
#define DAT_1012c4f4 (*(char *)(((uintptr_t)pf_module_state + 0x10bedbU)))
#undef DAT_1012c4f5
#define DAT_1012c4f5 (*(char *)(((uintptr_t)pf_module_state + 0x10bedcU)))
#undef DAT_1012c4f6
#define DAT_1012c4f6 (*(char *)(((uintptr_t)pf_module_state + 0x10beddU)))
#undef DAT_1012c4f7
#define DAT_1012c4f7 (*(byte *)(((uintptr_t)pf_module_state + 0x10bedeU)))
#undef DAT_1012c4f8
#define DAT_1012c4f8 (*(byte *)(((uintptr_t)pf_module_state + 0x10bedfU)))
#undef DAT_1012c528
#define DAT_1012c528 (*(char *)(((uintptr_t)pf_module_state + 0x10bf0fU)))
#undef DAT_1012c530
#define DAT_1012c530 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10bf17U)))
#undef DAT_1012c538
#define DAT_1012c538 (*(char *)(((uintptr_t)pf_module_state + 0x10bf1fU)))
#undef DAT_1012c53c
#define DAT_1012c53c (*(int *)(((uintptr_t)pf_module_state + 0x10bf23U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006814
#define UINT_00006814 (*(uint *)(0x6814U))
#undef UINT_00006818
#define UINT_00006818 (*(uint *)(0x6818U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_00006880
#define UINT_00006880 (*(uint *)(0x6880U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_0000695c
#define UINT_0000695c (*(uint *)(0x695cU))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#undef UINT_00006970
#define UINT_00006970 (*(uint *)(0x6970U))
#undef UINT_00006974
#define UINT_00006974 (*(uint *)(0x6974U))
#undef UNK_10020721
#define UNK_10020721 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_10020722
#define UNK_10020722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109U)))
#undef UNK_10020723
#define UNK_10020723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10aU)))
#undef UNK_10020724
#define UNK_10020724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bU)))
#undef UNK_10020725
#define UNK_10020725 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef UNK_10020726
#define UNK_10020726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef UNK_10020727
#define UNK_10020727 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10eU)))
#undef UNK_10020728
#define UNK_10020728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef UNK_1002072a
#define UNK_1002072a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef UNK_1002072b
#define UNK_1002072b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112U)))
#undef UNK_1002072c
#define UNK_1002072c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x113U)))
#undef UNK_1002072d
#define UNK_1002072d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef UNK_1002072e
#define UNK_1002072e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x115U)))
#undef UNK_1002072f
#define UNK_1002072f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116U)))
#undef UNK_100256a0
#define UNK_100256a0 (*(char * *)(((uintptr_t)pf_module_state + 0x5087U)))
#undef _DAT_10020720
#define _DAT_10020720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x107U)))
#undef _DAT_100223d4
#define _DAT_100223d4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dbbU)))
#undef _DAT_100256a8
#define _DAT_100256a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x508fU)))
#undef pcRam00000000100256a0
#define pcRam00000000100256a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5087U)))
#undef str_100209d8
#define str_100209d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bfU)))
#undef str_100209ed
#define str_100209ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d4U)))
#undef str_10020a0f
#define str_10020a0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_10020a35
#define str_10020a35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41cU)))
#undef str_10020a4f
#define str_10020a4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_10020a69
#define str_10020a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10020a70
#define str_10020a70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10020a85
#define str_10020a85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46cU)))
#undef str_10020c14
#define str_10020c14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#undef str_10020c20
#define str_10020c20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x607U)))
#undef str_10020c2f
#define str_10020c2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x616U)))
#undef str_100211d1
#define str_100211d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb8U)))
#undef str_100221a0
#define str_100221a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b87U)))
#undef str_10022220
#define str_10022220 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c07U)))
#undef uRam0000000010020722
#define uRam0000000010020722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109U)))
#undef uRam0000000010020723
#define uRam0000000010020723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10aU)))
#undef uRam0000000010020724
#define uRam0000000010020724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bU)))
#undef uRam0000000010020725
#define uRam0000000010020725 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef uRam0000000010020726
#define uRam0000000010020726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef uRam0000000010020727
#define uRam0000000010020727 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10eU)))
#undef uRam0000000010020728
#define uRam0000000010020728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef uRam000000001002072a
#define uRam000000001002072a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef uRam000000001002072b
#define uRam000000001002072b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112U)))
#undef uRam000000001002072c
#define uRam000000001002072c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x113U)))
#undef uRam000000001002072d
#define uRam000000001002072d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef uRam000000001002072e
#define uRam000000001002072e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x115U)))
#undef uRam000000001002072f
#define uRam000000001002072f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116U)))
#define uStack_4250 (*(undefined8 *)(frame + 16))
#define uStack_4240 (*(undefined8 *)(frame + 32))
#define abStack_4220 (*(byte (*)[4])(frame + 64))
#define aiStack_421c (*(int (*)[11])(frame + 68))
#define acStack_41f0 (*(char (*)[408])(frame + 112))
#define uStack_33c (*(undefined4 *)(frame + 16164))
#define pcStack_338 (*(char * *)(frame + 16168))
#define iStack_32c (*(int *)(frame + 16180))
#define local_4248 (*(undefined8 *)(frame + 24))
#define local_4238 (*(uint *)(frame + 40))
#define local_4234 (*(int *)(frame + 44))
#define local_4230 (*(uint (*)[4])(frame + 48))
#define local_4058 (*(int (*)[3910])(frame + 520))
#define local_340 (*(uint *)(frame + 16160))
#define local_330 (*(int *)(frame + 16176))
#define local_328 (*(int *)(frame + 16184))
#define local_324 (*(int *)(frame + 16188))
#define local_c8 (*(uint * *)(frame + 16792))
#define local_c0 (*(ulong *)(frame + 16800))
#define local_b8 (*(ulong *)(frame + 16808))
#define local_b0 (*(ulong *)(frame + 16816))
#define local_a8 (*(ulong *)(frame + 16824))
#define local_a0 (*(ulong *)(frame + 16832))
#define local_98 (*(undefined8 *)(frame + 16840))
#define local_90 (*(ulong *)(frame + 16848))
#define local_88 (*(uint *)(frame + 16856))
#define local_84 (*(int *)(frame + 16860))
#define local_80 (*(ulong *)(frame + 16864))
#define local_78 (*(ulong *)(frame + 16872))
#define local_6c (*(uint *)(frame + 16884))
#define local_68 (*(ulong *)(frame + 16888))
#define local_60 (*(ulong *)(frame + 16896))
#define local_58 (*(ulong *)(frame + 16904))
#define local_50 (*(undefined8 *)(frame + 16912))
#define local_44 (*(int *)(frame + 16924))
#define local_40 (*(ulong *)(frame + 16928))
#define local_38 (*(int *)(frame + 16936))
#define local_32 (*(byte *)(frame + 16942))
#define local_31 (*(byte *)(frame + 16943))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100005f0(void)

{
  unsigned char frame[17024] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint128 auVar4;
  uint128 auVar5;
  uint128 auVar6;
  void *pvVar7;
  uint *b;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar13;
  ulong uVar14;
  uint uVar12;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  char *pcVar27;
  ulong uVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  char *pcVar33;
  byte bVar34;
  uint uVar35;
  int *piVar36;
  char *pcVar37;
  long lVar38;
  undefined8 uVar39;
  bool bVar40;
  bool bVar41;
  byte bVar42;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM6 [16];
  undefined1 in_XMM7 [16];
  uint128 auVar43;
  uint128 auVar44;

  iVar11 = Ram0000000000006800;
  if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
      (uVar9 = Ram0000000000006808, 0xb < uVar9)) && (uVar9 = Ram0000000000006808, 0x43 < uVar9)) {
    uVar9 = UINT_00006840;
    if ((code *)(ulong)uVar9 != (code *)0x0) {
      uStack_4250 = 0x10000649;
      (*(code *)(ulong)uVar9)(str_100209d8);
    }
  }
  DAT_10022170 = 0x3c0;
  DAT_10022174 = 0x21c;
  uStack_4250 = 0x10000672;
  memset(&DAT_10022340,0,0x20);
  uStack_4250 = 0x10000685;
  memset(&DAT_10022378,0,0x70);
  iVar11 = Ram0000000000006800;
  if (((iVar11 != 0x50414d57) || (iVar11 = Ram0000000000006804, iVar11 == 0)) ||
     ((uVar9 = Ram0000000000006808, uVar9 < 0xc || (uVar9 = Ram0000000000006808, uVar9 < 0x18))))
  goto LAB_100007c6;
  uVar9 = UINT_00006814;
  if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_100007c6;
  uStack_4250 = 0x100006d7;
  uVar9 = (*(code *)(ulong)uVar9)();
  if (uVar9 == 0) goto LAB_100007c6;
  iVar11 = Ram0000000000006800;
  if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
     ((uVar9 = Ram0000000000006808, 0xb < uVar9 && (uVar9 = Ram0000000000006808, 0x7f < uVar9)))) {
    uVar9 = UINT_0000687c;
    if ((code *)(ulong)uVar9 != (code *)0x0) {
      uStack_4250 = 0x1000072e;
      uVar9 = (*(code *)(ulong)uVar9)(&DAT_1002237c);
      if (((uVar9 != 0) && (DAT_1002237c != 0)) &&
         ((DAT_10022390 != 0 && DAT_1002238c != 0) &&
          ((DAT_10022388 != 0 && DAT_10022394 < 0x21) &&
          (0xfefe7fffUL >> ((byte)DAT_10022394 & 0x3f) & 1) == 0))) {
        DAT_10022378 = '\x01';
        _DAT_100223d4 = CONCAT44(DAT_10022390 >> 1,DAT_1002238c >> 1);
        uStack_4250 = 0x10000845;
        recovered_1000aa00(((uintptr_t)pf_module_state + 0x1d5fU));
        uStack_4250 = 0x1000084d;
        cVar8 = recovered_10002e10(&DAT_10022378);
        iVar11 = Ram0000000000006800;
        if (DAT_10022348 == (void *)0x0 && cVar8 == '\0') {
          if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
             ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
              (uVar9 = Ram0000000000006808, 0x43 < uVar9)))) {
            uVar9 = UINT_00006840;
            if ((code *)(ulong)uVar9 != (code *)0x0) {
              uStack_4250 = 0x10000956;
              (*(code *)(ulong)uVar9)(str_10020a0f);
            }
          }
          goto LAB_10000d01;
        }
        if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
           ((uVar9 = Ram0000000000006808, 0xb < uVar9 && (uVar9 = Ram0000000000006808, 0x43 < uVar9)
            ))) {
          uVar9 = UINT_00006840;
          if ((code *)(ulong)uVar9 != (code *)0x0) {
            uStack_4250 = 0x100008a7;
            (*(code *)(ulong)uVar9)(str_10020a35);
          }
        }
        if (DAT_10022348 != (void *)0x0) {
          iVar11 = Ram0000000000006800;
          if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
              (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
             (uVar9 = Ram0000000000006808, 0x4f < uVar9)) {
            uVar9 = UINT_0000684c;
            if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_1000095b;
            uStack_4250 = 0x10000902;
            DAT_10022368 = (*(code *)(ulong)uVar9)(0x11120);
          }
          else {
LAB_1000095b:
            DAT_10022368 = (char *)0x0;
          }
          iVar11 = Ram0000000000006800;
          if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
             ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
              (uVar9 = Ram0000000000006808, 0x4f < uVar9)))) {
            uVar9 = UINT_0000684c;
            if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_100009a9;
            uStack_4250 = 0x100009a7;
            DAT_10022988 = (*(code *)(ulong)uVar9)(0x1518);
          }
          else {
LAB_100009a9:
            DAT_10022988 = (void *)0x0;
          }
          iVar11 = Ram0000000000006800;
          if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
             ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
              (uVar9 = Ram0000000000006808, 0x4f < uVar9)))) {
            uVar9 = UINT_0000684c;
            if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_10000a02;
            uStack_4250 = 0x100009f6;
            DAT_10022990 = (*(code *)(ulong)uVar9)(0x50);
          }
          else {
LAB_10000a02:
            DAT_10022990 = (void *)0x0;
          }
          if (((DAT_10022368 != (char *)0x0) && (DAT_10022988 != (void *)0x0)) &&
             (DAT_10022990 != (void *)0x0)) {
            uStack_4250 = 0x10000a39;
            memset(DAT_10022368,0,0x11120);
            uStack_4250 = 0x10000a4c;
            memset(DAT_10022988,0,0x1518);
            uStack_4250 = 0x10000a5f;
            memset(&DAT_100229a0,0,0xdb0);
            uStack_4250 = 0x10000a72;
            memset(&DAT_10023750,0,0x1b60);
            uStack_4250 = 0x10000a85;
            memset(DAT_10022990,0,0x50);
            uStack_4250 = 0x10000a98;
            memset(&DAT_100223e8,0,0x59c);
            uStack_4250 = 0x10000aab;
            memset(&DAT_100252b0,0,0x1ec);
            uStack_4250 = 0x10000abe;
            memset(&DAT_1002549c,0,0x1fc);
            uStack_4250 = 0x10000ad1;
            memset(&DAT_10025698,0,0x18);
            DAT_100256b0 = 0;
            local_340 = 0;
            iVar11 = Ram0000000000006800;
            iVar10 = -1;
            if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
               ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                (uVar9 = Ram0000000000006808, 0xbf < uVar9)))) {
              uVar9 = UINT_000068bc;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x10000b2a;
                iVar10 = (*(code *)(ulong)uVar9)();
              }
            }
            DAT_10022184 = '&';
            DAT_10027090 = '\0';
            DAT_10022188 = 1;
            DAT_1002218c = 8;
            DAT_10022190 = 0x23;
            DAT_10027094 = 0;
            DAT_10022194 = '\x01';
            builtin_strncpy(str_100221a0,"pool.ntp.org",0xd);
            str_10022220[0] = DAT_10020720;
            str_10022220[1] = (*(uint8_t *)(pf_module_state+0x108U));
            str_10022220[2] = uRam0000000010020722;
            str_10022220[3] = uRam0000000010020723;
            str_10022220[4] = uRam0000000010020724;
            str_10022220[5] = uRam0000000010020725;
            str_10022220[6] = uRam0000000010020726;
            str_10022220[7] = uRam0000000010020727;
            str_10022220[8] = (undefined1)uRam0000000010020728;
            str_10022220[9] = PF_PART1(uRam0000000010020728, 1);
            str_10022220[10] = uRam000000001002072a;
            str_10022220[0xb] = uRam000000001002072b;
            str_10022220[0xc] = uRam000000001002072c;
            str_10022220[0xd] = uRam000000001002072d;
            str_10022220[0xe] = uRam000000001002072e;
            str_10022220[0xf] = uRam000000001002072f;
            str_10022220[0x10] = '\0';
            DAT_10022314 = 0xffffffff;
            if (iVar10 < 0) {
LAB_10000bbd:
              uStack_4250 = 0x10000bd0;
              memset(&local_4248,0,0x3f00);
              iVar11 = Ram0000000000006800;
              if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                 ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                  (uVar9 = Ram0000000000006808, 0xc3 < uVar9)))) {
                uVar9 = UINT_000068c0;
                if ((code *)(ulong)uVar9 != (code *)0x0) {
                  uStack_4250 = 0x10000c37;
                  uVar9 = (*(code *)(ulong)uVar9)(&local_4248,0x20,&local_340);
                  if (uVar9 != 0) {
                    if (local_340 < 0x21) {
                      if (local_340 == 0) goto LAB_10000d49;
                    }
                    else {
                      local_340 = 0x20;
                    }
                    piVar36 = local_4058;
                    uVar13 = 0;
                    uVar9 = local_340;
                    do {
                      if (*piVar36 != iVar10) {
                        uStack_4250 = 0x10000d45;
                        uVar14 = recovered_1000acd0(*piVar36);
                        if ((char)uVar14 != '\0') break;
                        uVar9 = local_340;
                      }
                      uVar13 = uVar13 + 1;
                      piVar36 = piVar36 + 0x7e;
                    } while (uVar13 < uVar9);
                  }
                }
              }
            }
            else {
              uStack_4250 = 0x10000bb5;
              uVar13 = recovered_1000acd0(iVar10);
              if ((char)uVar13 == '\0') goto LAB_10000bbd;
            }
LAB_10000d49:
            _DAT_100223d4 = CONCAT44((int)DAT_10022174 / 2,(int)DAT_10022170 / 2);
            uStack_4250 = 0x10000d8f;
            recovered_10003ea0(0,str_10020a69,0xffecd7,'\x01');
            uStack_4250 = 0x10000d94;
            iVar11 = recovered_10004540();
            uStack_4250 = 0x10000da2;
            recovered_100041c0(str_10020a70,iVar11);
            uStack_4250 = 0x10000db5;
            memset(&local_4248,0,0xc);
            iVar11 = Ram0000000000006800;
            if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
               (uVar9 = Ram0000000000006808, 0x37 < uVar9)) {
              uVar9 = UINT_00006834;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x10000e01;
                uVar9 = (*(code *)(ulong)uVar9)(str_10020c14,&local_4248);
                if ((PF_PART4(local_4248, 4) != 0 && (int)local_4248 != 0) && uVar9 != 0) {
                  uStack_4250 = 0x10000e3f;
                  recovered_1000c5f0(local_4248 & 0xffffffff,PF_PART4(local_4248, 4),'\0',&DAT_100229a0,0xc
                                    );
                }
              }
            }
            uStack_4250 = 0x10000e52;
            memset(&local_4248,0,0xc);
            iVar11 = Ram0000000000006800;
            if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
               ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                (uVar9 = Ram0000000000006808, 0x37 < uVar9)))) {
              uVar9 = UINT_00006834;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x10000e9e;
                uVar9 = (*(code *)(ulong)uVar9)(str_10020c20,&local_4248);
                if ((PF_PART4(local_4248, 4) != 0 && (int)local_4248 != 0) && uVar9 != 0) {
                  uStack_4250 = 0x10000edc;
                  recovered_1000c5f0(local_4248 & 0xffffffff,PF_PART4(local_4248, 4),'\0',&DAT_10023750,
                                     0x18);
                }
              }
            }
            uStack_4250 = 0x10000eef;
            memset(&local_4248,0,0xc);
            iVar11 = Ram0000000000006800;
            if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
               ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                (uVar9 = Ram0000000000006808, 0x37 < uVar9)))) {
              uVar9 = UINT_00006834;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x10000f3b;
                uVar9 = (*(code *)(ulong)uVar9)(str_10020c2f,&local_4248);
                if ((PF_PART4(local_4248, 4) != 0 && (int)local_4248 != 0) && uVar9 != 0) {
                  uStack_4250 = 0x10000f74;
                  recovered_1000c5f0(local_4248 & 0xffffffff,PF_PART4(local_4248, 4),'\x01',(char *)0x0,0);
                }
              }
            }
            if (str_10022220[0] == '\0') {
              local_4248 = _DAT_10020720;
              uStack_4240 = (*(uint64_t *)(pf_module_state+0x10fU));
              local_4238 = local_4238 & 0xffffff00;
              uStack_4250 = 0x10000fff;
              memset(&local_340,0,0x18);
            }
            else {
              uVar13 = 1;
              cVar8 = str_10022220[0];
              do {
                uVar14 = uVar13;
                *(char *)((long)local_4230 + (uVar14 - 0x19)) = cVar8;
                if (0xef < uVar14) break;
                cVar8 = str_10022220[uVar14];
                uVar13 = uVar14 + 1;
              } while (cVar8 != '\0');
              *(undefined1 *)((long)local_4230 + (uVar14 - 0x18)) = 0;
              cVar8 = (char)local_4248;
              uStack_4250 = 0x10000fcc;
              memset(&local_340,0,0x18);
              if (cVar8 == '\0') goto LAB_100010de;
            }
            iVar11 = Ram0000000000006800;
            if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
               (uVar9 = Ram0000000000006808, 0x5b < uVar9)) {
              uVar9 = UINT_00006858;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x1000105f;
                uVar9 = (*(code *)(ulong)uVar9)((char *)&local_4248,&local_340);
                if (uVar9 != 0) {
                  if (((DAT_10025698 != (void *)0x0) &&
                      (iVar11 = Ram0000000000006800, iVar11 == 0x50414d57)) &&
                     ((iVar11 = Ram0000000000006804, iVar11 != 0 &&
                      ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                       (uVar9 = Ram0000000000006808, 0x53 < uVar9)))))) {
                    uVar9 = UINT_00006850;
                    if ((code *)(ulong)uVar9 != (code *)0x0) {
                      uStack_4250 = 0x100010ad;
                      (*(code *)(ulong)uVar9)(DAT_10025698);
                    }
                  }
                  uStack_4250 = 0x100010c0;
                  memset(&DAT_10025698,0,0x18);
                  DAT_10025698 = (void *)CONCAT44(uStack_33c,local_340);
                  pcRam00000000100256a0 = pcStack_338;
                  _DAT_100256a8 = CONCAT44(iStack_32c,local_330);
                }
              }
            }
LAB_100010de:
            uStack_4250 = 0x100010e3;
            iVar11 = recovered_10004540();
            uStack_4250 = 0x100010f1;
            recovered_1000c9f0(&DAT_10020a84,iVar11);
            DAT_10022360 = 0;
            uStack_4250 = 0x100010fd;
            recovered_10004810();
            uVar13 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
            if (uVar13 != 0 &&
                ((0 < (long)DAT_10022344 && 0 < (long)DAT_10022340) && DAT_10022348 != (void *)0x0))
            {
              uStack_4250 = 0x10001141;
              uVar14 = recovered_10018260();
              if ((char)uVar14 != '\0') {
                uStack_4250 = 0x1000115b;
                memcpy(DAT_10027048,DAT_10022348,uVar13);
                DAT_10022374 = '\x01';
                DAT_1002217c = -1;
              }
            }
            uStack_4250 = 0x1000117b;
            recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
            uStack_4250 = 0x10001183;
            recovered_100049e0(&DAT_10022378,in_XMM3,in_XMM6,in_XMM7);
            iVar11 = Ram0000000000006800;
            if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
               (uVar9 = Ram0000000000006808, 0x43 < uVar9)) {
              uVar9 = UINT_00006840;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x100011c8;
                (*(code *)(ulong)uVar9)(str_10020a85);
              }
            }
            if (DAT_10022378 == '\x01') {
              local_44 = 0;
              local_38 = 0;
              do {
                if (DAT_10022379 != '\0') break;
                local_b0 = _DAT_100223d4 & 0xffffffff;
                local_a8 = _DAT_100223d4 >> 0x20;
                local_88 = DAT_100223dc;
                local_84 = DAT_100223e0;
                local_78 = (ulong)DAT_10022178;
                if (((DAT_1012c4c8 == '\0') && (DAT_1012c4c9 == '\0')) &&
                   (((int)DAT_10022178 < 0 && ((DAT_10022180 < 0 && (DAT_10022324 < 0)))))) {
                  local_31 = DAT_1002549c;
                  local_58 = 1;
LAB_100012b7:
                  auVar43 = ZEXT816(0);
                }
                else {
                  if (0x13 < DAT_10022178) {
                    local_31 = 1;
                    local_58 = (ulong)(DAT_10022178 >> 0x1f);
                    goto LAB_100012b7;
                  }
                  local_31 = 1;
                  if (DAT_10022368[local_78 * 0xda8] != '\x01') {
                    local_58 = 0;
                    goto LAB_100012b7;
                  }
                  uStack_4250 = 0x10001263;
                  auVar43 = recovered_10005770((long)(DAT_10022368 + local_78 * 0xda8));
                  local_58 = 0;
                }
                local_50 = PF_PART8(auVar43, 8);
                local_68 = PF_PART8(auVar43, 0);
                DAT_10022370 = DAT_10022370 + 1;
                uStack_4250 = 0x100012d9;
                cVar8 = recovered_10002e10(&DAT_10022378);
                local_a0 = CONCAT71(PF_PART7(local_a0, 1),cVar8);
                if (DAT_10022378 == '\x01') {
                  if (((((ulong)DAT_1002231c < 0x14) &&
                       (lVar19 = (ulong)DAT_1002231c * 0xda8, DAT_10022368[lVar19] == '\x01')) &&
                      (DAT_10022368[lVar19 + 1] == '\x01')) &&
                     (*(int *)(DAT_10022368 + lVar19 + 0x10) == 4)) {
                    uStack_4250 = 0x10001327;
                    recovered_10018530(((uintptr_t)pf_module_state + 0x1d5fU));
                    bVar40 = true;
                  }
                  else {
                    bVar40 = false;
                  }
                  uStack_4250 = 0x10001340;
                  memset(&local_4248,0,0x20);
                  iVar11 = Ram0000000000006800;
                  if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                     ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                      (uVar9 = Ram0000000000006808, 0x83 < uVar9)))) {
                    uVar9 = UINT_00006880;
                    if ((code *)(ulong)uVar9 != (code *)0x0) {
                      uStack_4250 = 0x1000139b;
                      uVar9 = (*(code *)(ulong)uVar9)(&local_4248);
                      if (uVar9 != 0) {
                        if ((local_4248 & 1) == 0) {
                          if (((local_4248 & 2) != 0) && (local_4238 != 0 || local_4234 != 0)) {
                            uVar9 = local_4238 + DAT_100223d4;
                            uVar18 = DAT_10022170 - 1;
                            if ((int)uVar9 < (int)(DAT_10022170 - 1)) {
                              uVar18 = uVar9;
                            }
                            if ((int)uVar9 < 0) {
                              uVar18 = 0;
                            }
                            uVar12 = local_4234 + DAT_100223d8;
                            uVar9 = DAT_10022174 - 1;
                            if ((int)uVar12 < (int)(DAT_10022174 - 1)) {
                              uVar9 = uVar12;
                            }
                            if ((int)uVar12 < 0) {
                              uVar9 = 0;
                            }
                            goto LAB_100014db;
                          }
                        }
                        else {
                          uVar9 = 0;
                          uVar12 = 0;
                          if (0 < (int)(uint)uStack_4240) {
                            uVar12 = (uint)uStack_4240;
                          }
                          uVar18 = 0;
                          if (1 < (int)DAT_10022170) {
                            uVar13 = (ulong)local_4230[0];
                            if (uVar13 == 0) {
                              uVar18 = DAT_10022170 - 1;
                              if ((uint)uStack_4240 < DAT_10022170 - 1) {
                                uVar18 = (uint)uStack_4240;
                              }
                              uVar12 = (uint)uStack_4240;
                            }
                            else {
                              uVar18 = DAT_10022170 - 1;
                              uVar14 = (ulong)uVar12 * (ulong)uVar18;
                              if (uVar14 >> 0x20 == 0) {
                                uVar12 = (uint)((uVar14 & 0xffffffff) / uVar13);
                              }
                              else {
                                uVar12 = (uint)(uVar14 / uVar13);
                              }
                              if ((int)uVar12 < (int)uVar18) {
                                uVar18 = uVar12;
                              }
                            }
                            if ((int)uVar12 < 0) {
                              uVar18 = 0;
                            }
                          }
                          uVar12 = 0;
                          if (0 < (int)PF_PART4(uStack_4240, 4)) {
                            uVar12 = PF_PART4(uStack_4240, 4);
                          }
                          if (1 < (int)DAT_10022174) {
                            uVar13 = (ulong)local_4230[1];
                            if (uVar13 == 0) {
                              uVar9 = DAT_10022174 - 1;
                              if (PF_PART4(uStack_4240, 4) < DAT_10022174 - 1) {
                                uVar9 = PF_PART4(uStack_4240, 4);
                              }
                              uVar12 = PF_PART4(uStack_4240, 4);
                            }
                            else {
                              uVar9 = DAT_10022174 - 1;
                              uVar14 = (ulong)uVar12 * (ulong)uVar9;
                              if (uVar14 >> 0x20 == 0) {
                                uVar12 = (uint)((uVar14 & 0xffffffff) / uVar13);
                              }
                              else {
                                uVar12 = (uint)(uVar14 / uVar13);
                              }
                              if ((int)uVar12 < (int)uVar9) {
                                uVar9 = uVar12;
                              }
                            }
                            if ((int)uVar12 < 0) {
                              uVar9 = 0;
                            }
                          }
LAB_100014db:
                          _DAT_100223d4 = CONCAT44(uVar9,uVar18);
                        }
                        DAT_100223e0 = (int)local_4248;
                        DAT_100223dc = PF_PART4(local_4248, 4);
                        if ((local_4248 & 0x10000) != 0) {
                          DAT_100223dc = PF_PART4(local_4248, 4) >> 1 & 1 |
                                         (PF_PART4(local_4248, 4) & 0xfffffffc) +
                                         (PF_PART4(local_4248, 4) & 1) * 2;
                        }
                      }
                    }
                  }
                  if (((((ulong)DAT_1002231c < 0x14) &&
                       (lVar19 = (ulong)DAT_1002231c * 0xda8, DAT_10022368[lVar19] == '\x01')) &&
                      (DAT_10022368[lVar19 + 1] == '\x01')) &&
                     (!bVar40 && *(int *)(DAT_10022368 + lVar19 + 0x10) == 4)) {
                    uStack_4250 = 0x1000154f;
                    recovered_10018530(((uintptr_t)pf_module_state + 0x1d5fU));
                  }
                }
                local_32 = 1;
                if (((((((DAT_1012c4cc == 0) && (DAT_1012c4d0 == '\0')) &&
                       ((DAT_1012c4d1 == '\0' && ((DAT_1012c4d2 == '\0' && (DAT_1012c4d3 == '\0'))))
                       )) && (DAT_1012c4d4 == '\0')) &&
                     (((((DAT_1012c4d5 == '\0' && (DAT_1012c4d6 == '\0')) && (DAT_1012c4d7 == '\0'))
                       && ((DAT_1012c4d8 == '\0' && (DAT_1012c4d9 == '\0')))) &&
                      (((DAT_1012c4da == '\0' && ((DAT_1012c4db == '\0' && (DAT_1012c4dc == '\0'))))
                       && (DAT_1012c4dd == '\0')))))) &&
                    (((DAT_1012c4de == '\0' && (DAT_1012c4df == '\0')) && (DAT_1012c4e0 == '\0'))))
                   && (((((DAT_1012c4e1 == '\0' && (DAT_1012c4e2 == '\0')) &&
                         ((DAT_1012c4e3 == '\0' &&
                          ((DAT_1012c4e4 == '\0' && (DAT_1012c4e5 == '\0')))))) &&
                        ((DAT_1012c4e6 == '\0' &&
                         ((((((DAT_1012c4e7 == '\0' && (DAT_1012c4e8 == '\0')) &&
                             (DAT_1012c4e9 == '\0')) &&
                            ((DAT_1012c4ea == '\0' && (DAT_1012c4eb == '\0')))) &&
                           (DAT_1012c4ec == '\0')) &&
                          ((DAT_1012c4ed == '\0' && (DAT_1012c4ee == '\0')))))))) &&
                       ((((DAT_1012c4ef == '\0' &&
                          (((DAT_1012c4f0 == '\0' && (DAT_1012c4f1 == '\0')) &&
                           (DAT_1012c4f2 == '\0')))) &&
                         (((DAT_1012c4f3 == '\0' && (DAT_1012c4f4 == '\0')) &&
                          (DAT_1012c4f5 == '\0')))) && (DAT_1012c4f6 == '\0')))))) {
                  local_32 = DAT_1012c4f8 | DAT_1012c4f7;
                }
                uStack_4250 = 0x10001743;
                recovered_10005880(((uintptr_t)pf_module_state + 0x1d5fU));
                local_6c = 0;
                uStack_4250 = 0x1000175f;
                uVar9 = terror_ui_window_list(&local_4248,0x10,&local_6c);
                if (uVar9 == 0) {
                  uVar16 = 0;
                }
                else {
                  if (local_6c < 0x11) {
                    if (local_6c != 0) goto LAB_1000195e;
                    uVar16 = 0;
                  }
                  else {
                    local_6c = 0x10;
LAB_1000195e:
                    uVar13 = 0;
                    pcVar33 = acStack_41f0 + 1;
                    uVar16 = 0;
                    do {
                      lVar19 = uVar13 * 0x278;
                      uVar9 = local_4230[uVar13 * 0x9e + -6];
                      uVar14 = 0xffffffff;
                      if (uVar9 != 0) {
                        uVar20 = 1;
                        pcVar37 = DAT_10022368;
                        do {
                          if (((*pcVar37 == '\x01') && (*(int *)(pcVar37 + 0x10) == 6)) &&
                             (*(uint *)(pcVar37 + 0xb24) == uVar9)) {
                            uVar20 = uVar20 - 1;
LAB_10001a4a:
                            uVar14 = uVar20 & 0xffffffff;
                            break;
                          }
                          if (((pcVar37[0xda8] == '\x01') && (*(int *)(pcVar37 + 0xdb8) == 6)) &&
                             (*(uint *)(pcVar37 + 0x18cc) == uVar9)) goto LAB_10001a4a;
                          uVar20 = uVar20 + 2;
                          pcVar37 = pcVar37 + 0x1b50;
                        } while (uVar20 != 0x15);
                      }
                      uVar9 = (uint)uVar14;
                      if ((abStack_4220[lVar19] & 1) == 0) {
                        local_60 = uVar13;
                        if ((int)uVar9 < 0) {
                          pcVar37 = acStack_41f0 + lVar19;
                          pcVar27 = pcVar37;
                          if (acStack_41f0[lVar19] == '\0') {
                            pcVar27 = str_100211d1;
                          }
                          uStack_4250 = 0x10001ac5;
                          uVar14 = recovered_10003ea0(4,pcVar27,0xb784ec,'\0');
                          uVar9 = local_4230[uVar13 * 0x9e];
                          if (uVar9 == 0) {
                            uVar9 = 0x164;
                            if ((int)DAT_10022170 < 0x164) {
                              uVar9 = DAT_10022170;
                            }
                            local_328 = uVar9 - 8;
                          }
                          else {
                            local_328 = DAT_10022170 - 8;
                            if ((int)(uVar9 + 0x1c) < (int)(DAT_10022170 - 8)) {
                              local_328 = uVar9 + 0x1c;
                            }
                            if ((int)uVar9 < 0xc0) {
                              local_328 = 0xdc;
                            }
                          }
                          uVar9 = local_4230[uVar13 * 0x9e + 1];
                          if (uVar9 == 0) {
                            uVar9 = 0x11c;
                            if ((int)DAT_10022174 < 0x11c) {
                              uVar9 = DAT_10022174;
                            }
                            local_324 = uVar9 - 0x20;
                          }
                          else {
                            local_324 = DAT_10022174 - 0x20;
                            if ((int)(uVar9 + 0x34) < (int)(DAT_10022174 - 0x20)) {
                              local_324 = uVar9 + 0x34;
                            }
                            if ((int)uVar9 < 0x58) {
                              local_324 = 0x8c;
                            }
                          }
                          local_330 = (DAT_10022170 - local_328) + -8;
                          iVar11 = aiStack_421c[uVar13 * 0x9e];
                          if (iVar11 < local_330) {
                            local_330 = iVar11;
                          }
                          iVar10 = aiStack_421c[uVar13 * 0x9e + 1];
                          if (iVar11 < 8) {
                            local_330 = 8;
                          }
                          iStack_32c = DAT_10022174 - 0x1c;
                          if (iVar10 < (int)(DAT_10022174 - 0x1c)) {
                            iStack_32c = iVar10;
                          }
                          if (iVar10 < 0x20) {
                            iStack_32c = 0x20;
                          }
                          local_340 = 6;
                          uStack_33c = (undefined4)uVar14;
                          if (acStack_41f0[lVar19] == '\0') {
                            pcVar37 = str_100211d1;
                          }
                          uStack_4250 = 0x10001bcc;
                          pcStack_338 = pcVar37;
                          uVar14 = recovered_1000cbb0((undefined8 *)&local_340);
                          pcVar37 = DAT_10022368;
                          if ((int)uVar14 < 0) goto LAB_100019cc;
                          uVar9 = local_4230[uVar13 * 0x9e + -6];
                          local_90 = CONCAT44(PF_PART4(local_90, 4),(int)uVar14);
                          uVar14 = uVar14 & 0xffffffff;
                          *(uint *)(DAT_10022368 + uVar14 * 0xda8 + 0xb24) = uVar9;
                          local_98 = CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
                        }
                        else {
                          local_90 = CONCAT44(PF_PART4(local_90, 4),uVar9);
                          pcVar37 = DAT_10022368;
                          local_98 = uVar16;
                        }
                        uVar14 = uVar14 * 0xda8;
                        local_80 = CONCAT44(PF_PART4(local_80, 4),*(undefined4 *)(pcVar37 + uVar14 + 0xb54)
                                           );
                        uStack_4250 = 0x10001c39;
                        local_c8 = local_4230 + uVar13 * 0x9e + -6;
                        memcpy(&local_340,pcVar37 + uVar14 + 0xb2c,0x278);
                        b = local_c8;
                        *(int *)(pcVar37 + uVar14 + 0xb28) = DAT_10022370;
                        uStack_4250 = 0x10001c5e;
                        memcpy(pcVar37 + uVar14 + 0xb2c,local_c8,0x278);
                        uVar9 = b[0x10];
                        uVar12 = 0xff;
                        if (uVar9 < 0xff) {
                          uVar12 = uVar9;
                        }
                        cVar8 = DAT_10022184;
                        if (uVar9 != 0xffffffff) {
                          cVar8 = (char)uVar12;
                        }
                        pcVar37[uVar14 + 5] = cVar8;
                        uVar9 = b[0x11];
                        uVar12 = 0xff;
                        if (uVar9 < 0xff) {
                          uVar12 = uVar9;
                        }
                        cVar8 = DAT_10027090;
                        if (uVar9 != 0xffffffff) {
                          cVar8 = (char)uVar12;
                        }
                        pcVar37[uVar14 + 6] = cVar8;
                        uVar9 = b[0x12];
                        uVar12 = uVar9;
                        if (3 < uVar9) {
                          uVar12 = 1;
                        }
                        if (uVar9 == 0xffffffff) {
                          uVar12 = uVar9;
                        }
                        *(uint *)(pcVar37 + uVar14 + 8) = uVar12;
                        *(uint *)(pcVar37 + uVar14 + 0xc) = b[0x13];
                        uStack_4250 = 0x10001ce4;
                        local_40 = uVar14;
                        iVar11 = memcmp(&local_340,b,0x278);
                        bVar42 = iVar11 != 0;
                        cVar8 = (char)b[0x16];
                        if (cVar8 != '\0') {
                          uVar13 = 0;
                          do {
                            uVar20 = uVar13 + 1;
                            pcVar37[uVar13 + uVar14 + 0x18] = cVar8;
                            if (0x3e < uVar20) break;
                            cVar8 = pcVar33[uVar13];
                            uVar13 = uVar20;
                          } while (cVar8 != '\0');
                          pcVar37[uVar20 + uVar14 + 0x18] = '\0';
                        }
                        uVar9 = DAT_1002231c;
                        if ((b[10] & 2) != 0) {
                          uVar13 = local_80 & 2;
                          local_80 = local_80 & 0xffffffff00000002;
                          if ((uVar13 == 0) && ((uint)local_90 != DAT_1002231c)) {
                            (pcVar37 + uVar14 + 1)[0] = '\x01';
                            pvVar7 = DAT_10022990;
                            (pcVar37 + uVar14 + 1)[1] = '\0';
                            uVar12 = 0xffffffff;
                            if (0 < (long)(int)DAT_10027194) {
                              lVar19 = 0;
                              do {
                                if (*(uint *)((long)DAT_10022990 + lVar19 * 4) == (uint)local_90) {
                                  uVar12 = (uint)lVar19;
                                  break;
                                }
                                lVar19 = lVar19 + 1;
                              } while ((int)DAT_10027194 != lVar19);
                            }
                            if (DAT_10022368[local_40] == '\x01') {
                              if ((int)uVar12 < 0) {
                                if ((int)DAT_10027194 < 0x14) {
                                  uVar9 = DAT_10027194;
                                  DAT_10027194 = DAT_10027194 + 1;
                                  goto LAB_10001e2e;
                                }
                              }
                              else {
                                uVar9 = DAT_10027194 - 1;
                                if ((int)uVar12 < (int)uVar9) {
                                  uVar20 = (ulong)uVar12;
                                  uVar13 = uVar9 - uVar20;
                                  if (uVar13 < 8) {
                                    uVar28 = uVar20;
                                  }
                                  else {
                                    uVar15 = uVar13 & 0xfffffffffffffff8;
                                    uVar28 = uVar15 + uVar20;
                                    uVar32 = 0;
                                    do {
                                      puVar2 = (undefined8 *)
                                               ((long)pvVar7 + uVar32 * 4 + uVar20 * 4 + 4);
                                      uVar16 = puVar2[1];
                                      puVar1 = (undefined8 *)
                                               ((long)pvVar7 + uVar32 * 4 + uVar20 * 4 + 0x14);
                                      uVar39 = *puVar1;
                                      uVar3 = puVar1[1];
                                      puVar1 = (undefined8 *)
                                               ((long)pvVar7 + uVar32 * 4 + uVar20 * 4);
                                      *puVar1 = *puVar2;
                                      puVar1[1] = uVar16;
                                      puVar1 = (undefined8 *)
                                               ((long)pvVar7 + uVar32 * 4 + uVar20 * 4 + 0x10);
                                      *puVar1 = uVar39;
                                      puVar1[1] = uVar3;
                                      uVar32 = uVar32 + 8;
                                    } while (uVar15 != uVar32);
                                    if (uVar13 == uVar15) goto LAB_10001e2e;
                                  }
                                  do {
                                    *(undefined4 *)((long)pvVar7 + uVar28 * 4) =
                                         *(undefined4 *)((long)pvVar7 + uVar28 * 4 + 4);
                                    uVar28 = uVar28 + 1;
                                  } while (uVar9 != uVar28);
                                }
LAB_10001e2e:
                                *(uint *)((long)pvVar7 + (long)(int)uVar9 * 4) = (uint)local_90;
                              }
                              DAT_1002231c = (uint)local_90;
                              uVar9 = (uint)local_90;
                            }
                          }
                        }
                        uVar12 = DAT_10022170;
                        if (pcVar37[uVar14 + 3] == '\0') {
                          if (pcVar37[uVar14 + 4] == '\x01') {
                            iVar11 = *(int *)(pcVar37 + uVar14 + 0x60);
                            iVar10 = *(int *)(pcVar37 + uVar14 + 100);
                            uVar35 = DAT_10022174;
                          }
                          else {
                            uVar18 = b[6];
                            if (uVar18 == 0) {
                              uVar18 = 0x164;
                              if ((int)DAT_10022170 < 0x164) {
                                uVar18 = DAT_10022170;
                              }
                              iVar11 = uVar18 - 8;
                            }
                            else {
                              iVar11 = DAT_10022170 - 8;
                              if ((int)(uVar18 + 0x1c) < (int)(DAT_10022170 - 8)) {
                                iVar11 = uVar18 + 0x1c;
                              }
                              if ((int)uVar18 < 0xc0) {
                                iVar11 = 0xdc;
                              }
                            }
                            *(int *)(pcVar37 + uVar14 + 0x60) = iVar11;
                            uVar35 = DAT_10022174;
                            uVar18 = b[7];
                            if (uVar18 == 0) {
                              uVar18 = 0x11c;
                              if ((int)DAT_10022174 < 0x11c) {
                                uVar18 = DAT_10022174;
                              }
                              iVar10 = uVar18 - 0x20;
                            }
                            else {
                              iVar10 = DAT_10022174 - 0x20;
                              if ((int)(uVar18 + 0x34) < (int)(DAT_10022174 - 0x20)) {
                                iVar10 = uVar18 + 0x34;
                              }
                              if ((int)uVar18 < 0x58) {
                                iVar10 = 0x8c;
                              }
                            }
                            *(int *)(pcVar37 + uVar14 + 100) = iVar10;
                          }
                          iVar17 = (uVar12 - iVar11) + -4;
                          iVar23 = *(int *)(pcVar37 + uVar14 + 0x58);
                          iVar30 = *(int *)(pcVar37 + uVar14 + 0x5c);
                          if (iVar23 < iVar17) {
                            iVar17 = iVar23;
                          }
                          if (iVar23 < 4) {
                            iVar17 = 4;
                          }
                          *(int *)(pcVar37 + uVar14 + 0x58) = iVar17;
                          iVar23 = uVar35 - 0x1c;
                          if (iVar30 < (int)(uVar35 - 0x1c)) {
                            iVar23 = iVar30;
                          }
                          if (iVar30 < 0x1a) {
                            iVar23 = 0x1a;
                          }
                          *(int *)(pcVar37 + uVar14 + 0x5c) = iVar23;
                          *(int *)(pcVar37 + uVar14 + 0x70) = iVar11;
                          *(int *)(pcVar37 + uVar14 + 0x74) = iVar10;
                          *(int *)(pcVar37 + uVar14 + 0x68) = iVar17;
                          *(int *)(pcVar37 + uVar14 + 0x6c) = iVar23;
                        }
                        uVar12 = b[10];
                        bVar34 = pcVar37[uVar14 + 2];
                        uVar18 = (uint)(uVar9 == (uint)local_90);
                        if (*(int *)(pcVar37 + uVar14 + 0x10) == 6) {
                          iVar11 = *(int *)(pcVar37 + uVar14 + 0x60);
                          if (iVar11 < 0x1e) {
                            iVar11 = 0x1d;
                          }
                          if (b[0x14] == iVar11 - 0x1cU) {
                            iVar10 = *(int *)(pcVar37 + uVar14 + 100);
                            if (iVar10 < 0x36) {
                              iVar10 = 0x35;
                            }
                            if (b[0x15] == iVar10 - 0x34U) goto LAB_10001fdb;
                          }
                          if (*(uint *)(pcVar37 + uVar14 + 0xb24) != 0) {
                            local_c0 = CONCAT44(PF_PART4(local_c0, 4),uVar12);
                            iVar10 = *(int *)(pcVar37 + uVar14 + 100);
                            if (iVar10 < 0x36) {
                              iVar10 = 0x35;
                            }
                            local_80 = CONCAT71(PF_PART7(local_80, 1),bVar42);
                            local_b8 = CONCAT71(PF_PART7(local_b8, 1),uVar9 == (uint)local_90);
                            uStack_4250 = 0x10001fc1;
                            terror_ui_window_set_content_size(*(uint *)(pcVar37 + uVar14 + 0xb24),iVar11 - 0x1cU,
                                               iVar10 - 0x34);
                            uVar18 = (uint)local_b8 & 0xff;
                            bVar42 = (byte)local_80;
                            uVar12 = (uint)local_c0;
                          }
                        }
LAB_10001fdb:
                        uVar13 = local_40;
                        pcVar27 = DAT_10022368;
                        if (b[0xb] == *(uint *)(pcVar37 + uVar14 + 0x58)) {
                          if (((uint)local_90 < 0x14) &&
                             (b[0xc] != *(uint *)(pcVar37 + uVar14 + 0x5c) ||
                              (uint)bVar34 * 4 + 8 + uVar18 * 2 != (uVar12 & 0xe)))
                          goto LAB_10002026;
                        }
                        else if ((uint)local_90 < 0x14) {
LAB_10002026:
                          if ((DAT_10022368[local_40] == '\x01') &&
                             (*(int *)(DAT_10022368 + local_40 + 0x10) == 6)) {
                            local_80 = CONCAT71(PF_PART7(local_80, 1),bVar42);
                            bVar40 = DAT_1002231c == (uint)local_90;
                            bVar42 = DAT_10022368[local_40 + 2];
                            if (*(uint *)(DAT_10022368 + local_40 + 0xb24) == 0) {
                              uVar9 = 0;
                            }
                            else {
                              iVar11 = *(int *)(DAT_10022368 + local_40 + 0x60);
                              iVar10 = *(int *)(DAT_10022368 + local_40 + 100);
                              if (iVar10 < 0x36) {
                                iVar10 = 0x35;
                              }
                              if (iVar11 < 0x1e) {
                                iVar11 = 0x1d;
                              }
                              uStack_4250 = 0x10001994;
                              terror_ui_window_set_content_size(*(uint *)(DAT_10022368 + local_40 + 0xb24),
                                                 iVar11 - 0x1c,iVar10 - 0x34);
                              uVar9 = *(uint *)(pcVar27 + uVar13 + 0xb24);
                            }
                            uStack_4250 = 0x100019b9;
                            terror_ui_window_configure(uVar9,*(int *)(pcVar27 + uVar13 + 0x58),
                                               *(int *)(pcVar27 + uVar13 + 0x5c),0xe,
                                               (uint)bVar42 * 4 + (uint)bVar40 * 2 + 8);
                            bVar42 = (byte)local_80;
                          }
                        }
                        uVar16 = CONCAT71((int7)((ulong)local_98 >> 8),(byte)local_98 | bVar42);
                        uVar13 = local_60;
                      }
                      else if (-1 < (int)uVar9) {
                        uStack_4250 = 0x10001a96;
                        recovered_1001e9a0(uVar9,'\0');
                        uVar16 = CONCAT71((int7)((ulong)uVar16 >> 8),1);
                      }
LAB_100019cc:
                      uVar13 = uVar13 + 1;
                      pcVar33 = pcVar33 + 0x278;
                    } while (uVar13 < local_6c);
                  }
                  lVar38 = 0;
                  lVar19 = 0;
                  pcVar33 = DAT_10022368;
                  do {
                    if (((pcVar33[lVar38] == '\x01') && (*(int *)(pcVar33 + lVar38 + 0x10) == 6)) &&
                       (*(int *)(pcVar33 + lVar38 + 0xb28) != DAT_10022370)) {
                      uStack_4250 = 0x100020c2;
                      recovered_1001e9a0((uint)lVar19,'\0');
                      uVar16 = CONCAT71((int7)((ulong)uVar16 >> 8),1);
                      pcVar33 = DAT_10022368;
                    }
                    lVar19 = lVar19 + 1;
                    lVar38 = lVar38 + 0xda8;
                  } while (lVar19 != 0x14);
                }
                uStack_4250 = 0x10001791;
                memset(&local_4248,0,0x18);
                iVar11 = Ram0000000000006800;
                if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                   ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                    (uVar9 = Ram0000000000006808, 0x16b < uVar9)))) {
                  uVar9 = UINT_00006968;
                  if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_100017fd;
                  uStack_4250 = 0x100017d8;
                  uVar9 = (*(code *)(ulong)uVar9)(&local_4248);
                  if ((uVar9 == 0) || ((DAT_1012c528 == '\x01' && (DAT_1012c530 == uStack_4240))))
                  goto LAB_100017fd;
                  DAT_1012c530 = uStack_4240;
                  DAT_1012c528 = '\x01';
                  bVar42 = 1;
                  if (DAT_10022194 == '\x01') goto LAB_1000180d;
LAB_100020fa:
                  bVar34 = 0;
                }
                else {
LAB_100017fd:
                  bVar42 = 0;
                  if (DAT_10022194 != '\x01') goto LAB_100020fa;
LAB_1000180d:
                  uStack_4250 = 0x10001820;
                  memset(&local_4248,0,0x18);
                  iVar11 = Ram0000000000006800;
                  if ((((iVar11 != 0x50414d57) || (iVar11 = Ram0000000000006804, iVar11 == 0)) ||
                      (uVar9 = Ram0000000000006808, uVar9 < 0xc)) ||
                     (uVar9 = Ram0000000000006808, uVar9 < 0x16c)) goto LAB_100020fa;
                  uVar9 = UINT_00006968;
                  if ((code *)(ulong)uVar9 == (code *)0x0) goto LAB_100020fa;
                  uStack_4250 = 0x1000187b;
                  uVar12 = (*(code *)(ulong)uVar9)(&local_4248);
                  uVar9 = local_4238;
                  if ((uVar12 == 0) ||
                     ((DAT_1012c538 == '\x01' && ((int)(local_4238 - DAT_1012c53c) < 0))))
                  goto LAB_100020fa;
                  DAT_1012c538 = '\x01';
                  uStack_4250 = 0x100018b8;
                  memset(&local_340,0,0x18);
                  local_4248 = local_4248 & 0xffffffffffffff00;
                  iVar11 = Ram0000000000006800;
                  if (((iVar11 != 0x50414d57) ||
                      ((iVar11 = Ram0000000000006804, iVar11 == 0 ||
                       (uVar12 = Ram0000000000006808, uVar12 < 0xc)))) ||
                     (uVar12 = Ram0000000000006808, uVar12 < 0x174)) {
LAB_100020ee:
                    DAT_1012c53c = uVar9 + 0x1518;
                    goto LAB_100020fa;
                  }
                  uVar12 = UINT_00006970;
                  if ((code *)(ulong)uVar12 == (code *)0x0) goto LAB_100020ee;
                  uStack_4250 = 0x1000192d;
                  uVar12 = (*(code *)(ulong)uVar12)
                                     (str_100221a0,&local_340,(char *)&local_4248,0x80);
                  if (uVar12 == 0) goto LAB_100020ee;
                  DAT_1012c528 = '\0';
                  DAT_1012c53c = local_330 + 0x5eec0;
                  bVar34 = 1;
                }
                bVar40 = true;
                bVar29 = 1;
                if ((((DAT_1012c4c8 == '\0') && (DAT_1012c4c9 == '\0')) && ((int)DAT_10022178 < 0))
                   && ((DAT_10022180 < 0 && (DAT_10022324 < 0)))) {
                  bVar29 = DAT_1002549c;
                }
                uVar14 = (ulong)(int)local_78;
                bVar42 = bVar42 | bVar34;
                uVar13 = 1;
                pcVar33 = DAT_10022368;
                do {
                  if (((*pcVar33 == '\x01') && (*(int *)(pcVar33 + 0x10) == 6)) &&
                     ((pcVar33[1] == '\x01' && (pcVar33[2] != '\x01')))) break;
                  if ((((pcVar33[0xda8] == '\x01') && (*(int *)(pcVar33 + 0xdb8) == 6)) &&
                      (pcVar33[0xda9] == '\x01')) && (pcVar33[0xdaa] != '\x01')) {
                    bVar40 = true;
                    break;
                  }
                  bVar40 = uVar13 < 0x13;
                  pcVar33 = pcVar33 + 0x1b50;
                  uVar13 = uVar13 + 2;
                } while (uVar13 != 0x15);
                bVar34 = (byte)local_a0 | local_32 | (byte)uVar16;
                uVar20 = _DAT_100223d4 & 0xffffffff;
                uVar13 = (ulong)DAT_100223d8;
                if ((((bVar34 & 1) == 0 && bVar42 == 0) && (DAT_10022360 == 0)) &&
                   ((DAT_100223d4 == (uint)local_b0 &&
                    ((DAT_100223d8 == (uint)local_a8 && (DAT_100223dc == local_88)))))) {
                  if ((((local_31 ^ bVar29) & 1) != 0 || DAT_100223e0 != local_84) ||
                     (bVar40 != true)) {
                    local_44 = 0;
                    if (((local_31 ^ bVar29) & 1) != 0 || DAT_100223e0 != local_84)
                    goto LAB_100021d3;
                  }
                  else if (local_44 == 0) {
                    local_44 = 0xf;
                    if (((((DAT_1002238c != 0) && (DAT_10022390 != 0)) &&
                         (iVar11 = Ram0000000000006800, iVar11 == 0x50414d57)) &&
                        ((iVar11 = Ram0000000000006804, iVar11 != 0 &&
                         (uVar9 = Ram0000000000006808, 0xb < uVar9)))) &&
                       (uVar9 = Ram0000000000006808, 0x15f < uVar9)) {
                      uVar9 = UINT_0000695c;
                      if ((code *)(ulong)uVar9 != (code *)0x0) {
                        uStack_4250 = 0x10002668;
                        (*(code *)(ulong)uVar9)(0,0,DAT_1002238c,DAT_10022390);
                      }
                    }
                  }
                  else {
                    local_44 = local_44 + -1;
                  }
LAB_10002c6f:
                  iVar11 = 0;
                  if (((local_32 | (byte)uVar16 | bVar40) & 1) == 0) {
                    iVar11 = 0x1e;
                    bVar41 = local_38 == 0;
                    local_38 = local_38 + -1;
                    if (bVar41) goto LAB_10002c8a;
                  }
                  else {
LAB_10002c8a:
                    iVar10 = Ram0000000000006800;
                    if (((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000006804, iVar10 != 0)) &&
                       (uVar9 = Ram0000000000006808, 0xb < uVar9)) {
                      uVar9 = Ram0000000000006808;
                      if (0x9f < uVar9) {
                        uVar9 = UINT_0000689c;
                        if ((code *)(ulong)uVar9 != (code *)0x0) {
                          uStack_4250 = 0x10002ccd;
                          (*(code *)(ulong)uVar9)();
                        }
                      }
                      local_38 = iVar11;
                    }
                    else {
                      local_38 = iVar11;
                    }
                  }
                  uVar9 = 4000;
                  if (bVar29 != 0) {
                    uVar9 = 1000;
                  }
                  iVar11 = Ram0000000000006800;
                  if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                     ((uVar12 = Ram0000000000006808, 0xb < uVar12 &&
                      (uVar12 = Ram0000000000006808, 0x177 < uVar12)))) {
                    uVar12 = UINT_00006974;
                    if ((code *)(ulong)uVar12 != (code *)0x0) {
                      uStack_4250 = 0x10002d2b;
                      (*(code *)(ulong)uVar12)(uVar9);
                    }
                  }
                  if (((((bVar29 | ~bVar40) & 1) == 0) &&
                      (iVar11 = Ram0000000000006800, iVar11 == 0x50414d57)) &&
                     ((iVar11 = Ram0000000000006804, iVar11 != 0 &&
                      ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                       (uVar9 = Ram0000000000006808, 0x9f < uVar9)))))) {
                    uVar9 = UINT_0000689c;
                    if ((code *)(ulong)uVar9 != (code *)0x0) {
                      uStack_4250 = 0x10002d92;
                      (*(code *)(ulong)uVar9)();
                    }
                  }
                }
                else {
LAB_100021d3:
                  uVar28 = _DAT_100223d4;
                  if ((int)(uint)local_b0 < (int)DAT_100223d4) {
                    uVar28 = local_b0;
                  }
                  uVar15 = (ulong)DAT_100223d8;
                  if ((int)(uint)local_a8 < (int)DAT_100223d8) {
                    uVar15 = local_a8 & 0xffffffff;
                  }
                  uVar12 = (uint)local_b0 + 0xc;
                  local_80 = (ulong)uVar12;
                  uVar9 = DAT_100223d4 + 0xc;
                  local_90 = (ulong)uVar9;
                  if ((int)uVar9 < (int)uVar12) {
                    uVar9 = uVar12;
                  }
                  uVar12 = (uint)local_a8 + 0x10;
                  uVar32 = (ulong)uVar12;
                  uVar18 = DAT_100223d8 + 0x10;
                  local_c8 = (uint *)(ulong)uVar18;
                  if ((int)uVar18 < (int)uVar12) {
                    uVar18 = uVar12;
                  }
                  uVar25 = uVar28 & 0xffffffff | uVar15 << 0x20;
                  uVar39 = CONCAT44(uVar18 - (int)uVar15,uVar9 - (int)uVar28);
                  PF_PART8(auVar44, 8) = uVar39;
                  PF_PART8(auVar44, 0) = uVar25;
                  PF_PART8(auVar43, 8) = uVar39;
                  PF_PART8(auVar43, 0) = uVar25;
                  local_60 = CONCAT71(PF_PART7(local_60, 1),bVar29);
                  local_98 = uVar16;
                  local_40 = uVar14;
                  if (((((bVar34 | ~bVar42) & 1) != 0) ||
                      (((DAT_10022360 | local_31 | bVar29) & 1) != 0)) ||
                     ((DAT_100223d4 != (uint)local_b0 ||
                      (((DAT_100223d8 != (uint)local_a8 || (DAT_100223dc != local_88)) ||
                       (DAT_100223e0 != local_84)))))) {
                    bVar21 = (byte)local_58;
                    uVar9 = DAT_100223d4;
                    auVar43 = auVar44;
LAB_10002262:
                    PF_PART8(auVar4, 8) = local_50;
                    PF_PART8(auVar4, 0) = local_68;
                    uVar14 = PF_PART8(auVar43, 0);
                    if ((((byte)local_98 | local_32) & 1) != 0 || bVar42 != 0) {
                      DAT_10022374 = '\0';
                      DAT_1002217c = -1;
                    }
                    if (((((local_31 ^ bVar29 | bVar21 | bVar34 | bVar42) & 1) == 0) &&
                        ((int)DAT_10022178 < 0x14)) &&
                       (((uint)local_78 == DAT_10022178 &&
                        ((DAT_10022180 < 0 && (DAT_10022368[local_78 * 0xda8] == '\x01')))))) {
                      if (PF_PART4(auVar43, 12) < 1 || PF_PART4(auVar43, 8) < 1) {
                        uVar13 = local_68 >> 0x20;
                        auVar43 = auVar4;
                      }
                      else {
                        uVar13 = uVar14 >> 0x20;
                        iVar11 = (int)((ulong)local_50 >> 0x20);
                        if (iVar11 < 1 || (int)local_50 < 1) {
                          local_68 = uVar14 & 0xffffffff;
                        }
                        else {
                          iVar10 = (int)local_50 + (int)local_68;
                          uVar20 = local_68;
                          if (PF_PART4(auVar43, 0) < (int)local_68) {
                            uVar20 = uVar14;
                          }
                          iVar23 = (int)(local_68 >> 0x20);
                          uVar14 = local_68 >> 0x20;
                          if (PF_PART4(auVar43, 4) < iVar23) {
                            uVar14 = uVar13;
                          }
                          uVar13 = uVar14;
                          iVar30 = PF_PART4(auVar43, 8) + PF_PART4(auVar43, 0);
                          if (iVar10 < iVar30) {
                            iVar10 = iVar30;
                          }
                          iVar30 = PF_PART4(auVar43, 12) + PF_PART4(auVar43, 4);
                          iVar11 = iVar11 + iVar23;
                          if (iVar11 < iVar30) {
                            iVar11 = iVar30;
                          }
                          PF_PART4(auVar43, 12) = iVar11 - (int)uVar13;
                          PF_PART4(auVar43, 8) = iVar10 - (int)uVar20;
                          PF_PART8(auVar43, 0) = (uVar20 & 0xffffffff) + (uVar13 << 0x20);
                          local_68 = uVar20 & 0xffffffff;
                        }
                      }
                      local_50 = PF_PART8(auVar43, 8);
                      uStack_4250 = 0x100026d7;
                      auVar44 = recovered_10005770((long)(DAT_10022368 + local_40 * 0xda8));
                      PF_PART8(auVar5, 8) = local_50;
                      PF_PART8(auVar5, 0) = PF_PART8(auVar43, 0);
                      iVar11 = (int)((ulong)local_50 >> 0x20);
                      auVar6 = auVar44;
                      if (0 < iVar11 && 0 < (int)local_50) {
                        auVar6 = auVar5;
                        if (0 < PF_PART4(auVar44, 12) && 0 < PF_PART4(auVar44, 8)) {
                          uVar9 = PF_PART4(auVar44, 0);
                          uVar14 = (ulong)uVar9;
                          if ((int)local_68 < (int)uVar9) {
                            uVar14 = local_68 & 0xffffffff;
                          }
                          uVar12 = PF_PART4(auVar44, 4);
                          uVar20 = (ulong)uVar12;
                          if ((int)uVar13 < (int)uVar12) {
                            uVar20 = uVar13;
                          }
                          iVar23 = (int)local_50 + (int)local_68;
                          iVar10 = uVar9 + PF_PART4(auVar44, 8);
                          if (iVar10 < iVar23) {
                            iVar10 = iVar23;
                          }
                          iVar11 = iVar11 + (int)uVar13;
                          iVar23 = PF_PART4(auVar44, 12) + uVar12;
                          if (iVar23 < iVar11) {
                            iVar23 = iVar11;
                          }
                          PF_PART4(auVar6, 12) = iVar23 - (int)uVar20;
                          PF_PART4(auVar6, 8) = iVar10 - (int)uVar14;
                          PF_PART8(auVar6, 0) = uVar14 | uVar20 << 0x20;
                        }
                      }
                      local_50 = PF_PART8(auVar6, 8);
                      uVar20 = 0;
                      uVar13 = 0;
                      if (0 < PF_PART4(auVar6, 12) &&
                          (0 < PF_PART4(auVar6, 8) && (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170))) {
                        uVar14 = PF_PART8(auVar6, 0) >> 0x20;
                        uVar12 = PF_PART4(auVar6, 12) + PF_PART4(auVar6, 4);
                        uVar18 = PF_PART4(auVar6, 0);
                        uVar9 = DAT_10022170;
                        if ((int)uVar18 < (int)DAT_10022170) {
                          uVar9 = uVar18;
                        }
                        if ((int)uVar18 < 0) {
                          uVar9 = 0;
                        }
                        if ((int)DAT_10022174 <= PF_PART4(auVar6, 4)) {
                          uVar14 = (ulong)DAT_10022174;
                        }
                        if ((long)PF_PART8(auVar6, 0) < 0) {
                          uVar14 = 0;
                        }
                        uVar18 = PF_PART4(auVar6, 8) + uVar18;
                        uVar35 = DAT_10022170;
                        if ((int)uVar18 < (int)DAT_10022170) {
                          uVar35 = uVar18;
                        }
                        if ((int)uVar18 < 0) {
                          uVar35 = 0;
                        }
                        uVar18 = DAT_10022174;
                        if ((int)uVar12 < (int)DAT_10022174) {
                          uVar18 = uVar12;
                        }
                        if ((int)uVar12 < 0) {
                          uVar18 = 0;
                        }
                        if (uVar35 - uVar9 == 0 || (int)uVar35 < (int)uVar9) {
                          uVar20 = 0;
                          uVar13 = 0;
                        }
                        else {
                          uVar20 = 0;
                          uVar13 = 0;
                          iVar11 = uVar18 - (int)uVar14;
                          if (iVar11 != 0 && (int)uVar14 <= (int)uVar18) {
                            uVar20 = (ulong)uVar9 | uVar14 << 0x20;
                            uVar13 = CONCAT44(iVar11,uVar35 - uVar9);
                          }
                        }
                      }
                      uStack_4250 = 0x1000282c;
                      uVar16 = recovered_1000a8a0(uVar20,uVar13);
                      if ((char)uVar16 != '\0') {
                        uStack_4250 = 0x10002843;
                        recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
LAB_10002a70:
                        uStack_4250 = 0x10002a75;
                        uVar13 = recovered_1000a710(&DAT_10022378,uVar20,uVar13,in_XMM3,in_XMM6,
                                                    in_XMM7);
                        if ((char)uVar13 != '\0') {
LAB_10002a7d:
                          iVar11 = 0;
                          if (((local_32 | (byte)local_98 | bVar40) & 1) == 0) goto LAB_10002a93;
                          goto LAB_10002a9e;
                        }
                      }
                    }
                    else if (((((bVar34 | bVar42 | local_31 | bVar29) & 1) == 0) &&
                             (DAT_100223dc == local_88)) && (DAT_100223e0 == local_84)) {
                      uVar18 = (uint)local_b0;
                      uVar35 = (uint)local_a8;
                      if (((DAT_100223d4 != uVar18) || (DAT_100223d8 != uVar35)) &&
                         ((DAT_10022374 == '\x01' && (DAT_1002217c == -1)))) {
                        if (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170) {
                          uVar22 = DAT_10022170;
                          if ((int)uVar18 < (int)DAT_10022170) {
                            uVar22 = uVar18;
                          }
                          if ((int)uVar18 < 0) {
                            uVar22 = 0;
                          }
                          uVar26 = DAT_10022174;
                          if ((int)uVar35 < (int)DAT_10022174) {
                            uVar26 = uVar35;
                          }
                          if ((int)uVar35 < 0) {
                            uVar26 = 0;
                          }
                          uVar24 = (uint)local_80;
                          if ((int)DAT_10022170 <= (int)(uint)local_80) {
                            uVar24 = DAT_10022170;
                          }
                          if ((int)uVar18 < -0xc) {
                            uVar24 = 0;
                          }
                          if ((int)DAT_10022174 <= (int)uVar12) {
                            uVar12 = DAT_10022174;
                          }
                          if ((int)uVar35 < -0x10) {
                            uVar12 = 0;
                          }
                          if (uVar24 - uVar22 == 0 || (int)uVar24 < (int)uVar22) {
                            uVar20 = 0;
                            uVar14 = 0;
                          }
                          else {
                            uVar20 = 0;
                            uVar14 = 0;
                            if (uVar12 - uVar26 != 0 && (int)uVar26 <= (int)uVar12) {
                              uVar20 = CONCAT44(uVar26,uVar22);
                              uVar14 = CONCAT44(uVar12 - uVar26,uVar24 - uVar22);
                            }
                          }
                          uVar12 = DAT_10022170;
                          if ((int)uVar9 < (int)DAT_10022170) {
                            uVar12 = uVar9;
                          }
                          if ((int)uVar9 < 0) {
                            uVar12 = 0;
                          }
                          uVar35 = (uint)uVar13;
                          uVar18 = DAT_10022174;
                          if ((int)uVar35 < (int)DAT_10022174) {
                            uVar18 = uVar35;
                          }
                          if ((int)uVar35 < 0) {
                            uVar18 = 0;
                          }
                          uVar22 = (uint)local_90;
                          if ((int)DAT_10022170 <= (int)(uint)local_90) {
                            uVar22 = DAT_10022170;
                          }
                          if ((int)uVar9 < -0xc) {
                            uVar22 = 0;
                          }
                          uVar9 = (uint)local_c8;
                          if ((int)DAT_10022174 <= (int)(uint)local_c8) {
                            uVar9 = DAT_10022174;
                          }
                          if ((int)uVar35 < -0x10) {
                            uVar9 = 0;
                          }
                          if (uVar22 - uVar12 == 0 || (int)uVar22 < (int)uVar12) {
                            local_40 = 0;
                            uVar13 = 0;
                          }
                          else {
                            local_40 = 0;
                            uVar13 = 0;
                            if (uVar9 - uVar18 != 0 && (int)uVar18 <= (int)uVar9) {
                              local_40 = CONCAT44(uVar18,uVar12);
                              uVar13 = CONCAT44(uVar9 - uVar18,uVar22 - uVar12);
                            }
                          }
                          iVar23 = (int)(uVar14 >> 0x20);
                          iVar11 = (int)uVar13;
                          iVar10 = (int)(uVar13 >> 0x20);
                          if (iVar23 < 1 || (int)uVar14 < 1) {
                            uVar14 = uVar13 & 0xffffffff;
                            iVar23 = iVar10;
                            if (iVar10 < 1 || iVar11 < 1) goto LAB_10002a7d;
                          }
                          else {
                            if (!(iVar10 < 1 || iVar11 < 1)) {
                              iVar30 = (int)local_40;
                              iVar11 = iVar30 + iVar11;
                              iVar17 = (int)uVar20;
                              if ((iVar17 < iVar11) &&
                                 (iVar31 = iVar17 + (int)uVar14, iVar30 < iVar31)) {
                                uVar9 = (uint)(local_40 >> 0x20);
                                iVar10 = iVar10 + uVar9;
                                uVar12 = (uint)(uVar20 >> 0x20);
                                if (((int)uVar12 < iVar10) &&
                                   (iVar23 = iVar23 + uVar12, (int)uVar9 < iVar23)) {
                                  uVar13 = local_40;
                                  if (iVar17 < iVar30) {
                                    uVar13 = uVar20;
                                  }
                                  if ((int)uVar12 < (int)uVar9) {
                                    uVar9 = uVar12;
                                  }
                                  if (iVar11 < iVar31) {
                                    iVar11 = iVar31;
                                  }
                                  if (iVar10 < iVar23) {
                                    iVar10 = iVar23;
                                  }
                                  iVar23 = iVar10 - uVar9;
                                  local_40 = uVar13 & 0xffffffff | (ulong)uVar9 << 0x20;
                                  uVar14 = (ulong)(uint)(iVar11 - (int)uVar13);
                                  goto LAB_100029bc;
                                }
                              }
                              uStack_4250 = 0x10002b5d;
                              recovered_10009f60(uVar20,uVar14);
                              uStack_4250 = 0x10002b69;
                              recovered_10009f60(local_40,uVar13);
                              uStack_4250 = 0x10002b78;
                              recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
                              uStack_4250 = 0x10002b86;
                              uVar14 = recovered_1000a710(&DAT_10022378,uVar20,uVar14,in_XMM3,
                                                          in_XMM6,in_XMM7);
                              if ((char)uVar14 != '\0') {
                                uVar20 = local_40;
                                goto LAB_10002a70;
                              }
                              goto LAB_10002b9a;
                            }
                            local_40 = uVar20;
                          }
LAB_100029bc:
                          if ((int)uVar14 < 1) {
LAB_10002a48:
                            uVar20 = 0;
                            uVar13 = 0;
                          }
                          else {
                            uVar20 = 0;
                            uVar13 = 0;
                            if (0 < iVar23) {
                              uVar28 = local_40 >> 0x20;
                              iVar11 = (int)(local_40 >> 0x20);
                              uVar12 = iVar23 + iVar11;
                              uVar18 = (uint)local_40;
                              uVar35 = (int)uVar14 + uVar18;
                              uVar9 = DAT_10022170;
                              if ((int)uVar18 < (int)DAT_10022170) {
                                uVar9 = uVar18;
                              }
                              if ((int)uVar18 < 0) {
                                uVar9 = 0;
                              }
                              if ((int)DAT_10022174 <= iVar11) {
                                uVar28 = (ulong)DAT_10022174;
                              }
                              if ((long)local_40 < 0) {
                                uVar28 = 0;
                              }
                              uVar18 = DAT_10022170;
                              if ((int)uVar35 < (int)DAT_10022170) {
                                uVar18 = uVar35;
                              }
                              if ((int)uVar35 < 0) {
                                uVar18 = 0;
                              }
                              uVar35 = DAT_10022174;
                              if ((int)uVar12 < (int)DAT_10022174) {
                                uVar35 = uVar12;
                              }
                              if ((int)uVar12 < 0) {
                                uVar35 = 0;
                              }
                              if (uVar18 - uVar9 == 0 || (int)uVar18 < (int)uVar9)
                              goto LAB_10002a48;
                              uVar20 = 0;
                              uVar13 = 0;
                              iVar11 = uVar35 - (int)uVar28;
                              if (iVar11 != 0 && (int)uVar28 <= (int)uVar35) {
                                uVar20 = (ulong)uVar9 | uVar28 << 0x20;
                                uVar13 = CONCAT44(iVar11,uVar18 - uVar9);
                              }
                            }
                          }
                          uStack_4250 = 0x10002a58;
                          recovered_10009f60(uVar20,uVar13);
                          uStack_4250 = 0x10002a67;
                          recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
                          goto LAB_10002a70;
                        }
                        goto LAB_10002a7d;
                      }
                    }
LAB_10002b9a:
                    if (((int)DAT_10022178 < 0) || (-1 < DAT_10022180)) {
LAB_10002bca:
                      DAT_10022360 = 0;
                      uStack_4250 = 0x10002bd6;
                      recovered_10004810();
                      uVar13 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
                      if (uVar13 != 0 &&
                          ((0 < (long)DAT_10022344 && 0 < (long)DAT_10022340) &&
                          DAT_10022348 != (void *)0x0)) {
                        uStack_4250 = 0x10002c1a;
                        uVar14 = recovered_10018260();
                        if ((char)uVar14 != '\0') {
                          uStack_4250 = 0x10002c34;
                          memcpy(DAT_10027048,DAT_10022348,uVar13);
                          DAT_10022374 = '\x01';
                          DAT_1002217c = -1;
                        }
                      }
                    }
                    else {
                      uStack_4250 = 0x10002bc6;
                      uVar16 = recovered_1000a8a0(0,CONCAT44(DAT_10022174,DAT_10022170));
                      if ((char)uVar16 == '\0') goto LAB_10002bca;
                    }
                    uStack_4250 = 0x10002c54;
                    recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
                    uStack_4250 = 0x10002c5c;
                    recovered_100049e0(&DAT_10022378,in_XMM3,in_XMM6,in_XMM7);
                    local_44 = 0;
                    uVar16 = local_98;
                    bVar29 = (byte)local_60;
                    goto LAB_10002c6f;
                  }
                  local_c0 = uVar13;
                  local_b8 = uVar20;
                  local_a0 = uVar32;
                  if ((DAT_10022374 != '\x01') || (auVar43 = auVar44, DAT_1002217c != -1)) {
LAB_10002591:
                    bVar21 = (byte)local_58;
                    uVar9 = (uint)local_b8;
                    uVar12 = (uint)local_a0;
                    uVar13 = local_c0;
                    bVar29 = (byte)local_60;
                    goto LAB_10002262;
                  }
                  uStack_4250 = 0x100024aa;
                  auVar43 = recovered_10009d80();
                  uStack_4250 = 0x100024bb;
                  auVar43 = recovered_10009cf0(uVar25,uVar39,PF_PART8(auVar43, 0),PF_PART8(auVar43, 8));
                  uStack_4250 = 0x100024d6;
                  auVar43 = recovered_10009eb0(PF_PART8(auVar43, 0),PF_PART8(auVar43, 8),DAT_10022170,DAT_10022174
                                              );
                  uStack_4250 = 0x100024e7;
                  recovered_10009f60(PF_PART8(auVar43, 0),PF_PART8(auVar43, 8));
                  uStack_4250 = 0x100024ec;
                  auVar44 = recovered_1000a100();
                  uStack_4250 = 0x100024f7;
                  recovered_1000a570(PF_PART8(auVar44, 0),PF_PART8(auVar44, 8));
                  uStack_4250 = 0x10002503;
                  recovered_100048a0(((uintptr_t)pf_module_state + 0x1d5fU));
                  uStack_4250 = 0x10002515;
                  uVar13 = recovered_1000a710(&DAT_10022378,PF_PART8(auVar43, 0),PF_PART8(auVar43, 8),in_XMM3,
                                              in_XMM6,in_XMM7);
                  if ((char)uVar13 == '\0') goto LAB_10002591;
                  iVar11 = 0;
                  if (bVar40) {
LAB_10002a9e:
                    iVar10 = Ram0000000000006800;
                    if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000006804, iVar10 != 0)) &&
                        (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
                       (uVar9 = Ram0000000000006808, 0x9f < uVar9)) {
                      uVar9 = UINT_0000689c;
                      if ((code *)(ulong)uVar9 != (code *)0x0) {
                        uStack_4250 = 0x10002ade;
                        (*(code *)(ulong)uVar9)();
                      }
                    }
                    local_38 = iVar11;
                  }
                  else {
LAB_10002a93:
                    iVar11 = 0x1e;
                    bVar40 = local_38 == 0;
                    local_38 = local_38 + -1;
                    if (bVar40) goto LAB_10002a9e;
                  }
                  uVar9 = 4000;
                  if ((byte)local_60 != '\0') {
                    uVar9 = 1000;
                  }
                  iVar11 = Ram0000000000006800;
                  local_44 = 0;
                  if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
                     ((uVar12 = Ram0000000000006808, 0xb < uVar12 &&
                      (uVar12 = Ram0000000000006808, 0x177 < uVar12)))) {
                    uVar12 = UINT_00006974;
                    if ((code *)(ulong)uVar12 != (code *)0x0) {
                      uStack_4250 = 0x10002b4d;
                      (*(code *)(ulong)uVar12)(uVar9);
                    }
                  }
                }
              } while (DAT_10022378 != '\0');
            }
            uStack_4250 = 0x10002da3;
            recovered_10003870(&DAT_10022378);
            uStack_4250 = 0x10002da8;
            recovered_10003990();
            iVar11 = Ram0000000000006800;
            if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
               ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
                (uVar9 = Ram0000000000006808, 0x53 < uVar9)))) {
              uVar9 = UINT_00006850;
              if ((code *)(ulong)uVar9 != (code *)0x0) {
                uStack_4250 = 0x10002ded;
                (*(code *)(ulong)uVar9)(DAT_10022348);
              }
            }
            DAT_10022348 = (void *)0x0;
            return 1;
          }
        }
        iVar11 = Ram0000000000006800;
        if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
            (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
           (uVar9 = Ram0000000000006808, 0x43 < uVar9)) {
          uVar9 = UINT_00006840;
          if ((code *)(ulong)uVar9 != (code *)0x0) {
            uStack_4250 = 0x10000ca7;
            (*(code *)(ulong)uVar9)(str_10020a4f);
          }
        }
        uStack_4250 = 0x10000cac;
        recovered_10003990();
        if (DAT_10022348 != (void *)0x0) {
          iVar11 = Ram0000000000006800;
          if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
             ((uVar9 = Ram0000000000006808, 0xb < uVar9 &&
              (uVar9 = Ram0000000000006808, 0x53 < uVar9)))) {
            uVar9 = UINT_00006850;
            if ((code *)(ulong)uVar9 != (code *)0x0) {
              uStack_4250 = 0x10000cf6;
              (*(code *)(ulong)uVar9)(DAT_10022348);
            }
          }
          DAT_10022348 = (void *)0x0;
        }
LAB_10000d01:
        uStack_4250 = 0x10000d0d;
        recovered_10003870(&DAT_10022378);
        return 0;
      }
    }
  }
  iVar11 = Ram0000000000006800;
  if (((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
     ((uVar9 = Ram0000000000006808, 0xb < uVar9 && (uVar9 = Ram0000000000006808, 0x1b < uVar9)))) {
    uVar9 = UINT_00006818;
    if ((code *)(ulong)uVar9 != (code *)0x0) {
      uStack_4250 = 0x100007c6;
      (*(code *)(ulong)uVar9)();
    }
  }
LAB_100007c6:
  iVar11 = Ram0000000000006800;
  if ((((iVar11 == 0x50414d57) && (iVar11 = Ram0000000000006804, iVar11 != 0)) &&
      (uVar9 = Ram0000000000006808, 0xb < uVar9)) && (uVar9 = Ram0000000000006808, 0x43 < uVar9)) {
    uVar9 = UINT_00006840;
    if ((code *)(ulong)uVar9 != (code *)0x0) {
      uStack_4250 = 0x1000080b;
      (*(code *)(ulong)uVar9)(str_100209ed);
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020720
#undef DAT_10020a84
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022178
#undef DAT_1002217c
#undef DAT_10022180
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002218c
#undef DAT_10022190
#undef DAT_10022194
#undef DAT_10022314
#undef DAT_1002231c
#undef DAT_10022324
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022360
#undef DAT_10022368
#undef DAT_10022370
#undef DAT_10022374
#undef DAT_10022378
#undef DAT_10022379
#undef DAT_1002237c
#undef DAT_10022388
#undef DAT_1002238c
#undef DAT_10022390
#undef DAT_10022394
#undef DAT_100223d4
#undef DAT_100223d8
#undef DAT_100223dc
#undef DAT_100223e0
#undef DAT_100223e8
#undef DAT_10022988
#undef DAT_10022990
#undef DAT_100229a0
#undef DAT_10023750
#undef DAT_100252b0
#undef DAT_1002549c
#undef DAT_10025698
#undef DAT_100256a8
#undef DAT_100256b0
#undef DAT_10027048
#undef DAT_10027090
#undef DAT_10027094
#undef DAT_10027194
#undef DAT_1012c4c8
#undef DAT_1012c4c9
#undef DAT_1012c4cc
#undef DAT_1012c4d0
#undef DAT_1012c4d1
#undef DAT_1012c4d2
#undef DAT_1012c4d3
#undef DAT_1012c4d4
#undef DAT_1012c4d5
#undef DAT_1012c4d6
#undef DAT_1012c4d7
#undef DAT_1012c4d8
#undef DAT_1012c4d9
#undef DAT_1012c4da
#undef DAT_1012c4db
#undef DAT_1012c4dc
#undef DAT_1012c4dd
#undef DAT_1012c4de
#undef DAT_1012c4df
#undef DAT_1012c4e0
#undef DAT_1012c4e1
#undef DAT_1012c4e2
#undef DAT_1012c4e3
#undef DAT_1012c4e4
#undef DAT_1012c4e5
#undef DAT_1012c4e6
#undef DAT_1012c4e7
#undef DAT_1012c4e8
#undef DAT_1012c4e9
#undef DAT_1012c4ea
#undef DAT_1012c4eb
#undef DAT_1012c4ec
#undef DAT_1012c4ed
#undef DAT_1012c4ee
#undef DAT_1012c4ef
#undef DAT_1012c4f0
#undef DAT_1012c4f1
#undef DAT_1012c4f2
#undef DAT_1012c4f3
#undef DAT_1012c4f4
#undef DAT_1012c4f5
#undef DAT_1012c4f6
#undef DAT_1012c4f7
#undef DAT_1012c4f8
#undef DAT_1012c528
#undef DAT_1012c530
#undef DAT_1012c538
#undef DAT_1012c53c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006814
#undef UINT_00006818
#undef UINT_00006834
#undef UINT_00006840
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_0000687c
#undef UINT_00006880
#undef UINT_0000689c
#undef UINT_000068bc
#undef UINT_000068c0
#undef UINT_0000695c
#undef UINT_00006968
#undef UINT_00006970
#undef UINT_00006974
#undef UNK_10020721
#undef UNK_10020722
#undef UNK_10020723
#undef UNK_10020724
#undef UNK_10020725
#undef UNK_10020726
#undef UNK_10020727
#undef UNK_10020728
#undef UNK_1002072a
#undef UNK_1002072b
#undef UNK_1002072c
#undef UNK_1002072d
#undef UNK_1002072e
#undef UNK_1002072f
#undef UNK_100256a0
#undef _DAT_10020720
#undef _DAT_100223d4
#undef _DAT_100256a8
#undef pcRam00000000100256a0
#undef str_100209d8
#undef str_100209ed
#undef str_10020a0f
#undef str_10020a35
#undef str_10020a4f
#undef str_10020a69
#undef str_10020a70
#undef str_10020a85
#undef str_10020c14
#undef str_10020c20
#undef str_10020c2f
#undef str_100211d1
#undef str_100221a0
#undef str_10022220
#undef uRam0000000010020722
#undef uRam0000000010020723
#undef uRam0000000010020724
#undef uRam0000000010020725
#undef uRam0000000010020726
#undef uRam0000000010020727
#undef uRam0000000010020728
#undef uRam000000001002072a
#undef uRam000000001002072b
#undef uRam000000001002072c
#undef uRam000000001002072d
#undef uRam000000001002072e
#undef uRam000000001002072f
#undef uStack_4250
#undef uStack_4240
#undef abStack_4220
#undef aiStack_421c
#undef acStack_41f0
#undef uStack_33c
#undef pcStack_338
#undef iStack_32c
#undef local_4248
#undef local_4238
#undef local_4234
#undef local_4230
#undef local_4058
#undef local_340
#undef local_330
#undef local_328
#undef local_324
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_6c
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38
#undef local_32
#undef local_31

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100209a0
#define DAT_100209a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x387U)))
#undef DAT_100209bc
#define DAT_100209bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a3U)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_1002217c
#define DAT_1002217c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022340
#define DAT_10022340 (*(uint *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(uint *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(void * *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022374
#define DAT_10022374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_100223e8
#define DAT_100223e8 (*(char *)(((uintptr_t)pf_module_state + 0x1dcfU)))
#undef DAT_100223ec
#define DAT_100223ec (*(int *)(((uintptr_t)pf_module_state + 0x1dd3U)))
#undef DAT_100223f0
#define DAT_100223f0 (*(int *)(((uintptr_t)pf_module_state + 0x1dd7U)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef str_10020a9f
#define str_10020a9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_10020ab1
#define str_10020ab1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_10020abe
#define str_10020abe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a5U)))
#define uStack_120 (*(undefined8 *)(frame + 32))
#define local_128 (*(undefined8 *)(frame + 24))
#define local_118 (*(undefined8 *)(frame + 40))
#define uStack_110 (*(undefined8 *)(frame + 48))
#define local_108 (*(undefined8 *)(frame + 56))
#define local_f8 (*(undefined8 *)(frame + 72))
#define uStack_100 (*(undefined8 *)(frame + 64))
#define local_e8 (*(undefined8 *)(frame + 88))
#define local_d8 (*(undefined8 *)(frame + 104))
#define uStack_f0 (*(undefined8 *)(frame + 80))
#define local_c8 (*(undefined8 *)(frame + 120))
#define uStack_e0 (*(undefined8 *)(frame + 96))
#define local_9c (*(uint *)(frame + 164))
#define local_98 (*(uint *)(frame + 168))
#define uStack_d0 (*(undefined8 *)(frame + 112))
#define local_90 (*(long *)(frame + 176))
#define local_80 (*(uint *)(frame + 192))
#define uStack_c0 (*(undefined8 *)(frame + 128))
#define local_70 (*(int *)(frame + 208))
#define local_60 (*(int *)(frame + 224))
#define iStack_88 (*(int *)(frame + 184))
#define iStack_84 (*(int *)(frame + 188))
#define local_50 (*(ulong *)(frame + 240))
#define local_48 (*(ulong *)(frame + 248))
#define uStack_7c (*(uint *)(frame + 196))
#define local_40 (*(ulong *)(frame + 256))
#define uStack_78 (*(uint *)(frame + 200))
#define iStack_74 (*(int *)(frame + 204))
#define local_38 (*(ulong *)(frame + 264))
#define iStack_6c (*(int *)(frame + 212))
#define iStack_68 (*(int *)(frame + 216))
#define iStack_64 (*(int *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e10
 */

char recovered_10002e10(char *param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  void *dst;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  char *a;
  bool bVar32;

  if (*param_1 != '\x01') {
    return '\0';
  }
  memset(&local_90,0,0x34);
  iVar7 = Ram0000000000006800;
  if (iVar7 != 0x50414d57) {
    return '\0';
  }
  iVar7 = Ram0000000000006804;
  if (iVar7 == 0) {
    return '\0';
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0xc) {
    return '\0';
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0x80) {
    return '\0';
  }
  uVar5 = UINT_0000687c;
  if ((code *)(ulong)uVar5 == (code *)0x0) {
    return '\0';
  }
  uVar5 = (*(code *)(ulong)uVar5)(&local_90);
  if (local_90 == 0 || uVar5 == 0) {
    return '\0';
  }
  if ((uStack_7c == 0 || local_80 == 0) ||
      ((iStack_84 == 0 || 0x20 < uStack_78) || (0xfefe7fffUL >> ((byte)uStack_78 & 0x3f) & 1) != 0))
  {
    return '\0';
  }
  if ((((((*(int *)(param_1 + 4) == (int)local_90) &&
         (*(int *)(param_1 + 8) == (int)((ulong)local_90 >> 0x20))) &&
        (*(int *)(param_1 + 0xc) == iStack_88)) &&
       (((*(int *)(param_1 + 0x10) == iStack_84 && (*(uint *)(param_1 + 0x14) == local_80)) &&
        ((*(uint *)(param_1 + 0x18) == uStack_7c &&
         ((*(uint *)(param_1 + 0x1c) == uStack_78 && (*(int *)(param_1 + 0x20) == iStack_74))))))))
      && (*(int *)(param_1 + 0x24) == local_70)) &&
     ((((*(int *)(param_1 + 0x28) == iStack_6c && (*(int *)(param_1 + 0x2c) == iStack_68)) &&
       (*(int *)(param_1 + 0x30) == iStack_64)) && (*(int *)(param_1 + 0x34) == local_60)))) {
    cVar13 = '\0';
  }
  else {
    *(int *)(param_1 + 0x34) = local_60;
    *(ulong *)(param_1 + 0x24) = CONCAT44(iStack_6c,local_70);
    *(ulong *)(param_1 + 0x2c) = CONCAT44(iStack_64,iStack_68);
    *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_1 + 0x1c) = CONCAT44(iStack_74,uStack_78);
    *(long *)(param_1 + 4) = local_90;
    *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_84,iStack_88);
    param_1[0x58] = '\0';
    DAT_10022374 = 0;
    DAT_1002217c = 0xffffffff;
    recovered_1000aa00((long)param_1);
    cVar13 = '\x01';
  }
  uVar5 = uStack_7c;
  uVar14 = local_80;
  uVar31 = (ulong)uStack_7c;
  uVar8 = (ulong)local_80;
  memset(&local_9c,0,0xc);
  iVar7 = Ram0000000000006800;
  bVar32 = true;
  if (((iVar7 == 0x50414d57) && (iVar7 = Ram0000000000006804, iVar7 != 0)) &&
     ((uVar6 = Ram0000000000006808, 0xb < uVar6 && (uVar6 = Ram0000000000006808, 0x37 < uVar6)))) {
    uVar6 = UINT_00006834;
    if ((code *)(ulong)uVar6 != (code *)0x0) {
      uVar6 = (*(code *)(ulong)uVar6)(str_10020a9f,&local_9c);
      bVar32 = uVar6 == 0;
    }
  }
  uVar20 = (ulong)local_98;
  if ((bool)(local_9c == 0 | bVar32 | local_98 - 0x80 < 0xffffff81)) goto LAB_1000335f;
  puVar12 = (undefined8 *)(ulong)local_9c;
  if ((ulong)((long)&local_128 - (long)puVar12) < 0x10 || local_98 < 4) {
    uVar21 = 0;
LAB_1000311e:
    uVar26 = uVar20 & 3;
    uVar23 = uVar21;
    if ((local_98 & 3) != 0) {
      do {
        *(undefined1 *)((long)&local_128 + uVar23) = *(undefined1 *)((long)puVar12 + uVar23);
        uVar23 = uVar23 + 1;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    if (uVar21 - uVar20 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)&local_128 + uVar23) = *(undefined1 *)((long)puVar12 + uVar23);
        *(undefined1 *)((long)&local_128 + uVar23 + 1) = *(undefined1 *)((long)puVar12 + uVar23 + 1)
        ;
        *(undefined1 *)((long)&local_128 + uVar23 + 2) = *(undefined1 *)((long)puVar12 + uVar23 + 2)
        ;
        *(undefined1 *)((long)&local_128 + uVar23 + 3) = *(undefined1 *)((long)puVar12 + uVar23 + 3)
        ;
        uVar23 = uVar23 + 4;
      } while (uVar20 != uVar23);
    }
  }
  else if (local_98 < 0x10) {
    uVar23 = 0;
LAB_100030fd:
    uVar21 = (ulong)(local_98 & 0x7c);
    do {
      *(undefined4 *)((long)&local_128 + uVar23) = *(undefined4 *)((long)puVar12 + uVar23);
      uVar23 = uVar23 + 4;
    } while (uVar21 != uVar23);
    if ((local_98 & 0x7c) != local_98) goto LAB_1000311e;
  }
  else {
    uVar6 = local_98 & 0x70;
    uVar21 = (ulong)uVar6;
    local_128 = *puVar12;
    uStack_120 = puVar12[1];
    if (uVar21 != 0x10) {
      local_118 = puVar12[2];
      uStack_110 = puVar12[3];
      if (uVar6 != 0x20) {
        local_108 = puVar12[4];
        uStack_100 = puVar12[5];
        if (uVar6 != 0x30) {
          local_f8 = puVar12[6];
          uStack_f0 = puVar12[7];
          if (uVar6 != 0x40) {
            local_e8 = puVar12[8];
            uStack_e0 = puVar12[9];
            if (uVar6 != 0x50) {
              local_d8 = puVar12[10];
              uStack_d0 = puVar12[0xb];
              if (uVar6 != 0x60) {
                local_c8 = puVar12[0xc];
                uStack_c0 = puVar12[0xd];
              }
            }
          }
        }
      }
    }
    if (uVar6 != local_98) {
      uVar23 = uVar21;
      if ((local_98 & 0xc) == 0) goto LAB_1000311e;
      goto LAB_100030fd;
    }
  }
  *(undefined1 *)((long)&local_128 + uVar20) = 0;
  if ((char)local_128 != '\0') {
    local_40 = local_40 & 0xffffffff00000000;
    a = (char *)&local_128;
    local_48 = local_48 & 0xffffffff00000000;
    local_50 = uVar8;
    local_38 = uVar31;
    do {
      uVar8 = strlen(str_10020ab1);
      iVar7 = strncmp(a,str_10020ab1,uVar8);
      if (iVar7 == 0) {
        bVar9 = a[0xc];
        if (bVar9 != 0) {
          uVar5 = 0;
          if ((byte)(bVar9 - 0x30U) < 10) {
            pbVar22 = (byte *)(a + 0xd);
            uVar5 = 0;
            do {
              if ((0x19999999 < uVar5) || (uVar5 == 0x19999999 && 5 < (byte)(bVar9 - 0x30U)))
              goto LAB_10003303;
              uVar5 = (uint)(byte)(bVar9 - 0x30U) + uVar5 * 10;
              bVar9 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while ((byte)(bVar9 - 0x30U) < 10);
          }
          if ((bVar9 < 0xe) && ((0x2401U >> (bVar9 & 0x1f) & 1) != 0)) {
            local_48 = CONCAT44(PF_PART4(local_48, 4),uVar5);
          }
        }
      }
      else {
        uVar8 = strlen(str_10020abe);
        iVar7 = strncmp(a,str_10020abe,uVar8);
        if ((iVar7 == 0) && (bVar9 = a[0xd], bVar9 != 0)) {
          uVar5 = 0;
          if ((byte)(bVar9 - 0x30U) < 10) {
            pbVar22 = (byte *)(a + 0xe);
            uVar5 = 0;
            do {
              if ((0x19999999 < uVar5) || (uVar5 == 0x19999999 && 5 < (byte)(bVar9 - 0x30U)))
              goto LAB_10003303;
              uVar5 = (uint)(byte)(bVar9 - 0x30U) + uVar5 * 10;
              bVar9 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while ((byte)(bVar9 - 0x30U) < 10);
          }
          if ((bVar9 < 0xe) && ((0x2401U >> (bVar9 & 0x1f) & 1) != 0)) {
            local_40 = CONCAT44(PF_PART4(local_40, 4),uVar5);
          }
        }
      }
LAB_10003303:
      for (; (cVar2 = *a, cVar2 != '\0' && (cVar2 != '\n')); a = a + 1) {
      }
      pcVar1 = a + (cVar2 == '\n');
      a = a + (cVar2 == '\n');
    } while (*pcVar1 != '\0');
    uVar5 = (uint)local_38;
    uVar14 = (uint)local_50;
    if (((uint)local_48 != 0) && ((uint)local_40 != 0)) {
      uVar14 = (uint)local_48;
      if (0xfff < (int)(uint)local_48) {
        uVar14 = 0x1000;
      }
      if ((int)uVar14 < 2) {
        uVar14 = 1;
      }
      uVar5 = 0x1000;
      if ((int)(uint)local_40 < 0x1000) {
        uVar5 = (uint)local_40;
      }
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
    }
  }
LAB_1000335f:
  if (0xfff < (uVar5 - 1 | uVar14 - 1)) {
    if (0xfff < (int)local_80) {
      local_80 = 0x1000;
    }
    uVar14 = local_80;
    if ((int)local_80 < 2) {
      uVar14 = 1;
    }
    uVar5 = 0x1000;
    if ((int)uStack_7c < 0x1000) {
      uVar5 = uStack_7c;
    }
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
  }
  if (((DAT_10022348 == (void *)0x0) || (DAT_10022340 != uVar14)) || (DAT_10022344 != uVar5)) {
    if (0xfff < (uVar5 - 1 | uVar14 - 1)) {
      return cVar13;
    }
    uVar8 = (ulong)uVar5 * (ulong)uVar14 * 4;
    if (uVar8 == 0) {
      return cVar13;
    }
    iVar7 = Ram0000000000006800;
    if (iVar7 != 0x50414d57) {
      return cVar13;
    }
    iVar7 = Ram0000000000006804;
    if (iVar7 == 0) {
      return cVar13;
    }
    uVar6 = Ram0000000000006808;
    if (uVar6 < 0xc) {
      return cVar13;
    }
    uVar6 = Ram0000000000006808;
    if (uVar6 < 0x58) {
      return cVar13;
    }
    uVar6 = UINT_00006854;
    if ((code *)(ulong)uVar6 == (code *)0x0) {
      return cVar13;
    }
    dst = (*(code *)(ulong)uVar6)(DAT_10022348,uVar8);
    if (dst == (void *)0x0) {
      return cVar13;
    }
    DAT_10022170 = uVar14;
    DAT_10022174 = uVar5;
    DAT_10022340 = uVar14;
    DAT_10022344 = uVar5;
    DAT_10022348 = dst;
    memset(dst,0,uVar8);
    DAT_10022374 = 0;
    DAT_1002217c = 0xffffffff;
  }
  else if (cVar13 == '\0') {
    return '\0';
  }
  uVar14 = DAT_10022174;
  uVar5 = DAT_10022170;
  iVar7 = DAT_10022170 - 1;
  if ((int)DAT_10022170 < 1) {
    iVar7 = 0;
  }
  iVar15 = DAT_10022174 - 1;
  if ((int)DAT_10022174 < 1) {
    iVar15 = 0;
  }
  iVar19 = *(int *)(param_1 + 0x5c);
  if (iVar19 < iVar7) {
    iVar7 = iVar19;
  }
  if (iVar19 < 0) {
    iVar7 = 0;
  }
  iVar19 = *(int *)(param_1 + 0x60);
  if (iVar19 < iVar15) {
    iVar15 = iVar19;
  }
  *(int *)(param_1 + 0x5c) = iVar7;
  if (iVar19 < 0) {
    iVar15 = 0;
  }
  *(int *)(param_1 + 0x60) = iVar15;
  lVar4 = DAT_10022368;
  if (DAT_10022368 == 0) {
    return '\x01';
  }
  iVar7 = uVar5 - 0x1c;
  iVar15 = uVar14 - 0x6e;
  lVar28 = 0;
  do {
    if (*(char *)(lVar4 + lVar28) == '\x01') {
      uVar6 = *(uint *)(lVar4 + 0x10 + lVar28);
      uVar8 = (ulong)uVar6;
      if (uVar8 < 7) {
        iVar19 = *(int *)(&DAT_100209a0 + uVar8 * 4);
        iVar11 = *(int *)(&DAT_100209bc + uVar8 * 4);
      }
      else {
        iVar11 = 0x6e;
        iVar19 = 0xb4;
      }
      iVar16 = -4;
      if (uVar6 != 6) {
        iVar16 = -0x42;
      }
      iVar27 = (uVar14 - 0x1a) + iVar16;
      iVar10 = iVar19;
      if (iVar19 < (int)(uVar5 - 8)) {
        iVar10 = uVar5 - 8;
      }
      if (iVar27 <= iVar11) {
        iVar27 = iVar11;
      }
      if (*(char *)(lVar4 + 3 + lVar28) == '\x01') {
        *(int *)(lVar4 + 0x60 + lVar28) = iVar7;
        *(int *)(lVar4 + 100 + lVar28) = iVar15;
        iVar3 = iVar7;
        if (iVar7 < iVar19) {
          *(int *)(lVar4 + 0x60 + lVar28) = iVar19;
          iVar3 = iVar19;
        }
        iVar29 = 0xe;
        uVar6 = 0x24;
        iVar30 = iVar15;
        if (iVar15 < iVar11) {
          *(int *)(lVar4 + 100 + lVar28) = iVar11;
          iVar30 = iVar11;
        }
      }
      else {
        iVar29 = *(int *)(lVar4 + 0x60 + lVar28);
        iVar3 = iVar10;
        if (iVar29 < iVar10) {
          iVar3 = iVar29;
        }
        if (iVar29 < iVar19) {
          iVar3 = iVar19;
        }
        *(int *)(lVar4 + 0x60 + lVar28) = iVar3;
        iVar29 = *(int *)(lVar4 + 100 + lVar28);
        iVar30 = iVar27;
        if (iVar29 < iVar27) {
          iVar30 = iVar29;
        }
        if (iVar29 < iVar11) {
          iVar30 = iVar11;
        }
        *(int *)(lVar4 + 100 + lVar28) = iVar30;
        iVar29 = *(int *)(lVar4 + 0x58 + lVar28);
        uVar6 = *(uint *)(lVar4 + 0x5c + lVar28);
      }
      iVar17 = 4;
      if (7 < (int)(uVar5 - iVar3)) {
        iVar17 = (uVar5 - iVar3) + -4;
      }
      uVar18 = (iVar16 + uVar14) - iVar30;
      if ((int)uVar18 < 0x1b) {
        uVar18 = 0x1a;
      }
      iVar24 = iVar29;
      if (iVar17 <= iVar29) {
        iVar24 = iVar17;
      }
      if (iVar29 < 4) {
        iVar24 = 4;
      }
      *(int *)(lVar4 + 0x58 + lVar28) = iVar24;
      uVar25 = uVar6;
      if (uVar18 <= uVar6) {
        uVar25 = uVar18;
      }
      if ((int)uVar6 < 0x1a) {
        uVar25 = 0x1a;
      }
      *(uint *)(lVar4 + 0x5c + lVar28) = uVar25;
      iVar29 = *(int *)(lVar4 + 0x70 + lVar28);
      if (iVar29 == 0) {
        iVar29 = iVar3;
      }
      if (iVar29 < iVar10) {
        iVar10 = iVar29;
      }
      if (iVar29 < iVar19) {
        iVar10 = iVar19;
      }
      *(int *)(lVar4 + 0x70 + lVar28) = iVar10;
      iVar19 = *(int *)(lVar4 + 0x74 + lVar28);
      if (iVar19 == 0) {
        iVar19 = iVar30;
      }
      if (iVar19 < iVar27) {
        iVar27 = iVar19;
      }
      if (iVar19 < iVar11) {
        iVar27 = iVar11;
      }
      *(int *)(lVar4 + 0x74 + lVar28) = iVar27;
      iVar19 = 4;
      if (7 < (int)(uVar5 - iVar10)) {
        iVar19 = (uVar5 - iVar10) + -4;
      }
      iVar27 = (iVar16 + uVar14) - iVar27;
      if (iVar27 < 0x1b) {
        iVar27 = 0x1a;
      }
      iVar11 = *(int *)(lVar4 + 0x68 + lVar28);
      iVar16 = *(int *)(lVar4 + 0x6c + lVar28);
      iVar10 = iVar11;
      if (iVar19 <= iVar11) {
        iVar10 = iVar19;
      }
      if (iVar11 < 4) {
        iVar10 = 4;
      }
      *(int *)(lVar4 + 0x68 + lVar28) = iVar10;
      iVar19 = iVar16;
      if (iVar27 <= iVar16) {
        iVar19 = iVar27;
      }
      if (iVar16 < 0x1a) {
        iVar19 = 0x1a;
      }
      *(int *)(lVar4 + 0x6c + lVar28) = iVar19;
      if (uVar8 == 0) {
        iVar30 = iVar30 + -0x6a;
        iVar19 = -1;
        if (0x49 < iVar30) {
          iVar30 = (int)((ulong)((long)iVar30 * 0x22983759) >> 0x20) - iVar30;
          iVar19 = (iVar30 >> 6) - (iVar30 >> 0x1f);
        }
        iVar11 = (int)((ulong)((long)(iVar3 + -0x26) * -0x2df2df2d) >> 0x20) + iVar3 + -0x26;
        iVar11 = (iVar11 >> 6) - (iVar11 >> 0x1f);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        iVar16 = *(int *)(lVar4 + 0xb00 + lVar28);
        if (iVar16 < 0) {
          *(undefined4 *)(lVar4 + 0xb00 + lVar28) = 0;
          iVar16 = 0;
        }
        iVar19 = iVar11 * iVar19 + *(int *)(lVar4 + 0xaf8 + lVar28) + 2;
        if ((iVar19 < 1) || (iVar19 < iVar16)) {
          iVar11 = 0;
          if (0 < iVar19) {
            iVar11 = iVar19;
          }
          *(int *)(lVar4 + 0xb00 + lVar28) = iVar11;
        }
      }
    }
    lVar28 = lVar28 + 0xda8;
  } while (lVar28 != 0x11120);
  if (DAT_100223e8 == '\0') {
    return '\x01';
  }
  iVar7 = DAT_10022980 * -0x16 + uVar14 + -4;
  uVar14 = 0xa8;
  if (0xa8 < (int)uVar5) {
    uVar14 = uVar5;
  }
  iVar15 = uVar14 - 0xa8;
  if (DAT_100223ec < (int)(uVar14 - 0xa8)) {
    iVar15 = DAT_100223ec;
  }
  iVar19 = 0;
  if (-1 < DAT_100223ec) {
    iVar19 = iVar15;
  }
  if (iVar7 < 0x19) {
    iVar7 = 0x18;
  }
  if (DAT_100223f0 < iVar7) {
    iVar7 = DAT_100223f0;
  }
  if (DAT_100223f0 < 0x18) {
    iVar7 = 0x18;
  }
  DAT_100223ec = iVar19;
  DAT_100223f0 = iVar7;
  return '\x01';
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100209a0
#undef DAT_100209bc
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_1002217c
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022368
#undef DAT_10022374
#undef DAT_100223e8
#undef DAT_100223ec
#undef DAT_100223f0
#undef DAT_10022980
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006854
#undef UINT_0000687c
#undef str_10020a9f
#undef str_10020ab1
#undef str_10020abe
#undef uStack_120
#undef local_128
#undef local_118
#undef uStack_110
#undef local_108
#undef local_f8
#undef uStack_100
#undef local_e8
#undef local_d8
#undef uStack_f0
#undef local_c8
#undef uStack_e0
#undef local_9c
#undef local_98
#undef uStack_d0
#undef local_90
#undef local_80
#undef uStack_c0
#undef local_70
#undef local_60
#undef iStack_88
#undef iStack_84
#undef local_50
#undef local_48
#undef uStack_7c
#undef local_40
#undef uStack_78
#undef iStack_74
#undef local_38
#undef iStack_6c
#undef iStack_68
#undef iStack_64

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006818
#define UINT_00006818 (*(uint *)(0x6818U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003870
 */

void recovered_10003870(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x53 < uVar2))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x38));
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x40));
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    param_1[0x58] = 0;
  }
  *param_1 = 0;
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x1b < uVar2)))) {
    uVar2 = UINT_00006818;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)();
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006818
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1002217c
#define DAT_1002217c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022368
#define DAT_10022368 (*(void * *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022374
#define DAT_10022374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10022988
#define DAT_10022988 (*(void * *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_10022990
#define DAT_10022990 (*(void * *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10025698
#define DAT_10025698 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x507fU)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a7U)))
#undef DAT_10027040
#define DAT_10027040 (*(void * *)(((uintptr_t)pf_module_state + 0x6a27U)))
#undef DAT_10027048
#define DAT_10027048 (*(void * *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027050
#define DAT_10027050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a37U)))
#undef DAT_10027058
#define DAT_10027058 (*(void * *)(((uintptr_t)pf_module_state + 0x6a3fU)))
#undef DAT_10027060
#define DAT_10027060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a47U)))
#undef DAT_10027068
#define DAT_10027068 (*(void * *)(((uintptr_t)pf_module_state + 0x6a4fU)))
#undef DAT_10027070
#define DAT_10027070 (*(void * *)(((uintptr_t)pf_module_state + 0x6a57U)))
#undef DAT_10027078
#define DAT_10027078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a5fU)))
#undef DAT_1002707c
#define DAT_1002707c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a63U)))
#undef DAT_10027080
#define DAT_10027080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a67U)))
#undef DAT_10027084
#define DAT_10027084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a6bU)))
#undef DAT_10027088
#define DAT_10027088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a6fU)))
#undef DAT_1002708c
#define DAT_1002708c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6a73U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003990
 */

void recovered_10003990(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;

  lVar4 = 0xb0c;
  pvVar3 = DAT_10022368;
  pvVar5 = DAT_10022368;
  do {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else if (*(char *)((long)pvVar3 + lVar4 + -0xb0c) == '\x01') {
      pvVar3 = *(void **)((long)pvVar3 + lVar4 + -0x1c);
      if ((((pvVar3 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
          (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2)))
         ) {
        uVar2 = UINT_00006850;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(pvVar3);
          pvVar5 = DAT_10022368;
        }
      }
      if (((*(void **)((long)pvVar5 + lVar4) != (void *)0x0) &&
          (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
         ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
          ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))
          )))) {
        uVar2 = UINT_00006850;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(*(void **)((long)pvVar5 + lVar4));
        }
      }
      memset((void *)((long)pvVar5 + lVar4),0,0x18);
      pvVar3 = DAT_10022368;
      pvVar5 = DAT_10022368;
    }
    lVar4 = lVar4 + 0xda8;
  } while (lVar4 != 0x11c2c);
  lVar4 = 0xf8;
  do {
    if ((((*(void **)(&DAT_100256c0 + lVar4) != (void *)0x0) &&
         (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(&DAT_100256c0 + lVar4));
      }
    }
    memset(&DAT_100256c0 + lVar4,0,0x18);
    lVar4 = lVar4 + 0x110;
  } while (lVar4 != 0xb98);
  if (DAT_10027040 != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x7b < uVar2))))
    {
      uVar2 = UINT_00006878;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(DAT_10027040);
      }
    }
    DAT_10027040 = (void *)0x0;
  }
  if ((((DAT_10025698 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(DAT_10025698);
    }
  }
  memset(&DAT_10025698,0,0x18);
  if (DAT_10027048 != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(DAT_10027048);
      }
    }
    DAT_10027048 = (void *)0x0;
  }
  DAT_10027050 = 0;
  DAT_10022374 = 0;
  DAT_1002217c = 0xffffffff;
  if ((((DAT_10022368 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(DAT_10022368);
    }
  }
  if (((DAT_10022988 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
     ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
      ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))))
  {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(DAT_10022988);
    }
  }
  if ((((DAT_10022990 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(DAT_10022990);
    }
  }
  if (((DAT_10027058 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
     ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
      ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))))
  {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(DAT_10027058);
    }
  }
  if (DAT_10027068 != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x53 < uVar2))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(DAT_10027068);
      }
    }
    DAT_10027068 = (void *)0x0;
  }
  if (DAT_10027070 != (void *)0x0) {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(DAT_10027070);
      }
    }
    DAT_10027070 = (void *)0x0;
  }
  DAT_10027078 = 0;
  DAT_1002707c = 0;
  DAT_10027080 = 0;
  DAT_10027084 = 0;
  DAT_10027088 = 0;
  DAT_1002708c = 0;
  DAT_10022368 = (void *)0x0;
  DAT_10022988 = (void *)0x0;
  DAT_10022990 = (void *)0x0;
  DAT_10027058 = (void *)0x0;
  DAT_10027060 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1002217c
#undef DAT_10022368
#undef DAT_10022374
#undef DAT_10022988
#undef DAT_10022990
#undef DAT_10025698
#undef DAT_100256c0
#undef DAT_10027040
#undef DAT_10027048
#undef DAT_10027050
#undef DAT_10027058
#undef DAT_10027060
#undef DAT_10027068
#undef DAT_10027070
#undef DAT_10027078
#undef DAT_1002707c
#undef DAT_10027080
#undef DAT_10027084
#undef DAT_10027088
#undef DAT_1002708c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006878

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022988
#define DAT_10022988 (*(char * *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

ulong recovered_10003ea0(int param_1,char *param_2,undefined4 param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;

  pcVar8 = &DAT_10020a84;
  if (param_2 != (char *)0x0) {
    pcVar8 = param_2;
  }
  lVar9 = 8;
  uVar7 = 0;
  pcVar6 = DAT_10022988;
  do {
    if ((pcVar6[lVar9 + -8] == '\x01') && (*(int *)(pcVar6 + lVar9 + -4) == param_1)) {
      iVar1 = strcmp(pcVar6 + lVar9,pcVar8);
      if (iVar1 == 0) goto LAB_100041a2;
      pcVar6 = DAT_10022988;
    }
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + 300;
  } while (uVar7 != 0x12);
  if (*pcVar6 == '\0') {
    uVar7 = 0;
    pcVar2 = pcVar6;
  }
  else if (pcVar6[300] == '\x01') {
    if (pcVar6[600] == '\x01') {
      if (pcVar6[900] == '\x01') {
        if (pcVar6[0x4b0] == '\x01') {
          if (pcVar6[0x5dc] == '\x01') {
            if (pcVar6[0x708] == '\x01') {
              if (pcVar6[0x834] == '\x01') {
                if (pcVar6[0x960] == '\x01') {
                  if (pcVar6[0xa8c] == '\x01') {
                    if (pcVar6[3000] == '\x01') {
                      if (pcVar6[0xce4] == '\x01') {
                        if (pcVar6[0xe10] == '\x01') {
                          if (pcVar6[0xf3c] == '\x01') {
                            if (pcVar6[0x1068] == '\x01') {
                              if (pcVar6[0x1194] == '\x01') {
                                if (pcVar6[0x12c0] == '\x01') {
                                  uVar7 = 0xffffffff;
                                  if (pcVar6[0x13ec] != '\0') goto LAB_100041a2;
                                  uVar7 = 0x11;
                                  pcVar2 = pcVar6 + 0x13ec;
                                }
                                else {
                                  uVar7 = 0x10;
                                  pcVar2 = pcVar6 + 0x12c0;
                                }
                              }
                              else {
                                uVar7 = 0xf;
                                pcVar2 = pcVar6 + 0x1194;
                              }
                            }
                            else {
                              uVar7 = 0xe;
                              pcVar2 = pcVar6 + 0x1068;
                            }
                          }
                          else {
                            uVar7 = 0xd;
                            pcVar2 = pcVar6 + 0xf3c;
                          }
                        }
                        else {
                          uVar7 = 0xc;
                          pcVar2 = pcVar6 + 0xe10;
                        }
                      }
                      else {
                        uVar7 = 0xb;
                        pcVar2 = pcVar6 + 0xce4;
                      }
                    }
                    else {
                      uVar7 = 10;
                      pcVar2 = pcVar6 + 3000;
                    }
                  }
                  else {
                    uVar7 = 9;
                    pcVar2 = pcVar6 + 0xa8c;
                  }
                }
                else {
                  uVar7 = 8;
                  pcVar2 = pcVar6 + 0x960;
                }
              }
              else {
                uVar7 = 7;
                pcVar2 = pcVar6 + 0x834;
              }
            }
            else {
              uVar7 = 6;
              pcVar2 = pcVar6 + 0x708;
            }
          }
          else {
            uVar7 = 5;
            pcVar2 = pcVar6 + 0x5dc;
          }
        }
        else {
          uVar7 = 4;
          pcVar2 = pcVar6 + 0x4b0;
        }
      }
      else {
        uVar7 = 3;
        pcVar2 = pcVar6 + 900;
      }
    }
    else {
      uVar7 = 2;
      pcVar2 = pcVar6 + 600;
    }
  }
  else {
    uVar7 = 1;
    pcVar2 = pcVar6 + 300;
  }
  *pcVar2 = '\x01';
  lVar9 = uVar7 * 300;
  pcVar6[lVar9 + 1] = param_4;
  *(int *)(pcVar6 + lVar9 + 4) = param_1;
  cVar4 = *pcVar8;
  if (cVar4 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar3 = uVar5 + 1;
      pcVar6[uVar5 + lVar9 + 8] = cVar4;
      if (0x26 < uVar3) break;
      cVar4 = pcVar8[uVar5 + 1];
      uVar5 = uVar3;
    } while (cVar4 != '\0');
  }
  pcVar6[uVar3 + lVar9 + 8] = '\0';
  pcVar6[lVar9 + 0x30] = '\0';
  iVar1 = recovered_10004540();
  pcVar8 = DAT_10022988;
  *(int *)(DAT_10022988 + lVar9 + 0x124) = iVar1;
  pcVar8[lVar9 + 0x12a] = (char)((uint)param_3 >> 0x10);
  *(short *)(pcVar8 + lVar9 + 0x128) = (short)param_3;
LAB_100041a2:
  return uVar7 & 0xffffffff;
}

#undef DAT_10020a84
#undef DAT_10022988

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10020ba9
#define DAT_10020ba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x590U)))
#undef DAT_10022988
#define DAT_10022988 (*(char * *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c0
 */

void recovered_100041c0(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if (param_1 == (char *)0x0) {
    param_1 = &DAT_10020a84;
    pcVar2 = (char *)0x0;
  }
  else {
    cVar4 = *param_1;
    pcVar2 = (char *)0x0;
    if (cVar4 != '\0') {
      pcVar5 = param_1;
      do {
        if (cVar4 == '/') {
          pcVar2 = pcVar5;
        }
        cVar4 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
    }
  }
  pcVar5 = pcVar2 + 1;
  if (pcVar2 == (char *)0x0) {
    pcVar5 = param_1;
  }
  lVar8 = 0;
  pcVar2 = DAT_10022988;
  do {
    if ((((pcVar2[lVar8] == '\x01') && (*(int *)(pcVar2 + lVar8 + 4) == 5)) &&
        (*(int *)(pcVar2 + lVar8 + 0x124) == param_2)) &&
       (iVar1 = strcmp(pcVar2 + lVar8 + 0x30,param_1), pcVar2 = DAT_10022988, iVar1 == 0
       )) {
      DAT_10022988[lVar8 + 1] = '\x01';
      return;
    }
    lVar8 = lVar8 + 300;
  } while (lVar8 != 0x1518);
  if (*pcVar2 == '\0') {
    lVar8 = 0;
    pcVar3 = pcVar2;
  }
  else if (pcVar2[300] == '\x01') {
    if (pcVar2[600] == '\x01') {
      if (pcVar2[900] == '\x01') {
        if (pcVar2[0x4b0] == '\x01') {
          if (pcVar2[0x5dc] == '\x01') {
            if (pcVar2[0x708] == '\x01') {
              if (pcVar2[0x834] == '\x01') {
                if (pcVar2[0x960] == '\x01') {
                  if (pcVar2[0xa8c] == '\x01') {
                    if (pcVar2[3000] == '\x01') {
                      if (pcVar2[0xce4] == '\x01') {
                        if (pcVar2[0xe10] == '\x01') {
                          if (pcVar2[0xf3c] == '\x01') {
                            if (pcVar2[0x1068] == '\x01') {
                              if (pcVar2[0x1194] == '\x01') {
                                if (pcVar2[0x12c0] == '\x01') {
                                  if (pcVar2[0x13ec] == '\x01') {
                                    return;
                                  }
                                  lVar8 = 0x11;
                                  pcVar3 = pcVar2 + 0x13ec;
                                }
                                else {
                                  lVar8 = 0x10;
                                  pcVar3 = pcVar2 + 0x12c0;
                                }
                              }
                              else {
                                lVar8 = 0xf;
                                pcVar3 = pcVar2 + 0x1194;
                              }
                            }
                            else {
                              lVar8 = 0xe;
                              pcVar3 = pcVar2 + 0x1068;
                            }
                          }
                          else {
                            lVar8 = 0xd;
                            pcVar3 = pcVar2 + 0xf3c;
                          }
                        }
                        else {
                          lVar8 = 0xc;
                          pcVar3 = pcVar2 + 0xe10;
                        }
                      }
                      else {
                        lVar8 = 0xb;
                        pcVar3 = pcVar2 + 0xce4;
                      }
                    }
                    else {
                      lVar8 = 10;
                      pcVar3 = pcVar2 + 3000;
                    }
                  }
                  else {
                    lVar8 = 9;
                    pcVar3 = pcVar2 + 0xa8c;
                  }
                }
                else {
                  lVar8 = 8;
                  pcVar3 = pcVar2 + 0x960;
                }
              }
              else {
                lVar8 = 7;
                pcVar3 = pcVar2 + 0x834;
              }
            }
            else {
              lVar8 = 6;
              pcVar3 = pcVar2 + 0x708;
            }
          }
          else {
            lVar8 = 5;
            pcVar3 = pcVar2 + 0x5dc;
          }
        }
        else {
          lVar8 = 4;
          pcVar3 = pcVar2 + 0x4b0;
        }
      }
      else {
        lVar8 = 3;
        pcVar3 = pcVar2 + 900;
      }
    }
    else {
      lVar8 = 2;
      pcVar3 = pcVar2 + 600;
    }
  }
  else {
    lVar8 = 1;
    pcVar3 = pcVar2 + 300;
  }
  *pcVar3 = '\x01';
  lVar8 = lVar8 * 300;
  pcVar2[lVar8 + 1] = '\x01';
  pcVar3 = pcVar2 + lVar8 + 4;
  pcVar3[0] = '\x05';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  *(int *)(pcVar2 + lVar8 + 0x124) = param_2;
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      pcVar2[uVar7 + lVar8 + 0x30] = cVar4;
      if (0xef < uVar6) break;
      cVar4 = param_1[uVar7 + 1];
      uVar7 = uVar6;
    } while (cVar4 != '\0');
  }
  pcVar2[uVar6 + lVar8 + 0x30] = '\0';
  pcVar3 = &DAT_10020ba9;
  if (*pcVar5 != '\0') {
    pcVar3 = pcVar5;
  }
  cVar4 = *pcVar3;
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      pcVar2[uVar7 + lVar8 + 8] = cVar4;
      if (0x26 < uVar6) break;
      cVar4 = pcVar3[uVar7 + 1];
      uVar7 = uVar6;
    } while (cVar4 != '\0');
  }
  pcVar2[uVar6 + lVar8 + 8] = '\0';
  pcVar2[lVar8 + 0x12a] = -0x14;
  (pcVar2 + lVar8 + 0x128)[0] = -0x14;
  (pcVar2 + lVar8 + 0x128)[1] = -0x14;
  return;
}

#undef DAT_10020a84
#undef DAT_10020ba9
#undef DAT_10022988

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022318
#define DAT_10022318 (*(int *)(((uintptr_t)pf_module_state + 0x1cffU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#define local_34 (*(int *)(frame + 16300))
#define local_3fc8 (*(undefined1 (*)[496])(frame + 24))
#define local_3dd8 (*(int (*)[3909])(frame + 520))
#define local_c4 (*(undefined1 (*)[4])(frame + 16156))
#define local_c0 (*(uint *)(frame + 16160))
#define local_38 (*(uint *)(frame + 16296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

int recovered_10004540(void)

{
  unsigned char frame[16384] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;

  iVar7 = Ram0000000000006800;
  iVar2 = -1;
  if ((((iVar7 == 0x50414d57) && (iVar7 = Ram0000000000006804, iVar7 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0xbf < uVar3)) {
    uVar3 = UINT_000068bc;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      iVar2 = (*(code *)(ulong)uVar3)();
    }
  }
  local_38 = 0;
  if (-1 < DAT_10022318) {
    return DAT_10022318;
  }
  if (-1 < iVar2) {
    DAT_10022318 = iVar2;
    return iVar2;
  }
  DAT_10022318 = 0xfffffffe;
  memset(local_3fc8,0,0x3f00);
  iVar7 = Ram0000000000006800;
  iVar2 = -1;
  if (((iVar7 == 0x50414d57) && (iVar7 = Ram0000000000006804, iVar7 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0xc3 < uVar3)))) {
    uVar3 = UINT_000068c0;
    if (((code *)(ulong)uVar3 != (code *)0x0) &&
       (uVar3 = (*(code *)(ulong)uVar3)(local_3fc8,0x20,&local_38), uVar3 != 0)) {
      if (local_38 < 0x21) {
        if (local_38 == 0) goto LAB_100047f2;
      }
      else {
        local_38 = 0x20;
      }
      piVar6 = local_3dd8;
      uVar5 = 0;
      local_34 = -1;
      do {
        iVar7 = *piVar6;
        if (-1 < iVar7) {
          memset(local_c4,0,0x8c);
          iVar1 = Ram0000000000006800;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
              (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
             (uVar3 = Ram0000000000006808, 0x113 < uVar3)) {
            uVar3 = UINT_00006910;
            if ((((code *)(ulong)uVar3 != (code *)0x0) &&
                (uVar3 = (*(code *)(ulong)uVar3)(iVar7,local_c4), uVar3 != 0)) &&
               ((local_c0 & 0x12) == 2)) {
              if (iVar2 < 0) {
                iVar2 = iVar7;
              }
              memset(local_c4,0,0x8c);
              iVar1 = Ram0000000000006800;
              if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
                 ((uVar3 = Ram0000000000006808, 0xb < uVar3 &&
                  (uVar3 = Ram0000000000006808, 0x113 < uVar3)))) {
                uVar3 = UINT_00006910;
                if (((((code *)(ulong)uVar3 != (code *)0x0) &&
                     (uVar3 = (*(code *)(ulong)uVar3)(iVar7,local_c4), uVar3 != 0)) &&
                    ((local_c0 & 0x12) == 2)) && ((local_c0 & 0xc) == 0)) {
                  if (local_34 < 0) {
                    local_34 = iVar7;
                  }
                  uVar4 = recovered_1000c3b0(iVar7);
                  if ((char)uVar4 != '\0') {
                    DAT_10022318 = iVar7;
                    return iVar7;
                  }
                }
              }
            }
          }
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 0x7e;
      } while (uVar5 < local_38);
      if (-1 < local_34) {
        return local_34;
      }
    }
  }
LAB_100047f2:
  iVar7 = -1;
  if (-1 < iVar2) {
    iVar7 = iVar2;
  }
  return iVar7;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022318
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068bc
#undef UINT_000068c0
#undef UINT_00006910
#undef local_34
#undef local_3fc8
#undef local_3dd8
#undef local_c4
#undef local_c0
#undef local_38

#undef DAT_1002231c
#define DAT_1002231c (*(int *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10027194
#define DAT_10027194 (*(int *)(((uintptr_t)pf_module_state + 0x6b7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004810
 */

void recovered_10004810(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;

  recovered_1000d9d0();
  recovered_1000de50();
  recovered_1000e110();
  recovered_1000e200();
  if (0 < DAT_10027194) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(DAT_10022990 + lVar2 * 4);
      recovered_1000e5b0((char *)((long)iVar1 * 0xda8 + DAT_10022368),iVar1 == DAT_1002231c);
      lVar2 = lVar2 + 1;
    } while (lVar2 < DAT_10027194);
  }
  recovered_1000f5d0();
  recovered_1000f6e0();
  recovered_1000f940();
  recovered_1000fa10();
  return;
}

#undef DAT_1002231c
#undef DAT_10022368
#undef DAT_10022990
#undef DAT_10027194

#undef DAT_10020954
#define DAT_10020954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33bU)))
#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a0
 */

void recovered_100048a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;

  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60);
  lVar5 = (long)DAT_10022170;
  lVar7 = (long)DAT_10022174;
  lVar8 = 0;
LAB_100048dd:
  pcVar9 = (char *)((long)&DAT_10020954 + (long)(int)(&DAT_10020954)[lVar8]);
  lVar1 = lVar8 + iVar4;
  lVar12 = 0;
  lVar6 = (long)iVar3;
  do {
    cVar2 = *pcVar9;
    if (cVar2 == 'B') {
      if ((lVar6 < lVar5 && -1 < (int)((uint)lVar6 | (uint)lVar1)) &&
         (lVar1 < lVar7 && DAT_10022348 != 0)) {
        lVar10 = lVar12 + iVar3;
        uVar11 = 0;
LAB_1000499f:
        lVar10 = lVar10 + lVar1 * lVar5;
        *(undefined1 *)(DAT_10022348 + lVar10 * 4) = uVar11;
        *(undefined1 *)(DAT_10022348 + 1 + lVar10 * 4) = uVar11;
        *(undefined1 *)(DAT_10022348 + 2 + lVar10 * 4) = uVar11;
        *(undefined1 *)(DAT_10022348 + 3 + lVar10 * 4) = 0xff;
      }
    }
    else if (cVar2 == 'W') {
      if ((lVar6 < lVar5 && -1 < (int)((uint)lVar6 | (uint)lVar1)) &&
         (DAT_10022348 != 0 && lVar1 < lVar7)) {
        uVar11 = 0xff;
        lVar10 = lVar6;
        goto LAB_1000499f;
      }
    }
    else if (cVar2 == '\0') break;
    lVar12 = lVar12 + 1;
    pcVar9 = pcVar9 + 1;
    lVar6 = lVar6 + 1;
  } while( true );
  lVar8 = lVar8 + 1;
  if (lVar8 == 0x10) {
    return;
  }
  goto LAB_100048dd;
}

#undef DAT_10020954
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020730
#define DAT_10020730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x117U)))
#undef DAT_10020740
#define DAT_10020740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef DAT_10020750
#define DAT_10020750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef DAT_10020760
#define DAT_10020760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x147U)))
#undef DAT_10020770
#define DAT_10020770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
#undef DAT_10020780
#define DAT_10020780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167U)))
#undef DAT_10020790
#define DAT_10020790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177U)))
#undef DAT_10022340
#define DAT_10022340 (*(uint *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(uint *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10027068
#define DAT_10027068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a4fU)))
#undef DAT_10027070
#define DAT_10027070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a57U)))
#undef DAT_10027078
#define DAT_10027078 (*(uint *)(((uintptr_t)pf_module_state + 0x6a5fU)))
#undef DAT_1002707c
#define DAT_1002707c (*(uint *)(((uintptr_t)pf_module_state + 0x6a63U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000695c
#define UINT_0000695c (*(uint *)(0x695cU))
#undef UNK_10020734
#define UNK_10020734 (*(int *)(((uintptr_t)pf_module_state + 0x11bU)))
#undef UNK_10020738
#define UNK_10020738 (*(int *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef UNK_1002073c
#define UNK_1002073c (*(int *)(((uintptr_t)pf_module_state + 0x123U)))
#undef UNK_10020744
#define UNK_10020744 (*(int *)(((uintptr_t)pf_module_state + 0x12bU)))
#undef UNK_10020748
#define UNK_10020748 (*(int *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef UNK_1002074c
#define UNK_1002074c (*(int *)(((uintptr_t)pf_module_state + 0x133U)))
#undef UNK_10020754
#define UNK_10020754 (*(uint *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef UNK_10020758
#define UNK_10020758 (*(uint *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef UNK_1002075c
#define UNK_1002075c (*(uint *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_10020764
#define UNK_10020764 (*(uint *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef UNK_10020768
#define UNK_10020768 (*(uint *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef UNK_1002076c
#define UNK_1002076c (*(uint *)(((uintptr_t)pf_module_state + 0x153U)))
#undef UNK_10020774
#define UNK_10020774 (*(uint *)(((uintptr_t)pf_module_state + 0x15bU)))
#undef UNK_10020778
#define UNK_10020778 (*(uint *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef UNK_1002077c
#define UNK_1002077c (*(uint *)(((uintptr_t)pf_module_state + 0x163U)))
#undef UNK_10020784
#define UNK_10020784 (*(int *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef UNK_10020788
#define UNK_10020788 (*(int *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef UNK_1002078c
#define UNK_1002078c (*(int *)(((uintptr_t)pf_module_state + 0x173U)))
#undef UNK_10020794
#define UNK_10020794 (*(int *)(((uintptr_t)pf_module_state + 0x17bU)))
#undef UNK_10020798
#define UNK_10020798 (*(int *)(((uintptr_t)pf_module_state + 0x17fU)))
#undef UNK_1002079c
#define UNK_1002079c (*(int *)(((uintptr_t)pf_module_state + 0x183U)))
#undef _DAT_10020730
#define _DAT_10020730 (*(int *)(((uintptr_t)pf_module_state + 0x117U)))
#undef _DAT_10020740
#define _DAT_10020740 (*(int *)(((uintptr_t)pf_module_state + 0x127U)))
#undef _DAT_10020750
#define _DAT_10020750 (*(uint *)(((uintptr_t)pf_module_state + 0x137U)))
#undef _DAT_10020760
#define _DAT_10020760 (*(uint *)(((uintptr_t)pf_module_state + 0x147U)))
#undef _DAT_10020770
#define _DAT_10020770 (*(uint *)(((uintptr_t)pf_module_state + 0x157U)))
#undef _DAT_10020780
#define _DAT_10020780 (*(int *)(((uintptr_t)pf_module_state + 0x167U)))
#undef _DAT_10020790
#define _DAT_10020790 (*(int *)(((uintptr_t)pf_module_state + 0x177U)))
#undef iRam0000000010020734
#define iRam0000000010020734 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11bU)))
#undef iRam0000000010020738
#define iRam0000000010020738 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef iRam000000001002073c
#define iRam000000001002073c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x123U)))
#undef iRam0000000010020744
#define iRam0000000010020744 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12bU)))
#undef iRam0000000010020748
#define iRam0000000010020748 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef iRam000000001002074c
#define iRam000000001002074c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x133U)))
#undef iRam0000000010020784
#define iRam0000000010020784 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef iRam0000000010020788
#define iRam0000000010020788 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef iRam000000001002078c
#define iRam000000001002078c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef iRam0000000010020794
#define iRam0000000010020794 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17bU)))
#undef iRam0000000010020798
#define iRam0000000010020798 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17fU)))
#undef iRam000000001002079c
#define iRam000000001002079c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x183U)))
#undef uRam0000000010020754
#define uRam0000000010020754 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef uRam0000000010020758
#define uRam0000000010020758 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef uRam000000001002075c
#define uRam000000001002075c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef uRam0000000010020764
#define uRam0000000010020764 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef uRam0000000010020768
#define uRam0000000010020768 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef uRam000000001002076c
#define uRam000000001002076c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef uRam0000000010020774
#define uRam0000000010020774 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15bU)))
#undef uRam0000000010020778
#define uRam0000000010020778 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef uRam000000001002077c
#define uRam000000001002077c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x163U)))
#define local_50 (*(ulong *)(frame + 16))
#define local_38 (*(ulong *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100049e0(char *param_1,undefined1 in_XMM3 [16],undefined1 in_XMM6 [16],
                       undefined1 in_XMM7 [16])

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  char cVar15;
  char cVar14;
  char cVar13;
  char cVar12;
  char cVar11;
  char cVar10;
  char cVar9;
  char cVar8;
  char cVar23;
  char cVar22;
  char cVar21;
  char cVar20;
  char cVar19;
  char cVar18;
  char cVar17;
  char cVar16;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  undefined8 uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  ulong uVar47;
  bool bVar48;
  uint uVar49;
  long lVar50;
  long lVar51;
  byte bVar52;
  ulong uVar53;
  ulong uVar54;
  void *b;
  void *dst;
  ulong uVar55;
  long lVar56;
  void *a;
  uint uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint128 auVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  long lVar79;
  int iVar86;
  int iVar87;
  uint128 auVar80;
  uint128 auVar81;
  uint128 auVar82;
  uint128 auVar83;
  uint128 auVar84;
  uint128 auVar85;
  int iVar88;
  short sVar89;
  uint uVar90;
  undefined4 uVar91;
  undefined6 uVar92;
  undefined1 auVar93 [12];
  undefined1 auVar94 [14];
  uint uVar98;
  uint128 auVar95;
  uint128 auVar96;
  uint uVar99;
  uint uVar100;
  uint128 auVar97;
  short sVar101;
  undefined1 auVar102 [12];
  undefined1 auVar103 [14];
  int iVar104;
  int iVar105;
  int iVar106;
  uint128 auVar107;
  uint128 auVar108;
  uint128 auVar109;
  uint128 auVar110;
  uint128 auVar111;
  short sVar112;
  undefined4 uVar113;
  undefined6 uVar114;
  undefined8 uVar115;
  undefined1 auVar116 [12];
  undefined1 auVar117 [14];
  undefined1 in_XMM12 [16];
  uint128 auVar118;
  uint128 auVar119;
  uint128 auVar120;
  uint128 auVar121;
  uint128 auVar122;

  if ((*param_1 == '\x01') && (lVar2 = *(long *)(param_1 + 4), lVar2 != 0)) {
    plVar1 = (long *)(param_1 + 4);
    uVar41 = recovered_1000aa00((long)param_1);
    uVar46 = *(uint *)(param_1 + 0x1c);
    if ((char)uVar41 == '\0') {
      if (((uVar46 < 0x21) && ((0x101018000U >> ((ulong)uVar46 & 0x3f) & 1) != 0)) &&
         (DAT_10022348 != 0)) {
        uVar49 = *(uint *)(param_1 + 0x14);
        local_50 = (ulong)uVar49;
        if (local_50 != 0) {
          uVar36 = *(uint *)(param_1 + 0x18);
          if ((((ulong)uVar36 != 0) && (uVar60 = (ulong)(int)DAT_10022340, 0 < (long)uVar60)) &&
             ((uVar47 = (ulong)(int)DAT_10022344, 0 < (long)uVar47 && (lVar2 = *plVar1, lVar2 != 0))
             )) {
            uVar53 = uVar47 * local_50;
            if (uVar53 >> 0x20 == 0) {
              uVar53 = (uVar53 & 0xffffffff) / (ulong)DAT_10022340;
            }
            else {
              uVar53 = uVar53 / uVar60;
            }
            if (uVar36 < (uint)uVar53) {
              uVar60 = uVar36 * uVar60;
              if (uVar60 >> 0x20 == 0) {
                local_50 = (uVar60 & 0xffffffff) / (ulong)DAT_10022344;
              }
              else {
                local_50 = uVar60 / uVar47;
              }
              uVar53 = (ulong)uVar36;
            }
            uVar34 = (uint)uVar53;
            if ((uVar34 != 0) && ((uint)local_50 != 0)) {
              recovered_100167b0(DAT_10022340,DAT_10022344,(uint)local_50,uVar34);
              uVar35 = *(uint *)(param_1 + 0x18);
              if (uVar35 != 0) {
                uVar57 = uVar46 + 7 >> 3;
                uVar46 = uVar49 - (uint)local_50 >> 1;
                uVar49 = uVar36 - uVar34 >> 1;
                uVar47 = (ulong)uVar57;
                uVar60 = (ulong)*(uint *)(param_1 + 0x14);
                local_38 = 0;
                do {
                  iVar40 = (int)uVar60;
                  uVar60 = 0;
                  if (iVar40 != 0) {
                    uVar42 = (ulong)((int)local_38 - uVar49);
                    lVar45 = lVar2 + 3 + *(uint *)(param_1 + 0x10) * local_38;
                    lVar51 = *(uint *)(param_1 + 0x10) * local_38 + lVar2;
                    uVar54 = 0;
                    do {
                      uVar36 = 0;
                      if ((((local_38 < uVar49 + uVar34) && (uVar49 <= local_38)) &&
                          (uVar46 <= uVar54)) && (uVar54 < uVar46 + (uint)local_50)) {
                        uVar60 = (ulong)((int)uVar54 - uVar46);
                        if ((DAT_10027068 == 0) || (DAT_10027078 != (uint)local_50)) {
                          uVar60 = DAT_10022340 * uVar60;
                          if (uVar60 >> 0x20 == 0) {
                            uVar60 = (uVar60 & 0xffffffff) / (local_50 & 0xffffffff);
                          }
                          else {
                            uVar60 = uVar60 / (local_50 & 0xffffffff);
                          }
                        }
                        else {
                          uVar60 = (ulong)*(uint *)(DAT_10027068 + uVar60 * 4);
                        }
                        if ((DAT_10027070 == 0) || (DAT_1002707c != uVar34)) {
                          uVar59 = DAT_10022344 * uVar42;
                          if (uVar59 >> 0x20 == 0) {
                            uVar36 = (uint)((uVar59 & 0xffffffff) / (uVar53 & 0xffffffff));
                          }
                          else {
                            uVar36 = (uint)(uVar59 / (uVar53 & 0xffffffff));
                          }
                        }
                        else {
                          uVar36 = *(uint *)(DAT_10027070 + uVar42 * 4);
                        }
                        lVar44 = (uVar60 & 0xffffffff) + (long)(int)DAT_10022340 * (ulong)uVar36;
                        uVar36 = recovered_100183a0((long)plVar1,
                                                    (uint)*(byte *)(DAT_10022348 + lVar44 * 4),
                                                    (uint)*(byte *)(DAT_10022348 + 1 + lVar44 * 4),
                                                    (uint)*(byte *)(DAT_10022348 + 2 + lVar44 * 4));
                      }
                      if (uVar47 - 1 < 3) {
                        uVar60 = 0;
                      }
                      else {
                        bVar52 = 0x18;
                        uVar60 = 0;
                        do {
                          *(char *)(lVar45 + -3 + uVar60) = (char)uVar36;
                          *(char *)(lVar45 + -2 + uVar60) = (char)(uVar36 >> (bVar52 - 0x10 & 0x1f))
                          ;
                          *(char *)(lVar45 + -1 + uVar60) = (char)(uVar36 >> (bVar52 - 8 & 0x1f));
                          *(char *)(lVar45 + uVar60) = (char)(uVar36 >> (bVar52 & 0x1f));
                          uVar60 = uVar60 + 4;
                          bVar52 = bVar52 + 0x20;
                        } while ((uVar57 & 0xfffffffc) != uVar60);
                      }
                      if ((ulong)(uVar57 & 3) != 0) {
                        bVar52 = 0;
                        uVar59 = 0;
                        do {
                          *(char *)(lVar51 + uVar60 + uVar59) = (char)(uVar36 >> (bVar52 & 0x1f));
                          uVar59 = uVar59 + 1;
                          bVar52 = bVar52 + 8;
                        } while ((uVar57 & 3) != uVar59);
                      }
                      uVar60 = (ulong)*(uint *)(param_1 + 0x14);
                      uVar54 = uVar54 + 1;
                      lVar45 = lVar45 + uVar47;
                      lVar51 = lVar51 + uVar47;
                    } while (uVar54 < uVar60);
                    uVar35 = *(uint *)(param_1 + 0x18);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < uVar35);
              }
            }
          }
        }
      }
      uVar46 = *(uint *)(param_1 + 0x14);
      if (uVar46 == 0) {
        return;
      }
      uVar49 = *(uint *)(param_1 + 0x18);
    }
    else {
      uVar49 = 0;
      if ((uVar46 < 0x21) && ((0x101018000U >> ((ulong)uVar46 & 0x3f) & 1) != 0)) {
        uVar49 = uVar46 + 7 >> 3;
      }
      if (((DAT_10022348 != 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) && (uVar49 != 0)) {
        uVar36 = *(uint *)(param_1 + 0x14);
        if ((ulong)uVar36 != 0) {
          uVar34 = *(uint *)(param_1 + 0x18);
          uVar60 = (ulong)uVar34;
          if (((uVar60 != 0) && (uVar47 = (ulong)(int)DAT_10022340, 0 < (long)uVar47)) &&
             (uVar53 = (ulong)(int)DAT_10022344, 0 < (long)uVar53)) {
            uVar42 = uVar53 * uVar36;
            if (uVar42 >> 0x20 == 0) {
              uVar42 = (uVar42 & 0xffffffff) / (ulong)DAT_10022340;
            }
            else {
              uVar42 = uVar42 / uVar47;
            }
            uVar35 = uVar36;
            if (uVar34 < (uint)uVar42) {
              uVar47 = uVar60 * uVar47;
              if (uVar47 >> 0x20 == 0) {
                uVar35 = (uint)((uVar47 & 0xffffffff) / (ulong)DAT_10022344);
              }
              else {
                uVar35 = (uint)(uVar47 / uVar53);
              }
              uVar42 = uVar60;
            }
            uVar57 = (uint)uVar42;
            if ((uVar57 != 0) && (uVar35 != 0)) {
              if ((uVar34 - uVar57 != 0) || (uVar36 != uVar35)) {
                memset(*(void **)(param_1 + 0x38),0,*(ulong *)(param_1 + 0x48));
              }
              recovered_100167b0(DAT_10022340,DAT_10022344,uVar35,uVar57);
              lVar51 = DAT_10027070;
              lVar45 = DAT_10027068;
              bVar61 = DAT_10027070 != 0;
              bVar62 = DAT_1002707c == uVar57;
              uVar42 = uVar42 & 0xffffffff;
              uVar60 = (ulong)uVar49;
              bVar63 = DAT_10027068 != 0;
              bVar64 = DAT_10027078 == uVar35;
              bVar48 = bVar64 && bVar63;
              uVar47 = (ulong)uVar35;
              uVar53 = (ulong)(uVar49 & 0xfffffff0);
              uVar46 = uVar49 & 0xfffffff8;
              uVar54 = 0;
              do {
                lVar44 = DAT_10022348;
                if (bVar62 && bVar61) {
                  uVar37 = *(uint *)(lVar51 + uVar54 * 4);
                }
                else {
                  uVar59 = DAT_10022344 * uVar54;
                  if (uVar59 >> 0x20 == 0) {
                    uVar37 = (uint)((uVar59 & 0xffffffff) / uVar42);
                  }
                  else {
                    uVar37 = (uint)(uVar59 / uVar42);
                  }
                }
                lVar56 = *(long *)(param_1 + 0x38);
                lVar50 = (ulong)*(uint *)(param_1 + 0x10) *
                         (ulong)((uVar34 - uVar57 >> 1) + (int)uVar54) +
                         (uVar36 - uVar35 >> 1) * uVar60 + lVar56;
                if (uVar49 == 4) {
                  uVar59 = 0;
                  do {
                    if (bVar48) {
                      uVar38 = *(uint *)(lVar45 + uVar59 * 4);
                    }
                    else {
                      uVar55 = uVar59 * DAT_10022340;
                      if (uVar55 >> 0x20 == 0) {
                        uVar38 = (uint)((uVar55 & 0xffffffff) / uVar47);
                      }
                      else {
                        uVar38 = (uint)(uVar55 / uVar47);
                      }
                    }
                    lVar56 = (ulong)uVar38 + (long)(int)DAT_10022340 * (ulong)uVar37;
                    uVar38 = recovered_100183a0((long)plVar1,(uint)*(byte *)(lVar44 + lVar56 * 4),
                                                (uint)*(byte *)(lVar44 + 1 + lVar56 * 4),
                                                (uint)*(byte *)(lVar44 + 2 + lVar56 * 4));
                    *(uint *)(lVar50 + uVar59 * 4) = uVar38;
                    uVar59 = uVar59 + 1;
                  } while (uVar47 != uVar59);
                }
                else if (uVar49 == 2) {
                  uVar59 = (ulong)DAT_10022340;
                  lVar56 = (long)(int)DAT_10022340;
                  uVar58 = 0;
                  uVar55 = 0;
                  do {
                    if (bVar48) {
                      uVar38 = *(uint *)(lVar45 + uVar55 * 4);
                    }
                    else if (uVar58 >> 0x20 == 0) {
                      uVar38 = (uint)((uVar58 & 0xffffffff) / uVar47);
                    }
                    else {
                      uVar38 = (uint)(uVar58 / uVar47);
                    }
                    lVar43 = (ulong)uVar38 + lVar56 * (ulong)uVar37;
                    uVar38 = recovered_100183a0((long)plVar1,(uint)*(byte *)(lVar44 + lVar43 * 4),
                                                (uint)*(byte *)(lVar44 + 1 + lVar43 * 4),
                                                (uint)*(byte *)(lVar44 + 2 + lVar43 * 4));
                    *(short *)(lVar50 + uVar55 * 2) = (short)uVar38;
                    uVar55 = uVar55 + 1;
                    uVar58 = uVar58 + uVar59;
                  } while (uVar47 != uVar55);
                }
                else {
                  uVar59 = 0;
                  do {
                    if (bVar64 && bVar63) {
                      uVar38 = *(uint *)(lVar45 + uVar59 * 4);
                    }
                    else {
                      uVar55 = uVar59 * DAT_10022340;
                      if (uVar55 >> 0x20 == 0) {
                        uVar38 = (uint)((uVar55 & 0xffffffff) / uVar47);
                      }
                      else {
                        uVar38 = (uint)(uVar55 / uVar47);
                      }
                    }
                    lVar44 = (ulong)uVar38 + (long)(int)DAT_10022340 * (ulong)uVar37;
                    uVar39 = recovered_100183a0((long)plVar1,
                                                (uint)*(byte *)(DAT_10022348 + lVar44 * 4),
                                                (uint)*(byte *)(DAT_10022348 + 1 + lVar44 * 4),
                                                (uint)*(byte *)(DAT_10022348 + 2 + lVar44 * 4));
                    iVar33 = iRam000000001002079c;
                    iVar32 = iRam0000000010020798;
                    iVar31 = iRam0000000010020794;
                    iVar30 = _DAT_10020790;
                    iVar29 = iRam000000001002078c;
                    iVar28 = iRam0000000010020788;
                    iVar27 = iRam0000000010020784;
                    iVar40 = _DAT_10020780;
                    uVar26 = uRam000000001002077c;
                    uVar25 = uRam0000000010020778;
                    uVar24 = uRam0000000010020774;
                    uVar38 = _DAT_10020770;
                    if (lVar56 != 0) {
                      lVar44 = uVar59 * uVar60 + lVar50;
                      if (uVar49 < 8) {
                        uVar55 = 0;
                      }
                      else {
                        if (uVar49 < 0x10) {
                          uVar55 = 0;
                        }
                        else {
                          lVar43 = 0;
                          PF_PART4(in_XMM3, 4) = uRam0000000010020754;
                          PF_PART4(in_XMM3, 0) = _DAT_10020750;
                          PF_PART4(in_XMM3, 8) = uRam0000000010020758;
                          PF_PART4(in_XMM3, 12) = uRam000000001002075c;
                          uVar55 = uVar53;
                          uVar68 = _DAT_10020760;
                          uVar65 = uRam0000000010020764;
                          uVar66 = uRam0000000010020768;
                          uVar67 = uRam000000001002076c;
                          iVar74 = _DAT_10020740;
                          iVar75 = iRam0000000010020744;
                          iVar76 = iRam0000000010020748;
                          iVar77 = iRam000000001002074c;
                          iVar78 = _DAT_10020730;
                          iVar86 = iRam0000000010020734;
                          iVar87 = iRam0000000010020738;
                          iVar88 = iRam000000001002073c;
                          do {
                            PF_PART4(auVar83, 0) = uVar68 << 3;
                            PF_PART4(auVar83, 4) = uVar65 << 3;
                            PF_PART4(auVar83, 8) = uVar66 << 3;
                            PF_PART4(auVar83, 12) = uVar67 << 3;
                            PF_PART4(auVar95, 0) = PF_PART4(in_XMM3, 0) << 3;
                            iVar104 = PF_PART4(in_XMM3, 4);
                            PF_PART4(auVar95, 4) = iVar104 << 3;
                            iVar105 = PF_PART4(in_XMM3, 8);
                            iVar106 = PF_PART4(in_XMM3, 12);
                            PF_PART4(auVar95, 8) = iVar105 << 3;
                            PF_PART4(auVar95, 12) = iVar106 << 3;
                            PF_PART4(auVar107, 0) = iVar74 << 3;
                            PF_PART4(auVar107, 4) = iVar75 << 3;
                            PF_PART4(auVar107, 8) = iVar76 << 3;
                            PF_PART4(auVar107, 12) = iVar77 << 3;
                            PF_PART4(auVar82, 0) = iVar78 << 3;
                            PF_PART4(auVar82, 4) = iVar86 << 3;
                            PF_PART4(auVar82, 8) = iVar87 << 3;
                            PF_PART4(auVar82, 12) = iVar88 << 3;
                            auVar73 = pshuflw(in_XMM6,auVar82,0xfe);
                            lVar79 = PF_PART8(auVar73, 0);
                            PF_PART4(auVar108, 0) = uVar39 >> lVar79;
                            PF_PART4(auVar108, 4) = uVar39 >> lVar79;
                            PF_PART4(auVar108, 8) = uVar39 >> lVar79;
                            PF_PART4(auVar108, 12) = uVar39 >> lVar79;
                            auVar118 = pshuflw(in_XMM12,auVar82,0x54);
                            PF_PART4(auVar84, 4) = PF_PART4(auVar82, 12);
                            PF_PART4(auVar84, 0) = PF_PART4(auVar82, 8);
                            PF_PART4(auVar84, 8) = PF_PART4(auVar82, 8);
                            PF_PART4(auVar84, 12) = PF_PART4(auVar82, 12);
                            auVar73 = pshuflw(auVar108,auVar84,0xfe);
                            lVar79 = PF_PART8(auVar73, 0);
                            PF_PART4(auVar119, 0) = uVar39 >> lVar79;
                            PF_PART4(auVar119, 4) = uVar39 >> lVar79;
                            PF_PART4(auVar119, 8) = uVar39 >> lVar79;
                            PF_PART4(auVar119, 12) = uVar39 >> lVar79;
                            auVar82 = pshuflw(auVar84,auVar84,0x54);
                            auVar73 = pshuflw(auVar82,auVar107,0xfe);
                            lVar79 = PF_PART8(auVar73, 0);
                            PF_PART4(auVar109, 0) = uVar39 >> lVar79;
                            PF_PART4(auVar109, 4) = uVar39 >> lVar79;
                            PF_PART4(auVar109, 8) = uVar39 >> lVar79;
                            PF_PART4(auVar109, 12) = uVar39 >> lVar79;
                            auVar120 = pshuflw(auVar119,auVar107,0x54);
                            PF_PART4(auVar111, 4) = PF_PART4(auVar107, 12);
                            PF_PART4(auVar111, 0) = PF_PART4(auVar107, 8);
                            PF_PART4(auVar111, 8) = PF_PART4(auVar107, 8);
                            PF_PART4(auVar111, 12) = PF_PART4(auVar107, 12);
                            auVar73 = pshuflw(auVar109,auVar111,0xfe);
                            lVar79 = PF_PART8(auVar73, 0);
                            PF_PART4(auVar121, 0) = uVar39 >> lVar79;
                            PF_PART4(auVar121, 4) = uVar39 >> lVar79;
                            PF_PART4(auVar121, 8) = uVar39 >> lVar79;
                            PF_PART4(auVar121, 12) = uVar39 >> lVar79;
                            auVar107 = pshuflw(auVar111,auVar111,0x54);
                            auVar73 = pshuflw(auVar107,auVar95,0xfe);
                            lVar79 = PF_PART8(auVar73, 0);
                            PF_PART4(auVar110, 0) = uVar39 >> lVar79;
                            PF_PART4(auVar110, 4) = uVar39 >> lVar79;
                            PF_PART4(auVar110, 8) = uVar39 >> lVar79;
                            PF_PART4(auVar110, 12) = uVar39 >> lVar79;
                            auVar122 = pshuflw(auVar121,auVar95,0x54);
                            PF_PART4(auVar96, 4) = PF_PART4(auVar95, 12);
                            PF_PART4(auVar96, 0) = PF_PART4(auVar95, 8);
                            PF_PART4(auVar96, 8) = PF_PART4(auVar95, 8);
                            PF_PART4(auVar96, 12) = PF_PART4(auVar95, 12);
                            auVar111 = pshuflw(auVar110,auVar96,0xfe);
                            auVar84 = pshuflw(auVar96,auVar96,0x54);
                            auVar85 = pshuflw(auVar84,auVar83,0xfe);
                            auVar95 = pshuflw(auVar85,auVar83,0x54);
                            PF_PART4(auVar73, 4) = PF_PART4(auVar83, 12);
                            PF_PART4(auVar73, 0) = PF_PART4(auVar83, 8);
                            PF_PART4(auVar73, 8) = PF_PART4(auVar83, 8);
                            PF_PART4(auVar73, 12) = PF_PART4(auVar83, 12);
                            auVar83 = pshuflw(auVar95,auVar73,0xfe);
                            in_XMM7 = pshuflw(auVar73,auVar73,0x54);
                            uVar90 = uVar39 >> PF_PART8(auVar95, 0) & uVar38;
                            uVar98 = uVar39 >> PF_PART8(auVar85, 0) & uVar24;
                            uVar99 = uVar39 >> PF_PART8(in_XMM7, 0) & uVar25;
                            uVar100 = uVar39 >> PF_PART8(auVar83, 0) & uVar26;
                            uVar69 = uVar39 >> PF_PART8(auVar122, 0) & uVar38;
                            uVar70 = PF_PART4(auVar110, 4) & uVar24;
                            uVar71 = uVar39 >> PF_PART8(auVar84, 0) & uVar25;
                            uVar72 = uVar39 >> PF_PART8(auVar111, 0) & uVar26;
                            sVar3 = (short)uVar90;
                            cVar15 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar90 - (0xff < sVar3);
                            sVar3 = (short)(uVar90 >> 0x10);
                            sVar112 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                               (char)(uVar90 >> 0x10) - (0xff < sVar3),cVar15);
                            sVar3 = (short)uVar98;
                            cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar98 - (0xff < sVar3);
                            sVar3 = (short)(uVar98 >> 0x10);
                            uVar113 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                               (char)(uVar98 >> 0x10) - (0xff < sVar3),
                                               CONCAT12(cVar8,sVar112));
                            sVar3 = (short)uVar99;
                            cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar99 - (0xff < sVar3);
                            sVar3 = (short)(uVar99 >> 0x10);
                            uVar114 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                               (char)(uVar99 >> 0x10) - (0xff < sVar3),
                                               CONCAT14(cVar9,uVar113));
                            sVar3 = (short)uVar100;
                            cVar10 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar100 - (0xff < sVar3);
                            sVar3 = (short)(uVar100 >> 0x10);
                            uVar115 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) *
                                               (char)(uVar100 >> 0x10) - (0xff < sVar3),
                                               CONCAT16(cVar10,uVar114));
                            sVar3 = (short)uVar69;
                            cVar11 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar69 - (0xff < sVar3);
                            sVar3 = (short)(uVar69 >> 0x10);
                            PF_PART10(auVar116, 0) =
                                 CONCAT19((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar69 >> 0x10) -
                                          (0xff < sVar3),CONCAT18(cVar11,uVar115));
                            sVar3 = (short)uVar70;
                            cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar70 - (0xff < sVar3);
                            auVar116[10] = cVar12;
                            sVar3 = (short)(uVar70 >> 0x10);
                            auVar116[0xb] =
                                 (0 < sVar3) * (sVar3 < 0x100) * (char)(uVar70 >> 0x10) -
                                 (0xff < sVar3);
                            sVar3 = (short)uVar71;
                            cVar13 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar71 - (0xff < sVar3);
                            auVar117[0xc] = cVar13;
                            PF_PART12(auVar117, 0) = auVar116;
                            sVar3 = (short)(uVar71 >> 0x10);
                            auVar117[0xd] =
                                 (0 < sVar3) * (sVar3 < 0x100) * (char)(uVar71 >> 0x10) -
                                 (0xff < sVar3);
                            sVar3 = (short)uVar72;
                            cVar14 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar72 - (0xff < sVar3);
                            ((uint8_t *)(void *)&auVar122)[0xe] = cVar14;
                            PF_PART14(auVar122, 0) = auVar117;
                            sVar3 = (short)(uVar72 >> 0x10);
                            ((uint8_t *)(void *)&auVar122)[0xf] =
                                 (0 < sVar3) * (sVar3 < 0x100) * (char)(uVar72 >> 0x10) -
                                 (0xff < sVar3);
                            uVar69 = uVar39 >> PF_PART8(auVar120, 0) & uVar38;
                            uVar70 = PF_PART4(auVar109, 4) & uVar24;
                            uVar71 = uVar39 >> PF_PART8(auVar107, 0) & uVar25;
                            uVar72 = PF_PART4(auVar121, 12) & uVar26;
                            PF_PART4(in_XMM6, 0) = uVar39 >> PF_PART8(auVar118, 0) & uVar38;
                            PF_PART4(in_XMM6, 4) = PF_PART4(auVar108, 4) & uVar24;
                            PF_PART4(in_XMM6, 8) = uVar39 >> PF_PART8(auVar82, 0) & uVar25;
                            PF_PART4(in_XMM6, 12) = PF_PART4(auVar119, 12) & uVar26;
                            sVar3 = (short)uVar69;
                            cVar16 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar69 - (0xff < sVar3);
                            sVar3 = (short)(uVar69 >> 0x10);
                            sVar101 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                               (char)(uVar69 >> 0x10) - (0xff < sVar3),cVar16);
                            sVar3 = (short)uVar70;
                            cVar17 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar70 - (0xff < sVar3);
                            sVar3 = (short)(uVar70 >> 0x10);
                            uVar91 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar70 >> 0x10)
                                              - (0xff < sVar3),CONCAT12(cVar17,sVar101));
                            sVar3 = (short)uVar71;
                            cVar18 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar71 - (0xff < sVar3);
                            sVar3 = (short)(uVar71 >> 0x10);
                            uVar92 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar71 >> 0x10)
                                              - (0xff < sVar3),CONCAT14(cVar18,uVar91));
                            sVar3 = (short)uVar72;
                            cVar19 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar72 - (0xff < sVar3);
                            sVar3 = (short)(uVar72 >> 0x10);
                            uVar41 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar72 >> 0x10)
                                              - (0xff < sVar3),CONCAT16(cVar19,uVar92));
                            sVar3 = (short)PF_PART4(in_XMM6, 0);
                            cVar20 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM6, 0) -
                                     (0xff < sVar3);
                            sVar3 = (short)(PF_PART4(in_XMM6, 0) >> 0x10);
                            PF_PART10(auVar102, 0) =
                                 CONCAT19((0 < sVar3) * (sVar3 < 0x100) *
                                          (char)(PF_PART4(in_XMM6, 0) >> 0x10) - (0xff < sVar3),
                                          CONCAT18(cVar20,uVar41));
                            sVar3 = (short)PF_PART4(in_XMM6, 4);
                            cVar21 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM6, 4) -
                                     (0xff < sVar3);
                            auVar102[10] = cVar21;
                            sVar3 = (short)(PF_PART4(in_XMM6, 4) >> 0x10);
                            auVar102[0xb] =
                                 (0 < sVar3) * (sVar3 < 0x100) * (char)(PF_PART4(in_XMM6, 4) >> 0x10) -
                                 (0xff < sVar3);
                            sVar3 = (short)PF_PART4(in_XMM6, 8);
                            cVar22 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM6, 8) -
                                     (0xff < sVar3);
                            auVar103[0xc] = cVar22;
                            PF_PART12(auVar103, 0) = auVar102;
                            sVar3 = (short)(PF_PART4(in_XMM6, 8) >> 0x10);
                            auVar103[0xd] =
                                 (0 < sVar3) * (sVar3 < 0x100) * (char)(PF_PART4(in_XMM6, 8) >> 0x10) -
                                 (0xff < sVar3);
                            sVar3 = (short)PF_PART4(in_XMM6, 12);
                            cVar23 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM6, 12) -
                                     (0xff < sVar3);
                            ((uint8_t *)(void *)&auVar85)[0xe] = cVar23;
                            PF_PART14(auVar85, 0) = auVar103;
                            sVar3 = (short)(PF_PART4(in_XMM6, 12) >> 0x10);
                            ((uint8_t *)(void *)&auVar85)[0xf] = (0 < sVar3) * (sVar3 < 0x100) *
                                           (char)(PF_PART4(in_XMM6, 12) >> 0x10) - (0xff < sVar3);
                            sVar3 = (short)((uint)uVar113 >> 0x10);
                            in_XMM12[1] = (0 < sVar3) * (sVar3 < 0x100) * cVar8 - (0xff < sVar3);
                            in_XMM12[0] = (0 < sVar112) * (sVar112 < 0x100) * cVar15 -
                                          (0xff < sVar112);
                            sVar3 = (short)((uint6)uVar114 >> 0x20);
                            in_XMM12[2] = (0 < sVar3) * (sVar3 < 0x100) * cVar9 - (0xff < sVar3);
                            sVar3 = (short)((ulong)uVar115 >> 0x30);
                            in_XMM12[3] = (0 < sVar3) * (sVar3 < 0x100) * cVar10 - (0xff < sVar3);
                            sVar3 = (short)((unkuint10)PF_PART10(auVar116, 0) >> 0x40);
                            in_XMM12[4] = (0 < sVar3) * (sVar3 < 0x100) * cVar11 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar116, 10);
                            in_XMM12[5] = (0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar117, 12);
                            in_XMM12[6] = (0 < sVar3) * (sVar3 < 0x100) * cVar13 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar122, 14);
                            in_XMM12[7] = (0 < sVar3) * (sVar3 < 0x100) * cVar14 - (0xff < sVar3);
                            in_XMM12[8] = (0 < sVar101) * (sVar101 < 0x100) * cVar16 -
                                          (0xff < sVar101);
                            sVar3 = (short)((uint)uVar91 >> 0x10);
                            in_XMM12[9] = (0 < sVar3) * (sVar3 < 0x100) * cVar17 - (0xff < sVar3);
                            sVar3 = (short)((uint6)uVar92 >> 0x20);
                            in_XMM12[10] = (0 < sVar3) * (sVar3 < 0x100) * cVar18 - (0xff < sVar3);
                            sVar3 = (short)((ulong)uVar41 >> 0x30);
                            in_XMM12[0xb] = (0 < sVar3) * (sVar3 < 0x100) * cVar19 - (0xff < sVar3);
                            sVar3 = (short)((unkuint10)PF_PART10(auVar102, 0) >> 0x40);
                            in_XMM12[0xc] = (0 < sVar3) * (sVar3 < 0x100) * cVar20 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar102, 10);
                            in_XMM12[0xd] = (0 < sVar3) * (sVar3 < 0x100) * cVar21 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar103, 12);
                            in_XMM12[0xe] = (0 < sVar3) * (sVar3 < 0x100) * cVar22 - (0xff < sVar3);
                            sVar3 = PF_PART2(auVar85, 14);
                            in_XMM12[0xf] = (0 < sVar3) * (sVar3 < 0x100) * cVar23 - (0xff < sVar3);
                            *(uint128 *)(lVar44 + lVar43) = in_XMM12;
                            lVar43 = lVar43 + 0x10;
                            uVar68 = uVar68 + iVar40;
                            uVar65 = uVar65 + iVar27;
                            uVar66 = uVar66 + iVar28;
                            uVar67 = uVar67 + iVar29;
                            PF_PART4(in_XMM3, 0) = PF_PART4(in_XMM3, 0) + iVar40;
                            PF_PART4(in_XMM3, 4) = iVar104 + iVar27;
                            PF_PART4(in_XMM3, 8) = iVar105 + iVar28;
                            PF_PART4(in_XMM3, 12) = iVar106 + iVar29;
                            iVar74 = iVar74 + iVar40;
                            iVar75 = iVar75 + iVar27;
                            iVar76 = iVar76 + iVar28;
                            iVar77 = iVar77 + iVar29;
                            iVar78 = iVar78 + iVar40;
                            iVar86 = iVar86 + iVar27;
                            iVar87 = iVar87 + iVar28;
                            iVar88 = iVar88 + iVar29;
                            uVar55 = uVar55 - 0x10;
                          } while (uVar55 != 0);
                          if ((uVar49 & 0xfffffff0) == uVar49) goto LAB_100051a0;
                          uVar55 = uVar53;
                          if ((uVar49 & 8) == 0) goto LAB_100055b0;
                        }
                        uVar68 = (uint)uVar55;
                        uVar69 = uVar68 | _DAT_10020750;
                        uVar70 = uVar68 | uRam0000000010020754;
                        uVar71 = uVar68 | uRam0000000010020758;
                        uVar72 = uVar68 | uRam000000001002075c;
                        uVar65 = uVar68 | _DAT_10020760;
                        uVar66 = uVar68 | uRam0000000010020764;
                        uVar67 = uVar68 | uRam0000000010020768;
                        uVar68 = uVar68 | uRam000000001002076c;
                        lVar43 = uVar55 - uVar46;
                        do {
                          PF_PART4(auVar118, 0) = uVar65 << 3;
                          PF_PART4(auVar118, 4) = uVar66 << 3;
                          PF_PART4(auVar118, 8) = uVar67 << 3;
                          PF_PART4(auVar118, 12) = uVar68 << 3;
                          PF_PART4(auVar80, 0) = uVar69 << 3;
                          PF_PART4(auVar80, 4) = uVar70 << 3;
                          PF_PART4(auVar80, 8) = uVar71 << 3;
                          PF_PART4(auVar80, 12) = uVar72 << 3;
                          auVar73 = pshuflw(in_XMM3,auVar80,0xfe);
                          auVar95 = pshuflw(in_XMM7,auVar80,0x54);
                          PF_PART4(auVar81, 4) = PF_PART4(auVar80, 12);
                          PF_PART4(auVar81, 0) = PF_PART4(auVar80, 8);
                          PF_PART4(auVar81, 8) = PF_PART4(auVar80, 8);
                          PF_PART4(auVar81, 12) = PF_PART4(auVar80, 12);
                          auVar96 = pshuflw(auVar95,auVar81,0xfe);
                          auVar82 = pshuflw(auVar81,auVar81,0x54);
                          auVar83 = pshuflw(auVar82,auVar118,0xfe);
                          lVar79 = PF_PART8(auVar83, 0);
                          PF_PART4(in_XMM6, 0) = uVar39 >> lVar79;
                          PF_PART4(in_XMM6, 4) = uVar39 >> lVar79;
                          PF_PART4(in_XMM6, 8) = uVar39 >> lVar79;
                          PF_PART4(in_XMM6, 12) = uVar39 >> lVar79;
                          auVar84 = pshuflw(auVar83,auVar118,0x54);
                          PF_PART4(auVar120, 4) = PF_PART4(auVar118, 12);
                          PF_PART4(auVar120, 0) = PF_PART4(auVar118, 8);
                          PF_PART4(auVar120, 8) = PF_PART4(auVar118, 8);
                          PF_PART4(auVar120, 12) = PF_PART4(auVar118, 12);
                          auVar85 = pshuflw(auVar84,auVar120,0xfe);
                          auVar83 = pshuflw(auVar120,auVar120,0x54);
                          uVar90 = uVar39 >> PF_PART8(auVar84, 0) & uVar38;
                          uVar98 = PF_PART4(in_XMM6, 4) & uVar24;
                          uVar99 = uVar39 >> PF_PART8(auVar83, 0) & uVar25;
                          uVar100 = uVar39 >> PF_PART8(auVar85, 0) & uVar26;
                          PF_PART4(in_XMM3, 0) = uVar39 >> PF_PART8(auVar95, 0) & uVar38;
                          PF_PART4(in_XMM3, 4) = uVar39 >> PF_PART8(auVar73, 0) & uVar24;
                          PF_PART4(in_XMM3, 8) = uVar39 >> PF_PART8(auVar82, 0) & uVar25;
                          PF_PART4(in_XMM3, 12) = uVar39 >> PF_PART8(auVar96, 0) & uVar26;
                          sVar3 = (short)uVar90;
                          cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar90 - (0xff < sVar3);
                          sVar3 = (short)(uVar90 >> 0x10);
                          sVar89 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar90 >> 0x10) -
                                            (0xff < sVar3),cVar8);
                          sVar3 = (short)uVar98;
                          cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar98 - (0xff < sVar3);
                          sVar3 = (short)(uVar98 >> 0x10);
                          uVar91 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar98 >> 0x10) -
                                            (0xff < sVar3),CONCAT12(cVar9,sVar89));
                          sVar3 = (short)uVar99;
                          cVar10 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar99 - (0xff < sVar3);
                          sVar3 = (short)(uVar99 >> 0x10);
                          uVar92 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar99 >> 0x10) -
                                            (0xff < sVar3),CONCAT14(cVar10,uVar91));
                          sVar3 = (short)uVar100;
                          cVar11 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar100 - (0xff < sVar3);
                          sVar3 = (short)(uVar100 >> 0x10);
                          uVar41 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar100 >> 0x10)
                                            - (0xff < sVar3),CONCAT16(cVar11,uVar92));
                          sVar3 = (short)PF_PART4(in_XMM3, 0);
                          cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM3, 0) -
                                   (0xff < sVar3);
                          sVar3 = (short)(PF_PART4(in_XMM3, 0) >> 0x10);
                          PF_PART10(auVar93, 0) =
                               CONCAT19((0 < sVar3) * (sVar3 < 0x100) *
                                        (char)(PF_PART4(in_XMM3, 0) >> 0x10) - (0xff < sVar3),
                                        CONCAT18(cVar12,uVar41));
                          sVar3 = (short)PF_PART4(in_XMM3, 4);
                          cVar13 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM3, 4) -
                                   (0xff < sVar3);
                          auVar93[10] = cVar13;
                          sVar3 = (short)(PF_PART4(in_XMM3, 4) >> 0x10);
                          auVar93[0xb] = (0 < sVar3) * (sVar3 < 0x100) *
                                         (char)(PF_PART4(in_XMM3, 4) >> 0x10) - (0xff < sVar3);
                          sVar3 = (short)PF_PART4(in_XMM3, 8);
                          cVar14 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM3, 8) -
                                   (0xff < sVar3);
                          auVar94[0xc] = cVar14;
                          PF_PART12(auVar94, 0) = auVar93;
                          sVar3 = (short)(PF_PART4(in_XMM3, 8) >> 0x10);
                          auVar94[0xd] = (0 < sVar3) * (sVar3 < 0x100) *
                                         (char)(PF_PART4(in_XMM3, 8) >> 0x10) - (0xff < sVar3);
                          sVar3 = (short)PF_PART4(in_XMM3, 12);
                          cVar15 = (0 < sVar3) * (sVar3 < 0x100) * (char)PF_PART4(in_XMM3, 12) -
                                   (0xff < sVar3);
                          ((uint8_t *)(void *)&auVar97)[0xe] = cVar15;
                          PF_PART14(auVar97, 0) = auVar94;
                          sVar3 = (short)(PF_PART4(in_XMM3, 12) >> 0x10);
                          ((uint8_t *)(void *)&auVar97)[0xf] = (0 < sVar3) * (sVar3 < 0x100) *
                                         (char)(PF_PART4(in_XMM3, 12) >> 0x10) - (0xff < sVar3);
                          sVar3 = (short)((uint)uVar91 >> 0x10);
                          sVar101 = (short)((uint6)uVar92 >> 0x20);
                          sVar112 = (short)((ulong)uVar41 >> 0x30);
                          sVar4 = (short)((unkuint10)PF_PART10(auVar93, 0) >> 0x40);
                          sVar5 = PF_PART2(auVar93, 10);
                          sVar6 = PF_PART2(auVar94, 12);
                          sVar7 = PF_PART2(auVar97, 14);
                          PF_PART8(in_XMM7, 0) =
                               CONCAT17((0 < sVar7) * (sVar7 < 0x100) * cVar15 - (0xff < sVar7),
                                        CONCAT16((0 < sVar6) * (sVar6 < 0x100) * cVar14 -
                                                 (0xff < sVar6),
                                                 CONCAT15((0 < sVar5) * (sVar5 < 0x100) * cVar13 -
                                                          (0xff < sVar5),
                                                          CONCAT14((0 < sVar4) * (sVar4 < 0x100) *
                                                                   cVar12 - (0xff < sVar4),
                                                                   CONCAT13((0 < sVar112) *
                                                                            (sVar112 < 0x100) *
                                                                            cVar11 - (0xff < sVar112
                                                                                     ),
                                                                            CONCAT12((0 < sVar101) *
                                                                                     (sVar101 <
                                                                                     0x100) * cVar10
                                                                                     - (0xff <
                                                  sVar101),CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                                                    cVar9 - (0xff < sVar3),
                                                                    (0 < sVar89) * (sVar89 < 0x100)
                                                                    * cVar8 - (0xff < sVar89))))))))
                          ;
                          in_XMM7[8] = (0 < sVar89) * (sVar89 < 0x100) * cVar8 - (0xff < sVar89);
                          in_XMM7[9] = (0 < sVar3) * (sVar3 < 0x100) * cVar9 - (0xff < sVar3);
                          in_XMM7[10] = (0 < sVar101) * (sVar101 < 0x100) * cVar10 -
                                        (0xff < sVar101);
                          in_XMM7[0xb] = (0 < sVar112) * (sVar112 < 0x100) * cVar11 -
                                         (0xff < sVar112);
                          in_XMM7[0xc] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
                          in_XMM7[0xd] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
                          in_XMM7[0xe] = (0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6);
                          in_XMM7[0xf] = (0 < sVar7) * (sVar7 < 0x100) * cVar15 - (0xff < sVar7);
                          *(undefined8 *)(lVar44 + uVar55) = PF_PART8(in_XMM7, 0);
                          uVar55 = uVar55 + 8;
                          uVar65 = uVar65 + iVar30;
                          uVar66 = uVar66 + iVar31;
                          uVar67 = uVar67 + iVar32;
                          uVar68 = uVar68 + iVar33;
                          uVar69 = uVar69 + iVar30;
                          uVar70 = uVar70 + iVar31;
                          uVar71 = uVar71 + iVar32;
                          uVar72 = uVar72 + iVar33;
                          lVar43 = lVar43 + 8;
                        } while (lVar43 != 0);
                        uVar55 = (ulong)uVar46;
                        if (uVar46 == uVar49) goto LAB_100051a0;
                      }
LAB_100055b0:
                      lVar43 = uVar60 - uVar55;
                      bVar52 = 0;
                      do {
                        *(char *)(lVar44 + uVar55) = (char)(uVar39 >> (bVar52 & 0x1f));
                        uVar55 = uVar55 + 1;
                        bVar52 = bVar52 + 8;
                        lVar43 = lVar43 + -1;
                      } while (lVar43 != 0);
                    }
LAB_100051a0:
                    uVar59 = uVar59 + 1;
                  } while (uVar59 != uVar47);
                }
                uVar54 = uVar54 + 1;
              } while (uVar54 < uVar42);
              uVar46 = *(uint *)(param_1 + 0x1c);
            }
          }
        }
      }
      if ((((uVar46 < 0x21) && ((0x101018000U >> ((ulong)uVar46 & 0x3f) & 1) != 0)) &&
          (*(long *)(param_1 + 0x38) != 0)) &&
         ((uVar60 = (ulong)(uVar46 + 7 >> 3) * (ulong)*(uint *)(param_1 + 0x14), uVar60 != 0 &&
          (uVar60 <= *(uint *)(param_1 + 0x10))))) {
        if (*(int *)(param_1 + 0x18) != 0) {
          uVar47 = 0;
          do {
            lVar45 = *(uint *)(param_1 + 0x10) * uVar47;
            a = (void *)(*(long *)(param_1 + 0x38) + lVar45);
            dst = (void *)(lVar2 + lVar45);
            if (*(long *)(param_1 + 0x40) == 0) {
LAB_100056c0:
              memcpy(dst,a,uVar60);
            }
            else {
              b = (void *)(*(long *)(param_1 + 0x40) + lVar45);
              if (((param_1[0x58] != '\x01') ||
                  (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48))) ||
                 (iVar40 = memcmp(a,b,uVar60), iVar40 != 0)) {
                memcpy(dst,a,uVar60);
                dst = b;
                goto LAB_100056c0;
              }
            }
            uVar47 = uVar47 + 1;
          } while (uVar47 < *(uint *)(param_1 + 0x18));
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          param_1[0x58] = '\x01';
        }
      }
      uVar46 = *(uint *)(param_1 + 0x14);
      if (uVar46 == 0) {
        return;
      }
      uVar49 = *(uint *)(param_1 + 0x18);
    }
    if ((((uVar49 != 0) && (iVar40 = Ram0000000000006800, iVar40 == 0x50414d57)) &&
        (iVar40 = Ram0000000000006804, iVar40 != 0)) &&
       ((uVar36 = Ram0000000000006808, 0xb < uVar36 &&
        (uVar36 = Ram0000000000006808, 0x15f < uVar36)))) {
      uVar36 = UINT_0000695c;
      if ((code *)(ulong)uVar36 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000574d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar36)(0,0,uVar46,uVar49);
        return;
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020730
#undef DAT_10020740
#undef DAT_10020750
#undef DAT_10020760
#undef DAT_10020770
#undef DAT_10020780
#undef DAT_10020790
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10027068
#undef DAT_10027070
#undef DAT_10027078
#undef DAT_1002707c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000695c
#undef UNK_10020734
#undef UNK_10020738
#undef UNK_1002073c
#undef UNK_10020744
#undef UNK_10020748
#undef UNK_1002074c
#undef UNK_10020754
#undef UNK_10020758
#undef UNK_1002075c
#undef UNK_10020764
#undef UNK_10020768
#undef UNK_1002076c
#undef UNK_10020774
#undef UNK_10020778
#undef UNK_1002077c
#undef UNK_10020784
#undef UNK_10020788
#undef UNK_1002078c
#undef UNK_10020794
#undef UNK_10020798
#undef UNK_1002079c
#undef _DAT_10020730
#undef _DAT_10020740
#undef _DAT_10020750
#undef _DAT_10020760
#undef _DAT_10020770
#undef _DAT_10020780
#undef _DAT_10020790
#undef iRam0000000010020734
#undef iRam0000000010020738
#undef iRam000000001002073c
#undef iRam0000000010020744
#undef iRam0000000010020748
#undef iRam000000001002074c
#undef iRam0000000010020784
#undef iRam0000000010020788
#undef iRam000000001002078c
#undef iRam0000000010020794
#undef iRam0000000010020798
#undef iRam000000001002079c
#undef uRam0000000010020754
#undef uRam0000000010020758
#undef uRam000000001002075c
#undef uRam0000000010020764
#undef uRam0000000010020768
#undef uRam000000001002076c
#undef uRam0000000010020774
#undef uRam0000000010020778
#undef uRam000000001002077c
#undef local_50
#undef local_38

#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005770
 */

uint128 recovered_10005770(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint128 auVar12;
  uint128 auVar13;

  if (param_1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x58);
    if (*(char *)(param_1 + 2) == '\0') {
      uVar3 = (ulong)*(uint *)(param_1 + 100) << 0x20;
    }
    else {
      uVar3 = 0x1800000000;
    }
    uVar3 = uVar3 | *(uint *)(param_1 + 0x60);
  }
  if ((int)(uVar3 >> 0x20) < 1 || (int)uVar3 < 1) {
    PF_PART8(auVar12, 8) = uVar3;
    PF_PART8(auVar12, 0) = uVar2;
    return auVar12;
  }
  iVar9 = (int)uVar3 + 5;
  iVar5 = (int)(uVar3 + 0x600000000 >> 0x20);
  uVar3 = 0;
  uVar4 = 0;
  if ((0 < iVar5 && 0 < iVar9) && (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170)) {
    uVar8 = uVar2 >> 0x20;
    iVar7 = (int)(uVar2 >> 0x20);
    uVar6 = iVar5 + iVar7;
    uVar1 = (uint)uVar2;
    uVar10 = iVar9 + uVar1;
    uVar11 = DAT_10022170;
    if ((int)uVar1 < (int)DAT_10022170) {
      uVar11 = uVar1;
    }
    if ((int)uVar1 < 0) {
      uVar11 = 0;
    }
    if ((int)DAT_10022174 <= iVar7) {
      uVar8 = (ulong)DAT_10022174;
    }
    if ((long)uVar2 < 0) {
      uVar8 = 0;
    }
    uVar1 = DAT_10022170;
    if ((int)uVar10 < (int)DAT_10022170) {
      uVar1 = uVar10;
    }
    if ((int)uVar10 < 0) {
      uVar1 = 0;
    }
    uVar10 = DAT_10022174;
    if ((int)uVar6 < (int)DAT_10022174) {
      uVar10 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar10 = 0;
    }
    if (uVar1 - uVar11 == 0 || (int)uVar1 < (int)uVar11) {
      return ZEXT816(0);
    }
    uVar4 = 0;
    iVar5 = uVar10 - (int)uVar8;
    if (iVar5 != 0 && (int)uVar8 <= (int)uVar10) {
      uVar3 = (ulong)uVar11 | uVar8 << 0x20;
      uVar4 = CONCAT44(iVar5,uVar1 - uVar11);
    }
  }
  PF_PART8(auVar13, 8) = uVar4;
  PF_PART8(auVar13, 0) = uVar3;
  return auVar13;
}

#undef DAT_10022170
#undef DAT_10022174

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100207a0
#define DAT_100207a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x187U)))
#undef DAT_100207d0
#define DAT_100207d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b7U)))
#undef DAT_100207e0
#define DAT_100207e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef DAT_100207f0
#define DAT_100207f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_10020800
#define DAT_10020800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef DAT_10020810
#define DAT_10020810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f7U)))
#undef DAT_10020820
#define DAT_10020820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef DAT_10020830
#define DAT_10020830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x217U)))
#undef DAT_100209a0
#define DAT_100209a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x387U)))
#undef DAT_100209bc
#define DAT_100209bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a3U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022178
#define DAT_10022178 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b5fU)))
#undef DAT_1002217c
#define DAT_1002217c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022180
#define DAT_10022180 (*(uint *)(((uintptr_t)pf_module_state + 0x1b67U)))
#undef DAT_1002231c
#define DAT_1002231c (*(uint *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022324
#define DAT_10022324 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef DAT_10022328
#define DAT_10022328 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0fU)))
#undef DAT_1002232c
#define DAT_1002232c (*(uint *)(((uintptr_t)pf_module_state + 0x1d13U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022370
#define DAT_10022370 (*(int *)(((uintptr_t)pf_module_state + 0x1d57U)))
#undef DAT_10022374
#define DAT_10022374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10022379
#define DAT_10022379 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d60U)))
#undef DAT_100223e8
#define DAT_100223e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dcfU)))
#undef DAT_100223ec
#define DAT_100223ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dd3U)))
#undef DAT_100223f0
#define DAT_100223f0 (*(int *)(((uintptr_t)pf_module_state + 0x1dd7U)))
#undef DAT_100223f4
#define DAT_100223f4 (*(uint *)(((uintptr_t)pf_module_state + 0x1ddbU)))
#undef DAT_100223f8
#define DAT_100223f8 (*(uint *)(((uintptr_t)pf_module_state + 0x1ddfU)))
#undef DAT_100223fc
#define DAT_100223fc (*(uint *)(((uintptr_t)pf_module_state + 0x1de3U)))
#undef DAT_10022400
#define DAT_10022400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1de7U)))
#undef DAT_10022404
#define DAT_10022404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1debU)))
#undef DAT_10022408
#define DAT_10022408 (*(int *)(((uintptr_t)pf_module_state + 0x1defU)))
#undef DAT_1002240c
#define DAT_1002240c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1df3U)))
#undef DAT_1002240d
#define DAT_1002240d (*(char *)(((uintptr_t)pf_module_state + 0x1df4U)))
#undef DAT_1002240e
#define DAT_1002240e (*(char *)(((uintptr_t)pf_module_state + 0x1df5U)))
#undef DAT_1002240f
#define DAT_1002240f (*(char *)(((uintptr_t)pf_module_state + 0x1df6U)))
#undef DAT_10022410
#define DAT_10022410 (*(uint *)(((uintptr_t)pf_module_state + 0x1df7U)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_100225fc
#define DAT_100225fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_10022600
#define DAT_10022600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe7U)))
#undef DAT_10022644
#define DAT_10022644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202bU)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022690
#define DAT_10022690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2077U)))
#undef DAT_10022692
#define DAT_10022692 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2079U)))
#undef DAT_10022694
#define DAT_10022694 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207bU)))
#undef DAT_10022696
#define DAT_10022696 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207dU)))
#undef DAT_10022698
#define DAT_10022698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207fU)))
#undef DAT_1002269a
#define DAT_1002269a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2081U)))
#undef DAT_1002269c
#define DAT_1002269c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2083U)))
#undef DAT_1002269e
#define DAT_1002269e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2085U)))
#undef DAT_10022980
#define DAT_10022980 (*(uint *)(((uintptr_t)pf_module_state + 0x2367U)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_100229a0
#define DAT_100229a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_10022ac0
#define DAT_10022ac0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24a7U)))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_10023751
#define DAT_10023751 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3138U)))
#undef DAT_10023779
#define DAT_10023779 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3160U)))
#undef DAT_1002386c
#define DAT_1002386c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3253U)))
#undef DAT_1002549c
#define DAT_1002549c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e83U)))
#undef DAT_1002549d
#define DAT_1002549d (*(char *)(((uintptr_t)pf_module_state + 0x4e84U)))
#undef DAT_100254a0
#define DAT_100254a0 (*(uint *)(((uintptr_t)pf_module_state + 0x4e87U)))
#undef DAT_100254a4
#define DAT_100254a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e8bU)))
#undef DAT_100254a8
#define DAT_100254a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8fU)))
#undef DAT_100254ac
#define DAT_100254ac (*(uint *)(((uintptr_t)pf_module_state + 0x4e93U)))
#undef DAT_100254b0
#define DAT_100254b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e97U)))
#undef DAT_100255a1
#define DAT_100255a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f88U)))
#undef DAT_10025692
#define DAT_10025692 (*(byte *)(((uintptr_t)pf_module_state + 0x5079U)))
#undef DAT_10025694
#define DAT_10025694 (*(int *)(((uintptr_t)pf_module_state + 0x507bU)))
#undef DAT_100256b0
#define DAT_100256b0 (*(uint *)(((uintptr_t)pf_module_state + 0x5097U)))
#undef DAT_10027094
#define DAT_10027094 (*(int *)(((uintptr_t)pf_module_state + 0x6a7bU)))
#undef DAT_10027194
#define DAT_10027194 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7bU)))
#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
#undef DAT_1012c4c0
#define DAT_1012c4c0 (*(int *)(((uintptr_t)pf_module_state + 0x10bea7U)))
#undef DAT_1012c4c4
#define DAT_1012c4c4 (*(int *)(((uintptr_t)pf_module_state + 0x10beabU)))
#undef DAT_1012c4c8
#define DAT_1012c4c8 (*(char *)(((uintptr_t)pf_module_state + 0x10beafU)))
#undef DAT_1012c4c9
#define DAT_1012c4c9 (*(char *)(((uintptr_t)pf_module_state + 0x10beb0U)))
#undef DAT_1012c4cc
#define DAT_1012c4cc (*(uint *)(((uintptr_t)pf_module_state + 0x10beb3U)))
#undef DAT_1012c4d0
#define DAT_1012c4d0 (*(char *)(((uintptr_t)pf_module_state + 0x10beb7U)))
#undef DAT_1012c4d1
#define DAT_1012c4d1 (*(char *)(((uintptr_t)pf_module_state + 0x10beb8U)))
#undef DAT_1012c4d2
#define DAT_1012c4d2 (*(char *)(((uintptr_t)pf_module_state + 0x10beb9U)))
#undef DAT_1012c4d3
#define DAT_1012c4d3 (*(char *)(((uintptr_t)pf_module_state + 0x10bebaU)))
#undef DAT_1012c4d4
#define DAT_1012c4d4 (*(char *)(((uintptr_t)pf_module_state + 0x10bebbU)))
#undef DAT_1012c4d5
#define DAT_1012c4d5 (*(char *)(((uintptr_t)pf_module_state + 0x10bebcU)))
#undef DAT_1012c4d6
#define DAT_1012c4d6 (*(char *)(((uintptr_t)pf_module_state + 0x10bebdU)))
#undef DAT_1012c4d7
#define DAT_1012c4d7 (*(char *)(((uintptr_t)pf_module_state + 0x10bebeU)))
#undef DAT_1012c4d8
#define DAT_1012c4d8 (*(char *)(((uintptr_t)pf_module_state + 0x10bebfU)))
#undef DAT_1012c4d9
#define DAT_1012c4d9 (*(char *)(((uintptr_t)pf_module_state + 0x10bec0U)))
#undef DAT_1012c4da
#define DAT_1012c4da (*(char *)(((uintptr_t)pf_module_state + 0x10bec1U)))
#undef DAT_1012c4db
#define DAT_1012c4db (*(char *)(((uintptr_t)pf_module_state + 0x10bec2U)))
#undef DAT_1012c4dc
#define DAT_1012c4dc (*(char *)(((uintptr_t)pf_module_state + 0x10bec3U)))
#undef DAT_1012c4dd
#define DAT_1012c4dd (*(char *)(((uintptr_t)pf_module_state + 0x10bec4U)))
#undef DAT_1012c4de
#define DAT_1012c4de (*(char *)(((uintptr_t)pf_module_state + 0x10bec5U)))
#undef DAT_1012c4df
#define DAT_1012c4df (*(char *)(((uintptr_t)pf_module_state + 0x10bec6U)))
#undef DAT_1012c4e0
#define DAT_1012c4e0 (*(char *)(((uintptr_t)pf_module_state + 0x10bec7U)))
#undef DAT_1012c4e1
#define DAT_1012c4e1 (*(char *)(((uintptr_t)pf_module_state + 0x10bec8U)))
#undef DAT_1012c4e2
#define DAT_1012c4e2 (*(char *)(((uintptr_t)pf_module_state + 0x10bec9U)))
#undef DAT_1012c4e3
#define DAT_1012c4e3 (*(char *)(((uintptr_t)pf_module_state + 0x10becaU)))
#undef DAT_1012c4e4
#define DAT_1012c4e4 (*(char *)(((uintptr_t)pf_module_state + 0x10becbU)))
#undef DAT_1012c4e5
#define DAT_1012c4e5 (*(char *)(((uintptr_t)pf_module_state + 0x10beccU)))
#undef DAT_1012c4e6
#define DAT_1012c4e6 (*(char *)(((uintptr_t)pf_module_state + 0x10becdU)))
#undef DAT_1012c4e7
#define DAT_1012c4e7 (*(char *)(((uintptr_t)pf_module_state + 0x10beceU)))
#undef DAT_1012c4e8
#define DAT_1012c4e8 (*(char *)(((uintptr_t)pf_module_state + 0x10becfU)))
#undef DAT_1012c4e9
#define DAT_1012c4e9 (*(char *)(((uintptr_t)pf_module_state + 0x10bed0U)))
#undef DAT_1012c4ea
#define DAT_1012c4ea (*(char *)(((uintptr_t)pf_module_state + 0x10bed1U)))
#undef DAT_1012c4eb
#define DAT_1012c4eb (*(char *)(((uintptr_t)pf_module_state + 0x10bed2U)))
#undef DAT_1012c4ec
#define DAT_1012c4ec (*(char *)(((uintptr_t)pf_module_state + 0x10bed3U)))
#undef DAT_1012c4ed
#define DAT_1012c4ed (*(char *)(((uintptr_t)pf_module_state + 0x10bed4U)))
#undef DAT_1012c4ee
#define DAT_1012c4ee (*(char *)(((uintptr_t)pf_module_state + 0x10bed5U)))
#undef DAT_1012c4ef
#define DAT_1012c4ef (*(char *)(((uintptr_t)pf_module_state + 0x10bed6U)))
#undef DAT_1012c4f0
#define DAT_1012c4f0 (*(char *)(((uintptr_t)pf_module_state + 0x10bed7U)))
#undef DAT_1012c4f1
#define DAT_1012c4f1 (*(char *)(((uintptr_t)pf_module_state + 0x10bed8U)))
#undef DAT_1012c4f2
#define DAT_1012c4f2 (*(char *)(((uintptr_t)pf_module_state + 0x10bed9U)))
#undef DAT_1012c4f3
#define DAT_1012c4f3 (*(char *)(((uintptr_t)pf_module_state + 0x10bedaU)))
#undef DAT_1012c4f4
#define DAT_1012c4f4 (*(char *)(((uintptr_t)pf_module_state + 0x10bedbU)))
#undef DAT_1012c4f5
#define DAT_1012c4f5 (*(char *)(((uintptr_t)pf_module_state + 0x10bedcU)))
#undef DAT_1012c4f6
#define DAT_1012c4f6 (*(char *)(((uintptr_t)pf_module_state + 0x10beddU)))
#undef DAT_1012c4f7
#define DAT_1012c4f7 (*(char *)(((uintptr_t)pf_module_state + 0x10bedeU)))
#undef DAT_1012c4f8
#define DAT_1012c4f8 (*(char *)(((uintptr_t)pf_module_state + 0x10bedfU)))
#undef DAT_1012c4fc
#define DAT_1012c4fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bee3U)))
#undef DAT_1012c500
#define DAT_1012c500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bee7U)))
#undef DAT_1012c504
#define DAT_1012c504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beebU)))
#undef DAT_1012c50c
#define DAT_1012c50c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef DAT_1012c510
#define DAT_1012c510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef7U)))
#undef DAT_1012c518
#define DAT_1012c518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10beffU)))
#undef DAT_1012c520
#define DAT_1012c520 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10bf07U)))
#undef DAT_1012c528
#define DAT_1012c528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bf0fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006888
#define UINT_00006888 (*(uint *)(0x6888U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef UINT_000068d8
#define UINT_000068d8 (*(uint *)(0x68d8U))
#undef UINT_000068dc
#define UINT_000068dc (*(uint *)(0x68dcU))
#undef UINT_000068f4
#define UINT_000068f4 (*(uint *)(0x68f4U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#undef UINT_0000696c
#define UINT_0000696c (*(uint *)(0x696cU))
#undef UNK_100207a8
#define UNK_100207a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef UNK_100207c8
#define UNK_100207c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1afU)))
#undef UNK_100207d8
#define UNK_100207d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bfU)))
#undef UNK_100207e8
#define UNK_100207e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef UNK_100207f8
#define UNK_100207f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_10020808
#define UNK_10020808 (*(char * *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef UNK_10020818
#define UNK_10020818 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef UNK_10020828
#define UNK_10020828 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef UNK_10020838
#define UNK_10020838 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef _DAT_100207a0
#define _DAT_100207a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x187U)))
#undef _DAT_100207d0
#define _DAT_100207d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b7U)))
#undef _DAT_100207e0
#define _DAT_100207e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef _DAT_100207f0
#define _DAT_100207f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef _DAT_10020800
#define _DAT_10020800 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_10020810
#define _DAT_10020810 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f7U)))
#undef _DAT_10020820
#define _DAT_10020820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef _DAT_10020830
#define _DAT_10020830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x217U)))
#undef _DAT_100223ec
#define _DAT_100223ec (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dd3U)))
#undef _DAT_10022400
#define _DAT_10022400 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1de7U)))
#undef _DAT_10022404
#define _DAT_10022404 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1debU)))
#undef _DAT_1002549c
#define _DAT_1002549c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4e83U)))
#undef _DAT_100254a4
#define _DAT_100254a4 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8bU)))
#undef _DAT_1012c4fc
#define _DAT_1012c4fc (*(int *)(((uintptr_t)pf_module_state + 0x10bee3U)))
#undef _DAT_1012c500
#define _DAT_1012c500 (*(int *)(((uintptr_t)pf_module_state + 0x10bee7U)))
#undef _DAT_1012c504
#define _DAT_1012c504 (*(int *)(((uintptr_t)pf_module_state + 0x10beebU)))
#undef _DAT_1012c50c
#define _DAT_1012c50c (*(int *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef _DAT_1012c510
#define _DAT_1012c510 (*(int *)(((uintptr_t)pf_module_state + 0x10bef7U)))
#undef pcRam0000000010020808
#define pcRam0000000010020808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#undef ram0x100207c0
#define ram0x100207c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_100207b0
#define str_100207b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_1002108e
#define str_1002108e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa75U)))
#undef str_10021095
#define str_10021095 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7cU)))
#undef str_1002109f
#define str_1002109f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa86U)))
#undef str_100210ad
#define str_100210ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa94U)))
#undef str_100210ba
#define str_100210ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa1U)))
#undef str_100210c7
#define str_100210c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaeU)))
#undef str_100210d3
#define str_100210d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabaU)))
#undef str_10021181
#define str_10021181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb68U)))
#undef str_10021191
#define str_10021191 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb78U)))
#undef str_100211a5
#define str_100211a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8cU)))
#undef uRam00000000100207a8
#define uRam00000000100207a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef uRam00000000100207c8
#define uRam00000000100207c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1afU)))
#undef uRam00000000100207d8
#define uRam00000000100207d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bfU)))
#undef uRam00000000100207e8
#define uRam00000000100207e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef uRam00000000100207f8
#define uRam00000000100207f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam0000000010020818
#define uRam0000000010020818 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef uRam0000000010020828
#define uRam0000000010020828 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef uRam0000000010020838
#define uRam0000000010020838 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#define local_468 (*(undefined4 *)(frame + 24))
#define local_464 (*(uint *)(frame + 28))
#define local_460 (*(uint *)(frame + 32))
#define local_45c (*(uint *)(frame + 36))
#define local_458 (*(uint *)(frame + 40))
#define local_454 (*(uint *)(frame + 44))
#define local_368 (*(char (*)[255])(frame + 280))
#define local_268 (*(undefined8 *)(frame + 536))
#define local_168 (*(ulong *)(frame + 792))
#define local_160 (*(ulong *)(frame + 800))
#define local_158 (*(undefined8 *)(frame + 808))
#define local_148 (*(undefined8 *)(frame + 824))
#define local_60 (*(undefined1 * *)(frame + 1056))
#define local_54 (*(uint *)(frame + 1068))
#define local_50 (*(ulong *)(frame + 1072))
#define local_48 (*(uint *)(frame + 1080))
#define local_44 (*(uint *)(frame + 1084))
#define local_40 (*(ulong *)(frame + 1088))
#define local_34 (*(uint *)(frame + 1100))
#define cStack_269 (*(char *)(frame + 535))
#define acStack_260 (*(char (*)[8])(frame + 544))
#define acStack_258 (*(char (*)[8])(frame + 552))
#define acStack_250 (*(char (*)[232])(frame + 560))
#define pcStack_150 (*(char * *)(frame + 816))
#define uStack_140 (*(undefined8 *)(frame + 832))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005880(long param_1)

{
  unsigned char frame[1184] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  byte bVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  long lVar28;
  undefined4 uVar29;
  int iVar30;
  long lVar31;
  char *pcVar32;
  byte *pbVar33;
  ulong uVar34;
  byte bVar35;
  int iVar36;
  void *pvVar37;
  uint uVar38;
  undefined8 *puVar39;
  long lVar40;
  char cVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  char *pcVar47;
  byte *pbVar48;
  uint128 auVar49;

  iVar45 = DAT_1012c4c0;
  uVar38 = DAT_100223fc;
  lVar15 = DAT_10022368;
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar10 = (ulong)uVar5;
  uVar44 = *(uint *)(param_1 + 0x60);
  local_168 = (ulong)*(uint *)(param_1 + 0x68);
  uVar25 = *(uint *)(param_1 + 100);
  local_54 = uVar25;
  local_44 = uVar25 & 1;
  local_34 = uVar44;
  local_40 = uVar10;
  if ((uVar25 & 1) == 0) {
    if (DAT_1012c4c8 != '\0') {
      if ((long)(int)DAT_10022180 < 0) {
        if (((DAT_1002549c == '\x01') && (DAT_1002549d == '\x01')) && (0 < (long)(int)DAT_10027194))
        {
          uVar10 = (long)(int)DAT_10027194 + 1;
          do {
            iVar45 = *(int *)(DAT_10022990 + -8 + uVar10 * 4);
            lVar28 = (long)iVar45 * 0xda8;
            if ((*(char *)(DAT_10022368 + lVar28) == '\x01') &&
               (lVar22 = DAT_10022368 + lVar28, *(char *)(lVar22 + 1) == '\x01')) {
              iVar36 = 0x18;
              if (*(char *)(lVar22 + 2) == '\0') {
                iVar36 = *(int *)(lVar22 + 100);
              }
              iVar42 = (int)*(undefined8 *)(lVar22 + 0x58);
              if (((iVar42 <= (int)uVar5) &&
                  (iVar18 = (int)((ulong)*(undefined8 *)(lVar22 + 0x58) >> 0x20),
                  iVar18 <= (int)uVar44)) &&
                 (((int)uVar5 < *(int *)(lVar22 + 0x60) + iVar42 && ((int)uVar44 < iVar36 + iVar18))
                 )) {
                if ((-1 < iVar45) && (*(int *)(DAT_10022368 + 0x10 + lVar28) == 0)) {
                  uVar5 = recovered_1001a110(lVar22,uVar5,uVar44);
                  cVar41 = *(char *)(lVar22 + 0x78);
                  if (cVar41 == '\0') {
                    uVar10 = 0;
                    goto LAB_10008815;
                  }
                  uVar26 = 0;
                  goto LAB_10008551;
                }
                break;
              }
            }
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
        }
        goto LAB_10005c60;
      }
      if ((((DAT_10022368 != 0) &&
           (pcVar11 = (char *)(DAT_10022368 + (long)(int)DAT_10022180 * 0xda8), *pcVar11 == '\x01'))
          && (pcVar11[2] == '\0')) && (pcVar11[3] == '\0')) {
        *(int *)(pcVar11 + 0x60) = DAT_1012c4c0;
        iVar36 = DAT_1012c4c4;
        *(int *)(pcVar11 + 100) = DAT_1012c4c4;
        *(int *)(pcVar11 + 0x70) = iVar45;
        *(int *)(pcVar11 + 0x74) = iVar36;
        *(undefined8 *)(pcVar11 + 0x68) = *(undefined8 *)(pcVar11 + 0x58);
        if (*(int *)(pcVar11 + 0x10) == 6) {
          pcVar11[4] = '\x01';
          if (*(uint *)(pcVar11 + 0xb24) != 0) {
            iVar42 = 0x35;
            if (0x35 < iVar36) {
              iVar42 = iVar36;
            }
            iVar36 = 0x1d;
            if (0x1d < iVar45) {
              iVar36 = iVar45;
            }
            terror_ui_window_set_content_size(*(uint *)(pcVar11 + 0xb24),iVar36 - 0x1c,iVar42 - 0x34);
          }
        }
        else if (*(int *)(pcVar11 + 0x10) == 0) {
          iVar36 = iVar36 + -0x6a;
          iVar42 = -1;
          if (0x49 < iVar36) {
            iVar36 = (int)((ulong)((long)iVar36 * 0x22983759) >> 0x20) - iVar36;
            iVar42 = (iVar36 >> 6) - (iVar36 >> 0x1f);
          }
          iVar45 = iVar45 + (int)((ulong)((long)(iVar45 + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
          iVar36 = (iVar45 >> 6) - (iVar45 >> 0x1f);
          iVar45 = 1;
          if (1 < iVar36) {
            iVar45 = iVar36;
          }
          iVar36 = iVar45 * iVar42 + *(int *)(pcVar11 + 0xaf8) + 2;
          iVar45 = *(int *)(pcVar11 + 0xb00);
          if (iVar45 < 0) {
            pcVar11[0xb00] = '\0';
            pcVar11[0xb01] = '\0';
            pcVar11[0xb02] = '\0';
            pcVar11[0xb03] = '\0';
            iVar45 = 0;
          }
          if ((iVar36 < 1) || (iVar36 < iVar45)) {
            iVar45 = 0;
            if (0 < iVar36) {
              iVar45 = iVar36;
            }
            *(int *)(pcVar11 + 0xb00) = iVar45;
          }
        }
      }
      DAT_10022180 = 0xffffffff;
      memset(&DAT_1002549c,0,0x1fc);
      puVar7 = &DAT_10022178;
      goto LAB_1000621d;
    }
    goto LAB_10006235;
  }
  if (DAT_1012c4c8 != '\0') goto LAB_10006235;
  if (DAT_100223e8 != '\x01') {
    if (uVar44 < 0x18) {
      if (0x51 < (int)uVar5) {
        if (uVar5 - 0x56 < 0x26) {
          iVar45 = 1;
          uVar29 = 0x56;
        }
        else if (uVar5 - 0x82 < 0x28) {
          iVar45 = 2;
          uVar29 = 0x82;
        }
        else {
          if (0x3b < uVar5 - 0xb0) goto LAB_10006235;
          iVar45 = 3;
          uVar29 = 0xb0;
        }
        recovered_100189e0(iVar45,uVar29);
        goto LAB_10006124;
      }
      memset(&DAT_100223e8,0,0x59c);
      uVar5 = (uint)local_40;
      DAT_100223e8 = '\x01';
      _DAT_100223ec = _DAT_100207a0;
      DAT_100223f4 = (uint)uRam00000000100207a8;
      DAT_100223f8 = (uint)((ulong)uRam00000000100207a8 >> 0x20);
      DAT_100223fc = 0xffffffff;
      _DAT_10022400 = 0xffffffff;
      _DAT_10022404 = 0xffffffff;
      uVar44 = local_34;
      if ((long)(int)DAT_10022980 < 0x12) {
        *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 0x18;
        *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
        lVar15 = (long)(int)DAT_10022980;
        *(undefined8 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6e75542074697551;
        *(undefined4 *)(&DAT_10022694 + lVar15 * 0x2a) = 0x617264;
        lVar15 = (long)(int)DAT_10022980;
        DAT_10022980 = DAT_10022980 + 1;
        if (lVar15 < 0x11) {
          *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0x19;
          *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
          uVar9 = PF_PART8(str_100207b0, 8);
          lVar15 = (long)(int)DAT_10022980 * 0x2a;
          *(undefined8 *)(&DAT_1002268c + lVar15) = PF_PART8(str_100207b0, 0);
          *(undefined8 *)(&DAT_10022694 + lVar15) = uVar9;
          *(undefined2 *)(&DAT_1002269c + lVar15) = 0x6e6f;
          (&DAT_1002269e)[lVar15] = 0;
          lVar15 = (long)(int)DAT_10022980;
          DAT_10022980 = DAT_10022980 + 1;
          if (lVar15 < 0x11) {
            *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0x1a;
            *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
            lVar15 = (long)(int)DAT_10022980;
            *(undefined8 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x776f442074756853;
            *(undefined2 *)(&DAT_10022694 + lVar15 * 0x2a) = 0x6e;
            DAT_10022980 = DAT_10022980 + 1;
          }
        }
      }
    }
    else {
      lVar28 = recovered_100191f0(uVar5,uVar44);
      uVar38 = DAT_10027194;
      lVar15 = DAT_10022990;
      uVar10 = (ulong)DAT_10027194;
      uVar43 = (uint)lVar28;
      uVar5 = (uint)local_40;
      uVar44 = local_34;
      if (-1 < (int)uVar43) {
        if (0 < (int)DAT_10027194) {
          uVar26 = uVar10 + 1;
          do {
            uVar6 = *(uint *)(DAT_10022990 + -8 + uVar26 * 4);
            lVar28 = (long)(int)uVar6 * 0xda8;
            if ((*(char *)(DAT_10022368 + lVar28) == '\x01') &&
               (*(uint *)(DAT_10022368 + lVar28 + 0x14) == uVar43)) {
              if (-1 < (int)uVar6) {
                *(undefined2 *)(DAT_10022368 + 1 + lVar28) = 1;
                uVar43 = uVar38 - 1;
                puVar39 = (undefined8 *)(lVar15 + 0x14);
                uVar26 = 0;
                uVar13 = (ulong)uVar43;
                goto LAB_10005d93;
              }
              break;
            }
            uVar26 = uVar26 - 1;
          } while (1 < uVar26);
        }
        recovered_10019380(uVar43);
        goto LAB_1000622d;
      }
      if (0 < (int)DAT_10027194) {
        uVar26 = uVar10 + 1;
        do {
          uVar38 = *(uint *)(DAT_10022990 + -8 + uVar26 * 4);
          if ((*(char *)(DAT_10022368 + (long)(int)uVar38 * 0xda8) == '\x01') &&
             (pcVar11 = (char *)((long)(int)uVar38 * 0xda8 + DAT_10022368), pcVar11[1] == '\x01')) {
            iVar45 = 0x18;
            if (pcVar11[2] == 0) {
              iVar45 = *(int *)(pcVar11 + 100);
            }
            iVar36 = (int)*(undefined8 *)(pcVar11 + 0x58);
            if ((((iVar36 <= (int)(uint)local_40) &&
                 (iVar42 = (int)((ulong)*(undefined8 *)(pcVar11 + 0x58) >> 0x20),
                 iVar42 <= (int)local_34)) &&
                ((int)(uint)local_40 < *(int *)(pcVar11 + 0x60) + iVar36)) &&
               ((int)local_34 < iVar45 + iVar42)) {
              if (-1 < (int)uVar38) {
                iVar45 = iVar42 + 6;
                iVar42 = iVar42 + 0x12;
                if ((((int)(uint)local_40 < iVar36 + 0x15 && iVar36 + 9 <= (int)(uint)local_40) &&
                    iVar45 <= (int)local_34) && (int)local_34 < iVar42) {
                  recovered_1001e9a0(uVar38,'\x01');
                }
                else {
                  if ((((int)(uint)local_40 < iVar36 + 0x27 && iVar36 + 0x1b <= (int)(uint)local_40)
                      && iVar45 <= (int)local_34) && (int)local_34 < iVar42) {
                    pcVar11[2] = pcVar11[2] ^ 1;
                  }
                  else {
                    if (((iVar36 + 0x39 <= (int)(uint)local_40 ||
                         (int)(uint)local_40 < iVar36 + 0x2d) || (int)local_34 < iVar45) ||
                        iVar42 <= (int)local_34) {
                      if ((((int)(uint)local_40 < iVar36 + 0x4b &&
                           iVar36 + 0x3f <= (int)(uint)local_40) && iVar45 <= (int)local_34) &&
                          (int)local_34 < iVar42) {
                        uVar26 = 0;
                        goto LAB_100088e0;
                      }
                      recovered_1000d820(uVar38);
                      auVar49 = recovered_10017910(pcVar11);
                      uVar5 = (uint)local_40;
                      if (((int)uVar5 < PF_PART4(auVar49, 0) + PF_PART4(auVar49, 8) &&
                           (PF_PART4(auVar49, 4) <= (int)local_34 && PF_PART4(auVar49, 0) <= (int)uVar5)) &&
                         ((int)local_34 < PF_PART4(auVar49, 12) + PF_PART4(auVar49, 4))) {
                        recovered_10019670(uVar38);
                        goto LAB_1000622d;
                      }
                      uVar44 = local_34;
                      if (((int)local_34 < *(int *)(pcVar11 + 0x5c) + 0x18) && (pcVar11[3] == '\0'))
                      {
                        _DAT_1012c4fc = uVar5 - *(int *)(pcVar11 + 0x58);
                        _DAT_1012c500 = local_34 - *(int *)(pcVar11 + 0x5c);
                        DAT_10022374 = 0;
                        DAT_1002217c = 0xffffffff;
                        DAT_10022178 = uVar38;
                        goto LAB_10006235;
                      }
                      iVar45 = *(int *)(pcVar11 + 0x10);
                      if (iVar45 == 3) {
                        if (pcVar11[2] != '\0') goto LAB_10006235;
                        uVar9 = recovered_100196c0(uVar38,uVar5,local_34);
                        uVar5 = (uint)local_40;
                        uVar44 = local_34;
                        if ((char)uVar9 != '\0') goto LAB_10006235;
                        iVar45 = *(int *)(pcVar11 + 0x10);
                      }
                      uVar5 = (uint)local_40;
                      uVar44 = local_34;
                      if ((iVar45 != 0) || (pcVar11[2] != '\0')) goto LAB_10006235;
                      uVar10 = recovered_10019de0((long)pcVar11,uVar5,local_34);
                      uVar44 = local_34;
                      if (-1 < (int)uVar10) {
                        recovered_100194a0(&DAT_100229a0 + (uVar10 & 0xffffffff) * 0x124);
                        goto LAB_1000622d;
                      }
                      uVar5 = (uint)local_40;
                      uVar9 = recovered_10019e70(uVar38,uVar5,local_34);
                      if ((char)uVar9 != '\0') goto LAB_10006235;
                      uVar43 = recovered_1001a110((long)pcVar11,uVar5,uVar44);
                      if (uVar43 != 0xfffffffe) {
                        if (uVar43 == 0xffffffff) {
                          if (pcVar11[0x260] == '\x01') goto LAB_10009948;
                          if (pcVar11[0x78] == '\0') {
                            pcVar11[0x260] = '\x01';
                          }
                          else {
                            recovered_1001a2a0(pcVar11 + 0x78,pcVar11 + 0x78);
                          }
                        }
                        else {
                          uVar5 = (uint)local_40;
                          uVar44 = local_34;
                          if (((int)uVar43 < 0) || (*(uint *)(pcVar11 + 0xaf8) <= uVar43))
                          goto LAB_10006235;
                          lVar15 = *(long *)(pcVar11 + 0xaf0);
                          lVar28 = (ulong)uVar43 * 0x1f8;
                          if (*(int *)(lVar15 + 0x1ec + lVar28) != 3) {
                            *(uint *)(pcVar11 + 0xafc) = uVar43;
                            pcVar11[0xb04] = '\x01';
                            _DAT_1002549c = 1;
                            DAT_100254ac = local_34;
                            cVar41 = *(char *)(lVar15 + 0xf1 + lVar28);
                            DAT_100254a0 = uVar38;
                            _DAT_100254a4 = uVar43;
                            DAT_100254a8 = uVar5;
                            if (cVar41 == '\0') {
                              uVar10 = 0;
                              goto LAB_10009a5b;
                            }
                            uVar26 = 0;
                            goto LAB_10009a39;
                          }
                          *(undefined4 *)(pcVar11 + 0x25c) =
                               *(undefined4 *)(lVar15 + lVar28 + 0x1f0);
LAB_10009948:
                          pcVar11[0x260] = '\0';
                          pcVar11[0x78] = '\0';
                        }
                        pcVar11[0xb00] = '\0';
                        pcVar11[0xb01] = '\0';
                        pcVar11[0xb02] = '\0';
                        pcVar11[0xb03] = '\0';
                      }
                      recovered_1000cff0((long)pcVar11);
                      goto LAB_1000622d;
                    }
                    recovered_100194f0(uVar38);
                  }
                  recovered_1000d820(uVar38);
                }
                uVar44 = local_34;
                goto LAB_10006235;
              }
              break;
            }
          }
          uVar26 = uVar26 - 1;
        } while (1 < uVar26);
      }
      iVar45 = (DAT_10022170 + -0x18) / 0x52;
      uVar38 = DAT_10022170 + -0x18 >> 0x1f;
      iVar36 = 1;
      if (1 < iVar45) {
        iVar36 = iVar45;
      }
      uVar38 = -uVar38 ^ uVar38 >> 0x1f;
      pcVar11 = &DAT_10023750;
      lVar15 = 0x18;
      do {
        if (*pcVar11 == '\x01') {
          iVar45 = ((int)uVar38 % iVar36) * 0x52;
          if (((iVar45 + 0xc <= (int)(uint)local_40) &&
              (iVar42 = ((int)uVar38 / iVar36) * 0x4e, iVar42 + 0x24 <= (int)local_34)) &&
             (((int)(uint)local_40 < iVar45 + 0x56 && ((int)local_34 < iVar42 + 0x66)))) {
            if (*pcVar11 != '\x01') goto LAB_10006235;
            bVar24 = recovered_10010d70((long)pcVar11);
            pbVar27 = (byte *)(pcVar11 + 0x29);
            iVar45 = *(int *)(pcVar11 + 0x11c);
            if (bVar24 == 0) goto LAB_1000790f;
            recovered_1000c9f0((char *)pbVar27,*(int *)(pcVar11 + 0x11c));
            goto LAB_1000622d;
          }
          uVar38 = uVar38 + 1;
        }
        pcVar11 = pcVar11 + 0x124;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      iVar45 = 8;
      if (0x5d < DAT_10022170) {
        iVar45 = DAT_10022170 + -0x56;
      }
      if ((((local_34 < 0x66) && (0x23 < (int)local_34)) && (iVar45 <= (int)(uint)local_40)) &&
         ((int)(uint)local_40 < iVar45 + 0x4a)) {
        iVar45 = recovered_10004540();
        recovered_1000c9f0(&DAT_10020a84,iVar45);
        goto LAB_10006124;
      }
    }
    goto LAB_10006235;
  }
  if (((int)uVar5 < DAT_100223ec) || (DAT_100223ec + 0xa8 <= (int)uVar5)) {
LAB_100058ee:
    DAT_100223e8 = '\0';
    goto LAB_10006235;
  }
  if (((int)(uVar44 - DAT_100223f0) < -0x15) ||
     (uVar43 = (int)(uVar44 - DAT_100223f0) / 0x16, (int)DAT_10022980 <= (int)uVar43))
  goto LAB_100058ee;
  uVar26 = (ulong)uVar43;
  iVar45 = *(int *)(&DAT_100225fc + uVar26 * 4);
  DAT_100223e8 = '\0';
  if (iVar45 == 2) {
    recovered_10019380(DAT_100223fc);
    goto LAB_10006124;
  }
  if ((int)DAT_100223fc < 0 || iVar45 != 0x13) {
    switch((uintptr_t)(iVar45)) {
    case 3:
      uVar38 = *(uint *)(&DAT_10022644 + uVar26 * 4);
      if (-1 < (long)(int)uVar38) {
        *(undefined2 *)(DAT_10022368 + 1 + (long)(int)uVar38 * 0xda8) = 1;
        recovered_1000d820(uVar38);
        goto LAB_10006124;
      }
      break;
    case 4:
      lVar28 = 0;
      lVar22 = 0;
      do {
        if (*(char *)(lVar15 + lVar28) == '\x01') {
          if (*(uint *)(lVar15 + 0x14 + lVar28) == uVar38) {
            recovered_1001e9a0((uint)lVar22,'\x01');
            lVar15 = DAT_10022368;
            uVar10 = local_40;
            uVar44 = local_34;
          }
        }
        lVar22 = lVar22 + 1;
        lVar28 = lVar28 + 0xda8;
      } while (lVar22 != 0x14);
      uVar26 = 0;
      lVar15 = DAT_10022988;
      do {
        if (*(char *)(lVar15 + uVar26 * 300) == '\x01') {
          pvVar37 = (void *)(uVar26 * 300 + lVar15);
          if (*(char *)((long)pvVar37 + 1) == '\0') {
            lVar28 = 0;
            iVar45 = 0;
            do {
              if (*(char *)(DAT_10022368 + lVar28) == '\x01') {
                iVar45 = iVar45 + (uint)(uVar26 == *(uint *)(DAT_10022368 + 0x14 + lVar28));
              }
              if (*(char *)(DAT_10022368 + 0xda8 + lVar28) == '\x01') {
                iVar45 = iVar45 + (uint)(uVar26 == *(uint *)(DAT_10022368 + 0xdbc + lVar28));
              }
              lVar28 = lVar28 + 0x1b50;
            } while (lVar28 != 0x11120);
            if (iVar45 == 0) {
              memset(pvVar37,0,300);
              lVar15 = DAT_10022988;
              uVar10 = local_40;
              uVar44 = local_34;
            }
          }
        }
        uVar5 = (uint)uVar10;
        uVar26 = uVar26 + 1;
      } while (uVar26 != 0x12);
      break;
    default:
      goto switchD_10006147_caseD_5;
    case 0x18:
      lVar28 = 0;
      do {
        if (*(char *)(lVar15 + lVar28) == '\x01') {
          if (*(int *)(lVar15 + 0x10 + lVar28) == 6) {
            uVar5 = *(uint *)(lVar15 + 0xb24 + lVar28);
            if (uVar5 != 0) {
              terror_ui_window_request_close(uVar5,*(int *)(lVar15 + 0x58 + lVar28),
                                 *(int *)(lVar15 + 0x5c + lVar28));
              lVar15 = DAT_10022368;
              uVar10 = local_40;
              uVar44 = local_34;
            }
          }
        }
        uVar5 = (uint)uVar10;
        lVar28 = lVar28 + 0xda8;
      } while (lVar28 != 0x11120);
      DAT_10022379 = 1;
      break;
    case 0x19:
      uVar10 = recovered_10003ea0(3,str_100210c7,0x9c9c9c,'\0');
      local_158 = CONCAT44((int)uVar10,3);
      pcStack_150 = str_100210d3;
      local_148 = ram0x100207c0;
      uStack_140 = uRam00000000100207c8;
      uVar10 = recovered_1000cbb0(&local_158);
      lVar15 = DAT_10022368;
      uVar9 = PF_PART8(str_100207b0, 8);
      if (-1 < (int)uVar10) {
        lVar28 = (uVar10 & 0xffffffff) * 0xda8;
        pcVar11 = (char *)(DAT_10022368 + 0x261 + lVar28);
        *(undefined8 *)pcVar11 = PF_PART8(str_100207b0, 0);
        *(undefined8 *)(pcVar11 + 8) = uVar9;
        *(undefined2 *)(lVar15 + 0x271 + lVar28) = 0x6e6f;
        *(undefined1 *)(lVar15 + 0x273 + lVar28) = 0;
      }
      goto LAB_1000622d;
    case 0x1a:
      iVar45 = Ram0000000000006800;
      if (((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
         ((uVar38 = Ram0000000000006808, 0xb < uVar38 &&
          (uVar38 = Ram0000000000006808, 0xf7 < uVar38)))) {
        uVar38 = UINT_000068f4;
        if ((code *)(ulong)uVar38 != (code *)0x0) {
          (*(code *)(ulong)uVar38)();
          goto LAB_10006124;
        }
      }
    }
    goto LAB_10006235;
  }
  if (*(int *)(DAT_10022988 + 4 + (ulong)DAT_100223fc * 300) == 5) {
    uVar26 = 0;
    memset((void *)(DAT_10022988 + (ulong)DAT_100223fc * 300),0,300);
    recovered_1001aa70();
    lVar15 = DAT_10022988;
    uVar10 = local_40;
    uVar44 = local_34;
    do {
      if (*(char *)(lVar15 + uVar26 * 300) == '\x01') {
        pvVar37 = (void *)(uVar26 * 300 + lVar15);
        if (*(char *)((long)pvVar37 + 1) == '\0') {
          lVar28 = 0;
          iVar45 = 0;
          do {
            if (*(char *)(DAT_10022368 + lVar28) == '\x01') {
              iVar45 = iVar45 + (uint)(uVar26 == *(uint *)(DAT_10022368 + 0x14 + lVar28));
            }
            if (*(char *)(DAT_10022368 + 0xda8 + lVar28) == '\x01') {
              iVar45 = iVar45 + (uint)(uVar26 == *(uint *)(DAT_10022368 + 0xdbc + lVar28));
            }
            lVar28 = lVar28 + 0x1b50;
          } while (lVar28 != 0x11120);
          if (iVar45 == 0) {
            memset(pvVar37,0,300);
            lVar15 = DAT_10022988;
            uVar10 = local_40;
            uVar44 = local_34;
          }
        }
      }
      uVar5 = (uint)uVar10;
      uVar26 = uVar26 + 1;
    } while (uVar26 != 0x12);
    goto LAB_10006235;
  }
switchD_10006147_caseD_5:
  if ((-1 < (int)DAT_100223f4) && (*(char *)(DAT_10022368 + (ulong)DAT_100223f4 * 0xda8) != '\0')) {
    lVar28 = (ulong)DAT_100223f4 * 0xda8 + DAT_10022368;
    if (((int)DAT_100223f8 < 0) || (*(uint *)(lVar28 + 0xaf8) <= DAT_100223f8)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)((ulong)DAT_100223f8 * 0x1f8 + *(long *)(lVar28 + 0xaf0));
    }
    switch((uintptr_t)(iVar45)) {
    case 0x14:
      if (*(int *)(lVar28 + 0x10) == 0) {
        recovered_1000c9f0((char *)(lVar28 + 0x78),*(int *)(lVar28 + 0x25c));
      }
      else {
LAB_10008b12:
        bVar4 = pcVar11 == (char *)0x0;
        switch((uintptr_t)(iVar45)) {
        case 5:
          goto switchD_1000874b_caseD_5;
        case 6:
          if (DAT_1002240e != '\x01') goto LAB_10006235;
          recovered_1000c9f0(&DAT_10022418,DAT_10022408);
          goto LAB_10006124;
        case 0xe:
          goto switchD_1000874b_caseD_e;
        case 0xf:
          goto switchD_1000874b_caseD_f;
        case 0x10:
          goto switchD_1000874b_caseD_10;
        case 0x11:
          goto switchD_1000874b_caseD_11;
        case 0x12:
          goto switchD_1000874b_caseD_12;
        case 0x17:
          goto switchD_1000874b_caseD_17;
        }
        if (iVar45 == 0x13) {
          recovered_1001bae0(DAT_10022408);
        }
        else {
          if (iVar45 != 7 || bVar4) {
            if (iVar45 != 8 || bVar4) {
              if (iVar45 == 9) {
                recovered_1001c1c0(lVar28);
              }
              else if (iVar45 != 10 || bVar4) {
                if (iVar45 == 0xc) {
                  recovered_1001c560(2,DAT_100223f4,str_1002109f,str_100210ad,str_100210ba);
                }
                else if (iVar45 == 0xb) {
                  if (bVar4) {
                    pcVar47 = (char *)(lVar28 + 0x78);
                    pcVar11 = (char *)0x0;
                  }
                  else {
                    pcVar47 = pcVar11 + 0xf1;
                  }
                  recovered_1001ac60(pcVar47,(long)pcVar11);
                }
                else {
                  if (iVar45 != 0xd || bVar4) goto LAB_10006235;
                  iVar45 = *(int *)(pcVar11 + 0x1f0);
                  if (iVar45 < 0) {
                    iVar45 = *(int *)(lVar28 + 0x25c);
                  }
                  recovered_1001c6c0(iVar45,pcVar11 + 0xf1);
                  recovered_1000cff0(lVar28);
                }
              }
              else {
                recovered_1001c560(1,DAT_100223f4,str_1002108e,str_10021095,pcVar11);
                lVar22 = DAT_10022368;
                uVar38 = DAT_1002231c;
                uVar5 = (uint)local_40;
                uVar44 = local_34;
                if ((long)(int)DAT_1002231c < 0) goto LAB_10006235;
                lVar31 = (long)(int)DAT_1002231c * 0xda8 + DAT_10022368 + 0x78;
                cVar41 = pcVar11[0xf1];
                if (cVar41 == '\0') {
                  uVar10 = 0;
                }
                else {
                  uVar26 = 0;
                  do {
                    uVar10 = uVar26 + 1;
                    *(char *)(lVar31 + uVar26) = cVar41;
                    if (0xef < uVar10) break;
                    cVar41 = pcVar11[uVar26 + 0xf2];
                    uVar26 = uVar10;
                  } while (cVar41 != '\0');
                }
                *(undefined1 *)(lVar31 + uVar10) = 0;
                iVar45 = *(int *)(pcVar11 + 0x1f0);
                if (iVar45 < 0) {
                  if (lVar15 == 0) {
                    iVar45 = recovered_10004540();
                    lVar22 = DAT_10022368;
                    uVar38 = DAT_1002231c;
                  }
                  else {
                    iVar45 = *(int *)(lVar28 + 0x25c);
                  }
                }
                *(int *)(lVar22 + 0x25c + (long)(int)uVar38 * 0xda8) = iVar45;
              }
              break;
            }
            uVar17 = 1;
          }
          else {
            uVar17 = 0;
          }
          recovered_1001c080(lVar28,DAT_100223f8,uVar17);
        }
      }
      break;
    case 0x15:
      recovered_1001e9a0(DAT_100223f4,'\x01');
      break;
    case 0x16:
      recovered_1001ab50(*(int *)(lVar28 + 0x14));
      break;
    default:
      if ((iVar45 != 1) || (DAT_10022418 == '\0')) {
        if ((iVar45 == 1) && (pcVar11 != (char *)0x0)) {
          if (*(int *)(pcVar11 + 0x1ec) == 3) {
            *(undefined4 *)(lVar28 + 0x25c) = *(undefined4 *)(pcVar11 + 0x1f0);
            *(undefined1 *)(lVar28 + 0x260) = 0;
            *(undefined1 *)(lVar28 + 0x78) = 0;
            *(undefined4 *)(lVar28 + 0xb00) = 0;
            recovered_1000cff0(lVar28);
            goto LAB_10006124;
          }
        }
        else {
          if (iVar45 != 1) goto LAB_10008b12;
          if (*(int *)(lVar28 + 0x10) == 0 && pcVar11 == (char *)0x0) {
            recovered_1000c9f0((char *)(lVar28 + 0x78),*(int *)(lVar28 + 0x25c));
            goto LAB_10006124;
          }
        }
        goto LAB_10006235;
      }
      recovered_1001a380((byte *)&DAT_10022418,(long)pcVar11,DAT_10022408);
      break;
    case 0x1b:
      if (*(int *)(lVar28 + 0x10) != 1) goto LAB_10008b12;
      recovered_1001bb70(lVar28,*(undefined4 *)(&DAT_10022644 + uVar26 * 4));
      break;
    case 0x1c:
      if (*(int *)(lVar28 + 0x10) != 6) goto LAB_10008b12;
      terror_ui_window_menu_command(*(uint *)(lVar28 + 0xb24),DAT_10022410,
                         *(uint *)(&DAT_10022644 + uVar26 * 4));
    }
    goto LAB_1000622d;
  }
  switch((uintptr_t)(iVar45)) {
  case 1:
    pbVar27 = (byte *)&DAT_10022418;
    iVar45 = DAT_10022408;
LAB_1000790f:
    recovered_1001a380(pbVar27,0,iVar45);
    break;
  default:
    if (iVar45 == 0x13) {
      recovered_1001bae0(DAT_10022408);
      goto LAB_10006124;
    }
    goto LAB_10006235;
  case 5:
switchD_1000874b_caseD_5:
    if (DAT_1002240d == '\x01') {
      recovered_1001b350(DAT_10022408);
LAB_10006124:
      uVar5 = (uint)local_40;
      uVar44 = local_34;
    }
    goto LAB_10006235;
  case 0xb:
    recovered_1001ac60(&DAT_10022418,0);
    break;
  case 0xe:
switchD_1000874b_caseD_e:
    recovered_1001d450(((uintptr_t)pf_module_state + 0x2387U),0xc,DAT_10022408,DAT_1002240c);
    recovered_1001d610();
    break;
  case 0xf:
switchD_1000874b_caseD_f:
    recovered_1001b640(DAT_10022408);
    break;
  case 0x10:
switchD_1000874b_caseD_10:
    recovered_1001b8d0(DAT_10022408,DAT_1002240c);
    break;
  case 0x11:
switchD_1000874b_caseD_11:
    recovered_1001b9b0(DAT_10022408);
    break;
  case 0x12:
switchD_1000874b_caseD_12:
    recovered_100041c0(&DAT_10022418,DAT_10022408);
    recovered_1001aa70();
    break;
  case 0x17:
switchD_1000874b_caseD_17:
    if (DAT_1002240f == '\x01') {
      recovered_1001b510(DAT_10022408);
      goto LAB_10006124;
    }
    goto LAB_10006235;
  }
LAB_1000622d:
  uVar5 = (uint)local_40;
  uVar44 = local_34;
LAB_10006235:
  local_48 = uVar25 & 2;
  uVar38 = DAT_10022980;
  if ((uVar25 & 2) != 0) {
    if (DAT_1012c4c9 == '\0') {
      if (((uVar44 < 0x18) &&
          (iVar45 = (int)((ulong)DAT_1012c518 >> 0x20),
          (int)uVar5 < (int)DAT_1012c518 + (int)DAT_1012c520 &&
          (iVar45 <= (int)uVar44 && (int)DAT_1012c518 <= (int)uVar5))) &&
         ((int)uVar44 < (int)((ulong)DAT_1012c520 >> 0x20) + iVar45)) {
        memset(&local_158,0,0x18);
        iVar45 = Ram0000000000006800;
        if (((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
           ((uVar5 = Ram0000000000006808, 0xb < uVar5 &&
            (uVar5 = Ram0000000000006808, 0x16b < uVar5)))) {
          uVar5 = UINT_00006968;
          if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_100069dc;
          uVar5 = (*(code *)(ulong)uVar5)(&local_158);
          pcVar11 = pcStack_150;
          if (uVar5 == 0) goto LAB_100069dc;
          memset(&local_468,0,0x1c);
          pcVar47 = (char *)0x0;
          if (0 < (long)(pcVar11 + (long)DAT_10027094 * 0x3c)) {
            pcVar47 = pcVar11 + (long)DAT_10027094 * 0x3c;
          }
          recovered_1001f160((ulong)pcVar47,&local_468);
          local_158 = local_158 & 0xffffffffffffff00;
          if (local_468 == 0) {
            PF_PART1(local_268, 0) = '0';
            uVar10 = 1;
LAB_10008679:
            uVar14 = 4 - uVar10;
            uVar13 = uVar10;
            if (7 < uVar14) {
              if (uVar14 < 0x20) {
                uVar23 = 0;
              }
              else {
                uVar23 = uVar14 & 0xffffffffffffffe0;
                uVar26 = 0;
                do {
                  *(undefined8 *)(local_368 + uVar26 + uVar10 + 0x100) = _DAT_100207f0;
                  *(undefined8 *)(local_368 + uVar26 + uVar10 + 0x100 + 8) = uRam00000000100207f8;
                  *(undefined8 *)(acStack_260 + uVar26 + uVar10 + 8) = _DAT_100207f0;
                  *(undefined8 *)(acStack_260 + uVar26 + uVar10 + 8 + 8) = uRam00000000100207f8;
                  uVar26 = uVar26 + 0x20;
                } while (uVar23 != uVar26);
                uVar26 = 4;
                if (uVar14 == uVar23) goto LAB_100090e6;
                if ((uVar14 & 0x18) == 0) {
                  uVar13 = uVar10 + uVar23;
                  goto LAB_100090d0;
                }
              }
              uVar34 = uVar14 & 0xfffffffffffffff8;
              uVar13 = uVar10 + uVar34;
              do {
                builtin_strncpy(local_368 + uVar23 + uVar10 + 0x100,"00000000",8);
                uVar23 = uVar23 + 8;
              } while (uVar34 != uVar23);
              uVar26 = 4;
              if (uVar14 == uVar34) goto LAB_100090e6;
            }
LAB_100090d0:
            do {
              local_368[uVar13 + 0x100] = '0';
              uVar13 = uVar13 + 1;
            } while (uVar13 != 4);
            uVar26 = 4;
          }
          else {
            uVar26 = 0;
            uVar5 = local_468;
            do {
              uVar13 = uVar26;
              local_368[uVar13 + 0x100] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
              uVar26 = uVar13 + 1;
              if (10 < uVar13) break;
              bVar4 = 9 < uVar5;
              uVar5 = uVar5 / 10;
            } while (bVar4);
            uVar10 = uVar26;
            if (uVar13 < 3) goto LAB_10008679;
          }
LAB_100090e6:
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          uVar10 = strlen((char *)&local_158);
          if (uVar10 < 0x20) {
            lVar15 = 0x1f;
            if (uVar10 != 0x1f) {
              lVar15 = uVar10 + 1;
              *(undefined1 *)((long)&local_158 + uVar10) = 0x2d;
            }
            *(undefined1 *)((long)&local_158 + lVar15) = 0;
          }
          if (local_464 == 0) {
            PF_PART1(local_268, 0) = '0';
LAB_100091e6:
            PF_PART1(local_268, 1) = 0x30;
            uVar26 = 2;
          }
          else {
            uVar10 = 0;
            do {
              local_368[uVar10 + 0x100] = (char)local_464 + (char)(local_464 / 10) * -10 | 0x30;
              uVar26 = uVar10 + 1;
              if (10 < uVar10) break;
              bVar4 = 9 < local_464;
              uVar10 = uVar26;
              local_464 = local_464 / 10;
            } while (bVar4);
            if (uVar26 == 1) goto LAB_100091e6;
          }
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          uVar10 = strlen((char *)&local_158);
          if (uVar10 < 0x20) {
            lVar15 = 0x1f;
            if (uVar10 != 0x1f) {
              lVar15 = uVar10 + 1;
              *(undefined1 *)((long)&local_158 + uVar10) = 0x2d;
            }
            *(undefined1 *)((long)&local_158 + lVar15) = 0;
          }
          if (local_460 == 0) {
            PF_PART1(local_268, 0) = '0';
LAB_100092f6:
            PF_PART1(local_268, 1) = 0x30;
            uVar26 = 2;
          }
          else {
            uVar10 = 0;
            do {
              local_368[uVar10 + 0x100] = (char)local_460 + (char)(local_460 / 10) * -10 | 0x30;
              uVar26 = uVar10 + 1;
              if (10 < uVar10) break;
              bVar4 = 9 < local_460;
              uVar10 = uVar26;
              local_460 = local_460 / 10;
            } while (bVar4);
            if (uVar26 == 1) goto LAB_100092f6;
          }
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          uVar10 = strlen((char *)&local_158);
          if (uVar10 < 0x20) {
            lVar15 = 0x1f;
            if (uVar10 != 0x1f) {
              lVar15 = uVar10 + 1;
              *(undefined1 *)((long)&local_158 + uVar10) = 0x20;
            }
            *(undefined1 *)((long)&local_158 + lVar15) = 0;
          }
          if (local_45c == 0) {
            PF_PART1(local_268, 0) = '0';
LAB_10009406:
            PF_PART1(local_268, 1) = 0x30;
            uVar26 = 2;
          }
          else {
            uVar10 = 0;
            do {
              local_368[uVar10 + 0x100] = (char)local_45c + (char)(local_45c / 10) * -10 | 0x30;
              uVar26 = uVar10 + 1;
              if (10 < uVar10) break;
              bVar4 = 9 < local_45c;
              uVar10 = uVar26;
              local_45c = local_45c / 10;
            } while (bVar4);
            if (uVar26 == 1) goto LAB_10009406;
          }
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          uVar10 = strlen((char *)&local_158);
          if (uVar10 < 0x20) {
            lVar15 = 0x1f;
            if (uVar10 != 0x1f) {
              lVar15 = uVar10 + 1;
              *(undefined1 *)((long)&local_158 + uVar10) = 0x3a;
            }
            *(undefined1 *)((long)&local_158 + lVar15) = 0;
          }
          if (local_458 == 0) {
            PF_PART1(local_268, 0) = '0';
LAB_10009516:
            PF_PART1(local_268, 1) = 0x30;
            uVar26 = 2;
          }
          else {
            uVar10 = 0;
            do {
              local_368[uVar10 + 0x100] = (char)local_458 + (char)(local_458 / 10) * -10 | 0x30;
              uVar26 = uVar10 + 1;
              if (10 < uVar10) break;
              bVar4 = 9 < local_458;
              uVar10 = uVar26;
              local_458 = local_458 / 10;
            } while (bVar4);
            if (uVar26 == 1) goto LAB_10009516;
          }
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          uVar10 = strlen((char *)&local_158);
          if (uVar10 < 0x20) {
            lVar15 = 0x1f;
            if (uVar10 != 0x1f) {
              lVar15 = uVar10 + 1;
              *(undefined1 *)((long)&local_158 + uVar10) = 0x3a;
            }
            *(undefined1 *)((long)&local_158 + lVar15) = 0;
          }
          if (local_454 == 0) {
            PF_PART1(local_268, 0) = '0';
LAB_10009626:
            PF_PART1(local_268, 1) = 0x30;
            uVar26 = 2;
          }
          else {
            uVar10 = 0;
            do {
              local_368[uVar10 + 0x100] = (char)local_454 + (char)(local_454 / 10) * -10 | 0x30;
              uVar26 = uVar10 + 1;
              if (10 < uVar10) break;
              bVar4 = 9 < local_454;
              uVar10 = uVar26;
              local_454 = local_454 / 10;
            } while (bVar4);
            if (uVar26 == 1) goto LAB_10009626;
          }
          do {
            cVar41 = local_368[uVar26 + 0xff];
            local_368[1] = 0;
            uVar10 = strlen((char *)&local_158);
            if (uVar10 < 0x20) {
              if (uVar10 != 0x1f && cVar41 != '\0') {
                uVar13 = uVar10;
                pcVar11 = local_368;
                do {
                  pcVar11 = pcVar11 + 1;
                  *(char *)((long)&local_158 + uVar13) = cVar41;
                  uVar10 = uVar13 + 1;
                  if (0x1d < uVar13) break;
                  cVar41 = *pcVar11;
                  uVar13 = uVar10;
                } while (cVar41 != '\0');
              }
              *(undefined1 *)((long)&local_158 + uVar10) = 0;
            }
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        else {
LAB_100069dc:
          local_158 = _DAT_10020800;
          pcStack_150 = pcRam0000000010020808;
          local_148 = CONCAT44(PF_PART4(local_148, 4),0x30303a);
        }
        recovered_1001c560(4,0xffffffff,str_10021181,str_10021191,(char *)&local_158);
LAB_10006a1a:
        uVar44 = local_34;
        uVar5 = (uint)local_40;
        uVar38 = DAT_10022980;
      }
      else {
        uVar10 = recovered_100191f0(uVar5,uVar44);
        uVar44 = local_34;
        uVar25 = (uint)uVar10;
        uVar5 = (uint)local_40;
        uVar38 = DAT_10022980;
        if ((int)uVar25 < 0) {
          if (0 < (long)(int)DAT_10027194) {
            uVar10 = (long)(int)DAT_10027194 + 1;
            do {
              uVar25 = *(uint *)(DAT_10022990 + -8 + uVar10 * 4);
              lVar15 = (long)(int)uVar25 * 0xda8;
              if ((*(char *)(DAT_10022368 + lVar15) == '\x01') &&
                 (lVar28 = DAT_10022368 + lVar15, *(char *)(lVar28 + 1) == '\x01')) {
                iVar45 = 0x18;
                if (*(char *)(lVar28 + 2) == '\0') {
                  iVar45 = *(int *)(lVar28 + 100);
                }
                iVar36 = (int)*(undefined8 *)(lVar28 + 0x58);
                if ((((iVar36 <= (int)(uint)local_40) &&
                     (iVar42 = (int)((ulong)*(undefined8 *)(lVar28 + 0x58) >> 0x20),
                     iVar42 <= (int)local_34)) &&
                    ((int)(uint)local_40 < *(int *)(lVar28 + 0x60) + iVar36)) &&
                   ((int)local_34 < iVar45 + iVar42)) {
                  if (-1 < (int)uVar25) {
                    if (*(int *)(DAT_10022368 + 0x10 + lVar15) != 0) goto LAB_10006a22;
                    lVar15 = 0;
                    pbVar27 = &DAT_10022ac0;
                    iVar45 = 0;
                    goto LAB_10006e12;
                  }
                  break;
                }
              }
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          iVar45 = (DAT_10022170 + -0x18) / 0x52;
          uVar25 = DAT_10022170 + -0x18 >> 0x1f;
          iVar36 = 1;
          if (1 < iVar45) {
            iVar36 = iVar45;
          }
          lVar15 = 0;
          uVar10 = 0;
          uVar25 = -uVar25 ^ uVar25 >> 0x1f;
LAB_100065f9:
          if ((&DAT_10023750)[lVar15] != '\x01') goto LAB_100065e2;
          iVar45 = ((int)uVar25 % iVar36) * 0x52;
          if (((((int)(uint)local_40 < iVar45 + 0xc) ||
               (iVar42 = ((int)uVar25 / iVar36) * 0x4e, (int)local_34 < iVar42 + 0x24)) ||
              (iVar45 + 0x56 <= (int)(uint)local_40)) || (iVar42 + 0x66 <= (int)local_34)) {
            uVar25 = uVar25 + 1;
            goto LAB_100065e2;
          }
          if (uVar10 < 0x18) {
            local_60 = &DAT_10023750 + lVar15;
            memset(&DAT_100223e8,0,0x59c);
            DAT_100223e8 = '\x01';
            _DAT_100223ec = CONCAT44(uVar44,uVar5);
            DAT_100223f4 = 0xffffffff;
            DAT_100223f8 = 0xffffffff;
            DAT_100223fc = 0xffffffff;
            _DAT_10022400 = 0xffffffff;
            _DAT_10022404 = (undefined4)uVar10;
            pbVar48 = &DAT_10023779 + lVar15;
            pbVar33 = &DAT_10023751 + lVar15;
            uVar29 = *(undefined4 *)((long)&DAT_1002386c + lVar15);
            bVar24 = recovered_10010d70((long)local_60);
            uVar25 = 0xffffffff;
LAB_100066b7:
            recovered_1001e110(uVar25,0xfffffc18,pbVar48,pbVar33,uVar29,(uint)bVar24);
            if ((long)(int)DAT_10022980 < 0x12) {
              *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 1;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              lVar15 = (long)(int)DAT_10022980;
              *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6e65704f;
              (&DAT_10022690)[lVar15 * 0x2a] = 0;
              lVar15 = (long)(int)DAT_10022980;
              DAT_10022980 = DAT_10022980 + 1;
              if (lVar15 < 0x11) {
                *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0xb;
                *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
                lVar15 = (long)(int)DAT_10022980;
                *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6f666e49;
                (&DAT_10022690)[lVar15 * 0x2a] = 0;
                DAT_10022980 = DAT_10022980 + 1;
              }
            }
            recovered_1001da00();
            if ((DAT_1002240d == '\x01') && ((long)(int)DAT_10022980 < 0x12)) {
              *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 5;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              lVar15 = (long)(int)DAT_10022980 * 0x2a;
              *(undefined8 *)(&DAT_1002268c + lVar15) = 0x6b63614220746553;
              *(undefined4 *)(&DAT_10022694 + lVar15) = 0x756f7267;
              *(undefined2 *)(&DAT_10022698 + lVar15) = 0x646e;
              (&DAT_1002269a)[lVar15] = 0;
              DAT_10022980 = DAT_10022980 + 1;
            }
            uVar5 = (uint)local_40;
            uVar44 = local_34;
            uVar38 = DAT_10022980;
            if (DAT_1002240f == '\x01') {
              if (0x11 < (long)(int)DAT_10022980) goto LAB_10006a22;
              *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 0x17;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              uVar9 = uRam00000000100207d8;
              lVar15 = (long)(int)DAT_10022980 * 0x2a;
              *(undefined8 *)(&DAT_1002268c + lVar15) = _DAT_100207d0;
              *(undefined8 *)(&DAT_10022694 + lVar15) = uVar9;
              (&DAT_1002269c)[lVar15] = 0;
              goto LAB_100069d4;
            }
          }
          goto LAB_10006a22;
        }
        if ((uVar25 < 0x12) &&
           (lVar15 = (uVar10 & 0xffffffff) * 300, *(char *)(DAT_10022988 + lVar15) == '\x01')) {
          memset(&DAT_100223e8,0,0x59c);
          DAT_100223e8 = '\x01';
          uVar5 = (uint)local_40;
          _DAT_100223ec = CONCAT44(local_34,uVar5);
          DAT_100223f4 = 0xffffffff;
          DAT_100223f8 = 0xffffffff;
          _DAT_10022400 = 0xffffffff;
          _DAT_10022404 = 0xffffffff;
          uVar10 = (ulong)(int)DAT_10022980;
          DAT_100223fc = uVar25;
          if ((long)uVar10 < 0x12) {
            *(undefined4 *)(&DAT_100225fc + uVar10 * 4) = 2;
            *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
            lVar28 = (long)(int)DAT_10022980 * 0x2a;
            *(undefined8 *)(&DAT_1002268c + lVar28) = 0x646e69572077654e;
            *(undefined2 *)(&DAT_10022694 + lVar28) = 0x776f;
            (&DAT_10022696)[lVar28] = 0;
            DAT_10022980 = DAT_10022980 + 1;
            uVar10 = (ulong)DAT_10022980;
          }
          lVar22 = DAT_10022368;
          lVar28 = DAT_10022368 + 0x19;
          lVar31 = 0;
          do {
            if (((*(char *)(lVar22 + lVar31 * 0xda8) == '\x01') &&
                (lVar40 = lVar31 * 0xda8 + lVar22, *(uint *)(lVar40 + 0x14) == uVar25)) &&
               ((int)uVar10 < 0x12)) {
              *(undefined4 *)(&DAT_100225fc + (long)(int)uVar10 * 4) = 3;
              *(int *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = (int)lVar31;
              uVar44 = DAT_10022980;
              cVar41 = *(char *)(lVar40 + 0x18);
              if (cVar41 == '\0') {
                uVar10 = 0;
              }
              else {
                uVar26 = 0;
                do {
                  uVar10 = uVar26 + 1;
                  (&DAT_1002268c)[uVar26 + (long)(int)uVar44 * 0x2a] = cVar41;
                  if (0x28 < uVar10) break;
                  cVar41 = *(char *)(lVar28 + uVar26);
                  uVar26 = uVar10;
                } while (cVar41 != '\0');
              }
              (&DAT_1002268c)[uVar10 + (long)(int)uVar44 * 0x2a] = 0;
              DAT_10022980 = DAT_10022980 + 1;
              uVar10 = (ulong)DAT_10022980;
            }
            lVar31 = lVar31 + 1;
            lVar28 = lVar28 + 0xda8;
          } while (lVar31 != 0x14);
          uVar44 = local_34;
          uVar38 = DAT_10022980;
          if ((int)uVar10 < 0x12) {
            *(undefined4 *)(&DAT_100225fc + (long)(int)uVar10 * 4) = 4;
            *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
            lVar28 = (long)(int)DAT_10022980 * 0x2a;
            *(undefined8 *)(&DAT_1002268c + lVar28) = 0x6e6957206c6c694b;
            *(undefined4 *)(&DAT_10022694 + lVar28) = 0x73776f64;
            (&DAT_10022698)[lVar28] = 0;
            uVar38 = DAT_10022980 + 1;
            if ((int)DAT_10022980 < 0x11 && *(int *)(DAT_10022988 + 4 + lVar15) == 5) {
              lVar15 = (long)(int)DAT_10022980;
              DAT_10022980 = DAT_10022980 + 1;
              *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0x13;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              uVar9 = uRam00000000100207e8;
              lVar15 = (long)(int)DAT_10022980 * 0x2a;
              *(undefined8 *)(&DAT_1002268c + lVar15) = _DAT_100207e0;
              *(undefined8 *)(&DAT_10022694 + lVar15) = uVar9;
              (&DAT_1002269c)[lVar15] = 0;
LAB_100069d4:
              DAT_10022980 = DAT_10022980 + 1;
              uVar44 = local_34;
              uVar38 = DAT_10022980;
            }
          }
        }
      }
    }
  }
LAB_10006a22:
  DAT_10022980 = uVar38;
  uVar38 = local_44;
  lVar15 = DAT_10022368;
  uVar25 = DAT_10022180;
  bVar24 = (byte)local_44;
  if ((-1 < (int)DAT_10022180 & bVar24) == 1) {
    if (((DAT_10022368 != 0) &&
        (pcVar11 = (char *)(DAT_10022368 + (ulong)DAT_10022180 * 0xda8), *pcVar11 == '\x01')) &&
       ((pcVar11[2] == '\0' && (pcVar11[3] == '\0')))) {
      uVar10 = (ulong)*(uint *)(pcVar11 + 0x10);
      if (uVar10 < 7) {
        iVar45 = *(int *)(&DAT_100209a0 + uVar10 * 4);
        iVar36 = *(int *)(&DAT_100209bc + uVar10 * 4);
      }
      else {
        iVar36 = 0x6e;
        iVar45 = 0xb4;
      }
      DAT_1012c4c0 = (DAT_10022170 - *(int *)(pcVar11 + 0x58)) + -4;
      iVar42 = -0x42;
      if (*(uint *)(pcVar11 + 0x10) == 6) {
        iVar42 = -4;
      }
      DAT_1012c4c4 = (iVar42 + DAT_10022174) - *(int *)(pcVar11 + 0x5c);
      if (DAT_1012c4c0 <= iVar45) {
        DAT_1012c4c0 = iVar45;
      }
      if (DAT_1012c4c4 <= iVar36) {
        DAT_1012c4c4 = iVar36;
      }
      iVar42 = (uVar5 - *(int *)(pcVar11 + 0x58)) + 1;
      if (iVar42 < DAT_1012c4c0) {
        DAT_1012c4c0 = iVar42;
      }
      if (iVar42 < iVar45) {
        DAT_1012c4c0 = iVar45;
      }
      iVar45 = (uVar44 - *(int *)(pcVar11 + 0x5c)) + 1;
      if (iVar45 < DAT_1012c4c4) {
        DAT_1012c4c4 = iVar45;
      }
      if (iVar45 < iVar36) {
        DAT_1012c4c4 = iVar36;
      }
    }
  }
  else {
    if ((-1 < (int)DAT_10022178 & bVar24) == 1) {
      lVar28 = (ulong)DAT_10022178 * 0xda8;
      iVar45 = -0x5a;
      if (*(int *)(DAT_10022368 + 0x10 + lVar28) == 6) {
        iVar45 = -0x1c;
      }
      iVar45 = iVar45 + DAT_10022174;
      iVar42 = uVar5 - _DAT_1012c4fc;
      iVar36 = (DAT_10022170 - *(int *)(DAT_10022368 + 0x60 + lVar28)) + -4;
      if (iVar42 < iVar36) {
        iVar36 = iVar42;
      }
      iVar18 = 4;
      if (3 < iVar42) {
        iVar18 = iVar36;
      }
      *(int *)(DAT_10022368 + 0x58 + lVar28) = iVar18;
      iVar36 = uVar44 - _DAT_1012c500;
      if (iVar36 < iVar45) {
        iVar45 = iVar36;
      }
      iVar42 = 0x1a;
      if (0x19 < iVar36) {
        iVar42 = iVar45;
      }
      *(int *)(lVar15 + 0x5c + lVar28) = iVar42;
    }
    bVar24 = (int)uVar25 < 0 & bVar24;
    if ((-1 < (int)DAT_10022324 & bVar24) == 1) {
      if (*(char *)(DAT_10022368 + (ulong)DAT_10022324 * 0xda8) != '\x01') goto LAB_10006c7d;
      lVar15 = DAT_10022368 + (ulong)DAT_10022324 * 0xda8;
      if (*(int *)(lVar15 + 0x10) == 0) {
        iVar45 = *(int *)(lVar15 + 100);
        iVar36 = 0x12;
        if (0x15 < iVar45 + -0x84) {
          iVar36 = iVar45 + -0x88;
        }
        iVar42 = iVar45 + -0x6a;
        iVar18 = (int)((ulong)((long)iVar42 * -0x22983759) >> 0x20) + iVar45 + -0x6a;
        iVar19 = (iVar18 >> 6) - (iVar18 >> 0x1f);
        iVar18 = *(int *)(lVar15 + 0x60) +
                 (int)((ulong)((long)(*(int *)(lVar15 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
                 -0x26;
        iVar18 = (iVar18 >> 6) - (iVar18 >> 0x1f);
        if (iVar18 < 2) {
          iVar18 = 1;
        }
        iVar45 = ((int)((ulong)((long)iVar42 * 0x22983759) >> 0x20) - iVar45) + 0x6a;
        if (iVar42 < 0x4a) {
          iVar19 = 1;
        }
        iVar2 = *(int *)(lVar15 + 0xaf8);
        iVar30 = -1;
        if (0x49 < iVar42) {
          iVar30 = (iVar45 >> 6) - (iVar45 >> 0x1f);
        }
        iVar42 = iVar30 * iVar18 + iVar2 + 2;
        iVar45 = iVar36;
        if (-2 < iVar2) {
          if ((iVar18 * iVar19 < iVar2 + 2) && (0 < iVar42)) {
            iVar18 = (iVar18 * iVar19 * iVar36) / (iVar2 + 2);
            iVar45 = 0x12;
            if (0x12 < iVar18) {
              iVar45 = iVar18;
            }
            if (iVar36 <= iVar45) {
              iVar45 = iVar36;
            }
          }
        }
        if ((iVar42 < 1) || (iVar36 - iVar45 < 1)) {
LAB_10006eb6:
          *(undefined4 *)(lVar15 + 0xb00) = 0;
        }
        else {
          iVar36 = (int)((uVar44 - _DAT_1012c50c) * iVar42) / (iVar36 - iVar45) + _DAT_1012c510;
          iVar45 = 0;
          if (0 < iVar36) {
            iVar45 = iVar36;
          }
          if (iVar42 < iVar36) {
            iVar45 = iVar42;
          }
          *(int *)(lVar15 + 0xb00) = iVar45;
        }
      }
      else {
        if ((*(int *)(lVar15 + 0x10) != 3) || (*(int *)(lVar15 + 0xb08) != 1)) goto LAB_10006c7d;
        iVar45 = *(int *)(lVar15 + 0x5c);
        iVar42 = *(int *)(lVar15 + 100) + iVar45 + -0x92;
        iVar36 = iVar45 + 0x114;
        if (iVar45 + 0x114 < iVar42) {
          iVar36 = iVar42;
        }
        iVar36 = iVar36 - iVar45;
        uVar5 = (iVar36 - 0x102U) / 0x12;
        if (uVar5 < 2) {
          uVar5 = 1;
        }
        iVar45 = -0x19;
        if (iVar36 + -0xee < 0x26) {
          uVar5 = 1;
        }
        else {
          iVar45 = iVar36 + -0x12d;
        }
        iVar36 = 0x12;
        if (0x13 < iVar45) {
          iVar36 = iVar45 + -2;
        }
        auVar49 = recovered_10017700(lVar15);
        uVar25 = DAT_1002719c;
        uVar43 = DAT_1002719c - uVar5;
        if (DAT_1002719c < uVar5) {
          uVar43 = 0;
        }
        uVar5 = (uint)local_40;
        uVar44 = local_34;
        if (((int)uVar43 < 1) || (iVar36 = iVar36 - PF_PART4(auVar49, 12), iVar36 < 1)) {
          *(undefined4 *)(lVar15 + 0xb00) = 0;
        }
        else {
          uVar6 = (int)((local_34 - _DAT_1012c50c) * uVar43) / iVar36 + _DAT_1012c510;
          *(uint *)(lVar15 + 0xb00) = uVar6;
          if (uVar25 == 0) {
            *(undefined8 *)(lVar15 + 0xafc) = 0;
            *(undefined1 *)(lVar15 + 0xb04) = 0;
          }
          else {
            if ((*(char *)(lVar15 + 0xb04) != '\x01') || (uVar25 <= *(uint *)(lVar15 + 0xafc))) {
              *(undefined4 *)(lVar15 + 0xafc) = 0;
              *(undefined1 *)(lVar15 + 0xb04) = 1;
            }
            if ((int)uVar6 < 0) goto LAB_10006eb6;
            if (uVar6 <= uVar43) goto LAB_10006c7d;
            *(uint *)(lVar15 + 0xb00) = uVar43;
          }
        }
      }
    }
    else {
LAB_10006c7d:
      if (bVar24 == 0) goto LAB_10006f3c;
    }
    if (((DAT_1002549c == '\x01') && (DAT_1002549d == '\0')) &&
       (0x24 < (uVar44 - DAT_100254ac) * (uVar44 - DAT_100254ac) +
               (uVar5 - DAT_100254a8) * (uVar5 - DAT_100254a8))) {
      _DAT_1002549c = 0x101;
    }
  }
LAB_10006f3c:
  lVar15 = DAT_10022368;
  puVar8 = (undefined1 *)(long)(int)DAT_1002231c;
  if ((long)puVar8 < 0) goto LAB_10007cbe;
  lVar28 = (long)puVar8 * 0xda8;
  if (*(char *)(DAT_10022368 + lVar28) != '\x01') goto switchD_10007259_default;
  uVar10 = DAT_10022368 + lVar28;
  if (*(int *)(uVar10 + 0x10) != 4) goto switchD_10007259_default;
  uVar5 = DAT_1012c4cc;
  if ((((((((int)DAT_1012c4cc < 0x20) && (uVar5 = 0x61, DAT_1012c4d2 == '\0')) &&
         ((uVar5 = 0x62, DAT_1012c4d3 == '\0' &&
          ((uVar5 = 99, DAT_1012c4d4 == '\0' && (uVar5 = 100, DAT_1012c4d5 == '\0')))))) &&
        (uVar5 = 0x65, DAT_1012c4d6 == '\0')) &&
       ((((((((uVar5 = 0x66, DAT_1012c4d7 == '\0' && (uVar5 = 0x67, DAT_1012c4d8 == '\0')) &&
             (uVar5 = 0x68, DAT_1012c4d9 == '\0')) &&
            ((uVar5 = 0x69, DAT_1012c4da == '\0' && (uVar5 = 0x6a, DAT_1012c4db == '\0')))) &&
           (uVar5 = 0x6b, DAT_1012c4dc == '\0')) &&
          ((uVar5 = 0x6c, DAT_1012c4dd == '\0' && (uVar5 = 0x6d, DAT_1012c4de == '\0')))) &&
         ((uVar5 = 0x6e, DAT_1012c4df == '\0' &&
          (((uVar5 = 0x6f, DAT_1012c4e0 == '\0' && (uVar5 = 0x70, DAT_1012c4e1 == '\0')) &&
           (uVar5 = 0x71, DAT_1012c4e2 == '\0')))))) &&
        ((uVar5 = 0x72, DAT_1012c4e3 == '\0' && (uVar5 = 0x73, DAT_1012c4e4 == '\0')))))) &&
      (((uVar5 = 0x74, DAT_1012c4e5 == '\0' &&
        (((uVar5 = 0x75, DAT_1012c4e6 == '\0' && (uVar5 = 0x76, DAT_1012c4e7 == '\0')) &&
         ((uVar5 = 0x77, DAT_1012c4e8 == '\0' &&
          (((uVar5 = 0x78, DAT_1012c4e9 == '\0' && (uVar5 = 0x79, DAT_1012c4ea == '\0')) &&
           (uVar5 = 0x7a, DAT_1012c4eb == '\0')))))))) &&
       (((uVar5 = 0x30, DAT_1012c4ec == '\0' && (uVar5 = 0x31, DAT_1012c4ed == '\0')) &&
        (uVar5 = 0x32, DAT_1012c4ee == '\0')))))) &&
     ((((uVar5 = 0x33, DAT_1012c4ef == '\0' && (uVar5 = 0x34, DAT_1012c4f0 == '\0')) &&
       ((uVar5 = 0x35, DAT_1012c4f1 == '\0' &&
        ((((uVar5 = 0x36, DAT_1012c4f2 == '\0' && (uVar5 = 0x37, DAT_1012c4f3 == '\0')) &&
          (uVar5 = 0x38, DAT_1012c4f4 == '\0')) &&
         ((uVar5 = 0x39, DAT_1012c4f5 == '\0' && (uVar5 = 0x2d, DAT_1012c4f6 == '\0')))))))) &&
      (uVar5 = 0x2e, DAT_1012c4f7 == '\0')))) {
    uVar5 = (uint)(byte)(DAT_1012c4f8 << 5);
  }
  local_60 = puVar8;
  if (DAT_1012c4d0 == '\x01') {
    uVar26 = strlen((char *)(uVar10 + 0xa61));
    if (uVar26 != 0) {
      ((char *)(uVar10 + 0xa61))[uVar26 - 1] = '\0';
    }
  }
  if ((char)uVar5 != '\0') {
    uVar26 = strlen((char *)(uVar10 + 0xa61));
    if (uVar26 + 1 < 0x80) {
      ((char *)(uVar10 + 0xa61))[uVar26] = (char)uVar5;
      *(undefined1 *)(uVar10 + 0xa62 + uVar26) = 0;
    }
  }
  uVar38 = local_44;
  puVar8 = local_60;
  if (DAT_1012c4d1 != '\x01') goto switchD_10007259_default;
  switch((uintptr_t)(*(undefined4 *)(uVar10 + 0xae4))) {
  case 1:
    cVar41 = *(char *)(uVar10 + 0x78);
    if (cVar41 == '\0') {
      uVar26 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar26 = uVar13 + 1;
        local_368[uVar13 + 0x100] = cVar41;
        if (0xef < uVar26) break;
        cVar41 = *(char *)(lVar28 + lVar15 + 0x79 + uVar13);
        uVar13 = uVar26;
      } while (cVar41 != '\0');
    }
    local_368[uVar26 + 0x100] = '\0';
    if ((char)local_268 == '\0') {
      uVar26 = 0;
    }
    else {
      uVar13 = 0;
      cVar41 = (char)local_268;
      do {
        uVar26 = uVar13 + 1;
        *(char *)((long)&local_158 + uVar13) = cVar41;
        if (0xef < uVar26) break;
        cVar41 = local_368[uVar13 + 0x101];
        uVar13 = uVar26;
      } while (cVar41 != '\0');
    }
    *(undefined1 *)((long)&local_158 + uVar26) = 0;
    pcVar11 = local_368;
    if ((char)local_158 != '\0') {
      puVar39 = &local_158;
      puVar21 = (undefined8 *)0x0;
      cVar41 = (char)local_158;
      do {
        if (cVar41 == '/') {
          puVar21 = puVar39;
        }
        cVar41 = *(char *)((long)puVar39 + 1);
        puVar39 = (undefined8 *)((long)puVar39 + 1);
      } while (cVar41 != '\0');
      if (puVar21 != (undefined8 *)0x0) {
        *(undefined1 *)puVar21 = 0;
        if ((char)local_158 == '\0') {
          uVar26 = 0;
        }
        else {
          uVar13 = 0;
          cVar41 = (char)local_158;
          do {
            uVar26 = uVar13 + 1;
            local_368[uVar13] = cVar41;
            if (0xef < uVar26) break;
            cVar41 = *(char *)((long)&local_158 + uVar13 + 1);
            uVar13 = uVar26;
          } while (cVar41 != '\0');
        }
        pcVar11 = local_368 + uVar26;
      }
    }
    *pcVar11 = '\0';
    pcVar11 = (char *)(uVar10 + 0xa61);
    local_50 = uVar10;
    recovered_10011a00(local_368,pcVar11,(char *)&local_468);
    if ((char)local_268 == '\0') {
      puVar39 = (undefined8 *)0x0;
    }
    else {
      puVar21 = &local_268;
      puVar39 = (undefined8 *)0x0;
      cVar41 = (char)local_268;
      do {
        if (cVar41 == '/') {
          puVar39 = puVar21;
        }
        cVar41 = *(char *)((long)puVar21 + 1);
        puVar21 = (undefined8 *)((long)puVar21 + 1);
      } while (cVar41 != '\0');
    }
    pcVar47 = (char *)&local_268;
    if (puVar39 != (undefined8 *)0x0) {
      pcVar47 = (char *)((long)puVar39 + 1);
    }
    cVar41 = *pcVar47;
    if (cVar41 == '\0') {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)0x0;
      pcVar32 = pcVar47;
      do {
        if (cVar41 == '/') {
          pcVar12 = pcVar32;
        }
        cVar41 = pcVar32[1];
        pcVar32 = pcVar32 + 1;
      } while (cVar41 != '\0');
    }
    pcVar32 = pcVar12 + 1;
    if (pcVar12 == (char *)0x0) {
      pcVar32 = pcVar47;
    }
    pcVar47 = (char *)0x0;
    cVar41 = *pcVar32;
    while (cVar41 != '\0') {
      if (cVar41 == '.') {
        pcVar47 = pcVar32;
      }
      pcVar12 = pcVar32 + 1;
      pcVar32 = pcVar32 + 1;
      cVar41 = *pcVar12;
    }
    if (pcVar47 == (char *)0x0) {
      pcVar47 = &DAT_10020a84;
    }
    cVar41 = *pcVar11;
    pcVar12 = (char *)0x0;
    if (cVar41 != '\0') {
      pcVar32 = pcVar11;
      do {
        if (cVar41 == '/') {
          pcVar12 = pcVar32;
        }
        cVar41 = pcVar32[1];
        pcVar32 = pcVar32 + 1;
      } while (cVar41 != '\0');
    }
    pcVar32 = pcVar12 + 1;
    if (pcVar12 == (char *)0x0) {
      pcVar32 = pcVar11;
    }
    pcVar11 = (char *)0x0;
    cVar41 = *pcVar32;
    while (cVar41 != '\0') {
      if (cVar41 == '.') {
        pcVar11 = pcVar32;
      }
      pcVar12 = pcVar32 + 1;
      pcVar32 = pcVar32 + 1;
      cVar41 = *pcVar12;
    }
    pcVar12 = &DAT_10020a84;
    if (pcVar11 != (char *)0x0) {
      pcVar12 = pcVar11;
    }
    lVar22 = 0;
    do {
      bVar24 = pcVar47[lVar22];
      bVar16 = pcVar12[lVar22];
      if ((bVar24 == 0) || (bVar16 == 0)) {
        if (bVar24 == bVar16) {
          iVar45 = Ram0000000000006800;
          if (((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
             ((uVar5 = Ram0000000000006808, 0xb < uVar5 &&
              (uVar5 = Ram0000000000006808, 0xdb < uVar5)))) {
            uVar5 = UINT_000068d8;
            if ((code *)(ulong)uVar5 != (code *)0x0) {
              (*(code *)(ulong)uVar5)
                        (*(int *)(local_50 + 0x25c),(char *)&local_268,(char *)&local_468);
            }
          }
          else {
            iVar45 = Ram0000000000006800;
            if ((((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
                (uVar5 = Ram0000000000006808, 0xb < uVar5)) &&
               (uVar5 = Ram0000000000006808, 0x8b < uVar5)) {
              uVar5 = UINT_00006888;
              if ((code *)(ulong)uVar5 != (code *)0x0) {
                (*(code *)(ulong)uVar5)((char *)&local_268,(char *)&local_468);
              }
            }
          }
          iVar45 = *(int *)(local_50 + 0xae8);
          goto LAB_10007c3f;
        }
        break;
      }
      bVar35 = bVar24 | 0x20;
      if (0x19 < (byte)(bVar24 + 0xbf)) {
        bVar35 = bVar24;
      }
      bVar24 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar24 = bVar16;
      }
      lVar22 = lVar22 + 1;
    } while (bVar35 == bVar24);
    if ((char)local_468 == '\0') {
      uVar10 = 0;
    }
    else {
      uVar26 = 0;
      do {
        uVar10 = uVar26 + 1;
        *(char *)(local_50 + 0x169 + uVar26) = (char)local_468;
        if (0xef < uVar10) break;
        PF_PART1(local_468, 0) = *(char *)((long)&local_468 + uVar26 + 1);
        uVar26 = uVar10;
      } while ((char)local_468 != '\0');
    }
    *(undefined1 *)(local_50 + 0x169 + uVar10) = 0;
    *(undefined4 *)(local_50 + 0xae4) = 3;
    lVar28 = lVar28 + lVar15;
    cVar41 = 'E';
    lVar15 = 0;
    while( true ) {
      *(char *)(lVar28 + 0x261 + lVar15) = cVar41;
      *(undefined2 *)(lVar28 + 0x262 + lVar15) = *(undefined2 *)(str_100211a5 + lVar15 + 1);
      if (lVar15 == 0x28) break;
      cVar41 = str_100211a5[lVar15 + 4];
      *(char *)(lVar28 + 0x264 + lVar15) = str_100211a5[lVar15 + 3];
      lVar15 = lVar15 + 4;
    }
    *(undefined1 *)(local_50 + 0x28c) = 0;
    break;
  case 2:
    if ((-1 < (long)*(int *)(uVar10 + 0xae8)) &&
       (lVar15 = (long)*(int *)(uVar10 + 0xae8) * 0xda8, *(char *)(DAT_10022368 + lVar15) == '\x01')
       ) {
      recovered_10011a00((char *)(DAT_10022368 + lVar15 + 0x78),(char *)(uVar10 + 0xa61),
                         (char *)&local_158);
      iVar45 = Ram0000000000006800;
      if (((iVar45 == 0x50414d57) &&
          ((iVar45 = Ram0000000000006804, iVar45 != 0 && (uVar5 = Ram0000000000006808, 0xb < uVar5))
          )) && (uVar5 = Ram0000000000006808, 0xdf < uVar5)) {
        uVar5 = UINT_000068dc;
        if ((code *)(ulong)uVar5 != (code *)0x0) {
          (*(code *)(ulong)uVar5)
                    (*(int *)(DAT_10022368 + 0x25c + (long)*(int *)(uVar10 + 0xae8) * 0xda8),
                     (char *)&local_158);
        }
      }
      else {
        iVar45 = Ram0000000000006800;
        if ((((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
            (uVar5 = Ram0000000000006808, 0xb < uVar5)) &&
           (uVar5 = Ram0000000000006808, 0x8f < uVar5)) {
          uVar5 = UINT_0000688c;
          if ((code *)(ulong)uVar5 != (code *)0x0) {
            (*(code *)(ulong)uVar5)((char *)&local_158);
          }
        }
      }
      lVar15 = (long)*(int *)(uVar10 + 0xae8) * 0xda8 + DAT_10022368;
LAB_10007c5b:
      recovered_1000cff0(lVar15);
    }
    goto LAB_10007c60;
  case 3:
    iVar45 = Ram0000000000006800;
    if (((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
       ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0xdb < uVar5))))
    {
      uVar5 = UINT_000068d8;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)
                  (*(int *)(uVar10 + 0x25c),(char *)(uVar10 + 0x78),(char *)(uVar10 + 0x169));
      }
    }
    else {
      iVar45 = Ram0000000000006800;
      if ((((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
          (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0x8b < uVar5)
         ) {
        uVar5 = UINT_00006888;
        if ((code *)(ulong)uVar5 != (code *)0x0) {
          (*(code *)(ulong)uVar5)((char *)(uVar10 + 0x78),(char *)(uVar10 + 0x169));
        }
      }
    }
    iVar45 = *(int *)(uVar10 + 0xae8);
LAB_10007c3f:
    if ((-1 < (long)iVar45) &&
       (lVar15 = (long)iVar45 * 0xda8, *(char *)(DAT_10022368 + lVar15) == '\x01')) {
      lVar15 = DAT_10022368 + lVar15;
      goto LAB_10007c5b;
    }
LAB_10007c60:
    recovered_1001e9a0((uint)puVar8,'\x01');
    break;
  case 4:
    local_158 = 0;
    if ((((byte)(*(char *)(uVar10 + 0xa61) - 0x3aU) < 0xf6) ||
        ((byte)(*(char *)(uVar10 + 0xa62) - 0x3aU) < 0xf6)) ||
       ((((((byte)(*(char *)(uVar10 + 0xa63) - 0x3aU) < 0xf6 ||
           ((((byte)(*(char *)(uVar10 + 0xa64) - 0x3aU) < 0xf6 || (*(char *)(uVar10 + 0xa65) != '-')
             ) || ((byte)(*(char *)(uVar10 + 0xa66) - 0x3aU) < 0xf6)))) ||
          ((((byte)(*(char *)(uVar10 + 0xa67) - 0x3aU) < 0xf6 || (*(char *)(uVar10 + 0xa68) != '-'))
           || ((byte)(*(char *)(uVar10 + 0xa69) - 0x3aU) < 0xf6)))) ||
         (((byte)(*(char *)(uVar10 + 0xa6a) - 0x3aU) < 0xf6 || (*(char *)(uVar10 + 0xa6b) != ' '))))
        || ((((byte)(*(char *)(uVar10 + 0xa6c) - 0x3aU) < 0xf6 ||
             ((((byte)(*(char *)(uVar10 + 0xa6d) - 0x3aU) < 0xf6 ||
               (*(char *)(uVar10 + 0xa6e) != ':')) ||
              ((byte)(*(char *)(uVar10 + 0xa6f) - 0x3aU) < 0xf6)))) ||
            (((byte)(*(char *)(uVar10 + 0xa70) - 0x3aU) < 0xf6 || (*(char *)(uVar10 + 0xa71) != ':')
             ))))))) {
LAB_100076f6:
      uVar9 = uRam0000000010020828;
      *(undefined8 *)(uVar10 + 0x261) = _DAT_10020820;
      *(undefined8 *)(uVar10 + 0x269) = uVar9;
      uVar9 = uRam0000000010020838;
      *(undefined8 *)(uVar10 + 0x271) = _DAT_10020830;
      *(undefined8 *)(uVar10 + 0x279) = uVar9;
      *(undefined1 *)(uVar10 + 0x281) = 0;
    }
    else {
      bVar24 = *(byte *)(uVar10 + 0xa72);
      local_50 = (ulong)bVar24;
      if ((byte)(bVar24 - 0x3a) < 0xf6) goto LAB_100076f6;
      bVar16 = *(byte *)(uVar10 + 0xa73);
      local_160 = (ulong)bVar16;
      if ((((byte)(bVar16 - 0x3a) < 0xf6) || (*(char *)(uVar10 + 0xa74) != '\0')) ||
         ((uVar9 = recovered_1001f3c0((uint)(byte)(*(char *)(uVar10 + 0xa64) - 0x30) +
                                      ((uint)(byte)(*(char *)(uVar10 + 0xa63) - 0x30) +
                                      ((uint)(byte)(*(char *)(uVar10 + 0xa62) - 0x30) +
                                      (uint)(byte)(*(char *)(uVar10 + 0xa61) * '\n' + 0x20)) * 10) *
                                      10,(uint)(byte)(*(char *)(uVar10 + 0xa67) - 0x30) +
                                         (uint)(byte)(*(char *)(uVar10 + 0xa66) * '\n' + 0x20),
                                      (uint)(byte)(*(char *)(uVar10 + 0xa6a) - 0x30) +
                                      (uint)(byte)(*(char *)(uVar10 + 0xa69) * '\n' + 0x20),
                                      (uint)(byte)(*(char *)(uVar10 + 0xa6d) - 0x30) +
                                      (uint)(byte)(*(char *)(uVar10 + 0xa6c) * '\n' + 0x20),
                                      (uint)(byte)(*(char *)(uVar10 + 0xa70) - 0x30) +
                                      (uint)(byte)(*(char *)(uVar10 + 0xa6f) * '\n' + 0x20),
                                      (uint)(byte)(bVar24 * '\n' + 0x20) +
                                      (uint)(byte)(bVar16 - 0x30U),&local_158), (char)uVar9 == '\0'
          || (lVar15 = (long)DAT_10027094 * -0x3c + local_158, lVar15 < 0)))) goto LAB_100076f6;
      iVar45 = Ram0000000000006800;
      if ((((iVar45 == 0x50414d57) && (iVar45 = Ram0000000000006804, iVar45 != 0)) &&
          (uVar5 = Ram0000000000006808, 0xb < uVar5)) &&
         (uVar5 = Ram0000000000006808, 0x16f < uVar5)) {
        uVar5 = UINT_0000696c;
        if (((code *)(ulong)uVar5 == (code *)0x0) ||
           (uVar5 = (*(code *)(ulong)uVar5)((uint)lVar15,(uint)((ulong)lVar15 >> 0x20)), uVar5 == 0)
           ) goto LAB_10009b73;
        DAT_1012c528 = 0;
        recovered_1001e9a0((uint)local_60,'\x01');
      }
      else {
LAB_10009b73:
        uVar9 = uRam0000000010020818;
        *(undefined8 *)(uVar10 + 0x261) = _DAT_10020810;
        *(undefined8 *)(uVar10 + 0x269) = uVar9;
        *(undefined8 *)(uVar10 + 0x271) = 0x6d6974206d657473;
        *(undefined2 *)(uVar10 + 0x279) = 0x65;
      }
    }
    uVar38 = local_44;
  }
switchD_10007259_default:
  uVar17 = (undefined1)uVar38;
  uVar5 = 0;
  if ((ulong)DAT_1002231c < 0x14) {
    lVar28 = (ulong)DAT_1002231c * 0xda8;
    lVar15 = DAT_10022368 + lVar28;
    if (((*(char *)(DAT_10022368 + lVar28) == '\x01') && (*(char *)(lVar15 + 1) == '\x01')) &&
       (*(int *)(lVar15 + 0x10) == 6)) {
      uVar44 = *(uint *)(lVar15 + 0xb24);
      if (uVar44 != 0) {
        if (*(char *)(lVar15 + 2) != '\0') {
          uVar44 = 0;
        }
        uVar5 = uVar44;
      }
    }
  }
  else {
LAB_10007cbe:
    uVar17 = (undefined1)uVar38;
    uVar5 = 0;
    lVar15 = 0;
  }
  uVar44 = local_48;
  if ((DAT_100256b0 != 0) && (DAT_100256b0 != uVar5)) {
    terror_ui_window_pointer_event(DAT_100256b0,0,0,0,0);
  }
  DAT_100256b0 = uVar5;
  if ((lVar15 != 0) && (uVar5 != 0)) {
    iVar45 = 1;
    uVar25 = 0;
    if ((*(int *)(lVar15 + 0x10) == 6) && (*(char *)(lVar15 + 2) == '\0')) {
      iVar42 = 0;
      iVar36 = 0;
      if (0x34 < *(int *)(lVar15 + 100) && 0x1c < *(int *)(lVar15 + 0x60)) {
        uVar43 = *(int *)(lVar15 + 0x60) - 0x1c;
        uVar38 = *(int *)(lVar15 + 100) - 0x34;
        uVar25 = *(uint *)(lVar15 + 0xb44);
        if (*(uint *)(lVar15 + 0xb44) == 0) {
          uVar25 = uVar43;
        }
        uVar6 = *(uint *)(lVar15 + 0xb48);
        if (*(uint *)(lVar15 + 0xb48) == 0) {
          uVar6 = uVar38;
        }
        uVar3 = uVar25;
        if ((int)uVar6 < 1 || (int)uVar25 < 1) {
          uVar3 = uVar43;
        }
        uVar10 = (ulong)uVar3;
        if ((int)uVar6 < 1 || (int)uVar25 < 1) {
          uVar6 = uVar38;
        }
        uVar13 = (ulong)uVar6;
        uVar26 = uVar43 * uVar13;
        if (uVar26 >> 0x20 == 0) {
          uVar25 = (uint)((uVar26 & 0xffffffff) / uVar10);
        }
        else {
          uVar25 = (uint)(uVar26 / uVar10);
        }
        uVar20 = 1;
        if (1 < (int)uVar25) {
          uVar20 = uVar25;
        }
        uVar46 = uVar43;
        if (uVar38 < uVar20) {
          uVar26 = uVar38 * uVar10;
          if (uVar26 >> 0x20 == 0) {
            uVar25 = (uint)((uVar26 & 0xffffffff) / uVar13);
          }
          else {
            uVar25 = (uint)(uVar26 / uVar13);
          }
          uVar46 = 1;
          if (1 < (int)uVar25) {
            uVar46 = uVar25;
          }
          uVar20 = uVar38;
        }
        iVar42 = *(int *)(lVar15 + 0x58) + 0xe + (int)(uVar43 - uVar46) / 2;
        iVar36 = *(int *)(lVar15 + 0x5c) + 0x26 + (int)(uVar38 - uVar20) / 2;
        bVar4 = false;
        iVar45 = (int)local_40;
        if (((iVar42 <= iVar45) && (iVar45 < (int)(iVar42 + uVar46))) && (iVar36 <= (int)local_34))
        {
          bVar4 = (int)local_34 < (int)(iVar36 + uVar20);
        }
        uVar13 = (long)(int)(local_34 - iVar36) * uVar13;
        if (uVar13 >> 0x20 == 0) {
          iVar18 = (int)((uVar13 & 0xffffffff) / (ulong)uVar20);
        }
        else {
          iVar18 = (int)((long)uVar13 / (long)(ulong)uVar20);
        }
        uVar25 = local_54 & 3;
        iVar19 = uVar6 - 1;
        if (iVar18 < (int)(uVar6 - 1)) {
          iVar19 = iVar18;
        }
        iVar36 = 0;
        if (-1 < iVar18) {
          iVar36 = iVar19;
        }
        uVar10 = (long)(iVar45 - iVar42) * uVar10;
        if (uVar10 >> 0x20 == 0) {
          iVar45 = (int)((uVar10 & 0xffffffff) / (ulong)uVar46);
        }
        else {
          iVar45 = (int)((long)uVar10 / (long)(ulong)uVar46);
        }
        iVar42 = uVar3 - 1;
        if (iVar45 < (int)(uVar3 - 1)) {
          iVar42 = iVar45;
        }
        if (iVar45 < 0) {
          iVar42 = 0;
        }
        if (bVar4 == false) {
          uVar25 = 0;
        }
        iVar45 = (uint)bVar4 * 2 + 1;
      }
    }
    else {
      iVar42 = 0;
      iVar36 = 0;
    }
    terror_ui_window_pointer_event(uVar5,iVar42,iVar36,uVar25,((uint)local_168 & 0x10000) + iVar45 + 4);
  }
  DAT_1012c4c8 = uVar17;
  DAT_1012c4c9 = (char)(uVar44 >> 1);
  DAT_1012c4d2 = 0;
  DAT_1012c4d3 = 0;
  DAT_1012c4d4 = 0;
  DAT_1012c4d5 = 0;
  DAT_1012c4d6 = 0;
  DAT_1012c4d7 = 0;
  DAT_1012c4d8 = 0;
  DAT_1012c4d9 = 0;
  DAT_1012c4da = 0;
  DAT_1012c4db = 0;
  DAT_1012c4dc = 0;
  DAT_1012c4dd = 0;
  DAT_1012c4de = 0;
  DAT_1012c4df = 0;
  DAT_1012c4e0 = 0;
  DAT_1012c4e1 = 0;
  DAT_1012c4e2 = 0;
  DAT_1012c4e3 = 0;
  DAT_1012c4e4 = 0;
  DAT_1012c4e5 = 0;
  DAT_1012c4e6 = 0;
  DAT_1012c4e7 = 0;
  DAT_1012c4e8 = 0;
  DAT_1012c4e9 = 0;
  DAT_1012c4ea = 0;
  DAT_1012c4eb = 0;
  DAT_1012c4ec = 0;
  DAT_1012c4ed = 0;
  DAT_1012c4ee = 0;
  DAT_1012c4ef = 0;
  DAT_1012c4f0 = 0;
  DAT_1012c4f1 = 0;
  DAT_1012c4f2 = 0;
  DAT_1012c4f3 = 0;
  DAT_1012c4f4 = 0;
  DAT_1012c4f5 = 0;
  DAT_1012c4f6 = 0;
  DAT_1012c4f7 = 0;
  DAT_1012c4f8 = 0;
  DAT_1012c4d0 = 0;
  DAT_1012c4d1 = 0;
  DAT_1012c4cc = 0;
  return;
  while( true ) {
    cVar41 = *(char *)(lVar15 + lVar28 + 0x79 + uVar26);
    uVar26 = uVar10;
    if (cVar41 == '\0') break;
LAB_10008551:
    uVar10 = uVar26 + 1;
    *(char *)((long)&local_158 + uVar26) = cVar41;
    if (0xef < uVar10) break;
  }
LAB_10008815:
  *(undefined1 *)((long)&local_158 + uVar10) = 0;
  if (((-1 < (int)uVar5) && (uVar5 < *(uint *)(lVar22 + 0xaf8))) &&
     (lVar15 = *(long *)(lVar22 + 0xaf0), lVar15 != 0)) {
    lVar28 = (ulong)uVar5 * 0x1f8;
    if ((*(int *)(lVar15 + lVar28 + 0x1ec) == 2) || ((*(byte *)(lVar15 + lVar28 + 0x1e8) & 2) != 0))
    {
      cVar41 = *(char *)(lVar15 + 0xf1 + lVar28);
      if (cVar41 == '\0') {
        uVar10 = 0;
      }
      else {
        uVar26 = 0;
        do {
          uVar10 = uVar26 + 1;
          *(char *)((long)&local_158 + uVar26) = cVar41;
          if (0xef < uVar10) break;
          cVar41 = *(char *)(lVar15 + lVar28 + 0xf2 + uVar26);
          uVar26 = uVar10;
        } while (cVar41 != '\0');
      }
      *(undefined1 *)((long)&local_158 + uVar10) = 0;
    }
  }
  recovered_10011a00((char *)&local_158,&DAT_100255a1,(char *)&local_468);
  iVar45 = strcmp((char *)&local_468,&DAT_100254b0);
  if ((iVar45 != 0) && (DAT_10025694 == *(int *)(lVar22 + 0x25c))) {
    recovered_1001d8e0(DAT_10025694,&DAT_100254b0,(char *)&local_468);
    lVar28 = 0;
    lVar15 = DAT_10022368;
    do {
      if ((*(char *)(lVar15 + lVar28) == '\x01') && (*(int *)(lVar15 + 0x10 + lVar28) == 0)) {
        recovered_1000cff0(lVar15 + lVar28);
        lVar15 = DAT_10022368;
      }
      lVar28 = lVar28 + 0xda8;
    } while (lVar28 != 0x11120);
  }
LAB_10005c60:
  memset(&DAT_1002549c,0,0x1fc);
  DAT_10022178 = 0xffffffff;
  DAT_10022374 = 0;
  puVar7 = &DAT_1002217c;
LAB_1000621d:
  *puVar7 = 0xffffffff;
  DAT_10022324 = 0xffffffff;
  goto LAB_1000622d;
LAB_10005d93:
  if (*(uint *)((long)puVar39 + -0x14) != uVar6) goto code_r0x10005d9d;
  uVar38 = uVar38 - 1;
  if ((int)uVar38 <= (int)uVar26) goto LAB_100085d5;
  uVar10 = uVar38 - uVar26;
  if (uVar10 < 8) goto LAB_100085c2;
  uVar14 = uVar43 - uVar26;
  uVar26 = (uVar13 & 0xfffffffffffffff8) + uVar26;
  uVar14 = uVar14 & 0xfffffffffffffff8;
  do {
    *(undefined8 *)((long)puVar39 + -0x14) = puVar39[-2];
    *(undefined8 *)((long)puVar39 + -0xc) = puVar39[-1];
    *(undefined8 *)((long)puVar39 + -4) = *puVar39;
    *(undefined8 *)((long)puVar39 + 4) = puVar39[1];
    puVar39 = puVar39 + 4;
    uVar14 = uVar14 - 8;
  } while (uVar14 != 0);
  if (uVar10 != (uVar10 & 0xfffffffffffffff8)) {
LAB_100085c2:
    do {
      *(undefined4 *)(lVar15 + uVar26 * 4) = *(undefined4 *)(lVar15 + 4 + uVar26 * 4);
      uVar26 = uVar26 + 1;
    } while (uVar38 != uVar26);
  }
LAB_100085d5:
  *(uint *)(lVar15 + (long)(int)uVar38 * 4) = uVar6;
LAB_100085db:
  DAT_1002231c = uVar6;
  goto LAB_10006235;
code_r0x10005d9d:
  uVar26 = uVar26 + 1;
  uVar13 = uVar13 - 1;
  puVar39 = (undefined8 *)((long)puVar39 + 4);
  if (uVar10 == uVar26) goto code_r0x10005dac;
  goto LAB_10005d93;
code_r0x10005dac:
  if ((int)uVar38 < 0x14) {
    DAT_10027194 = uVar38 + 1;
    goto LAB_100085d5;
  }
  goto LAB_100085db;
  while (uVar26 = uVar26 + 1, uVar10 != uVar26) {
LAB_100088e0:
    if (*(uint *)(DAT_10022990 + uVar26 * 4) == uVar38) goto LAB_100088f3;
  }
  uVar26 = 0xffffffff;
LAB_100088f3:
  if ((int)uVar26 == DAT_10027194 - 1) {
    recovered_10019560(uVar38);
  }
  else {
    recovered_1000d820(uVar38);
  }
  goto LAB_1000622d;
  while( true ) {
    cVar41 = *(char *)(lVar15 + lVar28 + 0xf2 + uVar26);
    uVar26 = uVar10;
    if (cVar41 == '\0') break;
LAB_10009a39:
    uVar10 = uVar26 + 1;
    (&DAT_100254b0)[uVar26] = cVar41;
    if (0xef < uVar10) break;
  }
LAB_10009a5b:
  (&DAT_100254b0)[uVar10] = 0;
  pcVar47 = &DAT_10020a84;
  if (*(long *)(pcVar11 + 0xaf0) != 0) {
    pcVar47 = (char *)(*(long *)(pcVar11 + 0xaf0) + lVar28);
  }
  cVar41 = *pcVar47;
  if (cVar41 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar26 = 0;
    do {
      uVar10 = uVar26 + 1;
      (&DAT_100255a1)[uVar26] = cVar41;
      if (0xef < uVar10) break;
      cVar41 = pcVar47[uVar26 + 1];
      uVar26 = uVar10;
    } while (cVar41 != '\0');
  }
  (&DAT_100255a1)[uVar10] = 0;
  lVar15 = *(long *)(pcVar11 + 0xaf0);
  lVar28 = lVar28 + lVar15;
  if (lVar15 == 0) {
    DAT_10025692 = 0;
LAB_10009afb:
    DAT_10025694 = *(int *)(pcVar11 + 0x25c);
  }
  else {
    DAT_10025692 = 1;
    if (*(int *)(lVar28 + 0x1ec) != 2) {
      DAT_10025692 = *(byte *)(lVar28 + 0x1e8) >> 1 & 1;
    }
    DAT_10025694 = *(int *)(lVar28 + 0x1f0);
    if (DAT_10025694 < 0) goto LAB_10009afb;
  }
  if (((DAT_10022328 == uVar38) && (DAT_1002232c == uVar43)) &&
     ((uint)(DAT_10022370 - _DAT_1012c504) < 0x1c)) {
    if ((lVar15 == 0) || (iVar45 = *(int *)(lVar28 + 0x1f0), iVar45 < 0)) {
      iVar45 = *(int *)(pcVar11 + 0x25c);
    }
    recovered_1001a380((byte *)(lVar28 + 0xf1),lVar28,iVar45);
  }
  DAT_10022328 = uVar38;
  DAT_1002232c = uVar43;
  _DAT_1012c504 = DAT_10022370;
  goto LAB_1000622d;
LAB_10006e12:
  do {
    if (pbVar27[-0x120] == 1) {
      if (((iVar36 + 0x22 + iVar45 * 0x5c <= (int)(uint)local_40) &&
          (iVar42 + 0x22 <= (int)local_34)) &&
         (((int)(uint)local_40 < iVar45 * 0x5c + iVar36 + 0x22 + 0x54 &&
          ((int)local_34 < iVar42 + 0x3c)))) {
        memset(&DAT_100223e8,0,0x59c);
        DAT_100223e8 = '\x01';
        _DAT_100223ec = CONCAT44(uVar44,uVar5);
        DAT_100223f8 = 0xffffffff;
        DAT_100223fc = 0xffffffff;
        _DAT_10022404 = 0xffffffff;
        _DAT_10022400 = (undefined4)lVar15;
        pbVar48 = pbVar27 + -0xf7;
        pbVar33 = pbVar27 + -0x11f;
        uVar29 = *(undefined4 *)(pbVar27 + -4);
        bVar24 = *pbVar27;
        DAT_100223f4 = uVar25;
        goto LAB_100066b7;
      }
      iVar45 = iVar45 + 1;
    }
    lVar15 = lVar15 + 1;
    pbVar27 = pbVar27 + 0x124;
  } while (lVar15 != 0xc);
  uVar5 = recovered_1001a110(lVar28,(uint)local_40,local_34);
  memset(&DAT_100223e8,0,0x59c);
  DAT_100223e8 = '\x01';
  _DAT_100223ec = CONCAT44(local_34,(int)local_40);
  DAT_100223f4 = 0xffffffff;
  DAT_100223f8 = 0xffffffff;
  DAT_100223fc = 0xffffffff;
  _DAT_10022400 = 0xffffffff;
  _DAT_10022404 = 0xffffffff;
  if ((-1 < (int)uVar5) && (uVar5 < *(uint *)(lVar28 + 0xaf8))) {
    lVar15 = *(long *)(lVar28 + 0xaf0);
    pbVar27 = (byte *)(lVar15 + (ulong)uVar5 * 0x1f8);
    pbVar48 = (byte *)(lVar15 + (ulong)uVar5 * 0x1f8 + 0xf1);
    if (lVar15 == 0) {
      iVar45 = *(int *)(lVar28 + 0x25c);
      bVar24 = 0;
    }
    else {
      iVar45 = *(int *)(pbVar27 + 0x1f0);
      if (iVar45 < 0) {
        iVar45 = *(int *)(lVar28 + 0x25c);
      }
      bVar24 = 1;
      if (*(int *)(pbVar27 + 0x1ec) != 2) {
        bVar24 = (pbVar27[0x1e8] & 2) >> 1;
      }
    }
    recovered_1001e110(uVar25,uVar5,pbVar48,pbVar27,iVar45,(uint)bVar24);
    if ((long)(int)DAT_10022980 < 0x12) {
      *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 1;
      *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
      lVar15 = (long)(int)DAT_10022980;
      *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6e65704f;
      (&DAT_10022690)[lVar15 * 0x2a] = 0;
      DAT_10022980 = DAT_10022980 + 1;
    }
    bVar24 = *pbVar48;
    pbVar27 = (byte *)0x0;
    if (bVar24 != 0) {
      pbVar33 = pbVar48;
      do {
        if (bVar24 == 0x2f) {
          pbVar27 = pbVar33;
        }
        bVar24 = pbVar33[1];
        pbVar33 = pbVar33 + 1;
      } while (bVar24 != 0);
    }
    pbVar33 = pbVar27 + 1;
    if (pbVar27 == (byte *)0x0) {
      pbVar33 = pbVar48;
    }
    pbVar27 = (byte *)0x0;
    bVar24 = *pbVar33;
    while (bVar24 != 0) {
      if (bVar24 == 0x2e) {
        pbVar27 = pbVar33;
      }
      pbVar1 = pbVar33 + 1;
      pbVar33 = pbVar33 + 1;
      bVar24 = *pbVar1;
    }
    pbVar33 = &DAT_10020a84;
    if (pbVar27 != (byte *)0x0) {
      pbVar33 = pbVar27;
    }
    bVar24 = *pbVar33;
    if (bVar24 == 0) {
      bVar16 = 0x2e;
      bVar24 = 0;
LAB_10008cb8:
      if (bVar24 != bVar16) goto LAB_10008d1a;
      if ((int)DAT_10022980 < 0x12) {
        *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 6;
        *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
        lVar15 = (long)(int)DAT_10022980;
        *(undefined8 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x7041207265746e45;
        *(undefined2 *)(&DAT_10022694 + lVar15 * 0x2a) = 0x70;
        DAT_10022980 = DAT_10022980 + 1;
        goto LAB_10008d1a;
      }
    }
    else {
      bVar16 = bVar24 | 0x20;
      if (0x19 < (byte)(bVar24 + 0xbf)) {
        bVar16 = bVar24;
      }
      if (bVar16 == 0x2e) {
        bVar24 = pbVar33[1];
        if (bVar24 == 0) {
          bVar16 = 0x61;
          bVar24 = 0;
        }
        else {
          bVar16 = bVar24 | 0x20;
          if (0x19 < (byte)(bVar24 + 0xbf)) {
            bVar16 = bVar24;
          }
          if (bVar16 != 0x61) goto LAB_10008d1a;
          bVar35 = pbVar33[2];
          bVar16 = 0x70;
          bVar24 = 0;
          if (bVar35 != 0) {
            bVar24 = bVar35 | 0x20;
            if (0x19 < (byte)(bVar35 + 0xbf)) {
              bVar24 = bVar35;
            }
            if (bVar24 != 0x70) goto LAB_10008d1a;
            bVar35 = pbVar33[3];
            bVar24 = 0;
            if (bVar35 != 0) {
              bVar24 = bVar35 | 0x20;
              if (0x19 < (byte)(bVar35 + 0xbf)) {
                bVar24 = bVar35;
              }
              if (bVar24 != 0x70) goto LAB_10008d1a;
              bVar24 = pbVar33[4];
              bVar16 = 0;
            }
          }
        }
        goto LAB_10008cb8;
      }
LAB_10008d1a:
      if ((int)DAT_10022980 < 0x12) {
        *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 0xb;
        *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
        lVar15 = (long)(int)DAT_10022980;
        *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6f666e49;
        (&DAT_10022690)[lVar15 * 0x2a] = 0;
        DAT_10022980 = DAT_10022980 + 1;
      }
    }
    recovered_1001da00();
    if ((long)(int)DAT_10022980 < 0x12) {
      *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 7;
      *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
      lVar15 = (long)(int)DAT_10022980;
      *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x79706f43;
      (&DAT_10022690)[lVar15 * 0x2a] = 0;
      lVar15 = (long)(int)DAT_10022980;
      DAT_10022980 = DAT_10022980 + 1;
      if (lVar15 < 0x11) {
        *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 8;
        *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
        *(undefined4 *)(&DAT_1002268c + (long)(int)DAT_10022980 * 0x2a) = 0x747543;
        lVar15 = (long)(int)DAT_10022980;
        DAT_10022980 = DAT_10022980 + 1;
        if (lVar15 < 0x11) {
          *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 10;
          *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
          lVar15 = (long)(int)DAT_10022980 * 0x2a;
          *(undefined4 *)(&DAT_1002268c + lVar15) = 0x616e6552;
          *(undefined2 *)(&DAT_10022690 + lVar15) = 0x656d;
          (&DAT_10022692)[lVar15] = 0;
          lVar15 = (long)(int)DAT_10022980;
          DAT_10022980 = DAT_10022980 + 1;
          if (lVar15 < 0x11) {
            *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0xd;
            *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
            lVar15 = (long)(int)DAT_10022980 * 0x2a;
            *(undefined4 *)(&DAT_1002268c + lVar15) = 0x656c6544;
            *(undefined2 *)(&DAT_10022690 + lVar15) = 0x6574;
            (&DAT_10022692)[lVar15] = 0;
            uVar5 = DAT_10022980;
            uVar25 = DAT_10022980 + 1;
            DAT_10022980 = uVar25;
            uVar9 = recovered_10011700(pbVar48);
            if (((int)uVar5 < 0x11 & (byte)uVar9) == 1) {
              *(undefined4 *)(&DAT_10022600 + (long)(int)uVar5 * 4) = 5;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              lVar15 = (long)(int)DAT_10022980 * 0x2a;
              *(undefined8 *)(&DAT_1002268c + lVar15) = 0x6b63614220746553;
              *(undefined4 *)(&DAT_10022694 + lVar15) = 0x756f7267;
              *(undefined2 *)(&DAT_10022698 + lVar15) = 0x646e;
              (&DAT_1002269a)[lVar15] = 0;
              uVar25 = DAT_10022980 + 1;
              DAT_10022980 = uVar25;
            }
            bVar4 = recovered_1001cef0(pbVar48);
            uVar5 = (uint)local_40;
            uVar44 = local_34;
            uVar38 = DAT_10022980;
            if ((bVar4) && ((int)uVar25 < 0x12)) {
              *(undefined4 *)(&DAT_100225fc + (long)(int)uVar25 * 4) = 0x17;
              *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
              uVar9 = uRam00000000100207d8;
              lVar15 = (long)(int)DAT_10022980 * 0x2a;
              *(undefined8 *)(&DAT_1002268c + lVar15) = _DAT_100207d0;
              *(undefined8 *)(&DAT_10022694 + lVar15) = uVar9;
              puVar8 = &DAT_1002269c + lVar15;
              goto LAB_100084e0;
            }
            goto LAB_10006a22;
          }
        }
      }
    }
    recovered_10011700(pbVar48);
    recovered_1001cef0(pbVar48);
    goto LAB_10006a1a;
  }
  pbVar27 = (byte *)(lVar28 + 0x78);
  bVar24 = *(byte *)(lVar28 + 0x78);
  pbVar48 = (byte *)0x0;
  if (bVar24 != 0) {
    pbVar33 = pbVar27;
    do {
      if (bVar24 == 0x2f) {
        pbVar48 = pbVar33;
      }
      bVar24 = pbVar33[1];
      pbVar33 = pbVar33 + 1;
    } while (bVar24 != 0);
  }
  pbVar33 = pbVar48 + 1;
  if (pbVar48 == (byte *)0x0) {
    pbVar33 = pbVar27;
  }
  recovered_1001e110(uVar25,uVar5,pbVar27,pbVar33,*(undefined4 *)(lVar28 + 0x25c),1);
  recovered_1001da00();
  uVar5 = (uint)local_40;
  uVar44 = local_34;
  uVar38 = DAT_10022980;
  if ((long)(int)DAT_10022980 < 0x12) {
    *(undefined4 *)(&DAT_100225fc + (long)(int)DAT_10022980 * 4) = 9;
    *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
    lVar15 = (long)(int)DAT_10022980;
    *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x74736150;
    *(undefined2 *)(&DAT_10022690 + lVar15 * 0x2a) = 0x65;
    lVar15 = (long)(int)DAT_10022980;
    DAT_10022980 = DAT_10022980 + 1;
    uVar38 = DAT_10022980;
    if (0x10 < lVar15) goto LAB_10006a22;
    *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0xc;
    *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
    lVar15 = (long)(int)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar15) = 0x4620657461657243;
    *(undefined4 *)(&DAT_10022694 + lVar15) = 0x65646c6f;
    *(undefined2 *)(&DAT_10022698 + lVar15) = 0x72;
    lVar15 = (long)(int)DAT_10022980;
    DAT_10022980 = DAT_10022980 + 1;
    uVar38 = DAT_10022980;
    if (0x10 < lVar15) goto LAB_10006a22;
    *(undefined4 *)(&DAT_10022600 + lVar15 * 4) = 0xb;
    *(undefined4 *)(&DAT_10022644 + (long)(int)DAT_10022980 * 4) = 0xffffffff;
    lVar15 = (long)(int)DAT_10022980;
    *(undefined4 *)(&DAT_1002268c + lVar15 * 0x2a) = 0x6f666e49;
    puVar8 = &DAT_10022690 + lVar15 * 0x2a;
LAB_100084e0:
    *puVar8 = 0;
    goto LAB_100069d4;
  }
  goto LAB_10006a22;
LAB_100065e2:
  uVar10 = uVar10 + 1;
  lVar15 = lVar15 + 0x124;
  if (lVar15 == 0x1b60) goto LAB_10006a22;
  goto LAB_100065f9;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100207a0
#undef DAT_100207d0
#undef DAT_100207e0
#undef DAT_100207f0
#undef DAT_10020800
#undef DAT_10020810
#undef DAT_10020820
#undef DAT_10020830
#undef DAT_100209a0
#undef DAT_100209bc
#undef DAT_10020a84
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022178
#undef DAT_1002217c
#undef DAT_10022180
#undef DAT_1002231c
#undef DAT_10022324
#undef DAT_10022328
#undef DAT_1002232c
#undef DAT_10022368
#undef DAT_10022370
#undef DAT_10022374
#undef DAT_10022379
#undef DAT_100223e8
#undef DAT_100223ec
#undef DAT_100223f0
#undef DAT_100223f4
#undef DAT_100223f8
#undef DAT_100223fc
#undef DAT_10022400
#undef DAT_10022404
#undef DAT_10022408
#undef DAT_1002240c
#undef DAT_1002240d
#undef DAT_1002240e
#undef DAT_1002240f
#undef DAT_10022410
#undef DAT_10022418
#undef DAT_100225fc
#undef DAT_10022600
#undef DAT_10022644
#undef DAT_1002268c
#undef DAT_10022690
#undef DAT_10022692
#undef DAT_10022694
#undef DAT_10022696
#undef DAT_10022698
#undef DAT_1002269a
#undef DAT_1002269c
#undef DAT_1002269e
#undef DAT_10022980
#undef DAT_10022988
#undef DAT_10022990
#undef DAT_100229a0
#undef DAT_10022ac0
#undef DAT_10023750
#undef DAT_10023751
#undef DAT_10023779
#undef DAT_1002386c
#undef DAT_1002549c
#undef DAT_1002549d
#undef DAT_100254a0
#undef DAT_100254a4
#undef DAT_100254a8
#undef DAT_100254ac
#undef DAT_100254b0
#undef DAT_100255a1
#undef DAT_10025692
#undef DAT_10025694
#undef DAT_100256b0
#undef DAT_10027094
#undef DAT_10027194
#undef DAT_1002719c
#undef DAT_1012c4c0
#undef DAT_1012c4c4
#undef DAT_1012c4c8
#undef DAT_1012c4c9
#undef DAT_1012c4cc
#undef DAT_1012c4d0
#undef DAT_1012c4d1
#undef DAT_1012c4d2
#undef DAT_1012c4d3
#undef DAT_1012c4d4
#undef DAT_1012c4d5
#undef DAT_1012c4d6
#undef DAT_1012c4d7
#undef DAT_1012c4d8
#undef DAT_1012c4d9
#undef DAT_1012c4da
#undef DAT_1012c4db
#undef DAT_1012c4dc
#undef DAT_1012c4dd
#undef DAT_1012c4de
#undef DAT_1012c4df
#undef DAT_1012c4e0
#undef DAT_1012c4e1
#undef DAT_1012c4e2
#undef DAT_1012c4e3
#undef DAT_1012c4e4
#undef DAT_1012c4e5
#undef DAT_1012c4e6
#undef DAT_1012c4e7
#undef DAT_1012c4e8
#undef DAT_1012c4e9
#undef DAT_1012c4ea
#undef DAT_1012c4eb
#undef DAT_1012c4ec
#undef DAT_1012c4ed
#undef DAT_1012c4ee
#undef DAT_1012c4ef
#undef DAT_1012c4f0
#undef DAT_1012c4f1
#undef DAT_1012c4f2
#undef DAT_1012c4f3
#undef DAT_1012c4f4
#undef DAT_1012c4f5
#undef DAT_1012c4f6
#undef DAT_1012c4f7
#undef DAT_1012c4f8
#undef DAT_1012c4fc
#undef DAT_1012c500
#undef DAT_1012c504
#undef DAT_1012c50c
#undef DAT_1012c510
#undef DAT_1012c518
#undef DAT_1012c520
#undef DAT_1012c528
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006888
#undef UINT_0000688c
#undef UINT_000068d8
#undef UINT_000068dc
#undef UINT_000068f4
#undef UINT_00006968
#undef UINT_0000696c
#undef UNK_100207a8
#undef UNK_100207c8
#undef UNK_100207d8
#undef UNK_100207e8
#undef UNK_100207f8
#undef UNK_10020808
#undef UNK_10020818
#undef UNK_10020828
#undef UNK_10020838
#undef _DAT_100207a0
#undef _DAT_100207d0
#undef _DAT_100207e0
#undef _DAT_100207f0
#undef _DAT_10020800
#undef _DAT_10020810
#undef _DAT_10020820
#undef _DAT_10020830
#undef _DAT_100223ec
#undef _DAT_10022400
#undef _DAT_10022404
#undef _DAT_1002549c
#undef _DAT_100254a4
#undef _DAT_1012c4fc
#undef _DAT_1012c500
#undef _DAT_1012c504
#undef _DAT_1012c50c
#undef _DAT_1012c510
#undef pcRam0000000010020808
#undef ram0x100207c0
#undef str_100207b0
#undef str_1002108e
#undef str_10021095
#undef str_1002109f
#undef str_100210ad
#undef str_100210ba
#undef str_100210c7
#undef str_100210d3
#undef str_10021181
#undef str_10021191
#undef str_100211a5
#undef uRam00000000100207a8
#undef uRam00000000100207c8
#undef uRam00000000100207d8
#undef uRam00000000100207e8
#undef uRam00000000100207f8
#undef uRam0000000010020818
#undef uRam0000000010020828
#undef uRam0000000010020838
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_368
#undef local_268
#undef local_168
#undef local_160
#undef local_158
#undef local_148
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef cStack_269
#undef acStack_260
#undef acStack_258
#undef acStack_250
#undef pcStack_150
#undef uStack_140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cf0
 */

uint128 recovered_10009cf0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint128 auVar9;

  uVar6 = (uint)(param_1 >> 0x20);
  iVar7 = (int)((ulong)param_2 >> 0x20);
  if (0 < iVar7 && 0 < (int)param_2) {
    iVar4 = (int)((ulong)param_4 >> 0x20);
    if (iVar4 < 1 || (int)param_4 < 1) {
      param_3 = param_1;
      param_4 = param_2;
    }
    else {
      iVar3 = (int)param_4 + (int)param_3;
      uVar1 = param_3;
      if ((int)param_1 < (int)param_3) {
        uVar1 = param_1;
      }
      uVar8 = (uint)(param_3 >> 0x20);
      uVar2 = uVar8;
      if ((int)uVar6 < (int)uVar8) {
        uVar2 = uVar6;
      }
      iVar5 = (int)param_2 + (int)param_1;
      if (iVar3 < iVar5) {
        iVar3 = iVar5;
      }
      iVar7 = iVar7 + uVar6;
      iVar4 = iVar4 + uVar8;
      if (iVar4 < iVar7) {
        iVar4 = iVar7;
      }
      param_3 = uVar1 & 0xffffffff | (ulong)uVar2 << 0x20;
      param_4 = CONCAT44(iVar4 - uVar2,iVar3 - (int)uVar1);
    }
  }
  PF_PART8(auVar9, 8) = param_4;
  PF_PART8(auVar9, 0) = param_3;
  return auVar9;
}


#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_1012c518
#define DAT_1012c518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10beffU)))
#undef DAT_1012c520
#define DAT_1012c520 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10bf07U)))
#define local_78 (*(char (*)[88])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d80
 */

uint128 recovered_10009d80(void)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint128 auVar8;

  recovered_1001f770(local_78);
  iVar7 = 0xf4;
  if (0xf4 < DAT_10022170) {
    iVar7 = DAT_10022170;
  }
  uVar3 = strlen(local_78);
  uVar2 = (uint)uVar3;
  if (0 < (int)uVar2) {
    do {
      uVar2 = (uint)uVar3;
      uVar1 = recovered_10016f60(local_78,uVar2);
      if ((int)uVar1 <= iVar7 + -0xf4) goto LAB_10009deb;
      uVar3 = (ulong)(uVar2 - 1);
    } while (1 < (int)uVar2);
    uVar2 = 0;
  }
LAB_10009deb:
  uVar2 = recovered_10016f60(local_78,uVar2);
  uVar2 = (DAT_10022170 - uVar2) - 2;
  uVar3 = 0xf2;
  if (0xf2 < (int)uVar2) {
    uVar3 = (ulong)uVar2;
  }
  uVar2 = DAT_10022170 - (int)uVar3;
  iVar7 = (int)(DAT_1012c520 >> 0x20);
  if (iVar7 < 1 || (int)DAT_1012c520 < 1) {
    uVar4 = uVar3;
    uVar3 = (ulong)uVar2 | 0x1800000000;
  }
  else if ((int)uVar2 < 1) {
    uVar4 = DAT_1012c518;
    uVar3 = DAT_1012c520;
  }
  else {
    if ((int)DAT_1012c518 < (int)uVar3) {
      uVar3 = DAT_1012c518 & 0xffffffff;
    }
    uVar2 = (uint)(DAT_1012c518 >> 0x20);
    uVar1 = (int)uVar2 >> 0x1f & uVar2;
    iVar6 = (int)DAT_1012c520 + (int)DAT_1012c518;
    iVar5 = DAT_10022170;
    if (DAT_10022170 < iVar6) {
      iVar5 = iVar6;
    }
    iVar7 = iVar7 + uVar2;
    iVar6 = 0x18;
    if (0x18 < iVar7) {
      iVar6 = iVar7;
    }
    uVar4 = uVar3 | (ulong)uVar1 << 0x20;
    uVar3 = CONCAT44(iVar6 - uVar1,iVar5 - (int)uVar3);
  }
  PF_PART8(auVar8, 8) = uVar3;
  PF_PART8(auVar8, 0) = uVar4;
  return auVar8;
}

#undef DAT_10022170
#undef DAT_1012c518
#undef DAT_1012c520
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009eb0
 */

uint128 recovered_10009eb0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint128 auVar8;

  uVar3 = (uint)param_1;
  iVar2 = (int)((ulong)param_1 >> 0x20);
  iVar5 = (int)((ulong)param_2 >> 0x20);
  uVar1 = 0;
  uVar4 = 0;
  if (0 < iVar5 && (0 < (int)param_2 && (0 < param_4 && 0 < param_3))) {
    uVar6 = (ulong)param_1 >> 0x20;
    iVar5 = iVar5 + iVar2;
    uVar7 = param_3;
    if ((int)uVar3 < param_3) {
      uVar7 = uVar3;
    }
    if ((int)uVar3 < 0) {
      uVar7 = 0;
    }
    if (param_4 <= iVar2) {
      uVar6 = (ulong)(uint)param_4;
    }
    if (param_1 < 0) {
      uVar6 = 0;
    }
    iVar2 = (int)param_2 + uVar3;
    if (iVar2 < param_3) {
      param_3 = iVar2;
    }
    if (iVar2 < 0) {
      param_3 = 0;
    }
    if (iVar5 < param_4) {
      param_4 = iVar5;
    }
    if (iVar5 < 0) {
      param_4 = 0;
    }
    if (param_3 - uVar7 == 0 || param_3 < (int)uVar7) {
      uVar4 = 0;
    }
    else {
      uVar1 = 0;
      uVar4 = 0;
      iVar2 = param_4 - (int)uVar6;
      if (iVar2 != 0 && (int)uVar6 <= param_4) {
        uVar1 = (ulong)uVar7 | uVar6 << 0x20;
        uVar4 = CONCAT44(iVar2,param_3 - uVar7);
      }
    }
  }
  PF_PART8(auVar8, 8) = uVar4;
  PF_PART8(auVar8, 0) = uVar1;
  return auVar8;
}


#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022340
#define DAT_10022340 (*(int *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(int *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022374
#define DAT_10022374 (*(char *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10027048
#define DAT_10027048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027050
#define DAT_10027050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a37U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f60
 */

void recovered_10009f60(ulong param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;

  if (((DAT_10022374 == '\x01') && (DAT_10027048 != 0)) && (DAT_10022348 != 0)) {
    lVar4 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
    if ((long)DAT_10022344 < 1) {
      lVar4 = 0;
    }
    if ((long)DAT_10022340 < 1) {
      lVar4 = 0;
    }
    if (DAT_10027050 == lVar4) {
      iVar3 = (int)((ulong)param_2 >> 0x20);
      uVar1 = 0;
      uVar11 = 0;
      if ((0 < iVar3 && 0 < (int)param_2) && (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170)) {
        uVar9 = param_1 >> 0x20;
        iVar8 = (int)(param_1 >> 0x20);
        uVar7 = iVar3 + iVar8;
        uVar5 = (uint)param_1;
        uVar10 = DAT_10022170;
        if ((int)uVar5 < (int)DAT_10022170) {
          uVar10 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar10 = 0;
        }
        if ((int)DAT_10022174 <= iVar8) {
          uVar9 = (ulong)DAT_10022174;
        }
        if ((long)param_1 < 0) {
          uVar9 = 0;
        }
        uVar5 = (int)param_2 + uVar5;
        uVar2 = DAT_10022170;
        if ((int)uVar5 < (int)DAT_10022170) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0;
        }
        uVar5 = DAT_10022174;
        if ((int)uVar7 < (int)DAT_10022174) {
          uVar5 = uVar7;
        }
        if ((int)uVar7 < 0) {
          uVar5 = 0;
        }
        if (uVar2 - uVar10 == 0 || (int)uVar2 < (int)uVar10) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          iVar3 = uVar5 - (int)uVar9;
          if (iVar3 != 0 && (int)uVar9 <= (int)uVar5) {
            uVar1 = (ulong)uVar10 | uVar9 << 0x20;
            uVar11 = CONCAT44(iVar3,uVar2 - uVar10);
          }
        }
      }
      if (0 < (int)(uVar11 >> 0x20) && 0 < (int)(uint)uVar11) {
        lVar4 = (long)uVar1 >> 0x20;
        do {
          lVar6 = ((int)DAT_10022170 * lVar4 + (long)(int)uVar1) * 4;
          memcpy((void *)(DAT_10022348 + lVar6),(void *)(lVar6 + DAT_10027048),
                             (ulong)((uint)uVar11 & 0x7fffffff) << 2);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (long)((uVar11 & 0xffffffff00000000) + uVar1) >> 0x20);
      }
    }
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022374
#undef DAT_10027048
#undef DAT_10027050

#undef DAT_10020840
#define DAT_10020840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef DAT_10020850
#define DAT_10020850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_1012c518
#define DAT_1012c518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10beffU)))
#undef DAT_1012c520
#define DAT_1012c520 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10bf07U)))
#undef UNK_10020848
#define UNK_10020848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22fU)))
#undef UNK_10020858
#define UNK_10020858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23fU)))
#undef _DAT_10020840
#define _DAT_10020840 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef _DAT_10020850
#define _DAT_10020850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef uRam0000000010020848
#define uRam0000000010020848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22fU)))
#undef uRam0000000010020858
#define uRam0000000010020858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23fU)))
#define local_d8 (*(char (*)[88])(frame + 24))
#define local_80 (*(long *)(frame + 112))
#define local_78 (*(ulong *)(frame + 120))
#define local_70 (*(ulong *)(frame + 128))
#define local_68 (*(ulong *)(frame + 136))
#define local_60 (*(undefined8 *)(frame + 144))
#define local_58 (*(ulong *)(frame + 152))
#define local_50 (*(long *)(frame + 160))
#define local_48 (*(ulong *)(frame + 168))
#define local_3c (*(uint *)(frame + 180))
#define local_38 (*(uint *)(frame + 184))
#define local_31 (*(undefined1 *)(frame + 191))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_1000a100(void)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  bool bVar30;
  uint128 auVar31;

  recovered_1001f770(local_d8);
  iVar17 = 0xf4;
  if (0xf4 < DAT_10022170) {
    iVar17 = DAT_10022170;
  }
  uVar8 = strlen(local_d8);
  uVar15 = (uint)uVar8;
  if (0 < (int)uVar15) {
    do {
      uVar15 = (uint)uVar8;
      uVar6 = recovered_10016f60(local_d8,uVar15);
      if ((int)uVar6 <= iVar17 + -0xf4) goto LAB_1000a17b;
      uVar8 = (ulong)(uVar15 - 1);
    } while (1 < (int)uVar15);
    uVar15 = 0;
  }
LAB_1000a17b:
  uVar7 = recovered_10016f60(local_d8,uVar15);
  lVar5 = DAT_10022348;
  uVar6 = DAT_10022174;
  uVar4 = uRam0000000010020848;
  uVar3 = _DAT_10020840;
  uVar28 = (ulong)DAT_10022170;
  uVar9 = (DAT_10022170 - uVar7) - 2;
  uVar8 = 0xf2;
  if (0xf2 < (int)uVar9) {
    uVar8 = (ulong)uVar9;
  }
  iVar17 = (int)uVar8;
  uVar27 = (ulong)(uint)(DAT_10022170 - iVar17) | 0x1800000000;
  iVar22 = (int)(DAT_1012c520 >> 0x20);
  uVar11 = uVar27;
  uVar29 = uVar8;
  if (0 < iVar22 && 0 < (int)DAT_1012c520) {
    if (DAT_10022170 - iVar17 < 1) {
      uVar11 = DAT_1012c520;
      uVar29 = DAT_1012c518;
    }
    else {
      if ((int)DAT_1012c518 < iVar17) {
        uVar29 = DAT_1012c518 & 0xffffffff;
      }
      uVar9 = (uint)(DAT_1012c518 >> 0x20);
      uVar19 = (int)uVar9 >> 0x1f & uVar9;
      iVar10 = (int)DAT_1012c520 + (int)DAT_1012c518;
      if (iVar10 <= DAT_10022170) {
        iVar10 = DAT_10022170;
      }
      iVar22 = iVar22 + uVar9;
      iVar12 = 0x18;
      if (0x18 < iVar22) {
        iVar12 = iVar22;
      }
      uVar11 = CONCAT44(iVar12 - uVar19,iVar10 - (int)uVar29);
      uVar29 = uVar29 | (ulong)uVar19 << 0x20;
    }
  }
  uVar23 = 0;
  if (((DAT_10022170 < 1) || ((int)DAT_10022174 < 1)) || ((int)uVar11 < 1)) {
LAB_1000a2e2:
    uVar23 = 0;
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    iVar22 = (int)(uVar11 >> 0x20);
    if (0 < iVar22) {
      uVar21 = uVar29 >> 0x20;
      iVar10 = (int)(uVar29 >> 0x20);
      uVar9 = iVar22 + iVar10;
      iVar22 = (int)uVar29;
      uVar23 = uVar28;
      if (iVar22 < DAT_10022170) {
        uVar23 = uVar29;
      }
      uVar19 = (uint)uVar23;
      uVar23 = 0;
      if (iVar22 < 0) {
        uVar19 = 0;
      }
      if ((int)DAT_10022174 <= iVar10) {
        uVar21 = (ulong)DAT_10022174;
      }
      iVar22 = (int)uVar11 + iVar22;
      if ((long)uVar29 < 0) {
        uVar21 = 0;
      }
      iVar10 = DAT_10022170;
      if (iVar22 < DAT_10022170) {
        iVar10 = iVar22;
      }
      if (iVar22 < 0) {
        iVar10 = 0;
      }
      uVar13 = DAT_10022174;
      if ((int)uVar9 < (int)DAT_10022174) {
        uVar13 = uVar9;
      }
      if ((int)uVar9 < 0) {
        uVar13 = 0;
      }
      if (iVar10 - uVar19 == 0 || iVar10 < (int)uVar19) goto LAB_1000a2e2;
      uVar25 = 0;
      iVar22 = uVar13 - (int)uVar21;
      if (iVar22 != 0 && (int)uVar21 <= (int)uVar13) {
        uVar23 = (ulong)uVar19 | uVar21 << 0x20;
        uVar25 = CONCAT44(iVar22,iVar10 - uVar19);
      }
    }
  }
  iVar22 = (int)((ulong)uVar25 >> 0x20);
  if (0 < iVar22 && 0 < (int)uVar25) {
    iVar10 = (int)uVar23;
    local_48 = uVar28;
    if (iVar10 < DAT_10022170) {
      local_48 = uVar23;
    }
    local_48 = local_48 & 0xffffffff;
    if (iVar10 < 0) {
      local_48 = 0;
    }
    uVar19 = (uint)(uVar23 >> 0x20);
    uVar9 = DAT_10022174;
    if ((int)uVar19 < (int)DAT_10022174) {
      uVar9 = uVar19;
    }
    if ((long)uVar23 < 0) {
      uVar9 = 0;
    }
    iVar10 = iVar10 + (int)uVar25;
    iVar12 = DAT_10022170;
    if (iVar10 < DAT_10022170) {
      iVar12 = iVar10;
    }
    if (iVar10 < 0) {
      iVar12 = 0;
    }
    uVar19 = iVar22 + uVar19;
    local_38 = DAT_10022174;
    uVar13 = DAT_10022174;
    if ((int)uVar19 < (int)DAT_10022174) {
      uVar13 = uVar19;
    }
    if ((int)uVar19 < 0) {
      uVar13 = 0;
    }
    local_50 = DAT_10022348;
    bVar30 = DAT_10022348 != 0;
    uVar19 = (uint)local_48;
    bVar2 = (int)uVar19 < iVar12;
    local_31 = bVar2 && bVar30;
    if ((bVar2 && bVar30) && ((int)uVar9 < (int)uVar13)) {
      lVar24 = (long)(int)uVar19;
      lVar26 = (long)(int)uVar9;
      uVar11 = (ulong)(~uVar19 + iVar12) + 1;
      uVar29 = uVar11 & 0xfffffffffffffff8;
      local_80 = uVar29 + lVar24;
      lVar16 = lVar24 * 4 + lVar26 * uVar28 * 4 + DAT_10022348 + 0x10;
      lVar14 = DAT_10022348 + lVar26 * uVar28 * 4;
      do {
        lVar20 = lVar24;
        if (~uVar19 + iVar12 < 7) {
LAB_1000a43d:
          lVar18 = 0;
          do {
            *(undefined4 *)(lVar14 + lVar20 * 4 + lVar18 * 4) = 0xfffafafa;
            lVar18 = lVar18 + 1;
          } while (iVar12 - (int)lVar20 != (int)lVar18);
        }
        else {
          uVar21 = 0;
          do {
            puVar1 = (undefined8 *)(lVar16 + -0x10 + uVar21 * 4);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)(lVar16 + uVar21 * 4);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar21 = uVar21 + 8;
          } while (uVar29 != uVar21);
          lVar20 = local_80;
          if (uVar11 != uVar29) goto LAB_1000a43d;
        }
        lVar26 = lVar26 + 1;
        lVar16 = lVar16 + uVar28 * 4;
        lVar14 = lVar14 + uVar28 * 4;
      } while (lVar26 != (int)uVar13);
    }
    uVar4 = uRam0000000010020858;
    uVar3 = _DAT_10020850;
    local_78 = uVar8;
    local_70 = uVar27;
    local_68 = uVar23;
    local_60 = uVar25;
    local_58 = uVar28;
    local_3c = uVar7;
    if ((bVar2 && bVar30) && 0x17 < (int)uVar6) {
      lVar14 = (long)(int)uVar19;
      if (~uVar19 + iVar12 < 7) {
        lVar16 = lVar14;
      }
      else {
        uVar11 = (ulong)(~uVar19 + iVar12) + 1;
        uVar29 = uVar11 & 0xfffffffffffffff8;
        lVar16 = uVar29 + lVar14;
        lVar14 = uVar28 * 0x5c + lVar14 * 4 + lVar5;
        uVar21 = 0;
        do {
          puVar1 = (undefined8 *)(lVar14 + uVar21 * 4);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + uVar21 * 4);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          uVar21 = uVar21 + 8;
        } while (uVar29 != uVar21);
        if (uVar11 == uVar29) goto LAB_1000a510;
      }
      lVar14 = 0;
      do {
        *(undefined4 *)(lVar5 + uVar28 * 0x5c + lVar16 * 4 + lVar14 * 4) = 0xffa6a6a6;
        lVar14 = lVar14 + 1;
      } while (iVar12 - (int)lVar16 != (int)lVar14);
    }
  }
LAB_1000a510:
  DAT_1012c518 = uVar8;
  DAT_1012c520 = uVar27;
  if (0 < (int)uVar7 && 0 < (int)uVar15) {
    recovered_100101e0(iVar17,7,local_d8,uVar15,0x4b4b4b,1);
  }
  PF_PART8(auVar31, 8) = uVar25;
  PF_PART8(auVar31, 0) = uVar23;
  return auVar31;
}

#undef DAT_10020840
#undef DAT_10020850
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348
#undef DAT_1012c518
#undef DAT_1012c520
#undef UNK_10020848
#undef UNK_10020858
#undef _DAT_10020840
#undef _DAT_10020850
#undef uRam0000000010020848
#undef uRam0000000010020858
#undef local_d8
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_31

#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_1002217c
#define DAT_1002217c (*(int *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022340
#define DAT_10022340 (*(int *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(int *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022374
#define DAT_10022374 (*(char *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10027048
#define DAT_10027048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027050
#define DAT_10027050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a37U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a570
 */

void recovered_1000a570(ulong param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;

  if ((((DAT_10022374 == '\x01') && (DAT_1002217c == -1)) && (DAT_10027048 != 0)) &&
     (DAT_10022348 != 0)) {
    lVar4 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
    if ((long)DAT_10022344 < 1) {
      lVar4 = 0;
    }
    if ((long)DAT_10022340 < 1) {
      lVar4 = 0;
    }
    if (DAT_10027050 == lVar4) {
      iVar3 = (int)((ulong)param_2 >> 0x20);
      uVar1 = 0;
      uVar11 = 0;
      if ((0 < iVar3 && 0 < (int)param_2) && (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170)) {
        uVar9 = param_1 >> 0x20;
        iVar8 = (int)(param_1 >> 0x20);
        uVar7 = iVar3 + iVar8;
        uVar5 = (uint)param_1;
        uVar10 = DAT_10022170;
        if ((int)uVar5 < (int)DAT_10022170) {
          uVar10 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar10 = 0;
        }
        if ((int)DAT_10022174 <= iVar8) {
          uVar9 = (ulong)DAT_10022174;
        }
        if ((long)param_1 < 0) {
          uVar9 = 0;
        }
        uVar5 = (int)param_2 + uVar5;
        uVar2 = DAT_10022170;
        if ((int)uVar5 < (int)DAT_10022170) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0;
        }
        uVar5 = DAT_10022174;
        if ((int)uVar7 < (int)DAT_10022174) {
          uVar5 = uVar7;
        }
        if ((int)uVar7 < 0) {
          uVar5 = 0;
        }
        if (uVar2 - uVar10 == 0 || (int)uVar2 < (int)uVar10) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          iVar3 = uVar5 - (int)uVar9;
          if (iVar3 != 0 && (int)uVar9 <= (int)uVar5) {
            uVar1 = (ulong)uVar10 | uVar9 << 0x20;
            uVar11 = CONCAT44(iVar3,uVar2 - uVar10);
          }
        }
      }
      if (0 < (int)(uVar11 >> 0x20) && 0 < (int)(uint)uVar11) {
        lVar4 = (long)uVar1 >> 0x20;
        do {
          lVar6 = ((int)DAT_10022170 * lVar4 + (long)(int)uVar1) * 4;
          memcpy((void *)(DAT_10027048 + lVar6),(void *)(lVar6 + DAT_10022348),
                             (ulong)((uint)uVar11 & 0x7fffffff) << 2);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (long)((uVar11 & 0xffffffff00000000) + uVar1) >> 0x20);
      }
    }
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_1002217c
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022374
#undef DAT_10027048
#undef DAT_10027050

#undef DAT_10022340
#define DAT_10022340 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(uint *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a710
 */

ulong recovered_1000a710(char *param_1,ulong param_2,undefined8 param_3,undefined1 in_XMM3 [16],
                        undefined1 in_XMM6 [16],undefined1 in_XMM7 [16])

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;

  if (((((*param_1 == '\x01') && (DAT_10022348 != 0)) && (0 < (int)DAT_10022340)) &&
      ((0 < (int)DAT_10022344 && (DAT_10022340 == *(uint *)(param_1 + 0x14))))) &&
     ((DAT_10022344 == *(uint *)(param_1 + 0x18) && (lVar1 = *(long *)(param_1 + 4), lVar1 != 0))))
  {
    uVar3 = recovered_1000aa00((long)param_1);
    if (((char)uVar3 != '\0') && (param_1[0x58] == '\x01')) {
      iVar4 = (int)((ulong)param_3 >> 0x20);
      uVar10 = 0;
      uVar3 = 0;
      if ((0 < iVar4 && 0 < (int)param_3) && (0 < (int)DAT_10022344 && 0 < (int)DAT_10022340)) {
        uVar7 = param_2 >> 0x20;
        iVar6 = (int)(param_2 >> 0x20);
        uVar5 = iVar4 + iVar6;
        uVar8 = (uint)param_2;
        uVar9 = DAT_10022340;
        if ((int)uVar8 < (int)DAT_10022340) {
          uVar9 = uVar8;
        }
        if ((int)uVar8 < 0) {
          uVar9 = 0;
        }
        if ((int)DAT_10022344 <= iVar6) {
          uVar7 = (ulong)DAT_10022344;
        }
        if ((long)param_2 < 0) {
          uVar7 = 0;
        }
        uVar8 = (int)param_3 + uVar8;
        uVar2 = DAT_10022340;
        if ((int)uVar8 < (int)DAT_10022340) {
          uVar2 = uVar8;
        }
        if ((int)uVar8 < 0) {
          uVar2 = 0;
        }
        uVar8 = DAT_10022344;
        if ((int)uVar5 < (int)DAT_10022344) {
          uVar8 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar8 = 0;
        }
        if (uVar2 - uVar9 == 0 || (int)uVar2 < (int)uVar9) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          iVar4 = uVar8 - (int)uVar7;
          if (iVar4 != 0 && (int)uVar7 <= (int)uVar8) {
            uVar10 = (ulong)uVar9 | uVar7 << 0x20;
            uVar3 = CONCAT44(iVar4,uVar2 - uVar9);
          }
        }
      }
      uVar7 = CONCAT71((int7)(param_2 >> 8),1);
      if (0 < (int)((ulong)uVar3 >> 0x20) && 0 < (int)uVar3) {
        recovered_1001fbd0((long)param_1,&DAT_10022340,uVar10,uVar3,in_XMM3,in_XMM6,in_XMM7);
        recovered_10020240((long)param_1,lVar1,uVar10,uVar3);
        recovered_10020460((long)param_1,uVar10,uVar3);
      }
      goto LAB_1000a83a;
    }
  }
  uVar7 = 0;
LAB_1000a83a:
  return uVar7 & 0xffffffff;
}

#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348

#undef DAT_10022178
#define DAT_10022178 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5fU)))
#undef DAT_1002217c
#define DAT_1002217c (*(uint *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_1002231c
#define DAT_1002231c (*(uint *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022340
#define DAT_10022340 (*(int *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(int *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(void * *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022374
#define DAT_10022374 (*(char *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10027048
#define DAT_10027048 (*(void * *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027050
#define DAT_10027050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a37U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8a0
 */

undefined8 recovered_1000a8a0(ulong param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_RAX = 0;
  long lVar4;
  long lVar5;

  uVar1 = DAT_10022178;
  lVar4 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
  if ((long)DAT_10022344 < 1) {
    lVar4 = 0;
  }
  if ((long)DAT_10022340 < 1) {
    lVar4 = 0;
  }
  if (DAT_10022348 == (void *)0x0) {
    lVar4 = 0;
  }
  if (0x13 < (ulong)DAT_10022178) {
    return 0;
  }
  lVar5 = (ulong)DAT_10022178 * 0xda8;
  if (*(char *)(DAT_10022368 + lVar5) == '\x01') {
    if (*(char *)(DAT_10022368 + lVar5 + 1) != '\x01') {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    uVar2 = recovered_10018260();
    if ((char)uVar2 != '\0') {
      if (((DAT_10022374 == '\x01') && (DAT_1002217c == uVar1)) && (DAT_10027050 == lVar4)) {
        recovered_10009f60(param_1,param_2);
      }
      else {
        recovered_10020580(uVar1);
        uVar2 = (long)DAT_10022340 * (long)DAT_10022344 * 4;
        if ((uVar2 != 0 &&
             ((0 < (long)DAT_10022344 && 0 < (long)DAT_10022340) && DAT_10022348 != (void *)0x0)) &&
           (uVar3 = recovered_10018260(), (char)uVar3 != '\0')) {
          memcpy(DAT_10027048,DAT_10022348,uVar2);
          DAT_10022374 = '\x01';
          DAT_1002217c = uVar1;
        }
      }
      recovered_1000e5b0((char *)(lVar5 + DAT_10022368),uVar1 == DAT_1002231c);
      return CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
  return 0;
}

#undef DAT_10022178
#undef DAT_1002217c
#undef DAT_1002231c
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022368
#undef DAT_10022374
#undef DAT_10027048
#undef DAT_10027050

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa00
 */

undefined8 recovered_1000aa00(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_1 == 0) {
    return 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar5 = 0;
  if ((uVar4 < 0x21) && ((0x101018000U >> (uVar4 & 0x3f) & 1) != 0)) {
    uVar5 = uVar4 + 7 >> 3;
  }
  uVar5 = uVar5 * *(uint *)(param_1 + 0x14);
  if (uVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < uVar5) {
    return 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x18) * (ulong)uVar1;
  if (uVar5 == 0) {
    return 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    if (((*(long *)(param_1 + 0x40) != 0) && (*(ulong *)(param_1 + 0x48) == uVar5)) &&
       (*(ulong *)(param_1 + 0x50) == uVar5)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x53 < uVar1))))
    {
      uVar1 = UINT_00006850;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x38));
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x53 < uVar1))))
    {
      uVar1 = UINT_00006850;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        (*(code *)(ulong)uVar1)(*(void **)(param_1 + 0x40));
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  iVar2 = Ram0000000000006800;
  if ((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000006804, iVar2 == 0)) ||
      (uVar1 = Ram0000000000006808, uVar1 < 0xc)) || (uVar1 = Ram0000000000006808, uVar1 < 0x50)) {
LAB_1000abf1:
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 0;
  }
  uVar1 = UINT_0000684c;
  if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_1000abf1;
  pvVar3 = (*(code *)(ulong)uVar1)(uVar5);
  *(void **)(param_1 + 0x38) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x4f < uVar1)))) {
    uVar1 = UINT_0000684c;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      pvVar3 = (*(code *)(ulong)uVar1)(uVar5);
      *(void **)(param_1 + 0x40) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        *(ulong *)(param_1 + 0x48) = uVar5;
        *(ulong *)(param_1 + 0x50) = uVar5;
        *(undefined1 *)(param_1 + 0x58) = 0;
        return CONCAT71((int7)((ulong)pvVar3 >> 8),1);
      }
      pvVar3 = *(void **)(param_1 + 0x38);
      goto LAB_1000ac08;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_1000ac08:
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x53 < uVar1)))) {
    uVar1 = UINT_00006850;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      (*(code *)(ulong)uVar1)(pvVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac60
 */

void recovered_1000ac60(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((((void *)*param_1 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)((void *)*param_1);
    }
  }
  memset(param_1,0,0x18);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020ade
#define DAT_10020ade (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c5U)))
#undef DAT_10020b89
#define DAT_10020b89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x570U)))
#undef DAT_10020b97
#define DAT_10020b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef DAT_10020b98
#define DAT_10020b98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57fU)))
#undef DAT_10020b99
#define DAT_10020b99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x580U)))
#undef DAT_10020b9a
#define DAT_10020b9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x581U)))
#undef DAT_10020b9e
#define DAT_10020b9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x585U)))
#undef DAT_10020ba7
#define DAT_10020ba7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58eU)))
#undef DAT_10022184
#define DAT_10022184 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002218c
#define DAT_1002218c (*(uint *)(((uintptr_t)pf_module_state + 0x1b73U)))
#undef DAT_10022190
#define DAT_10022190 (*(uint *)(((uintptr_t)pf_module_state + 0x1b77U)))
#undef DAT_10022194
#define DAT_10022194 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b7bU)))
#undef DAT_10022314
#define DAT_10022314 (*(int *)(((uintptr_t)pf_module_state + 0x1cfbU)))
#undef DAT_10027090
#define DAT_10027090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a77U)))
#undef DAT_10027094
#define DAT_10027094 (*(int *)(((uintptr_t)pf_module_state + 0x6a7bU)))
#undef DAT_100270a0
#define DAT_100270a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a87U)))
#undef DAT_100270a1
#define DAT_100270a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a88U)))
#undef DAT_100270a2
#define DAT_100270a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a89U)))
#undef DAT_100270a3
#define DAT_100270a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a8aU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef str_10020acc
#define str_10020acc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10020ae1
#define str_10020ae1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
#undef str_10020aec
#define str_10020aec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_10020afd
#define str_10020afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e4U)))
#undef str_10020b0a
#define str_10020b0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f1U)))
#undef str_10020b1d
#define str_10020b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x504U)))
#undef str_10020b2d
#define str_10020b2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x514U)))
#undef str_10020b3c
#define str_10020b3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x523U)))
#undef str_10020b4b
#define str_10020b4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#undef str_10020b61
#define str_10020b61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x548U)))
#undef str_10020b72
#define str_10020b72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x559U)))
#undef str_10020b7d
#define str_10020b7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x564U)))
#undef str_10020b83
#define str_10020b83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56aU)))
#undef str_10020b8e
#define str_10020b8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x575U)))
#undef str_100221a0
#define str_100221a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b87U)))
#undef str_10022220
#define str_10022220 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c07U)))
#define uStack_190 (*(undefined8 *)(frame + 16))
#define local_188 (*(char (*)[320])(frame + 24))
#define local_48 (*(ulong *)(frame + 344))
#define local_40 (*(uint *)(frame + 352))
#define local_3c (*(uint *)(frame + 356))
#define local_34 (*(int *)(frame + 364))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acd0
 */

ulong recovered_1000acd0(int param_1)

{
  unsigned char frame[448] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte bVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  char *pcVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;

  pbVar18 = (byte *)0x0;
  uStack_190 = 0x1000acf9;
  memset(&local_40,0,0xc);
  if (-1 < param_1) {
    iVar6 = Ram0000000000006800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
        (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0xcb < uVar5))
    {
      uVar5 = UINT_000068c8;
      if ((code *)(ulong)uVar5 == (code *)0x0) {
        uVar5 = 0;
      }
      else {
        uStack_190 = 0x1000ad50;
        uVar5 = (*(code *)(ulong)uVar5)(param_1,str_10020acc,&local_40);
      }
    }
    else {
      iVar6 = Ram0000000000006800;
      uVar5 = 0;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
         ((uVar21 = Ram0000000000006808, 0xb < uVar21 &&
          (uVar21 = Ram0000000000006808, 0x37 < uVar21)))) {
        uVar21 = UINT_00006834;
        if ((code *)(ulong)uVar21 != (code *)0x0) {
          uStack_190 = 0x1000ad9e;
          uVar5 = (*(code *)(ulong)uVar21)(str_10020acc,&local_40);
        }
      }
    }
    if (local_40 != 0 && (local_3c != 0 && uVar5 != 0)) {
      uVar8 = (ulong)local_3c;
      local_48 = (ulong)local_40;
      uVar23 = 0;
      local_34 = param_1;
LAB_1000ae07:
      uVar19 = local_48;
      pcVar10 = local_188;
      uVar15 = 0;
      while( true ) {
        uVar17 = uVar15;
        uVar24 = uVar23;
        if (*(char *)(uVar19 + uVar23) == '\n') break;
        if (uVar15 == 0x130) {
          uVar17 = 0x130;
          break;
        }
        uVar17 = uVar15 | 1;
        uVar24 = uVar23 + 1;
        local_188[uVar15] = *(char *)(uVar19 + uVar23);
        if ((uVar8 <= uVar24) || (*(char *)(uVar19 + uVar24) == '\n')) break;
        uVar15 = uVar15 + 2;
        uVar23 = uVar23 + 2;
        local_188[uVar17] = *(char *)(uVar19 + uVar24);
        uVar17 = uVar15;
        uVar24 = uVar23;
        if (uVar8 <= uVar23) break;
      }
      uVar23 = uVar24;
      if (uVar24 < uVar8) {
        do {
          uVar24 = uVar24 + 1;
          uVar23 = uVar24;
          if (*(char *)((uVar19 - 1) + uVar24) == '\n') goto LAB_1000aeb0;
        } while (uVar24 != uVar8);
        uVar23 = uVar8;
      }
LAB_1000aeb0:
      local_188[uVar17] = '\0';
      uStack_190 = 0x1000aec0;
      uVar8 = strlen(pcVar10);
      while (((uVar8 != 0 && ((ulong)(byte)local_188[uVar8 - 1] < 0x21)) &&
             ((0x100002200U >> ((ulong)(byte)local_188[uVar8 - 1] & 0x3f) & 1) != 0))) {
        local_188[uVar8 - 1] = '\0';
        uVar8 = uVar8 - 1;
      }
LAB_1000af00:
      switch((uintptr_t)(*pcVar10)) {
      case '\0':
        goto switchD_1000af11_caseD_0;
      case '\t':
      case '\r':
      case ' ':
        pcVar10 = pcVar10 + 1;
        goto LAB_1000af00;
      }
      pbVar18 = &DAT_10020ade;
      uStack_190 = 0x1000af2f;
      uVar8 = strlen(&DAT_10020ade);
      uStack_190 = 0x1000af3d;
      iVar6 = strncmp(pcVar10,&DAT_10020ade,uVar8);
      if (iVar6 == 0) goto switchD_1000af11_caseD_0;
      uStack_190 = 0x1000af52;
      pbVar9 = (byte *)strchr(pcVar10,0x3d);
      if (pbVar9 == (byte *)0x0) goto switchD_1000af11_caseD_0;
      *pbVar9 = 0;
      uStack_190 = 0x1000af69;
      uVar8 = strlen(pcVar10);
      while (((uVar8 != 0 && ((ulong)(byte)pcVar10[uVar8 - 1] < 0x21)) &&
             ((0x100002200U >> ((ulong)(byte)pcVar10[uVar8 - 1] & 0x3f) & 1) != 0))) {
        pcVar10[uVar8 - 1] = '\0';
        uVar8 = uVar8 - 1;
      }
      pbVar22 = pbVar9 + 2;
      pbVar18 = pbVar9 + 4;
      while( true ) {
        pbVar9 = pbVar9 + 1;
        if ((0x20 < (ulong)*pbVar9) || ((0x100002200U >> ((ulong)*pbVar9 & 0x3f) & 1) == 0)) break;
        pbVar22 = pbVar22 + 1;
        pbVar18 = pbVar18 + 1;
      }
      uStack_190 = 0x1000afdb;
      iVar6 = strcmp(pcVar10,str_10020ae1);
      if (iVar6 == 0) {
        do {
          switch((uintptr_t)(pbVar22[-1])) {
          case 9:
          case 0xd:
          case 0x20:
            pbVar22 = pbVar22 + 1;
            break;
          default:
            goto switchD_1000b3d4_caseD_a;
          case 0x22:
            lVar11 = 0;
            goto LAB_1000b3dd;
          }
        } while( true );
      }
      uStack_190 = 0x1000aff2;
      iVar6 = strcmp(pcVar10,str_10020aec);
      if (iVar6 == 0) {
LAB_1000b116:
        bVar16 = *pbVar9;
        switch((uintptr_t)(bVar16)) {
        case 0:
          break;
        default:
          uVar5 = 0;
          if ((byte)(bVar16 - 0x30U) < 10) {
            uVar5 = 0;
            do {
              if ((0x19999999 < uVar5) || (uVar5 == 0x19999999 && 5 < (byte)(bVar16 - 0x30U)))
              goto switchD_1000af11_caseD_0;
              uVar5 = (uint)(byte)(bVar16 - 0x30U) + uVar5 * 10;
              bVar16 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while ((byte)(bVar16 - 0x30U) < 10);
          }
          if ((bVar16 < 0xe) && ((0x2401U >> (bVar16 & 0x1f) & 1) != 0)) {
            if (99 < uVar5) {
              uVar5 = 100;
            }
            DAT_10022184 = (undefined1)((uVar5 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
          }
          break;
        case 9:
        case 0xd:
        case 0x20:
          goto switchD_1000b12f_caseD_9;
        }
        goto switchD_1000af11_caseD_0;
      }
      uStack_190 = 0x1000b009;
      iVar6 = strcmp(pcVar10,str_10020afd);
      if (iVar6 == 0) {
LAB_1000b1c6:
        bVar16 = *pbVar9;
        switch((uintptr_t)(bVar16)) {
        case 0:
          break;
        default:
          uVar5 = 0;
          if ((byte)(bVar16 - 0x30U) < 10) {
            uVar5 = 0;
            do {
              if ((0x19999999 < uVar5) || (uVar5 == 0x19999999 && 5 < (byte)(bVar16 - 0x30U)))
              goto switchD_1000af11_caseD_0;
              uVar5 = (uint)(byte)(bVar16 - 0x30U) + uVar5 * 10;
              bVar16 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while ((byte)(bVar16 - 0x30U) < 10);
          }
          if ((bVar16 < 0xe) && ((0x2401U >> (bVar16 & 0x1f) & 1) != 0)) {
            if (99 < uVar5) {
              uVar5 = 100;
            }
            DAT_10027090 = (undefined1)((uVar5 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
          }
          break;
        case 9:
        case 0xd:
        case 0x20:
          goto switchD_1000b1df_caseD_9;
        }
        goto switchD_1000af11_caseD_0;
      }
      uStack_190 = 0x1000b020;
      iVar6 = strcmp(pcVar10,str_10020b0a);
      if (iVar6 == 0) {
LAB_1000b276:
        bVar16 = *pbVar9;
        switch((uintptr_t)(bVar16)) {
        case 0:
          break;
        default:
          uVar5 = 0;
          if ((byte)(bVar16 - 0x30U) < 10) {
            uVar5 = 0;
            do {
              if ((0x19999999 < uVar5) || (uVar5 == 0x19999999 && 5 < (byte)(bVar16 - 0x30U)))
              goto switchD_1000af11_caseD_0;
              uVar5 = (uint)(byte)(bVar16 - 0x30U) + uVar5 * 10;
              bVar16 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while ((byte)(bVar16 - 0x30U) < 10);
          }
          if ((bVar16 < 0xe) && ((0x2401U >> (bVar16 & 0x1f) & 1) != 0)) {
            if (0xfff < uVar5) {
              uVar5 = 0x1000;
            }
            DAT_10022190 = uVar5;
          }
          break;
        case 9:
        case 0xd:
        case 0x20:
          goto switchD_1000b28f_caseD_9;
        }
        goto switchD_1000af11_caseD_0;
      }
      uStack_190 = 0x1000b037;
      iVar6 = strcmp(pcVar10,str_10020b1d);
      if (iVar6 == 0) {
        do {
          bVar16 = *pbVar9;
          switch((uintptr_t)(bVar16)) {
          case 0:
            goto switchD_1000af11_caseD_0;
          default:
            uVar5 = 0;
            if (9 < (byte)(bVar16 - 0x30U)) goto LAB_1000b37a;
            uVar5 = 0;
            goto LAB_1000b340;
          case 9:
          case 0xd:
          case 0x20:
            pbVar9 = pbVar9 + 1;
            pbVar22 = pbVar22 + 1;
          }
        } while( true );
      }
      uStack_190 = 0x1000b04e;
      iVar6 = strcmp(pcVar10,str_10020b2d);
      if (iVar6 == 0) {
        do {
          switch((uintptr_t)(pbVar22[-1])) {
          case 9:
          case 0xd:
          case 0x20:
            pbVar22 = pbVar22 + 1;
            break;
          default:
            goto switchD_1000b538_caseD_a;
          case 0x22:
            lVar11 = 0;
            goto LAB_1000b5c8;
          }
        } while( true );
      }
      uStack_190 = 0x1000b065;
      iVar6 = strcmp(pcVar10,str_10020b3c);
      if (iVar6 == 0) {
LAB_1000b4e0:
        do {
          switch((uintptr_t)(pbVar22[-1])) {
          case 9:
          case 0xd:
          case 0x20:
            pbVar22 = pbVar22 + 1;
            break;
          default:
            goto switchD_1000b4f8_caseD_a;
          case 0x22:
            lVar11 = 0;
            goto LAB_1000b541;
          }
        } while( true );
      }
      uStack_190 = 0x1000b07c;
      iVar6 = strcmp(pcVar10,str_10020b4b);
      if (iVar6 == 0) goto LAB_1000b4e0;
      uStack_190 = 0x1000b093;
      iVar6 = strcmp(pcVar10,str_10020b61);
      if (iVar6 == 0) {
        uStack_190 = 0x1000b655;
        pcVar10 = recovered_1000c180(pbVar9);
        cVar1 = *pcVar10;
        if (cVar1 != '\0') {
          pcVar20 = str_100221a0;
          uVar8 = 1;
          do {
            *(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x1b86U)) = cVar1;
            uVar19 = uVar8 + 1;
            if (0x7e < uVar8) break;
            cVar1 = pcVar10[uVar8];
            uVar8 = uVar19;
          } while (cVar1 != '\0');
          goto LAB_1000b689;
        }
      }
      else {
        uStack_190 = 0x1000b0aa;
        iVar6 = strcmp(pcVar10,str_10020b72);
        if (iVar6 == 0) {
          uStack_190 = 0x1000b0ba;
          pcVar10 = recovered_1000c180(pbVar9);
          cVar1 = *pcVar10;
          if (cVar1 == '\0') goto switchD_1000af11_caseD_0;
          pcVar20 = str_10022220;
          uVar8 = 1;
          while( true ) {
            *(char *)(uVar8 + ((uintptr_t)pf_module_state + 0x1c06U)) = cVar1;
            uVar19 = uVar8 + 1;
            if (0xef < uVar8) break;
            cVar1 = pcVar10[uVar8];
            uVar8 = uVar19;
            if (cVar1 == '\0') break;
          }
LAB_1000b689:
          pcVar20[uVar19 - 1] = '\0';
        }
      }
      goto switchD_1000af11_caseD_0;
    }
    pbVar18 = (byte *)0x0;
  }
LAB_1000bd0e:
  return (ulong)pbVar18 & 0xffffffff;
LAB_1000b3dd:
  bVar16 = pbVar22[lVar11];
  if (((bVar16 == 0) || (bVar16 == 0x22)) || (lVar11 == 0xf0)) goto LAB_1000b44a;
  (&DAT_100270a0)[lVar11] = bVar16;
  bVar16 = pbVar22[lVar11 + 1];
  if ((bVar16 != 0) && (bVar16 != 0x22)) {
    (&DAT_100270a1)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 2];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 2;
      goto LAB_1000b44a;
    }
    (&DAT_100270a2)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 3];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 3;
      goto LAB_1000b44a;
    }
    (&DAT_100270a3)[lVar11] = bVar16;
    lVar11 = lVar11 + 4;
    goto LAB_1000b3dd;
  }
  lVar11 = lVar11 + 1;
LAB_1000b44a:
  (&DAT_100270a0)[lVar11] = 0;
  pbVar22 = &DAT_100270a0;
LAB_1000b451:
  uStack_190 = 0x1000b460;
  iVar6 = strcmp((char *)pbVar22,str_10020b7d);
  if (iVar6 == 0) {
    DAT_10022188 = 0;
  }
  else {
    uStack_190 = 0x1000b477;
    iVar6 = strcmp((char *)pbVar22,str_10020b83);
    if (iVar6 == 0) {
      DAT_10022188 = 1;
    }
    else {
      uStack_190 = 0x1000b48a;
      iVar6 = strcmp((char *)pbVar22,&DAT_10020b89);
      if (iVar6 == 0) {
        DAT_10022188 = 2;
      }
      else {
        uStack_190 = 0x1000b49d;
        iVar6 = strcmp((char *)pbVar22,str_10020b8e);
        if (iVar6 == 0) {
          DAT_10022188 = 3;
        }
      }
    }
  }
  goto switchD_1000af11_caseD_0;
switchD_1000b3d4_caseD_a:
  pbVar22 = pbVar22 + -1;
  goto LAB_1000b451;
switchD_1000b12f_caseD_9:
  pbVar9 = pbVar9 + 1;
  pbVar22 = pbVar22 + 1;
  goto LAB_1000b116;
switchD_1000b1df_caseD_9:
  pbVar9 = pbVar9 + 1;
  pbVar22 = pbVar22 + 1;
  goto LAB_1000b1c6;
switchD_1000b28f_caseD_9:
  pbVar9 = pbVar9 + 1;
  pbVar22 = pbVar22 + 1;
  goto LAB_1000b276;
LAB_1000b340:
  if (0x19999999 < uVar5) goto switchD_1000af11_caseD_0;
  if (uVar5 == 0x19999999 && 5 < (byte)(bVar16 - 0x30U)) goto switchD_1000af11_caseD_0;
  uVar5 = (uint)(byte)(bVar16 - 0x30U) + uVar5 * 10;
  bVar16 = *pbVar22;
  pbVar22 = pbVar22 + 1;
  if (9 < (byte)(bVar16 - 0x30U)) goto LAB_1000b37a;
  goto LAB_1000b340;
LAB_1000b37a:
  if (bVar16 < 0xe) {
    if ((0x2401U >> (bVar16 & 0x1f) & 1) != 0) {
      if (0xfff < uVar5) {
        uVar5 = 0x1000;
      }
      DAT_1002218c = uVar5;
    }
  }
  goto switchD_1000af11_caseD_0;
LAB_1000b5c8:
  bVar16 = pbVar22[lVar11];
  if (((bVar16 == 0) || (bVar16 == 0x22)) || (lVar11 == 0xf0)) goto LAB_1000b76c;
  (&DAT_100270a0)[lVar11] = bVar16;
  bVar16 = pbVar22[lVar11 + 1];
  if ((bVar16 != 0) && (bVar16 != 0x22)) {
    (&DAT_100270a1)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 2];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 2;
      goto LAB_1000b76c;
    }
    (&DAT_100270a2)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 3];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 3;
      goto LAB_1000b76c;
    }
    (&DAT_100270a3)[lVar11] = bVar16;
    lVar11 = lVar11 + 4;
    goto LAB_1000b5c8;
  }
  lVar11 = lVar11 + 1;
LAB_1000b76c:
  (&DAT_100270a0)[lVar11] = 0;
  pbVar22 = &DAT_100270a0;
LAB_1000b773:
  pbVar22 = pbVar22 + 3;
  while( true ) {
    bVar16 = pbVar22[-3];
    if ((0x20 < (ulong)bVar16) || ((0x100002200U >> ((ulong)bVar16 & 0x3f) & 1) == 0)) break;
    pbVar22 = pbVar22 + 1;
  }
  bVar4 = pbVar22[-3];
  if (bVar4 == 0) {
    bVar14 = 0x55;
    bVar4 = 0;
LAB_1000b810:
    if (bVar4 != bVar14) goto LAB_1000b818;
LAB_1000b898:
    DAT_10027094 = 0;
    goto switchD_1000af11_caseD_0;
  }
  bVar14 = bVar4 | 0x20;
  if (0x19 < (byte)(bVar4 + 0xbf)) {
    bVar14 = bVar4;
  }
  if (bVar14 == 0x75) {
    bVar4 = pbVar22[-2];
    if (bVar4 == 0) {
      bVar14 = 0x54;
      bVar4 = 0;
    }
    else {
      bVar14 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar14 = bVar4;
      }
      if (bVar14 != 0x74) goto LAB_1000b818;
      bVar4 = pbVar22[-1];
      if (bVar4 == 0) {
        bVar14 = 0x43;
        bVar4 = 0;
      }
      else {
        bVar14 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar14 = bVar4;
        }
        if (bVar14 != 99) goto LAB_1000b818;
        bVar4 = *pbVar22;
        bVar14 = 0;
      }
    }
    goto LAB_1000b810;
  }
LAB_1000b818:
  bVar4 = pbVar22[-3];
  if (bVar4 == 0) {
    bVar14 = 0x47;
    bVar4 = 0;
LAB_1000b893:
    if (bVar4 == bVar14) goto LAB_1000b898;
  }
  else {
    bVar14 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar14 = bVar4;
    }
    if (bVar14 == 0x67) {
      bVar4 = pbVar22[-2];
      if (bVar4 == 0) {
        bVar14 = 0x4d;
        bVar4 = 0;
      }
      else {
        bVar14 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar14 = bVar4;
        }
        if (bVar14 != 0x6d) goto LAB_1000b8a5;
        bVar4 = pbVar22[-1];
        if (bVar4 == 0) {
          bVar14 = 0x54;
          bVar4 = 0;
        }
        else {
          bVar14 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar14 = bVar4;
          }
          if (bVar14 != 0x74) goto LAB_1000b8a5;
          bVar4 = *pbVar22;
          bVar14 = 0;
        }
      }
      goto LAB_1000b893;
    }
  }
LAB_1000b8a5:
  if (bVar16 < 0x67) {
    if (bVar16 != 0x47) {
      if (bVar16 == 0x55) goto LAB_1000b8c0;
      goto LAB_1000b8f9;
    }
LAB_1000b8df:
    if (((pbVar22[-2] | 0x20) != 0x6d) || ((pbVar22[-1] | 0x20) != 0x74)) {
LAB_1000b8f9:
      pbVar22 = pbVar22 + -3;
    }
  }
  else {
    if (bVar16 == 0x67) goto LAB_1000b8df;
    if (bVar16 != 0x75) goto LAB_1000b8f9;
LAB_1000b8c0:
    if (((pbVar22[-2] | 0x20) != 0x74) || ((pbVar22[-1] | 0x20) != 99)) {
      if (bVar16 == 0x67) goto LAB_1000b8df;
      goto LAB_1000b8f9;
    }
  }
  if (*pbVar22 == 0x2d) {
    pbVar22 = pbVar22 + 1;
    iVar6 = -1;
  }
  else {
    iVar6 = 1;
    if (*pbVar22 == 0x2b) {
      pbVar22 = pbVar22 + 1;
    }
  }
  uVar8 = (ulong)(*pbVar22 == 0x2d);
  if (0xf5 < (byte)(pbVar22[uVar8] - 0x3a)) {
    bVar16 = pbVar22[uVar8] - 0x30U;
    pbVar12 = pbVar22 + uVar8 + 1;
    uVar5 = 0;
    do {
      if (0xccccccc < (int)uVar5) goto switchD_1000af11_caseD_0;
      uVar5 = (uint)bVar16 + uVar5 * 10;
      bVar4 = *pbVar12;
      bVar16 = bVar4 - 0x30U;
      pbVar12 = pbVar12 + 1;
    } while (bVar16 < 10);
    uVar21 = -uVar5;
    if (*pbVar22 != 0x2d) {
      uVar21 = uVar5;
    }
    if (bVar4 == 0) {
      bVar16 = *pbVar9;
      while (bVar16 != 0) {
        bVar4 = bVar16 | 0x20;
        if (0x19 < (byte)(bVar16 + 0xbf)) {
          bVar4 = bVar16;
        }
        bVar16 = pbVar18[-2];
        if (bVar4 == 0x75) {
          pcVar10 = &DAT_10020b97;
          if (bVar16 != 0) {
            bVar4 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar4 = bVar16;
            }
            if (bVar4 != 0x74) goto LAB_1000b9e9;
            bVar4 = pbVar18[-1];
            pcVar10 = &DAT_10020b98;
            if (bVar4 != 0) {
              bVar14 = bVar4 | 0x20;
              if (0x19 < (byte)(bVar4 + 0xbf)) {
                bVar14 = bVar4;
              }
              if (bVar14 != 99) goto LAB_1000b9e9;
              pcVar10 = &DAT_10020b99;
              if (*pbVar18 != 0) goto LAB_1000ba75;
            }
          }
          if (*pcVar10 == '\0') goto LAB_1000ba75;
        }
LAB_1000b9e9:
        pbVar18 = pbVar18 + 1;
      }
      uStack_190 = 0x1000ba71;
      uVar13 = recovered_1000c310(pbVar9,&DAT_10020b9a);
      if ((char)uVar13 != '\0') {
LAB_1000ba75:
        uVar21 = uVar21 * 0x3c;
      }
      if (uVar21 + 0x5a0 < 0xb41) {
        iVar6 = uVar21 * iVar6;
LAB_1000ba92:
        DAT_10027094 = iVar6;
      }
    }
    else if (bVar4 == 0x3a) {
      bVar16 = *pbVar12;
      if (0xf5 < (byte)(pbVar12[bVar16 == 0x2d] - 0x3a)) {
        pbVar12 = pbVar12 + (bVar16 == 0x2d);
        uVar5 = 0;
        do {
          bVar4 = *pbVar12 - 0x30U;
          if (9 < bVar4) {
            uVar7 = -uVar5;
            if (bVar16 != 0x2d) {
              uVar7 = uVar5;
            }
            if (uVar7 < 0x3c) {
              if (*pbVar12 == 0) {
                if (uVar21 < 0x19) {
                  iVar6 = (uVar7 + uVar21 * 0x3c) * iVar6;
                  if (iVar6 + 0x5a0U < 0xb41) goto LAB_1000ba92;
                }
              }
            }
            break;
          }
          pbVar12 = pbVar12 + 1;
          bVar2 = (int)uVar5 < 0xccccccd;
          uVar5 = (uint)bVar4 + uVar5 * 10;
        } while (bVar2);
      }
    }
  }
  goto switchD_1000af11_caseD_0;
switchD_1000b538_caseD_a:
  pbVar22 = pbVar22 + -1;
  goto LAB_1000b773;
LAB_1000b541:
  bVar16 = pbVar22[lVar11];
  if (((bVar16 == 0) || (bVar16 == 0x22)) || (lVar11 == 0xf0)) goto LAB_1000b6b3;
  (&DAT_100270a0)[lVar11] = bVar16;
  bVar16 = pbVar22[lVar11 + 1];
  if ((bVar16 != 0) && (bVar16 != 0x22)) {
    (&DAT_100270a1)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 2];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 2;
      goto LAB_1000b6b3;
    }
    (&DAT_100270a2)[lVar11] = bVar16;
    bVar16 = pbVar22[lVar11 + 3];
    if ((bVar16 == 0) || (bVar16 == 0x22)) {
      lVar11 = lVar11 + 3;
      goto LAB_1000b6b3;
    }
    (&DAT_100270a3)[lVar11] = bVar16;
    lVar11 = lVar11 + 4;
    goto LAB_1000b541;
  }
  lVar11 = lVar11 + 1;
LAB_1000b6b3:
  (&DAT_100270a0)[lVar11] = 0;
  pbVar22 = &DAT_100270a0;
LAB_1000b6ba:
  bVar16 = *pbVar22;
  if (bVar16 == 0) {
    bVar4 = 0x74;
    bVar16 = 0;
LAB_1000ba9f:
    uVar3 = 1;
    if (bVar16 != bVar4) goto LAB_1000baa9;
  }
  else {
    bVar4 = bVar16 | 0x20;
    if (0x19 < (byte)(bVar16 + 0xbf)) {
      bVar4 = bVar16;
    }
    if (bVar4 == 0x74) {
      bVar16 = pbVar22[1];
      if (bVar16 == 0) {
        bVar4 = 0x72;
        bVar16 = 0;
      }
      else {
        bVar4 = bVar16 | 0x20;
        if (0x19 < (byte)(bVar16 + 0xbf)) {
          bVar4 = bVar16;
        }
        if (bVar4 != 0x72) goto LAB_1000baa9;
        bVar16 = pbVar22[2];
        if (bVar16 == 0) {
          bVar4 = 0x75;
          bVar16 = 0;
        }
        else {
          bVar4 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar4 = bVar16;
          }
          if (bVar4 != 0x75) goto LAB_1000baa9;
          bVar16 = pbVar22[3];
          if (bVar16 == 0) {
            bVar4 = 0x65;
            bVar16 = 0;
          }
          else {
            bVar4 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar4 = bVar16;
            }
            if (bVar4 != 0x65) goto LAB_1000baa9;
            bVar16 = pbVar22[4];
            bVar4 = 0;
          }
        }
      }
      goto LAB_1000ba9f;
    }
LAB_1000baa9:
    bVar16 = *pbVar22;
    if (bVar16 == 0) {
      bVar4 = 0x79;
      bVar16 = 0;
LAB_1000bb16:
      uVar3 = 1;
      if (bVar16 == bVar4) goto LAB_1000bcf8;
    }
    else {
      bVar4 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar4 = bVar16;
      }
      if (bVar4 == 0x79) {
        bVar16 = pbVar22[1];
        if (bVar16 == 0) {
          bVar4 = 0x65;
          bVar16 = 0;
        }
        else {
          bVar4 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar4 = bVar16;
          }
          if (bVar4 != 0x65) goto LAB_1000bb20;
          bVar16 = pbVar22[2];
          if (bVar16 == 0) {
            bVar4 = 0x73;
            bVar16 = 0;
          }
          else {
            bVar4 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar4 = bVar16;
            }
            if (bVar4 != 0x73) goto LAB_1000bb20;
            bVar16 = pbVar22[3];
            bVar4 = 0;
          }
        }
        goto LAB_1000bb16;
      }
    }
LAB_1000bb20:
    bVar16 = *pbVar22;
    if (bVar16 == 0) {
      bVar4 = 0x6f;
      bVar16 = 0;
LAB_1000bb6b:
      uVar3 = 1;
      if (bVar16 == bVar4) goto LAB_1000bcf8;
    }
    else {
      bVar4 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar4 = bVar16;
      }
      if (bVar4 == 0x6f) {
        bVar16 = pbVar22[1];
        if (bVar16 == 0) {
          bVar4 = 0x6e;
          bVar16 = 0;
        }
        else {
          bVar4 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar4 = bVar16;
          }
          if (bVar4 != 0x6e) goto LAB_1000bb75;
          bVar16 = pbVar22[2];
          bVar4 = 0;
        }
        goto LAB_1000bb6b;
      }
    }
LAB_1000bb75:
    uStack_190 = 0x1000bb84;
    iVar6 = strcmp((char *)pbVar22,&DAT_10020b9e);
    if (iVar6 == 0) {
      DAT_10022194 = 1;
      goto switchD_1000af11_caseD_0;
    }
    bVar16 = *pbVar22;
    if (bVar16 == 0) {
      bVar4 = 0x66;
      bVar16 = 0;
LAB_1000bcb5:
      if (bVar16 != bVar4) goto LAB_1000bcb9;
    }
    else {
      bVar4 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar4 = bVar16;
      }
      if (bVar4 == 0x66) {
        bVar16 = pbVar22[1];
        if (bVar16 == 0) {
          bVar4 = 0x61;
          bVar16 = 0;
        }
        else {
          bVar4 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar4 = bVar16;
          }
          if (bVar4 != 0x61) goto LAB_1000bcb9;
          bVar16 = pbVar22[2];
          if (bVar16 == 0) {
            bVar4 = 0x6c;
            bVar16 = 0;
          }
          else {
            bVar4 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar4 = bVar16;
            }
            if (bVar4 != 0x6c) goto LAB_1000bcb9;
            bVar16 = pbVar22[3];
            if (bVar16 == 0) {
              bVar4 = 0x73;
              bVar16 = 0;
            }
            else {
              bVar4 = bVar16 | 0x20;
              if (0x19 < (byte)(bVar16 + 0xbf)) {
                bVar4 = bVar16;
              }
              if (bVar4 != 0x73) goto LAB_1000bcb9;
              bVar16 = pbVar22[4];
              if (bVar16 == 0) {
                bVar4 = 0x65;
                bVar16 = 0;
              }
              else {
                bVar4 = bVar16 | 0x20;
                if (0x19 < (byte)(bVar16 + 0xbf)) {
                  bVar4 = bVar16;
                }
                if (bVar4 != 0x65) goto LAB_1000bcb9;
                bVar16 = pbVar22[5];
                bVar4 = 0;
              }
            }
          }
        }
        goto LAB_1000bcb5;
      }
LAB_1000bcb9:
      uStack_190 = 0x1000bcc8;
      uVar13 = recovered_1000c2a0((long)pbVar22,((uintptr_t)pf_module_state + 0x587U));
      if ((char)uVar13 == '\0') {
        uStack_190 = 0x1000bcdb;
        uVar13 = recovered_1000c2a0((long)pbVar22,((uintptr_t)pf_module_state + 0x58aU));
        if ((char)uVar13 == '\0') {
          uStack_190 = 0x1000bcee;
          iVar6 = strcmp((char *)pbVar22,&DAT_10020ba7);
          if (iVar6 != 0) goto switchD_1000af11_caseD_0;
        }
      }
    }
    uVar3 = 0;
  }
LAB_1000bcf8:
  DAT_10022194 = uVar3;
switchD_1000af11_caseD_0:
  uVar8 = (ulong)local_3c;
  if (uVar8 <= uVar23) {
    DAT_10022314 = local_34;
    pbVar18 = (byte *)CONCAT71((int7)((ulong)pbVar18 >> 8),1);
    goto LAB_1000bd0e;
  }
  goto LAB_1000ae07;
switchD_1000b4f8_caseD_a:
  pbVar22 = pbVar22 + -1;
  goto LAB_1000b6ba;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020ade
#undef DAT_10020b89
#undef DAT_10020b97
#undef DAT_10020b98
#undef DAT_10020b99
#undef DAT_10020b9a
#undef DAT_10020b9e
#undef DAT_10020ba7
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002218c
#undef DAT_10022190
#undef DAT_10022194
#undef DAT_10022314
#undef DAT_10027090
#undef DAT_10027094
#undef DAT_100270a0
#undef DAT_100270a1
#undef DAT_100270a2
#undef DAT_100270a3
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef str_10020acc
#undef str_10020ae1
#undef str_10020aec
#undef str_10020afd
#undef str_10020b0a
#undef str_10020b1d
#undef str_10020b2d
#undef str_10020b3c
#undef str_10020b4b
#undef str_10020b61
#undef str_10020b72
#undef str_10020b7d
#undef str_10020b83
#undef str_10020b8e
#undef str_100221a0
#undef str_10022220
#undef uStack_190
#undef local_188
#undef local_48
#undef local_40
#undef local_3c
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0f0
 */

uint recovered_1000c0f0(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcb < uVar2)) {
    uVar2 = UINT_000068c8;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000c133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x37 < uVar2))))
    {
      uVar2 = UINT_00006834;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000c178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100270a0
#define DAT_100270a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a87U)))
#undef DAT_100270a1
#define DAT_100270a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a88U)))
#undef DAT_100270a2
#define DAT_100270a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a89U)))
#undef DAT_100270a3
#define DAT_100270a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a8aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c180
 */

undefined1 * recovered_1000c180(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;

  if (param_1 == (undefined1 *)0x0) {
    return &DAT_10020a84;
  }
  do {
    switch((uintptr_t)(*param_1)) {
    case 9:
    case 0xd:
    case 0x20:
      param_1 = param_1 + 1;
      break;
    default:
      return param_1;
    case 0x22:
      lVar2 = 0;
      goto LAB_1000c1ba;
    }
  } while( true );
LAB_1000c1ba:
  cVar1 = param_1[lVar2 + 1];
  if (((cVar1 == '\0') || (cVar1 == '\"')) || (lVar2 == 0xf0)) goto LAB_1000c224;
  (&DAT_100270a0)[lVar2] = cVar1;
  cVar1 = param_1[lVar2 + 2];
  if ((cVar1 == '\0') || (cVar1 == '\"')) {
    lVar2 = lVar2 + 1;
LAB_1000c224:
    (&DAT_100270a0)[lVar2] = 0;
    return &DAT_100270a0;
  }
  (&DAT_100270a1)[lVar2] = cVar1;
  cVar1 = param_1[lVar2 + 3];
  if ((cVar1 == '\0') || (cVar1 == '\"')) {
    lVar2 = lVar2 + 2;
    goto LAB_1000c224;
  }
  (&DAT_100270a2)[lVar2] = cVar1;
  cVar1 = param_1[lVar2 + 4];
  if ((cVar1 == '\0') || (cVar1 == '\"')) {
    lVar2 = lVar2 + 3;
    goto LAB_1000c224;
  }
  (&DAT_100270a3)[lVar2] = cVar1;
  lVar2 = lVar2 + 4;
  goto LAB_1000c1ba;
}

#undef DAT_10020a84
#undef DAT_100270a0
#undef DAT_100270a1
#undef DAT_100270a2
#undef DAT_100270a3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2a0
 */

undefined8 recovered_1000c2a0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;

  if (param_2 != 0 && param_1 != 0) {
    lVar2 = 0;
    do {
      bVar3 = *(byte *)(param_1 + lVar2);
      bVar1 = *(byte *)(param_2 + lVar2);
      if ((bVar3 == 0) || (bVar1 == 0)) {
        return CONCAT71((int7)((ulong)lVar2 >> 8),bVar3 == bVar1);
      }
      bVar4 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar4 = bVar3;
      }
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      lVar2 = lVar2 + 1;
    } while (bVar4 == bVar3);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

undefined8 recovered_1000c310(byte *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;

  uVar2 = CONCAT71((int7)((ulong)in_RAX >> 8),param_1 == (byte *)0x0);
  if (((param_2 == (char *)0x0 || param_1 == (byte *)0x0) || (*param_2 == '\0')) ||
     (bVar3 = *param_1, bVar3 == 0)) {
    return 0;
  }
  lVar5 = 0;
LAB_1000c340:
  bVar1 = param_2[lVar5];
  uVar2 = CONCAT71((int7)((ulong)uVar2 >> 8),1);
  if (bVar1 == 0) {
    return uVar2;
  }
  bVar4 = bVar3 | 0x20;
  if (0x19 < (byte)(bVar3 + 0xbf)) {
    bVar4 = bVar3;
  }
  bVar3 = bVar1 | 0x20;
  if (0x19 < (byte)(bVar1 + 0xbf)) {
    bVar3 = bVar1;
  }
  if (bVar4 == bVar3) goto code_r0x1000c37f;
  goto LAB_1000c391;
code_r0x1000c37f:
  bVar3 = param_1[lVar5 + 1];
  lVar5 = lVar5 + 1;
  if (bVar3 == 0) {
    if (param_2[lVar5] == '\0') {
      return uVar2;
    }
LAB_1000c391:
    bVar3 = param_1[1];
    param_1 = param_1 + 1;
    uVar2 = 0;
    if (bVar3 == 0) {
      return 0;
    }
    lVar5 = 0;
  }
  goto LAB_1000c340;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef str_10020bae
#define str_10020bae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x595U)))
#undef str_10020bcd
#define str_10020bcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b4U)))
#undef str_10020bec
#define str_10020bec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d3U)))
#define local_1c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3b0
 */

undefined8 recovered_1000c3b0(int param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  undefined8 uVar3;
  undefined4 extraout_var_00 = 0;
  undefined4 extraout_var_01 = 0;
  undefined4 extraout_var_02 = 0;
  undefined4 extraout_var_03 = 0;
  undefined4 extraout_var_04 = 0;

  if (param_1 < 0) {
    return 0;
  }
  memset(local_1c,0,0xc);
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcb < uVar2)) {
    uVar2 = UINT_000068c8;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)(param_1,str_10020bae,local_1c);
      uVar3 = CONCAT44(extraout_var,uVar2);
LAB_1000c46b:
      if ((int)uVar3 != 0) {
        return CONCAT71((int7)((ulong)uVar3 >> 8),1);
      }
    }
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x37 < uVar2))))
    {
      uVar2 = UINT_00006834;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)(str_10020bae,local_1c);
        uVar3 = CONCAT44(extraout_var_00,uVar2);
        goto LAB_1000c46b;
      }
    }
  }
  memset(local_1c,0,0xc);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xcb < uVar2)))) {
    uVar2 = UINT_000068c8;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000c52b;
    uVar2 = (*(code *)(ulong)uVar2)(param_1,str_10020bcd,local_1c);
    uVar3 = CONCAT44(extraout_var_01,uVar2);
  }
  else {
    iVar1 = Ram0000000000006800;
    if ((((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
        (uVar2 = Ram0000000000006808, uVar2 < 0xc)) || (uVar2 = Ram0000000000006808, uVar2 < 0x38))
    goto LAB_1000c52b;
    uVar2 = UINT_00006834;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000c52b;
    uVar2 = (*(code *)(ulong)uVar2)(str_10020bcd,local_1c);
    uVar3 = CONCAT44(extraout_var_02,uVar2);
  }
  if ((int)uVar3 != 0) {
    return CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
LAB_1000c52b:
  memset(local_1c,0,0xc);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xcb < uVar2)))) {
    uVar2 = UINT_000068c8;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)uVar2)(param_1,str_10020bec,local_1c);
    uVar3 = CONCAT44(extraout_var_03,uVar2);
  }
  else {
    iVar1 = Ram0000000000006800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram0000000000006804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0x38) {
      return 0;
    }
    uVar2 = UINT_00006834;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)uVar2)(str_10020bec,local_1c);
    uVar3 = CONCAT44(extraout_var_04,uVar2);
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  return CONCAT71((int7)((ulong)uVar3 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef str_10020bae
#undef str_10020bcd
#undef str_10020bec
#undef local_1c

#undef DAT_10020ba9
#define DAT_10020ba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x590U)))
#define local_158 (*(char (*)[248])(frame + 56))
#define local_60 (*(char * *)(frame + 304))
#define local_58 (*(ulong *)(frame + 312))
#define local_50 (*(ulong *)(frame + 320))
#define local_44 (*(uint *)(frame + 332))
#define local_40 (*(ulong *)(frame + 336))
#define local_31 (*(bool *)(frame + 351))
#define acStack_180 (*(char (*)[32])(frame + 16))
#define uStack_160 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5f0
 */

void recovered_1000c5f0(long param_1,uint param_2,char param_3,char *param_4,uint param_5)

{
  unsigned char frame[432] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  ulong uVar20;
  bool bVar21;

  if (param_2 == 0) {
    return;
  }
  uVar20 = (ulong)param_2;
  uVar17 = param_1 + uVar20;
  local_31 = (int)param_5 < 1 || param_4 == (char *)0x0;
  local_58 = (ulong)param_5;
  uVar1 = uVar20 - 1;
  uVar8 = 0;
  local_60 = param_4;
  local_44 = param_2;
  local_50 = uVar20;
  local_40 = uVar17;
LAB_1000c65f:
  uVar7 = (uint)uVar8;
  if (param_1 != 0) {
    uVar5 = (ulong)(*(char *)(param_1 + uVar8) == '-');
    cVar12 = *(char *)(uVar5 + param_1 + uVar8);
    if ((byte)(cVar12 - 0x3aU) < 0xf6) goto LAB_1000c790;
    uVar5 = param_1 + uVar8 + uVar5;
    bVar9 = cVar12 - 0x30;
    iVar13 = 0;
    if (bVar9 < 10) {
      iVar13 = 0;
      do {
        if (0xccccccc < iVar13) goto LAB_1000c790;
        iVar13 = (uint)bVar9 + iVar13 * 10;
        cVar12 = *(char *)(uVar5 + 1);
        uVar5 = uVar5 + 1;
        bVar9 = cVar12 - 0x30;
      } while (bVar9 < 10);
    }
    iVar3 = -iVar13;
    if (*(char *)(param_1 + uVar8) != '-') {
      iVar3 = iVar13;
    }
    if (uVar17 <= uVar5 || cVar12 != '|') goto LAB_1000c790;
    if (uVar5 + 1 < uVar17) {
      lVar16 = 2;
      uVar18 = 0;
      do {
        cVar12 = *(char *)((uVar5 - 1) + lVar16);
        if ((cVar12 == '\n') || (cVar12 == '\r')) break;
        if (lVar16 == 0xf2) {
          uVar18 = 0xf0;
          goto LAB_1000c7ec;
        }
        local_158[lVar16 + -2] = cVar12;
        if (uVar17 <= uVar5 + lVar16) {
          uVar18 = uVar18 | 1;
          goto LAB_1000c7ec;
        }
        cVar12 = *(char *)(uVar5 + lVar16);
        if ((cVar12 == '\n') || (cVar12 == '\r')) {
          uVar18 = lVar16 - 1;
          goto LAB_1000c7ec;
        }
        uVar18 = uVar18 + 2;
        local_158[lVar16 + -1] = cVar12;
        lVar2 = uVar5 + lVar16;
        lVar16 = lVar16 + 2;
      } while (lVar2 + 1U < uVar17);
      uVar18 = lVar16 - 2;
    }
    else {
      uVar18 = 0;
    }
LAB_1000c7ec:
    local_158[uVar18] = '\0';
    if (param_3 == '\0') {
      pcVar6 = param_4;
      uVar5 = local_58;
      if (local_31 == false) {
        do {
          if (*pcVar6 == '\0') {
            *pcVar6 = '\x01';
            *(int *)(pcVar6 + 0x11c) = iVar3;
            if (local_158[0] == '\0') {
              pcVar6[0x29] = '\0';
              pcVar14 = &DAT_10020ba9;
              goto LAB_1000c951;
            }
            lVar16 = 0x29;
            cVar12 = local_158[0];
            goto LAB_1000c880;
          }
          uVar5 = uVar5 - 1;
          pcVar6 = pcVar6 + 0x124;
        } while (uVar5 != 0);
      }
    }
    else {
      uStack_160 = 0x1000c808;
      recovered_100041c0(local_158,iVar3);
      param_4 = local_60;
      uVar17 = local_40;
      uVar20 = local_50;
      param_2 = local_44;
    }
    goto LAB_1000c9a4;
  }
LAB_1000c790:
  uVar4 = 0;
  if (uVar7 < param_2) {
    bVar21 = true;
    uVar5 = uVar8;
    if (*(char *)(param_1 + uVar8) != '\n') {
      do {
        if (uVar1 == uVar5) goto LAB_1000c64c;
        uVar8 = uVar5 + 1;
        pcVar6 = (char *)(param_1 + 1 + uVar5);
        uVar5 = uVar8;
      } while (*pcVar6 != '\n');
      goto LAB_1000c7c8;
    }
    goto LAB_1000c651;
  }
  goto LAB_1000c654;
  while( true ) {
    cVar12 = acStack_180[lVar16];
    lVar16 = lVar2;
    if (cVar12 == '\0') break;
LAB_1000c880:
    pcVar6[lVar16] = cVar12;
    lVar2 = lVar16 + 1;
    if (0xef < lVar16 - 0x28U) break;
  }
  pcVar6[lVar2] = '\0';
  pcVar14 = local_158;
  pcVar11 = (char *)0x0;
  cVar12 = local_158[0];
  do {
    cVar19 = cVar12;
    pcVar10 = pcVar11;
    pcVar11 = pcVar10;
    if (cVar19 == '/') {
      pcVar11 = pcVar14;
    }
    pcVar15 = pcVar14 + 1;
    pcVar14 = pcVar14 + 1;
    cVar12 = *pcVar15;
  } while (*pcVar15 != '\0');
  pcVar10 = pcVar10 + 1;
  if (cVar19 == '/') {
    pcVar10 = pcVar14;
  }
  pcVar15 = local_158;
  if (pcVar11 == (char *)0x0) {
    pcVar10 = pcVar15;
  }
  pcVar14 = &DAT_10020ba9;
  uVar20 = local_50;
  if (*pcVar10 != '\0') {
    pcVar11 = (char *)0x0;
    cVar12 = local_158[0];
    do {
      cVar19 = cVar12;
      pcVar14 = pcVar11;
      pcVar11 = pcVar14;
      if (cVar19 == '/') {
        pcVar11 = pcVar15;
      }
      pcVar10 = pcVar15 + 1;
      pcVar15 = pcVar15 + 1;
      cVar12 = *pcVar10;
    } while (*pcVar10 != '\0');
    pcVar14 = pcVar14 + 1;
    if (cVar19 == '/') {
      pcVar14 = pcVar15;
    }
    if (pcVar11 == (char *)0x0) {
      pcVar14 = local_158;
    }
  }
LAB_1000c951:
  cVar12 = *pcVar14;
  if (cVar12 == '\0') {
    uVar17 = 0;
  }
  else {
    uVar5 = 1;
    do {
      uVar17 = uVar5;
      pcVar6[uVar17] = cVar12;
      if (0x26 < uVar17) break;
      cVar12 = pcVar14[uVar17];
      uVar5 = uVar17 + 1;
    } while (cVar12 != '\0');
  }
  pcVar6[uVar17 + 1] = '\0';
  pcVar6[0x120] = '\x01';
  uVar17 = local_40;
LAB_1000c9a4:
  uVar4 = 0;
  if (param_2 <= uVar7) goto LAB_1000c654;
  bVar21 = true;
  uVar5 = uVar8;
  if (*(char *)(param_1 + uVar8) != '\n') {
    do {
      if (uVar1 == uVar5) goto LAB_1000c64c;
      uVar8 = uVar5 + 1;
      pcVar6 = (char *)(param_1 + 1 + uVar5);
      uVar5 = uVar8;
    } while (*pcVar6 != '\n');
LAB_1000c7c8:
    bVar21 = uVar8 < uVar20;
  }
LAB_1000c651:
  uVar7 = (uint)uVar8;
  uVar4 = (uint)bVar21;
LAB_1000c654:
  uVar8 = (ulong)(uVar7 + uVar4);
  if (param_2 <= uVar7 + uVar4) {
    return;
  }
  goto LAB_1000c65f;
LAB_1000c64c:
  bVar21 = false;
  uVar8 = uVar20 & 0xffffffff;
  goto LAB_1000c651;
}

#undef DAT_10020ba9
#undef local_158
#undef local_60
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_31
#undef acStack_180
#undef uStack_160

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022184
#define DAT_10022184 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002218c
#define DAT_1002218c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b73U)))
#undef DAT_10022190
#define DAT_10022190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b77U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022370
#define DAT_10022370 (*(uint *)(((uintptr_t)pf_module_state + 0x1d57U)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_10027090
#define DAT_10027090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a77U)))
#undef str_10020a69
#define str_10020a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(char * *)(frame + 24))
#define local_40 (*(int *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_38 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9f0
 */

void recovered_1000c9f0(char *param_1,int param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;

  lVar11 = 8;
  lVar10 = 0;
  lVar6 = DAT_10022988;
  do {
    if ((*(char *)(lVar6 + -8 + lVar11) == '\x01') && (*(int *)(lVar6 + -4 + lVar11) == 0)) {
      iVar2 = strcmp((char *)(lVar6 + lVar11),str_10020a69);
      if (iVar2 == 0) goto LAB_1000ca5e;
      lVar6 = DAT_10022988;
    }
    lVar10 = lVar10 + 1;
    lVar11 = lVar11 + 300;
  } while (lVar10 != 0x12);
  lVar10 = 0xffffffff;
LAB_1000ca5e:
  local_50 = 0;
  local_4c = (undefined4)lVar10;
  local_48 = str_10020a69;
  local_40 = (DAT_10022370 % 5) * 0x12 + 0x40;
  local_3c = (DAT_10022370 % 5) * 0xc + 0x38;
  local_38 = 0x14c000001f4;
  uVar5 = recovered_1000cbb0((undefined8 *)&local_50);
  lVar6 = DAT_10022368;
  if (-1 < (int)uVar5) {
    lVar10 = (uVar5 & 0xffffffff) * 0xda8;
    *(undefined1 *)(DAT_10022368 + 5 + lVar10) = DAT_10022184;
    *(undefined1 *)(lVar6 + 6 + lVar10) = DAT_10027090;
    uVar1 = DAT_10022188;
    uVar3 = 1;
    if (DAT_10022188 < 4) {
      uVar3 = DAT_10022188;
    }
    *(uint *)(lVar6 + 8 + lVar10) = uVar3;
    if (uVar1 == 3) {
      uVar4 = DAT_10022190;
    }
    else {
      uVar4 = 0;
      if (uVar1 == 2) {
        uVar4 = DAT_1002218c;
      }
    }
    *(undefined4 *)(lVar6 + 0xc + lVar10) = uVar4;
    lVar11 = lVar6 + lVar10 + 0x78;
    pcVar7 = &DAT_10020a84;
    if (param_1 != (char *)0x0) {
      pcVar7 = param_1;
    }
    cVar8 = *pcVar7;
    if (cVar8 == '\0') {
      uVar5 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar5 = uVar9 + 1;
        *(char *)(lVar11 + uVar9) = cVar8;
        if (0xef < uVar5) break;
        cVar8 = pcVar7[uVar9 + 1];
        uVar9 = uVar5;
      } while (cVar8 != '\0');
    }
    *(undefined1 *)(lVar11 + uVar5) = 0;
    if (param_2 < 0) {
      param_2 = recovered_10004540();
      lVar6 = DAT_10022368;
    }
    *(int *)(lVar6 + 0x25c + lVar10) = param_2;
    *(undefined1 *)(lVar6 + 0x260 + lVar10) = 0;
    recovered_1000cff0(lVar6 + lVar10);
  }
  return;
}

#undef DAT_10020a84
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002218c
#undef DAT_10022190
#undef DAT_10022368
#undef DAT_10022370
#undef DAT_10022988
#undef DAT_10027090
#undef str_10020a69
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022184
#define DAT_10022184 (*(char *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002218c
#define DAT_1002218c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b73U)))
#undef DAT_10022190
#define DAT_10022190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b77U)))
#undef DAT_1002231c
#define DAT_1002231c (*(int *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022368
#define DAT_10022368 (*(char * *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10027090
#define DAT_10027090 (*(char *)(((uintptr_t)pf_module_state + 0x6a77U)))
#undef DAT_10027194
#define DAT_10027194 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbb0
 */

long recovered_1000cbb0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  char *dst;

  if (param_1 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (*DAT_10022368 == '\0') {
    lVar13 = 0;
    dst = DAT_10022368;
  }
  else if (DAT_10022368[0xda8] == '\x01') {
    if (DAT_10022368[0x1b50] == '\x01') {
      if (DAT_10022368[0x28f8] == '\x01') {
        if (DAT_10022368[0x36a0] == '\x01') {
          if (DAT_10022368[0x4448] == '\x01') {
            if (DAT_10022368[0x51f0] == '\x01') {
              if (DAT_10022368[0x5f98] == '\x01') {
                if (DAT_10022368[0x6d40] == '\x01') {
                  if (DAT_10022368[0x7ae8] == '\x01') {
                    if (DAT_10022368[0x8890] == '\x01') {
                      if (DAT_10022368[0x9638] == '\x01') {
                        if (DAT_10022368[0xa3e0] == '\x01') {
                          if (DAT_10022368[0xb188] == '\x01') {
                            if (DAT_10022368[0xbf30] == '\x01') {
                              if (DAT_10022368[0xccd8] == '\x01') {
                                if (DAT_10022368[0xda80] == '\x01') {
                                  if (DAT_10022368[0xe828] == '\x01') {
                                    if (DAT_10022368[0xf5d0] == '\x01') {
                                      if (DAT_10022368[0x10378] == '\x01') {
                                        return 0xffffffff;
                                      }
                                      lVar13 = 0x13;
                                      dst = DAT_10022368 + 0x10378;
                                    }
                                    else {
                                      lVar13 = 0x12;
                                      dst = DAT_10022368 + 0xf5d0;
                                    }
                                  }
                                  else {
                                    lVar13 = 0x11;
                                    dst = DAT_10022368 + 0xe828;
                                  }
                                }
                                else {
                                  lVar13 = 0x10;
                                  dst = DAT_10022368 + 0xda80;
                                }
                              }
                              else {
                                lVar13 = 0xf;
                                dst = DAT_10022368 + 0xccd8;
                              }
                            }
                            else {
                              lVar13 = 0xe;
                              dst = DAT_10022368 + 0xbf30;
                            }
                          }
                          else {
                            lVar13 = 0xd;
                            dst = DAT_10022368 + 0xb188;
                          }
                        }
                        else {
                          lVar13 = 0xc;
                          dst = DAT_10022368 + 0xa3e0;
                        }
                      }
                      else {
                        lVar13 = 0xb;
                        dst = DAT_10022368 + 0x9638;
                      }
                    }
                    else {
                      lVar13 = 10;
                      dst = DAT_10022368 + 0x8890;
                    }
                  }
                  else {
                    lVar13 = 9;
                    dst = DAT_10022368 + 0x7ae8;
                  }
                }
                else {
                  lVar13 = 8;
                  dst = DAT_10022368 + 0x6d40;
                }
              }
              else {
                lVar13 = 7;
                dst = DAT_10022368 + 0x5f98;
              }
            }
            else {
              lVar13 = 6;
              dst = DAT_10022368 + 0x51f0;
            }
          }
          else {
            lVar13 = 5;
            dst = DAT_10022368 + 0x4448;
          }
        }
        else {
          lVar13 = 4;
          dst = DAT_10022368 + 0x36a0;
        }
      }
      else {
        lVar13 = 3;
        dst = DAT_10022368 + 0x28f8;
      }
    }
    else {
      lVar13 = 2;
      dst = DAT_10022368 + 0x1b50;
    }
  }
  else {
    lVar13 = 1;
    dst = DAT_10022368 + 0xda8;
  }
  memset(dst,0,0xda8);
  dst[0] = '\x01';
  dst[1] = '\x01';
  *(undefined8 *)(dst + 0x10) = *param_1;
  dst[5] = DAT_10022184;
  dst[6] = DAT_10027090;
  uVar11 = DAT_10022188;
  uVar7 = 1;
  if (DAT_10022188 < 4) {
    uVar7 = DAT_10022188;
  }
  *(uint *)(dst + 8) = uVar7;
  if (uVar11 == 3) {
    uVar18 = DAT_10022190;
  }
  else {
    uVar18 = 0;
    if (uVar11 == 2) {
      uVar18 = DAT_1002218c;
    }
  }
  *(undefined4 *)(dst + 0xc) = uVar18;
  pcVar8 = &DAT_10020a84;
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar8 = (char *)param_1[1];
  }
  cVar10 = *pcVar8;
  if (cVar10 == '\0') {
    uVar15 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar15 = uVar17 + 1;
      dst[uVar17 + 0x18] = cVar10;
      if (0x3e < uVar15) break;
      cVar10 = pcVar8[uVar17 + 1];
      uVar17 = uVar15;
    } while (cVar10 != '\0');
  }
  dst[uVar15 + 0x18] = '\0';
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *(undefined8 *)(dst + 0x68) = uVar3;
  *(undefined8 *)(dst + 0x70) = uVar4;
  *(undefined8 *)(dst + 0x58) = uVar3;
  *(undefined8 *)(dst + 0x60) = uVar4;
  dst[0xafc] = '\0';
  lVar6 = DAT_10022990;
  dst[0xafd] = '\0';
  dst[0xafe] = '\0';
  dst[0xaff] = '\0';
  uVar11 = 0xffffffff;
  iVar12 = (int)lVar13;
  if (0 < (long)(int)DAT_10027194) {
    lVar9 = 0;
    do {
      if (*(int *)(DAT_10022990 + lVar9 * 4) == iVar12) {
        uVar11 = (uint)lVar9;
        break;
      }
      lVar9 = lVar9 + 1;
    } while ((int)DAT_10027194 != lVar9);
  }
  if (DAT_10022368[lVar13 * 0xda8] != '\x01') {
    return lVar13;
  }
  if ((int)uVar11 < 0) {
    if (0x13 < (int)DAT_10027194) {
      DAT_1002231c = iVar12;
      return lVar13;
    }
    uVar7 = DAT_10027194;
    DAT_10027194 = DAT_10027194 + 1;
  }
  else {
    uVar7 = DAT_10027194 - 1;
    if ((int)uVar11 < (int)uVar7) {
      uVar17 = (ulong)uVar11;
      uVar15 = uVar7 - uVar17;
      if (uVar15 < 8) {
        uVar14 = uVar17;
      }
      else {
        uVar16 = uVar15 & 0xfffffffffffffff8;
        uVar14 = uVar16 + uVar17;
        lVar9 = DAT_10022990 + uVar17 * 4;
        uVar17 = 0;
        do {
          puVar2 = (undefined8 *)(lVar9 + 4 + uVar17 * 4);
          uVar3 = puVar2[1];
          puVar1 = (undefined8 *)(lVar9 + 0x14 + uVar17 * 4);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar9 + uVar17 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar17 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar17 = uVar17 + 8;
        } while (uVar16 != uVar17);
        if (uVar15 == uVar16) goto LAB_1000cfd3;
      }
      do {
        *(undefined4 *)(lVar6 + uVar14 * 4) = *(undefined4 *)(lVar6 + 4 + uVar14 * 4);
        uVar14 = uVar14 + 1;
      } while (uVar7 != uVar14);
    }
  }
LAB_1000cfd3:
  *(int *)(lVar6 + (long)(int)uVar7 * 4) = iVar12;
  DAT_1002231c = iVar12;
  return lVar13;
}

#undef DAT_10020a84
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002218c
#undef DAT_10022190
#undef DAT_1002231c
#undef DAT_10022368
#undef DAT_10022990
#undef DAT_10027090
#undef DAT_10027194

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
#define local_360 (*(char (*)[241])(frame + 16))
#define local_26f (*(char (*)[247])(frame + 257))
#define local_178 (*(undefined8 *)(frame + 504))
#define local_170 (*(undefined8 *)(frame + 512))
#define local_168 (*(char (*)[256])(frame + 520))
#define local_68 (*(char * *)(frame + 776))
#define local_60 (*(char * *)(frame + 784))
#define local_58 (*(char * *)(frame + 792))
#define local_50 (*(long *)(frame + 800))
#define local_48 (*(char * *)(frame + 808))
#define local_40 (*(undefined8 *)(frame + 816))
#define local_34 (*(uint *)(frame + 828))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cff0
 */

void recovered_1000cff0(long param_1)

{
  unsigned char frame[912] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  void *dst;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *src;
  long lVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;

  local_34 = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  dst = *(void **)(param_1 + 0xaf0);
  if (dst == (void *)0x0) {
    iVar3 = Ram0000000000006800;
    if ((((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
        (uVar2 = Ram0000000000006808, uVar2 < 0xc)) || (uVar2 = Ram0000000000006808, uVar2 < 0x50))
    {
LAB_1000d12f:
      *(undefined8 *)(param_1 + 0xaf0) = 0;
      *(undefined4 *)(param_1 + 0xaf8) = 0;
      return;
    }
    uVar2 = UINT_0000684c;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000d12f;
    dst = (*(code *)(ulong)uVar2)(0x1f69ba8);
    *(void **)(param_1 + 0xaf0) = dst;
    if (dst == (void *)0x0) {
      *(undefined4 *)(param_1 + 0xaf8) = 0;
      return;
    }
  }
  local_50 = param_1;
  memset(dst,0,0x1f69ba8);
  if (*(char *)(local_50 + 0x260) == '\x01') {
    iVar3 = Ram0000000000006800;
    if ((((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
        (uVar2 = Ram0000000000006808, uVar2 < 0xc)) || (uVar2 = Ram0000000000006808, uVar2 < 0xc4))
    goto LAB_1000d288;
    uVar2 = UINT_000068c0;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000d288;
    uVar2 = (*(code *)(ulong)uVar2)(*(void **)(local_50 + 0xaf0),0xff4b,&local_34);
  }
  else {
    iVar3 = Ram0000000000006800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xcf < uVar2))))
    {
      uVar2 = UINT_000068cc;
      if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000d288;
      uVar2 = (*(code *)(ulong)uVar2)
                        (*(int *)(local_50 + 0x25c),(char *)(local_50 + 0x78),
                         *(void **)(local_50 + 0xaf0),0xff4b,&local_34);
    }
    else {
      iVar3 = Ram0000000000006800;
      if (((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
         ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x88)))
         ) goto LAB_1000d288;
      uVar2 = UINT_00006884;
      if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000d288;
      uVar2 = (*(code *)(ulong)uVar2)
                        ((char *)(local_50 + 0x78),*(void **)(local_50 + 0xaf0),0xff4b,&local_34);
    }
  }
  if (uVar2 == 0) {
LAB_1000d288:
    *(undefined4 *)(local_50 + 0xaf8) = 0;
    return;
  }
  if (0xff4b < local_34) {
    local_34 = 0xff4b;
  }
  bVar14 = *(byte *)(local_50 + 0x260);
  if (bVar14 != 0) goto LAB_1000d62a;
  pcVar13 = *(char **)(local_50 + 0xaf0);
  PF_PART4(local_40, 0) = 0;
  if (local_34 != 0 && pcVar13 != (char *)0x0) {
    local_58 = (char *)(local_50 + 0x78);
    local_60 = (char *)(ulong)local_34;
    local_68 = pcVar13 + 0xf1;
    uVar10 = 0;
    local_40 = (char *)((ulong)PF_PART4(local_40, 4) << 0x20);
    local_48 = pcVar13;
LAB_1000d2bc:
    memcpy(local_360,pcVar13 + uVar10 * 0x1f8,0x1f8);
    for (pcVar15 = local_26f; (*pcVar15 == '/' || (*pcVar15 == '\\')); pcVar15 = pcVar15 + 1) {
    }
    for (pcVar12 = local_58; (*pcVar12 == '\\' || (*pcVar12 == '/')); pcVar12 = pcVar12 + 1) {
    }
    uVar4 = strlen(pcVar12);
    cVar1 = *pcVar15;
    if (cVar1 == '\0') goto LAB_1000d2a4;
    src = pcVar15;
    if (*pcVar12 != '\0') {
      iVar3 = strcmp(pcVar15,pcVar12);
      src = &DAT_10020a84;
      if (iVar3 != 0) {
        uVar5 = strlen(pcVar12);
        iVar3 = strncmp(pcVar15,pcVar12,uVar5);
        if ((iVar3 != 0) || ((pcVar15[uVar4] != '/' && (pcVar15[uVar4] != '\\'))))
        goto LAB_1000d2a4;
        src = pcVar15 + uVar4 + 1;
      }
      cVar1 = *src;
      if (cVar1 == '\0') goto LAB_1000d2a4;
    }
    uVar4 = 0;
    while (cVar1 != '\0') {
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        if (0xf0 < uVar4 || uVar4 == 0) goto LAB_1000d2a4;
        cVar1 = *local_58;
        pcVar15 = local_168;
        uVar5 = uVar4;
        if (cVar1 == '\0') goto LAB_1000d4af;
        uVar5 = 0;
        goto LAB_1000d42e;
      }
      lVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      cVar1 = src[lVar7];
    }
    if ((uint)local_40 != 0) {
      uVar4 = (ulong)local_40 & 0xffffffff;
      pcVar13 = local_68;
      do {
        iVar3 = strcmp(pcVar13,local_26f);
        if (iVar3 == 0) {
          pcVar13 = local_48;
          goto LAB_1000d2af;
        }
        pcVar13 = pcVar13 + 0x1f8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    goto LAB_1000d5e6;
  }
LAB_1000d623:
  local_34 = (uint)local_40;
LAB_1000d62a:
  *(uint *)(local_50 + 0xaf8) = local_34;
  if (((bVar14 & 1) == 0) && (1 < local_34)) {
    pcVar13 = *(char **)(local_50 + 0xaf0);
    local_40 = (char *)(ulong)local_34;
    pcVar12 = (char *)0x1;
    pcVar15 = pcVar13;
    local_60 = pcVar13;
    do {
      memcpy(local_360,pcVar13 + (long)pcVar12 * 0x1f8,0x1f8);
      local_58 = pcVar12;
      local_48 = pcVar15;
      do {
        bVar14 = 1;
        if (*(int *)(pcVar15 + 0x1ec) != 2) {
          bVar14 = (pcVar15[0x1e8] & 2U) >> 1;
        }
        if (PF_PART4(local_178, 4) == 2) {
          iVar3 = strcmp(pcVar15,local_360);
          bVar9 = 1;
        }
        else {
          uVar2 = (uint)local_178 & 2;
          iVar3 = strcmp(pcVar15,local_360);
          bVar9 = (byte)(uVar2 >> 1);
          if ((~bVar14 & 1) == 0 && bVar9 == 0) goto LAB_1000d668;
        }
        if ((bVar14 == bVar9) && (iVar3 < 1)) goto LAB_1000d668;
        pcVar12 = pcVar12 + -1;
        memcpy(pcVar15 + 0x1f8,pcVar15,0x1f8);
        pcVar15 = pcVar15 + -0x1f8;
      } while (pcVar12 != (char *)0x0);
      pcVar12 = (char *)0x0;
LAB_1000d668:
      pcVar13 = local_60;
      memcpy(local_60 + ((ulong)pcVar12 & 0xffffffff) * 0x1f8,local_360,0x1f8);
      pcVar12 = local_58 + 1;
      pcVar15 = local_48 + 0x1f8;
    } while (pcVar12 != local_40);
    local_34 = *(uint *)(local_50 + 0xaf8);
  }
  iVar3 = *(int *)(local_50 + 100) + -0x6a;
  iVar8 = -1;
  if (0x49 < iVar3) {
    iVar3 = (int)((ulong)((long)iVar3 * 0x22983759) >> 0x20) - iVar3;
    iVar8 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  }
  iVar3 = *(int *)(local_50 + 0x60) +
          (int)((ulong)((long)(*(int *)(local_50 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
  iVar11 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  iVar3 = 1;
  if (1 < iVar11) {
    iVar3 = iVar11;
  }
  iVar8 = local_34 + 2 + iVar3 * iVar8;
  iVar3 = *(int *)(local_50 + 0xb00);
  if (iVar3 < 0) {
    *(undefined4 *)(local_50 + 0xb00) = 0;
    iVar3 = 0;
  }
  if (0 < iVar8 && iVar3 <= iVar8) {
    return;
  }
  iVar3 = 0;
  if (0 < iVar8) {
    iVar3 = iVar8;
  }
  *(int *)(local_50 + 0xb00) = iVar3;
  return;
  while (cVar1 = *(char *)(local_50 + 0x79 + uVar6), uVar5 = uVar6 + 1, cVar1 != '\0') {
LAB_1000d42e:
    uVar6 = uVar5;
    local_168[uVar6] = cVar1;
    if (0xef < uVar6 + 1) break;
  }
  local_168[uVar6 + 1] = '\0';
  uVar5 = strlen(local_168);
  if (uVar5 < 0xf1) {
    lVar7 = 0xf0;
    if (uVar5 != 0xf0) {
      lVar7 = uVar5 + 1;
      local_168[uVar5] = '/';
    }
    local_168[lVar7] = '\0';
  }
  uVar6 = strlen(local_168);
  uVar5 = uVar6 + uVar4;
  if (uVar5 < 0xf1) {
    pcVar15 = local_168 + uVar6;
LAB_1000d4af:
    memcpy(pcVar15,src,uVar4);
    local_168[uVar5] = '\0';
    if ((uint)local_40 != 0) {
      uVar4 = (ulong)local_40 & 0xffffffff;
      pcVar15 = local_68;
      do {
        iVar3 = strcmp(pcVar15,local_168);
        if (iVar3 == 0) goto LAB_1000d2a4;
        pcVar15 = pcVar15 + 0x1f8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    memset(local_360,0,0x1f8);
    if (local_168[0] == '\0') {
      local_26f[0] = '\0';
      pcVar15 = (char *)0x0;
    }
    else {
      uVar4 = 0;
      cVar1 = local_168[0];
      do {
        uVar5 = uVar4;
        local_26f[uVar5] = cVar1;
        if (0xef < uVar5 + 1) break;
        cVar1 = local_168[uVar5 + 1];
        uVar4 = uVar5 + 1;
      } while (cVar1 != '\0');
      local_26f[uVar5 + 1] = '\0';
      pcVar15 = (char *)0x0;
      pcVar12 = local_168;
      cVar1 = local_168[0];
      do {
        if (cVar1 == '/') {
          pcVar15 = pcVar12;
        }
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    }
    pcVar12 = pcVar15 + 1;
    if (pcVar15 == (char *)0x0) {
      pcVar12 = local_168;
    }
    cVar1 = *pcVar12;
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = uVar5 + 1;
        local_360[uVar5] = cVar1;
        if (0xef < uVar4) break;
        cVar1 = pcVar12[uVar5 + 1];
        uVar5 = uVar4;
      } while (cVar1 != '\0');
    }
    local_360[uVar4] = '\0';
    local_178 = 0x200000002;
    local_170 = *(undefined8 *)(pcVar13 + uVar10 * 0x1f8 + 0x1f0);
LAB_1000d5e6:
    pcVar13 = local_48;
    uVar4 = (ulong)local_40 & 0xffffffff;
    local_40 = (char *)CONCAT44(PF_PART4(local_40, 4),(uint)local_40 + 1);
    memcpy(local_48 + uVar4 * 0x1f8,local_360,0x1f8);
  }
  else {
LAB_1000d2a4:
    pcVar13 = local_48;
  }
LAB_1000d2af:
  uVar10 = uVar10 + 1;
  if ((char *)uVar10 == local_60) goto LAB_1000d614;
  goto LAB_1000d2bc;
LAB_1000d614:
  bVar14 = *(byte *)(local_50 + 0x260);
  goto LAB_1000d623;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020a84
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006884
#undef UINT_000068c0
#undef UINT_000068cc
#undef local_360
#undef local_26f
#undef local_178
#undef local_170
#undef local_168
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_34

#undef DAT_1002231c
#define DAT_1002231c (*(uint *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10027194
#define DAT_10027194 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d820
 */

void recovered_1000d820(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  lVar6 = DAT_10022990;
  uVar9 = 0xffffffff;
  if (0 < (long)(int)DAT_10027194) {
    lVar8 = 0;
    do {
      if (*(uint *)(DAT_10022990 + lVar8 * 4) == param_1) {
        uVar9 = (uint)lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
    } while ((int)DAT_10027194 != lVar8);
  }
  if (((int)param_1 < 0) || (*(char *)(DAT_10022368 + (ulong)param_1 * 0xda8) != '\x01')) {
    return;
  }
  if ((int)uVar9 < 0) {
    if (0x13 < (int)DAT_10027194) {
      DAT_1002231c = param_1;
      return;
    }
    uVar7 = DAT_10027194;
    DAT_10027194 = DAT_10027194 + 1;
  }
  else {
    uVar7 = DAT_10027194 - 1;
    if ((int)uVar9 < (int)uVar7) {
      uVar13 = (ulong)uVar9;
      uVar11 = uVar7 - uVar13;
      if (uVar11 < 8) {
        uVar10 = uVar13;
      }
      else {
        uVar12 = uVar11 & 0xfffffffffffffff8;
        uVar10 = uVar12 + uVar13;
        lVar8 = DAT_10022990 + uVar13 * 4;
        uVar13 = 0;
        do {
          puVar2 = (undefined8 *)(lVar8 + 4 + uVar13 * 4);
          uVar3 = puVar2[1];
          puVar1 = (undefined8 *)(lVar8 + 0x14 + uVar13 * 4);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar8 + uVar13 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar13 = uVar13 + 8;
        } while (uVar12 != uVar13);
        if (uVar11 == uVar12) goto LAB_1000d915;
      }
      do {
        *(undefined4 *)(lVar6 + uVar10 * 4) = *(undefined4 *)(lVar6 + 4 + uVar10 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
  }
LAB_1000d915:
  *(uint *)(lVar6 + (long)(int)uVar7 * 4) = param_1;
  DAT_1002231c = param_1;
  return;
}

#undef DAT_1002231c
#undef DAT_10022368
#undef DAT_10022990
#undef DAT_10027194

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d930
 */

uint recovered_1000d930(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcf < uVar2)) {
    uVar2 = UINT_000068cc;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000d973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x87 < uVar2))))
    {
      uVar2 = UINT_00006884;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000d9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3,param_4,param_5);
        return uVar2;
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006884
#undef UINT_000068cc

#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10025698
#define DAT_10025698 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x507fU)))
#undef DAT_100256a4
#define DAT_100256a4 (*(uint *)(((uintptr_t)pf_module_state + 0x508bU)))
#undef DAT_100256a8
#define DAT_100256a8 (*(uint *)(((uintptr_t)pf_module_state + 0x508fU)))
#define local_40 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9d0
 */

void recovered_1000d9d0(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  bool bVar28;

  lVar10 = DAT_10025698;
  uVar20 = DAT_10022174;
  if (DAT_10025698 == 0) {
    lVar10 = (long)(int)DAT_10022174;
    if (lVar10 < 1) {
      return;
    }
    lVar17 = (long)(int)DAT_10022170;
    lVar27 = 0;
    uVar22 = 0;
    if ((int)DAT_10022170 < 0) {
      uVar22 = DAT_10022170;
    }
    uVar14 = 0;
    if (0 < (int)DAT_10022170) {
      uVar14 = DAT_10022170;
    }
    bVar28 = DAT_10022348 != 0;
    lVar16 = (long)(int)uVar22;
    uVar15 = (ulong)(~uVar22 + uVar14) + 1;
    uVar26 = uVar15 & 0xfffffffffffffff8;
    lVar19 = DAT_10022348 + lVar16 * 4 + 0x10;
    lVar12 = DAT_10022348;
    do {
      if ((int)uVar22 < (int)uVar14 && bVar28) {
        uVar6 = ((uint)((int)lVar27 * 0x12) / uVar20 + 0xe4 & 0xff) * 0x10101;
        uVar7 = uVar6 | 0xff000000;
        lVar18 = lVar16;
        if (6 < ~uVar22 + uVar14) {
          uVar11 = 0;
          do {
            puVar1 = (uint *)(lVar19 + -0x10 + uVar11 * 4);
            *puVar1 = uVar6 | 0xff000000;
            puVar1[1] = uVar6 | 0xff000000;
            puVar1[2] = uVar7;
            puVar1[3] = uVar7;
            puVar1 = (uint *)(lVar19 + uVar11 * 4);
            *puVar1 = uVar6 | 0xff000000;
            puVar1[1] = uVar6 | 0xff000000;
            puVar1[2] = uVar7;
            puVar1[3] = uVar7;
            uVar11 = uVar11 + 8;
          } while (uVar26 != uVar11);
          lVar18 = uVar26 + lVar16;
          if (uVar15 == uVar26) goto LAB_1000dad0;
        }
        lVar23 = 0;
        do {
          *(uint *)(lVar12 + lVar18 * 4 + lVar23 * 4) = uVar7;
          lVar23 = lVar23 + 1;
        } while (uVar14 - (int)lVar18 != (int)lVar23);
      }
LAB_1000dad0:
      uVar6 = DAT_10022170;
      lVar27 = lVar27 + 1;
      lVar19 = lVar19 + lVar17 * 4;
      lVar12 = lVar12 + lVar17 * 4;
      if (lVar27 == lVar10) {
        if ((int)uVar20 < 0x7d) {
          return;
        }
        lVar10 = (long)(int)DAT_10022170;
        uVar22 = -DAT_10022170;
        if ((int)-DAT_10022170 < 0) {
          uVar22 = DAT_10022170;
        }
        uVar14 = 0x3e;
        do {
          uVar15 = 0;
          uVar7 = uVar14;
          iVar25 = uVar22 - 10;
          while( true ) {
            uVar21 = (uint)uVar15;
            if (((int)uVar21 < (int)uVar6 && -1 < (int)uVar21) &&
               (DAT_10022348 != 0 && (int)uVar7 < (int)uVar20)) {
              lVar17 = uVar15 + (ulong)uVar7 * lVar10;
              *(undefined1 *)(DAT_10022348 + lVar17 * 4) = 0xd2;
              *(undefined1 *)(DAT_10022348 + 1 + lVar17 * 4) = 0xd2;
              *(undefined1 *)(DAT_10022348 + 2 + lVar17 * 4) = 0xd2;
              *(undefined1 *)(DAT_10022348 + 3 + lVar17 * 4) = 0xff;
            }
            if ((uVar7 == uVar14 + 10) && (uVar21 == uVar6)) break;
            iVar4 = iVar25 * 2;
            iVar24 = (uint)(0 < lVar10) * 2 + -1;
            iVar5 = iVar25 + -10;
            if (iVar25 < -5) {
              iVar24 = 0;
              iVar5 = iVar25;
            }
            uVar15 = (ulong)(uVar21 + iVar24);
            uVar21 = 0;
            if (iVar4 <= (int)uVar22) {
              uVar21 = uVar22;
            }
            iVar25 = uVar21 + iVar5;
            uVar7 = uVar7 + (iVar4 <= (int)uVar22);
          }
          uVar14 = uVar14 + 0x48;
        } while ((int)uVar14 < (int)(uVar20 - 0x3e));
        return;
      }
    } while( true );
  }
  uVar15 = (ulong)DAT_100256a4;
  if (uVar15 == 0) {
    return;
  }
  uVar26 = (ulong)DAT_10022174;
  if ((int)DAT_10022174 < 0x19) {
    return;
  }
  uVar11 = (ulong)DAT_10022170;
  if ((int)DAT_10022170 < 1) {
    return;
  }
  uVar13 = (ulong)DAT_100256a8;
  if (DAT_100256a8 == 0) {
    return;
  }
  uVar20 = DAT_10022174 - 0x18;
  uVar8 = (uVar13 * uVar11 + uVar15) - 1;
  if (uVar8 >> 0x20 == 0) {
    uVar22 = (uint)((uVar8 & 0xffffffff) / uVar15);
  }
  else {
    uVar22 = (uint)(uVar8 / uVar15);
  }
  if ((int)uVar22 < (int)uVar20) {
    uVar8 = (uVar15 * uVar20 + uVar13) - 1;
    if (uVar8 >> 0x20 == 0) {
      uVar14 = (uint)((uVar8 & 0xffffffff) / uVar13);
    }
    else {
      uVar14 = (uint)(uVar8 / uVar13);
    }
    if ((int)uVar14 < 1) {
      return;
    }
    uVar22 = uVar20;
    if (uVar14 < DAT_10022170 || uVar14 - DAT_10022170 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = (long)((int)(uVar14 - DAT_10022170) / 2);
    }
  }
  else {
    uVar14 = DAT_10022170;
    if (uVar20 <= uVar22 && uVar22 - uVar20 != 0) {
      local_40 = (long)((int)(uVar22 - uVar20) / 2);
      lVar17 = 0;
      goto LAB_1000dd01;
    }
    lVar17 = 0;
  }
  local_40 = 0;
LAB_1000dd01:
  lVar27 = uVar11 * 0x60;
  uVar13 = 0;
  do {
    uVar8 = (local_40 + uVar13) * (ulong)DAT_100256a8;
    if (uVar8 >> 0x20 == 0) {
      uVar6 = (uint)((uVar8 & 0xffffffff) / (ulong)uVar22);
    }
    else {
      uVar6 = (uint)(uVar8 / uVar22);
    }
    uVar7 = DAT_100256a8 - 1;
    if (uVar6 < DAT_100256a8) {
      uVar7 = uVar6;
    }
    uVar8 = 0;
    do {
      uVar9 = (lVar17 + uVar8) * uVar15;
      if (uVar9 >> 0x20 == 0) {
        uVar6 = (uint)((uVar9 & 0xffffffff) / (ulong)uVar14);
      }
      else {
        uVar6 = (uint)(uVar9 / uVar14);
      }
      uVar21 = (uint)uVar15 - 1;
      if (uVar6 < (uint)uVar15) {
        uVar21 = uVar6;
      }
      if ((uVar8 < uVar11) && (DAT_10022348 != 0 && uVar13 + 0x18 < uVar26)) {
        lVar12 = (ulong)uVar21 + uVar15 * uVar7;
        uVar2 = *(undefined1 *)(lVar10 + 1 + lVar12 * 4);
        uVar3 = *(undefined1 *)(lVar10 + 2 + lVar12 * 4);
        *(undefined1 *)(DAT_10022348 + lVar27 + uVar8 * 4) = *(undefined1 *)(lVar10 + lVar12 * 4);
        *(undefined1 *)(DAT_10022348 + lVar27 + 1 + uVar8 * 4) = uVar2;
        *(undefined1 *)(DAT_10022348 + lVar27 + 2 + uVar8 * 4) = uVar3;
        *(undefined1 *)(DAT_10022348 + lVar27 + 3 + uVar8 * 4) = 0xff;
        uVar15 = (ulong)DAT_100256a4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar8);
    uVar13 = uVar13 + 1;
    lVar27 = lVar27 + uVar11 * 4;
  } while (uVar13 != uVar20);
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348
#undef DAT_10025698
#undef DAT_100256a4
#undef DAT_100256a8
#undef local_40

#undef DAT_10020840
#define DAT_10020840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef DAT_10020850
#define DAT_10020850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef DAT_10020c6c
#define DAT_10020c6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x653U)))
#undef DAT_10020c71
#define DAT_10020c71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x658U)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef UNK_10020848
#define UNK_10020848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22fU)))
#undef UNK_10020858
#define UNK_10020858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23fU)))
#undef _DAT_10020840
#define _DAT_10020840 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x227U)))
#undef _DAT_10020850
#define _DAT_10020850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef str_10020c3b
#define str_10020c3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x622U)))
#undef str_10020c65
#define str_10020c65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64cU)))
#undef str_10020c76
#define str_10020c76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef uRam0000000010020848
#define uRam0000000010020848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22fU)))
#undef uRam0000000010020858
#define uRam0000000010020858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000de50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  bool bVar22;

  iVar5 = recovered_10004540();
  plVar6 = recovered_1000fb00(str_10020c3b,iVar5);
  lVar4 = DAT_10022348;
  uVar17 = DAT_10022174;
  uVar3 = uRam0000000010020848;
  uVar2 = _DAT_10020840;
  lVar8 = (long)(int)DAT_10022170;
  uVar10 = 0;
  if ((int)DAT_10022170 < 0) {
    uVar10 = DAT_10022170;
  }
  uVar16 = 0;
  if (0 < (int)DAT_10022170) {
    uVar16 = DAT_10022170;
  }
  bVar22 = DAT_10022348 != 0;
  if (0 < (int)DAT_10022174 && ((int)uVar10 < (int)uVar16 && bVar22)) {
    uVar19 = 0x18;
    if (DAT_10022174 < 0x18) {
      uVar19 = (ulong)DAT_10022174;
    }
    lVar12 = (long)(int)uVar10;
    uVar21 = uVar16 + ~uVar10;
    uVar14 = (ulong)uVar21 + 1;
    uVar20 = uVar14 & 0xfffffffffffffff8;
    lVar13 = DAT_10022348 + lVar12 * 4 + 0x10;
    uVar7 = 0;
    lVar11 = DAT_10022348;
    do {
      lVar18 = lVar12;
      if (uVar21 < 7) {
LAB_1000df6a:
        lVar15 = 0;
        do {
          *(undefined4 *)(lVar11 + lVar18 * 4 + lVar15 * 4) = 0xfffafafa;
          lVar15 = lVar15 + 1;
        } while (uVar16 - (int)lVar18 != (int)lVar15);
      }
      else {
        uVar9 = 0;
        do {
          puVar1 = (undefined8 *)(lVar13 + -0x10 + uVar9 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar13 + uVar9 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          uVar9 = uVar9 + 8;
        } while (uVar20 != uVar9);
        lVar18 = uVar20 + lVar12;
        if (uVar14 != uVar20) goto LAB_1000df6a;
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + lVar8 * 4;
      lVar11 = lVar11 + lVar8 * 4;
    } while (uVar7 != uVar19);
  }
  uVar3 = uRam0000000010020858;
  uVar2 = _DAT_10020850;
  if (((int)uVar10 < (int)uVar16 && bVar22) && 0x17 < (int)uVar17) {
    lVar11 = (long)(int)uVar10;
    uVar17 = ~uVar10 + uVar16;
    if (uVar17 < 7) {
      lVar12 = lVar11;
    }
    else {
      uVar7 = (ulong)uVar17 + 1;
      uVar19 = uVar7 & 0xfffffffffffffff8;
      lVar12 = uVar19 + lVar11;
      lVar11 = lVar8 * 0x5c + lVar11 * 4 + lVar4;
      uVar14 = 0;
      do {
        puVar1 = (undefined8 *)(lVar11 + uVar14 * 4);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar14 * 4);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        uVar14 = uVar14 + 8;
      } while (uVar19 != uVar14);
      if (uVar7 == uVar19) goto LAB_1000e02f;
    }
    lVar11 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar8 * 0x5c + lVar12 * 4 + lVar11 * 4) = 0xffa6a6a6;
      lVar11 = lVar11 + 1;
    } while (uVar16 - (int)lVar12 != (int)lVar11);
  }
LAB_1000e02f:
  if (plVar6 != (long *)0x0) {
    recovered_1000fef0(plVar6,5,3,0x10,0x10);
  }
  recovered_100101e0(0x19,7,str_10020c65,0xffffffff,0x191919,1);
  recovered_100101e0(0x56,7,&DAT_10020c6c,0xffffffff,0x4b4b4b,1);
  recovered_100101e0(0x82,7,&DAT_10020c71,0xffffffff,0x4b4b4b,1);
  recovered_100101e0(0xb0,7,str_10020c76,0xffffffff,0x4b4b4b,1);
  recovered_1000a100();
  return;
}

#undef DAT_10020840
#undef DAT_10020850
#undef DAT_10020c6c
#undef DAT_10020c71
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348
#undef UNK_10020848
#undef UNK_10020858
#undef _DAT_10020840
#undef _DAT_10020850
#undef str_10020c3b
#undef str_10020c65
#undef str_10020c76
#undef uRam0000000010020848
#undef uRam0000000010020858

#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef str_10020a69
#define str_10020a69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10020c7d
#define str_10020c7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e110
 */

void recovered_1000e110(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long *plVar2;
  int iVar3;

  iVar3 = 8;
  if (0x5d < DAT_10022170) {
    iVar3 = DAT_10022170 + -0x56;
  }
  iVar1 = recovered_10004540();
  plVar2 = recovered_1000fb00(str_10020c7d,iVar1);
  if ((DAT_10022170 < 0x70) || (DAT_10022174 < 0x78)) {
    return;
  }
  if (plVar2 == (long *)0x0) {
    recovered_10010b10(iVar3 + 0x16U,0x2c,0x1e,0x18,0xffecd7,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(iVar3 + 0x16U,0x2c,0x1e,0x18,0x967450);
  }
  else {
    recovered_1000fef0(plVar2,iVar3 + 0x14,0x2a,0x22,0x22);
  }
  recovered_10010a40(iVar3 + 3,0x4f,0x44,str_10020a69,0x1c1c1c);
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef str_10020a69
#undef str_10020c7d

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_10023751
#define DAT_10023751 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3138U)))
#undef DAT_10023779
#define DAT_10023779 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3160U)))
#undef DAT_1002386c
#define DAT_1002386c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3253U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e200
 */

void recovered_1000e200(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  long lVar14;
  int iVar15;

  lVar10 = 0;
  iVar11 = 0;
  do {
    lVar14 = lVar10 * 0x124;
    if ((&DAT_10023750)[lVar14] == '\x01') {
      iVar13 = (DAT_10022170 + -0x18) / 0x52;
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      iVar15 = (iVar11 / iVar13) * 0x4e;
      if (DAT_10022174 + -0x42 < iVar15 + 0x66) {
        return;
      }
      bVar3 = recovered_10010d70((long)(&DAT_10023750 + lVar14));
      if ((&DAT_10023750)[lVar14] == '\0') {
        iVar11 = iVar11 + 1;
      }
      else {
        pbVar1 = &DAT_10023779 + lVar14;
        bVar4 = (&DAT_10023779)[lVar14];
        pbVar12 = (byte *)0x0;
        if (bVar4 != 0) {
          pbVar9 = pbVar1;
          do {
            if (bVar4 == 0x2f) {
              pbVar12 = pbVar9;
            }
            bVar4 = pbVar9[1];
            pbVar9 = pbVar9 + 1;
          } while (bVar4 != 0);
        }
        pbVar9 = pbVar12 + 1;
        if (pbVar12 == (byte *)0x0) {
          pbVar9 = pbVar1;
        }
        pbVar12 = (byte *)0x0;
        bVar4 = *pbVar9;
        while (bVar4 != 0) {
          if (bVar4 == 0x2e) {
            pbVar12 = pbVar9;
          }
          pbVar2 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          bVar4 = *pbVar2;
        }
        iVar13 = (iVar11 % iVar13) * 0x52;
        if (pbVar12 == (byte *)0x0) {
          pbVar12 = &DAT_10020a84;
        }
        bVar4 = *pbVar12;
        if (bVar4 == 0) {
          bVar4 = 0x2e;
          goto joined_r0x1000e3b0;
        }
        bVar7 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar7 = bVar4;
        }
        if ((bVar7 == 0x2e) && (bVar4 = pbVar12[1], bVar4 != 0)) {
          bVar7 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar7 = bVar4;
          }
          if (bVar7 != 0x61) goto LAB_1000e3d3;
          bVar7 = pbVar12[2];
          bVar4 = 0x70;
          if (bVar7 != 0) {
            bVar8 = bVar7 | 0x20;
            if (0x19 < (byte)(bVar7 + 0xbf)) {
              bVar8 = bVar7;
            }
            if (bVar8 != 0x70) goto LAB_1000e3d3;
            bVar7 = pbVar12[3];
            if (bVar7 != 0) {
              bVar4 = bVar7 | 0x20;
              if (0x19 < (byte)(bVar7 + 0xbf)) {
                bVar4 = bVar7;
              }
              if (bVar4 != 0x70) goto LAB_1000e3d3;
              bVar4 = pbVar12[4];
            }
          }
joined_r0x1000e3b0:
          if (bVar4 != 0) goto LAB_1000e3d3;
          plVar6 = recovered_10010f50((char *)pbVar1,(&DAT_1002386c)[lVar10 * 0x49]);
          if (plVar6 == (long *)0x0) goto LAB_1000e414;
LAB_1000e3f3:
          recovered_1000fef0(plVar6,iVar13 + 0x20,iVar15 + 0x2a,0x22,0x22);
        }
        else {
LAB_1000e3d3:
          uVar5 = recovered_10011700(pbVar1);
          if (((char)uVar5 != '\0') &&
             (plVar6 = recovered_1000fb00((char *)pbVar1,(&DAT_1002386c)[lVar10 * 0x49]),
             plVar6 != (long *)0x0)) goto LAB_1000e3f3;
LAB_1000e414:
          bVar4 = -(DAT_10022188 == 0) | ~DAT_10022184;
          if (bVar3 == 0) {
            recovered_10010b10(iVar13 + 0x25U,iVar15 + 0x2c,0x18,0x1e,0xffffff,(uint)bVar4);
            recovered_10010570(iVar13 + 0x25U,iVar15 + 0x2c,0x18,0x1e,0x787878);
            recovered_10010b10(iVar13 + 0x36,iVar15 + 0x2d,6,6,0xe8e8e8,
                               (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
          }
          else {
            recovered_10010b10(iVar13 + 0x20U,iVar15 + 0x30,0x22,0x18,0xffecd7,(uint)bVar4);
            recovered_10010570(iVar13 + 0x20U,iVar15 + 0x30,0x22,0x18,0xcc823e);
            recovered_10010b10(iVar13 + 0x25U,iVar15 + 0x2c,0x10,7,0xfcdfbe,
                               (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
            recovered_10010570(iVar13 + 0x25U,iVar15 + 0x2c,0x10,7,0xcc823e);
          }
        }
        recovered_10010a40(iVar13 + 0xf,(ulong)(iVar15 + 0x4f),0x44,&DAT_10023751 + lVar14,0x1c1c1c)
        ;
        iVar11 = iVar11 + 1;
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x18) {
      return;
    }
  } while( true );
}

#undef DAT_10020a84
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_10023750
#undef DAT_10023751
#undef DAT_10023779
#undef DAT_1002386c

#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002218c
#define DAT_1002218c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b73U)))
#undef DAT_10022190
#define DAT_10022190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b77U)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#define local_98 (*(long *)(frame + 24))
#define local_90 (*(ulong *)(frame + 32))
#define local_84 (*(int *)(frame + 44))
#define local_80 (*(int *)(frame + 48))
#define local_7c (*(uint *)(frame + 52))
#define local_78 (*(uint *)(frame + 56))
#define local_74 (*(uint *)(frame + 60))
#define local_70 (*(ulong *)(frame + 64))
#define local_68 (*(ulong *)(frame + 72))
#define local_60 (*(ulong *)(frame + 80))
#define local_54 (*(uint *)(frame + 92))
#define local_50 (*(undefined1 * *)(frame + 96))
#define local_48 (*(ulong *)(frame + 104))
#define local_40 (*(ulong *)(frame + 112))
#define local_31 (*(byte *)(frame + 127))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5b0
 */

void recovered_1000e5b0(char *param_1,char param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  uint128 auVar3;
  uint uVar4;
  byte bVar5;
  uint uVar7;
  uint uVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  ulong uVar44;
  bool bVar45;

  if (*param_1 != '\x01') {
    return;
  }
  if (param_1[1] != '\x01') {
    return;
  }
  if (param_1[2] == '\0') {
    uVar37 = (ulong)*(uint *)(param_1 + 100) << 0x20;
  }
  else {
    uVar37 = 0x1800000000;
  }
  local_60 = (ulong)*(uint *)(param_1 + 0x60);
  uVar20 = *(uint *)(param_1 + 8);
  if (uVar20 == 0xffffffff) {
    uVar18 = DAT_10022188;
    if (DAT_10022188 < 4) goto LAB_1000e613;
LAB_1000e61b:
    local_31 = ~param_1[5];
  }
  else {
    uVar18 = uVar20;
    if (3 < uVar20) goto LAB_1000e61b;
LAB_1000e613:
    if (uVar18 != 0) goto LAB_1000e61b;
    local_31 = 0xff;
  }
  uVar44 = *(ulong *)(param_1 + 0x58);
  if (uVar20 == 0xffffffff) {
    uVar20 = DAT_10022188;
    if (DAT_10022188 < 4) goto LAB_1000e645;
LAB_1000e64d:
    bVar5 = param_1[6];
  }
  else {
    if (3 < uVar20) goto LAB_1000e64d;
LAB_1000e645:
    if (uVar20 != 0) goto LAB_1000e64d;
    bVar5 = 0xff;
  }
  uVar18 = (uint)uVar44;
  iVar2 = (int)(uVar44 >> 0x20);
  iVar24 = (int)(uVar37 >> 0x20);
  recovered_10010b10(uVar18 + 5,iVar2 + 6,*(uint *)(param_1 + 0x60),iVar24,0xacacac,(uint)bVar5);
  uVar20 = *(uint *)(param_1 + 8);
  uVar23 = DAT_10022188;
  if (uVar20 != 0xffffffff) {
    uVar23 = uVar20;
  }
  if (uVar23 < 4) {
    if (uVar23 == 3) {
      if (uVar20 == 0xffffffff) {
        if (DAT_10022188 == 2) {
          puVar12 = &DAT_1002218c;
        }
        else {
          if (DAT_10022188 != 3) goto LAB_1000f153;
          puVar12 = &DAT_10022190;
        }
      }
      else {
        puVar12 = (uint *)(param_1 + 0xc);
      }
      uVar20 = *puVar12;
      local_98 = 0;
      if (uVar20 != 0) {
        uVar11 = recovered_10015350(uVar44,uVar37 | local_60,(ulong *)&local_84,&local_98);
        if ((char)uVar11 != '\0') {
          uVar23 = local_78;
          if ((int)local_7c < (int)local_78) {
            uVar23 = local_7c;
          }
          uVar23 = (int)uVar23 / 2;
          if (uVar23 < uVar20) {
            uVar20 = uVar23;
          }
          uVar34 = uVar23;
          if ((int)uVar20 < (int)uVar23) {
            uVar34 = uVar20;
          }
          local_48 = (ulong)uVar34;
          if ((int)uVar20 < 1) {
            local_48 = 1;
          }
          uVar20 = (uint)local_48;
          if ((int)(uVar20 * 2) < (int)uVar23) {
            uVar23 = uVar20 * 2;
          }
          uVar34 = 8;
          if (3 < (int)uVar20) {
            uVar34 = uVar23;
          }
          uVar25 = local_7c * 0x80 - 0x80;
          uVar22 = local_78 * 0x80 - 0x80;
          uVar23 = uVar22;
          if ((int)uVar22 < (int)uVar25) {
            uVar23 = uVar25;
          }
          local_70 = CONCAT44(PF_PART4(local_70, 4),uVar23);
          if (0 < (int)local_78) {
            uVar4 = (uint)(local_48 >> 1);
            uVar6 = (uint)(local_48 / 0xc);
            uVar26 = 5;
            if (uVar6 < 5) {
              uVar26 = uVar6;
            }
            uVar37 = (ulong)uVar26;
            if (uVar20 < 0xc) {
              uVar37 = 1;
            }
            uVar26 = 0x26;
            if (uVar4 < 0x26) {
              uVar26 = uVar4;
            }
            lVar40 = (long)(int)DAT_10022170;
            local_90 = (ulong)(int)uVar34;
            lVar32 = 0;
            do {
              if (0 < (int)local_7c) {
                local_50 = (undefined1 *)
                           (((long)local_84 + (local_80 + lVar32) * lVar40) * 4 + DAT_10022348);
                uVar7 = (uint)lVar32;
                uVar6 = uVar7 * 0x100;
                local_68 = CONCAT44(PF_PART4(local_68, 4),uVar6);
                uVar8 = uVar6 - uVar22;
                local_54 = -uVar8;
                if ((int)-uVar8 < 0) {
                  local_54 = uVar8;
                }
                uVar44 = (long)(int)uVar8 << 10;
                lVar27 = 0;
                do {
                  local_40 = (ulong)local_7c;
                  uVar42 = (uint)lVar27;
                  iVar21 = local_7c - 1;
                  uVar19 = iVar21 - uVar42;
                  uVar36 = (local_78 - 1) - uVar7;
                  iVar10 = (uint)((int)uVar19 < lVar27) * 0x800 + -0x400;
                  if ((int)uVar42 <= (int)uVar19) {
                    uVar19 = uVar42;
                  }
                  iVar43 = (uint)((int)uVar19 <= lVar32) * 0x400 + -0x400;
                  uVar28 = uVar7;
                  if ((int)uVar19 < (int)uVar7) {
                    uVar28 = uVar19;
                  }
                  if ((int)uVar36 < (int)uVar28) {
                    iVar43 = 0x400;
                    iVar10 = 0;
                    uVar28 = uVar36;
                  }
                  if (lVar32 < (int)uVar19) {
                    iVar10 = 0;
                  }
                  if (0 < (int)uVar34) {
                    uVar19 = uVar34;
                    uVar36 = uVar34;
                    if ((long)local_90 <= lVar32 || (long)local_90 <= lVar27) {
                      if ((lVar32 < (long)local_90) && ((int)(local_7c - uVar34) <= lVar27)) {
                        uVar19 = iVar21 - uVar34;
                      }
                      else {
                        if (((long)local_90 <= lVar27) || (lVar32 < (int)(local_78 - uVar34))) {
                          if ((lVar27 < (int)(local_7c - uVar34)) ||
                             (lVar32 < (int)(local_78 - uVar34))) goto LAB_1000eb30;
                          uVar19 = iVar21 - uVar34;
                        }
                        uVar36 = (local_78 - 1) - uVar34;
                      }
                    }
                    iVar21 = uVar42 - uVar19;
                    iVar41 = uVar7 - uVar36;
                    uVar16 = (ulong)(uint)(iVar41 * iVar41 + iVar21 * iVar21);
                    uVar39 = 0x4000000000000000;
                    do {
                      uVar14 = uVar39;
                      uVar39 = uVar14 >> 2;
                    } while (uVar16 < uVar14);
                    if (uVar14 == 0) {
                      iVar43 = 0;
                      iVar10 = 0;
                      uVar28 = uVar34;
                    }
                    else {
                      uVar39 = 0;
                      do {
                        uVar13 = uVar14 + uVar39;
                        uVar38 = uVar14;
                        if (uVar16 < uVar13) {
                          uVar13 = 0;
                          uVar38 = 0;
                        }
                        uVar16 = uVar16 - uVar13;
                        uVar39 = uVar38 + (uVar39 >> 1);
                        bVar45 = 3 < uVar14;
                        uVar14 = uVar14 >> 2;
                      } while (bVar45);
                      iVar43 = 0;
                      uVar19 = (uint)uVar39;
                      uVar28 = uVar34 - uVar19;
                      if (uVar34 < uVar19) {
                        uVar28 = 0;
                      }
                      if (uVar19 == 0) {
                        iVar10 = 0;
                      }
                      else {
                        uVar16 = (long)iVar21 << 10;
                        uVar39 = uVar39 & 0xffffffff;
                        if (((long)iVar21 & 0x3fffffffffffffU) >> 0x16 == 0) {
                          iVar10 = (int)((uVar16 & 0xffffffff) / uVar39);
                        }
                        else {
                          iVar10 = (int)((long)uVar16 / (long)uVar39);
                        }
                        uVar16 = (long)iVar41 << 10;
                        if (((long)iVar41 & 0x3fffffffffffffU) >> 0x16 == 0) {
                          iVar43 = (int)((uVar16 & 0xffffffff) / uVar39);
                        }
                        else {
                          iVar43 = (int)((long)uVar16 / (long)uVar39);
                        }
                      }
                    }
                  }
LAB_1000eb30:
                  uVar42 = uVar42 * 0x100;
                  if ((int)uVar28 < 1) {
                    uVar28 = 0;
                  }
                  uVar19 = uVar42;
                  uVar36 = uVar6;
                  if (uVar20 - uVar28 != 0 && (int)uVar28 <= (int)uVar20) {
                    uVar39 = ((uVar20 - uVar28) * 0x400 + uVar4) / local_48;
                    if (0x3ff < (uint)uVar39) {
                      uVar39 = 0x400;
                    }
                    iVar21 = (int)((ulong)((int)uVar39 * -2 + 0xc00) * uVar39 * uVar39 + 0x80000 >>
                                  0x14);
                    uVar16 = (ulong)((((iVar21 + 0x400) * iVar21 + 0x200U) / 0x600) * (uVar26 + 4));
                    uVar14 = (long)iVar10 * uVar16;
                    uVar39 = uVar14 + 0xfff;
                    if (-1 < (long)uVar14) {
                      uVar39 = uVar14;
                    }
                    uVar19 = uVar42 - (int)(uVar39 >> 0xc);
                    uVar16 = (long)iVar43 * uVar16;
                    uVar39 = uVar16 + 0xfff;
                    if (-1 < (long)uVar16) {
                      uVar39 = uVar16;
                    }
                    uVar36 = uVar6 - (int)(uVar39 >> 0xc);
                  }
                  if (0 < (int)uVar23) {
                    uVar42 = uVar42 - uVar25;
                    uVar28 = -uVar42;
                    if ((int)-uVar42 < 0) {
                      uVar28 = uVar42;
                    }
                    if (uVar28 <= local_54) {
                      uVar28 = local_54;
                    }
                    if (uVar28 != 0) {
                      if (uVar23 <= uVar28) {
                        uVar28 = uVar23;
                      }
                      uVar39 = (ulong)uVar28;
                      if ((uVar39 << 10 & 0x3ff00000000) == 0) {
                        iVar21 = (int)((uVar39 << 10 & 0xffffffff) / CONCAT44(0,uVar23));
                      }
                      else {
                        PF_PART8(auVar3, 8) = 0;
                        PF_PART8(auVar3, 0) = CONCAT44(0,uVar23);
                        iVar21 = SUB164((ZEXT416(uVar28) << 10) / auVar3,0);
                      }
                      uVar16 = (ulong)(0x400U - iVar21);
                      if (0x3ff < 0x400U - iVar21) {
                        uVar16 = 0x400;
                      }
                      uVar14 = (long)(int)uVar42 << 10;
                      if (((long)(int)uVar42 & 0x3fffffffffffffU) >> 0x16 == 0) {
                        iVar21 = (int)((uVar14 & 0xffffffff) / uVar39);
                      }
                      else {
                        iVar21 = (int)((long)uVar14 / (long)uVar39);
                      }
                      if (((long)(int)uVar8 & 0x3fffffffffffffU) >> 0x16 == 0) {
                        iVar10 = (int)((uVar44 & 0xffffffff) / uVar39);
                      }
                      else {
                        iVar10 = (int)((long)uVar44 / (long)uVar39);
                      }
                      lVar15 = ((ulong)((int)uVar16 * -2 + 0xc00) * uVar16 * uVar16 + 0x80000 >>
                               0x14) * uVar37;
                      uVar16 = iVar21 * lVar15;
                      uVar39 = uVar16 + 0xfff;
                      if (-1 < (long)uVar16) {
                        uVar39 = uVar16;
                      }
                      uVar19 = uVar19 - (int)(uVar39 >> 0xc);
                      uVar16 = iVar10 * lVar15;
                      uVar39 = uVar16 + 0xfff;
                      if (-1 < (long)uVar16) {
                        uVar39 = uVar16;
                      }
                      uVar36 = uVar36 - (int)(uVar39 >> 0xc);
                    }
                  }
                  if (((0 < (int)local_78) && (local_50 != (undefined1 *)0x0)) && (local_98 != 0)) {
                    uVar28 = local_78 * 0x100 - 0x100;
                    uVar42 = local_7c * 0x100 - 0x100;
                    if ((int)uVar19 < (int)uVar42) {
                      uVar42 = uVar19;
                    }
                    if ((int)uVar19 < 0) {
                      uVar42 = 0;
                    }
                    if ((int)uVar36 < (int)uVar28) {
                      uVar28 = uVar36;
                    }
                    if ((int)uVar36 < 0) {
                      uVar28 = 0;
                    }
                    uVar36 = uVar42 & 0xff;
                    iVar43 = (int)uVar42 >> 8;
                    uVar19 = uVar28 & 0xff;
                    iVar10 = (int)uVar28 >> 8;
                    iVar21 = iVar43 + 1;
                    if ((int)local_7c <= iVar43 + 1) {
                      iVar21 = iVar43;
                    }
                    iVar41 = iVar10 + 1;
                    if ((int)local_78 <= iVar10 + 1) {
                      iVar41 = iVar10;
                    }
                    lVar15 = (long)iVar10 * local_40 + (long)iVar43;
                    lVar35 = (long)iVar10 * local_40 + (long)iVar21;
                    lVar31 = (long)iVar43 + (long)iVar41 * local_40;
                    lVar33 = (long)iVar41 * local_40 + (long)iVar21;
                    iVar41 = (0x100 - uVar19) * (0x100 - uVar36);
                    iVar21 = (0x100 - uVar36) * uVar19;
                    iVar10 = uVar19 * uVar36;
                    iVar43 = (0x100 - uVar19) * uVar36;
                    *local_50 = (char)((uint)*(byte *)(local_98 + lVar31 * 4) * iVar21 +
                                       (uint)*(byte *)(local_98 + lVar35 * 4) * iVar43 +
                                       (uint)*(byte *)(local_98 + lVar15 * 4) * iVar41 +
                                       (uint)*(byte *)(local_98 + lVar33 * 4) * iVar10 + 0x8000 >>
                                      0x10);
                    local_50[1] = (char)((uint)*(byte *)(local_98 + 1 + lVar31 * 4) * iVar21 +
                                         (uint)*(byte *)(local_98 + 1 + lVar35 * 4) * iVar43 +
                                         (uint)*(byte *)(local_98 + 1 + lVar15 * 4) * iVar41 +
                                         (uint)*(byte *)(local_98 + 1 + lVar33 * 4) * iVar10 +
                                         0x8000 >> 0x10);
                    local_50[2] = (char)((uint)*(byte *)(local_98 + 2 + lVar33 * 4) * iVar10 +
                                         (uint)*(byte *)(local_98 + 2 + lVar31 * 4) * iVar21 +
                                         (uint)*(byte *)(local_98 + 2 + lVar35 * 4) * iVar43 +
                                         (uint)*(byte *)(local_98 + 2 + lVar15 * 4) * iVar41 +
                                         0x8000 >> 0x10);
                    local_50[3] = 0xff;
                  }
                  local_50 = local_50 + 4;
                  lVar27 = lVar27 + 1;
                } while (lVar27 < (int)local_7c);
              }
              lVar32 = lVar32 + 1;
              local_74 = uVar34;
            } while (lVar32 < (int)local_78);
          }
        }
      }
    }
    else if (uVar23 == 2) {
      if (uVar20 == 0xffffffff) {
        if (DAT_10022188 == 2) {
          puVar12 = &DAT_1002218c;
        }
        else {
          if (DAT_10022188 != 3) goto LAB_1000f153;
          puVar12 = &DAT_10022190;
        }
      }
      else {
        puVar12 = (uint *)(param_1 + 0xc);
      }
      uVar20 = *puVar12;
      local_98 = 0;
      if (uVar20 != 0) {
        uVar11 = recovered_10015350(uVar44,uVar37 | local_60,(ulong *)&local_84,&local_98);
        if ((char)uVar11 != '\0') {
          uVar23 = local_78;
          if ((int)local_78 < (int)local_7c) {
            uVar23 = local_7c;
          }
          if (uVar23 < uVar20) {
            uVar20 = uVar23;
          }
          if ((int)uVar20 < (int)uVar23) {
            uVar23 = uVar20;
          }
          if ((int)uVar20 < 1) {
            iVar21 = 1;
          }
          else {
            iVar21 = (int)(uVar23 + 1) / 2;
          }
          if (0 < (int)local_78) {
            lVar40 = (long)(int)DAT_10022170;
            local_54 = iVar21 * -2;
            uVar20 = 0;
            do {
              if (0 < (int)local_7c) {
                puVar17 = (undefined1 *)
                          (((long)local_84 + ((long)(int)uVar20 + (long)local_80) * lVar40) * 4 +
                          DAT_10022348);
                uVar37 = 0;
                do {
                  local_90 = uVar37;
                  local_40 = (ulong)(int)local_7c;
                  iVar43 = local_7c - 1;
                  iVar29 = (int)local_90;
                  iVar41 = iVar29 + iVar21 * -2;
                  iVar10 = iVar43;
                  if (iVar41 < iVar43) {
                    iVar10 = iVar41;
                  }
                  if (iVar41 < 0) {
                    iVar10 = 0;
                  }
                  iVar9 = iVar29 - iVar21;
                  iVar41 = iVar43;
                  if (iVar9 < iVar43) {
                    iVar41 = iVar9;
                  }
                  local_50 = (undefined1 *)(long)iVar10;
                  if (iVar9 < 0) {
                    iVar41 = 0;
                  }
                  iVar10 = iVar43;
                  if (iVar29 < iVar43) {
                    iVar10 = iVar29;
                  }
                  local_68 = (ulong)iVar41;
                  local_48 = (ulong)iVar10;
                  iVar41 = iVar29 + iVar21;
                  iVar10 = iVar43;
                  if (iVar41 < iVar43) {
                    iVar10 = iVar41;
                  }
                  if (iVar41 < 0) {
                    iVar10 = 0;
                  }
                  local_70 = (ulong)iVar10;
                  iVar10 = iVar29 + iVar21 * 2;
                  if (iVar10 < iVar43) {
                    iVar43 = iVar10;
                  }
                  if (iVar10 < 0) {
                    iVar43 = 0;
                  }
                  iVar41 = 5;
                  iVar30 = 0;
                  iVar9 = 0;
                  iVar10 = 0;
                  uVar23 = local_54;
                  do {
                    uVar34 = local_78 - 1;
                    if ((int)uVar23 < (int)(local_78 - 1)) {
                      uVar34 = uVar23;
                    }
                    if ((int)uVar23 < 0) {
                      uVar34 = 0;
                    }
                    lVar35 = (long)(int)uVar34 * local_40;
                    puVar1 = local_50 + lVar35;
                    lVar32 = lVar35 + local_68;
                    lVar15 = local_48 + lVar35;
                    lVar27 = lVar35 + local_70;
                    lVar35 = lVar35 + iVar43;
                    iVar10 = (uint)*(byte *)(local_98 + lVar35 * 4) +
                             (uint)*(byte *)(local_98 + lVar27 * 4) +
                             (uint)*(byte *)(local_98 + lVar15 * 4) +
                             (uint)*(byte *)(local_98 + lVar32 * 4) +
                             (uint)*(byte *)(local_98 + (long)puVar1 * 4) + iVar10;
                    iVar9 = (uint)*(byte *)(local_98 + 1 + lVar35 * 4) +
                            (uint)*(byte *)(local_98 + 1 + lVar27 * 4) +
                            (uint)*(byte *)(local_98 + 1 + lVar15 * 4) +
                            (uint)*(byte *)(local_98 + 1 + lVar32 * 4) +
                            (uint)*(byte *)(local_98 + 1 + (long)puVar1 * 4) + iVar9;
                    iVar30 = (uint)*(byte *)(local_98 + 2 + lVar35 * 4) +
                             (uint)*(byte *)(local_98 + 2 + lVar27 * 4) +
                             (uint)*(byte *)(local_98 + 2 + lVar15 * 4) +
                             (uint)*(byte *)(local_98 + 2 + lVar32 * 4) +
                             (uint)*(byte *)(local_98 + 2 + (long)puVar1 * 4) + iVar30;
                    uVar23 = uVar23 + iVar21;
                    iVar41 = iVar41 + -1;
                  } while (iVar41 != 0);
                  *puVar17 = (char)((iVar10 + 0xcU) / 0x19);
                  puVar17[1] = (char)((iVar9 + 0xcU) / 0x19);
                  puVar17[2] = (char)((iVar30 + 0xcU) / 0x19);
                  puVar17[3] = 0xff;
                  puVar17 = puVar17 + 4;
                  uVar37 = (ulong)(iVar29 + 1U);
                  local_74 = uVar20;
                } while ((int)(iVar29 + 1U) < (int)local_7c);
              }
              uVar20 = uVar20 + 1;
              local_54 = local_54 + 1;
            } while ((int)uVar20 < (int)local_78);
          }
        }
      }
    }
  }
LAB_1000f153:
  bVar5 = local_31;
  iVar21 = (int)local_60;
  uVar20 = (uint)local_31;
  local_50 = (undefined1 *)CONCAT44(PF_PART4(local_50, 4),uVar20);
  if ((param_1[2] == '\0') && (*(int *)(param_1 + 0x10) == 6)) {
    uVar23 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) == 0xffffffff) {
      uVar23 = DAT_10022188;
    }
    if ((3 < uVar23) || (uVar23 != 0)) {
      iVar10 = *(int *)(param_1 + 0x58);
      local_48 = (ulong)*(uint *)(param_1 + 0x5c);
      local_70 = (ulong)*(uint *)(param_1 + 0x60);
      local_68 = (ulong)*(uint *)(param_1 + 100);
      local_40 = CONCAT44(PF_PART4(local_40, 4),*(uint *)(param_1 + 100) - 0x34);
      iVar43 = *(uint *)(param_1 + 0x5c) + 0x26;
      recovered_10010b10(uVar18,iVar2,iVar21,iVar43 - iVar2,0xf6f6f6,(uint)local_31);
      recovered_10010b10(uVar18,iVar43,(iVar10 - uVar18) + 0xe,(uint)local_40,0xf6f6f6,uVar20);
      uVar23 = ((int)local_70 + iVar10) - 0xe;
      recovered_10010b10(uVar23,iVar43,((int)local_60 + uVar18) - uVar23,(uint)local_40,0xf6f6f6,
                         uVar20);
      iVar43 = (int)local_68 + (int)local_48 + -0xe;
      iVar21 = (int)local_60;
      iVar10 = (iVar2 + iVar24) - iVar43;
      goto LAB_1000f262;
    }
  }
  iVar10 = iVar24;
  iVar43 = iVar2;
LAB_1000f262:
  recovered_10010b10(uVar18,iVar43,iVar21,iVar10,0xf6f6f6,(uint)bVar5);
  bVar45 = param_2 != '\0';
  uVar20 = 0xff808080;
  if (bVar45) {
    uVar20 = 0x282828;
  }
  uVar23 = 0xffdadada;
  if (bVar45) {
    uVar23 = 0xffe8e8e8;
  }
  uVar34 = 0x606060;
  if (bVar45) {
    uVar34 = 0x1c1c1c;
  }
  PF_PART4(local_40, 0) = uVar34;
  recovered_10010570(uVar18,iVar2,iVar21,iVar24,uVar20);
  uVar20 = (uint)local_50;
  recovered_10010b10(uVar18 + 1,iVar2 + 1,iVar21 + -2,0x17,uVar23,(uint)local_50);
  recovered_10010b10(uVar18 + 1,iVar2 + 0x17,iVar21 + -2,1,0x9a9a9a,uVar20);
  recovered_10011b30(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 9),0x505cee,0)
  ;
  recovered_10011b30(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x1b),0x48beee
                     ,1);
  recovered_10011b30(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x2d),0x6ecd78
                     ,2);
  recovered_10011b30(CONCAT44(*(int *)(param_1 + 0x5c) + 6,*(int *)(param_1 + 0x58) + 0x3f),0xbababa
                     ,3);
  recovered_100101e0(uVar18 + 0x58,iVar2 + 8,param_1 + 0x18,0x22,(uint)local_40,1);
  if ((((param_1[2] == '\0') && (recovered_10011f80(param_1), *param_1 == '\x01')) &&
      (param_1[2] == '\0')) && (param_1[3] == '\0')) {
    iVar2 = *(int *)(param_1 + 0x58);
    local_48 = (ulong)*(uint *)(param_1 + 0x5c);
    iVar24 = *(int *)(param_1 + 100);
    iVar21 = *(uint *)(param_1 + 0x5c) + iVar24 + -0x10;
    local_68 = CONCAT44(PF_PART4(local_68, 4),iVar21);
    uVar20 = *(uint *)(param_1 + 0x60);
    local_50 = (undefined1 *)(ulong)uVar20;
    uVar18 = iVar2 + -0x10 + uVar20;
    iVar43 = 0;
    recovered_10010b10(uVar18,iVar21,0xe,0xe,0xb6b6b6,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    iVar21 = (int)local_48;
    recovered_10010b10((uVar20 + iVar2) - 0xf,iVar21 + iVar24 + -0xf,0xc,0xc,0xcecece,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar18);
    recovered_10010570(uVar18,(int)local_68,0xe,0xe,0x6e6e6e);
    iVar10 = DAT_10022174;
    uVar20 = DAT_10022170;
    uVar18 = (iVar21 + iVar24) - 3;
    uVar23 = ((int)local_50 + iVar2) - 3;
    uVar37 = (ulong)DAT_10022170;
    do {
      iVar24 = iVar43 * -4 + 0xb;
      iVar2 = iVar43 * 4 + -0xb;
      uVar25 = iVar24 + (uint)local_40;
      iVar21 = uVar23 - uVar25;
      iVar41 = iVar21 + iVar43 * 4 + -0xb;
      uVar34 = uVar18;
      while( true ) {
        if (((int)uVar25 < (int)uVar20 && -1 < (int)(uVar25 | uVar34)) &&
           (DAT_10022348 != 0 && (int)uVar34 < iVar10)) {
          lVar40 = (ulong)uVar25 + uVar34 * uVar37;
          *(undefined1 *)(DAT_10022348 + lVar40 * 4) = 0x80;
          *(undefined1 *)(DAT_10022348 + 1 + lVar40 * 4) = 0x80;
          *(undefined1 *)(DAT_10022348 + 2 + lVar40 * 4) = 0x80;
          *(undefined1 *)(DAT_10022348 + 3 + lVar40 * 4) = 0xff;
        }
        if ((uVar34 == uVar18 - iVar24) && (uVar25 == uVar23)) break;
        iVar29 = iVar41 * 2;
        iVar9 = 0;
        if (iVar2 <= iVar29) {
          iVar9 = iVar2;
        }
        uVar25 = uVar25 + (iVar2 <= iVar29);
        iVar30 = 0;
        if (iVar29 <= iVar21) {
          iVar30 = iVar21;
        }
        iVar41 = iVar30 + iVar9 + iVar41;
        uVar34 = uVar34 - (iVar29 <= iVar21);
      }
      iVar43 = iVar43 + 1;
    } while (iVar43 != 3);
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002218c
#undef DAT_10022190
#undef DAT_10022348
#undef local_98
#undef local_90
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_31

#undef DAT_100209a0
#define DAT_100209a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x387U)))
#undef DAT_100209bc
#define DAT_100209bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a3U)))
#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022180
#define DAT_10022180 (*(int *)(((uintptr_t)pf_module_state + 0x1b67U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_1012c4c0
#define DAT_1012c4c0 (*(int *)(((uintptr_t)pf_module_state + 0x10bea7U)))
#undef DAT_1012c4c4
#define DAT_1012c4c4 (*(int *)(((uintptr_t)pf_module_state + 0x10beabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f5d0
 */

void recovered_1000f5d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (-1 < (long)DAT_10022180) {
    lVar1 = (long)DAT_10022180 * 0xda8;
    if (*(char *)(DAT_10022368 + lVar1) == '\x01') {
      lVar1 = DAT_10022368 + lVar1;
      uVar2 = (ulong)*(uint *)(lVar1 + 0x10);
      iVar3 = (DAT_10022170 - *(uint *)(lVar1 + 0x58)) + -4;
      if (DAT_1012c4c0 < iVar3) {
        iVar3 = DAT_1012c4c0;
      }
      if (uVar2 < 7) {
        iVar5 = *(int *)(&DAT_100209a0 + uVar2 * 4);
        iVar4 = *(int *)(&DAT_100209bc + uVar2 * 4);
      }
      else {
        iVar4 = 0x6e;
        iVar5 = 0xb4;
      }
      if (DAT_1012c4c0 < iVar5) {
        iVar3 = iVar5;
      }
      iVar5 = -0x42;
      if (*(uint *)(lVar1 + 0x10) == 6) {
        iVar5 = -4;
      }
      iVar5 = (iVar5 + DAT_10022174) - *(int *)(lVar1 + 0x5c);
      if (DAT_1012c4c4 < iVar5) {
        iVar5 = DAT_1012c4c4;
      }
      if (DAT_1012c4c4 < iVar4) {
        iVar5 = iVar4;
      }
      recovered_10010570(*(uint *)(lVar1 + 0x58),*(int *)(lVar1 + 0x5c),iVar3,iVar5,0x5c5c5c);
      if ((2 < iVar3) && (2 < iVar5)) {
        recovered_10010570(*(int *)(lVar1 + 0x58) + 1,*(int *)(lVar1 + 0x5c) + 1,iVar3 + -2,
                           iVar5 + -2,0xd2d2d2);
        return;
      }
    }
  }
  return;
}

#undef DAT_100209a0
#undef DAT_100209bc
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022180
#undef DAT_10022368
#undef DAT_1012c4c0
#undef DAT_1012c4c4

#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_10022988
#define DAT_10022988 (*(byte * *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6e0
 */

void recovered_1000f6e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  long lVar6;

  iVar1 = (uint)DAT_10022988[0x13ec] +
          (uint)DAT_10022988[0x12c0] +
          (uint)DAT_10022988[0x1194] +
          (uint)DAT_10022988[0x1068] +
          (uint)DAT_10022988[0xf3c] + (uint)DAT_10022988[0xe10] + (uint)DAT_10022988[0xce4] +
          (uint)DAT_10022988[3000] +
          (uint)DAT_10022988[0xa8c] + (uint)DAT_10022988[0x960] + (uint)DAT_10022988[0x834] +
          (uint)DAT_10022988[0x708] + (uint)DAT_10022988[0x5dc] + (uint)DAT_10022988[0x4b0] +
          (uint)DAT_10022988[900] + (uint)DAT_10022988[600] +
          (uint)DAT_10022988[300] + (uint)*DAT_10022988;
  if (iVar1 != 0) {
    iVar5 = DAT_10022170 + iVar1 * -0x44;
    uVar4 = ((iVar5 - (iVar5 + 0x12 >> 0x1f)) + 0x12 >> 1) - 0xc;
    iVar5 = DAT_10022174 + -0x3c;
    iVar1 = iVar1 * 0x44 + 6;
    lVar6 = 0;
    recovered_10010b10(uVar4,iVar5,iVar1,0x3a,0xeeeeee,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(uVar4,iVar5,iVar1,0x3a,0x8e8e8e);
    iVar1 = 0;
    pbVar3 = DAT_10022988;
    do {
      if (pbVar3[lVar6] == 1) {
        iVar2 = (uint)pbVar3[0x13ec] + (uint)pbVar3[0x12c0] +
                (uint)pbVar3[0x1194] +
                (uint)pbVar3[0x1068] +
                (uint)pbVar3[0xf3c] + (uint)pbVar3[0xe10] + (uint)pbVar3[0xce4] +
                (uint)pbVar3[3000] + (uint)pbVar3[0xa8c] + (uint)pbVar3[0x960] + (uint)pbVar3[0x834]
                + (uint)pbVar3[0x708] + (uint)pbVar3[0x5dc] + (uint)pbVar3[0x4b0] +
                  (uint)pbVar3[900] + (uint)pbVar3[600] + (uint)pbVar3[300] + (uint)*pbVar3;
        iVar5 = iVar2 * -0x44 + 0x12;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        recovered_10017960(CONCAT44(DAT_10022174 + -0x36,iVar1 * 0x44 + (iVar5 + DAT_10022170) / 2),
                           (long)(pbVar3 + lVar6));
        iVar1 = iVar1 + 1;
        pbVar3 = DAT_10022988;
      }
      lVar6 = lVar6 + 300;
    } while (lVar6 != 0x1518);
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_10022988

#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_1002549c
#define DAT_1002549c (*(char *)(((uintptr_t)pf_module_state + 0x4e83U)))
#undef DAT_1002549d
#define DAT_1002549d (*(char *)(((uintptr_t)pf_module_state + 0x4e84U)))
#undef DAT_100254a8
#define DAT_100254a8 (*(int *)(((uintptr_t)pf_module_state + 0x4e8fU)))
#undef DAT_100254ac
#define DAT_100254ac (*(int *)(((uintptr_t)pf_module_state + 0x4e93U)))
#undef DAT_100255a1
#define DAT_100255a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f88U)))
#undef DAT_10025692
#define DAT_10025692 (*(char *)(((uintptr_t)pf_module_state + 0x5079U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f940
 */

void recovered_1000f940(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar4 = DAT_100254ac;
  iVar3 = DAT_100254a8;
  if ((DAT_1002549c != '\x01') || (DAT_1002549d != '\x01')) {
    return;
  }
  uVar1 = DAT_100254a8 + 0x12;
  iVar2 = DAT_100254ac + 0x12;
  recovered_10010b10(uVar1,iVar2,0x2c,0x20,0xffffff,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  uVar5 = 0x787878;
  if (DAT_10025692 != '\0') {
    uVar5 = 0xffcc823e;
  }
  recovered_10010570(uVar1,iVar2,0x2c,0x20,uVar5);
  recovered_100101e0(iVar3 + 0x16,iVar4 + 0x1e,&DAT_100255a1,5,0x141414,1);
  return;
}

#undef DAT_10022184
#undef DAT_10022188
#undef DAT_1002549c
#undef DAT_1002549d
#undef DAT_100254a8
#undef DAT_100254ac
#undef DAT_100255a1
#undef DAT_10025692

#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_100223e8
#define DAT_100223e8 (*(char *)(((uintptr_t)pf_module_state + 0x1dcfU)))
#undef DAT_100223ec
#define DAT_100223ec (*(uint *)(((uintptr_t)pf_module_state + 0x1dd3U)))
#undef DAT_100223f0
#define DAT_100223f0 (*(int *)(((uintptr_t)pf_module_state + 0x1dd7U)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa10
 */

void recovered_1000fa10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  long lVar3;

  if (DAT_100223e8 == '\x01') {
    iVar2 = DAT_10022980 * 0x16 + 4;
    recovered_10010b10(DAT_100223ec,DAT_100223f0,0xa8,iVar2,0xfafafa,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(DAT_100223ec,DAT_100223f0,0xa8,iVar2,0x666666);
    if (0 < DAT_10022980) {
      iVar2 = 8;
      pcVar1 = &DAT_1002268c;
      lVar3 = 0;
      do {
        recovered_100101e0(DAT_100223ec + 10,DAT_100223f0 + iVar2,pcVar1,0xffffffff,0x232323,1);
        lVar3 = lVar3 + 1;
        iVar2 = iVar2 + 0x16;
        pcVar1 = pcVar1 + 0x2a;
      } while (lVar3 < DAT_10022980);
    }
  }
  return;
}

#undef DAT_10022184
#undef DAT_10022188
#undef DAT_100223e8
#undef DAT_100223ec
#undef DAT_100223f0
#undef DAT_1002268c
#undef DAT_10022980

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022320
#define DAT_10022320 (*(int *)(((uintptr_t)pf_module_state + 0x1d07U)))
#undef DAT_10022360
#define DAT_10022360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10022370
#define DAT_10022370 (*(int *)(((uintptr_t)pf_module_state + 0x1d57U)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a7U)))
#undef DAT_100257b8
#define DAT_100257b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x519fU)))
#undef DAT_100257d0
#define DAT_100257d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b7U)))
#undef DAT_100258e0
#define DAT_100258e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52c7U)))
#undef DAT_100259f0
#define DAT_100259f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53d7U)))
#undef DAT_10025b00
#define DAT_10025b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54e7U)))
#undef DAT_10025c10
#define DAT_10025c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55f7U)))
#undef DAT_10025d20
#define DAT_10025d20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5707U)))
#undef DAT_10025e30
#define DAT_10025e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5817U)))
#undef DAT_10025f40
#define DAT_10025f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5927U)))
#undef DAT_10026050
#define DAT_10026050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a37U)))
#undef DAT_10026160
#define DAT_10026160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b47U)))
#undef DAT_10026270
#define DAT_10026270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c57U)))
#undef DAT_10026380
#define DAT_10026380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d67U)))
#undef DAT_10026490
#define DAT_10026490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e77U)))
#undef DAT_100265a0
#define DAT_100265a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f87U)))
#undef DAT_100266b0
#define DAT_100266b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6097U)))
#undef DAT_100267c0
#define DAT_100267c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61a7U)))
#undef DAT_100268d0
#define DAT_100268d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62b7U)))
#undef DAT_100269e0
#define DAT_100269e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63c7U)))
#undef DAT_10026af0
#define DAT_10026af0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64d7U)))
#undef DAT_10026c00
#define DAT_10026c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65e7U)))
#undef DAT_10026d10
#define DAT_10026d10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66f7U)))
#undef DAT_10026e20
#define DAT_10026e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6807U)))
#undef DAT_10026f30
#define DAT_10026f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6917U)))
#undef DAT_10027198
#define DAT_10027198 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb00
 */

long * recovered_1000fb00(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  undefined1 *dst;
  long lVar6;
  long *plVar7;

  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return (long *)0x0;
  }
  plVar7 = &DAT_100257b8;
  lVar6 = 0x18;
  do {
    if ((((char)plVar7[-0x1f] == '\x01') && (*(int *)((long)plVar7 + -4) == param_2)) &&
       (iVar2 = strcmp((char *)((long)plVar7 + -0xf7),param_1), iVar2 == 0)) {
      if (*plVar7 == 0) {
        return (long *)0x0;
      }
      return plVar7;
    }
    plVar7 = plVar7 + 0x22;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (DAT_10022320 == DAT_10022370) {
    if (1 < DAT_10027198) {
      DAT_10022360 = 1;
      return (long *)0x0;
    }
  }
  else {
    DAT_10022320 = DAT_10022370;
    DAT_10027198 = 0;
  }
  DAT_10027198 = DAT_10027198 + 1;
  if (DAT_100256c0 == '\x01') {
    if (DAT_100257d0 == '\x01') {
      if (DAT_100258e0 == '\x01') {
        if (DAT_100259f0 == '\x01') {
          if (DAT_10025b00 == '\x01') {
            if (DAT_10025c10 == '\x01') {
              if (DAT_10025d20 == '\x01') {
                if (DAT_10025e30 == '\x01') {
                  if (DAT_10025f40 == '\x01') {
                    if (DAT_10026050 == '\x01') {
                      if (DAT_10026160 == '\x01') {
                        if (DAT_10026270 == '\x01') {
                          if (DAT_10026380 == '\x01') {
                            if (DAT_10026490 == '\x01') {
                              if (DAT_100265a0 == '\x01') {
                                if (DAT_100266b0 == '\x01') {
                                  if (DAT_100267c0 == '\x01') {
                                    if (DAT_100268d0 == '\x01') {
                                      if (DAT_100269e0 == '\x01') {
                                        if (DAT_10026af0 == '\x01') {
                                          if (DAT_10026c00 == '\x01') {
                                            if (DAT_10026d10 == '\x01') {
                                              if (DAT_10026e20 == '\x01') {
                                                if (DAT_10026f30 != '\0') {
                                                  return (long *)0x0;
                                                }
                                                dst = &DAT_10026f30;
                                              }
                                              else {
                                                dst = &DAT_10026e20;
                                              }
                                            }
                                            else {
                                              dst = &DAT_10026d10;
                                            }
                                          }
                                          else {
                                            dst = &DAT_10026c00;
                                          }
                                        }
                                        else {
                                          dst = &DAT_10026af0;
                                        }
                                      }
                                      else {
                                        dst = &DAT_100269e0;
                                      }
                                    }
                                    else {
                                      dst = &DAT_100268d0;
                                    }
                                  }
                                  else {
                                    dst = &DAT_100267c0;
                                  }
                                }
                                else {
                                  dst = &DAT_100266b0;
                                }
                              }
                              else {
                                dst = &DAT_100265a0;
                              }
                            }
                            else {
                              dst = &DAT_10026490;
                            }
                          }
                          else {
                            dst = &DAT_10026380;
                          }
                        }
                        else {
                          dst = &DAT_10026270;
                        }
                      }
                      else {
                        dst = &DAT_10026160;
                      }
                    }
                    else {
                      dst = &DAT_10026050;
                    }
                  }
                  else {
                    dst = &DAT_10025f40;
                  }
                }
                else {
                  dst = &DAT_10025e30;
                }
              }
              else {
                dst = &DAT_10025d20;
              }
            }
            else {
              dst = &DAT_10025c10;
            }
          }
          else {
            dst = &DAT_10025b00;
          }
        }
        else {
          dst = &DAT_100259f0;
        }
      }
      else {
        dst = &DAT_100258e0;
      }
    }
    else {
      dst = &DAT_100257d0;
    }
  }
  else {
    dst = &DAT_100256c0;
  }
  *dst = 1;
  *(int *)(dst + 0xf4) = param_2;
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      dst[uVar4] = cVar5;
      if (0xef < uVar4) break;
      cVar5 = param_1[uVar4];
      uVar1 = uVar4 + 1;
    } while (cVar5 != '\0');
  }
  dst[uVar4 + 1] = 0;
  plVar7 = (long *)(dst + 0xf8);
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0xe3 < uVar3)))) {
    uVar3 = UINT_000068e0;
    if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_1000feca;
    uVar3 = (*(code *)(ulong)uVar3)(param_2,param_1,plVar7);
  }
  else {
    iVar2 = Ram0000000000006800;
    if (((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000006804, iVar2 == 0)) ||
       ((uVar3 = Ram0000000000006808, uVar3 < 0xc || (uVar3 = Ram0000000000006808, uVar3 < 0x5c))))
    goto LAB_1000feca;
    uVar3 = UINT_00006858;
    if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_1000feca;
    uVar3 = (*(code *)(ulong)uVar3)(param_1,plVar7);
  }
  if (uVar3 != 0) {
    return plVar7;
  }
LAB_1000feca:
  memset(dst,0,0x110);
  return (long *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022320
#undef DAT_10022360
#undef DAT_10022370
#undef DAT_100256c0
#undef DAT_100257b8
#undef DAT_100257d0
#undef DAT_100258e0
#undef DAT_100259f0
#undef DAT_10025b00
#undef DAT_10025c10
#undef DAT_10025d20
#undef DAT_10025e30
#undef DAT_10025f40
#undef DAT_10026050
#undef DAT_10026160
#undef DAT_10026270
#undef DAT_10026380
#undef DAT_10026490
#undef DAT_100265a0
#undef DAT_100266b0
#undef DAT_100267c0
#undef DAT_100268d0
#undef DAT_100269e0
#undef DAT_10026af0
#undef DAT_10026c00
#undef DAT_10026d10
#undef DAT_10026e20
#undef DAT_10026f30
#undef DAT_10027198
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006858
#undef UINT_000068e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fef0
 */

void recovered_1000fef0(long *param_1,int param_2,int param_3,ulong param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  if ((((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) &&
      (uVar10 = (ulong)*(uint *)((long)param_1 + 0xc), uVar10 != 0)) &&
     (uVar11 = (ulong)*(uint *)(param_1 + 2), uVar11 != 0)) {
    uVar6 = (param_4 & 0xffffffff) * uVar11;
    if (uVar6 >> 0x20 == 0) {
      uVar3 = (uint)((uVar6 & 0xffffffff) / uVar10);
    }
    else {
      uVar3 = (uint)(uVar6 / uVar10);
    }
    uVar6 = param_4 & 0xffffffff;
    if ((int)param_5 < (int)uVar3) {
      uVar10 = uVar10 * param_5;
      if (uVar10 >> 0x20 == 0) {
        uVar10 = uVar10 & 0xffffffff;
      }
      uVar6 = uVar10 / uVar11;
      uVar3 = param_5;
    }
    if ((0 < (int)uVar3) && (0 < (int)uVar6)) {
      uVar11 = (ulong)uVar3;
      uVar12 = uVar6 & 0xffffffff;
      uVar10 = 0;
      do {
        uVar7 = *(uint *)(param_1 + 2) * uVar10;
        if (uVar7 >> 0x20 == 0) {
          uVar4 = (uint)((uVar7 & 0xffffffff) / uVar11);
        }
        else {
          uVar4 = (uint)(uVar7 / uVar11);
        }
        uVar7 = 0;
        do {
          uVar8 = uVar7 * *(uint *)((long)param_1 + 0xc);
          if (uVar8 >> 0x20 == 0) {
            uVar5 = (uint)((uVar8 & 0xffffffff) / uVar12);
          }
          else {
            uVar5 = (uint)(uVar8 / uVar12);
          }
          lVar9 = (ulong)uVar5 + (ulong)*(uint *)((long)param_1 + 0xc) * (ulong)uVar4;
          bVar1 = *(byte *)(lVar2 + 3 + lVar9 * 4);
          if (bVar1 != 0) {
            lVar9 = lVar9 * 4;
            recovered_100100b0(((int)param_4 - (int)uVar6) / 2 + param_2 + (int)uVar7,
                               (int)(param_5 - uVar3) / 2 + param_3 + (int)uVar10,
                               (uint)CONCAT12(*(undefined1 *)(lVar2 + 2 + lVar9),
                                              *(undefined2 *)(lVar2 + lVar9)),bVar1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar12 != uVar7);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
  }
  return;
}


#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100100b0
 */

void recovered_100100b0(uint param_1,uint param_2,uint param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;

  if ((((-1 < (int)(param_2 | param_1)) && ((int)param_1 < (int)DAT_10022170)) && (param_4 != 0)) &&
     (((int)param_2 < DAT_10022174 && (DAT_10022348 != 0)))) {
    uVar2 = param_3 & 0xffffff;
    uVar1 = (undefined1)(uVar2 >> 0x10);
    if (param_4 == 0xff) {
      lVar3 = (ulong)param_1 + (ulong)DAT_10022170 * (ulong)param_2;
      *(char *)(DAT_10022348 + lVar3 * 4) = (char)param_3;
      *(char *)(DAT_10022348 + 1 + lVar3 * 4) = (char)(uVar2 >> 8);
    }
    else {
      lVar3 = (ulong)param_1 + (ulong)DAT_10022170 * (ulong)param_2;
      uVar4 = param_4 ^ 0xff;
      *(char *)(DAT_10022348 + lVar3 * 4) =
           (char)(((param_3 & 0xff) * (uint)param_4 + *(byte *)(DAT_10022348 + lVar3 * 4) * uVar4 +
                  0x7f) / 0xff);
      *(char *)(DAT_10022348 + 1 + lVar3 * 4) =
           (char)(((uVar2 >> 8 & 0xff) * (uint)param_4 +
                   *(byte *)(DAT_10022348 + 1 + lVar3 * 4) * uVar4 + 0x7f) / 0xff);
      uVar1 = (undefined1)
              ((ulong)((uVar2 >> 0x10) * (uint)param_4 +
                       *(byte *)(DAT_10022348 + 2 + lVar3 * 4) * uVar4 + 0x7f) / 0xff);
    }
    *(undefined1 *)(DAT_10022348 + 2 + lVar3 * 4) = uVar1;
    *(undefined1 *)(DAT_10022348 + 3 + lVar3 * 4) = 0xff;
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10027040
#define DAT_10027040 (*(void * *)(((uintptr_t)pf_module_state + 0x6a27U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_f8 (*(undefined8 *)(frame + 24))
#define local_54 (*(long (*)[3])(frame + 188))
#define local_3c (*(int *)(frame + 212))
#define local_38 (*(uint *)(frame + 216))
#define local_34 (*(int *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100101e0
 */

void recovered_100101e0(int param_1,int param_2,char *param_3,uint param_4,uint param_5,uint param_6
                       )

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  long lVar7;

  local_3c = param_1;
  local_34 = param_2;
  if (((param_3 == (char *)0x0) || (param_6 != 1)) || (DAT_10027040 == (void *)0x0)) {
    if (param_3 == (char *)0x0) {
      return;
    }
    cVar5 = *param_3;
  }
  else {
    cVar5 = *param_3;
    if (cVar5 == '\0') {
      return;
    }
    lVar4 = 0;
    do {
      if (-1 < (int)param_4 && (int)param_4 <= lVar4) {
        lVar7 = lVar4;
        break;
      }
      lVar7 = lVar4 + 1;
      *(char *)((long)&local_f8 + lVar4) = cVar5;
      if ((param_3[lVar4 + 1] == '\0') || (-1 < (int)param_4 && (int)param_4 <= lVar7)) break;
      if (lVar4 == 0x9e) {
        lVar7 = 0x9f;
        break;
      }
      lVar7 = lVar4 + 2;
      *(char *)((long)&local_f8 + lVar4 + 1) = param_3[lVar4 + 1];
      cVar5 = param_3[lVar4 + 2];
      lVar4 = lVar7;
    } while (cVar5 != '\0');
    *(undefined1 *)((long)&local_f8 + lVar7) = 0;
    local_38 = param_5;
    memset(local_54,0,0x18);
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x77 < uVar3))))
    {
      uVar3 = UINT_00006874;
      if (((code *)(ulong)uVar3 != (code *)0x0) &&
         (uVar3 = (*(code *)(ulong)uVar3)
                            (DAT_10027040,(char *)&local_f8,local_38 & 0xff,
                             (param_5 & 0xffffff) >> 8 & 0xff,(param_5 & 0xffffff) >> 0x10,0xff,
                             local_54), uVar3 != 0)) {
        plVar6 = local_54;
        goto LAB_100103f8;
      }
    }
    cVar5 = *param_3;
    param_5 = local_38;
  }
  if (cVar5 == '\0') {
    return;
  }
  uVar3 = 0xffffffff;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  memset(&local_f8,0,0x18);
  iVar1 = Ram0000000000006800;
  if (iVar1 != 0x50414d57) {
    return;
  }
  iVar1 = Ram0000000000006804;
  if (iVar1 == 0) {
    return;
  }
  uVar2 = Ram0000000000006808;
  if (uVar2 < 0xc) {
    return;
  }
  uVar2 = Ram0000000000006808;
  if (uVar2 < 0x17c) {
    return;
  }
  uVar2 = UINT_00006978;
  if ((code *)(ulong)uVar2 == (code *)0x0) {
    return;
  }
  uVar3 = (*(code *)(ulong)uVar2)
                    (param_3,uVar3,param_6,
                     (param_5 | 0xff000000) >> 0x18 | (param_5 & 0xff0000) >> 8 |
                     (param_5 & 0xff00) << 8 | param_5 << 0x18,&local_f8);
  if (uVar3 == 0) {
    return;
  }
  plVar6 = &local_f8;
LAB_100103f8:
  recovered_10010420(local_3c,local_34,plVar6);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10027040
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006874
#undef UINT_00006978
#undef local_f8
#undef local_54
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#define local_38 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010420
 */

uint recovered_10010420(int param_1,int param_2,long *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;

  if (param_3 == (long *)0x0) {
    return 0;
  }
  uVar7 = *(uint *)((long)param_3 + 0xc);
  uVar2 = (ulong)uVar7;
  uVar4 = 0x7fffffff;
  if (uVar7 < 0x7fffffff) {
    uVar4 = uVar7;
  }
  local_38 = (void *)*param_3;
  if (local_38 != (void *)0x0) {
    uVar7 = *(uint *)(param_3 + 2);
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        iVar1 = (int)uVar2;
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar8 = 0;
          lVar6 = (long)local_38 + 1;
          uVar7 = param_1;
          do {
            lVar3 = *(uint *)((long)param_3 + 0x14) * uVar5;
            recovered_100100b0(uVar7,param_2 + (int)uVar5,
                               (uint)CONCAT21(*(undefined2 *)(lVar6 + lVar3),
                                              *(undefined1 *)(lVar6 + -1 + lVar3)),
                               *(byte *)(lVar6 + 2 + lVar3));
            uVar8 = uVar8 + 1;
            uVar2 = (ulong)*(uint *)((long)param_3 + 0xc);
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 4;
          } while (uVar8 < uVar2);
          uVar7 = *(uint *)(param_3 + 2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
      local_38 = (void *)*param_3;
      if (local_38 == (void *)0x0) goto LAB_10010547;
    }
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar7 = Ram0000000000006808, 0xb < uVar7)) && (uVar7 = Ram0000000000006808, 0x53 < uVar7))
    {
      uVar7 = UINT_00006850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(local_38);
      }
    }
  }
LAB_10010547:
  memset(param_3,0,0x18);
  return uVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef local_38

#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010570
 */

void recovered_10010570(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  bool bVar23;

  lVar22 = DAT_10022348;
  iVar7 = DAT_10022174;
  uVar19 = DAT_10022170;
  if (0 < param_4 && 0 < param_3) {
    lVar4 = (long)(int)DAT_10022170;
    uVar21 = DAT_10022170;
    if ((int)param_1 < (int)DAT_10022170) {
      uVar21 = param_1;
    }
    if ((int)param_1 < 0) {
      uVar21 = 0;
    }
    iVar6 = DAT_10022174;
    if (param_2 < DAT_10022174) {
      iVar6 = param_2;
    }
    if (param_2 < 0) {
      iVar6 = 0;
    }
    uVar9 = param_3 + param_1;
    uVar14 = DAT_10022170;
    if ((int)uVar9 < (int)DAT_10022170) {
      uVar14 = uVar9;
    }
    if ((int)uVar9 < 0) {
      uVar14 = 0;
    }
    iVar10 = param_2 + 1;
    if (DAT_10022174 <= param_2 + 1) {
      iVar10 = DAT_10022174;
    }
    if (param_2 < -1) {
      iVar10 = 0;
    }
    bVar23 = DAT_10022348 != 0;
    if (((int)uVar21 < (int)uVar14 && bVar23) && (iVar6 < iVar10)) {
      uVar16 = param_5 | 0xff000000;
      lVar18 = (long)(int)uVar21;
      lVar12 = (long)iVar6;
      uVar1 = (ulong)(~uVar21 + uVar14) + 1;
      uVar11 = uVar1 & 0x1fffffff8;
      lVar20 = DAT_10022348 + lVar18 * 4 + lVar12 * lVar4 * 4 + 0x10;
      lVar13 = DAT_10022348 + lVar12 * lVar4 * 4;
      do {
        lVar8 = lVar18;
        if (~uVar21 + uVar14 < 7) {
LAB_10010701:
          lVar17 = 0;
          do {
            *(uint *)(lVar13 + lVar8 * 4 + lVar17 * 4) = uVar16;
            lVar17 = lVar17 + 1;
          } while (uVar14 - (int)lVar8 != (int)lVar17);
        }
        else {
          uVar5 = 0;
          do {
            puVar2 = (uint *)(lVar20 + -0x10 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar16;
            puVar2[3] = uVar16;
            puVar2 = (uint *)(lVar20 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar16;
            puVar2[3] = uVar16;
            uVar5 = uVar5 + 8;
          } while (uVar11 != uVar5);
          lVar8 = uVar11 + lVar18;
          if (uVar1 != uVar11) goto LAB_10010701;
        }
        lVar12 = lVar12 + 1;
        lVar20 = lVar20 + lVar4 * 4;
        lVar13 = lVar13 + lVar4 * 4;
      } while (lVar12 != iVar10);
    }
    iVar3 = param_4 + param_2;
    iVar10 = param_2 + param_4 + -1;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
    if (iVar3 < 1) {
      iVar10 = 0;
    }
    if (iVar3 < 0) {
      iVar7 = 0;
    }
    if (((int)uVar21 < (int)uVar14 && bVar23) && iVar10 < iVar7) {
      uVar16 = param_5 | 0xff000000;
      lVar12 = (long)(int)uVar21;
      lVar18 = (long)iVar10;
      uVar1 = (ulong)(~uVar21 + uVar14) + 1;
      uVar11 = uVar1 & 0x1fffffff8;
      lVar20 = lVar22 + lVar12 * 4 + lVar18 * lVar4 * 4 + 0x10;
      lVar13 = lVar22 + lVar18 * lVar4 * 4;
      do {
        lVar8 = lVar12;
        if (~uVar21 + uVar14 < 7) {
LAB_10010810:
          lVar17 = 0;
          do {
            *(uint *)(lVar13 + lVar8 * 4 + lVar17 * 4) = uVar16;
            lVar17 = lVar17 + 1;
          } while (uVar14 - (int)lVar8 != (int)lVar17);
        }
        else {
          uVar5 = 0;
          do {
            puVar2 = (uint *)(lVar20 + -0x10 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar16;
            puVar2[3] = uVar16;
            puVar2 = (uint *)(lVar20 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar16;
            puVar2[3] = uVar16;
            uVar5 = uVar5 + 8;
          } while (uVar11 != uVar5);
          lVar8 = uVar11 + lVar12;
          if (uVar1 != uVar11) goto LAB_10010810;
        }
        lVar18 = lVar18 + 1;
        lVar20 = lVar20 + lVar4 * 4;
        lVar13 = lVar13 + lVar4 * 4;
      } while (lVar18 != iVar7);
    }
    uVar16 = param_1 + 1;
    if ((int)uVar19 <= (int)(param_1 + 1)) {
      uVar16 = uVar19;
    }
    if ((int)param_1 < -1) {
      uVar16 = 0;
    }
    if (((lVar22 != 0) && ((int)uVar21 < (int)uVar16)) && (iVar6 < iVar7)) {
      uVar15 = param_5 | 0xff000000;
      lVar18 = (long)(int)uVar21;
      lVar12 = (long)iVar6;
      uVar1 = (ulong)(~uVar21 + uVar16) + 1;
      uVar11 = uVar1 & 0x1fffffff8;
      lVar20 = lVar22 + lVar18 * 4 + lVar12 * lVar4 * 4 + 0x10;
      lVar13 = lVar22 + lVar12 * lVar4 * 4;
      do {
        lVar8 = lVar18;
        if (~uVar21 + uVar16 < 7) {
LAB_10010921:
          lVar17 = 0;
          do {
            *(uint *)(lVar13 + lVar8 * 4 + lVar17 * 4) = uVar15;
            lVar17 = lVar17 + 1;
          } while (uVar16 - (int)lVar8 != (int)lVar17);
        }
        else {
          uVar5 = 0;
          do {
            puVar2 = (uint *)(lVar20 + -0x10 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar15;
            puVar2[3] = uVar15;
            puVar2 = (uint *)(lVar20 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar15;
            puVar2[3] = uVar15;
            uVar5 = uVar5 + 8;
          } while (uVar11 != uVar5);
          lVar8 = uVar11 + lVar18;
          if (uVar1 != uVar11) goto LAB_10010921;
        }
        lVar12 = lVar12 + 1;
        lVar20 = lVar20 + lVar4 * 4;
        lVar13 = lVar13 + lVar4 * 4;
      } while (lVar12 != iVar7);
    }
    uVar21 = uVar9 - 1;
    if ((int)uVar19 <= (int)(uVar9 - 1)) {
      uVar21 = uVar19;
    }
    uVar19 = 0;
    if (0 < (int)uVar9) {
      uVar19 = uVar21;
    }
    if (((lVar22 != 0) && ((int)uVar19 < (int)uVar14)) && (iVar6 < iVar7)) {
      uVar21 = param_5 | 0xff000000;
      lVar13 = (long)(int)uVar19;
      lVar18 = (long)iVar6;
      uVar1 = (ulong)(~uVar19 + uVar14) + 1;
      uVar11 = uVar1 & 0x1fffffff8;
      lVar12 = lVar22 + lVar13 * 4 + lVar18 * lVar4 * 4 + 0x10;
      lVar22 = lVar22 + lVar18 * lVar4 * 4;
      do {
        lVar20 = lVar13;
        if (~uVar19 + uVar14 < 7) {
LAB_10010a1c:
          lVar8 = 0;
          do {
            *(uint *)(lVar22 + lVar20 * 4 + lVar8 * 4) = uVar21;
            lVar8 = lVar8 + 1;
          } while (uVar14 - (int)lVar20 != (int)lVar8);
        }
        else {
          uVar5 = 0;
          do {
            puVar2 = (uint *)(lVar12 + -0x10 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar21;
            puVar2[3] = uVar21;
            puVar2 = (uint *)(lVar12 + uVar5 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar21;
            puVar2[3] = uVar21;
            uVar5 = uVar5 + 8;
          } while (uVar11 != uVar5);
          lVar20 = uVar11 + lVar13;
          if (uVar1 != uVar11) goto LAB_10010a1c;
        }
        lVar18 = lVar18 + 1;
        lVar12 = lVar12 + lVar4 * 4;
        lVar22 = lVar22 + lVar4 * 4;
      } while (lVar18 != iVar7);
    }
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010a40
 */

void recovered_10010a40(int param_1,undefined8 param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    uVar3 = (param_3 & 0xffffffff) / 6;
    uVar2 = (uint)uVar3;
    uVar1 = (uint)param_5;
    recovered_100101e0(param_1,(int)param_2,param_4,uVar2,uVar1,1);
    if (param_4[uVar3] != '\0') {
      recovered_100101e0(param_1,(int)param_2 + 10,param_4 + uVar3,uVar2,uVar1,1);
      if (param_4[uVar3 * 2] != '\0') {
        recovered_100101e0(param_1,(int)param_2 + 0x14,param_4 + uVar3 * 2,uVar2,uVar1,1);
        return;
      }
    }
  }
  return;
}


#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010b10
 */

void recovered_10010b10(uint param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  int iVar19;

  lVar3 = (long)(int)DAT_10022170;
  uVar11 = DAT_10022170;
  if ((int)param_1 < (int)DAT_10022170) {
    uVar11 = param_1;
  }
  if ((int)param_1 < 0) {
    uVar11 = 0;
  }
  iVar19 = DAT_10022174;
  if (param_2 < DAT_10022174) {
    iVar19 = param_2;
  }
  if (param_2 < 0) {
    iVar19 = 0;
  }
  uVar6 = param_3 + param_1;
  uVar10 = DAT_10022170;
  if ((int)uVar6 < (int)DAT_10022170) {
    uVar10 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar10 = 0;
  }
  iVar4 = param_4 + param_2;
  iVar13 = DAT_10022174;
  if (iVar4 < DAT_10022174) {
    iVar13 = iVar4;
  }
  if (iVar4 < 0) {
    iVar13 = 0;
  }
  if (param_6 == 0xff) {
    if (((DAT_10022348 != 0) && ((int)uVar11 < (int)uVar10)) && (iVar19 < iVar13)) {
      uVar6 = param_5 | 0xff000000;
      lVar5 = (long)(int)uVar11;
      lVar7 = (long)iVar19;
      uVar1 = (ulong)(~uVar11 + uVar10) + 1;
      uVar14 = uVar1 & 0xfffffffffffffff8;
      lVar18 = lVar5 * 4 + lVar7 * lVar3 * 4 + DAT_10022348 + 0x10;
      lVar8 = DAT_10022348 + lVar7 * lVar3 * 4;
      do {
        lVar16 = lVar5;
        if (~uVar11 + uVar10 < 7) {
LAB_10010d3f:
          lVar9 = 0;
          do {
            *(uint *)(lVar8 + lVar16 * 4 + lVar9 * 4) = uVar6;
            lVar9 = lVar9 + 1;
          } while (uVar10 - (int)lVar16 != (int)lVar9);
        }
        else {
          uVar15 = 0;
          do {
            puVar2 = (uint *)(lVar18 + -0x10 + uVar15 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar6;
            puVar2[3] = uVar6;
            puVar2 = (uint *)(lVar18 + uVar15 * 4);
            *puVar2 = param_5 | 0xff000000;
            puVar2[1] = param_5 | 0xff000000;
            puVar2[2] = uVar6;
            puVar2[3] = uVar6;
            uVar15 = uVar15 + 8;
          } while (uVar14 != uVar15);
          lVar16 = uVar14 + lVar5;
          if (uVar1 != uVar14) goto LAB_10010d3f;
        }
        lVar7 = lVar7 + 1;
        lVar18 = lVar18 + lVar3 * 4;
        lVar8 = lVar8 + lVar3 * 4;
      } while (lVar7 != iVar13);
    }
  }
  else if ((((char)param_6 != '\0') && (DAT_10022348 != 0)) &&
          ((uVar10 - uVar11 != 0 && (int)uVar11 <= (int)uVar10 && (iVar19 < iVar13)))) {
    uVar6 = param_6 & 0xff;
    uVar12 = uVar6 ^ 0xff;
    lVar8 = (long)iVar19;
    do {
      pbVar17 = (byte *)((lVar8 * lVar3 + (long)(int)uVar11) * 4 + DAT_10022348);
      iVar19 = uVar10 - uVar11;
      do {
        if (((char)param_6 != '\0') && (pbVar17 != (byte *)0x0)) {
          *pbVar17 = (byte)((*pbVar17 * uVar12 + (param_5 & 0xff) * uVar6 + 0x7f) / 0xff);
          pbVar17[1] = (byte)((pbVar17[1] * uVar12 +
                              ((param_5 & 0xffffff) >> 8 & 0xff) * uVar6 + 0x7f) / 0xff);
          pbVar17[2] = (byte)((ulong)(pbVar17[2] * uVar12 +
                                     ((param_5 & 0xffffff) >> 0x10) * uVar6 + 0x7f) * 0x1010102 >>
                             0x20);
          pbVar17[3] = 0xff;
        }
        pbVar17 = pbVar17 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      lVar8 = lVar8 + 1;
    } while (lVar8 != iVar13);
  }
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define local_24 (*(undefined1 (*)[8])(frame + 28))
#define local_1c (*(byte *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010d70
 */

byte recovered_10010d70(long param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 1;
  }
  memset(local_24,0,0xc);
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcb < uVar2)) {
    uVar2 = UINT_000068c8;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_10010e49;
    uVar2 = (*(code *)(ulong)uVar2)(*(int *)(param_1 + 0x11c),(char *)(param_1 + 0x29),local_24);
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
       ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x38))))
    goto LAB_10010e49;
    uVar2 = UINT_00006834;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_10010e49;
    uVar2 = (*(code *)(ulong)uVar2)((char *)(param_1 + 0x29),local_24);
  }
  if (uVar2 != 0) {
    return (local_1c & 2) >> 1;
  }
LAB_10010e49:
  return *(byte *)(param_1 + 0x120);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef local_24
#undef local_1c

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010e60
 */

bool recovered_10010e60(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  byte bVar6;
  char *pcVar7;
  byte bVar8;

  if (param_1 == (char *)0x0) {
    param_1 = &DAT_10020a84;
    pcVar4 = (char *)0x0;
  }
  else {
    cVar2 = *param_1;
    pcVar4 = (char *)0x0;
    if (cVar2 != '\0') {
      pcVar7 = param_1;
      do {
        if (cVar2 == '/') {
          pcVar4 = pcVar7;
        }
        cVar2 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    }
  }
  pcVar7 = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    pcVar7 = param_1;
  }
  pcVar4 = (char *)0x0;
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (cVar2 == '.') {
      pcVar4 = pcVar7;
    }
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  if (param_2 != 0) {
    pcVar7 = &DAT_10020a84;
    if (pcVar4 != (char *)0x0) {
      pcVar7 = pcVar4;
    }
    lVar5 = 0;
    do {
      bVar6 = pcVar7[lVar5];
      bVar3 = *(byte *)(param_2 + lVar5);
      if ((bVar6 == 0) || (bVar3 == 0)) {
        return bVar6 == bVar3;
      }
      bVar8 = bVar6 | 0x20;
      if (0x19 < (byte)(bVar6 + 0xbf)) {
        bVar8 = bVar6;
      }
      bVar6 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar6 = bVar3;
      }
      lVar5 = lVar5 + 1;
    } while (bVar8 == bVar6);
  }
  return false;
}

#undef DAT_10020a84

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020cdc
#define DAT_10020cdc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c3U)))
#undef DAT_10020cdd
#define DAT_10020cdd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c4U)))
#undef DAT_10020cde
#define DAT_10020cde (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef DAT_10020cdf
#define DAT_10020cdf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c6U)))
#undef DAT_10020ce1
#define DAT_10020ce1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c8U)))
#undef DAT_10020ce2
#define DAT_10020ce2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c9U)))
#undef DAT_10020ce3
#define DAT_10020ce3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6caU)))
#undef DAT_10022320
#define DAT_10022320 (*(int *)(((uintptr_t)pf_module_state + 0x1d07U)))
#undef DAT_10022360
#define DAT_10022360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10022370
#define DAT_10022370 (*(int *)(((uintptr_t)pf_module_state + 0x1d57U)))
#undef DAT_100256c0
#define DAT_100256c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a7U)))
#undef DAT_100257b8
#define DAT_100257b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x519fU)))
#undef DAT_100257d0
#define DAT_100257d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b7U)))
#undef DAT_100258e0
#define DAT_100258e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52c7U)))
#undef DAT_100259f0
#define DAT_100259f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53d7U)))
#undef DAT_10025b00
#define DAT_10025b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54e7U)))
#undef DAT_10025c10
#define DAT_10025c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55f7U)))
#undef DAT_10025d20
#define DAT_10025d20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5707U)))
#undef DAT_10025e30
#define DAT_10025e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5817U)))
#undef DAT_10025f40
#define DAT_10025f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5927U)))
#undef DAT_10026050
#define DAT_10026050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a37U)))
#undef DAT_10026160
#define DAT_10026160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b47U)))
#undef DAT_10026270
#define DAT_10026270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c57U)))
#undef DAT_10026380
#define DAT_10026380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d67U)))
#undef DAT_10026490
#define DAT_10026490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e77U)))
#undef DAT_100265a0
#define DAT_100265a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f87U)))
#undef DAT_100266b0
#define DAT_100266b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6097U)))
#undef DAT_100267c0
#define DAT_100267c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61a7U)))
#undef DAT_100268d0
#define DAT_100268d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62b7U)))
#undef DAT_100269e0
#define DAT_100269e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63c7U)))
#undef DAT_10026af0
#define DAT_10026af0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64d7U)))
#undef DAT_10026c00
#define DAT_10026c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x65e7U)))
#undef DAT_10026d10
#define DAT_10026d10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66f7U)))
#undef DAT_10026e20
#define DAT_10026e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6807U)))
#undef DAT_10026f30
#define DAT_10026f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6917U)))
#undef DAT_10027198
#define DAT_10027198 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef str_10020ca9
#define str_10020ca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x690U)))
#undef str_10020cc8
#define str_10020cc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6afU)))
#undef str_10020ce4
#define str_10020ce4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cbU)))
#define local_4048 (*(byte (*)[4])(frame + 24))
#define local_4044 (*(char (*)[237])(frame + 28))
#define local_148 (*(char (*)[256])(frame + 16152))
#define local_48 (*(byte * *)(frame + 16408))
#define local_3c (*(int *)(frame + 16420))
#define local_38 (*(uint *)(frame + 16424))
#define local_34 (*(uint *)(frame + 16428))
#define abStack_3f57 (*(byte (*)[247])(frame + 265))
#define abStack_3e60 (*(byte (*)[4])(frame + 512))
#define aiStack_3e5c (*(int (*)[3909])(frame + 516))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010f50
 */

long * recovered_10010f50(char *param_1,int param_2)

{
  unsigned char frame[16512] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  char cVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;

  local_38 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return (long *)0x0;
  }
  plVar16 = &DAT_100257b8;
  lVar10 = 0x18;
  do {
    if ((((char)plVar16[-0x1f] == '\x01') && (*(int *)((long)plVar16 + -4) == param_2)) &&
       (iVar3 = strcmp((char *)((long)plVar16 + -0xf7),param_1), iVar3 == 0)) {
      if (*plVar16 != 0) {
        return plVar16;
      }
      goto LAB_10010fd9;
    }
    plVar16 = plVar16 + 0x22;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (DAT_10022320 == DAT_10022370) {
    if (1 < DAT_10027198) {
      DAT_10022360 = 1;
      return (long *)0x0;
    }
  }
  else {
    DAT_10022320 = DAT_10022370;
    DAT_10027198 = 0;
  }
  DAT_10027198 = DAT_10027198 + 1;
  if (DAT_100256c0 == '\x01') {
    if (DAT_100257d0 == '\x01') {
      if (DAT_100258e0 == '\x01') {
        if (DAT_100259f0 == '\x01') {
          if (DAT_10025b00 == '\x01') {
            if (DAT_10025c10 == '\x01') {
              if (DAT_10025d20 == '\x01') {
                if (DAT_10025e30 == '\x01') {
                  if (DAT_10025f40 == '\x01') {
                    if (DAT_10026050 == '\x01') {
                      if (DAT_10026160 == '\x01') {
                        if (DAT_10026270 == '\x01') {
                          if (DAT_10026380 == '\x01') {
                            if (DAT_10026490 == '\x01') {
                              if (DAT_100265a0 == '\x01') {
                                if (DAT_100266b0 == '\x01') {
                                  if (DAT_100267c0 == '\x01') {
                                    if (DAT_100268d0 == '\x01') {
                                      if (DAT_100269e0 == '\x01') {
                                        if (DAT_10026af0 == '\x01') {
                                          if (DAT_10026c00 == '\x01') {
                                            if (DAT_10026d10 == '\x01') {
                                              if (DAT_10026e20 == '\x01') {
                                                if (DAT_10026f30 == '\x01') {
LAB_10010fd9:
                                                  iVar3 = recovered_10004540();
                                                  plVar16 = recovered_1000fb00(str_10020ce4,iVar3);
                                                  return plVar16;
                                                }
                                                puVar17 = &DAT_10026f30;
                                              }
                                              else {
                                                puVar17 = &DAT_10026e20;
                                              }
                                            }
                                            else {
                                              puVar17 = &DAT_10026d10;
                                            }
                                          }
                                          else {
                                            puVar17 = &DAT_10026c00;
                                          }
                                        }
                                        else {
                                          puVar17 = &DAT_10026af0;
                                        }
                                      }
                                      else {
                                        puVar17 = &DAT_100269e0;
                                      }
                                    }
                                    else {
                                      puVar17 = &DAT_100268d0;
                                    }
                                  }
                                  else {
                                    puVar17 = &DAT_100267c0;
                                  }
                                }
                                else {
                                  puVar17 = &DAT_100266b0;
                                }
                              }
                              else {
                                puVar17 = &DAT_100265a0;
                              }
                            }
                            else {
                              puVar17 = &DAT_10026490;
                            }
                          }
                          else {
                            puVar17 = &DAT_10026380;
                          }
                        }
                        else {
                          puVar17 = &DAT_10026270;
                        }
                      }
                      else {
                        puVar17 = &DAT_10026160;
                      }
                    }
                    else {
                      puVar17 = &DAT_10026050;
                    }
                  }
                  else {
                    puVar17 = &DAT_10025f40;
                  }
                }
                else {
                  puVar17 = &DAT_10025e30;
                }
              }
              else {
                puVar17 = &DAT_10025d20;
              }
            }
            else {
              puVar17 = &DAT_10025c10;
            }
          }
          else {
            puVar17 = &DAT_10025b00;
          }
        }
        else {
          puVar17 = &DAT_100259f0;
        }
      }
      else {
        puVar17 = &DAT_100258e0;
      }
    }
    else {
      puVar17 = &DAT_100257d0;
    }
  }
  else {
    puVar17 = &DAT_100256c0;
  }
  *puVar17 = 1;
  *(int *)(puVar17 + 0xf4) = param_2;
  cVar8 = *param_1;
  if (cVar8 == '\0') {
    uVar18 = 0;
  }
  else {
    uVar1 = 1;
    do {
      uVar18 = uVar1;
      puVar17[uVar18] = cVar8;
      if (0xef < uVar18) break;
      cVar8 = param_1[uVar18];
      uVar1 = uVar18 + 1;
    } while (cVar8 != '\0');
  }
  puVar17[uVar18 + 1] = 0;
  recovered_10011a00(param_1,str_10020ca9,local_148);
  plVar16 = (long *)(puVar17 + 0xf8);
  iVar3 = Ram0000000000006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
     ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0xe3 < uVar4)))) {
    uVar4 = UINT_000068e0;
    if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10011362;
    uVar4 = (*(code *)(ulong)uVar4)(param_2,local_148,plVar16);
  }
  else {
    iVar3 = Ram0000000000006800;
    if (((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
       ((uVar4 = Ram0000000000006808, uVar4 < 0xc || (uVar4 = Ram0000000000006808, uVar4 < 0x5c))))
    goto LAB_10011362;
    uVar4 = UINT_00006858;
    if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10011362;
    uVar4 = (*(code *)(ulong)uVar4)(local_148,plVar16);
  }
  if (uVar4 != 0) {
    return plVar16;
  }
LAB_10011362:
  recovered_1000ac60(plVar16);
  recovered_10011a00(param_1,str_10020cc8,local_148);
  local_3c = param_2;
  uVar4 = recovered_1000d930(param_2,local_148,local_4048,0x20,&local_38);
  if (local_38 == 0 || uVar4 == 0) {
LAB_100113b3:
    iVar3 = recovered_10004540();
    plVar16 = recovered_1000fb00(str_10020ce4,iVar3);
    return plVar16;
  }
  pcVar14 = local_4044;
  pbVar15 = local_4048 + 3;
  uVar18 = 0;
  uVar4 = local_38;
LAB_100113f0:
  lVar10 = uVar18 * 0x1f8;
  if ((aiStack_3e5c[uVar18 * 0x7e] == 2) || ((abStack_3e60[lVar10] & 2) != 0))
  goto joined_r0x100116f4;
  local_48 = abStack_3f57 + lVar10;
  local_34 = uVar4;
  uVar5 = recovered_10011700(local_48);
  uVar4 = local_34;
  if ((char)uVar5 != '\0') {
    bVar2 = local_4048[lVar10];
    pcVar6 = pcVar14;
    bVar9 = bVar2;
    if (bVar2 != 0) {
      do {
        bVar11 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar11 = bVar9;
        }
        bVar9 = pcVar6[-3];
        if (bVar11 == 0x69) {
          pcVar13 = &DAT_10020cdc;
          if (bVar9 != 0) {
            bVar11 = bVar9 | 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar11 = bVar9;
            }
            if (bVar11 != 99) goto LAB_10011469;
            bVar11 = pcVar6[-2];
            pcVar13 = &DAT_10020cdd;
            if (bVar11 != 0) {
              bVar12 = bVar11 | 0x20;
              if (0x19 < (byte)(bVar11 + 0xbf)) {
                bVar12 = bVar11;
              }
              if (bVar12 != 0x6f) goto LAB_10011469;
              bVar11 = pcVar6[-1];
              pcVar13 = &DAT_10020cde;
              if (bVar11 != 0) {
                bVar12 = bVar11 | 0x20;
                if (0x19 < (byte)(bVar11 + 0xbf)) {
                  bVar12 = bVar11;
                }
                if (bVar12 != 0x6e) goto LAB_10011469;
                pcVar13 = &DAT_10020cdf;
                if (*pcVar6 != '\0') goto LAB_100115c0;
              }
            }
          }
          if (*pcVar13 == '\0') goto LAB_100115c0;
        }
LAB_10011469:
        pcVar6 = pcVar6 + 1;
      } while (bVar9 != 0);
      pbVar7 = pbVar15;
      do {
        bVar9 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar9 = bVar2;
        }
        bVar2 = pbVar7[-2];
        if (bVar9 == 0x61) {
          pcVar6 = &DAT_10020ce1;
          if (bVar2 != 0) {
            bVar9 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar9 = bVar2;
            }
            if (bVar9 != 0x70) goto LAB_10011545;
            bVar9 = pbVar7[-1];
            pcVar6 = &DAT_10020ce2;
            if (bVar9 != 0) {
              bVar11 = bVar9 | 0x20;
              if (0x19 < (byte)(bVar9 + 0xbf)) {
                bVar11 = bVar9;
              }
              if (bVar11 != 0x70) goto LAB_10011545;
              pcVar6 = &DAT_10020ce3;
              if (*pbVar7 != 0) goto LAB_100115c0;
            }
          }
          if (*pcVar6 == '\0') goto LAB_100115c0;
        }
LAB_10011545:
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      goto joined_r0x100116f4;
    }
  }
  if (uVar18 < 0x1f) goto LAB_1001162a;
  goto LAB_100113b3;
LAB_100115c0:
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0xe3 < uVar4)) {
    uVar4 = UINT_000068e0;
    if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10011698;
    uVar4 = (*(code *)(ulong)uVar4)(local_3c,(char *)local_48,plVar16);
  }
  else {
    iVar3 = Ram0000000000006800;
    if (((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
       ((uVar4 = Ram0000000000006808, uVar4 < 0xc || (uVar4 = Ram0000000000006808, uVar4 < 0x5c))))
    goto LAB_10011698;
    uVar4 = UINT_00006858;
    if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10011698;
    uVar4 = (*(code *)(ulong)uVar4)((char *)local_48,plVar16);
  }
  if (uVar4 != 0) {
    return plVar16;
  }
LAB_10011698:
  if ((((void *)*plVar16 != (void *)0x0) && (iVar3 = Ram0000000000006800, iVar3 == 0x50414d57)) &&
     ((iVar3 = Ram0000000000006804, iVar3 != 0 &&
      ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x53 < uVar4))))))
  {
    uVar4 = UINT_00006850;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      (*(code *)(ulong)uVar4)((void *)*plVar16);
    }
  }
  memset(plVar16,0,0x18);
  uVar4 = local_38;
joined_r0x100116f4:
  if (0x1e < uVar18) goto LAB_100113b3;
LAB_1001162a:
  uVar18 = uVar18 + 1;
  pcVar14 = pcVar14 + 0x1f8;
  pbVar15 = pbVar15 + 0x1f8;
  if (uVar4 <= uVar18) goto LAB_100113b3;
  goto LAB_100113f0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020cdc
#undef DAT_10020cdd
#undef DAT_10020cde
#undef DAT_10020cdf
#undef DAT_10020ce1
#undef DAT_10020ce2
#undef DAT_10020ce3
#undef DAT_10022320
#undef DAT_10022360
#undef DAT_10022370
#undef DAT_100256c0
#undef DAT_100257b8
#undef DAT_100257d0
#undef DAT_100258e0
#undef DAT_100259f0
#undef DAT_10025b00
#undef DAT_10025c10
#undef DAT_10025d20
#undef DAT_10025e30
#undef DAT_10025f40
#undef DAT_10026050
#undef DAT_10026160
#undef DAT_10026270
#undef DAT_10026380
#undef DAT_10026490
#undef DAT_100265a0
#undef DAT_100266b0
#undef DAT_100267c0
#undef DAT_100268d0
#undef DAT_100269e0
#undef DAT_10026af0
#undef DAT_10026c00
#undef DAT_10026d10
#undef DAT_10026e20
#undef DAT_10026f30
#undef DAT_10027198
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef str_10020ca9
#undef str_10020cc8
#undef str_10020ce4
#undef local_4048
#undef local_4044
#undef local_148
#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef abStack_3f57
#undef abStack_3e60
#undef aiStack_3e5c

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022080
#define DAT_10022080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011700
 */

undefined8 recovered_10011700(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined7 uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  long lVar8;
  byte bVar9;

  lVar1 = 0;
  do {
    if (param_1 == (byte *)0x0) {
      pbVar5 = &DAT_10020a84;
LAB_10011783:
      pbVar4 = (byte *)0x0;
    }
    else {
      bVar6 = *param_1;
      pbVar5 = param_1;
      if (bVar6 == 0) goto LAB_10011783;
      pbVar4 = (byte *)0x0;
      pbVar7 = param_1;
      do {
        if (bVar6 == 0x2f) {
          pbVar4 = pbVar7;
        }
        bVar6 = pbVar7[1];
        pbVar7 = pbVar7 + 1;
      } while (bVar6 != 0);
    }
    pbVar7 = pbVar4 + 1;
    if (pbVar4 == (byte *)0x0) {
      pbVar7 = pbVar5;
    }
    pbVar5 = (byte *)0x0;
    bVar6 = *pbVar7;
    while (bVar6 != 0) {
      if (bVar6 == 0x2e) {
        pbVar5 = pbVar7;
      }
      pbVar4 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar6 = *pbVar4;
    }
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = &DAT_10020a84;
    }
    lVar8 = 0;
    do {
      bVar6 = pbVar5[lVar8];
      bVar3 = *(byte *)((&DAT_10022080)[lVar1 * 3] + lVar8);
      if ((bVar6 == 0) || (bVar3 == 0)) {
        if (bVar6 == bVar3) {
          return CONCAT71((int7)((ulong)lVar1 >> 8),1);
        }
        break;
      }
      bVar9 = bVar6 | 0x20;
      if (0x19 < (byte)(bVar6 + 0xbf)) {
        bVar9 = bVar6;
      }
      bVar6 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar6 = bVar3;
      }
      lVar8 = lVar8 + 1;
    } while (bVar9 == bVar6);
    lVar1 = lVar1 + 1;
    if (lVar1 == 4) {
      if (param_1 == (byte *)0x0) {
        param_1 = &DAT_10020a84;
        pbVar5 = (byte *)0x0;
      }
      else {
        bVar6 = *param_1;
        pbVar5 = (byte *)0x0;
        if (bVar6 != 0) {
          pbVar4 = param_1;
          do {
            if (bVar6 == 0x2f) {
              pbVar5 = pbVar4;
            }
            bVar6 = pbVar4[1];
            pbVar4 = pbVar4 + 1;
          } while (bVar6 != 0);
        }
      }
      pbVar4 = pbVar5 + 1;
      if (pbVar5 == (byte *)0x0) {
        pbVar4 = param_1;
      }
      pbVar5 = (byte *)0x0;
      bVar6 = *pbVar4;
      while (bVar6 != 0) {
        if (bVar6 == 0x2e) {
          pbVar5 = pbVar4;
        }
        pbVar7 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar6 = *pbVar7;
      }
      pbVar4 = &DAT_10020a84;
      if (pbVar5 != (byte *)0x0) {
        pbVar4 = pbVar5;
      }
      bVar6 = *pbVar4;
      uVar2 = (undefined7)((ulong)pbVar4 >> 8);
      if (bVar6 == 0) {
        bVar3 = 0x2e;
        bVar6 = 0;
      }
      else {
        bVar3 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar3 = bVar6;
        }
        if (bVar3 != 0x2e) {
          return 0;
        }
        bVar6 = pbVar4[1];
        if (bVar6 == 0) {
          bVar3 = 0x61;
          bVar6 = 0;
        }
        else {
          bVar3 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar3 = bVar6;
          }
          if (bVar3 != 0x61) {
            return 0;
          }
          bVar6 = pbVar4[2];
          if (bVar6 == 0) {
            bVar3 = 0x70;
            bVar6 = 0;
          }
          else {
            bVar3 = bVar6 | 0x20;
            if (0x19 < (byte)(bVar6 + 0xbf)) {
              bVar3 = bVar6;
            }
            if (bVar3 != 0x70) {
              return 0;
            }
            bVar6 = pbVar4[3];
            if (bVar6 == 0) {
              bVar3 = 0x6e;
              bVar6 = 0;
            }
            else {
              bVar3 = bVar6 | 0x20;
              if (0x19 < (byte)(bVar6 + 0xbf)) {
                bVar3 = bVar6;
              }
              if (bVar3 != 0x6e) {
                return 0;
              }
              bVar6 = pbVar4[4];
              if (bVar6 == 0) {
                bVar3 = 0x67;
                bVar6 = 0;
              }
              else {
                bVar3 = bVar6 | 0x20;
                if (0x19 < (byte)(bVar6 + 0xbf)) {
                  bVar3 = bVar6;
                }
                if (bVar3 != 0x67) {
                  return 0;
                }
                bVar6 = pbVar4[5];
                bVar3 = 0;
                uVar2 = 0;
              }
            }
          }
        }
      }
      return CONCAT71(uVar2,bVar6 == bVar3);
    }
  } while( true );
}

#undef DAT_10020a84
#undef DAT_10022080

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011970
 */

char * recovered_10011970(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;

  if (param_1 == (char *)0x0) {
    param_1 = &DAT_10020a84;
    pcVar3 = (char *)0x0;
  }
  else {
    cVar2 = *param_1;
    pcVar3 = (char *)0x0;
    if (cVar2 != '\0') {
      pcVar4 = param_1;
      do {
        if (cVar2 == '/') {
          pcVar3 = pcVar4;
        }
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
    }
  }
  pcVar4 = pcVar3 + 1;
  if (pcVar3 == (char *)0x0) {
    pcVar4 = param_1;
  }
  pcVar3 = (char *)0x0;
  cVar2 = *pcVar4;
  while (cVar2 != '\0') {
    if (cVar2 == '.') {
      pcVar3 = pcVar4;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  pcVar4 = &DAT_10020a84;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
  }
  return pcVar4;
}

#undef DAT_10020a84

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011a00
 */

void recovered_10011a00(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;

  if (param_3 != (char *)0x0) {
    if ((param_1 == (char *)0x0) || (cVar3 = *param_1, cVar3 == '\0')) {
      pcVar5 = &DAT_10020a84;
      if (param_2 != (char *)0x0) {
        pcVar5 = param_2;
      }
      cVar3 = *pcVar5;
      if (cVar3 == '\0') {
        uVar1 = 0;
      }
      else {
        uVar2 = 0;
        do {
          uVar1 = uVar2 + 1;
          param_3[uVar2] = cVar3;
          if (0xef < uVar1) break;
          cVar3 = pcVar5[uVar2 + 1];
          uVar2 = uVar1;
        } while (cVar3 != '\0');
      }
    }
    else {
      uVar1 = 1;
      do {
        uVar2 = uVar1;
        param_3[uVar2 - 1] = cVar3;
        if (0xef < uVar2) break;
        cVar3 = param_1[uVar2];
        uVar1 = uVar2 + 1;
      } while (cVar3 != '\0');
      param_3[uVar2] = '\0';
      uVar1 = strlen(param_3);
      if (uVar1 < 0xf1) {
        lVar4 = 0xf0;
        if (uVar1 != 0xf0) {
          lVar4 = uVar1 + 1;
          param_3[uVar1] = '/';
        }
        param_3[lVar4] = '\0';
      }
      pcVar5 = &DAT_10020a84;
      if (param_2 != (char *)0x0) {
        pcVar5 = param_2;
      }
      uVar1 = strlen(param_3);
      if (0xf0 < uVar1) {
        return;
      }
      cVar3 = *pcVar5;
      uVar2 = uVar1;
      if (uVar1 != 0xf0 && cVar3 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          param_3[uVar2] = cVar3;
          uVar1 = uVar2 + 1;
          if (0xee < uVar2) break;
          cVar3 = *pcVar5;
          uVar2 = uVar1;
        } while (cVar3 != '\0');
      }
    }
    param_3[uVar1] = '\0';
  }
  return;
}

#undef DAT_10020a84

#undef DAT_10020860
#define DAT_10020860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef UNK_10020868
#define UNK_10020868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24fU)))
#undef _DAT_10020860
#define _DAT_10020860 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef uRam0000000010020868
#define uRam0000000010020868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011b30(ulong param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;

  uVar6 = (ulong)(int)DAT_10022170;
  uVar12 = (uint)param_1;
  uVar7 = uVar6;
  if ((int)uVar12 < (int)DAT_10022170) {
    uVar7 = param_1;
  }
  uVar8 = (uint)uVar7;
  if ((int)uVar12 < 0) {
    uVar8 = 0;
  }
  iVar11 = (int)(param_1 >> 0x20);
  iVar15 = DAT_10022174;
  if (iVar11 < DAT_10022174) {
    iVar15 = iVar11;
  }
  if ((long)param_1 < 0) {
    iVar15 = 0;
  }
  uVar9 = uVar12 + 0xc;
  if ((int)DAT_10022170 <= (int)(uVar12 + 0xc)) {
    uVar9 = DAT_10022170;
  }
  if ((int)uVar12 < -0xc) {
    uVar9 = 0;
  }
  iVar17 = DAT_10022174;
  if (iVar11 + 0xc < DAT_10022174) {
    iVar17 = iVar11 + 0xc;
  }
  if ((long)param_1 < -0xc00000000) {
    iVar17 = 0;
  }
  if (((DAT_10022348 != 0) && ((int)uVar8 < (int)uVar9)) && (iVar15 < iVar17)) {
    uVar10 = param_2 | 0xff000000;
    lVar13 = (long)(int)uVar8;
    lVar16 = (long)iVar15;
    uVar7 = (ulong)(~uVar8 + uVar9) + 1;
    uVar19 = uVar7 & 0xfffffffffffffff8;
    lVar20 = DAT_10022348 + lVar13 * 4 + lVar16 * uVar6 * 4 + 0x10;
    lVar23 = DAT_10022348 + lVar16 * uVar6 * 4;
    do {
      lVar14 = lVar13;
      if (~uVar8 + uVar9 < 7) {
LAB_10011c61:
        lVar18 = 0;
        do {
          *(uint *)(lVar23 + lVar14 * 4 + lVar18 * 4) = uVar10;
          lVar18 = lVar18 + 1;
        } while (uVar9 - (int)lVar14 != (int)lVar18);
      }
      else {
        uVar22 = 0;
        do {
          puVar2 = (uint *)(lVar20 + -0x10 + uVar22 * 4);
          *puVar2 = param_2 | 0xff000000;
          puVar2[1] = param_2 | 0xff000000;
          puVar2[2] = uVar10;
          puVar2[3] = uVar10;
          puVar2 = (uint *)(lVar20 + uVar22 * 4);
          *puVar2 = param_2 | 0xff000000;
          puVar2[1] = param_2 | 0xff000000;
          puVar2[2] = uVar10;
          puVar2[3] = uVar10;
          uVar22 = uVar22 + 8;
        } while (uVar19 != uVar22);
        lVar14 = uVar19 + lVar13;
        if (uVar7 != uVar19) goto LAB_10011c61;
      }
      lVar16 = lVar16 + 1;
      lVar20 = lVar20 + uVar6 * 4;
      lVar23 = lVar23 + uVar6 * 4;
    } while (lVar16 != iVar17);
  }
  recovered_10010570(uVar12,iVar11,0xc,0xc,0x434343);
  iVar15 = DAT_10022174;
  uVar8 = DAT_10022170;
  uVar5 = uRam0000000010020868;
  uVar4 = _DAT_10020860;
  if (param_3 == 2) {
    uVar12 = uVar12 + 2;
    iVar11 = iVar11 + 2;
    iVar17 = 8;
    iVar15 = 8;
LAB_10011ec6:
    recovered_10010570(uVar12,iVar11,iVar17,iVar15,0x1e1e1e);
    return;
  }
  if (param_3 == 1) {
    uVar8 = uVar12 + 2;
    if ((int)DAT_10022170 <= (int)(uVar12 + 2)) {
      uVar8 = DAT_10022170;
    }
    if ((int)uVar12 < -2) {
      uVar8 = 0;
    }
    iVar15 = iVar11 + 8;
    if (DAT_10022174 <= iVar11 + 8) {
      iVar15 = DAT_10022174;
    }
    if ((long)param_1 < -0x800000000) {
      iVar15 = 0;
    }
    uVar9 = uVar12 + 10;
    if ((int)DAT_10022170 <= (int)(uVar12 + 10)) {
      uVar9 = DAT_10022170;
    }
    if ((int)uVar12 < -10) {
      uVar9 = 0;
    }
    iVar17 = DAT_10022174;
    if (iVar11 + 10 < DAT_10022174) {
      iVar17 = iVar11 + 10;
    }
    if ((long)param_1 < -0xa00000000) {
      iVar17 = 0;
    }
    if (((DAT_10022348 != 0) && ((int)uVar8 < (int)uVar9)) && (iVar15 < iVar17)) {
      lVar20 = (long)(int)uVar8;
      lVar14 = (long)iVar15;
      uVar7 = (ulong)(~uVar8 + uVar9) + 1;
      uVar6 = uVar7 & 0xfffffffffffffff8;
      lVar23 = lVar14 * (int)DAT_10022170;
      lVar16 = lVar20 * 4 + lVar23 * 4 + DAT_10022348 + 0x10;
      lVar13 = (long)(int)DAT_10022170 * 4;
      lVar23 = DAT_10022348 + lVar23 * 4;
      do {
        lVar18 = lVar20;
        if (~uVar8 + uVar9 < 7) {
LAB_10011e5e:
          lVar21 = 0;
          do {
            *(undefined4 *)(lVar23 + lVar18 * 4 + lVar21 * 4) = 0xff1e1e1e;
            lVar21 = lVar21 + 1;
          } while (uVar9 - (int)lVar18 != (int)lVar21);
        }
        else {
          uVar19 = 0;
          do {
            puVar3 = (undefined8 *)(lVar16 + -0x10 + uVar19 * 4);
            *puVar3 = uVar4;
            puVar3[1] = uVar5;
            puVar3 = (undefined8 *)(lVar16 + uVar19 * 4);
            *puVar3 = uVar4;
            puVar3[1] = uVar5;
            uVar19 = uVar19 + 8;
          } while (uVar6 != uVar19);
          lVar18 = uVar6 + lVar20;
          if (uVar7 != uVar6) goto LAB_10011e5e;
        }
        lVar14 = lVar14 + 1;
        lVar16 = lVar16 + lVar13;
        lVar23 = lVar23 + lVar13;
      } while (lVar14 != iVar17);
    }
  }
  else {
    if (param_3 != 0) {
      recovered_10010570(uVar12 + 1,iVar11 + 2,6,6,0x1e1e1e);
      uVar12 = uVar12 + 5;
      iVar11 = iVar11 + 5;
      iVar17 = 6;
      iVar15 = 6;
      goto LAB_10011ec6;
    }
    uVar9 = iVar11 + 3;
    uVar7 = (ulong)DAT_10022170;
    iVar11 = 0;
    while( true ) {
      uVar10 = uVar9 + iVar11;
      uVar1 = uVar12 + 3 + iVar11;
      if (((int)uVar1 < (int)uVar8 && -1 < (int)(uVar1 | uVar10)) &&
         (DAT_10022348 != 0 && (int)uVar10 < iVar15)) {
        lVar23 = (ulong)uVar1 + uVar10 * uVar7;
        *(undefined1 *)(DAT_10022348 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 1 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 2 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 3 + lVar23 * 4) = 0xff;
      }
      if (iVar11 == 6) break;
      iVar11 = iVar11 + 1;
    }
    iVar11 = 9;
    while( true ) {
      uVar10 = uVar12 + iVar11;
      if (((int)uVar10 < (int)uVar8 && -1 < (int)(uVar10 | uVar9)) &&
         (DAT_10022348 != 0 && (int)uVar9 < iVar15)) {
        lVar23 = (ulong)uVar10 + uVar9 * uVar7;
        *(undefined1 *)(DAT_10022348 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 1 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 2 + lVar23 * 4) = 0x1e;
        *(undefined1 *)(DAT_10022348 + 3 + lVar23 * 4) = 0xff;
      }
      if (iVar11 == 3) break;
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + -1;
    }
  }
  return;
}

#undef DAT_10020860
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348
#undef UNK_10020868
#undef _DAT_10020860
#undef uRam0000000010020868

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006930
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#undef DAT_10020870
#define DAT_10020870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257U)))
#undef DAT_10020880
#define DAT_10020880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef DAT_10020d6a
#define DAT_10020d6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x751U)))
#undef DAT_10020d7a
#define DAT_10020d7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x761U)))
#undef DAT_10020d7f
#define DAT_10020d7f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x766U)))
#undef DAT_10020d88
#define DAT_10020d88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x76fU)))
#undef DAT_10020df0
#define DAT_10020df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d7U)))
#undef DAT_10020ed1
#define DAT_10020ed1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b8U)))
#undef DAT_10020ef6
#define DAT_10020ef6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ddU)))
#undef DAT_10020efb
#define DAT_10020efb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8e2U)))
#undef DAT_10020f1a
#define DAT_10020f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x901U)))
#undef DAT_10020f27
#define DAT_10020f27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90eU)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(uint *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10027068
#define DAT_10027068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a4fU)))
#undef DAT_10027070
#define DAT_10027070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a57U)))
#undef DAT_10027078
#define DAT_10027078 (*(uint *)(((uintptr_t)pf_module_state + 0x6a5fU)))
#undef DAT_1002707c
#define DAT_1002707c (*(uint *)(((uintptr_t)pf_module_state + 0x6a63U)))
#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
#undef DAT_100271a0
#define DAT_100271a0 (*(uint *)(((uintptr_t)pf_module_state + 0x6b87U)))
#undef DAT_100271a4
#define DAT_100271a4 (*(uint *)(((uintptr_t)pf_module_state + 0x6b8bU)))
#undef DAT_100271a8
#define DAT_100271a8 (*(uint *)(((uintptr_t)pf_module_state + 0x6b8fU)))
#undef DAT_100271ac
#define DAT_100271ac (*(uint *)(((uintptr_t)pf_module_state + 0x6b93U)))
#undef DAT_100271b0
#define DAT_100271b0 (*(uint *)(((uintptr_t)pf_module_state + 0x6b97U)))
#undef DAT_100271c0
#define DAT_100271c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ba7U)))
#undef DAT_100272b1
#define DAT_100272b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c98U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram0000000000006930
#define Ram0000000000006930 (*(uint32_t *)(0x6930U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_000068b8
#define UINT_000068b8 (*(uint *)(0x68b8U))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_000068f8
#define UINT_000068f8 (*(uint *)(0x68f8U))
#undef UNK_10020878
#define UNK_10020878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#undef UNK_10020888
#define UNK_10020888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef _DAT_10020870
#define _DAT_10020870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x257U)))
#undef _DAT_10020880
#define _DAT_10020880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef str_100209e6
#define str_100209e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cdU)))
#undef str_10020c3b
#define str_10020c3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x622U)))
#undef str_10020d32
#define str_10020d32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x719U)))
#undef str_10020d5f
#define str_10020d5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x746U)))
#undef str_10020d6e
#define str_10020d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x755U)))
#undef str_10020d8c
#define str_10020d8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x773U)))
#undef str_10020d92
#define str_10020d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x779U)))
#undef str_10020d9e
#define str_10020d9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_10020daf
#define str_10020daf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
#undef str_10020dba
#define str_10020dba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a1U)))
#undef str_10020dd5
#define str_10020dd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#undef str_10020dde
#define str_10020dde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c5U)))
#undef str_10020de6
#define str_10020de6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cdU)))
#undef str_10020df5
#define str_10020df5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dcU)))
#undef str_10020dfd
#define str_10020dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e4U)))
#undef str_10020e06
#define str_10020e06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7edU)))
#undef str_10020e0d
#define str_10020e0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f4U)))
#undef str_10020e14
#define str_10020e14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fbU)))
#undef str_10020e22
#define str_10020e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x809U)))
#undef str_10020e2a
#define str_10020e2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x811U)))
#undef str_10020e35
#define str_10020e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81cU)))
#undef str_10020e3e
#define str_10020e3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_10020e4b
#define str_10020e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x832U)))
#undef str_10020e55
#define str_10020e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83cU)))
#undef str_10020e5b
#define str_10020e5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x842U)))
#undef str_10020e68
#define str_10020e68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_10020e7d
#define str_10020e7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x864U)))
#undef str_10020e87
#define str_10020e87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86eU)))
#undef str_10020e90
#define str_10020e90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x877U)))
#undef str_10020e99
#define str_10020e99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x880U)))
#undef str_10020ea6
#define str_10020ea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef str_10020eaf
#define str_10020eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x896U)))
#undef str_10020eb7
#define str_10020eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89eU)))
#undef str_10020ec0
#define str_10020ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a7U)))
#undef str_10020ec8
#define str_10020ec8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8afU)))
#undef str_10020ed3
#define str_10020ed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8baU)))
#undef str_10020ee4
#define str_10020ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cbU)))
#undef str_10020f00
#define str_10020f00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e7U)))
#undef str_10020f08
#define str_10020f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8efU)))
#undef str_10020f10
#define str_10020f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f7U)))
#undef str_10020f32
#define str_10020f32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x919U)))
#undef str_10020f40
#define str_10020f40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x927U)))
#undef str_10020f47
#define str_10020f47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92eU)))
#undef str_10020f53
#define str_10020f53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93aU)))
#undef str_10020f91
#define str_10020f91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x978U)))
#undef str_10020f9c
#define str_10020f9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x983U)))
#undef str_10020fa4
#define str_10020fa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98bU)))
#undef str_10020fac
#define str_10020fac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x993U)))
#undef str_10020fb5
#define str_10020fb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99cU)))
#undef uRam0000000010020878
#define uRam0000000010020878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#undef uRam0000000010020888
#define uRam0000000010020888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#define auStack_2294 (*(uint (*)[1895])(frame + 508))
#define local_2478 (*(char (*)[8])(frame + 24))
#define local_2470 (*(ushort *)(frame + 32))
#define local_2450 (*(byte (*)[16])(frame + 64))
#define local_2440 (*(byte (*)[428])(frame + 80))
#define local_4f8 (*(char (*)[96])(frame + 8088))
#define local_498 (*(char (*)[80])(frame + 8184))
#define local_448 (*(char (*)[96])(frame + 8264))
#define local_3e8 (*(char (*)[44])(frame + 8360))
#define local_3bc (*(undefined1 (*)[16])(frame + 8404))
#define local_3ac (*(uint *)(frame + 8420))
#define local_3a8 (*(uint *)(frame + 8424))
#define local_3a4 (*(uint *)(frame + 8428))
#define local_388 (*(char (*)[56])(frame + 8456))
#define local_350 (*(byte (*)[4])(frame + 8512))
#define local_34c (*(char (*)[96])(frame + 8516))
#define local_2ec (*(uint *)(frame + 8612))
#define local_2e8 (*(int *)(frame + 8616))
#define local_2e4 (*(int *)(frame + 8620))
#define local_2e0 (*(int *)(frame + 8624))
#define local_2dc (*(uint *)(frame + 8628))
#define local_2d8 (*(uint *)(frame + 8632))
#define local_2d4 (*(uint *)(frame + 8636))
#define local_2d0 (*(ulong *)(frame + 8640))
#define local_2c8 (*(ulong *)(frame + 8648))
#define local_2c0 (*(ulong *)(frame + 8656))
#define local_2b8 (*(ulong *)(frame + 8664))
#define local_2a8 (*(undefined8 *)(frame + 8680))
#define local_2a0 (*(undefined4 *)(frame + 8688))
#define local_288 (*(undefined8 *)(frame + 8712))
#define local_280 (*(undefined4 *)(frame + 8720))
#define local_268 (*(undefined8 *)(frame + 8744))
#define local_260 (*(undefined4 *)(frame + 8752))
#define local_248 (*(undefined8 *)(frame + 8776))
#define local_240 (*(undefined4 *)(frame + 8784))
#define uStack_1c0 (*(undefined8 *)(frame + 8912))
#define local_228 (*(ulong *)(frame + 8808))
#define local_220 (*(undefined4 *)(frame + 8816))
#define local_1e8 (*(ulong *)(frame + 8872))
#define local_1e0 (*(undefined2 *)(frame + 8880))
#define local_1c8 (*(undefined8 *)(frame + 8904))
#define local_1b8 (*(undefined4 *)(frame + 8920))
#define local_178 (*(undefined8 *)(frame + 8984))
#define local_170 (*(undefined4 *)(frame + 8992))
#define local_158 (*(undefined8 *)(frame + 9016))
#define local_150 (*(undefined4 *)(frame + 9024))
#define local_138 (*(undefined8 *)(frame + 9048))
#define local_130 (*(undefined4 *)(frame + 9056))
#define local_118 (*(undefined8 *)(frame + 9080))
#define local_110 (*(undefined4 *)(frame + 9088))
#define local_10c (*(undefined1 *)(frame + 9092))
#define local_b8 (*(ulong *)(frame + 9176))
#define local_b0 (*(ulong *)(frame + 9184))
#define local_a8 (*(ulong *)(frame + 9192))
#define local_a0 (*(uint *)(frame + 9200))
#define local_9c (*(uint *)(frame + 9204))
#define local_98 (*(ulong *)(frame + 9208))
#define local_8c (*(uint *)(frame + 9220))
#define local_88 (*(char * *)(frame + 9224))
#define local_7c (*(uint *)(frame + 9236))
#define local_78 (*(ulong *)(frame + 9240))
#define local_70 (*(ulong *)(frame + 9248))
#define local_64 (*(int *)(frame + 9260))
#define local_60 (*(ulong *)(frame + 9264))
#define local_58 (*(ulong *)(frame + 9272))
#define local_50 (*(ulong *)(frame + 9280))
#define local_48 (*(long * *)(frame + 9288))
#define local_40 (*(ulong *)(frame + 9296))
#define local_38 (*(char * *)(frame + 9304))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011f80(undefined *param_1)

{
  unsigned char frame[9392] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  ulong uVar23;
  char cVar24;
  int iVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  long lVar30;
  char cVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  undefined *puVar35;
  byte *pbVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  uint128 auVar47;

  uVar42 = *(uint *)(param_1 + 0x58);
  uVar34 = (ulong)uVar42;
  uVar18 = uVar42 + 0xe;
  local_40 = (ulong)uVar18;
  uVar45 = *(uint *)(param_1 + 0x5c);
  local_60 = (ulong)uVar45;
  iVar39 = uVar45 + 0x26;
  local_38 = param_1;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x10))) {
  case 0:
    recovered_10015590((long)param_1);
    return;
  case 1:
    lVar27 = *(long *)(param_1 + 0xb0c);
    if (lVar27 == 0) {
      pcVar26 = param_1 + 0x261;
      uVar42 = 0x323232;
      goto LAB_10012464;
    }
    uVar34 = (ulong)*(uint *)(param_1 + 0xb18);
    if ((((uVar34 != 0) && (0x34 < *(int *)(param_1 + 100))) && (0x1c < *(int *)(param_1 + 0x60)))
       && (uVar15 = (ulong)*(uint *)(param_1 + 0xb1c), *(uint *)(param_1 + 0xb1c) != 0)) {
      uVar45 = *(int *)(param_1 + 0x60) - 0x1c;
      uVar42 = *(int *)(param_1 + 100) - 0x34;
      uVar23 = uVar45 * uVar15;
      if (uVar23 >> 0x20 == 0) {
        uVar20 = (uint)((uVar23 & 0xffffffff) / uVar34);
      }
      else {
        uVar20 = (uint)(uVar23 / uVar34);
      }
      uVar21 = uVar45;
      if ((int)uVar42 < (int)uVar20) {
        uVar34 = uVar34 * uVar42;
        if (uVar34 >> 0x20 == 0) {
          uVar21 = (uint)((uVar34 & 0xffffffff) / uVar15);
        }
        else {
          uVar21 = (uint)(uVar34 / uVar15);
        }
        uVar20 = uVar42;
      }
      if ((0 < (int)uVar20) && (0 < (int)uVar21)) {
        uVar34 = (ulong)uVar20;
        uVar15 = (ulong)uVar21;
        lVar44 = (long)(int)DAT_10022170;
        lVar33 = (long)DAT_10022174;
        lVar41 = (long)(int)((int)(uVar45 - uVar21) / 2 + uVar18);
        lVar28 = (long)((int)(uVar42 - uVar20) / 2 + iVar39);
        lVar30 = lVar28 * (ulong)DAT_10022170;
        lVar43 = (lVar30 + lVar41) * 4;
        lVar16 = (ulong)DAT_10022170 * 4;
        lVar30 = lVar41 * 4 + lVar30 * 4;
        uVar23 = 0;
        do {
          uVar11 = *(uint *)(param_1 + 0xb1c) * uVar23;
          if (uVar11 >> 0x20 == 0) {
            uVar42 = (uint)((uVar11 & 0xffffffff) / uVar34);
          }
          else {
            uVar42 = (uint)(uVar11 / uVar34);
          }
          lVar1 = uVar23 + lVar28;
          uVar11 = 0;
          do {
            uVar13 = uVar11 * *(uint *)(param_1 + 0xb18);
            if (uVar13 >> 0x20 == 0) {
              uVar45 = (uint)((uVar13 & 0xffffffff) / uVar15);
            }
            else {
              uVar45 = (uint)(uVar13 / uVar15);
            }
            if (((long)(lVar41 + uVar11) < lVar44 &&
                 -1 < (int)((uint)lVar1 | (uint)(lVar41 + uVar11))) &&
               (DAT_10022348 != 0 && lVar1 < lVar33)) {
              lVar14 = (ulong)uVar45 + (ulong)*(uint *)(param_1 + 0xb18) * (ulong)uVar42;
              uVar3 = *(undefined1 *)(lVar27 + 1 + lVar14 * 4);
              uVar4 = *(undefined1 *)(lVar27 + 2 + lVar14 * 4);
              *(undefined1 *)(DAT_10022348 + lVar30 + uVar11 * 4) =
                   *(undefined1 *)(lVar27 + lVar14 * 4);
              *(undefined1 *)(DAT_10022348 + lVar43 + 1 + uVar11 * 4) = uVar3;
              *(undefined1 *)(DAT_10022348 + lVar43 + 2 + uVar11 * 4) = uVar4;
              *(undefined1 *)(DAT_10022348 + lVar43 + 3 + uVar11 * 4) = 0xff;
            }
            uVar11 = uVar11 + 1;
          } while (uVar15 != uVar11);
          uVar23 = uVar23 + 1;
          lVar43 = lVar43 + lVar16;
          lVar30 = lVar30 + lVar16;
        } while (uVar23 < uVar34);
      }
    }
    break;
  default:
    cVar31 = param_1[0x261];
    if (cVar31 != '\0') {
      puVar35 = param_1 + 0x261;
      do {
        lVar27 = 0;
        while( true ) {
          if ((cVar31 == '\0') || (cVar31 == '\n')) goto LAB_10012013;
          local_2478[lVar27] = cVar31;
          cVar31 = puVar35[lVar27 + 1];
          if ((cVar31 == '\0') || (cVar31 == '\n')) break;
          local_2478[lVar27 + 1] = cVar31;
          cVar31 = puVar35[lVar27 + 2];
          if ((cVar31 == '\0') || (cVar31 == '\n')) {
            lVar27 = lVar27 + 2;
            goto LAB_10012013;
          }
          local_2478[lVar27 + 2] = cVar31;
          cVar31 = puVar35[lVar27 + 3];
          if ((cVar31 == '\0') || (cVar31 == '\n')) {
            lVar27 = lVar27 + 3;
            goto LAB_10012013;
          }
          if (lVar27 == 0x5c) {
            lVar27 = 0x5f;
            goto LAB_10012013;
          }
          local_2478[lVar27 + 3] = cVar31;
          cVar31 = puVar35[lVar27 + 4];
          lVar27 = lVar27 + 4;
        }
        lVar27 = lVar27 + 1;
LAB_10012013:
        local_2478[lVar27] = '\0';
        recovered_100101e0((int)local_40,iVar39,local_2478,0xffffffff,0x2d2d2d,1);
        iVar39 = iVar39 + 0x10;
        cVar31 = puVar35[(ulong)(puVar35[lVar27] == '\n') + lVar27];
        puVar35 = puVar35 + (ulong)(puVar35[lVar27] == '\n') + lVar27;
      } while (cVar31 != '\0');
    }
    break;
  case 3:
    uVar42 = *(uint *)(param_1 + 0x60);
    local_58 = (ulong)uVar42;
    uVar20 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
    uVar18 = 1;
    if (1 < (int)uVar20) {
      uVar18 = uVar20;
    }
    local_88 = (char *)CONCAT44(PF_PART4(local_88, 4),(int)(uVar42 - 0xb2) / (int)uVar18);
    iVar19 = recovered_10004540();
    local_48 = recovered_1000fb00(str_10020c3b,iVar19);
    recovered_10016c10(str_10020d5f,&DAT_10020d6a,local_498,0x48);
    uVar15 = 0;
    recovered_10016c10(str_10020d6e,&DAT_10020d7a,(char *)&local_118,0x60);
    memset(local_2478,0,0x1bc);
    iVar19 = Ram0000000000006800;
    if ((((iVar19 == 0x50414d57) && (iVar19 = Ram0000000000006804, iVar19 != 0)) &&
        (uVar42 = Ram0000000000006808, 0xb < uVar42)) &&
       (uVar42 = Ram0000000000006808, 0x133 < uVar42)) {
      uVar42 = Ram0000000000006930;
      if ((((code *)(ulong)uVar42 != (code *)0x0) &&
          (iVar19 = (*(code *)(ulong)uVar42)(local_2478), iVar19 != 0)) && ((local_2470 & 1) != 0))
      {
        local_118 = 0x68537265746e6957;
        local_110 = 0x206c6c65;
        local_10c = 0;
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          uVar15 = 0x5f;
          if (uVar23 != 0x5f) {
            *(undefined1 *)((long)&local_118 + uVar23) = 0x30;
            if (uVar23 < 0x5e) {
              *(undefined1 *)((long)&local_118 + uVar23 + 1) = 0x2e;
              if (uVar23 == 0x5d) {
                uVar15 = 0x5f;
              }
              else {
                uVar15 = uVar23 + 3;
                *(undefined1 *)((long)&local_118 + uVar23 + 2) = 0x34;
              }
            }
            else {
              uVar15 = uVar23 + 1;
            }
          }
          *(undefined1 *)((long)&local_118 + uVar15) = 0;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          uVar15 = 0x5f;
          if (uVar23 != 0x5f) {
            uVar15 = uVar23 + 1;
            *(undefined1 *)((long)&local_118 + uVar23) = 0x20;
          }
          *(undefined1 *)((long)&local_118 + uVar15) = 0;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          uVar15 = 0x5f;
          if (uVar23 != 0x5f) {
            *(undefined1 *)((long)&local_118 + uVar23) = 0x42;
            if (uVar23 < 0x5e) {
              *(undefined1 *)((long)&local_118 + uVar23 + 1) = 0x65;
              if (uVar23 == 0x5d) {
                uVar15 = 0x5f;
              }
              else {
                *(undefined1 *)((long)&local_118 + uVar23 + 2) = 0x74;
                if (uVar23 < 0x5c) {
                  uVar15 = uVar23 + 4;
                  *(undefined1 *)((long)&local_118 + uVar23 + 3) = 0x61;
                }
                else {
                  uVar15 = uVar23 + 3;
                }
              }
            }
            else {
              uVar15 = uVar23 + 1;
            }
          }
          *(undefined1 *)((long)&local_118 + uVar15) = 0;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          uVar15 = 0x5f;
          if (uVar23 != 0x5f) {
            cVar31 = ' ';
            pcVar26 = &DAT_10020d7f;
            do {
              *(char *)((long)&local_118 + uVar23) = cVar31;
              uVar15 = uVar23 + 1;
              if (0x5d < uVar23) break;
              cVar31 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              uVar23 = uVar15;
            } while (cVar31 != '\0');
          }
          *(undefined1 *)((long)&local_118 + uVar15) = 0;
        }
        pbVar36 = &DAT_10020d88;
        if (local_2450[0] != 0) {
          pbVar36 = local_2450;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          if (uVar23 != 0x5f) {
            bVar9 = *pbVar36;
            uVar11 = uVar23;
            while( true ) {
              uVar15 = 0;
              uVar23 = uVar11;
              if (bVar9 == 0) break;
              pbVar36 = pbVar36 + 1;
              *(byte *)((long)&local_118 + uVar11) = bVar9;
              uVar23 = uVar11 + 1;
              if (0x5d < uVar11) break;
              bVar9 = *pbVar36;
              uVar11 = uVar23;
            }
          }
          *(undefined1 *)((long)&local_118 + uVar23) = 0;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          uVar15 = 0x5f;
          if (uVar23 != 0x5f) {
            uVar15 = uVar23 + 1;
            *(undefined1 *)((long)&local_118 + uVar23) = 0x20;
          }
          *(undefined1 *)((long)&local_118 + uVar15) = 0;
        }
        pbVar36 = (byte *)str_10020d8c;
        if (local_2440[0] != 0) {
          pbVar36 = local_2440;
        }
        uVar23 = strlen((char *)&local_118);
        if (uVar23 < 0x60) {
          if (uVar23 != 0x5f) {
            bVar9 = *pbVar36;
            uVar11 = uVar23;
            while( true ) {
              uVar15 = 0;
              uVar23 = uVar11;
              if (bVar9 == 0) break;
              pbVar36 = pbVar36 + 1;
              *(byte *)((long)&local_118 + uVar11) = bVar9;
              uVar23 = uVar11 + 1;
              if (0x5d < uVar11) break;
              bVar9 = *pbVar36;
              uVar11 = uVar23;
            }
          }
          *(undefined1 *)((long)&local_118 + uVar23) = 0;
        }
      }
    }
    uVar42 = 0;
    memset(local_350,0,0xa8);
    iVar19 = Ram0000000000006800;
    if (((iVar19 == 0x50414d57) && (iVar19 = Ram0000000000006804, iVar19 != 0)) &&
       ((uVar18 = Ram0000000000006808, 0xb < uVar18 && (uVar18 = Ram0000000000006808, 0xfb < uVar18)
        ))) {
      uVar18 = UINT_000068f8;
      if (((code *)(ulong)uVar18 == (code *)0x0) ||
         (uVar18 = (*(code *)(ulong)uVar18)(local_350), uVar18 == 0)) goto LAB_10012ea2;
      uVar22 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
      uVar42 = local_2ec;
    }
    else {
LAB_10012ea2:
      iVar19 = Ram0000000000006800;
      uVar22 = 0;
      if (iVar19 == 0x50414d57) {
        iVar19 = Ram0000000000006804;
        if (iVar19 == 0) {
LAB_10012ef8:
          uVar22 = 0;
          uVar42 = 0;
        }
        else {
          uVar18 = Ram0000000000006808;
          uVar22 = 0;
          uVar42 = 0;
          if (0xb < uVar18) {
            uVar18 = Ram0000000000006808;
            uVar22 = 0;
            if (0xbb < uVar18) {
              uVar42 = UINT_000068b8;
              if ((code *)(ulong)uVar42 == (code *)0x0) goto LAB_10012ef8;
              uVar42 = (*(code *)(ulong)uVar42)();
              uVar22 = 0;
            }
          }
        }
      }
    }
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar22);
    local_388[0] = '\0';
    uVar18 = 1;
    if (1 < uVar42) {
      uVar18 = uVar42;
    }
    pcVar26 = str_10020ee4;
    if (1 >= uVar42) {
      pcVar26 = str_10020ed3;
    }
    recovered_100164d0(local_388,0x30,uVar18);
    uVar23 = strlen(local_388);
    uVar15 = local_40;
    if (uVar23 < 0x30) {
      if (uVar23 != 0x2f) {
        cVar31 = *pcVar26;
        uVar11 = uVar23;
        while (uVar23 = uVar11, cVar31 != '\0') {
          pcVar26 = pcVar26 + 1;
          local_388[uVar11] = cVar31;
          uVar23 = uVar11 + 1;
          if (0x2d < uVar11) break;
          uVar11 = uVar23;
          cVar31 = *pcVar26;
        }
      }
      local_388[uVar23] = '\0';
    }
    pcVar26 = local_34c;
    if (local_34c[0] == '\0') {
      pcVar26 = str_10020d92;
    }
    cVar31 = (char)uVar15;
    if (cVar31 == '\0') {
      pcVar26 = str_10020d92;
    }
    cVar24 = *pcVar26;
    if (cVar24 == '\0') {
      uVar15 = 0;
    }
    else {
      uVar23 = 0;
      do {
        uVar15 = uVar23 + 1;
        local_4f8[uVar23] = cVar24;
        if (0x5e < uVar15) break;
        cVar24 = pcVar26[uVar23 + 1];
        uVar23 = uVar15;
      } while (cVar24 != '\0');
    }
    local_4f8[uVar15] = '\0';
    if ((cVar31 == '\0') || ((local_350[0] & 4) == 0)) {
      local_2a8 = 0x616c696176616e75;
      local_2a0 = 0x656c62;
      local_288 = 0x616c696176616e75;
      local_280 = 0x656c62;
      local_268 = 0x616c696176616e75;
      local_260 = 0x656c62;
      local_248 = 0x616c696176616e75;
      local_240 = 0x656c62;
      local_50 = uVar34;
      if (cVar31 != '\0') {
        if ((local_350[0] & 2) != 0) goto LAB_100133f0;
      }
LAB_1001304f:
      local_228 = 0x616c696176616e75;
      local_220 = 0x656c62;
      local_178 = 0x616c696176616e75;
      local_170 = 0x656c62;
      local_158 = 0x616c696176616e75;
      local_150 = 0x656c62;
LAB_10013082:
      local_138 = 0x616c696176616e75;
      local_130 = 0x656c62;
    }
    else {
      local_78 = local_2c0;
      if (local_2d0 == 0) {
        local_2d0 = local_2c8;
      }
      local_50 = uVar34;
      recovered_10016d80(local_2d0,(char *)&local_2a8,0x20);
      recovered_10016d80(local_2c8,(char *)&local_288,0x20);
      recovered_10016d80(local_2b8,(char *)&local_268,0x20);
      recovered_10016d80(local_78,(char *)&local_248,0x20);
      if ((local_350[0] & 2) == 0) goto LAB_1001304f;
LAB_100133f0:
      local_228 = local_228 & 0xffffffffffffff00;
      recovered_10017370((char *)&local_228,&DAT_10020ef6,local_2e8);
      recovered_10017370((char *)&local_228,&DAT_10020efb,local_2e4);
      recovered_10017370((char *)&local_228,str_10020f00,local_2e0);
      if ((char)local_228 == '\0') {
        local_228 = 0x616c696176616e75;
        local_220 = 0x656c62;
      }
      if ((ulong)local_2dc == 0) {
        local_178 = 0x616c696176616e75;
        local_170 = 0x656c62;
      }
      else {
        recovered_10016d80((ulong)local_2dc,(char *)&local_178,0x18);
      }
      if ((ulong)local_2d8 == 0) {
        local_158 = 0x616c696176616e75;
        local_150 = 0x656c62;
      }
      else {
        recovered_10016d80((ulong)local_2d8,(char *)&local_158,0x18);
      }
      if ((ulong)local_2d4 == 0) goto LAB_10013082;
      recovered_10016d80((ulong)local_2d4,(char *)&local_138,0x18);
    }
    uVar34 = local_50;
    memset(local_3bc,0,0x34);
    iVar19 = Ram0000000000006800;
    if ((((iVar19 == 0x50414d57) && (iVar19 = Ram0000000000006804, iVar19 != 0)) &&
        (uVar42 = Ram0000000000006808, 0xb < uVar42)) &&
       (uVar42 = Ram0000000000006808, 0x7f < uVar42)) {
      uVar42 = UINT_0000687c;
      if (((code *)(ulong)uVar42 == (code *)0x0) ||
         (uVar42 = (*(code *)(ulong)uVar42)(local_3bc), uVar42 == 0)) goto LAB_10013172;
      local_1c8 = local_1c8 & 0xffffffffffffff00;
      recovered_100164d0((char *)&local_1c8,0x48,local_3ac);
      uVar15 = strlen((char *)&local_1c8);
      if (uVar15 < 0x48) {
        lVar27 = 0x47;
        if (uVar15 != 0x47) {
          *(undefined1 *)((long)&local_1c8 + uVar15) = 0x20;
          if (uVar15 < 0x46) {
            *(undefined1 *)((long)&local_1c8 + uVar15 + 1) = 0x78;
            if (uVar15 == 0x45) {
              lVar27 = 0x47;
            }
            else {
              lVar27 = uVar15 + 3;
              *(undefined1 *)((long)&local_1c8 + uVar15 + 2) = 0x20;
            }
          }
          else {
            lVar27 = uVar15 + 1;
          }
        }
        *(undefined1 *)((long)&local_1c8 + lVar27) = 0;
      }
      recovered_100164d0((char *)&local_1c8,0x48,local_3a8);
      uVar15 = strlen((char *)&local_1c8);
      if (uVar15 < 0x48) {
        lVar27 = 0x47;
        if (uVar15 != 0x47) {
          *(undefined1 *)((long)&local_1c8 + uVar15) = 0x2c;
          if (uVar15 < 0x46) {
            lVar27 = uVar15 + 2;
            *(undefined1 *)((long)&local_1c8 + uVar15 + 1) = 0x20;
          }
          else {
            lVar27 = uVar15 + 1;
          }
        }
        *(undefined1 *)((long)&local_1c8 + lVar27) = 0;
      }
      recovered_100164d0((char *)&local_1c8,0x48,local_3a4);
      uVar23 = strlen((char *)&local_1c8);
      if (uVar23 < 0x48) {
        uVar15 = 0x47;
        if (uVar23 != 0x47) {
          cVar31 = '-';
          pcVar26 = str_10020d9e;
          do {
            pcVar26 = pcVar26 + 1;
            *(char *)((long)&local_1c8 + uVar23) = cVar31;
            uVar15 = uVar23 + 1;
            if (0x45 < uVar23) break;
            cVar31 = *pcVar26;
            uVar23 = uVar15;
          } while (cVar31 != '\0');
        }
        goto LAB_1001318f;
      }
    }
    else {
LAB_10013172:
      local_1c8 = _DAT_10020870;
      uStack_1c0 = uRam0000000010020878;
      local_1b8 = 0x656c6261;
      uVar15 = 0x14;
LAB_1001318f:
      *(undefined1 *)((long)&local_1c8 + uVar15) = 0;
    }
    local_8c = 0;
    uVar18 = recovered_10004540();
    builtin_strncpy(local_448,"device ",8);
    uVar42 = uVar18;
    if ((int)uVar18 < 0) {
      uVar15 = strlen(local_448);
      if (uVar15 < 0x60) {
        lVar27 = 0x5f;
        if (uVar15 != 0x5f) {
          lVar27 = uVar15 + 1;
          local_448[uVar15] = '-';
        }
        local_448[lVar27] = '\0';
      }
      uVar42 = -uVar18;
    }
    recovered_100164d0(local_448,0x60,uVar42);
    local_1e8 = 0x656d756c6f762030;
    local_1e0 = 0x73;
    builtin_strncpy(local_3e8,"unknown",8);
    memset(local_2478,0,0x1f80);
    iVar19 = Ram0000000000006800;
    if (((iVar19 == 0x50414d57) && (iVar19 = Ram0000000000006804, iVar19 != 0)) &&
       ((uVar42 = Ram0000000000006808, 0xb < uVar42 && (uVar42 = Ram0000000000006808, 0xc3 < uVar42)
        ))) {
      uVar42 = UINT_000068c0;
      if (((code *)(ulong)uVar42 != (code *)0x0) &&
         (uVar42 = (*(code *)(ulong)uVar42)(local_2478,0x10,&local_8c), uVar42 != 0)) {
        local_1e8 = local_1e8 & 0xffffffffffffff00;
        recovered_100164d0((char *)&local_1e8,0x20,local_8c);
        pcVar26 = str_10020f10;
        if (local_8c == 1) {
          pcVar26 = str_10020f08;
        }
        uVar15 = strlen((char *)&local_1e8);
        if (uVar15 < 0x20) {
          if (uVar15 != 0x1f) {
            cVar31 = *pcVar26;
            uVar23 = uVar15;
            while (uVar15 = uVar23, cVar31 != '\0') {
              pcVar26 = pcVar26 + 1;
              *(char *)((long)&local_1e8 + uVar23) = cVar31;
              uVar15 = uVar23 + 1;
              if (0x1d < uVar23) break;
              uVar23 = uVar15;
              cVar31 = *pcVar26;
            }
          }
          *(undefined1 *)((long)&local_1e8 + uVar15) = 0;
        }
        uVar45 = (uint)local_60;
        if (local_8c == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0x10;
          if (local_8c < 0x10) {
            uVar15 = (ulong)local_8c;
          }
          pcVar26 = local_2478 + 1;
          uVar23 = 0;
          bVar29 = false;
          lVar27 = 0;
          do {
            bVar7 = !bVar29;
            bVar29 = true;
            if (bVar7) {
              if (auStack_2294[uVar23 * 0x7e + 3] == uVar18) {
                cVar31 = local_2478[uVar23 * 0x1f8];
                if (cVar31 == '\0') {
                  uVar11 = 0;
                }
                else {
                  uVar13 = 0;
                  do {
                    uVar11 = uVar13 + 1;
                    local_448[uVar13] = cVar31;
                    if (0x5e < uVar11) break;
                    cVar31 = pcVar26[uVar13];
                    uVar13 = uVar11;
                  } while (cVar31 != '\0');
                }
                local_448[uVar11] = '\0';
              }
              else {
                bVar29 = false;
              }
            }
            lVar27 = lVar27 + (ulong)auStack_2294[uVar23 * 0x7e];
            uVar23 = uVar23 + 1;
            pcVar26 = pcVar26 + 0x1f8;
          } while (uVar23 != uVar15);
          uVar15 = lVar27 * 0x200;
        }
        recovered_10016d80(uVar15,local_3e8,0x20);
      }
    }
    pcVar26 = local_38;
    uVar18 = (int)uVar34 + 0x12;
    iVar19 = (int)local_58 + -0x24;
    uVar42 = *(uint *)(local_38 + 8);
    if (uVar42 == 0xffffffff) {
      uVar42 = DAT_10022188;
      if (DAT_10022188 < 4) goto LAB_100135b6;
LAB_100135be:
      bVar9 = ~local_38[5];
    }
    else {
      if (3 < uVar42) goto LAB_100135be;
LAB_100135b6:
      if (uVar42 != 0) goto LAB_100135be;
      bVar9 = 0xff;
    }
    recovered_10010b10(uVar18,iVar39,iVar19,*(int *)(local_38 + 100) + -0x34,0xfcfcfc,(uint)bVar9);
    recovered_10010570(uVar18,iVar39,iVar19,*(int *)(pcVar26 + 100) + -0x34,0xb8b8b8);
    iVar39 = (int)local_50;
    if (local_48 == (long *)0x0) {
      recovered_10010b10(iVar39 + 0x2eU,uVar45 + 0x3c,0x36,0x36,0xececec,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(iVar39 + 0x2eU,uVar45 + 0x3c,0x36,0x36,0x808080);
    }
    else {
      recovered_1000fef0(local_48,iVar39 + 0x26,uVar45 + 0x38,0x46,0x46);
    }
    recovered_100101e0(iVar39 + 0x82,uVar45 + 0x3a,str_10020daf,0x1c,0x141414,2);
    recovered_100101e0(iVar39 + 0x84,uVar45 + 0x56,local_498,0x26,0x484848,1);
    recovered_100101e0(iVar39 + 0x84,uVar45 + 0x68,str_10020dba,0x26,0x484848,1);
    local_48 = (long *)(ulong)*(uint *)(local_38 + 0x58);
    iVar19 = *(int *)(local_38 + 0x5c);
    uVar45 = *(uint *)(local_38 + 0x58) + 0x82;
    iVar39 = iVar19 + 0x86;
    uVar42 = 0xfff6f6f6;
    if (*(int *)(local_38 + 0xb08) == 0) {
      uVar42 = 0xffe8e8e8;
    }
    uVar18 = 0x505050;
    if (*(int *)(local_38 + 0xb08) == 0) {
      uVar18 = 0x202020;
    }
    recovered_10010b10(uVar45,iVar39,0x4c,0x16,uVar42,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(uVar45,iVar39,0x4c,0x16,0x969696);
    uVar42 = recovered_10016f60(str_10020dd5,0xffffffff);
    recovered_100101e0((int)(0x4c - uVar42) / 2 + (int)local_48 + 0x82,iVar19 + 0x8e,str_10020dd5,
                       0xffffffff,uVar18,1);
    local_48 = (long *)(ulong)*(uint *)(local_38 + 0x58);
    iVar19 = *(int *)(local_38 + 0x5c);
    uVar45 = *(uint *)(local_38 + 0x58) + 0xd6;
    iVar39 = iVar19 + 0x86;
    uVar42 = 0xfff6f6f6;
    if (*(int *)(local_38 + 0xb08) == 1) {
      uVar42 = 0xffe8e8e8;
    }
    uVar18 = 0x505050;
    if (*(int *)(local_38 + 0xb08) == 1) {
      uVar18 = 0x202020;
    }
    recovered_10010b10(uVar45,iVar39,0x46,0x16,uVar42,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(uVar45,iVar39,0x46,0x16,0x969696);
    uVar42 = recovered_10016f60(str_10020dde,0xffffffff);
    recovered_100101e0((int)(0x46 - uVar42) / 2 + (int)local_48 + 0xd6,iVar19 + 0x8e,str_10020dde,
                       0xffffffff,uVar18,1);
    uVar8 = uRam0000000010020888;
    uVar17 = _DAT_10020880;
    if (*(int *)(local_38 + 0xb08) == 1) {
      uVar42 = *(uint *)(local_38 + 0x58);
      local_40 = (ulong)uVar42;
      iVar39 = *(int *)(local_38 + 0x5c);
      iVar19 = *(int *)(local_38 + 0x60);
      uVar18 = uVar42 + 0x22;
      uVar45 = DAT_10022170;
      if ((int)uVar18 < (int)DAT_10022170) {
        uVar45 = uVar18;
      }
      if ((int)uVar42 < -0x22) {
        uVar45 = 0;
      }
      iVar40 = iVar39 + 0xa8;
      if (DAT_10022174 <= iVar39 + 0xa8) {
        iVar40 = DAT_10022174;
      }
      if (iVar39 < -0xa8) {
        iVar40 = 0;
      }
      uVar20 = (uVar42 + iVar19) - 0x22;
      uVar42 = DAT_10022170;
      if ((int)uVar20 < (int)DAT_10022170) {
        uVar42 = uVar20;
      }
      if ((int)uVar20 < 0) {
        uVar42 = 0;
      }
      iVar38 = DAT_10022174;
      if (iVar39 + 0xa9 < DAT_10022174) {
        iVar38 = iVar39 + 0xa9;
      }
      if (iVar39 < -0xa9) {
        iVar38 = 0;
      }
      if (((DAT_10022348 != 0) && ((int)uVar45 < (int)uVar42)) && (iVar40 < iVar38)) {
        lVar16 = (long)(int)uVar45;
        lVar44 = (long)iVar40;
        uVar34 = (ulong)(~uVar45 + uVar42) + 1;
        uVar15 = uVar34 & 0xfffffffffffffff8;
        lVar27 = lVar44 * (int)DAT_10022170;
        lVar28 = lVar16 * 4 + lVar27 * 4 + DAT_10022348 + 0x10;
        lVar30 = (long)(int)DAT_10022170 * 4;
        lVar27 = DAT_10022348 + lVar27 * 4;
        do {
          lVar33 = lVar16;
          if (~uVar45 + uVar42 < 7) {
LAB_100139fc:
            lVar41 = 0;
            do {
              *(undefined4 *)(lVar27 + lVar33 * 4 + lVar41 * 4) = 0xffd6d6d6;
              lVar41 = lVar41 + 1;
            } while (uVar42 - (int)lVar33 != (int)lVar41);
          }
          else {
            uVar23 = 0;
            do {
              puVar2 = (undefined8 *)(lVar28 + -0x10 + uVar23 * 4);
              *puVar2 = uVar17;
              puVar2[1] = uVar8;
              puVar2 = (undefined8 *)(lVar28 + uVar23 * 4);
              *puVar2 = uVar17;
              puVar2[1] = uVar8;
              uVar23 = uVar23 + 8;
            } while (uVar15 != uVar23);
            lVar33 = uVar15 + lVar16;
            if (uVar34 != uVar15) goto LAB_100139fc;
          }
          lVar44 = lVar44 + 1;
          lVar28 = lVar28 + lVar30;
          lVar27 = lVar27 + lVar30;
        } while (lVar44 != iVar38);
        local_40 = (ulong)*(uint *)(local_38 + 0x58);
        iVar39 = *(int *)(local_38 + 0x5c);
        iVar19 = *(int *)(local_38 + 0x60);
        uVar18 = *(uint *)(local_38 + 0x58) + 0x22;
      }
      recovered_10010b10(uVar18,iVar39 + 0xb4,iVar19 + -0x44,0x2e,0xfafafa,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(uVar18,iVar39 + 0xb4,iVar19 + -0x44,0x2e,0x949494);
      builtin_strncpy(local_2478,"DEVICES:",8);
      local_2470 = 0x20;
      recovered_100164d0(local_2478,0xa0,DAT_1002719c);
      uVar15 = strlen(local_2478);
      uVar34 = local_40;
      if (uVar15 < 0xa0) {
        lVar27 = 0x9f;
        if (uVar15 != 0x9f) {
          lVar27 = uVar15 + 1;
          local_2478[uVar15] = '/';
        }
        local_2478[lVar27] = '\0';
      }
      recovered_100164d0(local_2478,0xa0,DAT_100271a0);
      iVar40 = (int)uVar34 + 0x2a;
      uVar45 = iVar19 - 0x54;
      uVar42 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
      if ((int)uVar45 < 1) {
        uVar18 = 1;
      }
      else {
        uVar18 = 1;
        if (1 < (int)uVar42) {
          uVar18 = uVar42;
        }
        uVar18 = uVar45 / uVar18;
        if ((int)uVar45 < (int)uVar42) {
          uVar18 = 1;
        }
      }
      recovered_100101e0(iVar40,iVar39 + 0xbf,local_2478,uVar18,0x282828,1);
      builtin_strncpy(local_2478,"NATIVE ",8);
      recovered_100164d0(local_2478,0xa0,DAT_100271a4);
      uVar34 = strlen(local_2478);
      if (uVar34 < 0xa0) {
        uVar15 = 0x9f;
        if (uVar34 != 0x9f) {
          cVar31 = ' ';
          pcVar26 = &DAT_10020f1a;
          do {
            local_2478[uVar34] = cVar31;
            uVar15 = uVar34 + 1;
            if (0x9d < uVar34) break;
            cVar31 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            uVar34 = uVar15;
          } while (cVar31 != '\0');
        }
        local_2478[uVar15] = '\0';
      }
      recovered_100164d0(local_2478,0xa0,DAT_100271a8);
      uVar34 = strlen(local_2478);
      if (uVar34 < 0xa0) {
        uVar15 = 0x9f;
        if (uVar34 != 0x9f) {
          cVar31 = ' ';
          pcVar26 = &DAT_10020f27;
          do {
            local_2478[uVar34] = cVar31;
            uVar15 = uVar34 + 1;
            if (0x9d < uVar34) break;
            cVar31 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            uVar34 = uVar15;
          } while (cVar31 != '\0');
        }
        local_2478[uVar15] = '\0';
      }
      recovered_100164d0(local_2478,0xa0,DAT_100271ac);
      uVar34 = strlen(local_2478);
      if (uVar34 < 0xa0) {
        uVar15 = 0x9f;
        if (uVar34 != 0x9f) {
          cVar31 = ' ';
          pcVar26 = str_10020f32;
          do {
            pcVar26 = pcVar26 + 1;
            local_2478[uVar34] = cVar31;
            uVar15 = uVar34 + 1;
            if (0x9d < uVar34) break;
            cVar31 = *pcVar26;
            uVar34 = uVar15;
          } while (cVar31 != '\0');
        }
        local_2478[uVar15] = '\0';
      }
      recovered_100164d0(local_2478,0xa0,DAT_100271b0);
      uVar18 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
      local_60 = 1;
      uVar42 = 1;
      if (0 < (int)uVar45) {
        uVar42 = 1;
        if (1 < (int)uVar18) {
          uVar42 = uVar18;
        }
        uVar42 = uVar45 / uVar42;
        if ((int)uVar45 < (int)uVar18) {
          uVar42 = 1;
        }
      }
      recovered_100101e0(iVar40,iVar39 + 0xd1,local_2478,uVar42,0x282828,1);
      uVar42 = *(uint *)(local_38 + 0x58);
      local_50 = (ulong)uVar42;
      local_7c = *(uint *)(local_38 + 0x5c);
      local_40 = (ulong)local_7c;
      iVar39 = *(int *)(local_38 + 0x60);
      iVar40 = *(int *)(local_38 + 100) + local_7c + -0x92;
      iVar19 = local_7c + 0x114;
      if ((int)(local_7c + 0x114) < iVar40) {
        iVar19 = iVar40;
      }
      iVar38 = local_7c + 0xee;
      iVar40 = (iVar19 - local_7c) + -0xee;
      local_88 = (char *)CONCAT44(PF_PART4(local_88, 4),iVar40);
      local_b0 = (ulong)((iVar19 - local_7c) - 0x102) / 0x12;
      local_58 = (ulong)(uVar42 + 0x36);
      local_48 = (long *)0x0;
      local_b8 = local_58;
      if (iVar39 + -0x46 < 0x19) {
LAB_100145cf:
        local_98 = (ulong)(((int)local_60 * 2 & 0xffffU) * 0x5556 >> 0x10);
      }
      else {
        uVar45 = iVar39 - 0x5e;
        local_60 = (ulong)uVar45;
        local_48 = (long *)0x8e;
        if (uVar45 < 0x169) {
          local_48 = (long *)(ulong)((uVar45 & 0xffff) / 3);
        }
        local_b8 = (ulong)(uVar42 + 0x36 + (int)local_48);
        local_98 = 0x1b4;
        if (uVar45 < 0x209) goto LAB_100145cf;
      }
      uVar45 = 1;
      if (0x25 < iVar40) {
        uVar45 = (int)local_b0 + (uint)((int)local_b0 == 0);
      }
      uVar18 = DAT_1002719c - uVar45;
      if (DAT_1002719c < uVar45) {
        uVar18 = 0;
      }
      if ((int)uVar18 < 1) {
        uVar18 = 0;
      }
      if (DAT_1002719c == 0) {
        local_38[0xafc] = '\0';
        local_38[0xafd] = '\0';
        local_38[0xafe] = '\0';
        local_38[0xaff] = '\0';
        local_38[0xb00] = '\0';
        local_38[0xb01] = '\0';
        local_38[0xb02] = '\0';
        local_38[0xb03] = '\0';
        local_38[0xb04] = '\0';
      }
      else {
        if ((local_38[0xb04] != '\x01') || (DAT_1002719c <= *(uint *)(local_38 + 0xafc))) {
          local_38[0xafc] = '\0';
          local_38[0xafd] = '\0';
          local_38[0xafe] = '\0';
          local_38[0xaff] = '\0';
          local_38[0xb04] = '\x01';
        }
        if ((int)*(uint *)(local_38 + 0xb00) < 0) {
          local_38[0xb00] = '\0';
          local_38[0xb01] = '\0';
          local_38[0xb02] = '\0';
          local_38[0xb03] = '\0';
        }
        else if (uVar18 < *(uint *)(local_38 + 0xb00)) {
          *(uint *)(local_38 + 0xb00) = uVar18;
        }
      }
      local_7c = local_7c + 0xf4;
      PF_PART4(local_78, 0) = iVar39 + -0x46;
      recovered_10010b10(uVar42 + 0x22,iVar38,iVar39 + -0x44,iVar19 - iVar38,0xffffff,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(uVar42 + 0x22,iVar38,iVar39 + -0x44,iVar19 - iVar38,0xaeaeae);
      iVar39 = (int)local_50;
      iVar19 = (int)local_40 + 0xef;
      recovered_10010b10(iVar39 + 0x23,iVar19,(uint)local_78,0x12,0xeeeeee,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      local_78 = CONCAT44(PF_PART4(local_78, 4),iVar39 + 0x39);
      uVar18 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
      uVar45 = 1;
      uVar42 = 1;
      uVar20 = (uint)local_48;
      if (10 < uVar20) {
        uVar42 = 1;
        if (1 < (int)uVar18) {
          uVar42 = uVar18;
        }
        uVar42 = (uVar20 - 10) / uVar42;
        if ((int)(uVar20 - 10) < (int)uVar18) {
          uVar42 = 1;
        }
      }
      iVar39 = (int)local_98;
      iVar40 = (int)local_58 + iVar39;
      recovered_100101e0((uint)local_78,local_7c,str_10020f40,uVar42,0x262626,1);
      local_70 = CONCAT44(PF_PART4(local_70, 4),(int)local_b8 + 3);
      uVar20 = iVar39 - uVar20;
      local_a0 = uVar20 - 10;
      uVar42 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
      if (10 < (int)uVar20) {
        uVar45 = 1;
        if (1 < (int)uVar42) {
          uVar45 = uVar42;
        }
        uVar45 = local_a0 / uVar45;
        if ((int)local_a0 < (int)uVar42) {
          uVar45 = 1;
        }
      }
      uVar42 = 1;
      local_a8 = (ulong)uVar20;
      recovered_100101e0((uint)local_70,local_7c,str_10020f47,uVar45,0x262626,1);
      local_64 = iVar40 + 3;
      uVar18 = (int)local_60 - (int)local_98;
      local_9c = uVar18 - 8;
      uVar45 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
      if (8 < (int)uVar18) {
        uVar42 = 1;
        if (1 < (int)uVar45) {
          uVar42 = uVar45;
        }
        uVar42 = local_9c / uVar42;
        if ((int)local_9c < (int)uVar45) {
          uVar42 = 1;
        }
      }
      local_98 = (ulong)uVar18;
      recovered_100101e0(local_64,local_7c,str_10020f53,uVar42,0x262626,1);
      uVar42 = 0;
      recovered_10010b10((int)local_b8 - 2,iVar19,1,0x12,0xbcbcbc,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010b10(iVar40 - 2,iVar19,1,0x12,0xbcbcbc,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      local_50 = (ulong)((int)local_50 + 0x47);
      local_7c = (int)local_48 - 0x16;
      local_40 = (ulong)((int)local_40 + 0x106);
      do {
        uVar45 = *(int *)(local_38 + 0xb00) + uVar42;
        if (((int)uVar45 < 0) || ((int)DAT_1002719c <= (int)uVar45)) break;
        if ((local_38[0xb04] == '\x01') && (uVar45 == *(uint *)(local_38 + 0xafc))) {
          uVar18 = 0xeeab65;
          uVar20 = 0xffffff;
        }
        else {
          uVar18 = -(uint)((uVar42 & 1) == 0) | 0xfffdf2eb;
          uVar20 = 0x1e1e1e;
        }
        iVar39 = (int)local_40;
        lVar27 = (ulong)uVar45 * 0x571;
        recovered_10010b10((uint)local_58,iVar39 + -5,(int)local_60,0x12,uVar18,
                           (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
        uVar17 = recovered_100175b0((long)(&DAT_100272b1 + lVar27));
        recovered_10010b10((uint)local_78,iVar39 + -1,8,8,(uint)uVar17,
                           (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
        uVar21 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
        uVar18 = 1;
        uVar45 = 1;
        if (0x16 < (uint)local_48) {
          uVar45 = uVar21;
          if ((int)uVar21 < 2) {
            uVar45 = 1;
          }
          uVar45 = local_7c / uVar45;
          if ((int)local_7c < (int)uVar21) {
            uVar45 = 1;
          }
        }
        recovered_100101e0((int)local_50,(int)local_40,&DAT_100272b1 + lVar27,uVar45,uVar20,1);
        uVar45 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
        if (10 < (int)local_a8) {
          uVar18 = uVar45;
          if ((int)uVar45 < 2) {
            uVar18 = 1;
          }
          uVar18 = local_a0 / uVar18;
          if ((int)local_a0 < (int)uVar45) {
            uVar18 = 1;
          }
        }
        recovered_100101e0((uint)local_70,(int)local_40,&DAT_100271c0 + lVar27,uVar18,uVar20,1);
        uVar18 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
        uVar45 = 1;
        if (8 < (int)local_98) {
          uVar21 = uVar18;
          if ((int)uVar18 < 2) {
            uVar21 = 1;
          }
          if ((int)uVar18 <= (int)local_9c) {
            uVar45 = local_9c / uVar21;
          }
        }
        recovered_100101e0(local_64,(int)local_40,(char *)(lVar27 + ((uintptr_t)pf_module_state + 0x6cb8U)),uVar45,uVar20,1);
        if ((int)(uint)local_88 < 0x26) break;
        uVar42 = uVar42 + 1;
        local_40 = (ulong)((int)local_40 + 0x12);
      } while (uVar42 < (uint)local_b0);
      iVar39 = *(int *)(local_38 + 0x58);
      iVar19 = *(int *)(local_38 + 0x5c);
      iVar38 = *(int *)(local_38 + 100) + iVar19 + -0x92;
      iVar40 = iVar19 + 0x114;
      if (iVar19 + 0x114 < iVar38) {
        iVar40 = iVar38;
      }
      iVar38 = -0x19;
      if (0x25 < (iVar40 - iVar19) + -0xee) {
        iVar38 = (iVar40 - iVar19) + -0x12d;
      }
      iVar40 = iVar38 + -2;
      if (iVar38 < 0x14) {
        iVar40 = 0x12;
      }
      auVar47 = recovered_10017700((long)local_38);
      recovered_10010b10(iVar39 + 0x28U,iVar19 + 0x106,0xc,iVar40,0xe4e4e4,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(iVar39 + 0x28U,iVar19 + 0x106,0xc,iVar40,0xacacac);
      recovered_10010b10(PF_PART4(auVar47, 0) + 1,PF_PART4(auVar47, 4) + 1,PF_PART4(auVar47, 8) + -2,PF_PART4(auVar47, 12) + -2,
                         0xbebebe,(uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(PF_PART4(auVar47, 0),PF_PART4(auVar47, 4),PF_PART4(auVar47, 8),PF_PART4(auVar47, 12),0x747474);
      iVar39 = *(int *)(local_38 + 0x5c);
      iVar40 = *(int *)(local_38 + 100) + iVar39 + -0x92;
      iVar19 = iVar39 + 0x114;
      if (iVar39 + 0x114 < iVar40) {
        iVar19 = iVar40;
      }
      iVar40 = (iVar19 - iVar39) + -0x102;
      if ((iVar19 - iVar39) + -0xee < 0x26) {
        iVar40 = 0x12;
      }
      recovered_100165f0(CONCAT44(iVar39 + iVar40 + 0xdb,*(int *)(local_38 + 0x58) + 0x28),
                         0xe0000000c,1);
      iVar39 = *(int *)(local_38 + 0x5c);
      iVar40 = *(int *)(local_38 + 100) + iVar39 + -0x92;
      iVar19 = iVar39 + 0x114;
      if (iVar39 + 0x114 < iVar40) {
        iVar19 = iVar40;
      }
      iVar40 = (iVar19 - iVar39) + -0x102;
      if ((iVar19 - iVar39) + -0xee < 0x26) {
        iVar40 = 0x12;
      }
      recovered_100165f0(CONCAT44(iVar39 + iVar40 + 0xeb,*(int *)(local_38 + 0x58) + 0x28),
                         0xe0000000c,0);
      iVar40 = *(int *)(local_38 + 0x58);
      local_40 = (ulong)*(uint *)(local_38 + 0x60);
      uVar42 = *(int *)(local_38 + 100) + *(int *)(local_38 + 0x5c);
      iVar39 = *(int *)(local_38 + 100) + -0x86 + *(int *)(local_38 + 0x5c);
      iVar19 = *(uint *)(local_38 + 0x60) - 0x44;
      recovered_10010b10(iVar40 + 0x22U,iVar39,iVar19,0x68,0xe7e7e7,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(iVar40 + 0x22U,iVar39,iVar19,0x68,0xc3c3c3);
      if ((local_38[0xb04] == '\x01') && (*(uint *)(local_38 + 0xafc) < DAT_1002719c)) {
        local_38 = &DAT_100271c0 + (ulong)*(uint *)(local_38 + 0xafc) * 0x571;
        uVar45 = 1;
        local_50 = CONCAT44(PF_PART4(local_50, 4),iVar40 + 0x34);
        recovered_100101e0(iVar40 + 0x34,uVar42 - 0x76,str_10020f9c,0xffffffff,0x282828,1);
        uVar18 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
        pcVar26 = local_38;
        if (0xb4 < (int)local_40) {
          uVar20 = (int)local_40 - 0xb4;
          uVar45 = 1;
          if (1 < (int)uVar18) {
            uVar45 = uVar18;
          }
          uVar45 = uVar20 / uVar45;
          if ((int)uVar20 < (int)uVar18) {
            uVar45 = 1;
          }
        }
        PF_PART4(local_60, 0) = iVar40 + 0x80U;
        recovered_100101e0(iVar40 + 0x80U,uVar42 - 0x76,local_38,uVar45,0x282828,1);
        iVar39 = uVar42 - 0x60;
        recovered_100101e0((int)local_50,iVar39,str_10020fa4,0xffffffff,0x282828,1);
        local_48 = (long *)(ulong)uVar42;
        uVar17 = recovered_100175b0((long)(pcVar26 + 0xf1));
        recovered_10010b10((uint)local_60,uVar42 - 0x5d,8,8,(uint)uVar17,
                           (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
        local_58 = CONCAT44(PF_PART4(local_58, 4),iVar39);
        recovered_100101e0(iVar40 + 0x90,iVar39,pcVar26 + 0xf1,0x18,0x282828,1);
        iVar39 = (int)local_40;
        local_60 = CONCAT44(PF_PART4(local_60, 4),iVar40 + 0x90);
        if (iVar39 < 0x254) {
          iVar19 = (int)local_48;
          iVar38 = iVar19 + -0x4a;
          recovered_100101e0((int)local_50,iVar38,str_10020fac,0xffffffff,0x282828,1);
          pcVar26 = local_38 + 0x111;
          local_58 = CONCAT44(PF_PART4(local_58, 4),iVar39 + -0xc4);
          uVar42 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
          uVar45 = 1;
          if (0xc4 < iVar39) {
            uVar45 = 1;
            if (1 < (int)uVar42) {
              uVar45 = uVar42;
            }
            uVar45 = (uint)local_58 / uVar45;
            if ((int)(uint)local_58 < (int)uVar42) {
              uVar45 = 1;
            }
          }
          uVar42 = 1;
          iVar40 = (uint)local_60;
          recovered_100101e0((uint)local_60,iVar38,pcVar26,uVar45,0x282828,1);
          iVar19 = iVar19 + -0x34;
          recovered_100101e0((int)local_50,iVar19,str_10020fb5,0xffffffff,0x282828,1);
          pcVar26 = local_38 + 0x171;
          uVar45 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
          if (0xc4 < (int)local_40) {
            uVar42 = 1;
            if (1 < (int)uVar45) {
              uVar42 = uVar45;
            }
            uVar42 = (uint)local_58 / uVar42;
            if ((int)(uint)local_58 < (int)uVar45) {
              uVar42 = 1;
            }
          }
        }
        else {
          iVar19 = (uint)local_58;
          recovered_100101e0(iVar40 + 0x150,(uint)local_58,str_10020fac,0xffffffff,0x282828,1);
          local_88 = local_38 + 0x111;
          uVar45 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
          uVar42 = 1;
          if (1 < (int)uVar45) {
            uVar42 = uVar45;
          }
          uVar42 = (iVar39 - 0x1e4U) / uVar42;
          if ((int)(iVar39 - 0x1e4U) < (int)uVar45) {
            uVar42 = 1;
          }
          recovered_100101e0(iVar40 + 0x1b0,iVar19,local_88,uVar42,0x282828,1);
          iVar19 = (int)local_48 + -0x46;
          recovered_100101e0((int)local_50,iVar19,str_10020fb5,0xffffffff,0x282828,1);
          pcVar26 = local_38 + 0x171;
          uVar18 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
          uVar45 = 1;
          if (1 < (int)uVar18) {
            uVar45 = uVar18;
          }
          uVar42 = 1;
          if ((int)uVar18 <= (int)(iVar39 - 0xc4U)) {
            uVar42 = (iVar39 - 0xc4U) / uVar45;
          }
          iVar40 = (uint)local_60;
        }
      }
      else {
        iVar40 = iVar40 + 0x34;
        iVar19 = uVar42 - 0x76;
        uVar45 = recovered_10016f60(&DAT_10020ed1,0xffffffff);
        uVar42 = 1;
        if (0x68 < (int)local_40) {
          uVar18 = (int)local_40 - 0x68;
          uVar42 = 1;
          if (1 < (int)uVar45) {
            uVar42 = uVar45;
          }
          uVar42 = uVar18 / uVar42;
          if ((int)uVar18 < (int)uVar45) {
            uVar42 = 1;
          }
        }
        pcVar26 = str_10020f91;
      }
      uVar45 = 0x282828;
    }
    else {
      iVar39 = (int)local_58;
      iVar19 = (int)local_50;
      local_48 = (long *)CONCAT44(PF_PART4(local_48, 4),iVar39 + -0x10c + iVar19);
      uVar42 = iVar19 + 0x22U;
      if ((int)DAT_10022170 <= (int)(iVar19 + 0x22U)) {
        uVar42 = DAT_10022170;
      }
      iVar40 = (int)local_60;
      if (iVar19 < -0x22) {
        uVar42 = 0;
      }
      iVar38 = iVar40 + 0xa8;
      if (DAT_10022174 <= iVar40 + 0xa8) {
        iVar38 = DAT_10022174;
      }
      if (iVar40 < -0xa8) {
        iVar38 = 0;
      }
      uVar18 = (iVar19 + iVar39) - 0x22;
      uVar45 = DAT_10022170;
      if ((int)uVar18 < (int)DAT_10022170) {
        uVar45 = uVar18;
      }
      if ((int)uVar18 < 0) {
        uVar45 = 0;
      }
      iVar10 = DAT_10022174;
      if (iVar40 + 0xa9 < DAT_10022174) {
        iVar10 = iVar40 + 0xa9;
      }
      if (iVar40 < -0xa9) {
        iVar10 = 0;
      }
      if (((DAT_10022348 != 0) && ((int)uVar42 < (int)uVar45)) && (iVar38 < iVar10)) {
        lVar28 = (long)(int)uVar42;
        lVar16 = (long)iVar38;
        uVar34 = (ulong)(~uVar42 + uVar45) + 1;
        uVar15 = uVar34 & 0xfffffffffffffff8;
        lVar27 = lVar16 * (int)DAT_10022170;
        lVar44 = lVar28 * 4 + lVar27 * 4 + DAT_10022348 + 0x10;
        lVar30 = (long)(int)DAT_10022170 * 4;
        lVar27 = DAT_10022348 + lVar27 * 4;
        do {
          lVar33 = lVar28;
          if (~uVar42 + uVar45 < 7) {
LAB_10013b4c:
            lVar41 = 0;
            do {
              *(undefined4 *)(lVar27 + lVar33 * 4 + lVar41 * 4) = 0xffd6d6d6;
              lVar41 = lVar41 + 1;
            } while (uVar45 - (int)lVar33 != (int)lVar41);
          }
          else {
            uVar23 = 0;
            do {
              puVar2 = (undefined8 *)(lVar44 + -0x10 + uVar23 * 4);
              *puVar2 = uVar17;
              puVar2[1] = uVar8;
              puVar2 = (undefined8 *)(lVar44 + uVar23 * 4);
              *puVar2 = uVar17;
              puVar2[1] = uVar8;
              uVar23 = uVar23 + 8;
            } while (uVar15 != uVar23);
            lVar33 = uVar15 + lVar28;
            if (uVar34 != uVar15) goto LAB_10013b4c;
          }
          lVar16 = lVar16 + 1;
          lVar44 = lVar44 + lVar30;
          lVar27 = lVar27 + lVar30;
        } while (lVar16 != iVar10);
      }
      local_78 = CONCAT44(PF_PART4(local_78, 4),iVar19 + 0x24);
      PF_PART4(local_38, 0) = iVar39 + iVar19 + -0x12;
      recovered_100101e0(iVar19 + 0x24,iVar40 + 0xb4,str_10020de6,0xffffffff,0x262626,1);
      iVar38 = iVar19 + 0x32;
      recovered_100101e0(iVar38,iVar40 + 0xca,&DAT_10020df0,0x11,0x5c5c5c,1);
      recovered_100101e0(iVar19 + 0xb2,iVar40 + 0xca,local_4f8,0x30,0x1c1c1c,1);
      local_58 = CONCAT44(PF_PART4(local_58, 4),iVar38);
      recovered_100101e0(iVar38,iVar40 + 0xdc,str_10020df5,0x11,0x5c5c5c,1);
      recovered_100101e0(iVar19 + 0xb2,iVar40 + 0xdc,local_388,0x30,0x1c1c1c,1);
      recovered_100101e0((uint)local_78,iVar40 + 0xfc,str_10020dfd,0xffffffff,0x262626,1);
      iVar39 = (uint)local_48;
      recovered_100101e0((uint)local_48,iVar40 + 0xfc,str_10020e06,0xffffffff,0x262626,1);
      iVar19 = iVar40 + 0x112;
      recovered_100101e0(iVar38,iVar19,str_10020e0d,0xd,0x5c5c5c,1);
      uVar45 = (int)local_50 + 0x92;
      recovered_100101e0(uVar45,iVar19,local_498,0x18,0x1c1c1c,1);
      recovered_100101e0(iVar39,iVar19,str_10020e14,0xd,0x5c5c5c,1);
      iVar38 = (int)local_38 + -0x9a;
      recovered_100101e0(iVar38,iVar19,(char *)&local_2a8,0x18,0x1c1c1c,1);
      iVar40 = iVar40 + 0x124;
      iVar19 = (uint)local_58;
      recovered_100101e0((uint)local_58,iVar40,str_10020e22,0xd,0x5c5c5c,1);
      recovered_100101e0(uVar45,iVar40,str_100209e6,0x18,0x1c1c1c,1);
      recovered_100101e0(iVar39,iVar40,str_10020e2a,0xd,0x5c5c5c,1);
      recovered_100101e0(iVar38,iVar40,(char *)&local_288,0x18,0x1c1c1c,1);
      iVar39 = (int)local_60;
      iVar40 = iVar39 + 0x136;
      recovered_100101e0(iVar19,iVar40,str_10020e35,0xd,0x5c5c5c,1);
      recovered_100101e0(uVar45,iVar40,str_10020e3e,0x18,0x1c1c1c,1);
      recovered_100101e0((uint)local_48,iVar40,str_10020e4b,0xd,0x5c5c5c,1);
      local_38 = (char *)CONCAT44(PF_PART4(local_38, 4),iVar38);
      recovered_100101e0(iVar38,iVar40,(char *)&local_268,0x18,0x1c1c1c,1);
      iVar19 = iVar39 + 0x148;
      uVar42 = 0x18;
      if (0x18 < (int)(uint)local_88) {
        uVar42 = (uint)local_88;
      }
      recovered_100101e0((uint)local_58,iVar19,str_10020e55,0xd,0x5c5c5c,1);
      local_50 = (ulong)uVar45;
      recovered_100101e0(uVar45,iVar19,(char *)&local_118,uVar42,0x1c1c1c,1);
      if ((local_2c0 != 0 & (byte)local_40) == 1) {
        iVar19 = iVar39 + 0x15a;
        recovered_100101e0((uint)local_48,iVar19,str_10020e5b,0xd,0x5c5c5c,1);
        recovered_100101e0((int)local_38,iVar19,(char *)&local_248,0x18,0x1c1c1c,1);
      }
      recovered_100101e0((uint)local_78,iVar19 + 0x22,str_10020e68,0xffffffff,0x262626,1);
      iVar10 = (uint)local_48;
      recovered_100101e0((uint)local_48,iVar19 + 0x22,str_10020e7d,0xffffffff,0x262626,1);
      iVar39 = iVar19 + 0x38;
      iVar38 = (uint)local_58;
      recovered_100101e0((uint)local_58,iVar39,str_10020e87,0xd,0x5c5c5c,1);
      iVar40 = (int)local_50;
      recovered_100101e0(iVar40,iVar39,(char *)&local_1c8,0x18,0x1c1c1c,1);
      recovered_100101e0(iVar10,iVar39,str_10020e90,0xd,0x5c5c5c,1);
      recovered_100101e0((int)local_38,iVar39,(char *)&local_228,0x18,0x1c1c1c,1);
      iVar39 = iVar19 + 0x4a;
      recovered_100101e0(iVar38,iVar39,str_10020e99,0xd,0x5c5c5c,1);
      recovered_100101e0(iVar40,iVar39,local_448,0x18,0x1c1c1c,1);
      recovered_100101e0(iVar10,iVar39,str_10020ea6,0xd,0x5c5c5c,1);
      iVar40 = (int)local_38;
      recovered_100101e0((int)local_38,iVar39,(char *)&local_178,0x18,0x1c1c1c,1);
      iVar39 = iVar19 + 0x5c;
      recovered_100101e0(iVar38,iVar39,str_10020eaf,0xd,0x5c5c5c,1);
      iVar38 = (int)local_50;
      recovered_100101e0(iVar38,iVar39,(char *)&local_1e8,0x18,0x1c1c1c,1);
      recovered_100101e0(iVar10,iVar39,str_10020eb7,0xd,0x5c5c5c,1);
      recovered_100101e0(iVar40,iVar39,(char *)&local_158,0x18,0x1c1c1c,1);
      iVar19 = iVar19 + 0x6e;
      recovered_100101e0((uint)local_58,iVar19,str_10020ec0,0xd,0x5c5c5c,1);
      recovered_100101e0(iVar38,iVar19,local_3e8,0x18,0x1c1c1c,1);
      if (((byte)local_40 & local_2d4 != 0) != 1) {
        return;
      }
      recovered_100101e0((uint)local_48,iVar19,str_10020ec8,0xd,0x5c5c5c,1);
      pcVar26 = (char *)&local_138;
      uVar42 = 0x18;
      uVar45 = 0x1c1c1c;
    }
    recovered_100101e0(iVar40,iVar19,pcVar26,uVar42,uVar45,1);
    break;
  case 4:
    local_50 = uVar34;
    recovered_100101e0(uVar18,iVar39,param_1 + 0x261,0xffffffff,0x2d2d2d,1);
    recovered_10010b10(uVar18,uVar45 + 0x48,*(int *)(param_1 + 0x60) + -0x1c,0x1a,0xffffff,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    recovered_10010570(uVar18,uVar45 + 0x48,*(int *)(param_1 + 0x60) + -0x1c,0x1a,0x919191);
    recovered_100101e0((int)local_50 + 0x16,uVar45 + 0x51,param_1 + 0xa61,0xffffffff,0x141414,1);
    iVar39 = uVar45 + 0x78;
    pcVar26 = str_10020d32;
    uVar42 = 0x5c5c5c;
LAB_10012464:
    recovered_100101e0(uVar18,iVar39,pcVar26,0xffffffff,uVar42,1);
    return;
  case 6:
    local_58 = (ulong)*(int *)(param_1 + 0x60);
    uVar34 = local_58 - 0x1c;
    iVar19 = *(int *)(param_1 + 100);
    uVar15 = (long)iVar19 - 0x34;
    iVar38 = (int)uVar34;
    iVar40 = (int)uVar15;
    if (*(long *)(param_1 + 0xb34) == 0) {
LAB_10012414:
      uVar45 = *(uint *)(param_1 + 0xb50);
      uVar20 = *(uint *)(param_1 + 8);
      if (uVar20 == 0xffffffff) {
        uVar20 = DAT_10022188;
        if (DAT_10022188 < 4) goto LAB_1001248b;
LAB_10012493:
        bVar9 = ~param_1[5];
      }
      else {
        if (3 < uVar20) goto LAB_10012493;
LAB_1001248b:
        if (uVar20 != 0) goto LAB_10012493;
        bVar9 = 0xff;
      }
      recovered_10010b10(uVar18,iVar39,iVar38,iVar40,
                         (uVar45 & 0xff0000) >> 0x10 | uVar45 & 0xff00 | uVar45 << 0x10,(uint)bVar9)
      ;
    }
    else {
      uVar23 = (ulong)*(uint *)(param_1 + 0xb44);
      if (((uVar23 == 0) || (uVar11 = (ulong)*(uint *)(param_1 + 0xb48), uVar11 == 0)) ||
         (*(uint *)(param_1 + 0xb4c) < *(uint *)(param_1 + 0xb44) * 4)) goto LAB_10012414;
      uVar13 = uVar34 * uVar11;
      if (uVar13 >> 0x20 == 0) {
        iVar10 = (int)((uVar13 & 0xffffffff) / uVar23);
      }
      else {
        iVar10 = (int)(uVar13 / uVar23);
      }
      iVar25 = iVar38;
      if (iVar40 < iVar10) {
        uVar23 = uVar23 * uVar15;
        if (uVar23 >> 0x20 == 0) {
          iVar25 = (int)((uVar23 & 0xffffffff) / uVar11);
        }
        else {
          iVar25 = (int)(uVar23 / uVar11);
        }
        iVar10 = iVar40;
      }
      if ((iVar25 < iVar38) || (iVar10 < iVar40)) goto LAB_10012414;
    }
    pcVar26 = local_38;
    local_48 = (long *)uVar15;
    recovered_10010570((uint)local_40,iVar39,iVar38,iVar40,0x848484);
    lVar27 = *(long *)(pcVar26 + 0xb34);
    if (lVar27 != 0) {
      uVar45 = *(uint *)(local_38 + 0xb44);
      uVar15 = (ulong)uVar45;
      if (uVar15 != 0) {
        uVar18 = *(uint *)(local_38 + 0xb48);
        uVar23 = (ulong)uVar18;
        if (((uVar23 != 0) && (uVar45 * 4 <= *(uint *)(local_38 + 0xb4c))) &&
           ((0x34 < iVar19 &&
            (((0x1c < (int)(uint)local_58 && (*(int *)(local_38 + 0xb3c) != 0)) &&
             (DAT_10022348 != 0)))))) {
          uVar11 = (uVar34 & 0xffffffff) * uVar23;
          if (uVar11 >> 0x20 == 0) {
            plVar12 = (long *)((uVar11 & 0xffffffff) / (ulong)uVar45);
          }
          else {
            plVar12 = (long *)(uVar11 / uVar15);
          }
          local_70 = uVar34 & 0xffffffff;
          if ((int)(uint)local_48 < (int)plVar12) {
            uVar15 = ((ulong)local_48 & 0xffffffff) * uVar15;
            if (uVar15 >> 0x20 == 0) {
              uVar15 = uVar15 & 0xffffffff;
            }
            local_70 = uVar15 / uVar23;
            plVar12 = local_48;
          }
          uVar20 = (uint)plVar12;
          if ((0 < (int)uVar20) && (0 < (int)(uint)local_70)) {
            iVar19 = (int)(iVar38 - (uint)local_70) / 2;
            local_98 = CONCAT44(PF_PART4(local_98, 4),iVar19);
            uVar32 = (int)local_40 + iVar19;
            local_40 = (ulong)uVar32;
            iVar19 = (int)((uint)local_48 - uVar20) / 2;
            iVar39 = iVar39 + iVar19;
            local_88 = (char *)(long)(int)DAT_10022170;
            uVar21 = DAT_10022170;
            if ((int)uVar32 < (int)DAT_10022170) {
              uVar21 = uVar32;
            }
            if ((int)uVar32 < 0) {
              uVar21 = 0;
            }
            iVar40 = DAT_10022174;
            if (iVar39 < DAT_10022174) {
              iVar40 = iVar39;
            }
            if (iVar39 < 0) {
              iVar40 = 0;
            }
            uVar37 = (uint)local_70 + uVar32;
            uVar46 = DAT_10022170;
            if ((int)uVar37 < (int)DAT_10022170) {
              uVar46 = uVar37;
            }
            if ((int)uVar37 < 0) {
              uVar46 = 0;
            }
            iVar38 = iVar39 + uVar20;
            local_64 = DAT_10022174;
            if (iVar38 < DAT_10022174) {
              local_64 = iVar38;
            }
            if (iVar38 < 0) {
              local_64 = 0;
            }
            local_48 = (long *)CONCAT44(PF_PART4(local_48, 4),uVar21);
            local_58 = CONCAT44(PF_PART4(local_58, 4),uVar46 - uVar21);
            if ((uVar46 - uVar21 != 0 && (int)uVar21 <= (int)uVar46) && (iVar40 < local_64)) {
              if ((uVar20 == uVar18) && ((uint)local_70 == uVar45)) {
                lVar30 = (long)iVar40;
                uVar42 = ((iVar40 - (uint)local_60) - iVar19) - 0x26;
                do {
                  if ((ulong)*(uint *)(local_38 + 0xb3c) <=
                      (ulong)(uint)((int)lVar30 - iVar39) * (ulong)*(uint *)(local_38 + 0xb4c) +
                      (ulong)(uVar21 - uVar32) * 4) {
                    return;
                  }
                  pbVar36 = (byte *)((lVar30 * (long)local_88 + (long)(int)uVar21) * 4 +
                                    DAT_10022348);
                  uVar34 = (ulong)*(uint *)(local_38 + 0xb4c) * (ulong)uVar42 +
                           (ulong)(uVar21 - uVar32) * 4 + 3;
                  iVar19 = uVar46 - uVar21;
                  do {
                    if (*(uint *)(local_38 + 0xb3c) <= uVar34) break;
                    if ((pbVar36 != (byte *)0x0) && (*(byte *)(lVar27 + uVar34) != 0)) {
                      bVar9 = *(byte *)(lVar27 + -3 + uVar34);
                      bVar5 = *(byte *)(lVar27 + -2 + uVar34);
                      bVar6 = *(byte *)(lVar27 + -1 + uVar34);
                      uVar45 = (uint)*(byte *)(lVar27 + uVar34);
                      if (uVar45 == 0xff) {
                        *pbVar36 = bVar9;
                        pbVar36[1] = bVar5;
                        pbVar36[2] = bVar6;
                      }
                      else {
                        uVar18 = uVar45 ^ 0xff;
                        *pbVar36 = (byte)((*pbVar36 * uVar18 + bVar9 * uVar45 + 0x7f) / 0xff);
                        pbVar36[1] = (byte)((bVar5 * uVar45 + pbVar36[1] * uVar18 + 0x7f) / 0xff);
                        pbVar36[2] = (byte)((pbVar36[2] * uVar18 + bVar6 * uVar45 + 0x7f) / 0xff);
                      }
                      pbVar36[3] = 0xff;
                    }
                    pbVar36 = pbVar36 + 4;
                    uVar34 = uVar34 + 4;
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                  lVar30 = lVar30 + 1;
                  uVar42 = uVar42 + 1;
                } while (local_64 != (int)lVar30);
              }
              else {
                recovered_100167b0(uVar45,uVar18,(uint)local_70,uVar20);
                uVar18 = DAT_1002707c;
                uVar45 = DAT_10027078;
                lVar28 = DAT_10027070;
                lVar30 = DAT_10027068;
                lVar16 = (long)(int)DAT_10022170;
                lVar44 = (long)iVar40;
                do {
                  uVar20 = (int)lVar44 - iVar39;
                  if (uVar20 < uVar18) {
                    uVar20 = *(uint *)(lVar28 + (ulong)uVar20 * 4);
                  }
                  else {
                    uVar34 = (ulong)*(uint *)(local_38 + 0xb48) * (ulong)uVar20;
                    if (uVar34 >> 0x20 == 0) {
                      uVar20 = (uint)((uVar34 & 0xffffffff) / ((ulong)plVar12 & 0xffffffff));
                    }
                    else {
                      uVar20 = (uint)(uVar34 / ((ulong)plVar12 & 0xffffffff));
                    }
                  }
                  pbVar36 = (byte *)((lVar44 * lVar16 + (long)(int)(uint)local_48) * 4 +
                                    DAT_10022348);
                  uVar21 = (((uint)local_48 - uVar42) - (int)local_98) - 0xe;
                  iVar19 = (uint)local_58;
                  do {
                    if (uVar21 < uVar45) {
                      uVar32 = *(uint *)(lVar30 + (ulong)uVar21 * 4);
                    }
                    else {
                      uVar34 = (ulong)*(uint *)(local_38 + 0xb44) * (ulong)uVar21;
                      if (uVar34 >> 0x20 == 0) {
                        uVar32 = (uint)((uVar34 & 0xffffffff) / (local_70 & 0xffffffff));
                      }
                      else {
                        uVar32 = (uint)(uVar34 / (local_70 & 0xffffffff));
                      }
                    }
                    if (((ulong)*(uint *)(local_38 + 0xb4c) * (ulong)uVar20 + (ulong)uVar32 * 4 + 3
                         < (ulong)*(uint *)(local_38 + 0xb3c)) && (pbVar36 != (byte *)0x0)) {
                      lVar33 = (ulong)*(uint *)(local_38 + 0xb4c) * (ulong)uVar20 +
                               (ulong)uVar32 * 4;
                      bVar9 = *(byte *)(lVar27 + 3 + lVar33);
                      if (bVar9 != 0) {
                        bVar5 = *(byte *)(lVar27 + 1 + lVar33);
                        bVar6 = *(byte *)(lVar27 + 2 + lVar33);
                        uVar32 = (uint)bVar9;
                        if (uVar32 == 0xff) {
                          *pbVar36 = *(byte *)(lVar27 + lVar33);
                          pbVar36[1] = bVar5;
                          pbVar36[2] = bVar6;
                        }
                        else {
                          uVar46 = uVar32 ^ 0xff;
                          *pbVar36 = (byte)((*(byte *)(lVar27 + lVar33) * uVar32 + *pbVar36 * uVar46
                                            + 0x7f) / 0xff);
                          pbVar36[1] = (byte)((pbVar36[1] * uVar46 + bVar5 * uVar32 + 0x7f) / 0xff);
                          pbVar36[2] = (byte)((bVar6 * uVar32 + pbVar36[2] * uVar46 + 0x7f) / 0xff);
                        }
                        pbVar36[3] = 0xff;
                      }
                    }
                    pbVar36 = pbVar36 + 4;
                    uVar21 = uVar21 + 1;
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                  lVar44 = lVar44 + 1;
                } while (lVar44 != local_64);
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006930
#undef DAT_10020870
#undef DAT_10020880
#undef DAT_10020d6a
#undef DAT_10020d7a
#undef DAT_10020d7f
#undef DAT_10020d88
#undef DAT_10020df0
#undef DAT_10020ed1
#undef DAT_10020ef6
#undef DAT_10020efb
#undef DAT_10020f1a
#undef DAT_10020f27
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_10022348
#undef DAT_10027068
#undef DAT_10027070
#undef DAT_10027078
#undef DAT_1002707c
#undef DAT_1002719c
#undef DAT_100271a0
#undef DAT_100271a4
#undef DAT_100271a8
#undef DAT_100271ac
#undef DAT_100271b0
#undef DAT_100271c0
#undef DAT_100272b1
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram0000000000006930
#undef UINT_0000687c
#undef UINT_000068b8
#undef UINT_000068c0
#undef UINT_000068f8
#undef UNK_10020878
#undef UNK_10020888
#undef _DAT_10020870
#undef _DAT_10020880
#undef str_100209e6
#undef str_10020c3b
#undef str_10020d32
#undef str_10020d5f
#undef str_10020d6e
#undef str_10020d8c
#undef str_10020d92
#undef str_10020d9e
#undef str_10020daf
#undef str_10020dba
#undef str_10020dd5
#undef str_10020dde
#undef str_10020de6
#undef str_10020df5
#undef str_10020dfd
#undef str_10020e06
#undef str_10020e0d
#undef str_10020e14
#undef str_10020e22
#undef str_10020e2a
#undef str_10020e35
#undef str_10020e3e
#undef str_10020e4b
#undef str_10020e55
#undef str_10020e5b
#undef str_10020e68
#undef str_10020e7d
#undef str_10020e87
#undef str_10020e90
#undef str_10020e99
#undef str_10020ea6
#undef str_10020eaf
#undef str_10020eb7
#undef str_10020ec0
#undef str_10020ec8
#undef str_10020ed3
#undef str_10020ee4
#undef str_10020f00
#undef str_10020f08
#undef str_10020f10
#undef str_10020f32
#undef str_10020f40
#undef str_10020f47
#undef str_10020f53
#undef str_10020f91
#undef str_10020f9c
#undef str_10020fa4
#undef str_10020fac
#undef str_10020fb5
#undef uRam0000000010020878
#undef uRam0000000010020888
#undef auStack_2294
#undef local_2478
#undef local_2470
#undef local_2450
#undef local_2440
#undef local_4f8
#undef local_498
#undef local_448
#undef local_3e8
#undef local_3bc
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_388
#undef local_350
#undef local_34c
#undef local_2ec
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2c8
#undef local_2c0
#undef local_2b8
#undef local_2a8
#undef local_2a0
#undef local_288
#undef local_280
#undef local_268
#undef local_260
#undef local_248
#undef local_240
#undef uStack_1c0
#undef local_228
#undef local_220
#undef local_1e8
#undef local_1e0
#undef local_1c8
#undef local_1b8
#undef local_178
#undef local_170
#undef local_158
#undef local_150
#undef local_138
#undef local_130
#undef local_118
#undef local_110
#undef local_10c
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_9c
#undef local_98
#undef local_8c
#undef local_88
#undef local_7c
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10027058
#define DAT_10027058 (*(void * *)(((uintptr_t)pf_module_state + 0x6a3fU)))
#undef DAT_10027060
#define DAT_10027060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a47U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015350
 */

undefined8 recovered_10015350(ulong param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;

  iVar5 = (int)((ulong)param_2 >> 0x20);
  uVar13 = 0;
  uVar10 = 0;
  if ((0 < iVar5 && 0 < (int)param_2) && (0 < (int)DAT_10022174 && 0 < (int)DAT_10022170)) {
    uVar8 = param_1 >> 0x20;
    iVar7 = (int)(param_1 >> 0x20);
    uVar6 = iVar5 + iVar7;
    uVar4 = (uint)param_1;
    uVar9 = DAT_10022170;
    if ((int)uVar4 < (int)DAT_10022170) {
      uVar9 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar9 = 0;
    }
    if ((int)DAT_10022174 <= iVar7) {
      uVar8 = (ulong)DAT_10022174;
    }
    if ((long)param_1 < 0) {
      uVar8 = 0;
    }
    uVar4 = (int)param_2 + uVar4;
    uVar1 = DAT_10022170;
    if ((int)uVar4 < (int)DAT_10022170) {
      uVar1 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar1 = 0;
    }
    uVar4 = DAT_10022174;
    if ((int)uVar6 < (int)DAT_10022174) {
      uVar4 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
    if (uVar1 - uVar9 == 0 || (int)uVar1 < (int)uVar9) {
      uVar10 = 0;
    }
    else {
      uVar13 = 0;
      uVar10 = 0;
      iVar5 = uVar4 - (int)uVar8;
      if (iVar5 != 0 && (int)uVar8 <= (int)uVar4) {
        uVar13 = (ulong)uVar9 | uVar8 << 0x20;
        uVar10 = CONCAT44(iVar5,uVar1 - uVar9);
      }
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  if (DAT_10022348 == 0) {
    return 0;
  }
  if ((int)(uint)uVar10 < 1) {
    return 0;
  }
  uVar8 = uVar10 >> 0x20;
  if ((int)(uVar10 >> 0x20) < 1) {
    return 0;
  }
  uVar3 = (ulong)((uint)uVar10 & 0x7fffffff);
  uVar12 = uVar3 * uVar8;
  if ((uVar12 >> 0x3e == 0) && (uVar12 != 0)) {
    uVar12 = uVar12 * 4;
    if (uVar12 <= DAT_10027060 && DAT_10027058 != (void *)0x0) {
LAB_1001549f:
      uVar3 = uVar3 * 4;
      lVar14 = (long)uVar13 >> 0x20;
      lVar11 = 0;
      do {
        memcpy((void *)((long)DAT_10027058 + lVar11),
                           (void *)(((int)DAT_10022170 * lVar14 + (long)(int)uVar13) * 4 +
                                   DAT_10022348),uVar3);
        pvVar2 = DAT_10027058;
        lVar14 = lVar14 + 1;
        lVar11 = lVar11 + uVar3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      *param_3 = uVar13;
      param_3[1] = uVar10;
      *param_4 = pvVar2;
      return CONCAT71((int7)((ulong)param_4 >> 8),1);
    }
    iVar5 = Ram0000000000006800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
        (uVar9 = Ram0000000000006808, 0xb < uVar9)) && (uVar9 = Ram0000000000006808, 0x57 < uVar9))
    {
      uVar9 = UINT_00006854;
      if (((code *)(ulong)uVar9 != (code *)0x0) &&
         (pvVar2 = (*(code *)(ulong)uVar9)(DAT_10027058,uVar12), pvVar2 != (void *)0x0)) {
        DAT_10027058 = pvVar2;
        DAT_10027060 = uVar12;
        goto LAB_1001549f;
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022348
#undef DAT_10027058
#undef DAT_10027060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006854

#undef DAT_10020890
#define DAT_10020890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_10022170
#define DAT_10022170 (*(uint *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_100229a0
#define DAT_100229a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_100229a1
#define DAT_100229a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2388U)))
#undef UNK_10020898
#define UNK_10020898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef _DAT_10020890
#define _DAT_10020890 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef str_10020d48
#define str_10020d48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72fU)))
#undef str_10020d50
#define str_10020d50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x737U)))
#undef str_10020d57
#define str_10020d57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73eU)))
#undef uRam0000000010020898
#define uRam0000000010020898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#define local_158 (*(char (*)[248])(frame + 24))
#define local_60 (*(ulong *)(frame + 272))
#define local_54 (*(int *)(frame + 284))
#define local_50 (*(ulong *)(frame + 288))
#define local_48 (*(long *)(frame + 296))
#define local_40 (*(uint *)(frame + 304))
#define local_3c (*(uint *)(frame + 308))
#define local_38 (*(ulong *)(frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10015590(long param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;

  local_60 = (ulong)*(uint *)(param_1 + 0x58);
  local_50 = (ulong)*(uint *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 100) + -0x6a;
  iVar7 = 1;
  if (0x49 < iVar9) {
    iVar7 = iVar9 / 0x4a - iVar9 / -0x6c000000;
  }
  local_38 = (ulong)(*(uint *)(param_1 + 0x58) + 0x22);
  local_54 = *(uint *)(param_1 + 0x5c) + 0x44;
  local_3c = *(int *)(param_1 + 0xaf8) + 2;
  iVar9 = (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
          *(int *)(param_1 + 0x60) + -0x26;
  iVar9 = (iVar9 >> 6) - (iVar9 >> 0x1f);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  local_40 = iVar9 * iVar7;
  lVar22 = 0;
  iVar7 = 0;
  local_48 = param_1;
  do {
    if ((&DAT_100229a0)[lVar22] == '\x01') {
      iVar9 = *(int *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x60) + iVar9 + -0xe < iVar7 * 0x5c + iVar9 + 0x76) break;
      iVar9 = iVar7 * 0x5c + iVar9;
      uVar20 = iVar9 + 0x22;
      iVar21 = *(int *)(param_1 + 0x5c);
      iVar13 = iVar21 + 0x22;
      recovered_10010b10(uVar20,iVar13,0x54,0x1a,0xfafafa,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      param_1 = local_48;
      recovered_10010570(uVar20,iVar13,0x54,0x1a,0x969696);
      recovered_100101e0(iVar9 + 0x2a,iVar21 + 0x2b,&DAT_100229a1 + lVar22,0xb,0x202020,1);
      iVar7 = iVar7 + 1;
    }
    lVar22 = lVar22 + 0x124;
  } while (lVar22 != 0xdb0);
  uVar20 = (uint)local_38;
  iVar7 = (int)local_50;
  if (*(char *)(param_1 + 0x260) == '\0') {
    builtin_strncpy(local_158,"device ",8);
    uVar15 = *(uint *)(param_1 + 0x25c);
    if ((int)uVar15 < 0) {
      uVar4 = strlen(local_158);
      uVar20 = (uint)local_38;
      iVar7 = (int)local_50;
      if (uVar4 < 0xf3) {
        lVar22 = 0xf2;
        if (uVar4 != 0xf2) {
          lVar22 = uVar4 + 1;
          local_158[uVar4] = '-';
        }
        local_158[lVar22] = '\0';
      }
      uVar15 = -uVar15;
    }
    recovered_100164d0(local_158,0xf3,uVar15);
    uVar4 = strlen(local_158);
    param_1 = local_48;
    if (uVar4 < 0xf3) {
      lVar22 = 0xf2;
      if (uVar4 != 0xf2) {
        local_158[uVar4] = ' ';
        if (uVar4 < 0xf1) {
          lVar22 = uVar4 + 2;
          local_158[uVar4 + 1] = '/';
        }
        else {
          lVar22 = uVar4 + 1;
        }
      }
      local_158[lVar22] = '\0';
    }
    uVar4 = strlen(local_158);
    if (0xf2 < uVar4) goto LAB_10015899;
    cVar6 = *(char *)(param_1 + 0x78);
    if (uVar4 != 0xf2 && cVar6 != '\0') {
      pcVar8 = (char *)(param_1 + 0x79);
      uVar12 = uVar4;
      do {
        local_158[uVar12] = cVar6;
        uVar4 = uVar12 + 1;
        if (0xf0 < uVar12) break;
        cVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        uVar12 = uVar4;
      } while (cVar6 != '\0');
    }
  }
  else {
    builtin_strncpy(local_158,"mounted devices",0xf);
    uVar4 = 0xf;
  }
  local_158[uVar4] = '\0';
LAB_10015899:
  recovered_100101e0(uVar20,local_54,local_158,0xffffffff,0x2e2e2e,1);
  uVar3 = uRam0000000010020898;
  uVar2 = _DAT_10020890;
  iVar9 = *(int *)(param_1 + 0x60);
  if ((int)DAT_10022170 <= (int)uVar20) {
    uVar20 = DAT_10022170;
  }
  if ((int)local_60 < -0x22) {
    uVar20 = 0;
  }
  iVar13 = iVar7 + 0x56;
  if (DAT_10022174 <= iVar7 + 0x56) {
    iVar13 = DAT_10022174;
  }
  if (iVar7 < -0x56) {
    iVar13 = 0;
  }
  uVar16 = ((int)local_60 + iVar9) - 0xe;
  uVar15 = DAT_10022170;
  if ((int)uVar16 < (int)DAT_10022170) {
    uVar15 = uVar16;
  }
  if ((int)uVar16 < 0) {
    uVar15 = 0;
  }
  iVar21 = DAT_10022174;
  if (iVar7 + 0x57 < DAT_10022174) {
    iVar21 = iVar7 + 0x57;
  }
  if (iVar7 < -0x57) {
    iVar21 = 0;
  }
  if (((DAT_10022348 != 0) && ((int)uVar20 < (int)uVar15)) && (iVar13 < iVar21)) {
    uVar12 = (ulong)(int)uVar20;
    lVar14 = (long)iVar13;
    uVar4 = (ulong)(~uVar20 + uVar15) + 1;
    uVar17 = uVar4 & 0xfffffffffffffff8;
    local_38 = uVar17 + uVar12;
    lVar22 = lVar14 * (int)DAT_10022170;
    lVar19 = uVar12 * 4 + lVar22 * 4 + DAT_10022348 + 0x10;
    lVar5 = (long)(int)DAT_10022170 * 4;
    lVar22 = DAT_10022348 + lVar22 * 4;
    do {
      uVar23 = uVar12;
      if (~uVar20 + uVar15 < 7) {
LAB_100159dd:
        lVar24 = 0;
        do {
          *(undefined4 *)(lVar22 + uVar23 * 4 + lVar24 * 4) = 0xffcccccc;
          lVar24 = lVar24 + 1;
        } while (uVar15 - (int)uVar23 != (int)lVar24);
      }
      else {
        uVar23 = 0;
        do {
          puVar1 = (undefined8 *)(lVar19 + -0x10 + uVar23 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar19 + uVar23 * 4);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          uVar23 = uVar23 + 8;
        } while (uVar17 != uVar23);
        uVar23 = local_38;
        if (uVar4 != uVar17) goto LAB_100159dd;
      }
      lVar14 = lVar14 + 1;
      lVar19 = lVar19 + lVar5;
      lVar22 = lVar22 + lVar5;
    } while (lVar14 != iVar21);
    iVar9 = *(int *)(local_48 + 0x60);
    param_1 = local_48;
  }
  iVar21 = *(int *)(param_1 + 0xaf8);
  iVar13 = *(int *)(param_1 + 100);
  iVar7 = iVar13 + -0x6a;
  iVar10 = ((int)((ulong)((long)iVar7 * 0x22983759) >> 0x20) - iVar13) + 0x6a;
  iVar11 = (iVar10 >> 6) - (iVar10 >> 0x1f);
  iVar10 = -1;
  if (0x49 < iVar7) {
    iVar10 = iVar11;
  }
  iVar9 = iVar9 + (int)((ulong)((long)(iVar9 + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
  uVar15 = (iVar9 >> 6) - (iVar9 >> 0x1f);
  uVar20 = 1;
  if (1 < (int)uVar15) {
    uVar20 = uVar15;
  }
  iVar10 = iVar21 + iVar10 * uVar20 + 2;
  iVar9 = *(int *)(param_1 + 0xb00);
  if (iVar9 < 0) {
    *(undefined4 *)(param_1 + 0xb00) = 0;
    iVar9 = 0;
  }
  if (iVar10 < 1 || iVar10 < iVar9) {
    iVar9 = 0;
    if (0 < iVar10) {
      iVar9 = iVar10;
    }
    *(int *)(param_1 + 0xb00) = iVar9;
  }
  if (0 < (int)local_40) {
    uVar4 = 0;
    uVar15 = local_3c;
    do {
      iVar7 = (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
              *(int *)(param_1 + 0x60) + -0x26;
      uVar20 = (iVar7 >> 6) - (iVar7 >> 0x1f);
      if ((int)uVar20 < 2) {
        uVar20 = 1;
      }
      iVar9 = (int)uVar4;
      iVar7 = iVar9 + *(int *)(param_1 + 0xb00);
      if ((int)uVar15 <= iVar7) goto LAB_10015cf8;
      iVar13 = *(int *)(param_1 + 0x58) + (int)(uVar4 % (ulong)uVar20) * 0x4e;
      iVar21 = *(int *)(param_1 + 0x5c) + (int)(uVar4 / uVar20) * 0x4a;
      iVar10 = iVar21 + 0x60;
      if (iVar7 == 0) {
        recovered_10015f00(iVar13 + 0x2c,iVar10,(char *)0x0,1);
        pcVar8 = str_10020d50;
        if ((*(char *)(param_1 + 0x78) == '\0') &&
           (pcVar8 = str_10020d48, *(char *)(param_1 + 0x260) != '\0')) {
          pcVar8 = str_10020d50;
        }
LAB_10015af7:
        recovered_10010a40(iVar13 + 0x22,(ulong)(iVar21 + 0x86),0x44,pcVar8,0x1c1c1c);
      }
      else {
        if (iVar7 == 1) {
          recovered_10015f00(iVar13 + 0x2c,iVar10,(char *)0x0,0);
          pcVar8 = str_10020d57;
          goto LAB_10015af7;
        }
        iVar11 = iVar9 + -2 + *(int *)(param_1 + 0xb00);
        if (((1 < iVar7) && (*(char *)(param_1 + 0xb04) != '\0')) &&
           (iVar11 == *(int *)(param_1 + 0xafc))) {
          local_38 = CONCAT44(PF_PART4(local_38, 4),iVar13 + 0x1eU);
          recovered_10010b10(iVar13 + 0x1eU,iVar21 + 0x5c,0x44,0x40,0xe8e8e8,
                             (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
          recovered_10010570((uint)local_38,iVar21 + 0x5c,0x44,0x40,0x8e8e8e);
        }
        lVar22 = (long)iVar11 * 0x1f8;
        recovered_10015f00(iVar13 + 0x2c,iVar10,(char *)(*(long *)(local_48 + 0xaf0) + lVar22),0);
        param_1 = local_48;
        recovered_10010a40(iVar13 + 0x22,(ulong)(iVar21 + 0x86),0x44,
                           (char *)(lVar22 + *(long *)(local_48 + 0xaf0)),0x1c1c1c);
        uVar15 = local_3c;
      }
      uVar4 = (ulong)(iVar9 + 1U);
    } while (local_40 != iVar9 + 1U);
    iVar7 = *(int *)(param_1 + 0x60) +
            (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
    uVar15 = (iVar7 >> 6) - (iVar7 >> 0x1f);
    uVar20 = 1;
    if (1 < (int)uVar15) {
      uVar20 = uVar15;
    }
LAB_10015cf8:
    iVar13 = *(int *)(param_1 + 100);
    iVar21 = *(int *)(param_1 + 0xaf8);
    iVar7 = iVar13 + -0x6a;
    iVar9 = ((int)((ulong)((long)iVar7 * 0x22983759) >> 0x20) - iVar13) + 0x6a;
    iVar11 = (iVar9 >> 6) - (iVar9 >> 0x1f);
  }
  iVar10 = iVar21 + 2;
  local_3c = *(int *)(param_1 + 0x5c) + 0x5e;
  iVar9 = 0x12;
  if (0x15 < iVar13 + -0x84) {
    iVar9 = iVar13 + -0x88;
  }
  iVar13 = 1;
  if (0x49 < iVar7) {
    iVar13 = iVar7 / 0x4a - iVar7 / -0x6c000000;
  }
  iVar18 = -1;
  if (0x49 < iVar7) {
    iVar18 = iVar11;
  }
  iVar7 = *(int *)(param_1 + 0x58);
  local_38 = (ulong)local_3c;
  iVar11 = iVar9;
  if (-2 < iVar21) {
    local_38 = (ulong)local_3c;
    if ((int)(iVar13 * uVar20) < iVar10) {
      iVar21 = uVar20 * iVar18 + iVar10;
      local_38 = (ulong)local_3c;
      if (0 < iVar21) {
        iVar10 = (int)(iVar13 * uVar20 * iVar9) / iVar10;
        iVar11 = 0x12;
        if (0x12 < iVar10) {
          iVar11 = iVar10;
        }
        if (iVar9 <= iVar11) {
          iVar11 = iVar9;
        }
        local_38 = (ulong)(((iVar9 - iVar11) * *(int *)(local_48 + 0xb00)) / iVar21 + local_3c);
      }
    }
  }
  uVar20 = iVar7 + 0xe;
  local_40 = uVar20;
  recovered_10010b10(uVar20,local_3c,0xc,iVar9,0xe4e4e4,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010570(uVar20,local_3c,0xc,iVar9,0xacacac);
  iVar9 = (int)local_38;
  recovered_10010b10(iVar7 + 0xf,iVar9 + 1,10,iVar11 + -2,0xbebebe,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010570(local_40,iVar9,0xc,iVar11,0x747474);
  lVar22 = local_48;
  recovered_100165f0(CONCAT44(*(int *)(local_48 + 0x5c) + *(int *)(local_48 + 100) + -0x26,
                              *(int *)(local_48 + 0x58) + 0xe),0xe0000000c,1);
  recovered_100165f0(CONCAT44(*(int *)(lVar22 + 0x5c) + *(int *)(lVar22 + 100) + -0x16,
                              *(int *)(lVar22 + 0x58) + 0xe),0xe0000000c,0);
  return;
}

#undef DAT_10020890
#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022184
#undef DAT_10022188
#undef DAT_10022348
#undef DAT_100229a0
#undef DAT_100229a1
#undef UNK_10020898
#undef _DAT_10020890
#undef str_10020d48
#undef str_10020d50
#undef str_10020d57
#undef uRam0000000010020898
#undef local_158
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#define local_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015f00
 */

void recovered_10015f00(int param_1,int param_2,char *param_3,int param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined6 uVar4;
  undefined5 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 in_RAX;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  byte bVar11;
  char *pcVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;

  PF_PART6(local_38, 2) = (undefined6)((ulong)in_RAX >> 0x10);
  uVar4 = PF_PART6(local_38, 2);
  local_38 = CONCAT62(PF_PART6(local_38, 2),0x3f);
  lVar7 = local_38;
  PF_PART5(local_38, 3) = (undefined5)((ulong)in_RAX >> 0x18);
  uVar5 = PF_PART5(local_38, 3);
  if (param_4 == 0) {
    PF_PART4(local_38, 4) = (undefined4)((ulong)in_RAX >> 0x20);
    uVar6 = PF_PART4(local_38, 4);
    if (param_3 == (char *)0x0) {
      local_38 = CONCAT44(PF_PART4(local_38, 4),0x464552);
      goto LAB_10015f64;
    }
    if (*(int *)(param_3 + 0x1ec) == 3) {
      local_38 = CONCAT53(uVar5,0x4448);
      uVar17 = 0xc4e7ff;
      uVar18 = 0x2a85d2;
      lVar7 = local_38;
    }
    else {
      pbVar10 = (byte *)(param_3 + 0xf1);
      bVar11 = param_3[0xf1];
      pbVar14 = (byte *)0x0;
      if (bVar11 != 0) {
        pbVar15 = pbVar10;
        do {
          if (bVar11 == 0x2f) {
            pbVar14 = pbVar15;
          }
          bVar11 = pbVar15[1];
          pbVar15 = pbVar15 + 1;
        } while (bVar11 != 0);
      }
      pbVar15 = pbVar14 + 1;
      if (pbVar14 == (byte *)0x0) {
        pbVar15 = pbVar10;
      }
      pbVar14 = (byte *)0x0;
      bVar11 = *pbVar15;
      while (bVar11 != 0) {
        if (bVar11 == 0x2e) {
          pbVar14 = pbVar15;
        }
        pbVar1 = pbVar15 + 1;
        pbVar15 = pbVar15 + 1;
        bVar11 = *pbVar1;
      }
      if (pbVar14 == (byte *)0x0) {
        pbVar14 = &DAT_10020a84;
      }
      bVar11 = *pbVar14;
      if (bVar11 == 0) {
        cVar19 = '.';
        goto LAB_1001633c;
      }
      bVar13 = bVar11 | 0x20;
      if (0x19 < (byte)(bVar11 + 0xbf)) {
        bVar13 = bVar11;
      }
      if ((bVar13 == 0x2e) && (bVar11 = pbVar14[1], bVar11 != 0)) {
        bVar13 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar13 = bVar11;
        }
        if (bVar13 == 0x61) {
          bVar11 = pbVar14[2];
          cVar19 = 'p';
          if (bVar11 == 0) {
LAB_1001633c:
            if (cVar19 == '\0') {
LAB_10016341:
              local_38 = CONCAT44(PF_PART4(local_38, 4),0x505041);
              plVar8 = recovered_10010f50((char *)pbVar10,*(int *)(param_3 + 0x1f0));
              if (plVar8 != (long *)0x0) {
                recovered_1000fef0(plVar8,param_1,param_2 + -2,0x2a,0x24);
                return;
              }
              uVar17 = 0xe6ceff;
              uVar18 = 0x633e84;
              lVar7 = local_38;
              goto LAB_10015f70;
            }
          }
          else {
            bVar13 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar13 = bVar11;
            }
            if (bVar13 == 0x70) {
              bVar11 = pbVar14[3];
              if (bVar11 == 0) goto LAB_1001633c;
              bVar13 = bVar11 | 0x20;
              if (0x19 < (byte)(bVar11 + 0xbf)) {
                bVar13 = bVar11;
              }
              if ((bVar13 != 0x70) || (pbVar14[4] != 0)) goto LAB_1001638f;
              goto LAB_10016341;
            }
          }
        }
      }
LAB_1001638f:
      PF_PART7(local_38, 1) = SUB87(lVar7,1);
      if ((*(int *)(param_3 + 0x1ec) == 2) || ((param_3[0x1e8] & 2U) != 0)) {
        local_38 = (ulong)PF_PART7(local_38, 1) << 8;
        uVar17 = 0xffecd7;
        uVar18 = 0xcc823e;
        lVar7 = local_38;
      }
      else {
        cVar19 = *param_3;
        pcVar12 = (char *)0x0;
        if (cVar19 != '\0') {
          pcVar16 = param_3;
          do {
            if (cVar19 == '/') {
              pcVar12 = pcVar16;
            }
            cVar19 = pcVar16[1];
            pcVar16 = pcVar16 + 1;
          } while (cVar19 != '\0');
        }
        pcVar16 = pcVar12 + 1;
        if (pcVar12 == (char *)0x0) {
          pcVar16 = param_3;
        }
        pcVar12 = (char *)0x0;
        cVar19 = *pcVar16;
        while (cVar19 != '\0') {
          if (cVar19 == '.') {
            pcVar12 = pcVar16;
          }
          pcVar2 = pcVar16 + 1;
          pcVar16 = pcVar16 + 1;
          cVar19 = *pcVar2;
        }
        pcVar16 = &DAT_10020a84;
        if (pcVar12 != (char *)0x0) {
          pcVar16 = pcVar12;
        }
        uVar17 = 0xffffff;
        uVar18 = 0x787878;
        if (*pcVar16 == '.') {
          cVar19 = pcVar16[1];
          if (cVar19 == '\0') {
            lVar9 = 0;
            local_38 = lVar7;
          }
          else {
            local_38 = CONCAT71(PF_PART7(local_38, 1),cVar19);
            if (pcVar16[2] == '\0') {
              lVar9 = 1;
            }
            else {
              PF_PART2(local_38, 0) = CONCAT11(pcVar16[2],cVar19);
              local_38 = CONCAT62(uVar4,(undefined2)local_38);
              if (pcVar16[3] == '\0') {
                lVar9 = 2;
              }
              else {
                PF_PART3(local_38, 0) = CONCAT12(pcVar16[3],(undefined2)local_38);
                local_38 = CONCAT53(uVar5,(undefined3)local_38);
                if (pcVar16[4] == '\0') {
                  lVar9 = 3;
                }
                else {
                  PF_PART4(local_38, 0) = CONCAT13(pcVar16[4],(undefined3)local_38);
                  local_38 = CONCAT44(uVar6,(undefined4)local_38);
                  if (pcVar16[5] == '\0') {
                    lVar9 = 4;
                  }
                  else {
                    PF_PART3(local_38, 5) = (undefined3)((ulong)in_RAX >> 0x28);
                    PF_PART5(local_38, 0) = CONCAT14(pcVar16[5],(undefined4)local_38);
                    if (pcVar16[6] == '\0') {
                      lVar9 = 5;
                    }
                    else {
                      PF_PART2(local_38, 6) = (undefined2)((ulong)in_RAX >> 0x30);
                      PF_PART6(local_38, 0) = CONCAT15(pcVar16[6],(undefined5)local_38);
                      if (pcVar16[7] == '\0') {
                        lVar9 = 6;
                      }
                      else {
                        PF_PART1(local_38, 7) = (undefined1)((ulong)in_RAX >> 0x38);
                        PF_PART7(local_38, 0) = CONCAT16(pcVar16[7],(undefined6)local_38);
                        lVar9 = 7;
                      }
                    }
                  }
                }
              }
            }
          }
          *(undefined1 *)((long)&local_38 + lVar9) = 0;
          lVar7 = local_38;
        }
      }
    }
  }
  else {
    local_38 = CONCAT53(PF_PART5(local_38, 3),0x5055);
LAB_10015f64:
    uVar17 = 0xd1f4d1;
    uVar18 = 0x4c9c44;
    lVar7 = local_38;
  }
LAB_10015f70:
  local_38 = lVar7;
  recovered_10010b10(param_1,param_2,0x2a,0x20,uVar17,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010570(param_1,param_2,0x2a,0x20,uVar18);
  if (param_3 == (char *)0x0) goto LAB_100162a1;
  bVar11 = param_3[0xf1];
  pbVar10 = (byte *)0x0;
  if (bVar11 != 0) {
    pbVar14 = (byte *)(param_3 + 0xf1);
    do {
      if (bVar11 == 0x2f) {
        pbVar10 = pbVar14;
      }
      bVar11 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while (bVar11 != 0);
  }
  pbVar14 = pbVar10 + 1;
  if (pbVar10 == (byte *)0x0) {
    pbVar14 = (byte *)(param_3 + 0xf1);
  }
  pbVar10 = (byte *)0x0;
  bVar11 = *pbVar14;
  while (bVar11 != 0) {
    if (bVar11 == 0x2e) {
      pbVar10 = pbVar14;
    }
    pbVar15 = pbVar14 + 1;
    pbVar14 = pbVar14 + 1;
    bVar11 = *pbVar15;
  }
  pbVar14 = &DAT_10020a84;
  if (pbVar10 != (byte *)0x0) {
    pbVar14 = pbVar10;
  }
  bVar11 = *pbVar14;
  cVar19 = (char)param_4;
  if (bVar11 == 0) {
    bVar13 = 0x2e;
    bVar11 = 0;
LAB_10016227:
    if (bVar11 == bVar13 && cVar19 == '\0') {
      recovered_10010b10(param_1 + 8U,param_2 + 7,0x1a,0x12,0xb784ec,
                         (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
      recovered_10010570(param_1 + 8U,param_2 + 7,0x1a,0x12,0x5c3f7a);
      return;
    }
  }
  else {
    bVar13 = bVar11 | 0x20;
    if (0x19 < (byte)(bVar11 + 0xbf)) {
      bVar13 = bVar11;
    }
    if (bVar13 == 0x2e) {
      bVar11 = pbVar14[1];
      if (bVar11 == 0) {
        bVar13 = 0x61;
        bVar11 = 0;
      }
      else {
        bVar13 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar13 = bVar11;
        }
        if (bVar13 != 0x61) goto LAB_10016235;
        bVar3 = pbVar14[2];
        bVar13 = 0x70;
        bVar11 = 0;
        if (bVar3 != 0) {
          bVar11 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar11 = bVar3;
          }
          if (bVar11 != 0x70) goto LAB_10016235;
          bVar3 = pbVar14[3];
          bVar11 = 0;
          if (bVar3 != 0) {
            bVar11 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar11 = bVar3;
            }
            if (bVar11 != 0x70) goto LAB_10016235;
            bVar11 = pbVar14[4];
            bVar13 = 0;
          }
        }
      }
      goto LAB_10016227;
    }
  }
LAB_10016235:
  if (*(int *)(param_3 + 0x1ec) == 2) {
    if (cVar19 != '\0') {
LAB_100162a1:
      recovered_100101e0(param_1 + 7,param_2 + 0xc,(char *)&local_38,3,0x141414,1);
      return;
    }
  }
  else if ((param_3[0x1e8] & 2U) == 0 || cVar19 != '\0') goto LAB_100162a1;
  recovered_10010b10(param_1 + 6,param_2 + 7,0x1e,6,0xfcdfbe,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  return;
}

#undef DAT_10020a84
#undef DAT_10022184
#undef DAT_10022188
#undef local_38

#define local_32 (*(char *)(frame + 30))
#define local_31 (*(char *)(frame + 31))
#define acStack_3f (*(char (*)[13])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100164d0
 */

void recovered_100164d0(char *param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;

  if (param_3 == 0) {
    if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < param_2)) {
      if (uVar1 + 1 < param_2) {
        param_1[uVar1] = '0';
        param_1[uVar1 + 1] = '\0';
      }
      else {
        param_1[uVar1] = '\0';
      }
    }
  }
  else {
    uVar1 = 0;
    do {
      uVar6 = uVar1 + 1;
      acStack_3f[uVar1 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      if (param_3 < 10) break;
      bVar7 = uVar1 < 0xb;
      uVar1 = uVar6;
      param_3 = param_3 / 10;
    } while (bVar7);
    do {
      cVar5 = acStack_3f[uVar6];
      local_32 = cVar5;
      local_31 = '\0';
      if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < param_2)) {
        if (uVar1 + 1 < param_2 && cVar5 != '\0') {
          uVar2 = uVar1;
          pcVar4 = &local_31;
          do {
            param_1[uVar2] = cVar5;
            cVar5 = *pcVar4;
            uVar1 = uVar2 + 1;
            if (cVar5 == '\0') break;
            uVar3 = uVar2 + 2;
            pcVar4 = pcVar4 + 1;
            uVar2 = uVar1;
          } while (uVar3 < param_2);
        }
        param_1[uVar1] = '\0';
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

#undef local_32
#undef local_31
#undef acStack_3f

#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100165f0
 */

void recovered_100165f0(ulong param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar5 = (int)param_2;
  uVar4 = (uint)param_1;
  iVar3 = ((int)(((uint)(param_2 >> 0x1f) & 1) + iVar5) >> 1) + uVar4;
  iVar1 = (int)(param_2 >> 0x20);
  iVar6 = iVar1 / 2;
  iVar7 = (int)(param_1 >> 0x20);
  recovered_10010b10(uVar4,iVar7,iVar5,iVar1,0xeeeeee,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010570(uVar4,iVar7,iVar5,iVar1,0x969696);
  bVar2 = (byte)param_3 ^ 1;
  iVar7 = iVar7 + (uint)bVar2 * 2;
  recovered_10010b10(iVar3 + (uint)bVar2 * -3,iVar7 + iVar6 + -4,(uint)bVar2 * 6 + 1,1,0x464646,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010b10(iVar3 - (2 - param_3),iVar7 + iVar6 + -3,(2 - param_3) * 2 + 1,1,0x464646,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010b10(iVar3 - (param_3 + 1),iVar7 + iVar6 + -2,param_3 * 2 + 3,1,0x464646,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  recovered_10010b10(iVar3 + param_3 * -3,iVar7 + iVar6 + -1,param_3 * 6 + 1,1,0x464646,
                     (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
  return;
}

#undef DAT_10022184
#undef DAT_10022188

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10027068
#define DAT_10027068 (*(void * *)(((uintptr_t)pf_module_state + 0x6a4fU)))
#undef DAT_10027070
#define DAT_10027070 (*(void * *)(((uintptr_t)pf_module_state + 0x6a57U)))
#undef DAT_10027078
#define DAT_10027078 (*(uint *)(((uintptr_t)pf_module_state + 0x6a5fU)))
#undef DAT_1002707c
#define DAT_1002707c (*(uint *)(((uintptr_t)pf_module_state + 0x6a63U)))
#undef DAT_10027080
#define DAT_10027080 (*(uint *)(((uintptr_t)pf_module_state + 0x6a67U)))
#undef DAT_10027084
#define DAT_10027084 (*(uint *)(((uintptr_t)pf_module_state + 0x6a6bU)))
#undef DAT_10027088
#define DAT_10027088 (*(uint *)(((uintptr_t)pf_module_state + 0x6a6fU)))
#undef DAT_1002708c
#define DAT_1002708c (*(uint *)(((uintptr_t)pf_module_state + 0x6a73U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100167b0
 */

void recovered_100167b0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_2 == 0 || param_1 == 0) {
    return;
  }
  if (((DAT_10027078 == param_3 && (DAT_1002708c == param_4 && DAT_10027088 == param_3)) &&
      ((DAT_10027084 == param_2 && DAT_10027080 == param_1) &&
      (DAT_10027070 != (void *)0x0 && DAT_10027068 != (void *)0x0))) && DAT_1002707c == param_4) {
    return;
  }
  uVar3 = DAT_10027078;
  pvVar6 = DAT_10027068;
  if (DAT_10027068 == (void *)0x0 || DAT_10027078 != param_3) {
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x57 < uVar3))
    {
      uVar3 = UINT_00006854;
      if (((code *)(ulong)uVar3 != (code *)0x0) &&
         (pvVar6 = (*(code *)(ulong)uVar3)(DAT_10027068,(ulong)param_3 << 2), uVar3 = param_3,
         pvVar6 != (void *)0x0)) goto joined_r0x10016949;
    }
LAB_10016b18:
    if (DAT_10027068 == (void *)0x0) goto LAB_10016b6a;
  }
  else {
joined_r0x10016949:
    DAT_10027068 = pvVar6;
    DAT_10027078 = uVar3;
    if ((DAT_10027070 != (void *)0x0) &&
       (uVar3 = DAT_1002707c, pvVar6 = DAT_10027070, pvVar4 = DAT_10027068, DAT_1002707c == param_4)
       ) {
joined_r0x100169d9:
      DAT_1002707c = uVar3;
      DAT_10027068 = pvVar4;
      DAT_10027070 = pvVar6;
      if (param_3 != 0) {
        uVar7 = (ulong)param_1;
        uVar8 = (ulong)param_3;
        if (param_3 == 1) {
          uVar10 = 0;
        }
        else {
          uVar9 = 0;
          uVar10 = 0;
          do {
            if (uVar9 >> 0x20 == 0) {
              uVar5 = (undefined4)((uVar9 & 0xffffffff) / uVar8);
            }
            else {
              uVar5 = (undefined4)(uVar9 / uVar8);
            }
            *(undefined4 *)((long)pvVar4 + uVar10 * 4) = uVar5;
            uVar1 = uVar7 + uVar9;
            if (uVar1 >> 0x20 == 0) {
              uVar5 = (undefined4)((uVar1 & 0xffffffff) / uVar8);
            }
            else {
              uVar5 = (undefined4)(uVar1 / uVar8);
            }
            *(undefined4 *)((long)pvVar4 + uVar10 * 4 + 4) = uVar5;
            uVar10 = uVar10 + 2;
            uVar9 = uVar9 + uVar7 * 2;
          } while ((param_3 & 0xfffffffe) != uVar10);
        }
        if ((param_3 & 1) != 0) {
          uVar7 = uVar7 * uVar10;
          if (uVar7 >> 0x20 == 0) {
            uVar5 = (undefined4)((uVar7 & 0xffffffff) / uVar8);
          }
          else {
            uVar5 = (undefined4)(uVar7 / uVar8);
          }
          *(undefined4 *)((long)pvVar4 + uVar10 * 4) = uVar5;
        }
      }
      uVar7 = (ulong)param_4;
      if (param_4 == 0) {
        DAT_10027080 = param_1;
        DAT_10027084 = param_2;
        DAT_10027088 = param_3;
        DAT_1002708c = param_4;
        return;
      }
      uVar8 = (ulong)param_2;
      if (param_4 == 1) {
        uVar10 = 0;
      }
      else {
        uVar9 = 0;
        uVar10 = 0;
        do {
          if (uVar9 >> 0x20 == 0) {
            uVar5 = (undefined4)((uVar9 & 0xffffffff) / uVar7);
          }
          else {
            uVar5 = (undefined4)(uVar9 / uVar7);
          }
          *(undefined4 *)((long)pvVar6 + uVar10 * 4) = uVar5;
          uVar1 = uVar8 + uVar9;
          if (uVar1 >> 0x20 == 0) {
            uVar5 = (undefined4)((uVar1 & 0xffffffff) / uVar7);
          }
          else {
            uVar5 = (undefined4)(uVar1 / uVar7);
          }
          *(undefined4 *)((long)pvVar6 + uVar10 * 4 + 4) = uVar5;
          uVar10 = uVar10 + 2;
          uVar9 = uVar9 + uVar8 * 2;
        } while ((param_4 & 0xfffffffe) != uVar10);
      }
      if ((param_4 & 1) == 0) {
        DAT_10027080 = param_1;
        DAT_10027084 = param_2;
        DAT_10027088 = param_3;
        DAT_1002708c = param_4;
        return;
      }
      uVar8 = uVar8 * uVar10;
      if (uVar8 >> 0x20 == 0) {
        uVar5 = (undefined4)((uVar8 & 0xffffffff) / uVar7);
      }
      else {
        uVar5 = (undefined4)(uVar8 / uVar7);
      }
      *(undefined4 *)((long)pvVar6 + uVar10 * 4) = uVar5;
      DAT_10027080 = param_1;
      DAT_10027084 = param_2;
      DAT_10027088 = param_3;
      DAT_1002708c = param_4;
      return;
    }
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x57 < uVar3))
    {
      uVar3 = UINT_00006854;
      if ((code *)(ulong)uVar3 != (code *)0x0) {
        pvVar6 = (*(code *)(ulong)uVar3)(DAT_10027070,(ulong)param_4 << 2);
        uVar3 = param_4;
        pvVar4 = DAT_10027068;
        if (pvVar6 != (void *)0x0) goto joined_r0x100169d9;
        goto LAB_10016b18;
      }
    }
  }
  iVar2 = Ram0000000000006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x53 < uVar3)) {
    uVar3 = UINT_00006850;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      (*(code *)(ulong)uVar3)(DAT_10027068);
    }
  }
  DAT_10027068 = (void *)0x0;
LAB_10016b6a:
  if (DAT_10027070 != (void *)0x0) {
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar3 = Ram0000000000006808, 0xb < uVar3 &&
        ((uVar3 = Ram0000000000006808, 0x53 < uVar3 && (uVar3 = UINT_00006850, uVar3 != 0)))))) {
      (*(code *)(ulong)uVar3)(DAT_10027070);
    }
    DAT_10027070 = (void *)0x0;
  }
  DAT_1002708c = 0;
  DAT_10027088 = 0;
  DAT_10027084 = 0;
  DAT_10027080 = 0;
  DAT_1002707c = 0;
  DAT_10027078 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10027068
#undef DAT_10027070
#undef DAT_10027078
#undef DAT_1002707c
#undef DAT_10027080
#undef DAT_10027084
#undef DAT_10027088
#undef DAT_1002708c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006854

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016c10
 */

void recovered_10016c10(char *param_1,char *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;

  if (param_3 == (char *)0x0) {
    return;
  }
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_10020a84;
  }
  cVar1 = *param_1;
  if (param_4 < 2 || cVar1 == '\0') {
    lVar4 = 0;
  }
  else {
    lVar6 = 0;
    do {
      param_3[lVar6] = cVar1;
      lVar4 = lVar6 + 1;
      if (param_4 <= lVar6 + 2U) break;
      cVar1 = param_1[lVar6 + 1];
      lVar6 = lVar4;
    } while (cVar1 != '\0');
  }
  param_3[lVar4] = '\0';
  uVar2 = strlen(param_3);
  if (uVar2 < param_4) {
    if (uVar2 + 1 < param_4) {
      param_3[uVar2] = ' ';
      uVar2 = uVar2 + 1;
    }
    param_3[uVar2] = '\0';
  }
  uVar2 = strlen(param_3);
  if (uVar2 < param_4) {
    pcVar7 = &DAT_10020a84;
    if (param_2 != (char *)0x0) {
      pcVar7 = param_2;
    }
    cVar1 = *pcVar7;
    if (uVar2 + 1 < param_4 && cVar1 != '\0') {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar1;
        cVar1 = *pcVar7;
        uVar5 = uVar2 + 1;
        if (cVar1 == '\0') break;
        uVar3 = uVar2 + 2;
        uVar2 = uVar5;
      } while (uVar3 < param_4);
    }
    else {
      uVar5 = uVar2;
    }
    param_3[uVar5] = '\0';
  }
  uVar2 = strlen(param_3);
  if (uVar2 < param_4) {
    if (uVar2 + 1 < param_4) {
      param_3[uVar2] = ' ';
      uVar2 = uVar2 + 1;
    }
    param_3[uVar2] = '\0';
  }
  uVar2 = strlen(param_3);
  if (param_4 <= uVar2) {
    return;
  }
  if (uVar2 + 1 < param_4) {
    param_3[uVar2] = 'B';
    uVar5 = uVar2 + 1;
    if (param_4 <= uVar2 + 2) goto LAB_10016d66;
    param_3[uVar2 + 1] = 'e';
    uVar3 = uVar2 + 3;
    uVar5 = uVar2 + 2;
    if (param_4 <= uVar3) goto LAB_10016d66;
    param_3[uVar2 + 2] = 't';
    uVar2 = uVar2 + 4;
    if (param_4 <= uVar2) {
      uVar5 = uVar3;
      goto LAB_10016d66;
    }
    param_3[uVar3] = 'a';
  }
  uVar5 = uVar2;
LAB_10016d66:
  param_3[uVar5] = '\0';
  return;
}

#undef DAT_10020a84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016d80
 */

void recovered_10016d80(ulong param_1,char *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;

  if (param_2 == (char *)0x0) {
    return;
  }
  *param_2 = '\0';
  if (param_1 < 0x40000000) {
    if (param_1 < 0x100000) {
      if (param_1 < 0x400) {
        recovered_10017250(param_2,param_3,param_1);
        uVar1 = strlen(param_2);
        if (param_3 <= uVar1) {
          return;
        }
        uVar2 = uVar1 + 1;
        if (param_3 <= uVar2) goto LAB_10016f42;
        param_2[uVar1] = ' ';
        uVar1 = uVar1 + 2;
        if (uVar1 < param_3) {
          param_2[uVar2] = 'B';
          goto LAB_10016f42;
        }
      }
      else {
        recovered_10017250(param_2,param_3,param_1 >> 10);
        uVar2 = strlen(param_2);
        if (param_3 <= uVar2) {
          return;
        }
        uVar1 = uVar2 + 1;
        if (uVar1 < param_3) {
          param_2[uVar2] = ' ';
          if (param_3 <= uVar2 + 2) goto LAB_10016f42;
          param_2[uVar2 + 1] = 'K';
          uVar1 = uVar2 + 2;
          goto LAB_10016f32;
        }
      }
    }
    else {
      recovered_10017250(param_2,param_3,param_1 >> 0x14);
      uVar2 = strlen(param_2);
      if (param_3 <= uVar2) {
        return;
      }
      uVar1 = uVar2 + 1;
      if (uVar1 < param_3) {
        param_2[uVar2] = ' ';
        if (param_3 <= uVar2 + 2) goto LAB_10016f42;
        param_2[uVar2 + 1] = 'M';
        uVar1 = uVar2 + 2;
        goto LAB_10016f32;
      }
    }
  }
  else {
    recovered_10017250(param_2,param_3,param_1 >> 0x1e);
    if ((param_1 >> 0x1f < 5) && (uVar3 = (uint)param_1 & 0x3fffffff, 0x6666666 < uVar3)) {
      uVar1 = strlen(param_2);
      if (uVar1 < param_3) {
        if (uVar1 + 1 < param_3) {
          param_2[uVar1] = '.';
          uVar1 = uVar1 + 1;
        }
        param_2[uVar1] = '\0';
      }
      recovered_10017250(param_2,param_3,(ulong)(uVar3 * 2) * 5 >> 0x1e);
    }
    uVar2 = strlen(param_2);
    if (param_3 <= uVar2) {
      return;
    }
    uVar1 = uVar2 + 1;
    if (uVar1 < param_3) {
      param_2[uVar2] = ' ';
      if (param_3 <= uVar2 + 2) goto LAB_10016f42;
      param_2[uVar2 + 1] = 'G';
      uVar1 = uVar2 + 2;
LAB_10016f32:
      if (param_3 <= uVar2 + 3) goto LAB_10016f42;
      param_2[uVar1] = 'B';
      uVar2 = uVar2 + 3;
    }
  }
  uVar1 = uVar2;
LAB_10016f42:
  param_2[uVar1] = '\0';
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10027040
#define DAT_10027040 (*(void * *)(((uintptr_t)pf_module_state + 0x6a27U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_d8 (*(undefined8 *)(frame + 24))
#define local_cc (*(uint *)(frame + 36))
#define local_38 (*(void * *)(frame + 184))
#define local_2c (*(uint *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016f60
 */

uint recovered_10016f60(char *param_1,uint param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  void **dst;

  if ((param_1 == (char *)0x0) || (DAT_10027040 == (void *)0x0)) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_1001722d;
LAB_1001701f:
    uVar3 = 0xffffffff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    memset(&local_d8,0,0x18);
    iVar1 = Ram0000000000006800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram0000000000006804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0x17c) {
      return 0;
    }
    uVar2 = UINT_00006978;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return 0;
    }
    uVar3 = (*(code *)(ulong)uVar2)(param_1,uVar3,1,0,&local_d8);
    if (uVar3 == 0) {
      return 0;
    }
    uVar3 = 0x7fffffff;
    if (local_cc < 0x7fffffff) {
      uVar3 = local_cc;
    }
    if ((((local_d8 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(local_d8);
      }
    }
    dst = (void **)&local_d8;
LAB_10017213:
    memset(dst,0,0x18);
  }
  else {
    cVar5 = *param_1;
    if (cVar5 != '\0') {
      lVar4 = 0;
      do {
        if (-1 < (int)param_2 && (int)param_2 <= lVar4) {
          lVar6 = lVar4;
          break;
        }
        lVar6 = lVar4 + 1;
        *(char *)((long)&local_d8 + lVar4) = cVar5;
        if ((param_1[lVar4 + 1] == '\0') || (-1 < (int)param_2 && (int)param_2 <= lVar6)) break;
        if (lVar4 == 0x9e) {
          lVar6 = 0x9f;
          break;
        }
        lVar6 = lVar4 + 2;
        *(char *)((long)&local_d8 + lVar4 + 1) = param_1[lVar4 + 1];
        cVar5 = param_1[lVar4 + 2];
        lVar4 = lVar6;
      } while (cVar5 != '\0');
      *(undefined1 *)((long)&local_d8 + lVar6) = 0;
      memset(&local_38,0,0x18);
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x77 < uVar3)
         ) {
        uVar3 = UINT_00006874;
        if (((code *)(ulong)uVar3 == (code *)0x0) ||
           (uVar3 = (*(code *)(ulong)uVar3)(DAT_10027040,(char *)&local_d8,0,0,0,0,&local_38),
           uVar3 == 0)) goto LAB_10017221;
        uVar3 = 0x7fffffff;
        if (local_2c < 0x7fffffff) {
          uVar3 = local_2c;
        }
        if (((local_38 != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
           ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
            ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
             (uVar2 = Ram0000000000006808, 0x53 < uVar2)))))) {
          uVar2 = UINT_00006850;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            (*(code *)(ulong)uVar2)(local_38);
          }
        }
        dst = &local_38;
        goto LAB_10017213;
      }
LAB_10017221:
      if (*param_1 != '\0') goto LAB_1001701f;
    }
LAB_1001722d:
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10027040
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006874
#undef UINT_00006978
#undef local_d8
#undef local_cc
#undef local_38
#undef local_2c

#define local_58 (*(byte (*)[38])(frame + 24))
#define local_32 (*(byte *)(frame + 62))
#define uStack_60 (*(undefined8 *)(frame + 16))
#define local_31 (*(byte *)(frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017250
 */

void recovered_10017250(char *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;

  if (param_3 == 0) {
    if (param_1 != (char *)0x0) {
      uStack_60 = 0x1001733f;
      uVar1 = strlen(param_1);
      if (uVar1 < param_2) {
        if (uVar1 + 1 < param_2) {
          param_1[uVar1] = '0';
          param_1[uVar1 + 1] = '\0';
        }
        else {
          param_1[uVar1] = '\0';
        }
      }
    }
  }
  else {
    uVar1 = 0;
    do {
      uVar6 = uVar1 + 1;
      local_58[uVar1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      if (param_3 < 10) break;
      bVar7 = uVar1 < 0x17;
      param_3 = param_3 / 10;
      uVar1 = uVar6;
    } while (bVar7);
    do {
      bVar5 = local_58[uVar6 - 1];
      local_32 = bVar5;
      local_31 = 0;
      if (param_1 != (char *)0x0) {
        uStack_60 = 0x100172e6;
        uVar1 = strlen(param_1);
        if (uVar1 < param_2) {
          if (uVar1 + 1 < param_2 && bVar5 != 0) {
            uVar2 = uVar1;
            pbVar4 = &local_31;
            do {
              param_1[uVar2] = bVar5;
              bVar5 = *pbVar4;
              uVar1 = uVar2 + 1;
              if (bVar5 == 0) break;
              uVar3 = uVar2 + 2;
              pbVar4 = pbVar4 + 1;
              uVar2 = uVar1;
            } while (uVar3 < param_2);
          }
          param_1[uVar1] = '\0';
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

#undef local_58
#undef local_32
#undef uStack_60
#undef local_31

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#define local_38 (*(char *)(frame + 24))
#define local_37 (*(char (*)[23])(frame + 25))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017370
 */

void recovered_10017370(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;

  if (param_3 != 0) {
    if (*param_1 != '\0') {
      uVar1 = strlen(param_1);
      if (uVar1 < 0x40) {
        lVar3 = 0x3f;
        if (uVar1 != 0x3f) {
          param_1[uVar1] = ',';
          if (uVar1 < 0x3e) {
            lVar3 = uVar1 + 2;
            param_1[uVar1 + 1] = ' ';
          }
          else {
            lVar3 = uVar1 + 1;
          }
        }
        param_1[lVar3] = '\0';
      }
    }
    recovered_10016d80((ulong)(uint)param_3,&local_38,0x18);
    uVar1 = strlen(param_1);
    if (uVar1 < 0x40) {
      pcVar4 = &DAT_10020a84;
      if (param_2 != (char *)0x0) {
        pcVar4 = param_2;
      }
      cVar5 = *pcVar4;
      uVar2 = uVar1;
      if (uVar1 != 0x3f && cVar5 != '\0') {
        do {
          pcVar4 = pcVar4 + 1;
          param_1[uVar2] = cVar5;
          uVar1 = uVar2 + 1;
          if (0x3d < uVar2) break;
          cVar5 = *pcVar4;
          uVar2 = uVar1;
        } while (cVar5 != '\0');
      }
      param_1[uVar1] = '\0';
    }
    uVar1 = strlen(param_1);
    if (uVar1 < 0x40) {
      lVar3 = 0x3f;
      if (uVar1 != 0x3f) {
        lVar3 = uVar1 + 1;
        param_1[uVar1] = ' ';
      }
      param_1[lVar3] = '\0';
    }
    uVar1 = strlen(param_1);
    if (uVar1 < 0x40) {
      if (uVar1 != 0x3f && local_38 != '\0') {
        pcVar4 = local_37;
        uVar2 = uVar1;
        do {
          param_1[uVar2] = local_38;
          uVar1 = uVar2 + 1;
          if (0x3d < uVar2) break;
          local_38 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar1;
        } while (local_38 != '\0');
      }
      param_1[uVar1] = '\0';
    }
  }
  return;
}

#undef DAT_10020a84
#undef local_38
#undef local_37

#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100174b0
 */

void recovered_100174b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  if (param_1 == 0) {
    iVar1 = 0xbc;
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar5 = *(int *)(param_1 + 100) + -0x34;
    iVar1 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar5 = iVar3 + iVar5 + -0x84;
  iVar3 = iVar1 + 0x32;
  if (iVar1 + 0x32 < iVar5) {
    iVar3 = iVar5;
  }
  uVar4 = ((iVar3 - iVar1) - 0x20U) / 0x12;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  if ((iVar3 - iVar1) + -0xc < 0x26) {
    uVar4 = 1;
  }
  uVar2 = DAT_1002719c - uVar4;
  if (DAT_1002719c < uVar4) {
    uVar2 = 0;
  }
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  if (param_1 != 0) {
    if (DAT_1002719c == 0) {
      *(undefined8 *)(param_1 + 0xafc) = 0;
      *(undefined1 *)(param_1 + 0xb04) = 0;
      return;
    }
    if ((*(char *)(param_1 + 0xb04) != '\x01') || (DAT_1002719c <= *(uint *)(param_1 + 0xafc))) {
      *(undefined4 *)(param_1 + 0xafc) = 0;
      *(undefined1 *)(param_1 + 0xb04) = 1;
    }
    if ((int)*(uint *)(param_1 + 0xb00) < 0) {
      *(undefined4 *)(param_1 + 0xb00) = 0;
      return;
    }
    if (uVar2 < *(uint *)(param_1 + 0xb00)) {
      *(uint *)(param_1 + 0xb00) = uVar2;
    }
  }
  return;
}

#undef DAT_1002719c

#undef str_10020f5b
#define str_10020f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x942U)))
#undef str_10020f6b
#define str_10020f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x952U)))
#undef str_10020f7d
#define str_10020f7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x964U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100175b0
 */

undefined8 recovered_100175b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  char cVar3;
  char cVar4;

  if (param_1 != 0) {
    lVar2 = 0;
    do {
      cVar3 = *(char *)(param_1 + lVar2);
      if (cVar3 == '\0') {
        if (str_10020f5b[lVar2] == '\0') {
          return 0x4e7822;
        }
        break;
      }
      if (lVar2 == 0xf) break;
      cVar1 = str_10020f5b[lVar2];
      cVar4 = cVar3 + -0x20;
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar4 = cVar3;
      }
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      lVar2 = lVar2 + 1;
    } while (cVar4 == cVar3);
    lVar2 = 0;
    do {
      cVar3 = *(char *)(param_1 + lVar2);
      if (cVar3 == '\0') {
        if (str_10020f6b[lVar2] == '\0') {
          return 0x1668a8;
        }
        break;
      }
      if (lVar2 == 0x11) break;
      cVar1 = str_10020f6b[lVar2];
      cVar4 = cVar3 + -0x20;
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar4 = cVar3;
      }
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      lVar2 = lVar2 + 1;
    } while (cVar4 == cVar3);
    lVar2 = 0;
    do {
      cVar3 = *(char *)(param_1 + lVar2);
      if (cVar3 == '\0') {
        if (str_10020f7d[lVar2] == '\0') {
          return 0x9e573e;
        }
        return 0x3430b8;
      }
      if (lVar2 == 0x13) {
        return 0x3430b8;
      }
      cVar1 = str_10020f7d[lVar2];
      cVar4 = cVar3 + -0x20;
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar4 = cVar3;
      }
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      lVar2 = lVar2 + 1;
    } while (cVar4 == cVar3);
  }
  return 0x3430b8;
}

#undef str_10020f5b
#undef str_10020f6b
#undef str_10020f7d

#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017700
 */

uint128 recovered_10017700(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint128 auVar10;

  iVar1 = 0xbc;
  if (param_1 == 0) {
    iVar7 = 0;
    iVar9 = 0;
    iVar3 = 0xbc;
    iVar8 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x58) + 0x12;
    iVar9 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar8 = *(int *)(param_1 + 100) + -0x34;
    iVar3 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar8 = iVar8 + iVar9 + -0x84;
  iVar9 = iVar3 + 0x32;
  if (iVar3 + 0x32 < iVar8) {
    iVar9 = iVar8;
  }
  iVar8 = -0x19;
  if (0x25 < (iVar9 - iVar3) + -0xc) {
    iVar8 = (iVar9 - iVar3) + -0x4b;
  }
  uVar5 = 0x12;
  if (0x13 < iVar8) {
    uVar5 = iVar8 - 2;
  }
  if (param_1 == 0) {
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar8 = *(int *)(param_1 + 100) + -0x34;
    iVar1 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar8 = iVar9 + iVar8 + -0x84;
  iVar9 = iVar1 + 0x32;
  if (iVar1 + 0x32 < iVar8) {
    iVar9 = iVar8;
  }
  uVar2 = ((iVar9 - iVar1) - 0x20U) / 0x12;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if ((iVar9 - iVar1) + -0xc < 0x26) {
    uVar2 = 1;
  }
  if (param_1 == 0) {
    iVar8 = 0xbc;
    iVar1 = 0;
    iVar9 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar9 = *(int *)(param_1 + 100) + -0x34;
    iVar8 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  uVar4 = (ulong)(iVar3 + 0x24U);
  iVar9 = iVar1 + iVar9 + -0x84;
  iVar1 = iVar8 + 0x32;
  if (iVar8 + 0x32 < iVar9) {
    iVar1 = iVar9;
  }
  uVar6 = ((iVar1 - iVar8) - 0x20U) / 0x12;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if ((iVar1 - iVar8) + -0xc < 0x26) {
    uVar6 = 1;
  }
  iVar1 = DAT_1002719c - uVar6;
  if (DAT_1002719c < uVar6) {
    iVar1 = 0;
  }
  uVar6 = uVar5;
  if ((uVar2 < DAT_1002719c) && (0 < iVar1)) {
    uVar2 = (int)(uVar2 * uVar5) / (int)DAT_1002719c;
    uVar6 = 0x12;
    if (0x12 < (int)uVar2) {
      uVar6 = uVar2;
    }
    if ((int)uVar5 <= (int)uVar6) {
      uVar6 = uVar5;
    }
    uVar4 = (ulong)((int)((uVar5 - uVar6) * *(int *)(param_1 + 0xb00)) / iVar1 + iVar3 + 0x24U);
  }
  PF_PART8(auVar10, 8) = (ulong)uVar6 << 0x20 | 0xc;
  PF_PART8(auVar10, 0) = uVar4 << 0x20 | (ulong)(iVar7 + 0x16);
  return auVar10;
}

#undef DAT_1002719c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017910
 */

uint128 recovered_10017910(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  if ((((param_1 == (char *)0x0) || (*param_1 != '\x01')) || (param_1[2] != '\0')) ||
     (param_1[3] != '\0')) {
    return ZEXT816(0);
  }
  PF_PART4(auVar1, 0) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58) + -0x10;
  PF_PART4(auVar1, 4) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c) + -0x10;
  PF_PART8(auVar1, 8) = 0xe0000000e;
  return auVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022184
#define DAT_10022184 (*(byte *)(((uintptr_t)pf_module_state + 0x1b6bU)))
#undef DAT_10022188
#define DAT_10022188 (*(int *)(((uintptr_t)pf_module_state + 0x1b6fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
#undef str_10020c7d
#define str_10020c7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#define abStack_7e87 (*(byte (*)[251])(frame + 265))
#define aiStack_7d8c (*(int (*)[7941])(frame + 516))
#define auStack_7c (*(undefined1 (*)[4])(frame + 32532))
#define local_7f78 (*(undefined1 (*)[241])(frame + 24))
#define local_178 (*(byte (*)[252])(frame + 32280))
#define local_78 (*(byte (*)[40])(frame + 32536))
#define local_50 (*(ulong *)(frame + 32576))
#define local_48 (*(byte * *)(frame + 32584))
#define local_40 (*(byte * *)(frame + 32592))
#define local_38 (*(int *)(frame + 32600))
#define local_34 (*(uint *)(frame + 32604))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017960
 */

void recovered_10017960(undefined8 param_1,long param_2)

{
  unsigned char frame[32688] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;

  iVar2 = (int)param_1;
  iVar3 = (int)((ulong)param_1 >> 0x20);
  if (param_2 == 0) goto LAB_1001814d;
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 == 4 && *(char *)(param_2 + 8) != '\0') {
    pcVar21 = (char *)(param_2 + 8);
    iVar5 = recovered_10004540();
    local_34 = 0;
    bVar4 = *pcVar21;
    if (bVar4 != 0) {
      pbVar11 = (byte *)0x0;
      pbVar15 = (byte *)pcVar21;
      bVar16 = bVar4;
      do {
        if (bVar16 == 0x2f) {
          pbVar11 = pbVar15;
        }
        bVar16 = pbVar15[1];
        pbVar15 = pbVar15 + 1;
      } while (bVar16 != 0);
      pbVar15 = pbVar11 + 1;
      if (pbVar11 == (byte *)0x0) {
        pbVar15 = (byte *)pcVar21;
      }
      pbVar11 = (byte *)0x0;
      bVar16 = *pbVar15;
      while (bVar16 != 0) {
        if (bVar16 == 0x2e) {
          pbVar11 = pbVar15;
        }
        pbVar19 = pbVar15 + 1;
        pbVar15 = pbVar15 + 1;
        bVar16 = *pbVar19;
      }
      if (pbVar11 == (byte *)0x0) {
        pbVar11 = &DAT_10020a84;
      }
      bVar16 = *pbVar11;
      if (bVar16 == 0) {
        cVar17 = '.';
        goto LAB_10017b15;
      }
      bVar14 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar14 = bVar16;
      }
      if ((bVar14 == 0x2e) && (bVar16 = pbVar11[1], bVar16 != 0)) {
        bVar14 = bVar16 | 0x20;
        if (0x19 < (byte)(bVar16 + 0xbf)) {
          bVar14 = bVar16;
        }
        if (bVar14 == 0x61) {
          bVar16 = pbVar11[2];
          cVar17 = 'p';
          if (bVar16 == 0) {
LAB_10017b15:
            if (cVar17 == '\0') goto LAB_10018120;
          }
          else {
            bVar14 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar14 = bVar16;
            }
            if (bVar14 == 0x70) {
              bVar16 = pbVar11[3];
              if (bVar16 == 0) goto LAB_10017b15;
              bVar14 = bVar16 | 0x20;
              if (0x19 < (byte)(bVar16 + 0xbf)) {
                bVar14 = bVar16;
              }
              if ((bVar14 == 0x70) && (pbVar11[4] == 0)) goto LAB_10018120;
            }
          }
        }
      }
      uVar8 = 0;
      do {
        uVar10 = uVar8;
        local_178[uVar10] = bVar4;
        if (0xef < uVar10 + 1) break;
        bVar4 = *(byte *)(param_2 + 9 + uVar10);
        uVar8 = uVar10 + 1;
      } while (bVar4 != 0);
      local_178[uVar10 + 1] = 0;
      uVar8 = strlen((char *)local_178);
      if (uVar8 < 0xf1) {
        lVar12 = 0xf0;
        if (uVar8 != 0xf0) {
          local_178[uVar8] = 0x2e;
          if (uVar8 < 0xef) {
            local_178[uVar8 + 1] = 0x61;
            if (uVar8 == 0xee) {
              lVar12 = 0xf0;
            }
            else {
              local_178[uVar8 + 2] = 0x70;
              if (uVar8 < 0xed) {
                lVar12 = uVar8 + 4;
                local_178[uVar8 + 3] = 0x70;
              }
              else {
                lVar12 = uVar8 + 3;
              }
            }
          }
          else {
            lVar12 = uVar8 + 1;
          }
        }
        local_178[lVar12] = 0;
      }
      local_40 = (byte *)pcVar21;
      plVar9 = recovered_10010f50((char *)local_178,iVar5);
      if (plVar9 != (long *)0x0) goto joined_r0x1001812b;
      iVar23 = Ram0000000000006800;
      if ((((iVar23 == 0x50414d57) && (iVar23 = Ram0000000000006804, iVar23 != 0)) &&
          (uVar6 = Ram0000000000006808, 0xb < uVar6)) && (uVar6 = Ram0000000000006808, 0xcf < uVar6)
         ) {
        uVar6 = UINT_000068cc;
        if ((code *)(ulong)uVar6 != (code *)0x0) {
          uVar6 = (*(code *)(ulong)uVar6)(iVar5,&DAT_10020a84,local_7f78,0x40,&local_34);
LAB_10017db6:
          plVar9 = (long *)0x0;
          if ((uVar6 != 0) && (local_34 != 0)) {
            plVar9 = (long *)0x0;
            uVar8 = 0;
            local_38 = iVar5;
            do {
              lVar12 = uVar8 * 0x1f8;
              pbVar11 = abStack_7e87 + lVar12;
              bVar4 = abStack_7e87[lVar12];
              if (bVar4 == 0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                pbVar15 = (byte *)0x0;
                pbVar19 = pbVar11;
                bVar16 = bVar4;
                do {
                  if (bVar16 == 0x2f) {
                    pbVar15 = pbVar19;
                  }
                  bVar16 = pbVar19[1];
                  pbVar19 = pbVar19 + 1;
                } while (bVar16 != 0);
              }
              pbVar19 = pbVar15 + 1;
              if (pbVar15 == (byte *)0x0) {
                pbVar19 = pbVar11;
              }
              pbVar15 = (byte *)0x0;
              bVar16 = *pbVar19;
              while (bVar16 != 0) {
                if (bVar16 == 0x2e) {
                  pbVar15 = pbVar19;
                }
                pbVar1 = pbVar19 + 1;
                pbVar19 = pbVar19 + 1;
                bVar16 = *pbVar1;
              }
              pbVar19 = pbVar15;
              if (pbVar15 == (byte *)0x0) {
                pbVar19 = &DAT_10020a84;
              }
              bVar16 = *pbVar19;
              if (bVar16 == 0) {
                bVar16 = 0x2e;
                goto joined_r0x10017f5f;
              }
              bVar14 = bVar16 | 0x20;
              if (0x19 < (byte)(bVar16 + 0xbf)) {
                bVar14 = bVar16;
              }
              if (bVar14 == 0x2e) {
                pbVar19 = pbVar15;
                if (pbVar15 == (byte *)0x0) {
                  pbVar19 = &DAT_10020a84;
                }
                bVar16 = pbVar19[1];
                if (bVar16 != 0) {
                  bVar14 = bVar16 | 0x20;
                  if (0x19 < (byte)(bVar16 + 0xbf)) {
                    bVar14 = bVar16;
                  }
                  if (bVar14 == 0x61) {
                    pbVar19 = pbVar15;
                    if (pbVar15 == (byte *)0x0) {
                      pbVar19 = &DAT_10020a84;
                    }
                    bVar14 = pbVar19[2];
                    bVar16 = 0x70;
                    if (bVar14 != 0) {
                      bVar18 = bVar14 | 0x20;
                      if (0x19 < (byte)(bVar14 + 0xbf)) {
                        bVar18 = bVar14;
                      }
                      if (bVar18 != 0x70) goto LAB_100180c8;
                      pbVar19 = pbVar15;
                      if (pbVar15 == (byte *)0x0) {
                        pbVar19 = &DAT_10020a84;
                      }
                      bVar14 = pbVar19[3];
                      if (bVar14 != 0) {
                        bVar16 = bVar14 | 0x20;
                        if (0x19 < (byte)(bVar14 + 0xbf)) {
                          bVar16 = bVar14;
                        }
                        if (bVar16 != 0x70) goto LAB_100180c8;
                        if (pbVar15 == (byte *)0x0) {
                          pbVar15 = &DAT_10020a84;
                        }
                        bVar16 = pbVar15[4];
                      }
                    }
joined_r0x10017f5f:
                    if ((bVar16 == 0) &&
                       ((aiStack_7d8c[uVar8 * 0x7e] == 2 || ((abStack_7e87[lVar12 + 0xf7] & 2) != 0)
                        ))) {
                      local_50 = uVar8;
                      if (bVar4 == 0) {
                        pbVar15 = (byte *)0x0;
                      }
                      else {
                        pbVar15 = (byte *)0x0;
                        pbVar19 = pbVar11;
                        do {
                          if (bVar4 == 0x2f) {
                            pbVar15 = pbVar19;
                          }
                          bVar4 = pbVar19[1];
                          pbVar19 = pbVar19 + 1;
                        } while (bVar4 != 0);
                      }
                      pbVar19 = pbVar15 + 1;
                      if (pbVar15 == (byte *)0x0) {
                        pbVar19 = pbVar11;
                      }
                      local_48 = pbVar11;
                      uVar10 = strlen((char *)pbVar19);
                      pcVar21 = (char *)local_48;
                      uVar8 = local_50;
                      if (4 < uVar10) {
                        bVar4 = *pbVar19;
                        if (bVar4 == 0) {
                          uVar13 = 0;
                        }
                        else {
                          uVar20 = 0;
                          do {
                            uVar13 = uVar20 + 1;
                            local_78[uVar20] = bVar4;
                            if (0x26 < uVar13) break;
                            bVar4 = pbVar19[uVar20 + 1];
                            uVar20 = uVar13;
                          } while (bVar4 != 0);
                        }
                        local_78[uVar13] = 0;
                        auStack_7c[uVar10] = 0;
                        lVar12 = 0;
                        do {
                          bVar4 = local_40[lVar12];
                          bVar16 = local_78[lVar12];
                          if ((bVar4 == 0) || (bVar16 == 0)) {
                            if (bVar4 == bVar16) goto LAB_10018249;
                            break;
                          }
                          bVar14 = bVar4 | 0x20;
                          if (0x19 < (byte)(bVar4 + 0xbf)) {
                            bVar14 = bVar4;
                          }
                          bVar4 = bVar16 | 0x20;
                          if (0x19 < (byte)(bVar16 + 0xbf)) {
                            bVar4 = bVar16;
                          }
                          lVar12 = lVar12 + 1;
                        } while (bVar14 == bVar4);
                        lVar12 = 0;
                        do {
                          bVar4 = local_40[lVar12];
                          bVar16 = pbVar19[lVar12];
                          if ((bVar4 == 0) || (bVar16 == 0)) {
                            if (bVar4 == bVar16) goto LAB_10018249;
                            break;
                          }
                          bVar14 = bVar4 | 0x20;
                          if (0x19 < (byte)(bVar4 + 0xbf)) {
                            bVar14 = bVar4;
                          }
                          bVar4 = bVar16 | 0x20;
                          if (0x19 < (byte)(bVar16 + 0xbf)) {
                            bVar4 = bVar16;
                          }
                          lVar12 = lVar12 + 1;
                        } while (bVar14 == bVar4);
                      }
                    }
                  }
                }
              }
LAB_100180c8:
            } while ((uVar8 < 0x3f) && (uVar8 = uVar8 + 1, uVar8 < local_34));
          }
          goto joined_r0x1001812b;
        }
      }
      else {
        iVar23 = Ram0000000000006800;
        if (((iVar23 == 0x50414d57) && (iVar23 = Ram0000000000006804, iVar23 != 0)) &&
           ((uVar6 = Ram0000000000006808, 0xb < uVar6 && (uVar6 = Ram0000000000006808, 0x87 < uVar6)
            ))) {
          uVar6 = UINT_00006884;
          if ((code *)(ulong)uVar6 != (code *)0x0) {
            uVar6 = (*(code *)(ulong)uVar6)(&DAT_10020a84,local_7f78,0x40,&local_34);
            goto LAB_10017db6;
          }
        }
      }
    }
    plVar9 = (long *)0x0;
joined_r0x1001812b:
    if (plVar9 != (long *)0x0) {
      recovered_1000fef0(plVar9,iVar2 + 8,iVar3 + 4,0x22,0x1c);
      goto LAB_1001820c;
    }
  }
  else {
    if (iVar5 == 0) {
      iVar5 = recovered_10004540();
      pcVar21 = str_10020c7d;
LAB_10017b08:
      plVar9 = recovered_1000fb00(pcVar21,iVar5);
      goto joined_r0x1001812b;
    }
    if (iVar5 != 5) goto LAB_1001814d;
    pcVar21 = (char *)(param_2 + 0x30);
    uVar7 = recovered_10011700((byte *)pcVar21);
    if ((char)uVar7 != '\0') {
      iVar5 = *(int *)(param_2 + 0x124);
      goto LAB_10017b08;
    }
    bVar4 = *pcVar21;
    pbVar11 = (byte *)0x0;
    if (bVar4 != 0) {
      pbVar15 = (byte *)pcVar21;
      do {
        if (bVar4 == 0x2f) {
          pbVar11 = pbVar15;
        }
        bVar4 = pbVar15[1];
        pbVar15 = pbVar15 + 1;
      } while (bVar4 != 0);
    }
    pbVar15 = pbVar11 + 1;
    if (pbVar11 == (byte *)0x0) {
      pbVar15 = (byte *)pcVar21;
    }
    pbVar11 = (byte *)0x0;
    bVar4 = *pbVar15;
    while (bVar4 != 0) {
      if (bVar4 == 0x2e) {
        pbVar11 = pbVar15;
      }
      pbVar19 = pbVar15 + 1;
      pbVar15 = pbVar15 + 1;
      bVar4 = *pbVar19;
    }
    pbVar15 = &DAT_10020a84;
    if (pbVar11 != (byte *)0x0) {
      pbVar15 = pbVar11;
    }
    bVar4 = *pbVar15;
    if (bVar4 == 0) {
      bVar16 = 0x2e;
      bVar4 = 0;
LAB_10018113:
      if (bVar4 == bVar16) {
        iVar5 = *(int *)(param_2 + 0x124);
        goto LAB_10018120;
      }
    }
    else {
      bVar16 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar16 = bVar4;
      }
      if (bVar16 == 0x2e) {
        bVar4 = pbVar15[1];
        if (bVar4 == 0) {
          bVar16 = 0x61;
          bVar4 = 0;
        }
        else {
          bVar16 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar16 = bVar4;
          }
          if (bVar16 != 0x61) goto LAB_1001814d;
          bVar14 = pbVar15[2];
          bVar16 = 0x70;
          bVar4 = 0;
          if (bVar14 != 0) {
            bVar4 = bVar14 | 0x20;
            if (0x19 < (byte)(bVar14 + 0xbf)) {
              bVar4 = bVar14;
            }
            if (bVar4 != 0x70) goto LAB_1001814d;
            bVar14 = pbVar15[3];
            bVar4 = 0;
            if (bVar14 != 0) {
              bVar4 = bVar14 | 0x20;
              if (0x19 < (byte)(bVar14 + 0xbf)) {
                bVar4 = bVar14;
              }
              if (bVar4 != 0x70) goto LAB_1001814d;
              bVar4 = pbVar15[4];
              bVar16 = 0;
            }
          }
        }
        goto LAB_10018113;
      }
    }
  }
LAB_1001814d:
  uVar6 = iVar2 + 0xb;
  if (*(int *)(param_2 + 4) == 0) {
    iVar23 = iVar3 + 9;
    recovered_10010b10(uVar6,iVar23,0x1c,0x15,0xffecd7,
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    iVar5 = 0x15;
    uVar22 = 0xcc823e;
  }
  else {
    iVar23 = iVar3 + 8;
    recovered_10010b10(uVar6,iVar23,0x1c,0x18,(uint)*(uint3 *)(param_2 + 0x128),
                       (uint)(byte)(-(DAT_10022188 == 0) | ~DAT_10022184));
    iVar5 = 0x18;
    uVar22 = 0x606060;
  }
  recovered_10010570(uVar6,iVar23,0x1c,iVar5,uVar22);
LAB_1001820c:
  recovered_10010a40(iVar2 + -6,(ulong)(iVar3 + 0x22),0x3e,(char *)(param_2 + 8),0x2d2d2d);
  return;
LAB_10018249:
  iVar5 = local_38;
LAB_10018120:
  plVar9 = recovered_10010f50(pcVar21,iVar5);
  goto joined_r0x1001812b;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020a84
#undef DAT_10022184
#undef DAT_10022188
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006884
#undef UINT_000068cc
#undef str_10020c7d
#undef abStack_7e87
#undef aiStack_7d8c
#undef auStack_7c
#undef local_7f78
#undef local_178
#undef local_78
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1002217c
#define DAT_1002217c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b63U)))
#undef DAT_10022340
#define DAT_10022340 (*(int *)(((uintptr_t)pf_module_state + 0x1d27U)))
#undef DAT_10022344
#define DAT_10022344 (*(int *)(((uintptr_t)pf_module_state + 0x1d2bU)))
#undef DAT_10022348
#define DAT_10022348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2fU)))
#undef DAT_10022374
#define DAT_10022374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_10027048
#define DAT_10027048 (*(void * *)(((uintptr_t)pf_module_state + 0x6a2fU)))
#undef DAT_10027050
#define DAT_10027050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a37U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018260
 */

ulong recovered_10018260(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong size;
  undefined8 unaff_R14;
  ulong uVar3;

  size = (long)DAT_10022340 * (long)DAT_10022344 * 4;
  if (size != 0 && ((0 < (long)DAT_10022344 && 0 < (long)DAT_10022340) && DAT_10022348 != 0)) {
    uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((DAT_10027048 != (void *)0x0) && (DAT_10027050 == size)) goto LAB_10018394;
    if (DAT_10027048 != (void *)0x0) {
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x53 < uVar2)
         ) {
        uVar2 = UINT_00006850;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(DAT_10027048);
        }
      }
      DAT_10027048 = (void *)0x0;
    }
    DAT_10027050 = 0;
    DAT_10022374 = 0;
    DAT_1002217c = 0xffffffff;
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x4f < uVar2))))
    {
      uVar2 = UINT_0000684c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        DAT_10027048 = (*(code *)(ulong)uVar2)(size);
        if (DAT_10027048 != (void *)0x0) {
          DAT_10027050 = size;
          goto LAB_10018394;
        }
        goto LAB_10018391;
      }
    }
    DAT_10027048 = (void *)0x0;
  }
LAB_10018391:
  uVar3 = 0;
LAB_10018394:
  return uVar3 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1002217c
#undef DAT_10022340
#undef DAT_10022344
#undef DAT_10022348
#undef DAT_10022374
#undef DAT_10027048
#undef DAT_10027050
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100183a0
 */

uint recovered_100183a0(long param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (param_1 == 0) {
LAB_1001842e:
    uVar3 = (param_3 & 0xff) << 8 | (param_2 & 0xff) << 0x10;
    uVar2 = param_4 & 0xff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (((uVar2 != 0) && (uVar3 = *(uint *)(param_1 + 0x24), uVar3 != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x2c), uVar1 != 0)) {
      uVar4 = param_2 & 0xff;
      if (uVar2 < 8) {
        uVar4 = (((uVar4 << ((byte)uVar2 & 0x1f)) - uVar4) + 0x7f) / 0xff;
      }
      else {
        uVar4 = uVar4 << ((byte)uVar2 - 8 & 0x1f);
      }
      uVar2 = param_3 & 0xff;
      if (uVar3 < 8) {
        uVar2 = (((uVar2 << ((byte)uVar3 & 0x1f)) - uVar2) + 0x7f) / 0xff;
      }
      else {
        uVar2 = uVar2 << ((byte)uVar3 - 8 & 0x1f);
      }
      uVar3 = param_4 & 0xff;
      if (uVar1 < 8) {
        uVar3 = (((uVar3 << ((byte)uVar1 & 0x1f)) - uVar3) + 0x7f) / 0xff;
      }
      else {
        uVar3 = uVar3 << ((byte)uVar1 - 8 & 0x1f);
      }
      return uVar2 << (*(byte *)(param_1 + 0x28) & 0x1f) |
             uVar4 << (*(byte *)(param_1 + 0x20) & 0x1f) |
             uVar3 << (*(byte *)(param_1 + 0x30) & 0x1f);
    }
    if (*(int *)(param_1 + 0x18) == 0x10) {
      uVar2 = ((param_2 & 0xff) * 0x1f + 0x7f) * 0x4041 >> 0xb & 0x3f800;
      uVar3 = ((param_3 & 0xff) * 0x3f + 0x7f) * 0x8081 >> 0x12 & 0x1fe0;
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0xf) goto LAB_1001842e;
      uVar2 = ((param_2 & 0xff) * 0x1f + 0x7f) * 0x4041 >> 0xc & 0x1fc00;
      uVar3 = ((param_3 & 0xff) * 0x1f + 0x7f) * 0x4041 >> 0x11 & 0xfe0;
    }
    uVar3 = uVar3 | uVar2;
    uVar2 = ((param_4 & 0xff) * 0x1f + 0x7f) / 0xff;
  }
  return uVar2 | uVar3;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1012c4cc
#define DAT_1012c4cc (*(uint *)(((uintptr_t)pf_module_state + 0x10beb3U)))
#undef DAT_1012c4d0
#define DAT_1012c4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beb7U)))
#undef DAT_1012c4d1
#define DAT_1012c4d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beb8U)))
#undef DAT_1012c4d2
#define DAT_1012c4d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beb9U)))
#undef DAT_1012c4d3
#define DAT_1012c4d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebaU)))
#undef DAT_1012c4d4
#define DAT_1012c4d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebbU)))
#undef DAT_1012c4d5
#define DAT_1012c4d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebcU)))
#undef DAT_1012c4d6
#define DAT_1012c4d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebdU)))
#undef DAT_1012c4d7
#define DAT_1012c4d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebeU)))
#undef DAT_1012c4d8
#define DAT_1012c4d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bebfU)))
#undef DAT_1012c4d9
#define DAT_1012c4d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec0U)))
#undef DAT_1012c4da
#define DAT_1012c4da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec1U)))
#undef DAT_1012c4db
#define DAT_1012c4db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec2U)))
#undef DAT_1012c4dc
#define DAT_1012c4dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec3U)))
#undef DAT_1012c4dd
#define DAT_1012c4dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec4U)))
#undef DAT_1012c4de
#define DAT_1012c4de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec5U)))
#undef DAT_1012c4df
#define DAT_1012c4df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec6U)))
#undef DAT_1012c4e0
#define DAT_1012c4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec7U)))
#undef DAT_1012c4e1
#define DAT_1012c4e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec8U)))
#undef DAT_1012c4e2
#define DAT_1012c4e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bec9U)))
#undef DAT_1012c4e3
#define DAT_1012c4e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10becaU)))
#undef DAT_1012c4e4
#define DAT_1012c4e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10becbU)))
#undef DAT_1012c4e5
#define DAT_1012c4e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beccU)))
#undef DAT_1012c4e6
#define DAT_1012c4e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10becdU)))
#undef DAT_1012c4e7
#define DAT_1012c4e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beceU)))
#undef DAT_1012c4e8
#define DAT_1012c4e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10becfU)))
#undef DAT_1012c4e9
#define DAT_1012c4e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed0U)))
#undef DAT_1012c4ea
#define DAT_1012c4ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed1U)))
#undef DAT_1012c4eb
#define DAT_1012c4eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed2U)))
#undef DAT_1012c4ec
#define DAT_1012c4ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed3U)))
#undef DAT_1012c4ed
#define DAT_1012c4ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed4U)))
#undef DAT_1012c4ee
#define DAT_1012c4ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed5U)))
#undef DAT_1012c4ef
#define DAT_1012c4ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed6U)))
#undef DAT_1012c4f0
#define DAT_1012c4f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed7U)))
#undef DAT_1012c4f1
#define DAT_1012c4f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed8U)))
#undef DAT_1012c4f2
#define DAT_1012c4f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bed9U)))
#undef DAT_1012c4f3
#define DAT_1012c4f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bedaU)))
#undef DAT_1012c4f4
#define DAT_1012c4f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bedbU)))
#undef DAT_1012c4f5
#define DAT_1012c4f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bedcU)))
#undef DAT_1012c4f6
#define DAT_1012c4f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10beddU)))
#undef DAT_1012c4f7
#define DAT_1012c4f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bedeU)))
#undef DAT_1012c4f8
#define DAT_1012c4f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bedfU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018530
 */

void recovered_10018530(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x2f < uVar3)) {
    uVar3 = UINT_0000682c;
    if (((code *)(ulong)uVar3 != (code *)0x0) && (uVar3 = (*(code *)(ulong)uVar3)(), uVar3 != 0)) {
      uVar4 = uVar3 >> 8 & 0xff;
      if (((uVar3 & 0x60000) == 0) && ((uVar3 & 0x800000ff) != 0x80000000 || uVar4 != 0)) {
        uVar5 = uVar3 & 0xff;
        bVar2 = (byte)uVar3;
        if (uVar5 - 0x20 < 0x5f) {
          uVar4 = (uint)(bVar2 | 0x20);
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            uVar4 = uVar3 & 0xff;
          }
          DAT_1012c4cc = uVar5;
          switch((uintptr_t)(uVar4)) {
          case 0x20:
            DAT_1012c4f8 = 1;
            break;
          case 0x2d:
            DAT_1012c4f6 = 1;
            break;
          case 0x2e:
            DAT_1012c4f7 = 1;
            break;
          case 0x30:
            DAT_1012c4ec = 1;
            break;
          case 0x31:
            DAT_1012c4ed = 1;
            break;
          case 0x32:
            DAT_1012c4ee = 1;
            break;
          case 0x33:
            DAT_1012c4ef = 1;
            break;
          case 0x34:
            DAT_1012c4f0 = 1;
            break;
          case 0x35:
            DAT_1012c4f1 = 1;
            break;
          case 0x36:
            DAT_1012c4f2 = 1;
            break;
          case 0x37:
            DAT_1012c4f3 = 1;
            break;
          case 0x38:
            DAT_1012c4f4 = 1;
            break;
          case 0x39:
            DAT_1012c4f5 = 1;
            break;
          case 0x61:
            DAT_1012c4d2 = 1;
            break;
          case 0x62:
            DAT_1012c4d3 = 1;
            break;
          case 99:
            DAT_1012c4d4 = 1;
            break;
          case 100:
            DAT_1012c4d5 = 1;
            break;
          case 0x65:
            DAT_1012c4d6 = 1;
            break;
          case 0x66:
            DAT_1012c4d7 = 1;
            break;
          case 0x67:
            DAT_1012c4d8 = 1;
            break;
          case 0x68:
            DAT_1012c4d9 = 1;
            break;
          case 0x69:
            DAT_1012c4da = 1;
            break;
          case 0x6a:
            DAT_1012c4db = 1;
            break;
          case 0x6b:
            DAT_1012c4dc = 1;
            break;
          case 0x6c:
            DAT_1012c4dd = 1;
            break;
          case 0x6d:
            DAT_1012c4de = 1;
            break;
          case 0x6e:
            DAT_1012c4df = 1;
            break;
          case 0x6f:
            DAT_1012c4e0 = 1;
            break;
          case 0x70:
            DAT_1012c4e1 = 1;
            break;
          case 0x71:
            DAT_1012c4e2 = 1;
            break;
          case 0x72:
            DAT_1012c4e3 = 1;
            break;
          case 0x73:
            DAT_1012c4e4 = 1;
            break;
          case 0x74:
            DAT_1012c4e5 = 1;
            break;
          case 0x75:
            DAT_1012c4e6 = 1;
            break;
          case 0x76:
            DAT_1012c4e7 = 1;
            break;
          case 0x77:
            DAT_1012c4e8 = 1;
            break;
          case 0x78:
            DAT_1012c4e9 = 1;
            break;
          case 0x79:
            DAT_1012c4ea = 1;
            break;
          case 0x7a:
            DAT_1012c4eb = 1;
          }
        }
        else if (((uVar4 == 0xe) || (bVar2 == 0x7f)) || ((uVar3 & 0xff) == 8)) {
          DAT_1012c4d0 = 1;
        }
        else if (((uVar4 == 0x1c) || (bVar2 == 0xd)) || ((uVar3 & 0xff) == 10)) {
          DAT_1012c4d1 = 1;
        }
        else if (uVar5 == 0x1b || uVar4 == 1) {
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1012c4cc
#undef DAT_1012c4d0
#undef DAT_1012c4d1
#undef DAT_1012c4d2
#undef DAT_1012c4d3
#undef DAT_1012c4d4
#undef DAT_1012c4d5
#undef DAT_1012c4d6
#undef DAT_1012c4d7
#undef DAT_1012c4d8
#undef DAT_1012c4d9
#undef DAT_1012c4da
#undef DAT_1012c4db
#undef DAT_1012c4dc
#undef DAT_1012c4dd
#undef DAT_1012c4de
#undef DAT_1012c4df
#undef DAT_1012c4e0
#undef DAT_1012c4e1
#undef DAT_1012c4e2
#undef DAT_1012c4e3
#undef DAT_1012c4e4
#undef DAT_1012c4e5
#undef DAT_1012c4e6
#undef DAT_1012c4e7
#undef DAT_1012c4e8
#undef DAT_1012c4e9
#undef DAT_1012c4ea
#undef DAT_1012c4eb
#undef DAT_1012c4ec
#undef DAT_1012c4ed
#undef DAT_1012c4ee
#undef DAT_1012c4ef
#undef DAT_1012c4f0
#undef DAT_1012c4f1
#undef DAT_1012c4f2
#undef DAT_1012c4f3
#undef DAT_1012c4f4
#undef DAT_1012c4f5
#undef DAT_1012c4f6
#undef DAT_1012c4f7
#undef DAT_1012c4f8
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000682c

#undef DAT_100208a0
#define DAT_100208a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_1002111f
#define DAT_1002111f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb06U)))
#undef DAT_10021124
#define DAT_10021124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0bU)))
#undef DAT_10022070
#define DAT_10022070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a57U)))
#undef DAT_10022078
#define DAT_10022078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a5fU)))
#undef DAT_1002231c
#define DAT_1002231c (*(uint *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_100223e8
#define DAT_100223e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dcfU)))
#undef DAT_100223ec
#define DAT_100223ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dd3U)))
#undef DAT_100223f0
#define DAT_100223f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dd7U)))
#undef DAT_100223f8
#define DAT_100223f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ddfU)))
#undef DAT_10022400
#define DAT_10022400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1de7U)))
#undef DAT_1002240d
#define DAT_1002240d (*(char *)(((uintptr_t)pf_module_state + 0x1df4U)))
#undef DAT_1002240e
#define DAT_1002240e (*(char *)(((uintptr_t)pf_module_state + 0x1df5U)))
#undef DAT_1002240f
#define DAT_1002240f (*(char *)(((uintptr_t)pf_module_state + 0x1df6U)))
#undef DAT_100225fc
#define DAT_100225fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_10022600
#define DAT_10022600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe7U)))
#undef DAT_10022644
#define DAT_10022644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202bU)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022690
#define DAT_10022690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2077U)))
#undef DAT_10022694
#define DAT_10022694 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207bU)))
#undef DAT_10022698
#define DAT_10022698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207fU)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
#undef DAT_100252b0
#define DAT_100252b0 (*(char *)(((uintptr_t)pf_module_state + 0x4c97U)))
#undef UNK_100208a8
#define UNK_100208a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef _DAT_100208a0
#define _DAT_100208a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef _DAT_100223f0
#define _DAT_100223f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dd7U)))
#undef _DAT_100223f8
#define _DAT_100223f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ddfU)))
#undef _DAT_10022400
#define _DAT_10022400 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1de7U)))
#undef str_1002108e
#define str_1002108e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa75U)))
#undef str_10021115
#define str_10021115 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafcU)))
#undef str_10021128
#define str_10021128 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_1002112e
#define str_1002112e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb15U)))
#undef str_10021135
#define str_10021135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1cU)))
#undef str_10021144
#define str_10021144 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2bU)))
#undef uRam00000000100208a8
#define uRam00000000100208a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#define local_68 (*(undefined8 *)(frame + 24))
#define local_60 (*(undefined2 *)(frame + 32))
#define local_5e (*(undefined1 *)(frame + 34))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100189e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100189e0(int param_1,undefined4 param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  bool bVar16;

  uVar4 = DAT_1002231c;
  uVar6 = (ulong)DAT_1002231c;
  memset(&DAT_100223e8,0,0x59c);
  lVar8 = DAT_10022368;
  DAT_100223e8 = 1;
  _DAT_100223f8 = uRam00000000100208a8;
  _DAT_10022400 = 0xffffffffffffffff;
  if (0x13 < uVar6) {
    DAT_100223e8 = 1;
    DAT_100223ec = param_2;
    _DAT_100223f0 = _DAT_100208a0;
    _DAT_100223f8 = uRam00000000100208a8;
    _DAT_10022400 = 0xffffffffffffffff;
    return;
  }
  lVar9 = uVar6 * 0xda8;
  if (*(char *)(DAT_10022368 + lVar9) != '\x01') {
    DAT_100223e8 = 1;
    DAT_100223ec = param_2;
    _DAT_100223f0 = _DAT_100208a0;
    _DAT_100223f8 = uRam00000000100208a8;
    _DAT_10022400 = 0xffffffffffffffff;
    return;
  }
  lVar10 = DAT_10022368 + lVar9;
  _DAT_100223f0 = CONCAT44(uVar4,(int)_DAT_100208a0);
  iVar14 = *(int *)(lVar10 + 0x10);
  DAT_100223ec = param_2;
  if (iVar14 == 6) {
    if (param_1 == 2) {
      pcVar15 = (char *)(lVar10 + 0xc64);
      uVar11 = 2;
    }
    else if (param_1 == 1) {
      pcVar15 = (char *)(lVar10 + 0xbc4);
      uVar11 = 1;
    }
    else {
      if ((long)DAT_10022980 < 0x12) {
        *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x15;
        *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
        lVar10 = (long)DAT_10022980;
        *(undefined4 *)(&DAT_1002268c + lVar10 * 0x2a) = 0x736f6c43;
        *(undefined2 *)(&DAT_10022690 + lVar10 * 0x2a) = 0x65;
        lVar10 = (long)DAT_10022980;
        DAT_10022980 = DAT_10022980 + 1;
        if (lVar10 < 0x11) {
          *(undefined4 *)(&DAT_10022600 + lVar10 * 4) = 0x16;
          *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
          lVar10 = (long)DAT_10022980;
          *(undefined8 *)(&DAT_1002268c + lVar10 * 0x2a) = 0x6c412065736f6c43;
          *(undefined2 *)(&DAT_10022694 + lVar10 * 0x2a) = 0x6c;
          DAT_10022980 = DAT_10022980 + 1;
        }
      }
      pcVar15 = (char *)(lVar8 + lVar9 + 0xd04);
      uVar11 = 3;
    }
    recovered_1001df60(pcVar15,uVar11);
    goto joined_r0x10018ebb;
  }
  if (iVar14 == 1) {
    if (param_1 != 3) {
      if (param_1 == 1) {
        lVar8 = 0;
        do {
          local_68 = 0x742074726f707845;
          local_60 = 0x206f;
          local_5e = 0;
          pcVar15 = (char *)(&DAT_10022078)[lVar8 * 3];
          uVar6 = strlen((char *)&local_68);
          if (uVar6 < 0x2a) {
            if (pcVar15 == (char *)0x0) {
              pcVar15 = &DAT_10020a84;
            }
            if (uVar6 != 0x29) {
              cVar2 = *pcVar15;
              uVar12 = uVar6;
              while (uVar6 = uVar12, cVar2 != '\0') {
                pcVar15 = pcVar15 + 1;
                *(char *)((long)&local_68 + uVar12) = cVar2;
                uVar6 = uVar12 + 1;
                if (0x27 < uVar12) break;
                uVar12 = uVar6;
                cVar2 = *pcVar15;
              }
            }
            *(undefined1 *)((long)&local_68 + uVar6) = 0;
          }
          if ((long)DAT_10022980 < 0x12) {
            uVar11 = (&DAT_10022070)[lVar8 * 6];
            *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x1b;
            *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = uVar11;
            iVar14 = DAT_10022980;
            if ((char)local_68 == '\0') {
              uVar6 = 0;
            }
            else {
              uVar12 = 0;
              do {
                uVar6 = uVar12 + 1;
                (&DAT_1002268c)[uVar12 + (long)iVar14 * 0x2a] = (char)local_68;
                if (0x28 < uVar6) break;
                PF_PART1(local_68, 0) = *(char *)((long)&local_68 + uVar12 + 1);
                uVar12 = uVar6;
              } while ((char)local_68 != '\0');
            }
            (&DAT_1002268c)[uVar6 + (long)iVar14 * 0x2a] = 0;
            DAT_10022980 = DAT_10022980 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 4);
      }
      goto joined_r0x10018ebb;
    }
    if (0x11 < (long)DAT_10022980) {
      DAT_100223e8 = 1;
      _DAT_100223f8 = uRam00000000100208a8;
      _DAT_10022400 = 0xffffffffffffffff;
      return;
    }
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x15;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar8 = (long)DAT_10022980;
    *(undefined4 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x736f6c43;
    *(undefined2 *)(&DAT_10022690 + lVar8 * 0x2a) = 0x65;
    lVar8 = (long)DAT_10022980;
    DAT_10022980 = DAT_10022980 + 1;
    if (0x10 < lVar8) {
      return;
    }
    *(undefined4 *)(&DAT_10022600 + lVar8 * 4) = 0x16;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar8 = (long)DAT_10022980;
    *(undefined8 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x6c412065736f6c43;
    *(undefined2 *)(&DAT_10022694 + lVar8 * 0x2a) = 0x6c;
  }
  else {
    if (iVar14 != 0) goto joined_r0x10018ebb;
    if (*(char *)(lVar10 + 0xb04) == '\x01') {
      uVar3 = *(uint *)(lVar10 + 0xafc);
      if (*(uint *)(lVar10 + 0xaf8) <= uVar3) goto LAB_10018c57;
      lVar8 = *(long *)(lVar10 + 0xaf0);
      pbVar1 = (byte *)(lVar8 + (ulong)uVar3 * 0x1f8);
      bVar16 = lVar8 == 0;
      if (bVar16) {
        iVar14 = *(int *)(lVar10 + 0x25c);
        bVar5 = 0;
      }
      else {
        iVar14 = *(int *)(pbVar1 + 0x1f0);
        if (iVar14 < 0) {
          iVar14 = *(int *)(lVar10 + 0x25c);
        }
        bVar5 = 1;
        if (*(int *)(pbVar1 + 0x1ec) != 2) {
          bVar5 = (pbVar1[0x1e8] & 2) >> 1;
        }
      }
      recovered_1001e110(uVar4,uVar3,(byte *)((ulong)uVar3 * 0x1f8 + lVar8 + 0xf1),pbVar1,iVar14,
                         (uint)bVar5);
    }
    else {
LAB_10018c57:
      pbVar1 = (byte *)(lVar10 + 0x78);
      bVar5 = *(byte *)(lVar10 + 0x78);
      pbVar7 = (byte *)0x0;
      if (bVar5 != 0) {
        pbVar13 = pbVar1;
        do {
          if (bVar5 == 0x2f) {
            pbVar7 = pbVar13;
          }
          bVar5 = pbVar13[1];
          pbVar13 = pbVar13 + 1;
        } while (bVar5 != 0);
      }
      pbVar13 = pbVar7 + 1;
      if (pbVar7 == (byte *)0x0) {
        pbVar13 = pbVar1;
      }
      recovered_1001e110(uVar4,0xfffffc18,pbVar1,pbVar13,*(undefined4 *)(lVar10 + 0x25c),1);
      bVar16 = true;
    }
    if (param_1 != 2) {
      if (param_1 == 1) {
        if ((long)DAT_10022980 < 0x12) {
          *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 1;
          *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
          lVar8 = (long)DAT_10022980;
          *(undefined4 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x6e65704f;
          (&DAT_10022690)[lVar8 * 0x2a] = 0;
          DAT_10022980 = DAT_10022980 + 1;
        }
        if (DAT_1002240e == '\x01') {
          recovered_1001d970(6,str_10021115,0xffffffff);
        }
        if (DAT_10022980 < 0x12) {
          *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0xb;
          *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
          lVar8 = (long)DAT_10022980;
          *(undefined4 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x6f666e49;
          (&DAT_10022690)[lVar8 * 0x2a] = 0;
          DAT_10022980 = DAT_10022980 + 1;
        }
        recovered_1001da00();
      }
      else {
        if ((long)DAT_10022980 < 0x12) {
          *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x15;
          *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
          lVar8 = (long)DAT_10022980;
          *(undefined4 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x736f6c43;
          *(undefined2 *)(&DAT_10022690 + lVar8 * 0x2a) = 0x65;
          lVar8 = (long)DAT_10022980;
          DAT_10022980 = DAT_10022980 + 1;
          if (lVar8 < 0x11) {
            *(undefined4 *)(&DAT_10022600 + lVar8 * 4) = 0x16;
            *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
            lVar8 = (long)DAT_10022980;
            *(undefined8 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x6c412065736f6c43;
            *(undefined2 *)(&DAT_10022694 + lVar8 * 0x2a) = 0x6c;
            lVar8 = (long)DAT_10022980;
            DAT_10022980 = DAT_10022980 + 1;
            if (lVar8 < 0x11) {
              *(undefined4 *)(&DAT_10022600 + lVar8 * 4) = 0x14;
              *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
              lVar8 = (long)DAT_10022980;
              *(undefined8 *)(&DAT_1002268c + lVar8 * 0x2a) = 0x746163696c707544;
              *(undefined2 *)(&DAT_10022694 + lVar8 * 0x2a) = 0x65;
              DAT_10022980 = DAT_10022980 + 1;
            }
          }
        }
        if (DAT_1002240d == '\x01') {
          recovered_1001d970(5,str_10021135,0xffffffff);
        }
        if (DAT_1002240f == '\x01') {
          recovered_1001d970(0x17,str_10021144,0xffffffff);
        }
      }
      goto joined_r0x10018ebb;
    }
    if (!bVar16) {
      recovered_1001d970(7,&DAT_1002111f,0xffffffff);
      recovered_1001d970(8,&DAT_10021124,0xffffffff);
    }
    if (DAT_100252b0 == '\x01') {
      recovered_1001d970(9,str_10021128,0xffffffff);
    }
    if (!bVar16) {
      recovered_1001d970(10,str_1002108e,0xffffffff);
      recovered_1001d970(0xd,str_1002112e,0xffffffff);
    }
    if (0x11 < (long)DAT_10022980) {
      return;
    }
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0xc;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar8 = (long)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar8) = 0x4620657461657243;
    *(undefined4 *)(&DAT_10022694 + lVar8) = 0x65646c6f;
    *(undefined2 *)(&DAT_10022698 + lVar8) = 0x72;
  }
  DAT_10022980 = DAT_10022980 + 1;
joined_r0x10018ebb:
  if (DAT_10022980 == 0) {
    DAT_100223e8 = 0;
  }
  return;
}

#undef DAT_100208a0
#undef DAT_10020a84
#undef DAT_1002111f
#undef DAT_10021124
#undef DAT_10022070
#undef DAT_10022078
#undef DAT_1002231c
#undef DAT_10022368
#undef DAT_100223e8
#undef DAT_100223ec
#undef DAT_100223f0
#undef DAT_100223f8
#undef DAT_10022400
#undef DAT_1002240d
#undef DAT_1002240e
#undef DAT_1002240f
#undef DAT_100225fc
#undef DAT_10022600
#undef DAT_10022644
#undef DAT_1002268c
#undef DAT_10022690
#undef DAT_10022694
#undef DAT_10022698
#undef DAT_10022980
#undef DAT_100252b0
#undef UNK_100208a8
#undef _DAT_100208a0
#undef _DAT_100223f0
#undef _DAT_100223f8
#undef _DAT_10022400
#undef str_1002108e
#undef str_10021115
#undef str_10021128
#undef str_1002112e
#undef str_10021135
#undef str_10021144
#undef uRam00000000100208a8
#undef local_68
#undef local_60
#undef local_5e

#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022988
#define DAT_10022988 (*(byte * *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100191f0
 */

long recovered_100191f0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  lVar1 = 0;
  iVar3 = 0;
  pbVar2 = DAT_10022988;
  do {
    if (*pbVar2 == 1) {
      iVar4 = (uint)DAT_10022988[0x13ec] + (uint)DAT_10022988[0x12c0] +
              (uint)DAT_10022988[0x1194] +
              (uint)DAT_10022988[0x1068] +
              (uint)DAT_10022988[0xf3c] + (uint)DAT_10022988[0xe10] + (uint)DAT_10022988[0xce4] +
              (uint)DAT_10022988[3000] +
              (uint)DAT_10022988[0xa8c] + (uint)DAT_10022988[0x960] + (uint)DAT_10022988[0x834] +
              (uint)DAT_10022988[0x708] + (uint)DAT_10022988[0x5dc] + (uint)DAT_10022988[0x4b0] +
              (uint)DAT_10022988[900] + (uint)DAT_10022988[600] +
              (uint)DAT_10022988[300] + (uint)*DAT_10022988;
      iVar5 = iVar4 * -0x44 + 0x12;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      iVar5 = (iVar5 + DAT_10022170) / 2;
      if ((param_1 < iVar5 + iVar3 * 0x44 + 0x32 &&
          (iVar5 + iVar3 * 0x44 <= param_1 && DAT_10022174 + -0x36 <= param_2)) &&
          param_2 < DAT_10022174 + -8) {
        return lVar1;
      }
      iVar3 = iVar3 + 1;
    }
    lVar1 = lVar1 + 1;
    pbVar2 = pbVar2 + 300;
    if (lVar1 == 0x12) {
      return 0xffffffff;
    }
  } while( true );
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022988

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef UNK_100207c8
#define UNK_100207c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1afU)))
#undef ram0x100207c0
#define ram0x100207c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_100207b0
#define str_100207b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_100210c7
#define str_100210c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaeU)))
#undef str_100210d3
#define str_100210d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabaU)))
#undef uRam00000000100207c8
#define uRam00000000100207c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1afU)))
#define uStack_18 (*(undefined8 *)(frame + 40))
#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(char * *)(frame + 24))
#define local_20 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019380(uint param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;

  if (param_1 < 0x12) {
    if (*(char *)(DAT_10022988 + (ulong)param_1 * 300) == '\x01') {
      lVar6 = DAT_10022988 + (ulong)param_1 * 300;
      iVar3 = *(int *)(lVar6 + 4);
      if (iVar3 == 5) {
        recovered_1001a380((byte *)(lVar6 + 0x30),0,*(int *)(lVar6 + 0x124));
        return;
      }
      if (iVar3 == 3) {
        uVar4 = recovered_10003ea0(3,str_100210c7,0x9c9c9c,'\0');
        local_30 = 3;
        local_2c = (undefined4)uVar4;
        local_28 = str_100210d3;
        local_20 = ram0x100207c0;
        uStack_18 = uRam00000000100207c8;
        uVar4 = recovered_1000cbb0((undefined8 *)&local_30);
        lVar6 = DAT_10022368;
        uVar2 = PF_PART8(str_100207b0, 8);
        if (-1 < (int)uVar4) {
          lVar5 = (uVar4 & 0xffffffff) * 0xda8;
          pcVar1 = (char *)(DAT_10022368 + 0x261 + lVar5);
          *(undefined8 *)pcVar1 = PF_PART8(str_100207b0, 0);
          *(undefined8 *)(pcVar1 + 8) = uVar2;
          *(undefined2 *)(lVar6 + 0x271 + lVar5) = 0x6e6f;
          *(undefined1 *)(lVar6 + 0x273 + lVar5) = 0;
        }
      }
      else {
        if (iVar3 == 0) {
          iVar3 = recovered_10004540();
          recovered_1000c9f0(&DAT_10020a84,iVar3);
          return;
        }
        if (*(char *)(lVar6 + 8) != '\0') {
          iVar3 = recovered_10004540();
          recovered_1001e360((byte *)(lVar6 + 8),iVar3);
          return;
        }
      }
    }
  }
  return;
}

#undef DAT_10020a84
#undef DAT_10022368
#undef DAT_10022988
#undef UNK_100207c8
#undef ram0x100207c0
#undef str_100207b0
#undef str_100210c7
#undef str_100210d3
#undef uRam00000000100207c8
#undef uStack_18
#undef local_30
#undef local_2c
#undef local_28
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100194a0
 */

void recovered_100194a0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    return;
  }
  bVar1 = recovered_10010d70((long)param_1);
  if (bVar1 == 0) {
    recovered_1001a380((byte *)(param_1 + 0x29),0,*(int *)(param_1 + 0x11c));
    return;
  }
  recovered_1000c9f0(param_1 + 0x29,*(int *)(param_1 + 0x11c));
  return;
}


#undef DAT_10022170
#define DAT_10022170 (*(int *)(((uintptr_t)pf_module_state + 0x1b57U)))
#undef DAT_10022174
#define DAT_10022174 (*(int *)(((uintptr_t)pf_module_state + 0x1b5bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100194f0
 */

void recovered_100194f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;

  lVar1 = DAT_10022368 + (ulong)param_1 * 0xda8;
  bVar2 = *(char *)(DAT_10022368 + 3 + (ulong)param_1 * 0xda8) == '\0';
  if (bVar2) {
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x58) = 0x240000000e;
    *(int *)(lVar1 + 0x60) = DAT_10022170 + -0x1c;
    *(int *)(lVar1 + 100) = DAT_10022174 + -0x6e;
    *(undefined1 *)(lVar1 + 2) = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar1 + 0x70);
  }
  *(bool *)(lVar1 + 3) = bVar2;
  return;
}

#undef DAT_10022170
#undef DAT_10022174
#undef DAT_10022368

#undef DAT_1002231c
#define DAT_1002231c (*(int *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022990
#define DAT_10022990 (*(int * *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10027194
#define DAT_10027194 (*(int *)(((uintptr_t)pf_module_state + 0x6b7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019560
 */

void recovered_10019560(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;

  piVar1 = DAT_10022990;
  uVar2 = (ulong)DAT_10027194;
  if (0 < (long)uVar2) {
    piVar5 = DAT_10022990 + -3;
    uVar4 = 0;
    do {
      if (piVar5[3] == param_1) {
        if (uVar4 == 0) goto LAB_10019655;
        if (uVar4 < 8) {
          uVar3 = uVar4;
          goto LAB_10019602;
        }
        uVar3 = (ulong)((uint)uVar4 & 7);
        uVar6 = uVar4 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)piVar5 = *(undefined8 *)(piVar5 + -1);
          *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar5 + 1);
          *(undefined8 *)(piVar5 + -4) = *(undefined8 *)(piVar5 + -5);
          *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(piVar5 + -3);
          piVar5 = piVar5 + -8;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
        if (uVar4 != (uVar4 & 0x7ffffffffffffff8)) {
LAB_10019602:
          piVar1[uVar3] = piVar1[uVar3 - 1];
          if ((1 < uVar3) && (piVar1[uVar3 - 1] = piVar1[uVar3 - 2], uVar3 != 2)) {
            piVar1[uVar3 - 2] = piVar1[uVar3 - 3];
            if ((3 < uVar3) &&
               (((piVar1[uVar3 - 3] = piVar1[uVar3 - 4], uVar3 != 4 &&
                 (piVar1[uVar3 - 4] = piVar1[uVar3 - 5], 5 < uVar3)) &&
                (piVar1[uVar3 - 5] = piVar1[uVar3 - 6], uVar3 == 7)))) {
              piVar1[1] = *piVar1;
            }
          }
        }
LAB_10019655:
        *piVar1 = param_1;
        DAT_1002231c = piVar1[uVar2 - 1];
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}

#undef DAT_1002231c
#undef DAT_10022990
#undef DAT_10027194

#undef DAT_10022180
#define DAT_10022180 (*(uint *)(((uintptr_t)pf_module_state + 0x1b67U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_1012c4c0
#define DAT_1012c4c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bea7U)))
#undef DAT_1012c4c4
#define DAT_1012c4c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10beabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019670
 */

void recovered_10019670(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if (((int)param_1 < 0x14) && (DAT_10022368 != 0)) {
    lVar2 = (ulong)param_1 * 0xda8;
    pcVar1 = (char *)(DAT_10022368 + lVar2);
    if ((*pcVar1 == '\x01') && ((pcVar1[2] == '\0' && (pcVar1[3] == '\0')))) {
      DAT_1012c4c0 = *(undefined4 *)(DAT_10022368 + 0x60 + lVar2);
      DAT_1012c4c4 = *(undefined4 *)(DAT_10022368 + 100 + lVar2);
      DAT_10022180 = param_1;
    }
  }
  return;
}

#undef DAT_10022180
#undef DAT_10022368
#undef DAT_1012c4c0
#undef DAT_1012c4c4

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022324
#define DAT_10022324 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
#undef DAT_100271a0
#define DAT_100271a0 (*(uint *)(((uintptr_t)pf_module_state + 0x6b87U)))
#undef DAT_100271a4
#define DAT_100271a4 (*(uint *)(((uintptr_t)pf_module_state + 0x6b8bU)))
#undef DAT_100271a8
#define DAT_100271a8 (*(int *)(((uintptr_t)pf_module_state + 0x6b8fU)))
#undef DAT_100271ac
#define DAT_100271ac (*(int *)(((uintptr_t)pf_module_state + 0x6b93U)))
#undef DAT_100271b0
#define DAT_100271b0 (*(int *)(((uintptr_t)pf_module_state + 0x6b97U)))
#undef DAT_100271c0
#define DAT_100271c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ba7U)))
#undef DAT_100272b1
#define DAT_100272b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c98U)))
#undef DAT_1012c508
#define DAT_1012c508 (*(char *)(((uintptr_t)pf_module_state + 0x10beefU)))
#undef DAT_1012c50c
#define DAT_1012c50c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef DAT_1012c510
#define DAT_1012c510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000698c
#define UINT_0000698c (*(uint *)(0x698cU))
#undef _DAT_1012c50c
#define _DAT_1012c50c (*(int *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef _DAT_1012c510
#define _DAT_1012c510 (*(uint *)(((uintptr_t)pf_module_state + 0x10bef7U)))
#undef str_10020f5b
#define str_10020f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x942U)))
#undef str_10020f6b
#define str_10020f6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x952U)))
#undef str_10020f7d
#define str_10020f7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x964U)))
#define local_3c (*(uint *)(frame + 20))
#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100196c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100196c0(uint param_1,int param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 extraout_var = 0;
  ulong extraout_RAX;
  char cVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  uint128 auVar21;

  if (0x13 < (int)param_1) {
    return 0;
  }
  if (*(char *)(DAT_10022368 + (ulong)param_1 * 0xda8) != '\x01') {
    return 0;
  }
  lVar11 = DAT_10022368 + (ulong)param_1 * 0xda8;
  uVar3 = *(uint *)(lVar11 + 0x58);
  uVar4 = (ulong)uVar3;
  iVar12 = *(int *)(lVar11 + 0x5c);
  if ((param_3 < iVar12 + 0x9c && param_2 < (int)(uVar3 + 0xce)) &&
      (iVar12 + 0x86 <= param_3 && (int)(uVar3 + 0x82) <= param_2)) {
    *(undefined4 *)(lVar11 + 0xb08) = 0;
    DAT_10022324 = 0xffffffff;
    goto LAB_10019a18;
  }
  if ((param_2 < (int)(uVar3 + 0x11c) && param_3 < iVar12 + 0x9c) &&
      ((int)(uVar3 + 0xd6) <= param_2 && iVar12 + 0x86 <= param_3)) {
    if ((*(int *)(lVar11 + 0xb08) == 1) && (DAT_1012c508 != '\0')) {
      *(undefined4 *)(lVar11 + 0xb08) = 1;
      goto LAB_10019a18;
    }
    *(undefined4 *)(lVar11 + 0xb08) = 1;
    local_3c = 0;
    uVar19 = 0;
    memset(&DAT_100271c0,0,0x105300);
    DAT_100271a0 = 0;
    DAT_1002719c = 0;
    DAT_100271a4 = 0;
    DAT_100271a8 = 0;
    DAT_100271ac = 0;
    DAT_100271b0 = 0;
    DAT_1012c508 = '\x01';
    uVar3 = Ram0000000000006800;
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0x50414d57) {
      iVar12 = Ram0000000000006804;
      if (iVar12 != 0) {
        uVar3 = Ram0000000000006808;
        uVar4 = (ulong)uVar3;
        if (0xb < uVar3) {
          uVar3 = Ram0000000000006808;
          uVar4 = (ulong)uVar3;
          if (399 < uVar3) {
            uVar3 = UINT_0000698c;
            uVar4 = 0;
            if ((code *)(ulong)uVar3 != (code *)0x0) {
              uVar3 = (*(code *)(ulong)uVar3)(&DAT_100271c0,0x300,&local_3c);
              uVar4 = CONCAT44(extraout_var,uVar3);
              if (uVar3 != 0) {
                uVar4 = (ulong)local_3c;
                DAT_1002719c = 0x300;
                if (local_3c < 0x300) {
                  DAT_1002719c = local_3c;
                }
                DAT_100271a0 = local_3c;
                if (local_3c != 0) {
                  uVar4 = (ulong)DAT_100271a4;
                  local_38 = DAT_100271a8;
                  local_34 = DAT_100271ac;
                  puVar16 = &DAT_100272b1;
                  uVar18 = 0;
                  iVar12 = DAT_100271b0;
                  do {
                    lVar20 = 0;
                    do {
                      cVar9 = puVar16[lVar20];
                      if (cVar9 == '\0') {
                        if (str_10020f5b[lVar20] == '\0') {
                          DAT_100271a4 = (int)uVar4 + 1;
                          uVar4 = (ulong)DAT_100271a4;
                          goto LAB_10019c1b;
                        }
                        break;
                      }
                      if (lVar20 == 0xf) break;
                      cVar1 = str_10020f5b[lVar20];
                      cVar6 = cVar9 + -0x20;
                      if (0x19 < (byte)(cVar9 + 0x9fU)) {
                        cVar6 = cVar9;
                      }
                      cVar9 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar9 = cVar1;
                      }
                      lVar20 = lVar20 + 1;
                    } while (cVar6 == cVar9);
                    lVar20 = 0;
                    do {
                      cVar9 = puVar16[lVar20];
                      if (cVar9 == '\0') {
                        if (str_10020f6b[lVar20] == '\0') {
                          DAT_100271a8 = local_38 + 1;
                          local_38 = DAT_100271a8;
                          goto LAB_10019c1b;
                        }
                        break;
                      }
                      if (lVar20 == 0x11) break;
                      cVar1 = str_10020f6b[lVar20];
                      cVar6 = cVar9 + -0x20;
                      if (0x19 < (byte)(cVar9 + 0x9fU)) {
                        cVar6 = cVar9;
                      }
                      cVar9 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar9 = cVar1;
                      }
                      lVar20 = lVar20 + 1;
                    } while (cVar6 == cVar9);
                    lVar20 = 0;
                    do {
                      cVar9 = puVar16[lVar20];
                      if (cVar9 == '\0') {
                        if (str_10020f7d[lVar20] == '\0') {
                          DAT_100271ac = local_34 + 1;
                          local_34 = DAT_100271ac;
                          goto LAB_10019c1b;
                        }
                        break;
                      }
                      if (lVar20 == 0x13) break;
                      cVar1 = str_10020f7d[lVar20];
                      cVar6 = cVar9 + -0x20;
                      if (0x19 < (byte)(cVar9 + 0x9fU)) {
                        cVar6 = cVar9;
                      }
                      cVar9 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar9 = cVar1;
                      }
                      lVar20 = lVar20 + 1;
                    } while (cVar6 == cVar9);
                    iVar12 = iVar12 + 1;
                    DAT_100271b0 = iVar12;
LAB_10019c1b:
                    uVar18 = uVar18 + 1;
                    puVar16 = puVar16 + 0x571;
                    uVar19 = 1;
                  } while (uVar18 != DAT_1002719c);
                  goto LAB_10019a06;
                }
              }
            }
          }
        }
      }
      uVar19 = 0;
    }
LAB_10019a06:
    *(undefined8 *)(lVar11 + 0xafc) = 0;
    *(undefined1 *)(lVar11 + 0xb04) = uVar19;
    goto LAB_10019a18;
  }
  if (*(int *)(lVar11 + 0xb08) != 1) {
    return 0;
  }
  iVar14 = iVar12 + *(int *)(lVar11 + 100) + -0x92;
  iVar7 = iVar12 + 0x114;
  if (iVar12 + 0x114 < iVar14) {
    iVar7 = iVar14;
  }
  iVar7 = iVar7 - iVar12;
  iVar14 = iVar7 + -0xee;
  uVar13 = iVar7 - 0x102;
  uVar8 = 0x12;
  if (0x25 < iVar14) {
    uVar8 = uVar13;
  }
  iVar15 = uVar3 + 0x28;
  iVar2 = uVar3 + 0x34;
  if ((((param_2 < iVar2) && (iVar15 <= param_2)) && ((int)(uVar8 + iVar12 + 0xdb) <= param_3)) &&
     (param_3 < (int)(uVar8 + iVar12 + 0xe9))) {
    uVar3 = *(uint *)(lVar11 + 0xb00);
    uVar4 = (ulong)uVar3;
    uVar8 = uVar3 - 1;
    uVar13 = uVar13 / 0x12;
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    *(uint *)(lVar11 + 0xb00) = uVar8;
    if (iVar14 < 0x26) {
      uVar13 = 1;
    }
    uVar10 = DAT_1002719c - uVar13;
    if (DAT_1002719c < uVar13) {
      uVar10 = 0;
    }
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    if (DAT_1002719c == 0) {
LAB_10019ad7:
      *(undefined8 *)(lVar11 + 0xafc) = 0;
      *(undefined1 *)(lVar11 + 0xb04) = 0;
      goto LAB_10019a18;
    }
    if ((*(char *)(lVar11 + 0xb04) != '\x01') || (DAT_1002719c <= *(uint *)(lVar11 + 0xafc))) {
      *(undefined4 *)(lVar11 + 0xafc) = 0;
      *(undefined1 *)(lVar11 + 0xb04) = 1;
    }
    if (0 < (int)uVar3) {
LAB_100198b8:
      uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
      if (uVar10 < uVar8) {
        *(uint *)(lVar11 + 0xb00) = uVar10;
        return uVar5;
      }
      return uVar5;
    }
  }
  else {
    if (((iVar2 <= param_2) || (param_2 < iVar15)) ||
       ((param_3 < (int)(uVar8 + iVar12 + 0xeb) || ((int)(uVar8 + iVar12 + 0xf9) <= param_3)))) {
      iVar17 = -0x19;
      if (0x25 < iVar14) {
        iVar17 = iVar7 + -0x12d;
      }
      iVar7 = 0x12;
      if (0x13 < iVar17) {
        iVar7 = iVar17 + -2;
      }
      if (((param_2 < iVar2) && (iVar15 <= param_2)) &&
         ((iVar12 + 0x106 <= param_3 && (param_3 < iVar12 + iVar7 + 0x106)))) {
        local_38 = param_1;
        local_34 = param_3;
        auVar21 = recovered_10017700(lVar11);
        uVar3 = PF_PART4(auVar21, 12);
        if ((PF_PART4(auVar21, 0) + PF_PART4(auVar21, 8) <= param_2 ||
            (local_34 < PF_PART4(auVar21, 4) || param_2 < PF_PART4(auVar21, 0))) ||
            (int)(PF_PART4(auVar21, 4) + uVar3) <= local_34) {
          uVar13 = uVar13 / 0x12;
          if (uVar13 < 2) {
            uVar13 = 1;
          }
          if (iVar14 < 0x26) {
            uVar13 = 1;
          }
          iVar14 = DAT_1002719c - uVar13;
          if (DAT_1002719c < uVar13) {
            iVar14 = 0;
          }
          if ((iVar14 < 1) || ((int)(iVar7 - uVar3) < 1)) {
            *(undefined4 *)(lVar11 + 0xb00) = 0;
          }
          else {
            *(int *)(lVar11 + 0xb00) =
                 (int)(iVar14 * ((local_34 - (iVar12 + (uVar3 >> 1))) + -0x106)) /
                 (int)(iVar7 - uVar3);
            recovered_100174b0(lVar11);
          }
        }
        _DAT_1012c510 = *(uint *)(lVar11 + 0xb00);
        uVar4 = (ulong)_DAT_1012c510;
        DAT_10022324 = local_38;
        _DAT_1012c50c = local_34;
      }
      else {
        uVar3 = recovered_1001ece0(lVar11,param_2,param_3);
        if ((int)uVar3 < 0) {
          return 0;
        }
        recovered_1001ee90(lVar11,uVar3);
        uVar4 = extraout_RAX;
      }
      goto LAB_10019a18;
    }
    uVar3 = *(uint *)(lVar11 + 0xb00);
    uVar4 = (ulong)uVar3;
    uVar8 = uVar3 + 1;
    uVar13 = uVar13 / 0x12;
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    *(uint *)(lVar11 + 0xb00) = uVar8;
    if (iVar14 < 0x26) {
      uVar13 = 1;
    }
    uVar10 = DAT_1002719c - uVar13;
    if (DAT_1002719c < uVar13) {
      uVar10 = 0;
    }
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    if (DAT_1002719c == 0) goto LAB_10019ad7;
    if ((*(char *)(lVar11 + 0xb04) != '\x01') || (DAT_1002719c <= *(uint *)(lVar11 + 0xafc))) {
      *(undefined4 *)(lVar11 + 0xafc) = 0;
      *(undefined1 *)(lVar11 + 0xb04) = 1;
    }
    if (-2 < (int)uVar3) goto LAB_100198b8;
  }
  *(undefined4 *)(lVar11 + 0xb00) = 0;
LAB_10019a18:
  return CONCAT71((int7)(uVar4 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022324
#undef DAT_10022368
#undef DAT_1002719c
#undef DAT_100271a0
#undef DAT_100271a4
#undef DAT_100271a8
#undef DAT_100271ac
#undef DAT_100271b0
#undef DAT_100271c0
#undef DAT_100272b1
#undef DAT_1012c508
#undef DAT_1012c50c
#undef DAT_1012c510
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000698c
#undef _DAT_1012c50c
#undef _DAT_1012c510
#undef str_10020f5b
#undef str_10020f6b
#undef str_10020f7d
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_100229a0
#define DAT_100229a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2387U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019de0
 */

long recovered_10019de0(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;

  lVar1 = 0;
  pcVar2 = &DAT_100229a0;
  iVar3 = 0;
  do {
    if (*pcVar2 == '\x01') {
      iVar4 = iVar3 * 0x5c + *(int *)(param_1 + 0x58);
      if ((param_2 < iVar4 + 0x76 &&
          (*(int *)(param_1 + 0x5c) + 0x22 <= param_3 && iVar4 + 0x22 <= param_2)) &&
          param_3 < *(int *)(param_1 + 0x5c) + 0x3c) {
        return lVar1;
      }
      iVar3 = iVar3 + 1;
    }
    lVar1 = lVar1 + 1;
    pcVar2 = pcVar2 + 0x124;
  } while (lVar1 != 0xc);
  return 0xffffffff;
}

#undef DAT_100229a0

#undef DAT_10022324
#define DAT_10022324 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_1012c50c
#define DAT_1012c50c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef DAT_1012c510
#define DAT_1012c510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bef7U)))
#undef _DAT_1012c50c
#define _DAT_1012c50c (*(int *)(((uintptr_t)pf_module_state + 0x10bef3U)))
#undef _DAT_1012c510
#define _DAT_1012c510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bef7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10019e70(uint param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  if (0x13 < (int)param_1) {
    return 0;
  }
  if (*(char *)(DAT_10022368 + (ulong)param_1 * 0xda8) == '\x01') {
    lVar8 = DAT_10022368 + (ulong)param_1 * 0xda8;
    iVar2 = *(int *)(lVar8 + 0x60) +
            (int)((ulong)((long)(*(int *)(lVar8 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
    iVar3 = (iVar2 >> 6) - (iVar2 >> 0x1f);
    iVar2 = 1;
    if (1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar7 = *(int *)(lVar8 + 0x5c);
    iVar3 = *(int *)(lVar8 + 0x58) + 0xe;
    iVar9 = *(int *)(lVar8 + 100);
    iVar10 = *(int *)(lVar8 + 0x58) + 0x1a;
    if ((((param_2 < iVar3) || (param_3 < iVar9 + iVar7 + -0x26)) || (iVar10 <= param_2)) ||
       (iVar9 + iVar7 + -0x18 <= param_3)) {
      if (((param_2 < iVar3) || (param_3 < iVar9 + iVar7 + -0x16)) ||
         ((iVar10 <= param_2 || (iVar9 + iVar7 + -8 <= param_3)))) {
        iVar6 = 0x12;
        if (0x15 < iVar9 + -0x84) {
          iVar6 = iVar9 + -0x88;
        }
        if (param_2 < iVar3) {
          return 0;
        }
        iVar3 = iVar7 + 0x5e;
        if (param_3 < iVar3) {
          return 0;
        }
        if (iVar10 <= param_2) {
          return 0;
        }
        iVar7 = iVar6 + iVar7 + 0x5e;
        if (iVar7 <= param_3) {
          return 0;
        }
        iVar1 = *(int *)(lVar8 + 0xaf8);
        iVar10 = iVar9 + -0x6a;
        iVar11 = (int)((ulong)((long)iVar10 * -0x22983759) >> 0x20) + iVar9 + -0x6a;
        iVar12 = ((int)((ulong)((long)iVar10 * 0x22983759) >> 0x20) - iVar9) + 0x6a;
        iVar9 = 1;
        if (0x49 < iVar10) {
          iVar9 = (iVar11 >> 6) - (iVar11 >> 0x1f);
        }
        iVar11 = -1;
        if (0x49 < iVar10) {
          iVar11 = (iVar12 >> 6) - (iVar12 >> 0x1f);
        }
        if (-2 < iVar1) {
          if ((iVar9 * iVar2 < iVar1 + 2) && (iVar10 = iVar2 * iVar11 + iVar1 + 2, 0 < iVar10)) {
            iVar2 = (iVar9 * iVar2 * iVar6) / (iVar1 + 2);
            iVar7 = 0x12;
            if (0x12 < iVar2) {
              iVar7 = iVar2;
            }
            if (iVar6 <= iVar7) {
              iVar7 = iVar6;
            }
            iVar3 = iVar3 + ((iVar6 - iVar7) * *(int *)(lVar8 + 0xb00)) / iVar10;
            iVar7 = iVar7 + iVar3;
          }
        }
        if ((param_3 < iVar3) || (iVar7 <= param_3)) {
          recovered_1001f010(lVar8,param_3);
        }
        DAT_10022324 = param_1;
        _DAT_1012c50c = param_3;
        _DAT_1012c510 = *(undefined4 *)(lVar8 + 0xb00);
        return CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(lVar8 + 0xb00) >> 8),1);
      }
      iVar7 = *(int *)(lVar8 + 0xb00) + iVar2;
      *(int *)(lVar8 + 0xb00) = iVar7;
      iVar3 = *(int *)(lVar8 + 0xaf8);
    }
    else {
      iVar3 = *(int *)(lVar8 + 0xaf8);
      iVar7 = *(int *)(lVar8 + 0xb00) - iVar2;
      *(int *)(lVar8 + 0xb00) = iVar7;
    }
    iVar9 = iVar9 + -0x6a;
    uVar4 = 0xffffffff;
    if (0x49 < iVar9) {
      iVar9 = (int)((ulong)((long)iVar9 * 0x22983759) >> 0x20) - iVar9;
      uVar4 = (ulong)(uint)((iVar9 >> 6) - (iVar9 >> 0x1f));
    }
    iVar2 = iVar3 + 2 + iVar2 * (int)uVar4;
    if (iVar7 < 0) {
      *(undefined4 *)(lVar8 + 0xb00) = 0;
      iVar7 = 0;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
    if ((iVar2 < 1) || (iVar2 < iVar7)) {
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      *(int *)(lVar8 + 0xb00) = iVar3;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

#undef DAT_10022324
#undef DAT_10022368
#undef DAT_1012c50c
#undef DAT_1012c510
#undef _DAT_1012c50c
#undef _DAT_1012c510

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a110
 */

int recovered_1001a110(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  if (param_1 == 0) {
    iVar3 = 0;
    iVar1 = 1;
    iVar4 = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 100) + -0x6a;
    iVar1 = 1;
    if (0x49 < iVar3) {
      iVar1 = iVar3 / 0x4a - iVar3 / -0x6c000000;
    }
    iVar3 = *(int *)(param_1 + 0xaf8) + 2;
    iVar4 = *(int *)(param_1 + 0x60) +
            (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
    iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f);
  }
  iVar6 = 1;
  if (1 < iVar4) {
    iVar6 = iVar4;
  }
  if (0 < iVar6 * iVar1) {
    iVar4 = *(int *)(param_1 + 0xb00);
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = -iVar4;
    uVar5 = 0;
    while (-iVar3 != iVar4) {
      iVar7 = (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
              *(int *)(param_1 + 0x60) + -0x26;
      uVar8 = (iVar7 >> 6) - (iVar7 >> 0x1f);
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      iVar7 = (uVar5 % uVar8) * 0x4e;
      if (*(int *)(param_1 + 0x58) + iVar7 + 0x22 <= param_2) {
        iVar2 = (uVar5 / uVar8) * 0x4a;
        if (((*(int *)(param_1 + 0x5c) + iVar2 + 0x60 <= param_3) &&
            (param_2 < iVar7 + *(int *)(param_1 + 0x58) + 0x66)) &&
           (param_3 < iVar2 + *(int *)(param_1 + 0x5c) + 0xa0)) {
          if (iVar4 == 0) {
            return -1;
          }
          if (iVar4 == -1) {
            return -2;
          }
          return -2 - iVar4;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + -1;
      if (iVar6 * iVar1 == uVar5) {
        return -1000;
      }
    }
  }
  return -1000;
}


#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#define local_108 (*(char (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a2a0
 */

void recovered_1001a2a0(char *param_1,undefined1 *param_2)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  ulong uVar5;

  pcVar4 = &DAT_10020a84;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
  }
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = uVar5 + 1;
      local_108[uVar5] = cVar3;
      if (0xef < uVar2) break;
      cVar3 = pcVar4[uVar5 + 1];
      uVar5 = uVar2;
    } while (cVar3 != '\0');
  }
  local_108[uVar2] = '\0';
  if (local_108[0] != '\0') {
    pcVar4 = local_108;
    pcVar1 = (char *)0x0;
    cVar3 = local_108[0];
    do {
      if (cVar3 == '/') {
        pcVar1 = pcVar4;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
      if (param_2 == (undefined1 *)0x0) {
        return;
      }
      if (local_108[0] == '\0') {
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar2 = uVar5 + 1;
          param_2[uVar5] = local_108[0];
          if (0xef < uVar2) break;
          local_108[0] = local_108[uVar5 + 1];
          uVar5 = uVar2;
        } while (local_108[0] != '\0');
      }
      param_2 = param_2 + uVar2;
      goto LAB_1001a36c;
    }
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
LAB_1001a36c:
  *param_2 = 0;
  return;
}

#undef DAT_10020a84
#undef local_108

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100208b0
#define DAT_100208b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef DAT_100208c0
#define DAT_100208c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef UNK_100208b8
#define UNK_100208b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef UNK_100208c8
#define UNK_100208c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef _DAT_100208b0
#define _DAT_100208b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef _DAT_100208c0
#define _DAT_100208c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef str_10021179
#define str_10021179 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb60U)))
#undef uRam00000000100208b8
#define uRam00000000100208b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef uRam00000000100208c8
#define uRam00000000100208c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#define local_40 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a380
 */

/* WARNING: Removing unreachable block (ram,0x1001a7f0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a380(byte *param_1,long param_2,int param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  void *outImage;
  byte bVar14;
  byte *pbVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;

  if ((param_1 == (byte *)0x0) || (bVar17 = *param_1, bVar17 == 0)) {
    param_1 = &DAT_10020a84;
    goto LAB_1001a45f;
  }
  uVar6 = recovered_10011700(param_1);
  if ((char)uVar6 != '\0') {
    uVar7 = recovered_10003ea0(1,str_10021179,0xf4f4f4,'\0');
    PF_PART4(local_50, 0) = 1;
    PF_PART4(local_50, 4) = (undefined4)uVar7;
    local_48 = str_10021179;
    local_40 = _DAT_100208b0;
    uStack_38 = uRam00000000100208b8;
    uVar7 = recovered_1000cbb0(&local_50);
    lVar11 = DAT_10022368;
    if ((int)uVar7 < 0) {
      return;
    }
    lVar18 = (uVar7 & 0xffffffff) * 0xda8;
    lVar8 = DAT_10022368 + lVar18 + 0x78;
    bVar17 = *param_1;
    if (bVar17 == 0) {
      uVar7 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar7 = uVar16 + 1;
        *(byte *)(lVar8 + uVar16) = bVar17;
        if (0xef < uVar7) break;
        bVar17 = param_1[uVar16 + 1];
        uVar16 = uVar7;
      } while (bVar17 != 0);
    }
    *(undefined1 *)(lVar8 + uVar7) = 0;
    *(int *)(lVar11 + 0x25c + lVar18) = param_3;
    bVar17 = *param_1;
    pbVar9 = (byte *)0x0;
    if (bVar17 != 0) {
      pbVar15 = param_1;
      do {
        if (bVar17 == 0x2f) {
          pbVar9 = pbVar15;
        }
        bVar17 = pbVar15[1];
        pbVar15 = pbVar15 + 1;
      } while (bVar17 != 0);
    }
    lVar8 = lVar11 + lVar18 + 0x18;
    pbVar15 = pbVar9 + 1;
    if (pbVar9 == (byte *)0x0) {
      pbVar15 = param_1;
    }
    bVar17 = *pbVar15;
    if (bVar17 == 0) {
      uVar7 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar7 = uVar16 + 1;
        *(byte *)(lVar8 + uVar16) = bVar17;
        if (0x3e < uVar7) break;
        bVar17 = pbVar15[uVar16 + 1];
        uVar16 = uVar7;
      } while (bVar17 != 0);
    }
    *(undefined1 *)(lVar8 + uVar7) = 0;
    outImage = (void *)(lVar11 + lVar18 + 0xb0c);
    iVar3 = Ram0000000000006800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
        (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0xe3 < uVar5))
    {
      uVar5 = UINT_000068e0;
      if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001a7a5;
      uVar5 = (*(code *)(ulong)uVar5)(param_3,(char *)param_1,outImage);
    }
    else {
      iVar3 = Ram0000000000006800;
      if (((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
         ((uVar5 = Ram0000000000006808, uVar5 < 0xc || (uVar5 = Ram0000000000006808, uVar5 < 0x5c)))
         ) goto LAB_1001a7a5;
      uVar5 = UINT_00006858;
      if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001a7a5;
      uVar5 = (*(code *)(ulong)uVar5)((char *)param_1,outImage);
    }
    if (uVar5 != 0) {
      return;
    }
    lVar11 = DAT_10022368;
LAB_1001a7a5:
    uVar6 = uRam00000000100208c8;
    puVar2 = (undefined8 *)(lVar11 + 0x261 + lVar18);
    *puVar2 = _DAT_100208c0;
    puVar2[1] = uVar6;
    *(undefined4 *)(lVar11 + 0x271 + lVar18) = 0x616d6920;
    *(undefined2 *)(lVar11 + 0x275 + lVar18) = 0x6567;
    *(undefined1 *)(lVar11 + 0x277 + lVar18) = 0;
    return;
  }
  pbVar15 = (byte *)0x0;
  pbVar9 = param_1;
  bVar14 = bVar17;
  do {
    if (bVar14 == 0x2f) {
      pbVar15 = pbVar9;
    }
    bVar14 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
  } while (bVar14 != 0);
  pbVar9 = pbVar15 + 1;
  if (pbVar15 == (byte *)0x0) {
    pbVar9 = param_1;
  }
  pbVar15 = (byte *)0x0;
  bVar14 = *pbVar9;
  while (bVar14 != 0) {
    if (bVar14 == 0x2e) {
      pbVar15 = pbVar9;
    }
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar14 = *pbVar1;
  }
  if (pbVar15 == (byte *)0x0) {
    pbVar15 = &DAT_10020a84;
  }
  bVar14 = *pbVar15;
  if (bVar14 == 0) {
    bVar14 = 0x2e;
    goto joined_r0x1001a57d;
  }
  bVar12 = bVar14 | 0x20;
  if (0x19 < (byte)(bVar14 + 0xbf)) {
    bVar12 = bVar14;
  }
  if ((bVar12 == 0x2e) && (bVar14 = pbVar15[1], bVar14 != 0)) {
    bVar12 = bVar14 | 0x20;
    if (0x19 < (byte)(bVar14 + 0xbf)) {
      bVar12 = bVar14;
    }
    if (bVar12 == 0x61) {
      bVar12 = pbVar15[2];
      bVar14 = 0x70;
      if (bVar12 != 0) {
        bVar13 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar13 = bVar12;
        }
        if (bVar13 != 0x70) goto LAB_1001a583;
        bVar12 = pbVar15[3];
        if (bVar12 != 0) {
          bVar14 = bVar12 | 0x20;
          if (0x19 < (byte)(bVar12 + 0xbf)) {
            bVar14 = bVar12;
          }
          if (bVar14 != 0x70) goto LAB_1001a583;
          bVar14 = pbVar15[4];
        }
      }
joined_r0x1001a57d:
      if (bVar14 == 0) goto LAB_1001a9d6;
    }
  }
LAB_1001a583:
  pbVar9 = (byte *)0x0;
  pbVar15 = param_1;
  bVar14 = bVar17;
  do {
    if (bVar14 == 0x2f) {
      pbVar9 = pbVar15;
    }
    bVar14 = pbVar15[1];
    pbVar15 = pbVar15 + 1;
  } while (bVar14 != 0);
  pbVar15 = pbVar9 + 1;
  if (pbVar9 == (byte *)0x0) {
    pbVar15 = param_1;
  }
  pbVar9 = (byte *)0x0;
  bVar14 = *pbVar15;
  while (bVar14 != 0) {
    if (bVar14 == 0x2e) {
      pbVar9 = pbVar15;
    }
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar14 = *pbVar1;
  }
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = &DAT_10020a84;
  }
  bVar14 = *pbVar9;
  if (bVar14 == 0) {
    bVar12 = 0x2e;
    bVar14 = 0;
LAB_1001a7ff:
    if (bVar14 == bVar12) goto LAB_1001a9d6;
  }
  else {
    bVar12 = bVar14 | 0x20;
    if (0x19 < (byte)(bVar14 + 0xbf)) {
      bVar12 = bVar14;
    }
    if (bVar12 == 0x2e) {
      bVar14 = pbVar9[1];
      if (bVar14 == 0) {
        bVar12 = 0x62;
        bVar14 = 0;
      }
      else {
        bVar12 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar12 = bVar14;
        }
        if (bVar12 != 0x62) goto LAB_1001a807;
        bVar14 = pbVar9[2];
        if (bVar14 == 0) {
          bVar12 = 0x69;
          bVar14 = 0;
        }
        else {
          bVar12 = bVar14 | 0x20;
          if (0x19 < (byte)(bVar14 + 0xbf)) {
            bVar12 = bVar14;
          }
          if (bVar12 != 0x69) goto LAB_1001a807;
          bVar14 = pbVar9[3];
          if (bVar14 == 0) {
            bVar12 = 0x6e;
            bVar14 = 0;
          }
          else {
            bVar12 = bVar14 | 0x20;
            if (0x19 < (byte)(bVar14 + 0xbf)) {
              bVar12 = bVar14;
            }
            if (bVar12 != 0x6e) goto LAB_1001a807;
            bVar14 = pbVar9[4];
            bVar12 = 0;
          }
        }
      }
      goto LAB_1001a7ff;
    }
  }
LAB_1001a807:
  pbVar9 = (byte *)0x0;
  pbVar15 = param_1;
  bVar14 = bVar17;
  do {
    if (bVar14 == 0x2f) {
      pbVar9 = pbVar15;
    }
    bVar14 = pbVar15[1];
    pbVar15 = pbVar15 + 1;
  } while (bVar14 != 0);
  pbVar15 = pbVar9 + 1;
  if (pbVar9 == (byte *)0x0) {
    pbVar15 = param_1;
  }
  pbVar9 = (byte *)0x0;
  bVar14 = *pbVar15;
  while (bVar14 != 0) {
    if (bVar14 == 0x2e) {
      pbVar9 = pbVar15;
    }
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar14 = *pbVar1;
  }
  if (pbVar9 == (byte *)0x0) {
    pbVar9 = &DAT_10020a84;
  }
  bVar14 = *pbVar9;
  if (bVar14 == 0) {
    bVar12 = 0x2e;
    bVar14 = 0;
LAB_1001a8d2:
    if (bVar14 == bVar12) goto LAB_1001a9d6;
  }
  else {
    bVar12 = bVar14 | 0x20;
    if (0x19 < (byte)(bVar14 + 0xbf)) {
      bVar12 = bVar14;
    }
    if (bVar12 == 0x2e) {
      bVar14 = pbVar9[1];
      if (bVar14 == 0) {
        bVar12 = 0x77;
        bVar14 = 0;
      }
      else {
        bVar12 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar12 = bVar14;
        }
        if (bVar12 != 0x77) goto LAB_1001a8da;
        bVar14 = pbVar9[2];
        if (bVar14 == 0) {
          bVar12 = 0x73;
          bVar14 = 0;
        }
        else {
          bVar12 = bVar14 | 0x20;
          if (0x19 < (byte)(bVar14 + 0xbf)) {
            bVar12 = bVar14;
          }
          if (bVar12 != 0x73) goto LAB_1001a8da;
          bVar14 = pbVar9[3];
          bVar12 = 0;
        }
      }
      goto LAB_1001a8d2;
    }
  }
LAB_1001a8da:
  pbVar15 = (byte *)0x0;
  pbVar9 = param_1;
  do {
    if (bVar17 == 0x2f) {
      pbVar15 = pbVar9;
    }
    bVar17 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
  } while (bVar17 != 0);
  pbVar9 = pbVar15 + 1;
  if (pbVar15 == (byte *)0x0) {
    pbVar9 = param_1;
  }
  pbVar15 = (byte *)0x0;
  bVar17 = *pbVar9;
  while (bVar17 != 0) {
    if (bVar17 == 0x2e) {
      pbVar15 = pbVar9;
    }
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar17 = *pbVar1;
  }
  pbVar9 = &DAT_10020a84;
  if (pbVar15 != (byte *)0x0) {
    pbVar9 = pbVar15;
  }
  bVar17 = *pbVar9;
  if (bVar17 == 0) {
    bVar14 = 0x2e;
    bVar17 = 0;
LAB_1001a9bc:
    if (bVar17 == bVar14) goto LAB_1001a9d6;
  }
  else {
    bVar14 = bVar17 | 0x20;
    if (0x19 < (byte)(bVar17 + 0xbf)) {
      bVar14 = bVar17;
    }
    if (bVar14 == 0x2e) {
      bVar17 = pbVar9[1];
      if (bVar17 == 0) {
        bVar14 = 0x6c;
        bVar17 = 0;
      }
      else {
        bVar14 = bVar17 | 0x20;
        if (0x19 < (byte)(bVar17 + 0xbf)) {
          bVar14 = bVar17;
        }
        if (bVar14 != 0x6c) goto LAB_1001a9c0;
        bVar17 = pbVar9[2];
        if (bVar17 == 0) {
          bVar14 = 0x75;
          bVar17 = 0;
        }
        else {
          bVar14 = bVar17 | 0x20;
          if (0x19 < (byte)(bVar17 + 0xbf)) {
            bVar14 = bVar17;
          }
          if (bVar14 != 0x75) goto LAB_1001a9c0;
          bVar17 = pbVar9[3];
          if (bVar17 == 0) {
            bVar14 = 0x61;
            bVar17 = 0;
          }
          else {
            bVar14 = bVar17 | 0x20;
            if (0x19 < (byte)(bVar17 + 0xbf)) {
              bVar14 = bVar17;
            }
            if (bVar14 != 0x61) goto LAB_1001a9c0;
            bVar17 = pbVar9[4];
            bVar14 = 0;
          }
        }
      }
      goto LAB_1001a9bc;
    }
  }
LAB_1001a9c0:
  bVar4 = recovered_10010e60((char *)param_1,((uintptr_t)pf_module_state + 0xb5cU));
  if (bVar4) {
LAB_1001a9d6:
    recovered_1001e360(param_1,param_3);
    return;
  }
  if (param_2 == 0) {
    memset(&local_50,0,0xc);
    uVar5 = recovered_1000c0f0(param_3,(char *)param_1,&local_50);
    if ((uVar5 != 0) && (((ulong)local_48 & 2) != 0)) {
      recovered_1000c9f0((char *)param_1,param_3);
      return;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x1ec) == 2) || ((*(byte *)(param_2 + 0x1e8) & 2) != 0)) {
LAB_1001a45f:
      recovered_1000c9f0((char *)param_1,param_3);
      return;
    }
    pcVar10 = recovered_10011970((char *)param_1);
    if (*pcVar10 == '\0') goto LAB_1001a9d6;
  }
  recovered_1001ac60((char *)param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100208b0
#undef DAT_100208c0
#undef DAT_10020a84
#undef DAT_10022368
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006858
#undef UINT_000068e0
#undef UNK_100208b8
#undef UNK_100208c8
#undef _DAT_100208b0
#undef _DAT_100208c0
#undef str_10021179
#undef uRam00000000100208b8
#undef uRam00000000100208c8
#undef local_40
#undef uStack_38
#undef local_50
#undef local_48

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef str_10020c2f
#define str_10020c2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x616U)))
#define local_818 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aa70
 */

void recovered_1001aa70(void)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;

  local_818[0] = '\0';
  lVar5 = 0;
  lVar3 = DAT_10022988;
  do {
    if (((*(char *)(lVar3 + lVar5) == '\x01') && (*(int *)(lVar3 + 4 + lVar5) == 5)) &&
       (*(char *)(lVar3 + 1 + lVar5) == '\x01')) {
      recovered_1001c750(local_818,*(int *)(lVar3 + 0x124 + lVar5),(char *)(lVar3 + lVar5 + 0x30));
      lVar3 = DAT_10022988;
    }
    lVar5 = lVar5 + 300;
  } while (lVar5 != 0x1518);
  uVar4 = strlen(local_818);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x3b < uVar2)))) {
    uVar2 = UINT_00006838;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10020c2f,local_818,(uint)uVar4);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022988
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef str_10020c2f
#undef local_818

#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ab50
 */

void recovered_1001ab50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  int iVar3;
  void *dst;
  long lVar4;
  long lVar5;

  lVar5 = 0;
  lVar4 = 0;
  lVar1 = DAT_10022368;
  do {
    if ((*(char *)(lVar1 + lVar5) == '\x01') && (*(int *)(lVar1 + 0x14 + lVar5) == param_1)) {
      recovered_1001e9a0((uint)lVar4,'\x01');
      lVar1 = DAT_10022368;
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 0xda8;
  } while (lVar4 != 0x14);
  uVar2 = 0;
  lVar1 = DAT_10022988;
  do {
    if ((*(char *)(lVar1 + uVar2 * 300) == '\x01') &&
       (dst = (void *)(uVar2 * 300 + lVar1), *(char *)((long)dst + 1) == '\0')) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        if (*(char *)(DAT_10022368 + lVar4) == '\x01') {
          iVar3 = iVar3 + (uint)(uVar2 == *(uint *)(DAT_10022368 + 0x14 + lVar4));
        }
        if (*(char *)(DAT_10022368 + 0xda8 + lVar4) == '\x01') {
          iVar3 = iVar3 + (uint)(uVar2 == *(uint *)(DAT_10022368 + 0xdbc + lVar4));
        }
        lVar4 = lVar4 + 0x1b50;
      } while (lVar4 != 0x11120);
      if (iVar3 == 0) {
        memset(dst,0,300);
        lVar1 = DAT_10022988;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x12);
  return;
}

#undef DAT_10022368
#undef DAT_10022988

#undef DAT_100208d0
#define DAT_100208d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100210e6
#define DAT_100210e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacdU)))
#undef DAT_100210fe
#define DAT_100210fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae5U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef UNK_100208d8
#define UNK_100208d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2bfU)))
#undef _DAT_100208d0
#define _DAT_100208d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef str_100210eb
#define str_100210eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad2U)))
#undef str_100210f7
#define str_100210f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadeU)))
#undef uRam00000000100208d8
#define uRam00000000100208d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2bfU)))
#define local_60 (*(undefined4 *)(frame + 16))
#define local_5c (*(undefined4 *)(frame + 20))
#define local_58 (*(char * *)(frame + 24))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define local_50 (*(undefined8 *)(frame + 32))
#define local_40 (*(long *)(frame + 48))
#define local_38 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ac60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001ac60(char *param_1,long param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;

  uVar2 = recovered_10003ea0(2,&DAT_100210e6,0xd6d6d6,'\0');
  local_60 = 2;
  local_5c = (undefined4)uVar2;
  local_58 = str_100210eb;
  local_50 = _DAT_100208d0;
  uStack_48 = uRam00000000100208d8;
  uVar2 = recovered_1000cbb0((undefined8 *)&local_60);
  if ((int)uVar2 < 0) {
    return;
  }
  if (param_1 == (char *)0x0) {
    pcVar10 = &DAT_10020a84;
    pcVar13 = (char *)0x0;
  }
  else {
    cVar7 = *param_1;
    pcVar13 = (char *)0x0;
    if (cVar7 != '\0') {
      pcVar10 = param_1;
      do {
        if (cVar7 == '/') {
          pcVar13 = pcVar10;
        }
        cVar7 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    pcVar10 = param_1;
  }
  pcVar9 = pcVar13 + 1;
  if (pcVar13 == (char *)0x0) {
    pcVar9 = pcVar10;
  }
  cVar7 = *pcVar9;
  if (cVar7 == '\0') {
    pcVar13 = (char *)0x0;
  }
  else {
    pcVar13 = (char *)0x0;
    do {
      if (cVar7 == '.') {
        pcVar13 = pcVar9;
      }
      cVar7 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
    } while (cVar7 != '\0');
  }
  pcVar10 = &DAT_10020a84;
  if (pcVar13 == (char *)0x0) {
    pcVar13 = &DAT_10020a84;
  }
  lVar11 = (uVar2 & 0xffffffff) * 0xda8;
  lVar1 = DAT_10022368 + lVar11;
  pcVar9 = (char *)(lVar1 + 0x261);
  *(undefined1 *)(DAT_10022368 + 0x261 + lVar11) = 0;
  local_40 = param_2;
  uVar2 = strlen(pcVar9);
  if (uVar2 < 0x800) {
    lVar5 = 0x7ff;
    if (uVar2 != 0x7ff) {
      pcVar9[uVar2] = 'N';
      if (uVar2 < 0x7fe) {
        *(undefined1 *)(lVar1 + 0x262 + uVar2) = 0x61;
        if (uVar2 == 0x7fd) {
          lVar5 = 0x7ff;
        }
        else {
          *(undefined1 *)(lVar1 + 0x263 + uVar2) = 0x6d;
          if (uVar2 < 0x7fc) {
            *(undefined1 *)(lVar1 + 0x264 + uVar2) = 0x65;
            if (uVar2 == 0x7fb) {
              lVar5 = 0x7ff;
            }
            else {
              *(undefined1 *)(lVar1 + 0x265 + uVar2) = 0x3a;
              if (uVar2 < 0x7fa) {
                lVar5 = uVar2 + 6;
                *(undefined1 *)(lVar1 + 0x266 + uVar2) = 0x20;
              }
              else {
                lVar5 = uVar2 + 5;
              }
            }
          }
          else {
            lVar5 = uVar2 + 3;
          }
        }
      }
      else {
        lVar5 = uVar2 + 1;
      }
    }
    pcVar9[lVar5] = '\0';
  }
  pcVar9 = (char *)(DAT_10022368 + lVar11 + 0x261);
  if (param_1 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    cVar7 = *param_1;
    pcVar3 = (char *)0x0;
    if (cVar7 != '\0') {
      pcVar10 = param_1;
      do {
        if (cVar7 == '/') {
          pcVar3 = pcVar10;
        }
        cVar7 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    pcVar10 = param_1;
  }
  pcVar12 = pcVar3 + 1;
  if (pcVar3 == (char *)0x0) {
    pcVar12 = pcVar10;
  }
  local_38 = lVar11;
  uVar2 = strlen(pcVar9);
  lVar1 = local_38;
  if (uVar2 < 0x800) {
    if (uVar2 != 0x7ff) {
      cVar7 = *pcVar12;
      uVar4 = uVar2;
      while (uVar2 = uVar4, cVar7 != '\0') {
        pcVar12 = pcVar12 + 1;
        pcVar9[uVar4] = cVar7;
        uVar2 = uVar4 + 1;
        if (0x7fd < uVar4) break;
        uVar4 = uVar2;
        cVar7 = *pcVar12;
      }
    }
    pcVar9[uVar2] = '\0';
  }
  lVar11 = DAT_10022368 + local_38;
  pcVar10 = (char *)(lVar11 + 0x261);
  uVar2 = strlen(pcVar10);
  if (uVar2 < 0x800) {
    lVar5 = 0x7ff;
    if (uVar2 != 0x7ff) {
      pcVar10[uVar2] = '\n';
      if (uVar2 < 0x7fe) {
        *(undefined1 *)(lVar11 + 0x262 + uVar2) = 0x50;
        if (uVar2 == 0x7fd) {
          lVar5 = 0x7ff;
        }
        else {
          *(undefined1 *)(lVar11 + 0x263 + uVar2) = 0x61;
          if (uVar2 < 0x7fc) {
            *(undefined1 *)(lVar11 + 0x264 + uVar2) = 0x74;
            if (uVar2 == 0x7fb) {
              lVar5 = 0x7ff;
            }
            else {
              *(undefined1 *)(lVar11 + 0x265 + uVar2) = 0x68;
              if (uVar2 < 0x7fa) {
                *(undefined1 *)(lVar11 + 0x266 + uVar2) = 0x3a;
                if (uVar2 == 0x7f9) {
                  lVar5 = 0x7ff;
                }
                else {
                  *(undefined1 *)(lVar11 + 0x267 + uVar2) = 0x20;
                  if (uVar2 < 0x7f8) {
                    lVar5 = uVar2 + 8;
                    *(undefined1 *)(lVar11 + 0x268 + uVar2) = 0x2f;
                  }
                  else {
                    lVar5 = uVar2 + 7;
                  }
                }
              }
              else {
                lVar5 = uVar2 + 5;
              }
            }
          }
          else {
            lVar5 = uVar2 + 3;
          }
        }
      }
      else {
        lVar5 = uVar2 + 1;
      }
    }
    pcVar10[lVar5] = '\0';
  }
  pcVar10 = (char *)(DAT_10022368 + 0x261 + lVar1);
  pcVar9 = &DAT_10020a84;
  if (param_1 != (char *)0x0) {
    pcVar9 = param_1;
  }
  uVar2 = strlen(pcVar10);
  if (uVar2 < 0x800) {
    cVar7 = *pcVar9;
    uVar4 = uVar2;
    if (uVar2 != 0x7ff && cVar7 != '\0') {
      do {
        pcVar9 = pcVar9 + 1;
        pcVar10[uVar4] = cVar7;
        uVar2 = uVar4 + 1;
        if (0x7fd < uVar4) break;
        cVar7 = *pcVar9;
        uVar4 = uVar2;
      } while (cVar7 != '\0');
    }
    pcVar10[uVar2] = '\0';
  }
  lVar11 = DAT_10022368 + lVar1;
  pcVar10 = (char *)(lVar11 + 0x261);
  uVar2 = strlen(pcVar10);
  lVar5 = local_40;
  if (uVar2 < 0x800) {
    lVar6 = 0x7ff;
    if (uVar2 != 0x7ff) {
      pcVar10[uVar2] = '\n';
      if (uVar2 < 0x7fe) {
        *(undefined1 *)(lVar11 + 0x262 + uVar2) = 0x54;
        if (uVar2 == 0x7fd) {
          lVar6 = 0x7ff;
        }
        else {
          *(undefined1 *)(lVar11 + 0x263 + uVar2) = 0x79;
          if (uVar2 < 0x7fc) {
            *(undefined1 *)(lVar11 + 0x264 + uVar2) = 0x70;
            if (uVar2 == 0x7fb) {
              lVar6 = 0x7ff;
            }
            else {
              *(undefined1 *)(lVar11 + 0x265 + uVar2) = 0x65;
              if (uVar2 < 0x7fa) {
                *(undefined1 *)(lVar11 + 0x266 + uVar2) = 0x3a;
                if (uVar2 == 0x7f9) {
                  lVar6 = 0x7ff;
                }
                else {
                  lVar6 = uVar2 + 7;
                  *(undefined1 *)(lVar11 + 0x267 + uVar2) = 0x20;
                }
              }
              else {
                lVar6 = uVar2 + 5;
              }
            }
          }
          else {
            lVar6 = uVar2 + 3;
          }
        }
      }
      else {
        lVar6 = uVar2 + 1;
      }
    }
    pcVar10[lVar6] = '\0';
  }
  pcVar9 = (char *)(DAT_10022368 + lVar1 + 0x261);
  pcVar10 = &DAT_100210fe;
  if ((local_40 != 0) &&
     ((*(int *)(local_40 + 0x1ec) == 2 || ((*(uint *)(local_40 + 0x1e8) & 2) != 0)))) {
    pcVar10 = str_100210f7;
  }
  uVar2 = strlen(pcVar9);
  if (uVar2 < 0x800) {
    cVar7 = *pcVar10;
    uVar4 = uVar2;
    if (uVar2 != 0x7ff && cVar7 != '\0') {
      do {
        pcVar10 = pcVar10 + 1;
        pcVar9[uVar4] = cVar7;
        uVar2 = uVar4 + 1;
        if (0x7fd < uVar4) break;
        cVar7 = *pcVar10;
        uVar4 = uVar2;
      } while (cVar7 != '\0');
    }
    pcVar9[uVar2] = '\0';
  }
  if (*pcVar13 != '\0') {
    pcVar10 = (char *)(DAT_10022368 + lVar1 + 0x261);
    uVar2 = strlen(pcVar10);
    if (uVar2 < 0x800) {
      if (uVar2 != 0x7ff) {
        cVar7 = *pcVar13;
        uVar4 = uVar2;
        while (uVar2 = uVar4, cVar7 != '\0') {
          pcVar13 = pcVar13 + 1;
          pcVar10[uVar4] = cVar7;
          uVar2 = uVar4 + 1;
          if (0x7fd < uVar4) break;
          uVar4 = uVar2;
          cVar7 = *pcVar13;
        }
      }
      pcVar10[uVar2] = '\0';
    }
  }
  lVar11 = DAT_10022368 + lVar1;
  pcVar13 = (char *)(lVar11 + 0x261);
  uVar2 = strlen(pcVar13);
  if (uVar2 < 0x800) {
    lVar6 = 0x7ff;
    if (uVar2 != 0x7ff) {
      pcVar13[uVar2] = '\n';
      if (uVar2 < 0x7fe) {
        *(undefined1 *)(lVar11 + 0x262 + uVar2) = 0x53;
        if (uVar2 == 0x7fd) {
          lVar6 = 0x7ff;
        }
        else {
          *(undefined1 *)(lVar11 + 0x263 + uVar2) = 0x69;
          if (uVar2 < 0x7fc) {
            *(undefined1 *)(lVar11 + 0x264 + uVar2) = 0x7a;
            if (uVar2 == 0x7fb) {
              lVar6 = 0x7ff;
            }
            else {
              *(undefined1 *)(lVar11 + 0x265 + uVar2) = 0x65;
              if (uVar2 < 0x7fa) {
                *(undefined1 *)(lVar11 + 0x266 + uVar2) = 0x3a;
                if (uVar2 == 0x7f9) {
                  lVar6 = 0x7ff;
                }
                else {
                  lVar6 = uVar2 + 7;
                  *(undefined1 *)(lVar11 + 0x267 + uVar2) = 0x20;
                }
              }
              else {
                lVar6 = uVar2 + 5;
              }
            }
          }
          else {
            lVar6 = uVar2 + 3;
          }
        }
      }
      else {
        lVar6 = uVar2 + 1;
      }
    }
    pcVar13[lVar6] = '\0';
  }
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar5 + 0x1e4);
  }
  recovered_100164d0((char *)(DAT_10022368 + lVar1 + 0x261),0x800,uVar8);
  lVar1 = DAT_10022368 + lVar1;
  pcVar13 = (char *)(lVar1 + 0x261);
  uVar2 = strlen(pcVar13);
  if (0x7ff < uVar2) {
    return;
  }
  lVar11 = 0x7ff;
  if (uVar2 != 0x7ff) {
    pcVar13[uVar2] = ' ';
    if (uVar2 < 0x7fe) {
      *(undefined1 *)(lVar1 + 0x262 + uVar2) = 0x62;
      if (uVar2 == 0x7fd) {
        lVar11 = 0x7ff;
      }
      else {
        *(undefined1 *)(lVar1 + 0x263 + uVar2) = 0x79;
        if (uVar2 < 0x7fc) {
          *(undefined1 *)(lVar1 + 0x264 + uVar2) = 0x74;
          if (uVar2 == 0x7fb) {
            lVar11 = 0x7ff;
          }
          else {
            *(undefined1 *)(lVar1 + 0x265 + uVar2) = 0x65;
            if (uVar2 < 0x7fa) {
              lVar11 = uVar2 + 6;
              *(undefined1 *)(lVar1 + 0x266 + uVar2) = 0x73;
            }
            else {
              lVar11 = uVar2 + 5;
            }
          }
        }
        else {
          lVar11 = uVar2 + 3;
        }
      }
    }
    else {
      lVar11 = uVar2 + 1;
    }
  }
  pcVar13[lVar11] = '\0';
  return;
}

#undef DAT_100208d0
#undef DAT_10020a84
#undef DAT_100210e6
#undef DAT_100210fe
#undef DAT_10022368
#undef UNK_100208d8
#undef _DAT_100208d0
#undef str_100210eb
#undef str_100210f7
#undef uRam00000000100208d8
#undef local_60
#undef local_5c
#undef local_58
#undef uStack_48
#undef local_50
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022314
#define DAT_10022314 (*(int *)(((uintptr_t)pf_module_state + 0x1cfbU)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10022419
#define DAT_10022419 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e00U)))
#undef DAT_10025698
#define DAT_10025698 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x507fU)))
#undef DAT_100256a8
#define DAT_100256a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x508fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef UNK_100256a0
#define UNK_100256a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5087U)))
#undef _DAT_100256a8
#define _DAT_100256a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x508fU)))
#undef str_10022220
#define str_10022220 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c07U)))
#undef uRam00000000100256a0
#define uRam00000000100256a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5087U)))
#define local_28 (*(void * *)(frame + 24))
#define local_18 (*(undefined8 *)(frame + 40))
#define uStack_20 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001b350(int param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;

  memset(&local_28,0,0x18);
  iVar4 = Ram0000000000006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0xe3 < uVar3)) {
    uVar3 = UINT_000068e0;
    if ((code *)(ulong)uVar3 == (code *)0x0) {
      return;
    }
    uVar3 = (*(code *)(ulong)uVar3)(param_1,&DAT_10022418,&local_28);
  }
  else {
    iVar4 = Ram0000000000006800;
    if (iVar4 != 0x50414d57) {
      return;
    }
    iVar4 = Ram0000000000006804;
    if (iVar4 == 0) {
      return;
    }
    uVar3 = Ram0000000000006808;
    if (uVar3 < 0xc) {
      return;
    }
    uVar3 = Ram0000000000006808;
    if (uVar3 < 0x5c) {
      return;
    }
    uVar3 = UINT_00006858;
    if ((code *)(ulong)uVar3 == (code *)0x0) {
      return;
    }
    uVar3 = (*(code *)(ulong)uVar3)(&DAT_10022418,&local_28);
  }
  if (uVar3 != 0) {
    if (((DAT_10025698 != (void *)0x0) && (iVar4 = Ram0000000000006800, iVar4 == 0x50414d57)) &&
       ((iVar4 = Ram0000000000006804, iVar4 != 0 &&
        ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x53 < uVar3))))
       )) {
      uVar3 = UINT_00006850;
      if ((code *)(ulong)uVar3 != (code *)0x0) {
        (*(code *)(ulong)uVar3)(DAT_10025698);
      }
    }
    uVar6 = 0;
    memset(&DAT_10025698,0,0x18);
    DAT_10025698 = local_28;
    uRam00000000100256a0 = uStack_20;
    _DAT_100256a8 = local_18;
    if (DAT_10022418 != '\0') {
      uVar5 = 0;
      cVar1 = DAT_10022418;
      do {
        uVar6 = uVar5 + 1;
        str_10022220[uVar5] = cVar1;
        if (0xef < uVar6) break;
        cVar1 = (&DAT_10022419)[uVar5];
        uVar5 = uVar6;
      } while (cVar1 != '\0');
    }
    str_10022220[uVar6] = '\0';
    bVar2 = recovered_1001c870(DAT_10022314);
    if (!bVar2) {
      iVar4 = recovered_10004540();
      recovered_1001c870(iVar4);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022314
#undef DAT_10022418
#undef DAT_10022419
#undef DAT_10025698
#undef DAT_100256a8
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef UNK_100256a0
#undef _DAT_100256a8
#undef str_10022220
#undef uRam00000000100256a0
#undef local_28
#undef local_18
#undef uStack_20

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10027040
#define DAT_10027040 (*(void * *)(((uintptr_t)pf_module_state + 0x6a27U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006868
#define UINT_00006868 (*(uint *)(0x6868U))
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
#undef UINT_000068e4
#define UINT_000068e4 (*(uint *)(0x68e4U))
#undef ram0x10020950
#define ram0x10020950 (*(float *)(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10020940
#define str_10020940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x327U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001b510(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  if ((DAT_10022418 != '\0') && (bVar3 = recovered_1001cef0((byte *)&DAT_10022418), bVar3)) {
    if (DAT_10027040 != (void *)0x0) {
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x7b < uVar2)
         ) {
        uVar2 = UINT_00006878;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(DAT_10027040);
        }
      }
      DAT_10027040 = (void *)0x0;
    }
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xe7 < uVar2))))
    {
      uVar2 = UINT_000068e4;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        DAT_10027040 = (*(code *)(ulong)uVar2)(param_1,&DAT_10022418,ram0x10020950);
        return;
      }
    }
    else {
      iVar1 = Ram0000000000006800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x6b < uVar2)))
         ) {
        uVar2 = UINT_00006868;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          DAT_10027040 = (*(code *)(ulong)uVar2)(&DAT_10022418,ram0x10020950);
          return;
        }
      }
    }
    DAT_10027040 = (void *)0x0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022418
#undef DAT_10027040
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006868
#undef UINT_00006878
#undef UINT_000068e4
#undef ram0x10020950
#undef str_10020940

#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_100229a0
#define DAT_100229a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_100229c9
#define DAT_100229c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23b0U)))
#undef DAT_10022abc
#define DAT_10022abc (*(int *)(((uintptr_t)pf_module_state + 0x24a3U)))
#undef DAT_10022ac4
#define DAT_10022ac4 (*(char *)(((uintptr_t)pf_module_state + 0x24abU)))
#undef DAT_10022aed
#define DAT_10022aed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef DAT_10022be0
#define DAT_10022be0 (*(int *)(((uintptr_t)pf_module_state + 0x25c7U)))
#undef DAT_10022be8
#define DAT_10022be8 (*(char *)(((uintptr_t)pf_module_state + 0x25cfU)))
#undef DAT_10022c11
#define DAT_10022c11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25f8U)))
#undef DAT_10022d04
#define DAT_10022d04 (*(int *)(((uintptr_t)pf_module_state + 0x26ebU)))
#undef DAT_10022d0c
#define DAT_10022d0c (*(char *)(((uintptr_t)pf_module_state + 0x26f3U)))
#undef DAT_10022d35
#define DAT_10022d35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271cU)))
#undef DAT_10022e28
#define DAT_10022e28 (*(int *)(((uintptr_t)pf_module_state + 0x280fU)))
#undef DAT_10022e30
#define DAT_10022e30 (*(char *)(((uintptr_t)pf_module_state + 0x2817U)))
#undef DAT_10022e59
#define DAT_10022e59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2840U)))
#undef DAT_10022f4c
#define DAT_10022f4c (*(int *)(((uintptr_t)pf_module_state + 0x2933U)))
#undef DAT_10022f54
#define DAT_10022f54 (*(char *)(((uintptr_t)pf_module_state + 0x293bU)))
#undef DAT_10022f7d
#define DAT_10022f7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2964U)))
#undef DAT_10023070
#define DAT_10023070 (*(int *)(((uintptr_t)pf_module_state + 0x2a57U)))
#undef DAT_10023078
#define DAT_10023078 (*(char *)(((uintptr_t)pf_module_state + 0x2a5fU)))
#undef DAT_100230a1
#define DAT_100230a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a88U)))
#undef DAT_10023194
#define DAT_10023194 (*(int *)(((uintptr_t)pf_module_state + 0x2b7bU)))
#undef DAT_1002319c
#define DAT_1002319c (*(char *)(((uintptr_t)pf_module_state + 0x2b83U)))
#undef DAT_100231c5
#define DAT_100231c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bacU)))
#undef DAT_100232b8
#define DAT_100232b8 (*(int *)(((uintptr_t)pf_module_state + 0x2c9fU)))
#undef DAT_100232c0
#define DAT_100232c0 (*(char *)(((uintptr_t)pf_module_state + 0x2ca7U)))
#undef DAT_100232e9
#define DAT_100232e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cd0U)))
#undef DAT_100233dc
#define DAT_100233dc (*(int *)(((uintptr_t)pf_module_state + 0x2dc3U)))
#undef DAT_100233e4
#define DAT_100233e4 (*(char *)(((uintptr_t)pf_module_state + 0x2dcbU)))
#undef DAT_1002340d
#define DAT_1002340d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2df4U)))
#undef DAT_10023500
#define DAT_10023500 (*(int *)(((uintptr_t)pf_module_state + 0x2ee7U)))
#undef DAT_10023508
#define DAT_10023508 (*(char *)(((uintptr_t)pf_module_state + 0x2eefU)))
#undef DAT_10023531
#define DAT_10023531 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
#undef DAT_10023624
#define DAT_10023624 (*(int *)(((uintptr_t)pf_module_state + 0x300bU)))
#undef DAT_1002362c
#define DAT_1002362c (*(char *)(((uintptr_t)pf_module_state + 0x3013U)))
#undef DAT_10023655
#define DAT_10023655 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x303cU)))
#undef DAT_10023748
#define DAT_10023748 (*(int *)(((uintptr_t)pf_module_state + 0x312fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b640
 */

void recovered_1001b640(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;

  if ((DAT_100229a0 == '\x01') && (DAT_10022abc == param_1)) {
    iVar1 = strcmp(&DAT_100229c9,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 0;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10022ac4 == '\x01') && (DAT_10022be0 == param_1)) {
    iVar1 = strcmp(&DAT_10022aed,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 1;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10022be8 == '\x01') && (DAT_10022d04 == param_1)) {
    iVar1 = strcmp(&DAT_10022c11,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 2;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10022d0c == '\x01') && (DAT_10022e28 == param_1)) {
    iVar1 = strcmp(&DAT_10022d35,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 3;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10022e30 == '\x01') && (DAT_10022f4c == param_1)) {
    iVar1 = strcmp(&DAT_10022e59,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 4;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10022f54 == '\x01') && (DAT_10023070 == param_1)) {
    iVar1 = strcmp(&DAT_10022f7d,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 5;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10023078 == '\x01') && (DAT_10023194 == param_1)) {
    iVar1 = strcmp(&DAT_100230a1,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 6;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_1002319c == '\x01') && (DAT_100232b8 == param_1)) {
    iVar1 = strcmp(&DAT_100231c5,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 7;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_100232c0 == '\x01') && (DAT_100233dc == param_1)) {
    iVar1 = strcmp(&DAT_100232e9,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 8;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_100233e4 == '\x01') && (DAT_10023500 == param_1)) {
    iVar1 = strcmp(&DAT_1002340d,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 9;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_10023508 == '\x01') && (DAT_10023624 == param_1)) {
    iVar1 = strcmp(&DAT_10023531,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 10;
      goto LAB_1001b8a6;
    }
  }
  if ((DAT_1002362c == '\x01') && (DAT_10023748 == param_1)) {
    iVar1 = strcmp(&DAT_10023655,&DAT_10022418);
    if (iVar1 == 0) {
      lVar2 = 0xb;
LAB_1001b8a6:
      memset(&DAT_100229a0 + lVar2 * 0x124,0,0x124);
      recovered_1001d610();
      return;
    }
  }
  return;
}

#undef DAT_10022418
#undef DAT_100229a0
#undef DAT_100229c9
#undef DAT_10022abc
#undef DAT_10022ac4
#undef DAT_10022aed
#undef DAT_10022be0
#undef DAT_10022be8
#undef DAT_10022c11
#undef DAT_10022d04
#undef DAT_10022d0c
#undef DAT_10022d35
#undef DAT_10022e28
#undef DAT_10022e30
#undef DAT_10022e59
#undef DAT_10022f4c
#undef DAT_10022f54
#undef DAT_10022f7d
#undef DAT_10023070
#undef DAT_10023078
#undef DAT_100230a1
#undef DAT_10023194
#undef DAT_1002319c
#undef DAT_100231c5
#undef DAT_100232b8
#undef DAT_100232c0
#undef DAT_100232e9
#undef DAT_100233dc
#undef DAT_100233e4
#undef DAT_1002340d
#undef DAT_10023500
#undef DAT_10023508
#undef DAT_10023531
#undef DAT_10023624
#undef DAT_1002362c
#undef DAT_10023655
#undef DAT_10023748

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_10023779
#define DAT_10023779 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3160U)))
#undef DAT_1002386c
#define DAT_1002386c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3253U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef str_10020c20
#define str_10020c20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x607U)))
#define local_828 (*(char (*)[2056])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b8d0
 */

void recovered_1001b8d0(int param_1,undefined1 param_2)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;

  recovered_1001d450(((uintptr_t)pf_module_state + 0x3137U),0x18,param_1,param_2);
  local_828[0] = '\0';
  lVar4 = 0;
  do {
    if ((&DAT_10023750)[lVar4] == '\x01') {
      recovered_1001c750(local_828,*(int *)((long)&DAT_1002386c + lVar4),&DAT_10023779 + lVar4);
    }
    lVar4 = lVar4 + 0x124;
  } while (lVar4 != 0x1b60);
  uVar3 = strlen(local_828);
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x3b < uVar2)) {
    uVar2 = UINT_00006838;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10020c20,local_828,(uint)uVar3);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10023750
#undef DAT_10023779
#undef DAT_1002386c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef str_10020c20
#undef local_828

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_10023779
#define DAT_10023779 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3160U)))
#undef DAT_1002386c
#define DAT_1002386c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3253U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef str_10020c20
#define str_10020c20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x607U)))
#define local_828 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b9b0
 */

void recovered_1001b9b0(int param_1)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *dst;
  long lVar4;

  dst = &DAT_10023750;
  lVar4 = 0x18;
  while (((*dst != '\x01' || (*(int *)(dst + 0x11c) != param_1)) ||
         (iVar2 = strcmp(dst + 0x29,&DAT_10022418), iVar2 != 0))) {
    dst = dst + 0x124;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      return;
    }
  }
  lVar4 = 0;
  memset(dst,0,0x124);
  local_828[0] = '\0';
  do {
    if ((&DAT_10023750)[lVar4] == '\x01') {
      recovered_1001c750(local_828,*(int *)((long)&DAT_1002386c + lVar4),&DAT_10023779 + lVar4);
    }
    lVar4 = lVar4 + 0x124;
  } while (lVar4 != 0x1b60);
  uVar3 = strlen(local_828);
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x3b < uVar1)))) {
    uVar1 = UINT_00006838;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      (*(code *)(ulong)uVar1)(str_10020c20,local_828,(uint)uVar3);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022418
#undef DAT_10023750
#undef DAT_10023779
#undef DAT_1002386c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef str_10020c20
#undef local_828

#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bae0
 */

void recovered_1001bae0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long lVar3;

  lVar3 = 0;
  lVar2 = DAT_10022988;
  do {
    if (((*(char *)(lVar2 + lVar3) == '\x01') && (*(int *)(lVar2 + 4 + lVar3) == 5)) &&
       (*(int *)(lVar2 + 0x124 + lVar3) == param_1)) {
      iVar1 = strcmp((char *)(lVar2 + lVar3 + 0x30),&DAT_10022418);
      lVar2 = DAT_10022988;
      if (iVar1 == 0) {
        memset((void *)(DAT_10022988 + lVar3),0,300);
        recovered_1001aa70();
        return;
      }
    }
    lVar3 = lVar3 + 300;
  } while (lVar3 != 0x1518);
  return;
}

#undef DAT_10022418
#undef DAT_10022988

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100208e0
#define DAT_100208e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c7U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022070
#define DAT_10022070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a57U)))
#undef DAT_10022088
#define DAT_10022088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a6fU)))
#undef DAT_100220a0
#define DAT_100220a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a87U)))
#undef DAT_100220b8
#define DAT_100220b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a9fU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000691c
#define UINT_0000691c (*(uint *)(0x691cU))
#undef UINT_00006920
#define UINT_00006920 (*(uint *)(0x6920U))
#undef UNK_100208e8
#define UNK_100208e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#undef _DAT_100208e0
#define _DAT_100208e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c7U)))
#undef uRam00000000100208e8
#define uRam00000000100208e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#define acStack_129 (*(char (*)[257])(frame + 279))
#define local_228 (*(char (*)[255])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bb70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001bb70(long param_1,undefined4 param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *rgbaPixels;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;

  uVar2 = uRam00000000100208e8;
  bVar3 = 1;
  switch((uintptr_t)(param_2)) {
  case 1:
    puVar11 = &DAT_10022070;
    break;
  case 2:
    puVar11 = (uint *)&DAT_10022088;
    break;
  case 3:
    puVar11 = (uint *)&DAT_100220a0;
    break;
  default:
    bVar3 = 0;
    puVar11 = (uint *)0x0;
    break;
  case 5:
    puVar11 = &DAT_100220b8;
  }
  if (param_1 == 0) {
    return;
  }
  rgbaPixels = *(void **)(param_1 + 0xb0c);
  if (((!(bool)(bVar3 & rgbaPixels != (void *)0x0)) || (*(int *)(param_1 + 0xb18) == 0)) ||
     (*(int *)(param_1 + 0xb1c) == 0)) {
    *(undefined8 *)(param_1 + 0x261) = _DAT_100208e0;
    *(undefined8 *)(param_1 + 0x269) = uVar2;
    *(undefined2 *)(param_1 + 0x271) = 0x7472;
    *(undefined1 *)(param_1 + 0x273) = 0;
    return;
  }
  cVar4 = *(char *)(param_1 + 0x78);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      local_228[uVar7] = cVar4;
      if (0xef < uVar6) break;
      cVar4 = *(char *)(param_1 + 0x79 + uVar7);
      uVar7 = uVar6;
    } while (cVar4 != '\0');
  }
  local_228[uVar6] = '\0';
  if (local_228[0] == '\0') {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar10 = local_228;
    pcVar8 = (char *)0x0;
    cVar4 = local_228[0];
    do {
      if (cVar4 == '/') {
        pcVar8 = pcVar10;
      }
      cVar4 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
  }
  pcVar10 = local_228;
  if (pcVar8 != (char *)0x0) {
    pcVar10 = pcVar8 + 1;
  }
  cVar4 = *pcVar10;
  if (cVar4 != '\0') {
    pcVar8 = (char *)0x0;
    do {
      if (cVar4 == '.') {
        pcVar8 = pcVar10;
      }
      cVar4 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    if (pcVar8 != (char *)0x0) {
      *pcVar8 = '\0';
    }
  }
  cVar4 = local_228[0];
  if (local_228[0] == '\0') {
    builtin_strncpy(local_228,"image",6);
    cVar4 = 'i';
  }
  uVar6 = 1;
  do {
    uVar7 = uVar6;
    acStack_129[uVar7] = cVar4;
    if (0xef < uVar7) break;
    cVar4 = local_228[uVar7];
    uVar6 = uVar7 + 1;
  } while (cVar4 != '\0');
  acStack_129[uVar7 + 1] = '\0';
  uVar6 = strlen(acStack_129 + 1);
  if (uVar6 < 0xf1) {
    lVar9 = 0xf0;
    if (uVar6 != 0xf0) {
      acStack_129[uVar6 + 1] = '-';
      if (uVar6 < 0xef) {
        acStack_129[uVar6 + 2] = 'e';
        if (uVar6 == 0xee) {
          lVar9 = 0xf0;
        }
        else {
          acStack_129[uVar6 + 3] = 'x';
          if (uVar6 < 0xed) {
            acStack_129[uVar6 + 4] = 'p';
            if (uVar6 == 0xec) {
              lVar9 = 0xf0;
            }
            else {
              acStack_129[uVar6 + 5] = 'o';
              if (uVar6 < 0xeb) {
                acStack_129[uVar6 + 6] = 'r';
                if (uVar6 == 0xea) {
                  lVar9 = 0xf0;
                }
                else {
                  lVar9 = uVar6 + 7;
                  acStack_129[uVar6 + 7] = 't';
                }
              }
              else {
                lVar9 = uVar6 + 5;
              }
            }
          }
          else {
            lVar9 = uVar6 + 3;
          }
        }
      }
      else {
        lVar9 = uVar6 + 1;
      }
    }
    acStack_129[lVar9 + 1] = '\0';
  }
  pcVar8 = *(char **)(puVar11 + 4);
  uVar6 = strlen(acStack_129 + 1);
  if (uVar6 < 0xf1) {
    pcVar10 = &DAT_10020a84;
    if (pcVar8 != (char *)0x0) {
      pcVar10 = pcVar8;
    }
    if (uVar6 != 0xf0) {
      cVar4 = *pcVar10;
      uVar7 = uVar6;
      while (uVar6 = uVar7, cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        acStack_129[uVar7 + 1] = cVar4;
        uVar6 = uVar7 + 1;
        if (0xee < uVar7) break;
        uVar7 = uVar6;
        cVar4 = *pcVar10;
      }
    }
    acStack_129[uVar6 + 1] = '\0';
  }
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0x123 < uVar5)))) {
    uVar5 = UINT_00006920;
    if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001bfce;
    uVar5 = (*(code *)(ulong)uVar5)
                      (*(int *)(param_1 + 0x25c),acStack_129 + 1,rgbaPixels,
                       *(uint *)(param_1 + 0xb18),*(uint *)(param_1 + 0xb1c),
                       *(uint *)(param_1 + 0xb20),*puVar11);
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
       ((uVar5 = Ram0000000000006808, uVar5 < 0xc || (uVar5 = Ram0000000000006808, uVar5 < 0x120))))
    goto LAB_1001bfce;
    uVar5 = UINT_0000691c;
    if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001bfce;
    uVar5 = (*(code *)(ulong)uVar5)
                      (acStack_129 + 1,rgbaPixels,*(uint *)(param_1 + 0xb18),
                       *(uint *)(param_1 + 0xb1c),*(uint *)(param_1 + 0xb20),*puVar11);
  }
  if (uVar5 != 0) {
    pcVar8 = (char *)(param_1 + 0x261);
    *(undefined8 *)(param_1 + 0x261) = 0x646574726f707845;
    *(undefined2 *)(param_1 + 0x269) = 0x2f20;
    *(undefined1 *)(param_1 + 0x26b) = 0;
    uVar6 = strlen(pcVar8);
    if (uVar6 < 0x800) {
      if (uVar6 != 0x7ff && acStack_129[1] != '\0') {
        pcVar10 = acStack_129 + 2;
        uVar7 = uVar6;
        do {
          pcVar8[uVar7] = acStack_129[1];
          uVar6 = uVar7 + 1;
          if (0x7fd < uVar7) break;
          acStack_129[1] = *pcVar10;
          pcVar10 = pcVar10 + 1;
          uVar7 = uVar6;
        } while (acStack_129[1] != '\0');
      }
      pcVar8[uVar6] = '\0';
    }
    iVar1 = *(int *)(param_1 + 0x25c);
    lVar12 = 0;
    lVar9 = DAT_10022368;
    do {
      if (((*(char *)(lVar9 + lVar12) == '\x01') && (*(int *)(lVar9 + 0x10 + lVar12) == 0)) &&
         (*(int *)(lVar9 + 0x25c + lVar12) == iVar1)) {
        recovered_1000cff0(lVar9 + lVar12);
        lVar9 = DAT_10022368;
      }
      lVar12 = lVar12 + 0xda8;
    } while (lVar12 != 0x11120);
    return;
  }
LAB_1001bfce:
  *(undefined8 *)(param_1 + 0x261) = 0x662074726f707845;
  *(undefined4 *)(param_1 + 0x269) = 0x656c6961;
  *(undefined2 *)(param_1 + 0x26d) = 100;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100208e0
#undef DAT_10020a84
#undef DAT_10022070
#undef DAT_10022088
#undef DAT_100220a0
#undef DAT_100220b8
#undef DAT_10022368
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000691c
#undef UINT_00006920
#undef UNK_100208e8
#undef _DAT_100208e0
#undef uRam00000000100208e8
#undef acStack_129
#undef local_228

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100252b0
#define DAT_100252b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c97U)))
#undef DAT_100252b1
#define DAT_100252b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c98U)))
#undef DAT_100252b2
#define DAT_100252b2 (*(byte *)(((uintptr_t)pf_module_state + 0x4c99U)))
#undef DAT_100252b3
#define DAT_100252b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c9aU)))
#undef DAT_100253a4
#define DAT_100253a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8bU)))
#undef DAT_100253a5
#define DAT_100253a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8cU)))
#undef DAT_10025498
#define DAT_10025498 (*(int *)(((uintptr_t)pf_module_state + 0x4e7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c080
 */

void recovered_1001c080(long param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;

  if ((int)param_2 < 0 || param_1 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0xaf8) <= param_2) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0xaf0);
  pcVar1 = (char *)(lVar2 + (ulong)param_2 * 0x1f8);
  DAT_100252b0 = 1;
  if (lVar2 == 0) {
    DAT_100252b2 = 0;
  }
  else {
    DAT_100252b2 = 1;
    if (*(int *)(pcVar1 + 0x1ec) != 2) {
      DAT_100252b2 = (byte)pcVar1[0x1e8] >> 1 & 1;
    }
  }
  cVar5 = pcVar1[0xf1];
  DAT_100252b1 = param_3;
  if (cVar5 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar3 = uVar6 + 1;
      (&DAT_100252b3)[uVar6] = cVar5;
      if (0xef < uVar3) break;
      cVar5 = *(char *)((ulong)param_2 * 0x1f8 + lVar2 + 0xf2 + uVar6);
      uVar6 = uVar3;
    } while (cVar5 != '\0');
  }
  (&DAT_100252b3)[uVar3] = 0;
  pcVar4 = &DAT_10020a84;
  if (lVar2 != 0) {
    pcVar4 = pcVar1;
  }
  cVar5 = *pcVar1;
  if (cVar5 == '\0') {
    DAT_100253a4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar6 = uVar3;
      (&DAT_100253a4)[uVar6] = cVar5;
      if (0xef < uVar6 + 1) break;
      cVar5 = pcVar4[uVar6 + 1];
      uVar3 = uVar6 + 1;
    } while (cVar5 != '\0');
    (&DAT_100253a5)[uVar6] = 0;
    if (lVar2 == 0) goto LAB_1001c1a4;
  }
  if (-1 < *(int *)(pcVar1 + 0x1f0)) {
    DAT_10025498 = *(int *)(pcVar1 + 0x1f0);
    return;
  }
LAB_1001c1a4:
  DAT_10025498 = *(undefined4 *)(param_1 + 0x25c);
  return;
}

#undef DAT_10020a84
#undef DAT_100252b0
#undef DAT_100252b1
#undef DAT_100252b2
#undef DAT_100252b3
#undef DAT_100253a4
#undef DAT_100253a5
#undef DAT_10025498

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100252b0
#define DAT_100252b0 (*(char *)(((uintptr_t)pf_module_state + 0x4c97U)))
#undef DAT_100252b1
#define DAT_100252b1 (*(char *)(((uintptr_t)pf_module_state + 0x4c98U)))
#undef DAT_100252b2
#define DAT_100252b2 (*(char *)(((uintptr_t)pf_module_state + 0x4c99U)))
#undef DAT_100252b3
#define DAT_100252b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c9aU)))
#undef DAT_100253a4
#define DAT_100253a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8bU)))
#undef DAT_10025498
#define DAT_10025498 (*(int *)(((uintptr_t)pf_module_state + 0x4e7fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_00006888
#define UINT_00006888 (*(uint *)(0x6888U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_000068d0
#define UINT_000068d0 (*(uint *)(0x68d0U))
#undef UINT_000068d8
#define UINT_000068d8 (*(uint *)(0x68d8U))
#undef UINT_000068dc
#define UINT_000068dc (*(uint *)(0x68dcU))
#define local_118 (*(char (*)[252])(frame + 24))
#define local_1c (*(uint *)(frame + 276))
#define local_18 (*(uint *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c1c0
 */

void recovered_1001c1c0(long param_1)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == 0) {
    return;
  }
  if (DAT_100252b0 != '\x01') {
    return;
  }
  recovered_10011a00((char *)(param_1 + 0x78),&DAT_100253a4,local_118);
  if (DAT_100252b1 == '\x01') {
    if (DAT_10025498 == *(int *)(param_1 + 0x25c)) {
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xdb < uVar2)
         ) {
        uVar2 = UINT_000068d8;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(DAT_10025498,&DAT_100252b3,local_118);
        }
      }
      else {
        iVar1 = Ram0000000000006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
           ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x8b < uVar2)
            ))) {
          uVar2 = UINT_00006888;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            (*(code *)(ulong)uVar2)(&DAT_100252b3,local_118);
          }
        }
      }
    }
    DAT_100252b0 = '\0';
  }
  else if (DAT_100252b2 == '\x01') {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xdf < uVar2))))
    {
      uVar2 = UINT_000068dc;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(int *)(param_1 + 0x25c),local_118);
      }
    }
    else {
      iVar1 = Ram0000000000006800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x8f < uVar2)))
         ) {
        uVar2 = UINT_0000688c;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(local_118);
        }
      }
    }
  }
  else {
    memset(&local_1c,0,0xc);
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcb < uVar2))
    {
      uVar2 = UINT_000068c8;
      if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1001c3d4;
      uVar2 = (*(code *)(ulong)uVar2)(DAT_10025498,&DAT_100252b3,&local_1c);
    }
    else {
      iVar1 = Ram0000000000006800;
      if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
         ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x38)))
         ) goto LAB_1001c3d4;
      uVar2 = UINT_00006834;
      if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1001c3d4;
      uVar2 = (*(code *)(ulong)uVar2)(&DAT_100252b3,&local_1c);
    }
    if (uVar2 != 0) {
      iVar1 = Ram0000000000006800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
         ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xd3 < uVar2)))
         ) {
        uVar2 = UINT_000068d0;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)
                    (*(int *)(param_1 + 0x25c),local_118,(void *)(ulong)local_1c,local_18);
        }
      }
      else {
        iVar1 = Ram0000000000006800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
            (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000006808, 0x3b < uVar2)) {
          uVar2 = UINT_00006838;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            (*(code *)(ulong)uVar2)(local_118,(void *)(ulong)local_1c,local_18);
          }
        }
      }
    }
  }
LAB_1001c3d4:
  recovered_1000cff0(param_1);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100252b0
#undef DAT_100252b1
#undef DAT_100252b2
#undef DAT_100252b3
#undef DAT_100253a4
#undef DAT_10025498
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_00006888
#undef UINT_0000688c
#undef UINT_000068c8
#undef UINT_000068d0
#undef UINT_000068d8
#undef UINT_000068dc
#undef local_118
#undef local_1c
#undef local_18

#undef DAT_100208f0
#define DAT_100208f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d7U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100210e6
#define DAT_100210e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacdU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef UNK_100208f8
#define UNK_100208f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dfU)))
#undef _DAT_100208f0
#define _DAT_100208f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d7U)))
#undef uRam00000000100208f8
#define uRam00000000100208f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dfU)))
#define local_48 (*(undefined8 *)(frame + 24))
#define local_40 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c560(undefined4 param_1,uint param_2,undefined8 param_3,char *param_4,
                       char *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;

  uVar1 = recovered_10003ea0(2,&DAT_100210e6,0xd6d6d6,'\0');
  local_50 = 4;
  local_4c = (undefined4)uVar1;
  local_40 = _DAT_100208f0;
  uStack_38 = uRam00000000100208f8;
  local_48 = param_3;
  uVar1 = recovered_1000cbb0((undefined8 *)&local_50);
  lVar3 = DAT_10022368;
  if (-1 < (int)uVar1) {
    lVar4 = (uVar1 & 0xffffffff) * 0xda8;
    *(undefined4 *)(DAT_10022368 + 0xae4 + lVar4) = param_1;
    *(uint *)(lVar3 + 0xae8 + lVar4) = param_2;
    if ((-1 < (int)param_2) && (*(char *)(lVar3 + (ulong)param_2 * 0xda8) == '\x01')) {
      *(undefined4 *)(lVar3 + 0x25c + lVar4) =
           *(undefined4 *)((ulong)param_2 * 0xda8 + lVar3 + 0x25c);
    }
    lVar5 = lVar3 + lVar4 + 0x261;
    if (param_4 == (char *)0x0) {
      param_4 = &DAT_10020a84;
    }
    cVar7 = *param_4;
    if (cVar7 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        *(char *)(lVar5 + uVar6) = cVar7;
        if (0x7fe < uVar1) break;
        cVar7 = param_4[uVar6 + 1];
        uVar6 = uVar1;
      } while (cVar7 != '\0');
    }
    *(undefined1 *)(lVar5 + uVar1) = 0;
    lVar3 = lVar3 + lVar4 + 0xa61;
    pcVar2 = &DAT_10020a84;
    if (param_5 != (char *)0x0) {
      pcVar2 = param_5;
    }
    cVar7 = *pcVar2;
    if (cVar7 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        *(char *)(lVar3 + uVar6) = cVar7;
        if (0x7e < uVar1) break;
        cVar7 = pcVar2[uVar6 + 1];
        uVar6 = uVar1;
      } while (cVar7 != '\0');
    }
    *(undefined1 *)(lVar3 + uVar1) = 0;
  }
  return;
}

#undef DAT_100208f0
#undef DAT_10020a84
#undef DAT_100210e6
#undef DAT_10022368
#undef UNK_100208f8
#undef _DAT_100208f0
#undef uRam00000000100208f8
#undef local_48
#undef local_40
#undef uStack_38
#undef local_50
#undef local_4c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#undef UINT_000068d4
#define UINT_000068d4 (*(uint *)(0x68d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c6c0
 */

void recovered_1001c6c0(int param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xd7 < uVar2)) {
    uVar2 = UINT_000068d4;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001c703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(param_1,param_2);
      return;
    }
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x3f < uVar2))))
    {
      uVar2 = UINT_0000683c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001c745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar2)(param_2);
        return;
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c
#undef UINT_000068d4

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c750
 */

void recovered_1001c750(char *param_1,int param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;

  if (param_2 < 0) {
    if (param_1 != (char *)0x0) {
      uVar1 = strlen(param_1);
      if (uVar1 < 0x800) {
        lVar4 = 0x7ff;
        if (uVar1 != 0x7ff) {
          lVar4 = uVar1 + 1;
          param_1[uVar1] = '-';
        }
        param_1[lVar4] = '\0';
      }
    }
    param_2 = -param_2;
  }
  recovered_100164d0(param_1,0x800,param_2);
  if (param_1 != (char *)0x0) {
    uVar1 = strlen(param_1);
    if (uVar1 < 0x800) {
      lVar4 = 0x7ff;
      if (uVar1 != 0x7ff) {
        lVar4 = uVar1 + 1;
        param_1[uVar1] = '|';
      }
      param_1[lVar4] = '\0';
    }
    pcVar5 = &DAT_10020a84;
    if (param_3 != (char *)0x0) {
      pcVar5 = param_3;
    }
    uVar1 = strlen(param_1);
    if (uVar1 < 0x800) {
      cVar3 = *pcVar5;
      uVar2 = uVar1;
      if (uVar1 != 0x7ff && cVar3 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          param_1[uVar2] = cVar3;
          uVar1 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar3 = *pcVar5;
          uVar2 = uVar1;
        } while (cVar3 != '\0');
      }
      param_1[uVar1] = '\0';
    }
    uVar1 = strlen(param_1);
    if (uVar1 < 0x800) {
      lVar4 = 0x7ff;
      if (uVar1 != 0x7ff) {
        lVar4 = uVar1 + 1;
        param_1[uVar1] = '\n';
      }
      param_1[lVar4] = '\0';
    }
  }
  return;
}

#undef DAT_10020a84

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100210c5
#define DAT_100210c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaacU)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_000068d0
#define UINT_000068d0 (*(uint *)(0x68d0U))
#undef str_10020acc
#define str_10020acc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10020b72
#define str_10020b72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x559U)))
#define local_2058 (*(byte (*)[4095])(frame + 24))
#define uStack_2060 (*(undefined8 *)(frame + 16))
#define local_58 (*(ulong *)(frame + 8216))
#define acStack_1059 (*(char (*)[4097])(frame + 4119))
#define local_4c (*(uint *)(frame + 8228))
#define local_48 (*(uint *)(frame + 8232))
#define local_40 (*(ulong *)(frame + 8240))
#define local_38 (*(int *)(frame + 8248))
#define local_31 (*(byte *)(frame + 8255))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c870
 */

bool recovered_1001c870(int param_1)

{
  unsigned char frame[8336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 extraout_var = 0;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *src;
  ulong uVar10;
  ulong uVar11;

  if (param_1 < 0) {
    uStack_2060 = 0x1001c88d;
    param_1 = recovered_10004540();
  }
  if (param_1 < 0) {
    return false;
  }
  if (DAT_10022418 == '\0') {
    return false;
  }
  uVar2 = 0;
  uStack_2060 = 0x1001c8bc;
  local_38 = param_1;
  memset(&local_4c,0,0xc);
  local_2058[0] = 0;
  acStack_1059[1] = 0;
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0xcb < uVar1)) {
    uVar1 = UINT_000068c8;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      uStack_2060 = 0x1001c918;
      uVar2 = (*(code *)(ulong)uVar1)(local_38,str_10020acc,&local_4c);
    }
  }
  else {
    iVar3 = Ram0000000000006800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x37 < uVar1))))
    {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        uStack_2060 = 0x1001c963;
        uVar2 = (*(code *)(ulong)uVar1)(str_10020acc,&local_4c);
      }
    }
  }
  if (local_48 != 0 && (local_4c != 0 && uVar2 != 0)) {
    if (0xfff < local_48) {
      return false;
    }
    uStack_2060 = 0x1001c9a8;
    memcpy(local_2058,(void *)(ulong)local_4c,(ulong)local_48);
    uVar5 = (ulong)local_48;
    local_2058[uVar5] = 0;
    if (uVar5 != 0) {
      local_40 = 0;
      uVar11 = 0;
LAB_1001c9fc:
      uVar4 = uVar11 + 1;
      uVar10 = uVar4;
      if (uVar4 < uVar5) {
        uVar10 = uVar5;
      }
      local_31 = true;
      uVar7 = uVar11;
      if (local_2058[uVar11] != 10) {
        do {
          uVar9 = uVar4;
          uVar7 = uVar10;
          if (uVar10 == uVar9) goto LAB_1001ca3c;
          uVar4 = uVar9 + 1;
        } while (local_2058[uVar9] != 10);
        uVar7 = uVar9;
LAB_1001ca3c:
        local_31 = uVar9 < uVar5;
      }
      src = local_2058 + uVar11;
      uVar10 = uVar7 - uVar11;
      uStack_2060 = 0x1001ca67;
      uVar4 = strlen(str_10020b72);
      if (uVar4 != 0) {
        uVar9 = 0;
        if (uVar10 != 0) {
          do {
            if ((0x20 < (ulong)src[uVar9]) ||
               ((0x100002200U >> ((ulong)src[uVar9] & 0x3f) & 1) == 0)) goto LAB_1001ca9c;
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
          uVar9 = uVar10;
        }
LAB_1001ca9c:
        if ((uVar9 + 1 < uVar10) && (src[uVar9] == 0x40)) {
          if ((uVar9 < uVar10) && (local_2058[uVar9 + uVar11 + 1] != 0x40)) goto LAB_1001cac5;
        }
        else if (uVar9 < uVar10) {
LAB_1001cac5:
          uVar8 = uVar9;
          do {
            if (src[uVar8] == 0x3d) {
              if (uVar8 <= uVar9) goto LAB_1001cb0d;
              goto LAB_1001caf0;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
      }
      goto LAB_1001cb30;
    }
  }
LAB_1001cc49:
  uStack_2060 = 0x1001cc58;
  uVar5 = strlen(acStack_1059 + 1);
  if ((uVar5 != 0) && ((acStack_1059 + 1)[uVar5 - 1] != '\n')) {
    uStack_2060 = 0x1001cc71;
    uVar5 = strlen(&DAT_100210c5);
    uStack_2060 = 0x1001cc80;
    uVar11 = strlen(acStack_1059 + 1);
    if ((-(uVar11 - 0x1000) < uVar5 || -uVar5 == uVar11 - 0x1000) || 0xfff < uVar11) {
      return false;
    }
    uStack_2060 = 0x1001ccbe;
    memcpy(acStack_1059 + uVar11 + 1,&DAT_100210c5,uVar5);
    (acStack_1059 + uVar11 + 1)[uVar5] = '\0';
  }
  uStack_2060 = 0x1001ccd6;
  uVar6 = recovered_1001cdc0(acStack_1059 + 1,&DAT_10022418);
  if ((char)uVar6 == '\0') {
    return false;
  }
LAB_1001ccda:
  uStack_2060 = 0x1001cce6;
  uVar5 = strlen(acStack_1059 + 1);
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xd3 < uVar2)) {
    uVar2 = UINT_000068d0;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      uStack_2060 = 0x1001cd3d;
      uVar2 = (*(code *)(ulong)uVar2)(local_38,str_10020acc,acStack_1059 + 1,(uint)uVar5);
    }
  }
  else {
    iVar3 = Ram0000000000006800;
    uVar2 = 0;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x3b < uVar1))))
    {
      uVar1 = UINT_00006838;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        uStack_2060 = 0x1001cd96;
        uVar2 = (*(code *)(ulong)uVar1)(str_10020acc,acStack_1059 + 1,(uint)uVar5);
      }
    }
  }
  return uVar2 != 0;
  while (uVar8 = uVar8 - 1, uVar9 < uVar8) {
LAB_1001caf0:
    if ((0x20 < (ulong)local_2058[uVar8 + uVar11 + -1]) ||
       ((0x100002200U >> ((ulong)local_2058[uVar8 + uVar11 + -1] & 0x3f) & 1) == 0))
    goto LAB_1001cb0d;
  }
  uVar8 = uVar9;
LAB_1001cb0d:
  uVar8 = uVar8 - uVar9;
  if (uVar8 == uVar4) {
    uStack_2060 = 0x1001cb27;
    iVar3 = strncmp((char *)(src + uVar9),str_10020b72,uVar4);
    if (iVar3 != 0) goto LAB_1001cb30;
    if ((local_40 & 1) == 0) {
      uStack_2060 = 0x1001cc28;
      uVar6 = recovered_1001cdc0(acStack_1059 + 1,&DAT_10022418);
      local_40 = CONCAT71((int7)(uVar8 >> 8),1);
      if ((char)uVar6 == '\0') {
        return false;
      }
      goto LAB_1001c9ea;
    }
    local_40 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
  }
  else {
LAB_1001cb30:
    uStack_2060 = 0x1001cb3c;
    uVar11 = strlen(acStack_1059 + 1);
    if (0xfff < uVar11) {
      return false;
    }
    if (0x1000 - uVar11 <= uVar10) {
      return false;
    }
    uStack_2060 = 0x1001cb82;
    local_58 = uVar7;
    memcpy(acStack_1059 + uVar11 + 1,src,uVar10);
    (acStack_1059 + uVar11 + 1)[uVar10] = '\0';
    if (local_31 == 0) {
      uVar7 = local_58;
      goto LAB_1001c9ea;
    }
    uStack_2060 = 0x1001cba0;
    uVar11 = strlen(&DAT_100210c5);
    uStack_2060 = 0x1001cbaf;
    uVar4 = strlen(acStack_1059 + 1);
    if (0xfff < uVar4) {
      return false;
    }
    if (0x1000 - uVar4 <= uVar11) {
      return false;
    }
    uStack_2060 = 0x1001cbef;
    memcpy(acStack_1059 + uVar4 + 1,&DAT_100210c5,uVar11);
    (acStack_1059 + uVar4 + 1)[uVar11] = '\0';
    uVar7 = local_58;
  }
LAB_1001c9ea:
  uVar11 = uVar7 + local_31;
  if (uVar5 <= uVar11) goto LAB_1001cc3f;
  goto LAB_1001c9fc;
LAB_1001cc3f:
  if ((local_40 & 1) != 0) goto LAB_1001ccda;
  goto LAB_1001cc49;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100210c5
#undef DAT_10022418
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_000068c8
#undef UINT_000068d0
#undef str_10020acc
#undef str_10020b72
#undef local_2058
#undef uStack_2060
#undef local_58
#undef acStack_1059
#undef local_4c
#undef local_48
#undef local_40
#undef local_38
#undef local_31

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10021112
#define DAT_10021112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf9U)))
#undef str_10021103
#define str_10021103 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaeaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cdc0
 */

undefined8 recovered_1001cdc0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;

  uVar1 = strlen(str_10021103);
  if ((param_1 != (char *)0x0) &&
     (uVar2 = strlen(param_1),
     (uVar1 <= -(uVar2 - 0x1000) && -uVar1 != uVar2 - 0x1000) && uVar2 < 0x1000)) {
    memcpy(param_1 + uVar2,str_10021103,uVar1);
    (param_1 + uVar2)[uVar1] = '\0';
    if (param_2 == (char *)0x0) {
      param_2 = &DAT_10020a84;
      uVar1 = 0;
    }
    else {
      uVar1 = strlen(param_2);
    }
    uVar2 = strlen(param_1);
    if ((uVar1 <= -(uVar2 - 0x1000) && -uVar1 != uVar2 - 0x1000) && uVar2 < 0x1000) {
      memcpy(param_1 + uVar2,param_2,uVar1);
      (param_1 + uVar2)[uVar1] = '\0';
      uVar1 = strlen(&DAT_10021112);
      uVar2 = strlen(param_1);
      if ((uVar1 <= -(uVar2 - 0x1000) && -uVar1 != uVar2 - 0x1000) && uVar2 < 0x1000) {
        pvVar3 = memcpy(param_1 + uVar2,&DAT_10021112,uVar1);
        (param_1 + uVar2)[uVar1] = '\0';
        return CONCAT71((int7)((ulong)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}

#undef DAT_10020a84
#undef DAT_10021112
#undef str_10021103

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cef0
 */

bool recovered_1001cef0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;

  if (param_1 == (byte *)0x0) {
    pbVar5 = &DAT_10020a84;
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar3 = *param_1;
    pbVar2 = (byte *)0x0;
    if (bVar3 != 0) {
      pbVar5 = param_1;
      do {
        if (bVar3 == 0x2f) {
          pbVar2 = pbVar5;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    pbVar5 = param_1;
  }
  pbVar4 = pbVar2 + 1;
  if (pbVar2 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = *pbVar4;
  while (bVar3 != 0) {
    if (bVar3 == 0x2e) {
      pbVar2 = pbVar4;
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar5;
  }
  pbVar5 = &DAT_10020a84;
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_10020a84;
  }
  bVar3 = *pbVar2;
  if (bVar3 == 0) {
    bVar6 = 0x2e;
    bVar3 = 0;
LAB_1001d012:
    if (bVar3 == bVar6) {
      return true;
    }
  }
  else {
    bVar6 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar6 = bVar3;
    }
    if (bVar6 == 0x2e) {
      bVar1 = pbVar2[1];
      bVar6 = 0x74;
      bVar3 = 0;
      if (bVar1 != 0) {
        bVar3 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar3 = bVar1;
        }
        if (bVar3 != 0x74) goto LAB_1001d01d;
        bVar1 = pbVar2[2];
        bVar3 = 0;
        if (bVar1 != 0) {
          bVar3 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar3 = bVar1;
          }
          if (bVar3 != 0x74) goto LAB_1001d01d;
          bVar3 = pbVar2[3];
          if (bVar3 == 0) {
            bVar6 = 0x66;
            bVar3 = 0;
          }
          else {
            bVar6 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar6 = bVar3;
            }
            if (bVar6 != 0x66) goto LAB_1001d01d;
            bVar3 = pbVar2[4];
            bVar6 = 0;
          }
        }
      }
      goto LAB_1001d012;
    }
  }
LAB_1001d01d:
  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar3 = *param_1;
    pbVar2 = (byte *)0x0;
    if (bVar3 != 0) {
      pbVar5 = param_1;
      do {
        if (bVar3 == 0x2f) {
          pbVar2 = pbVar5;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    pbVar5 = param_1;
  }
  pbVar4 = pbVar2 + 1;
  if (pbVar2 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = *pbVar4;
  while (bVar3 != 0) {
    if (bVar3 == 0x2e) {
      pbVar2 = pbVar4;
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar5;
  }
  pbVar5 = &DAT_10020a84;
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_10020a84;
  }
  bVar3 = *pbVar2;
  if (bVar3 == 0) {
    bVar6 = 0x2e;
    bVar3 = 0;
LAB_1001d131:
    if (bVar3 == bVar6) {
      return true;
    }
  }
  else {
    bVar6 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar6 = bVar3;
    }
    if (bVar6 == 0x2e) {
      bVar3 = pbVar2[1];
      if (bVar3 == 0) {
        bVar6 = 0x6f;
        bVar3 = 0;
      }
      else {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        if (bVar6 != 0x6f) goto LAB_1001d13c;
        bVar3 = pbVar2[2];
        if (bVar3 == 0) {
          bVar6 = 0x74;
          bVar3 = 0;
        }
        else {
          bVar6 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar6 = bVar3;
          }
          if (bVar6 != 0x74) goto LAB_1001d13c;
          bVar3 = pbVar2[3];
          if (bVar3 == 0) {
            bVar6 = 0x66;
            bVar3 = 0;
          }
          else {
            bVar6 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar6 = bVar3;
            }
            if (bVar6 != 0x66) goto LAB_1001d13c;
            bVar3 = pbVar2[4];
            bVar6 = 0;
          }
        }
      }
      goto LAB_1001d131;
    }
  }
LAB_1001d13c:
  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar3 = *param_1;
    pbVar2 = (byte *)0x0;
    if (bVar3 != 0) {
      pbVar5 = param_1;
      do {
        if (bVar3 == 0x2f) {
          pbVar2 = pbVar5;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    pbVar5 = param_1;
  }
  pbVar4 = pbVar2 + 1;
  if (pbVar2 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = *pbVar4;
  while (bVar3 != 0) {
    if (bVar3 == 0x2e) {
      pbVar2 = pbVar4;
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar5;
  }
  pbVar5 = &DAT_10020a84;
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_10020a84;
  }
  bVar3 = *pbVar2;
  if (bVar3 == 0) {
    bVar6 = 0x2e;
    bVar3 = 0;
LAB_1001d21a:
    if (bVar3 == bVar6) {
      return true;
    }
  }
  else {
    bVar6 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar6 = bVar3;
    }
    if (bVar6 == 0x2e) {
      bVar3 = pbVar2[1];
      if (bVar3 == 0) {
        bVar6 = 0x70;
        bVar3 = 0;
      }
      else {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        if (bVar6 != 0x70) goto LAB_1001d225;
        bVar3 = pbVar2[2];
        if (bVar3 == 0) {
          bVar6 = 0x73;
          bVar3 = 0;
        }
        else {
          bVar6 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar6 = bVar3;
          }
          if (bVar6 != 0x73) goto LAB_1001d225;
          bVar3 = pbVar2[3];
          bVar6 = 0;
        }
      }
      goto LAB_1001d21a;
    }
  }
LAB_1001d225:
  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar3 = *param_1;
    pbVar2 = (byte *)0x0;
    if (bVar3 != 0) {
      pbVar5 = param_1;
      do {
        if (bVar3 == 0x2f) {
          pbVar2 = pbVar5;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    pbVar5 = param_1;
  }
  pbVar4 = pbVar2 + 1;
  if (pbVar2 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = *pbVar4;
  while (bVar3 != 0) {
    if (bVar3 == 0x2e) {
      pbVar2 = pbVar4;
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar5;
  }
  pbVar5 = &DAT_10020a84;
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_10020a84;
  }
  bVar3 = *pbVar2;
  if (bVar3 == 0) {
    bVar6 = 0x2e;
    bVar3 = 0;
  }
  else {
    bVar6 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar6 = bVar3;
    }
    if (bVar6 != 0x2e) goto LAB_1001d344;
    bVar3 = pbVar2[1];
    if (bVar3 == 0) {
      bVar6 = 0x70;
      bVar3 = 0;
    }
    else {
      bVar6 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar6 = bVar3;
      }
      if (bVar6 != 0x70) goto LAB_1001d344;
      bVar3 = pbVar2[2];
      if (bVar3 == 0) {
        bVar6 = 0x66;
        bVar3 = 0;
      }
      else {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        if (bVar6 != 0x66) goto LAB_1001d344;
        bVar3 = pbVar2[3];
        if (bVar3 == 0) {
          bVar6 = 0x61;
          bVar3 = 0;
        }
        else {
          bVar6 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar6 = bVar3;
          }
          if (bVar6 != 0x61) goto LAB_1001d344;
          bVar3 = pbVar2[4];
          bVar6 = 0;
        }
      }
    }
  }
  if (bVar3 == bVar6) {
    return true;
  }
LAB_1001d344:
  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar3 = *param_1;
    pbVar2 = (byte *)0x0;
    if (bVar3 != 0) {
      pbVar5 = param_1;
      do {
        if (bVar3 == 0x2f) {
          pbVar2 = pbVar5;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    pbVar5 = param_1;
  }
  pbVar4 = pbVar2 + 1;
  if (pbVar2 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = *pbVar4;
  while (bVar3 != 0) {
    if (bVar3 == 0x2e) {
      pbVar2 = pbVar4;
    }
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar5;
  }
  pbVar5 = &DAT_10020a84;
  if (pbVar2 != (byte *)0x0) {
    pbVar5 = pbVar2;
  }
  bVar3 = *pbVar5;
  if (bVar3 == 0) {
    bVar6 = 0x2e;
    bVar3 = 0;
  }
  else {
    bVar6 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar6 = bVar3;
    }
    if (bVar6 != 0x2e) {
      return false;
    }
    bVar3 = pbVar5[1];
    if (bVar3 == 0) {
      bVar6 = 0x70;
      bVar3 = 0;
    }
    else {
      bVar6 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar6 = bVar3;
      }
      if (bVar6 != 0x70) {
        return false;
      }
      bVar3 = pbVar5[2];
      if (bVar3 == 0) {
        bVar6 = 0x66;
        bVar3 = 0;
      }
      else {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        if (bVar6 != 0x66) {
          return false;
        }
        bVar3 = pbVar5[3];
        if (bVar3 == 0) {
          bVar6 = 0x62;
          bVar3 = 0;
        }
        else {
          bVar6 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar6 = bVar3;
          }
          if (bVar6 != 0x62) {
            return false;
          }
          bVar3 = pbVar5[4];
          bVar6 = 0;
        }
      }
    }
  }
  return bVar3 == bVar6;
}

#undef DAT_10020a84

#undef DAT_10020ba9
#define DAT_10020ba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x590U)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10022419
#define DAT_10022419 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d450
 */

void recovered_1001d450(long param_1,uint param_2,int param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;

  if (DAT_10022418 == '\0') {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar4 = &DAT_10022418;
    puVar2 = (undefined1 *)0x0;
    cVar8 = DAT_10022418;
    do {
      if (cVar8 == '/') {
        puVar2 = puVar4;
      }
      cVar8 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (cVar8 != '\0');
  }
  pcVar7 = &DAT_10022418;
  if (puVar2 != (undefined1 *)0x0) {
    pcVar7 = puVar2 + 1;
  }
  if ((int)param_2 < 1 || param_1 == 0) {
    return;
  }
  pcVar6 = (char *)(param_1 + 0x29);
  lVar11 = 0;
  do {
    if (((*(char *)(param_1 + lVar11) == '\x01') && (*(int *)(param_1 + 0x11c + lVar11) == param_3))
       && (iVar1 = strcmp(pcVar6 + lVar11,&DAT_10022418), iVar1 == 0)) {
      return;
    }
    lVar11 = lVar11 + 0x124;
  } while ((ulong)param_2 * 0x124 != lVar11);
  pcVar3 = (char *)(param_1 + 1);
  lVar11 = 0;
  while (*(char *)(param_1 + lVar11) != '\0') {
    pcVar3 = pcVar3 + 0x124;
    pcVar6 = pcVar6 + 0x124;
    lVar11 = lVar11 + 0x124;
    if ((ulong)param_2 * 0x124 == lVar11) {
      return;
    }
  }
  *(undefined1 *)(param_1 + lVar11) = 1;
  *(int *)(param_1 + 0x11c + lVar11) = param_3;
  *(undefined1 *)(param_1 + 0x120 + lVar11) = param_4;
  if (DAT_10022418 == '\0') {
    uVar5 = 0;
  }
  else {
    pcVar9 = pcVar6;
    uVar10 = 0;
    cVar8 = DAT_10022418;
    do {
      uVar5 = uVar10 + 1;
      *pcVar9 = cVar8;
      if (0xef < uVar5) break;
      cVar8 = (&DAT_10022419)[uVar10];
      pcVar9 = pcVar9 + 1;
      uVar10 = uVar5;
    } while (cVar8 != '\0');
  }
  pcVar6[uVar5] = '\0';
  pcVar6 = &DAT_10020ba9;
  if (*pcVar7 != '\0') {
    pcVar6 = pcVar7;
  }
  cVar8 = *pcVar6;
  if (cVar8 == '\0') {
    uVar5 = 0;
  }
  else {
    pcVar7 = pcVar3;
    uVar10 = 1;
    do {
      uVar5 = uVar10;
      *pcVar7 = cVar8;
      if (0x26 < uVar5) break;
      cVar8 = pcVar6[uVar5];
      pcVar7 = pcVar7 + 1;
      uVar10 = uVar5 + 1;
    } while (cVar8 != '\0');
  }
  pcVar3[uVar5] = '\0';
  return;
}

#undef DAT_10020ba9
#undef DAT_10022418
#undef DAT_10022419

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100229a0
#define DAT_100229a0 (*(char *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_100229c9
#define DAT_100229c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23b0U)))
#undef DAT_10022abc
#define DAT_10022abc (*(int *)(((uintptr_t)pf_module_state + 0x24a3U)))
#undef DAT_10022ac4
#define DAT_10022ac4 (*(char *)(((uintptr_t)pf_module_state + 0x24abU)))
#undef DAT_10022aed
#define DAT_10022aed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef DAT_10022be0
#define DAT_10022be0 (*(int *)(((uintptr_t)pf_module_state + 0x25c7U)))
#undef DAT_10022be8
#define DAT_10022be8 (*(char *)(((uintptr_t)pf_module_state + 0x25cfU)))
#undef DAT_10022c11
#define DAT_10022c11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25f8U)))
#undef DAT_10022d04
#define DAT_10022d04 (*(int *)(((uintptr_t)pf_module_state + 0x26ebU)))
#undef DAT_10022d0c
#define DAT_10022d0c (*(char *)(((uintptr_t)pf_module_state + 0x26f3U)))
#undef DAT_10022d35
#define DAT_10022d35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271cU)))
#undef DAT_10022e28
#define DAT_10022e28 (*(int *)(((uintptr_t)pf_module_state + 0x280fU)))
#undef DAT_10022e30
#define DAT_10022e30 (*(char *)(((uintptr_t)pf_module_state + 0x2817U)))
#undef DAT_10022e59
#define DAT_10022e59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2840U)))
#undef DAT_10022f4c
#define DAT_10022f4c (*(int *)(((uintptr_t)pf_module_state + 0x2933U)))
#undef DAT_10022f54
#define DAT_10022f54 (*(char *)(((uintptr_t)pf_module_state + 0x293bU)))
#undef DAT_10022f7d
#define DAT_10022f7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2964U)))
#undef DAT_10023070
#define DAT_10023070 (*(int *)(((uintptr_t)pf_module_state + 0x2a57U)))
#undef DAT_10023078
#define DAT_10023078 (*(char *)(((uintptr_t)pf_module_state + 0x2a5fU)))
#undef DAT_100230a1
#define DAT_100230a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a88U)))
#undef DAT_10023194
#define DAT_10023194 (*(int *)(((uintptr_t)pf_module_state + 0x2b7bU)))
#undef DAT_1002319c
#define DAT_1002319c (*(char *)(((uintptr_t)pf_module_state + 0x2b83U)))
#undef DAT_100231c5
#define DAT_100231c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bacU)))
#undef DAT_100232b8
#define DAT_100232b8 (*(int *)(((uintptr_t)pf_module_state + 0x2c9fU)))
#undef DAT_100232c0
#define DAT_100232c0 (*(char *)(((uintptr_t)pf_module_state + 0x2ca7U)))
#undef DAT_100232e9
#define DAT_100232e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cd0U)))
#undef DAT_100233dc
#define DAT_100233dc (*(int *)(((uintptr_t)pf_module_state + 0x2dc3U)))
#undef DAT_100233e4
#define DAT_100233e4 (*(char *)(((uintptr_t)pf_module_state + 0x2dcbU)))
#undef DAT_1002340d
#define DAT_1002340d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2df4U)))
#undef DAT_10023500
#define DAT_10023500 (*(int *)(((uintptr_t)pf_module_state + 0x2ee7U)))
#undef DAT_10023508
#define DAT_10023508 (*(char *)(((uintptr_t)pf_module_state + 0x2eefU)))
#undef DAT_10023531
#define DAT_10023531 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
#undef DAT_10023624
#define DAT_10023624 (*(int *)(((uintptr_t)pf_module_state + 0x300bU)))
#undef DAT_1002362c
#define DAT_1002362c (*(char *)(((uintptr_t)pf_module_state + 0x3013U)))
#undef DAT_10023655
#define DAT_10023655 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x303cU)))
#undef DAT_10023748
#define DAT_10023748 (*(int *)(((uintptr_t)pf_module_state + 0x312fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef str_10020c14
#define str_10020c14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#define local_808 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d610
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_1001d610(void)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;

  local_808[0] = '\0';
  if (DAT_100229a0 != '\0') {
    recovered_1001c750(local_808,DAT_10022abc,&DAT_100229c9);
  }
  if (DAT_10022ac4 == '\x01') {
    recovered_1001c750(local_808,DAT_10022be0,&DAT_10022aed);
  }
  if (DAT_10022be8 == '\x01') {
    recovered_1001c750(local_808,DAT_10022d04,&DAT_10022c11);
  }
  if (DAT_10022d0c == '\x01') {
    recovered_1001c750(local_808,DAT_10022e28,&DAT_10022d35);
  }
  if (DAT_10022e30 == '\x01') {
    recovered_1001c750(local_808,DAT_10022f4c,&DAT_10022e59);
  }
  if (DAT_10022f54 == '\x01') {
    recovered_1001c750(local_808,DAT_10023070,&DAT_10022f7d);
  }
  if (DAT_10023078 == '\x01') {
    recovered_1001c750(local_808,DAT_10023194,&DAT_100230a1);
  }
  if (DAT_1002319c == '\x01') {
    recovered_1001c750(local_808,DAT_100232b8,&DAT_100231c5);
  }
  if (DAT_100232c0 == '\x01') {
    recovered_1001c750(local_808,DAT_100233dc,&DAT_100232e9);
  }
  if (DAT_100233e4 == '\x01') {
    recovered_1001c750(local_808,DAT_10023500,&DAT_1002340d);
  }
  if (DAT_10023508 == '\x01') {
    recovered_1001c750(local_808,DAT_10023624,&DAT_10023531);
  }
  if (DAT_1002362c == '\x01') {
    recovered_1001c750(local_808,DAT_10023748,&DAT_10023655);
  }
  uVar3 = strlen(local_808);
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x3b < uVar2)) {
    uVar2 = UINT_00006838;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10020c14,local_808,(uint)uVar3);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100229a0
#undef DAT_100229c9
#undef DAT_10022abc
#undef DAT_10022ac4
#undef DAT_10022aed
#undef DAT_10022be0
#undef DAT_10022be8
#undef DAT_10022c11
#undef DAT_10022d04
#undef DAT_10022d0c
#undef DAT_10022d35
#undef DAT_10022e28
#undef DAT_10022e30
#undef DAT_10022e59
#undef DAT_10022f4c
#undef DAT_10022f54
#undef DAT_10022f7d
#undef DAT_10023070
#undef DAT_10023078
#undef DAT_100230a1
#undef DAT_10023194
#undef DAT_1002319c
#undef DAT_100231c5
#undef DAT_100232b8
#undef DAT_100232c0
#undef DAT_100232e9
#undef DAT_100233dc
#undef DAT_100233e4
#undef DAT_1002340d
#undef DAT_10023500
#undef DAT_10023508
#undef DAT_10023531
#undef DAT_10023624
#undef DAT_1002362c
#undef DAT_10023655
#undef DAT_10023748
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef str_10020c14
#undef local_808

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006888
#define UINT_00006888 (*(uint *)(0x6888U))
#undef UINT_000068d8
#define UINT_000068d8 (*(uint *)(0x68d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d8e0
 */

void recovered_1001d8e0(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xdb < uVar2)) {
    uVar2 = UINT_000068d8;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001d923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
      return;
    }
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x8b < uVar2))))
    {
      uVar2 = UINT_00006888;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001d96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar2)(param_2,param_3);
        return;
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006888
#undef UINT_000068d8

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100225fc
#define DAT_100225fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_10022644
#define DAT_10022644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202bU)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d970
 */

void recovered_1001d970(undefined4 param_1,char *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;

  if ((long)DAT_10022980 < 0x12) {
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = param_1;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = param_3;
    iVar1 = DAT_10022980;
    pcVar2 = &DAT_10020a84;
    if (param_2 != (char *)0x0) {
      pcVar2 = param_2;
    }
    cVar4 = *pcVar2;
    if (cVar4 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar3 = uVar5 + 1;
        (&DAT_1002268c)[uVar5 + (long)iVar1 * 0x2a] = cVar4;
        if (0x28 < uVar3) break;
        cVar4 = pcVar2[uVar5 + 1];
        uVar5 = uVar3;
      } while (cVar4 != '\0');
    }
    (&DAT_1002268c)[uVar3 + (long)iVar1 * 0x2a] = 0;
    DAT_10022980 = DAT_10022980 + 1;
  }
  return;
}

#undef DAT_10020a84
#undef DAT_100225fc
#undef DAT_10022644
#undef DAT_1002268c
#undef DAT_10022980

#undef DAT_100207e0
#define DAT_100207e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef DAT_10020900
#define DAT_10020900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e7U)))
#undef DAT_10020910
#define DAT_10020910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f7U)))
#undef DAT_10022408
#define DAT_10022408 (*(int *)(((uintptr_t)pf_module_state + 0x1defU)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_100225fc
#define DAT_100225fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_10022644
#define DAT_10022644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202bU)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022694
#define DAT_10022694 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207bU)))
#undef DAT_10022696
#define DAT_10022696 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207dU)))
#undef DAT_10022697
#define DAT_10022697 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207eU)))
#undef DAT_10022698
#define DAT_10022698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207fU)))
#undef DAT_10022699
#define DAT_10022699 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2080U)))
#undef DAT_1002269a
#define DAT_1002269a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2081U)))
#undef DAT_1002269c
#define DAT_1002269c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2083U)))
#undef DAT_1002269d
#define DAT_1002269d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2084U)))
#undef DAT_1002269e
#define DAT_1002269e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2085U)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_100229a0
#define DAT_100229a0 (*(char *)(((uintptr_t)pf_module_state + 0x2387U)))
#undef DAT_100229c9
#define DAT_100229c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23b0U)))
#undef DAT_10022abc
#define DAT_10022abc (*(int *)(((uintptr_t)pf_module_state + 0x24a3U)))
#undef DAT_10022ac4
#define DAT_10022ac4 (*(char *)(((uintptr_t)pf_module_state + 0x24abU)))
#undef DAT_10022aed
#define DAT_10022aed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24d4U)))
#undef DAT_10022be0
#define DAT_10022be0 (*(int *)(((uintptr_t)pf_module_state + 0x25c7U)))
#undef DAT_10022be8
#define DAT_10022be8 (*(char *)(((uintptr_t)pf_module_state + 0x25cfU)))
#undef DAT_10022c11
#define DAT_10022c11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25f8U)))
#undef DAT_10022d04
#define DAT_10022d04 (*(int *)(((uintptr_t)pf_module_state + 0x26ebU)))
#undef DAT_10022d0c
#define DAT_10022d0c (*(char *)(((uintptr_t)pf_module_state + 0x26f3U)))
#undef DAT_10022d35
#define DAT_10022d35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271cU)))
#undef DAT_10022e28
#define DAT_10022e28 (*(int *)(((uintptr_t)pf_module_state + 0x280fU)))
#undef DAT_10022e30
#define DAT_10022e30 (*(char *)(((uintptr_t)pf_module_state + 0x2817U)))
#undef DAT_10022e59
#define DAT_10022e59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2840U)))
#undef DAT_10022f4c
#define DAT_10022f4c (*(int *)(((uintptr_t)pf_module_state + 0x2933U)))
#undef DAT_10022f54
#define DAT_10022f54 (*(char *)(((uintptr_t)pf_module_state + 0x293bU)))
#undef DAT_10022f7d
#define DAT_10022f7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2964U)))
#undef DAT_10023070
#define DAT_10023070 (*(int *)(((uintptr_t)pf_module_state + 0x2a57U)))
#undef DAT_10023078
#define DAT_10023078 (*(char *)(((uintptr_t)pf_module_state + 0x2a5fU)))
#undef DAT_100230a1
#define DAT_100230a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a88U)))
#undef DAT_10023194
#define DAT_10023194 (*(int *)(((uintptr_t)pf_module_state + 0x2b7bU)))
#undef DAT_1002319c
#define DAT_1002319c (*(char *)(((uintptr_t)pf_module_state + 0x2b83U)))
#undef DAT_100231c5
#define DAT_100231c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bacU)))
#undef DAT_100232b8
#define DAT_100232b8 (*(int *)(((uintptr_t)pf_module_state + 0x2c9fU)))
#undef DAT_100232c0
#define DAT_100232c0 (*(char *)(((uintptr_t)pf_module_state + 0x2ca7U)))
#undef DAT_100232e9
#define DAT_100232e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cd0U)))
#undef DAT_100233dc
#define DAT_100233dc (*(int *)(((uintptr_t)pf_module_state + 0x2dc3U)))
#undef DAT_100233e4
#define DAT_100233e4 (*(char *)(((uintptr_t)pf_module_state + 0x2dcbU)))
#undef DAT_1002340d
#define DAT_1002340d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2df4U)))
#undef DAT_10023500
#define DAT_10023500 (*(int *)(((uintptr_t)pf_module_state + 0x2ee7U)))
#undef DAT_10023508
#define DAT_10023508 (*(char *)(((uintptr_t)pf_module_state + 0x2eefU)))
#undef DAT_10023531
#define DAT_10023531 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
#undef DAT_10023624
#define DAT_10023624 (*(int *)(((uintptr_t)pf_module_state + 0x300bU)))
#undef DAT_1002362c
#define DAT_1002362c (*(char *)(((uintptr_t)pf_module_state + 0x3013U)))
#undef DAT_10023655
#define DAT_10023655 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x303cU)))
#undef DAT_10023748
#define DAT_10023748 (*(int *)(((uintptr_t)pf_module_state + 0x312fU)))
#undef DAT_10023750
#define DAT_10023750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3137U)))
#undef DAT_10023779
#define DAT_10023779 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3160U)))
#undef DAT_1002386c
#define DAT_1002386c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3253U)))
#undef UNK_100207e8
#define UNK_100207e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef UNK_10020908
#define UNK_10020908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef UNK_10020918
#define UNK_10020918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ffU)))
#undef _DAT_100207e0
#define _DAT_100207e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef _DAT_10020900
#define _DAT_10020900 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e7U)))
#undef _DAT_10020910
#define _DAT_10020910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f7U)))
#undef uRam00000000100207e8
#define uRam00000000100207e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef uRam0000000010020908
#define uRam0000000010020908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef uRam0000000010020918
#define uRam0000000010020918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001da00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001da00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;

  iVar3 = DAT_10022408;
  if ((((((((((DAT_100229a0 == '\x01') && (DAT_10022abc == DAT_10022408)) &&
            (iVar2 = strcmp(&DAT_100229c9,&DAT_10022418), iVar2 == 0)) ||
           (((DAT_10022ac4 == '\x01' && (DAT_10022be0 == iVar3)) &&
            (iVar2 = strcmp(&DAT_10022aed,&DAT_10022418), iVar2 == 0)))) ||
          (((DAT_10022be8 == '\x01' && (DAT_10022d04 == iVar3)) &&
           (iVar2 = strcmp(&DAT_10022c11,&DAT_10022418), iVar2 == 0)))) ||
         (((DAT_10022d0c == '\x01' && (DAT_10022e28 == iVar3)) &&
          (iVar2 = strcmp(&DAT_10022d35,&DAT_10022418), iVar2 == 0)))) ||
        (((DAT_10022e30 == '\x01' && (DAT_10022f4c == iVar3)) &&
         (iVar2 = strcmp(&DAT_10022e59,&DAT_10022418), iVar2 == 0)))) ||
       (((((DAT_10022f54 == '\x01' && (DAT_10023070 == iVar3)) &&
          (iVar2 = strcmp(&DAT_10022f7d,&DAT_10022418), iVar2 == 0)) ||
         (((DAT_10023078 == '\x01' && (DAT_10023194 == iVar3)) &&
          (iVar2 = strcmp(&DAT_100230a1,&DAT_10022418), iVar2 == 0)))) ||
        (((DAT_1002319c == '\x01' && (DAT_100232b8 == iVar3)) &&
         (iVar2 = strcmp(&DAT_100231c5,&DAT_10022418), iVar2 == 0)))))) ||
      ((((DAT_100232c0 == '\x01' && (DAT_100233dc == iVar3)) &&
        (iVar2 = strcmp(&DAT_100232e9,&DAT_10022418), iVar2 == 0)) ||
       ((((DAT_100233e4 == '\x01' && (DAT_10023500 == iVar3)) &&
         (iVar2 = strcmp(&DAT_1002340d,&DAT_10022418), iVar2 == 0)) ||
        (((DAT_10023508 == '\x01' && (DAT_10023624 == iVar3)) &&
         (iVar2 = strcmp(&DAT_10023531,&DAT_10022418), iVar2 == 0)))))))) ||
     (((DAT_1002362c == '\x01' && (DAT_10023748 == iVar3)) &&
      (iVar3 = strcmp(&DAT_10023655,&DAT_10022418), iVar3 == 0)))) {
    if (0x11 < (long)DAT_10022980) goto LAB_1001dcf2;
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0xf;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    uVar1 = uRam0000000010020908;
    lVar4 = (long)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar4) = _DAT_10020900;
    *(undefined8 *)(&DAT_10022694 + lVar4) = uVar1;
    (&DAT_1002269c)[lVar4] = 0x73;
    puVar5 = &DAT_1002269d + lVar4;
  }
  else {
    if (0x11 < (long)DAT_10022980) goto LAB_1001dcf2;
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0xe;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar4 = (long)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar4) = 0x45206f74206e6950;
    *(undefined4 *)(&DAT_10022694 + lVar4) = 0x75626572;
    (&DAT_10022698)[lVar4] = 0x73;
    puVar5 = &DAT_10022699 + lVar4;
  }
  *puVar5 = 0;
  DAT_10022980 = DAT_10022980 + 1;
LAB_1001dcf2:
  iVar3 = DAT_10022408;
  lVar4 = 0;
  do {
    if ((((&DAT_10023750)[lVar4] == '\x01') && (*(int *)((long)&DAT_1002386c + lVar4) == iVar3)) &&
       (iVar2 = strcmp(&DAT_10023779 + lVar4,&DAT_10022418), iVar2 == 0)) {
      if (0x11 < (long)DAT_10022980) goto LAB_1001de22;
      *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x11;
      *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
      uVar1 = uRam0000000010020918;
      lVar4 = (long)DAT_10022980 * 0x2a;
      *(undefined8 *)(&DAT_1002268c + lVar4) = _DAT_10020910;
      *(undefined8 *)(&DAT_10022694 + lVar4) = uVar1;
      *(undefined2 *)(&DAT_1002269c + lVar4) = 0x706f;
      puVar5 = &DAT_1002269e + lVar4;
      goto LAB_1001de19;
    }
    lVar4 = lVar4 + 0x124;
  } while (lVar4 != 0x1b60);
  if ((long)DAT_10022980 < 0x12) {
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x10;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar4 = (long)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar4) = 0x44206f74206e6950;
    *(undefined4 *)(&DAT_10022694 + lVar4) = 0x746b7365;
    *(undefined2 *)(&DAT_10022698 + lVar4) = 0x706f;
    puVar5 = &DAT_1002269a + lVar4;
LAB_1001de19:
    *puVar5 = 0;
    DAT_10022980 = DAT_10022980 + 1;
  }
LAB_1001de22:
  iVar3 = DAT_10022408;
  lVar6 = 0;
  lVar4 = DAT_10022988;
  do {
    if (((*(char *)(lVar4 + lVar6) == '\x01') && (*(int *)(lVar4 + 4 + lVar6) == 5)) &&
       (*(int *)(lVar4 + 0x124 + lVar6) == iVar3)) {
      iVar2 = strcmp((char *)(lVar4 + lVar6 + 0x30),&DAT_10022418);
      if (iVar2 == 0) {
        if (0x11 < (long)DAT_10022980) {
          return;
        }
        *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x13;
        *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
        uVar1 = uRam00000000100207e8;
        lVar4 = (long)DAT_10022980 * 0x2a;
        *(undefined8 *)(&DAT_1002268c + lVar4) = _DAT_100207e0;
        *(undefined8 *)(&DAT_10022694 + lVar4) = uVar1;
        puVar5 = &DAT_1002269c + lVar4;
        goto LAB_1001def3;
      }
      lVar4 = DAT_10022988;
    }
    lVar6 = lVar6 + 300;
  } while (lVar6 != 0x1518);
  if ((long)DAT_10022980 < 0x12) {
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x12;
    *(undefined4 *)(&DAT_10022644 + (long)DAT_10022980 * 4) = 0xffffffff;
    lVar4 = (long)DAT_10022980 * 0x2a;
    *(undefined8 *)(&DAT_1002268c + lVar4) = 0x44206f7420646441;
    *(undefined2 *)(&DAT_10022694 + lVar4) = 0x636f;
    (&DAT_10022696)[lVar4] = 0x6b;
    puVar5 = &DAT_10022697 + lVar4;
LAB_1001def3:
    *puVar5 = 0;
    DAT_10022980 = DAT_10022980 + 1;
  }
  return;
}

#undef DAT_100207e0
#undef DAT_10020900
#undef DAT_10020910
#undef DAT_10022408
#undef DAT_10022418
#undef DAT_100225fc
#undef DAT_10022644
#undef DAT_1002268c
#undef DAT_10022694
#undef DAT_10022696
#undef DAT_10022697
#undef DAT_10022698
#undef DAT_10022699
#undef DAT_1002269a
#undef DAT_1002269c
#undef DAT_1002269d
#undef DAT_1002269e
#undef DAT_10022980
#undef DAT_10022988
#undef DAT_100229a0
#undef DAT_100229c9
#undef DAT_10022abc
#undef DAT_10022ac4
#undef DAT_10022aed
#undef DAT_10022be0
#undef DAT_10022be8
#undef DAT_10022c11
#undef DAT_10022d04
#undef DAT_10022d0c
#undef DAT_10022d35
#undef DAT_10022e28
#undef DAT_10022e30
#undef DAT_10022e59
#undef DAT_10022f4c
#undef DAT_10022f54
#undef DAT_10022f7d
#undef DAT_10023070
#undef DAT_10023078
#undef DAT_100230a1
#undef DAT_10023194
#undef DAT_1002319c
#undef DAT_100231c5
#undef DAT_100232b8
#undef DAT_100232c0
#undef DAT_100232e9
#undef DAT_100233dc
#undef DAT_100233e4
#undef DAT_1002340d
#undef DAT_10023500
#undef DAT_10023508
#undef DAT_10023531
#undef DAT_10023624
#undef DAT_1002362c
#undef DAT_10023655
#undef DAT_10023748
#undef DAT_10023750
#undef DAT_10023779
#undef DAT_1002386c
#undef UNK_100207e8
#undef UNK_10020908
#undef UNK_10020918
#undef _DAT_100207e0
#undef _DAT_10020900
#undef _DAT_10020910
#undef uRam00000000100207e8
#undef uRam0000000010020908
#undef uRam0000000010020918

#undef DAT_10022410
#define DAT_10022410 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1df7U)))
#undef DAT_100225fc
#define DAT_100225fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_10022644
#define DAT_10022644 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202bU)))
#undef DAT_1002268c
#define DAT_1002268c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2073U)))
#undef DAT_10022980
#define DAT_10022980 (*(int *)(((uintptr_t)pf_module_state + 0x2367U)))
#define local_38 (*(char (*)[48])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001df60
 */

void recovered_1001df60(char *param_1,undefined4 param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;

  iVar3 = 0;
  DAT_10022410 = param_2;
LAB_1001df77:
  if (param_1 == (char *)0x0) {
    return;
  }
  local_38[0] = '\0';
  cVar8 = *param_1;
  if (cVar8 == '\0') {
    return;
  }
  iVar4 = 0;
  pcVar5 = param_1;
  do {
    lVar7 = 0;
    while (((cVar8 != '\0' && (cVar8 != '\n')) && (cVar8 != '|'))) {
      local_38[lVar7] = cVar8;
      cVar8 = pcVar5[lVar7 + 1];
      if (((cVar8 == '\0') || (cVar8 == '\n')) || (cVar8 == '|')) {
        pcVar5 = pcVar5 + lVar7 + 1;
        lVar7 = lVar7 + 1;
        goto LAB_1001e050;
      }
      local_38[lVar7 + 1] = cVar8;
      cVar8 = pcVar5[lVar7 + 2];
      if (((cVar8 == '\0') || (cVar8 == '\n')) || (cVar8 == '|')) {
        pcVar5 = pcVar5 + lVar7 + 2;
        lVar7 = lVar7 + 2;
        goto LAB_1001e050;
      }
      if (lVar7 == 0x27) {
        pcVar5 = pcVar5 + 0x29;
        lVar7 = 0x29;
        goto LAB_1001e050;
      }
      local_38[lVar7 + 2] = cVar8;
      lVar2 = lVar7 + 3;
      lVar7 = lVar7 + 3;
      cVar8 = pcVar5[lVar2];
    }
    pcVar5 = pcVar5 + lVar7;
LAB_1001e050:
    local_38[lVar7] = '\0';
    for (; (cVar8 = *pcVar5, cVar8 == '|' || (cVar8 == '\n')); pcVar5 = pcVar5 + 1) {
    }
    if (local_38[0] != '\0') {
      if (iVar4 == iVar3) break;
      iVar4 = iVar4 + 1;
    }
    if (cVar8 == '\0') {
      return;
    }
  } while( true );
  if ((long)DAT_10022980 < 0x12) {
    *(undefined4 *)(&DAT_100225fc + (long)DAT_10022980 * 4) = 0x1c;
    *(int *)(&DAT_10022644 + (long)DAT_10022980 * 4) = iVar3;
    iVar4 = DAT_10022980;
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      (&DAT_1002268c)[uVar6 + (long)iVar4 * 0x2a] = local_38[0];
      if (0x28 < uVar1) break;
      local_38[0] = local_38[uVar6 + 1];
      uVar6 = uVar1;
    } while (local_38[0] != '\0');
    (&DAT_1002268c)[uVar1 + (long)iVar4 * 0x2a] = 0;
    DAT_10022980 = DAT_10022980 + 1;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 == 0x12) {
    return;
  }
  goto LAB_1001df77;
}

#undef DAT_10022410
#undef DAT_100225fc
#undef DAT_10022644
#undef DAT_1002268c
#undef DAT_10022980
#undef local_38

#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_100223f4
#define DAT_100223f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ddbU)))
#undef DAT_100223f8
#define DAT_100223f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ddfU)))
#undef DAT_10022408
#define DAT_10022408 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1defU)))
#undef DAT_1002240c
#define DAT_1002240c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1df3U)))
#undef DAT_1002240d
#define DAT_1002240d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1df4U)))
#undef DAT_1002240e
#define DAT_1002240e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1df5U)))
#undef DAT_1002240f
#define DAT_1002240f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1df6U)))
#undef DAT_10022418
#define DAT_10022418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dffU)))
#undef DAT_10022509
#define DAT_10022509 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e110
 */

void recovered_1001e110(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,
                       undefined4 param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;

  DAT_1002240c = (undefined1)param_6;
  DAT_100223f4 = param_1;
  DAT_100223f8 = param_2;
  DAT_10022408 = param_5;
  if (param_6 == 0) {
    uVar2 = recovered_10011700(param_3);
    DAT_1002240d = (undefined1)uVar2;
  }
  else {
    DAT_1002240d = 0;
  }
  if (param_3 == (byte *)0x0) {
    pbVar8 = &DAT_10020a84;
    pbVar3 = (byte *)0x0;
  }
  else {
    bVar4 = *param_3;
    pbVar3 = (byte *)0x0;
    if (bVar4 != 0) {
      pbVar8 = param_3;
      do {
        if (bVar4 == 0x2f) {
          pbVar3 = pbVar8;
        }
        bVar4 = pbVar8[1];
        pbVar8 = pbVar8 + 1;
      } while (bVar4 != 0);
    }
    pbVar8 = param_3;
  }
  pbVar5 = pbVar3 + 1;
  if (pbVar3 == (byte *)0x0) {
    pbVar5 = pbVar8;
  }
  pbVar3 = (byte *)0x0;
  bVar4 = *pbVar5;
  while (bVar4 != 0) {
    if (bVar4 == 0x2e) {
      pbVar3 = pbVar5;
    }
    pbVar8 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar8;
  }
  pbVar8 = &DAT_10020a84;
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_10020a84;
  }
  bVar4 = *pbVar3;
  if (bVar4 == 0) {
    bVar7 = 0x2e;
    bVar4 = 0;
LAB_1001e264:
    DAT_1002240e = bVar4 == bVar7;
  }
  else {
    bVar7 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar7 = bVar4;
    }
    if (bVar7 == 0x2e) {
      bVar4 = pbVar3[1];
      if (bVar4 == 0) {
        bVar7 = 0x61;
        bVar4 = 0;
      }
      else {
        bVar7 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar7 = bVar4;
        }
        if (bVar7 != 0x61) goto LAB_1001e25a;
        bVar1 = pbVar3[2];
        bVar7 = 0x70;
        bVar4 = 0;
        if (bVar1 != 0) {
          bVar4 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar4 = bVar1;
          }
          if (bVar4 != 0x70) goto LAB_1001e25a;
          bVar1 = pbVar3[3];
          bVar4 = 0;
          if (bVar1 != 0) {
            bVar4 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar4 = bVar1;
            }
            if (bVar4 != 0x70) goto LAB_1001e25a;
            bVar4 = pbVar3[4];
            bVar7 = 0;
          }
        }
      }
      goto LAB_1001e264;
    }
LAB_1001e25a:
    DAT_1002240e = false;
  }
  DAT_1002240f = recovered_1001cef0(param_3);
  pbVar3 = param_3;
  if (param_3 == (byte *)0x0) {
    pbVar3 = &DAT_10020a84;
  }
  bVar4 = *pbVar3;
  if (bVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar6 = uVar9 + 1;
      (&DAT_10022418)[uVar9] = bVar4;
      if (0xef < uVar6) break;
      bVar4 = pbVar3[uVar9 + 1];
      uVar9 = uVar6;
    } while (bVar4 != 0);
  }
  (&DAT_10022418)[uVar6] = 0;
  if ((param_4 == (byte *)0x0) || (bVar4 = *param_4, bVar4 == 0)) {
    if (param_3 == (byte *)0x0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      bVar4 = *param_3;
      pbVar3 = (byte *)0x0;
      if (bVar4 != 0) {
        pbVar8 = param_3;
        do {
          if (bVar4 == 0x2f) {
            pbVar3 = pbVar8;
          }
          bVar4 = pbVar8[1];
          pbVar8 = pbVar8 + 1;
        } while (bVar4 != 0);
      }
      pbVar8 = param_3;
    }
    param_4 = pbVar3 + 1;
    if (pbVar3 == (byte *)0x0) {
      param_4 = pbVar8;
    }
    bVar4 = *param_4;
    if (bVar4 == 0) {
      uVar6 = 0;
      goto LAB_1001e344;
    }
  }
  uVar9 = 0;
  do {
    uVar6 = uVar9 + 1;
    (&DAT_10022509)[uVar9] = bVar4;
    if (0xef < uVar6) break;
    bVar4 = param_4[uVar9 + 1];
    uVar9 = uVar6;
  } while (bVar4 != 0);
LAB_1001e344:
  (&DAT_10022509)[uVar6] = 0;
  return;
}

#undef DAT_10020a84
#undef DAT_100223f4
#undef DAT_100223f8
#undef DAT_10022408
#undef DAT_1002240c
#undef DAT_1002240d
#undef DAT_1002240e
#undef DAT_1002240f
#undef DAT_10022418
#undef DAT_10022509

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10020920
#define DAT_10020920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x307U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006890
#define UINT_00006890 (*(uint *)(0x6890U))
#undef UINT_000068e8
#define UINT_000068e8 (*(uint *)(0x68e8U))
#undef UNK_10020928
#define UNK_10020928 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30fU)))
#undef _DAT_10020920
#define _DAT_10020920 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x307U)))
#undef str_10020930
#define str_10020930 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x317U)))
#undef str_10021155
#define str_10021155 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3cU)))
#undef uRam0000000010020928
#define uRam0000000010020928 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x30fU)))
#define uStack_30 (*(undefined8 *)(frame + 96))
#define local_78 (*(byte (*)[48])(frame + 24))
#define local_48 (*(undefined4 *)(frame + 72))
#define local_44 (*(undefined4 *)(frame + 76))
#define local_40 (*(byte * *)(frame + 80))
#define local_38 (*(undefined8 *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001e360(byte *param_1,int param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  char *pcVar12;
  char cVar13;
  int iVar14;
  void *dst;
  byte bVar15;
  byte bVar16;
  char *pcVar17;
  long lVar18;

  if (param_1 == (byte *)0x0) {
    return;
  }
  bVar4 = *param_1;
  if (bVar4 == 0) {
    return;
  }
  pbVar10 = (byte *)0x0;
  pbVar6 = param_1;
  bVar16 = bVar4;
  do {
    if (bVar16 == 0x2f) {
      pbVar10 = pbVar6;
    }
    bVar16 = pbVar6[1];
    pbVar6 = pbVar6 + 1;
  } while (bVar16 != 0);
  pbVar6 = pbVar10 + 1;
  if (pbVar10 == (byte *)0x0) {
    pbVar6 = param_1;
  }
  bVar16 = *pbVar6;
  if (bVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar11 = uVar8 + 1;
      local_78[uVar8] = bVar16;
      if (0x26 < uVar11) break;
      bVar16 = pbVar6[uVar8 + 1];
      uVar8 = uVar11;
    } while (bVar16 != 0);
  }
  local_78[uVar11] = 0;
  pbVar10 = (byte *)0x0;
  pbVar6 = param_1;
  bVar16 = bVar4;
  do {
    if (bVar16 == 0x2f) {
      pbVar10 = pbVar6;
    }
    bVar16 = pbVar6[1];
    pbVar6 = pbVar6 + 1;
  } while (bVar16 != 0);
  pbVar6 = pbVar10 + 1;
  if (pbVar10 == (byte *)0x0) {
    pbVar6 = param_1;
  }
  pbVar10 = (byte *)0x0;
  bVar16 = *pbVar6;
  while (bVar16 != 0) {
    if (bVar16 == 0x2e) {
      pbVar10 = pbVar6;
    }
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar16 = *pbVar1;
  }
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = &DAT_10020a84;
  }
  bVar16 = *pbVar10;
  if (bVar16 == 0) {
    bVar15 = 0x2e;
    bVar16 = 0;
LAB_1001e4cc:
    uVar9 = 0x80000002;
    if (bVar16 != bVar15) goto LAB_1001e4da;
  }
  else {
    bVar15 = bVar16 | 0x20;
    if (0x19 < (byte)(bVar16 + 0xbf)) {
      bVar15 = bVar16;
    }
    if (bVar15 == 0x2e) {
      bVar16 = pbVar10[1];
      if (bVar16 == 0) {
        bVar15 = 0x77;
        bVar16 = 0;
      }
      else {
        bVar15 = bVar16 | 0x20;
        if (0x19 < (byte)(bVar16 + 0xbf)) {
          bVar15 = bVar16;
        }
        if (bVar15 != 0x77) goto LAB_1001e4da;
        bVar16 = pbVar10[2];
        if (bVar16 == 0) {
          bVar15 = 0x73;
          bVar16 = 0;
        }
        else {
          bVar15 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar15 = bVar16;
          }
          if (bVar15 != 0x73) goto LAB_1001e4da;
          bVar16 = pbVar10[3];
          bVar15 = 0;
        }
      }
      goto LAB_1001e4cc;
    }
LAB_1001e4da:
    pbVar6 = (byte *)0x0;
    pbVar10 = param_1;
    bVar16 = bVar4;
    do {
      if (bVar16 == 0x2f) {
        pbVar6 = pbVar10;
      }
      bVar16 = pbVar10[1];
      pbVar10 = pbVar10 + 1;
    } while (bVar16 != 0);
    pbVar10 = pbVar6 + 1;
    if (pbVar6 == (byte *)0x0) {
      pbVar10 = param_1;
    }
    pbVar6 = (byte *)0x0;
    bVar16 = *pbVar10;
    while (bVar16 != 0) {
      if (bVar16 == 0x2e) {
        pbVar6 = pbVar10;
      }
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar16 = *pbVar1;
    }
    if (pbVar6 == (byte *)0x0) {
      pbVar6 = &DAT_10020a84;
    }
    bVar16 = *pbVar6;
    if (bVar16 == 0) {
      bVar15 = 0x2e;
      bVar16 = 0;
LAB_1001e5fa:
      uVar9 = 0x80000003;
      if (bVar16 == bVar15) goto LAB_1001e6de;
    }
    else {
      bVar15 = bVar16 | 0x20;
      if (0x19 < (byte)(bVar16 + 0xbf)) {
        bVar15 = bVar16;
      }
      if (bVar15 == 0x2e) {
        bVar16 = pbVar6[1];
        if (bVar16 == 0) {
          bVar15 = 0x6c;
          bVar16 = 0;
        }
        else {
          bVar15 = bVar16 | 0x20;
          if (0x19 < (byte)(bVar16 + 0xbf)) {
            bVar15 = bVar16;
          }
          if (bVar15 != 0x6c) goto LAB_1001e608;
          bVar16 = pbVar6[2];
          if (bVar16 == 0) {
            bVar15 = 0x75;
            bVar16 = 0;
          }
          else {
            bVar15 = bVar16 | 0x20;
            if (0x19 < (byte)(bVar16 + 0xbf)) {
              bVar15 = bVar16;
            }
            if (bVar15 != 0x75) goto LAB_1001e608;
            bVar16 = pbVar6[3];
            if (bVar16 == 0) {
              bVar15 = 0x61;
              bVar16 = 0;
            }
            else {
              bVar15 = bVar16 | 0x20;
              if (0x19 < (byte)(bVar16 + 0xbf)) {
                bVar15 = bVar16;
              }
              if (bVar15 != 0x61) goto LAB_1001e608;
              bVar16 = pbVar6[4];
              bVar15 = 0;
            }
          }
        }
        goto LAB_1001e5fa;
      }
    }
LAB_1001e608:
    pbVar6 = (byte *)0x0;
    pbVar10 = param_1;
    do {
      if (bVar4 == 0x2f) {
        pbVar6 = pbVar10;
      }
      bVar4 = pbVar10[1];
      pbVar10 = pbVar10 + 1;
    } while (bVar4 != 0);
    pbVar10 = pbVar6 + 1;
    if (pbVar6 == (byte *)0x0) {
      pbVar10 = param_1;
    }
    pbVar6 = (byte *)0x0;
    bVar4 = *pbVar10;
    while (bVar4 != 0) {
      if (bVar4 == 0x2e) {
        pbVar6 = pbVar10;
      }
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    pbVar10 = &DAT_10020a84;
    if (pbVar6 != (byte *)0x0) {
      pbVar10 = pbVar6;
    }
    bVar4 = *pbVar10;
    if (bVar4 == 0) {
      bVar16 = 0x2e;
      bVar4 = 0;
    }
    else {
      bVar16 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar16 = bVar4;
      }
      uVar9 = 0x80000001;
      if (bVar16 != 0x2e) goto LAB_1001e6de;
      bVar4 = pbVar10[1];
      if (bVar4 == 0) {
        bVar16 = 0x72;
        bVar4 = 0;
      }
      else {
        bVar16 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar16 = bVar4;
        }
        if (bVar16 != 0x72) goto LAB_1001e6de;
        bVar4 = pbVar10[2];
        if (bVar4 == 0) {
          bVar16 = 0x62;
          bVar4 = 0;
        }
        else {
          bVar16 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar16 = bVar4;
          }
          if (bVar16 != 0x62) goto LAB_1001e6de;
          bVar4 = pbVar10[3];
          bVar16 = 0;
        }
      }
    }
    uVar9 = (uint)(bVar4 == bVar16) * 3 + 0x80000001;
  }
LAB_1001e6de:
  iVar14 = Ram0000000000006800;
  if ((((iVar14 == 0x50414d57) && (iVar14 = Ram0000000000006804, iVar14 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xeb < uVar2)) {
    uVar2 = UINT_000068e8;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1001e785;
    uVar9 = (*(code *)(ulong)uVar2)(param_2,(char *)param_1,uVar9);
  }
  else {
    iVar14 = Ram0000000000006800;
    if (((iVar14 != 0x50414d57) || (iVar14 = Ram0000000000006804, iVar14 == 0)) ||
       ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x94))))
    goto LAB_1001e785;
    uVar2 = UINT_00006890;
    if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1001e785;
    uVar9 = (*(code *)(ulong)uVar2)((char *)param_1,uVar9);
  }
  if (uVar9 != 0) {
    uVar11 = 0;
    lVar5 = DAT_10022988;
    do {
      if ((*(char *)(lVar5 + uVar11 * 300) == '\x01') &&
         (dst = (void *)(uVar11 * 300 + lVar5), *(char *)((long)dst + 1) == '\0')) {
        lVar7 = 0;
        iVar14 = 0;
        do {
          if (*(char *)(DAT_10022368 + lVar7) == '\x01') {
            iVar14 = iVar14 + (uint)(uVar11 == *(uint *)(DAT_10022368 + 0x14 + lVar7));
          }
          if (*(char *)(DAT_10022368 + 0xda8 + lVar7) == '\x01') {
            iVar14 = iVar14 + (uint)(uVar11 == *(uint *)(DAT_10022368 + 0xdbc + lVar7));
          }
          lVar7 = lVar7 + 0x1b50;
        } while (lVar7 != 0x11120);
        if (iVar14 == 0) {
          memset(dst,0,300);
          lVar5 = DAT_10022988;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x12);
    return;
  }
LAB_1001e785:
  uVar11 = recovered_10003ea0(4,(char *)local_78,0xb784ec,'\0');
  local_48 = 5;
  local_44 = (undefined4)uVar11;
  local_38 = _DAT_10020920;
  uStack_30 = uRam0000000010020928;
  local_40 = local_78;
  uVar11 = recovered_1000cbb0((undefined8 *)&local_48);
  lVar5 = DAT_10022368;
  if (-1 < (int)uVar11) {
    lVar18 = (uVar11 & 0xffffffff) * 0xda8;
    lVar7 = DAT_10022368 + lVar18 + 0x78;
    bVar4 = *param_1;
    if (bVar4 == 0) {
      uVar11 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar11 = uVar8 + 1;
        *(byte *)(lVar7 + uVar8) = bVar4;
        if (0xef < uVar11) break;
        bVar4 = param_1[uVar8 + 1];
        uVar8 = uVar11;
      } while (bVar4 != 0);
    }
    *(undefined1 *)(lVar7 + uVar11) = 0;
    *(int *)(lVar5 + 0x25c + lVar18) = param_2;
    uVar3 = PF_PART8(str_10020930, 8);
    pcVar17 = (char *)(lVar5 + lVar18 + 0x261);
    pcVar12 = (char *)(lVar5 + 0x261 + lVar18);
    *(undefined8 *)pcVar12 = PF_PART8(str_10020930, 0);
    *(undefined8 *)(pcVar12 + 8) = uVar3;
    uVar11 = strlen(pcVar17);
    if (uVar11 < 0x800) {
      bVar4 = *param_1;
      uVar8 = uVar11;
      if (uVar11 != 0x7ff && bVar4 != 0) {
        do {
          param_1 = param_1 + 1;
          pcVar17[uVar8] = bVar4;
          uVar11 = uVar8 + 1;
          if (0x7fd < uVar8) break;
          bVar4 = *param_1;
          uVar8 = uVar11;
        } while (bVar4 != 0);
      }
      pcVar17[uVar11] = '\0';
    }
    pcVar12 = (char *)(DAT_10022368 + lVar18 + 0x261);
    uVar11 = strlen(pcVar12);
    if (uVar11 < 0x800) {
      uVar8 = 0x7ff;
      if (uVar11 != 0x7ff) {
        cVar13 = '\n';
        pcVar17 = str_10021155;
        do {
          pcVar17 = pcVar17 + 1;
          pcVar12[uVar11] = cVar13;
          uVar8 = uVar11 + 1;
          if (0x7fd < uVar11) break;
          cVar13 = *pcVar17;
          uVar11 = uVar8;
        } while (cVar13 != '\0');
      }
      pcVar12[uVar8] = '\0';
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10020920
#undef DAT_10020a84
#undef DAT_10022368
#undef DAT_10022988
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006890
#undef UINT_000068e8
#undef UNK_10020928
#undef _DAT_10020920
#undef str_10020930
#undef str_10021155
#undef uRam0000000010020928
#undef uStack_30
#undef local_78
#undef local_48
#undef local_44
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10022178
#define DAT_10022178 (*(uint *)(((uintptr_t)pf_module_state + 0x1b5fU)))
#undef DAT_10022180
#define DAT_10022180 (*(uint *)(((uintptr_t)pf_module_state + 0x1b67U)))
#undef DAT_1002231c
#define DAT_1002231c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022324
#define DAT_10022324 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022988
#define DAT_10022988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x236fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_1002549c
#define DAT_1002549c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e83U)))
#undef DAT_100254a0
#define DAT_100254a0 (*(uint *)(((uintptr_t)pf_module_state + 0x4e87U)))
#undef DAT_10027194
#define DAT_10027194 (*(uint *)(((uintptr_t)pf_module_state + 0x6b7bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e9a0
 */

void recovered_1001e9a0(uint param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;

  if ((param_1 < 0x14) &&
     (lVar3 = (ulong)param_1 * 0xda8, *(char *)(DAT_10022368 + lVar3) == '\x01')) {
    if (DAT_10022178 == param_1) {
      DAT_10022178 = 0xffffffff;
    }
    if (DAT_10022180 == param_1) {
      DAT_10022180 = 0xffffffff;
    }
    if (DAT_10022324 == param_1) {
      DAT_10022324 = 0xffffffff;
    }
    if ((DAT_1002549c == '\x01') && (DAT_100254a0 == param_1)) {
      memset(&DAT_1002549c,0,0x1fc);
    }
    if ((param_2 != '\0') && (*(int *)(DAT_10022368 + 0x10 + lVar3) == 6)) {
      lVar1 = DAT_10022368 + lVar3;
      if (*(uint *)(lVar1 + 0xb24) != 0) {
        terror_ui_window_request_close(*(uint *)(lVar1 + 0xb24),*(int *)(lVar1 + 0x58),*(int *)(lVar1 + 0x5c));
      }
    }
    pvVar7 = *(void **)(DAT_10022368 + 0xaf0 + lVar3);
    if ((((pvVar7 != (void *)0x0) && (iVar4 = Ram0000000000006800, iVar4 == 0x50414d57)) &&
        (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
       ((uVar8 = Ram0000000000006808, 0xb < uVar8 && (uVar8 = Ram0000000000006808, 0x53 < uVar8))))
    {
      uVar8 = UINT_00006850;
      if ((code *)(ulong)uVar8 != (code *)0x0) {
        (*(code *)(ulong)uVar8)(pvVar7);
      }
    }
    lVar1 = DAT_10022368 + lVar3;
    pvVar7 = *(void **)(DAT_10022368 + 0xb0c + lVar3);
    if (((pvVar7 != (void *)0x0) && (iVar4 = Ram0000000000006800, iVar4 == 0x50414d57)) &&
       ((iVar4 = Ram0000000000006804, iVar4 != 0 &&
        ((uVar8 = Ram0000000000006808, 0xb < uVar8 && (uVar8 = Ram0000000000006808, 0x53 < uVar8))))
       )) {
      uVar8 = UINT_00006850;
      if ((code *)(ulong)uVar8 != (code *)0x0) {
        (*(code *)(ulong)uVar8)(pvVar7);
      }
    }
    memset((void *)(lVar1 + 0xb0c),0,0x18);
    lVar1 = DAT_10022990;
    if (0 < (int)DAT_10027194) {
      puVar6 = (undefined8 *)(DAT_10022990 + 0x14);
      uVar9 = 0;
      uVar2 = (ulong)(DAT_10027194 - 1);
LAB_1001eb70:
      if (*(uint *)((long)puVar6 + -0x14) != param_1) goto code_r0x1001eb76;
      uVar8 = DAT_10027194 - 1;
      if ((int)uVar8 <= (int)uVar9) goto LAB_1001ebf3;
      uVar10 = uVar8 - uVar9;
      if (uVar10 < 8) goto LAB_1001ebe0;
      uVar5 = (DAT_10027194 - 1) - uVar9;
      uVar9 = (uVar2 & 0xfffffffffffffff8) + uVar9;
      uVar5 = uVar5 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)((long)puVar6 + -0x14) = puVar6[-2];
        *(undefined8 *)((long)puVar6 + -0xc) = puVar6[-1];
        *(undefined8 *)((long)puVar6 + -4) = *puVar6;
        *(undefined8 *)((long)puVar6 + 4) = puVar6[1];
        puVar6 = puVar6 + 4;
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
      if (uVar10 != (uVar10 & 0xfffffffffffffff8)) {
LAB_1001ebe0:
        do {
          *(undefined4 *)(lVar1 + uVar9 * 4) = *(undefined4 *)(lVar1 + 4 + uVar9 * 4);
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
LAB_1001ebf3:
      DAT_1002231c = 0xffffffff;
      if (DAT_10027194 != 1) {
        DAT_1002231c = *(undefined4 *)(lVar1 + -8 + (ulong)DAT_10027194 * 4);
      }
      DAT_10027194 = uVar8;
    }
LAB_1001ec0e:
    uVar9 = 0;
    memset((void *)(lVar3 + DAT_10022368),0,0xda8);
    lVar3 = DAT_10022988;
    do {
      if (*(char *)(lVar3 + uVar9 * 300) == '\x01') {
        pvVar7 = (void *)(uVar9 * 300 + lVar3);
        if (*(char *)((long)pvVar7 + 1) == '\0') {
          lVar1 = 0;
          iVar4 = 0;
          do {
            if (*(char *)(DAT_10022368 + lVar1) == '\x01') {
              iVar4 = iVar4 + (uint)(uVar9 == *(uint *)(DAT_10022368 + 0x14 + lVar1));
            }
            if (*(char *)(DAT_10022368 + 0xda8 + lVar1) == '\x01') {
              iVar4 = iVar4 + (uint)(uVar9 == *(uint *)(DAT_10022368 + 0xdbc + lVar1));
            }
            lVar1 = lVar1 + 0x1b50;
          } while (lVar1 != 0x11120);
          if (iVar4 == 0) {
            memset(pvVar7,0,300);
            lVar3 = DAT_10022988;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x12);
  }
  return;
code_r0x1001eb76:
  uVar9 = uVar9 + 1;
  uVar2 = uVar2 - 1;
  puVar6 = (undefined8 *)((long)puVar6 + 4);
  if (DAT_10027194 == uVar9) goto LAB_1001ec0e;
  goto LAB_1001eb70;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10022178
#undef DAT_10022180
#undef DAT_1002231c
#undef DAT_10022324
#undef DAT_10022368
#undef DAT_10022988
#undef DAT_10022990
#undef DAT_1002549c
#undef DAT_100254a0
#undef DAT_10027194
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850

#undef DAT_1002719c
#define DAT_1002719c (*(int *)(((uintptr_t)pf_module_state + 0x6b83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ece0
 */

int recovered_1001ece0(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar2 = 0xbc;
  if (param_1 == 0) {
    iVar5 = 0;
    iVar3 = 0;
    iVar4 = 0xbc;
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58) + 0x12;
    iVar3 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar7 = *(int *)(param_1 + 0x60) + -0x24;
    iVar8 = *(int *)(param_1 + 100) + -0x34;
    iVar4 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar8 = iVar3 + iVar8 + -0x84;
  iVar3 = iVar4 + 0x32;
  if (iVar4 + 0x32 < iVar8) {
    iVar3 = iVar8;
  }
  if (param_1 == 0) {
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar9 = *(int *)(param_1 + 100) + -0x34;
    iVar2 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar9 = iVar8 + iVar9 + -0x84;
  iVar8 = iVar2 + 0x32;
  if (iVar2 + 0x32 < iVar9) {
    iVar8 = iVar9;
  }
  if (param_1 != 0) {
    iVar9 = 1;
    if (0x18 < iVar7 + -0x22) {
      iVar9 = iVar7 + -0x3a;
    }
    if (((iVar5 + 0x24 <= param_2) && (iVar7 = iVar4 + 0x1f, iVar7 <= param_3)) &&
       (param_2 < iVar5 + iVar9 + 0x24)) {
      iVar5 = 0x12;
      if (0x25 < (iVar3 - iVar4) + -0xc) {
        iVar5 = (iVar3 - iVar4) + -0x20;
      }
      if (param_3 < iVar5 + iVar7) {
        iVar3 = *(int *)(param_1 + 0xb00);
        iVar4 = DAT_1002719c;
        if (DAT_1002719c < iVar3) {
          iVar4 = iVar3;
        }
        uVar6 = 1;
        do {
          if (iVar4 == iVar3) {
            return -1;
          }
          bVar1 = iVar7 <= param_3;
          iVar7 = iVar7 + 0x12;
          if (param_3 < iVar7 && bVar1) {
            return iVar3;
          }
          if ((iVar8 - iVar2) + -0xc < 0x26) {
            return -1;
          }
          iVar3 = iVar3 + 1;
          bVar1 = uVar6 < ((iVar8 - iVar2) - 0x20U) / 0x12;
          uVar6 = uVar6 + 1;
        } while (bVar1);
      }
    }
  }
  return -1;
}

#undef DAT_1002719c

#undef DAT_1002719c
#define DAT_1002719c (*(uint *)(((uintptr_t)pf_module_state + 0x6b83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ee90
 */

void recovered_1001ee90(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  uVar1 = DAT_1002719c;
  if (param_1 == 0) {
    iVar2 = 0xbc;
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c) + 0x26;
    iVar7 = *(int *)(param_1 + 100) + -0x34;
    iVar2 = *(int *)(param_1 + 0x5c) + 0xe2;
  }
  iVar7 = iVar4 + iVar7 + -0x84;
  iVar4 = iVar2 + 0x32;
  if (iVar2 + 0x32 < iVar7) {
    iVar4 = iVar7;
  }
  uVar5 = ((iVar4 - iVar2) - 0x20U) / 0x12;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  if ((iVar4 - iVar2) + -0xc < 0x26) {
    uVar5 = 1;
  }
  if ((int)DAT_1002719c <= (int)param_2 || param_1 == 0) {
    return;
  }
  *(uint *)(param_1 + 0xafc) = param_2;
  *(undefined1 *)(param_1 + 0xb04) = 1;
  uVar3 = *(uint *)(param_1 + 0xb00);
  uVar6 = param_2;
  if ((int)uVar3 <= (int)param_2) {
    if ((int)param_2 < (int)(uVar3 + uVar5)) goto LAB_1001ef63;
    uVar6 = (param_2 - uVar5) + 1;
  }
  uVar3 = uVar6;
  *(uint *)(param_1 + 0xb00) = uVar3;
LAB_1001ef63:
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 100) + iVar4 + -0x92;
  iVar2 = iVar4 + 0x114;
  if (iVar4 + 0x114 < iVar7) {
    iVar2 = iVar7;
  }
  uVar5 = ((iVar2 - iVar4) - 0x102U) / 0x12;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  if ((iVar2 - iVar4) + -0xee < 0x26) {
    uVar5 = 1;
  }
  uVar6 = uVar1 - uVar5;
  if (uVar1 < uVar5) {
    uVar6 = 0;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0xafc) = 0;
    *(undefined1 *)(param_1 + 0xb04) = 0;
    return;
  }
  if (uVar1 <= param_2) {
    *(undefined4 *)(param_1 + 0xafc) = 0;
    *(undefined1 *)(param_1 + 0xb04) = 1;
  }
  if ((int)uVar3 < 0) {
    *(undefined4 *)(param_1 + 0xb00) = 0;
    return;
  }
  if (uVar6 < uVar3) {
    *(uint *)(param_1 + 0xb00) = uVar6;
  }
  return;
}

#undef DAT_1002719c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f010
 */

void recovered_1001f010(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 100);
    uVar3 = 0x12;
    if (0x15 < iVar7 + -0x84) {
      uVar3 = iVar7 - 0x88;
    }
    iVar4 = iVar7 + -0x6a;
    iVar5 = (int)((ulong)((long)iVar4 * -0x22983759) >> 0x20) + iVar7 + -0x6a;
    iVar6 = (iVar5 >> 6) - (iVar5 >> 0x1f);
    iVar5 = *(int *)(param_1 + 0x60) +
            (int)((ulong)((long)(*(int *)(param_1 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) + -0x26;
    iVar5 = (iVar5 >> 6) - (iVar5 >> 0x1f);
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    iVar7 = ((int)((ulong)((long)iVar4 * 0x22983759) >> 0x20) - iVar7) + 0x6a;
    if (iVar4 < 0x4a) {
      iVar6 = 1;
    }
    iVar1 = *(int *)(param_1 + 0xaf8);
    iVar8 = -1;
    if (0x49 < iVar4) {
      iVar8 = (iVar7 >> 6) - (iVar7 >> 0x1f);
    }
    iVar7 = iVar8 * iVar5 + iVar1 + 2;
    uVar9 = uVar3;
    if (-2 < iVar1) {
      if ((iVar5 * iVar6 < iVar1 + 2) && (0 < iVar7)) {
        uVar2 = (int)(iVar5 * iVar6 * uVar3) / (iVar1 + 2);
        uVar9 = 0x12;
        if (0x12 < (int)uVar2) {
          uVar9 = uVar2;
        }
        if ((int)uVar3 <= (int)uVar9) {
          uVar9 = uVar3;
        }
      }
    }
    if ((iVar7 < 1) || ((int)(uVar3 - uVar9) < 1)) {
      *(undefined4 *)(param_1 + 0xb00) = 0;
      return;
    }
    iVar5 = (int)(((param_2 - (*(int *)(param_1 + 0x5c) + (uVar9 >> 1))) + -0x5e) * iVar7) /
            (int)(uVar3 - uVar9);
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    if (iVar7 < iVar5) {
      iVar4 = iVar7;
    }
    *(int *)(param_1 + 0xb00) = iVar4;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f160
 */

ulong recovered_1001f160(ulong param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = param_1;
  if (param_2 == (uint *)0x0) {
    return SUB168(auVar1 * ZEXT816(0xc22e450672894ab7),0);
  }
  uVar6 = param_1 / 0x15180;
  uVar7 = (int)param_1 + (int)uVar6 * -0x15180;
  uVar8 = 0x7b2;
  uVar9 = uVar6;
  uVar10 = 0x7b1;
  do {
    uVar5 = uVar9;
    uVar3 = uVar10 + 1;
    uVar11 = 0x16d;
    if ((uVar3 & 3) == 0) {
      uVar11 = (ulong)((uVar8 / 400) * -400 + 0x7b2 + uVar10 == 0x7b1 ||
                      (uVar8 / 100) * -100 + 0x7b2 + uVar10 != 0x7b1) + 0x16d;
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar5 - uVar11;
    uVar10 = uVar3;
  } while (uVar11 <= uVar5);
  uVar10 = 1;
  if (0x1e < uVar5) {
    uVar5 = uVar5 - 0x1f;
    uVar11 = (ulong)((uVar3 & 3) != 0 ||
                    uVar3 != (uVar3 / 400) * 400 && uVar3 == (uVar3 / 100) * 100) ^ 0x1d;
    uVar10 = 2;
    uVar9 = uVar5 - uVar11;
    if (uVar11 <= uVar5) {
      uVar10 = 3;
      uVar5 = uVar9;
      if (0x1e < uVar9) {
        uVar5 = uVar9 - 0x1f;
        uVar10 = 4;
        if (0x1d < uVar5) {
          uVar5 = uVar9 - 0x3d;
          uVar10 = 5;
          if (0x1e < uVar5) {
            uVar5 = uVar9 - 0x5c;
            uVar10 = 6;
            if (0x1d < uVar5) {
              uVar5 = uVar9 - 0x7a;
              uVar10 = 7;
              if (0x1e < uVar5) {
                uVar5 = uVar9 - 0x99;
                uVar10 = 8;
                if (0x1e < uVar5) {
                  uVar5 = uVar9 - 0xb8;
                  uVar10 = 9;
                  if (0x1d < uVar5) {
                    uVar5 = uVar9 - 0xd6;
                    uVar10 = 10;
                    if (0x1e < uVar5) {
                      uVar5 = uVar9 - 0xf5;
                      uVar10 = 0xb;
                      if (0x1d < uVar5) {
                        uVar11 = uVar9 - 0x113;
                        uVar10 = 0xd - (uVar11 < 0x1f);
                        uVar5 = uVar9 - 0x132;
                        if (uVar11 < 0x1f) {
                          uVar5 = uVar11;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_2 = uVar3;
  param_2[1] = uVar10;
  param_2[2] = (int)uVar5 + 1;
  param_2[3] = uVar7 / 0xe10;
  iVar4 = (int)((ulong)uVar7 / 0x3c);
  param_2[4] = iVar4 + (int)(((ulong)uVar7 / 0x3c) / 0x3c) * -0x3c;
  param_2[5] = uVar7 + iVar4 * -0x3c;
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = uVar6 + 4;
  iVar4 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
  param_2[6] = (int)(uVar6 + 4) + iVar4 * -7;
  return (ulong)(uint)(iVar4 * 8);
}


/* Pooka's Free Software License. Scalar Gregorian timestamp conversion. */
undefined8 recovered_1001f3c0(uint year,uint month,uint day,uint hour,uint minute,uint second,long *output)
{
    static const unsigned char lengths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (!output || year<1970 || month<1 || month>12 || !day || hour>23 || minute>59 || second>59) return 0;
    uint leap=year%4==0 && (year%100!=0 || year%400==0);
    if(day>lengths[month-1]+(month==2 && leap))return 0;
    ulong days=day-1;
    for(uint y=1970;y<year;++y)days+=365+(y%4==0 && (y%100!=0 || y%400==0));
    for(uint m=1;m<month;++m)days+=lengths[m-1]+(m==2 && leap);
    ulong midnight=days*86400;
    *output=midnight+(ulong)hour*3600+minute*60+second;
    return (midnight&~255UL)|1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1002126c
#define DAT_1002126c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc53U)))
#undef DAT_1002126f
#define DAT_1002126f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc56U)))
#undef DAT_100220d0
#define DAT_100220d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ab7U)))
#undef DAT_10022110
#define DAT_10022110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1af7U)))
#undef DAT_10027094
#define DAT_10027094 (*(int *)(((uintptr_t)pf_module_state + 0x6a7bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#undef str_10020940
#define str_10020940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x327U)))
#define acStack_37 (*(char (*)[14])(frame + 57))
#define local_3c (*(uint *)(frame + 52))
#define local_29 (*(char *)(frame + 71))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(int *)(frame + 32))
#define uStack_48 (*(uint *)(frame + 40))
#define local_4c (*(uint *)(frame + 36))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(uint *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001f770
 */

void recovered_1001f770(char *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  ulong uVar9;
  char *pcVar10;

  if (param_1 == (char *)0x0) {
    return;
  }
  memset(&local_54,0,0x18);
  iVar2 = Ram0000000000006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x16b < uVar4)) {
    uVar4 = UINT_00006968;
    if (((code *)(ulong)uVar4 != (code *)0x0) &&
       (uVar4 = (*(code *)(ulong)uVar4)(&local_54), uVar4 != 0)) {
      lVar6 = CONCAT44(uStack_48,local_4c);
      memset(&local_54,0,0x1c);
      uVar7 = (long)DAT_10027094 * 0x3c + lVar6;
      if ((long)uVar7 < 1) {
        uVar7 = 0;
      }
      recovered_1001f160(uVar7,&local_54);
      uVar4 = 0xc;
      if (uStack_48 % 0xc != 0) {
        uVar4 = uStack_48 % 0xc;
      }
      *param_1 = '\0';
      uVar7 = 0;
      if (local_3c < 7) {
        uVar7 = (ulong)local_3c;
      }
      pcVar10 = (char *)(&DAT_100220d0)[uVar7];
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        if (uVar7 != 0x4f) {
          cVar8 = *pcVar10;
          uVar9 = uVar7;
          while (uVar7 = uVar9, cVar8 != '\0') {
            pcVar10 = pcVar10 + 1;
            param_1[uVar9] = cVar8;
            uVar7 = uVar9 + 1;
            if (0x4d < uVar9) break;
            uVar9 = uVar7;
            cVar8 = *pcVar10;
          }
        }
        param_1[uVar7] = '\0';
      }
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        lVar6 = 0x4f;
        if (uVar7 != 0x4f) {
          lVar6 = uVar7 + 1;
          param_1[uVar7] = ' ';
        }
        param_1[lVar6] = '\0';
      }
      uVar7 = 0;
      if (local_50 - 1U < 0xc) {
        uVar7 = (ulong)(local_50 - 1U);
      }
      pcVar10 = (char *)(&DAT_10022110)[uVar7];
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        if (uVar7 != 0x4f) {
          cVar8 = *pcVar10;
          uVar9 = uVar7;
          while (uVar7 = uVar9, cVar8 != '\0') {
            pcVar10 = pcVar10 + 1;
            param_1[uVar9] = cVar8;
            uVar7 = uVar9 + 1;
            if (0x4d < uVar9) break;
            uVar9 = uVar7;
            cVar8 = *pcVar10;
          }
        }
        param_1[uVar7] = '\0';
      }
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        lVar6 = 0x4f;
        if (uVar7 != 0x4f) {
          lVar6 = uVar7 + 1;
          param_1[uVar7] = ' ';
        }
        param_1[lVar6] = '\0';
      }
      recovered_100164d0(param_1,0x50,local_4c);
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        lVar6 = 0x4f;
        if (uVar7 != 0x4f) {
          lVar6 = uVar7 + 1;
          param_1[uVar7] = ' ';
        }
        param_1[lVar6] = '\0';
      }
      recovered_100164d0(param_1,0x50,uVar4);
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        lVar6 = 0x4f;
        if (uVar7 != 0x4f) {
          lVar6 = uVar7 + 1;
          param_1[uVar7] = ':';
        }
        param_1[lVar6] = '\0';
      }
      if (local_44 == 0) {
        acStack_37[1] = 0x30;
LAB_1001fa1e:
        acStack_37[2] = 0x30;
        uVar9 = 2;
      }
      else {
        uVar7 = 0;
        do {
          acStack_37[uVar7 + 1] = (char)local_44 + (char)(local_44 / 10) * -10 | 0x30;
          uVar9 = uVar7 + 1;
          if (10 < uVar7) break;
          bVar1 = 9 < local_44;
          uVar7 = uVar9;
          local_44 = local_44 / 10;
        } while (bVar1);
        if (uVar9 == 1) goto LAB_1001fa1e;
      }
      do {
        cVar8 = acStack_37[uVar9];
        local_29 = '\0';
        uVar7 = strlen(param_1);
        if (uVar7 < 0x50) {
          if (uVar7 != 0x4f && cVar8 != '\0') {
            uVar5 = uVar7;
            pcVar10 = &local_29;
            do {
              param_1[uVar5] = cVar8;
              uVar7 = uVar5 + 1;
              if (0x4d < uVar5) break;
              cVar8 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              uVar5 = uVar7;
            } while (cVar8 != '\0');
          }
          param_1[uVar7] = '\0';
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uVar7 = strlen(param_1);
      if (uVar7 < 0x50) {
        lVar6 = 0x4f;
        if (uVar7 != 0x4f) {
          lVar6 = uVar7 + 1;
          param_1[uVar7] = ':';
        }
        param_1[lVar6] = '\0';
      }
      if (local_40 == 0) {
        acStack_37[1] = 0x30;
LAB_1001fafe:
        acStack_37[2] = 0x30;
        uVar9 = 2;
      }
      else {
        uVar7 = 0;
        do {
          acStack_37[uVar7 + 1] = (char)local_40 + (char)(local_40 / 10) * -10 | 0x30;
          uVar9 = uVar7 + 1;
          if (10 < uVar7) break;
          bVar1 = 9 < local_40;
          uVar7 = uVar9;
          local_40 = local_40 / 10;
        } while (bVar1);
        if (uVar9 == 1) goto LAB_1001fafe;
      }
      do {
        cVar8 = acStack_37[uVar9];
        local_29 = '\0';
        uVar7 = strlen(param_1);
        if (uVar7 < 0x50) {
          if (uVar7 != 0x4f && cVar8 != '\0') {
            uVar5 = uVar7;
            pcVar10 = &local_29;
            do {
              param_1[uVar5] = cVar8;
              uVar7 = uVar5 + 1;
              if (0x4d < uVar5) break;
              cVar8 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              uVar5 = uVar7;
            } while (cVar8 != '\0');
          }
          param_1[uVar7] = '\0';
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      pcVar10 = &DAT_1002126f;
      if (uStack_48 < 0xc) {
        pcVar10 = &DAT_1002126c;
      }
      uVar7 = strlen(param_1);
      if (0x4f < uVar7) {
        return;
      }
      if (uVar7 != 0x4f) {
        cVar8 = *pcVar10;
        uVar9 = uVar7;
        while (uVar7 = uVar9, cVar8 != '\0') {
          pcVar10 = pcVar10 + 1;
          param_1[uVar9] = cVar8;
          uVar7 = uVar9 + 1;
          if (0x4d < uVar9) break;
          uVar9 = uVar7;
          cVar8 = *pcVar10;
        }
      }
      goto LAB_1001fa09;
    }
  }
  uVar3 = PF_PART8(str_10020940, 8);
  *(undefined8 *)param_1 = PF_PART8(str_10020940, 0);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar7 = 0x10;
LAB_1001fa09:
  param_1[uVar7] = '\0';
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1002126c
#undef DAT_1002126f
#undef DAT_100220d0
#undef DAT_10022110
#undef DAT_10027094
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006968
#undef str_10020940
#undef acStack_37
#undef local_3c
#undef local_29
#undef local_54
#undef local_50
#undef uStack_48
#undef local_4c
#undef local_44
#undef local_40

#undef DAT_10020730
#define DAT_10020730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x117U)))
#undef DAT_10020740
#define DAT_10020740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef DAT_10020750
#define DAT_10020750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef DAT_10020760
#define DAT_10020760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x147U)))
#undef DAT_10020770
#define DAT_10020770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
#undef DAT_10020780
#define DAT_10020780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167U)))
#undef DAT_10020790
#define DAT_10020790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177U)))
#undef UNK_10020734
#define UNK_10020734 (*(int *)(((uintptr_t)pf_module_state + 0x11bU)))
#undef UNK_10020738
#define UNK_10020738 (*(int *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef UNK_1002073c
#define UNK_1002073c (*(int *)(((uintptr_t)pf_module_state + 0x123U)))
#undef UNK_10020744
#define UNK_10020744 (*(int *)(((uintptr_t)pf_module_state + 0x12bU)))
#undef UNK_10020748
#define UNK_10020748 (*(int *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef UNK_1002074c
#define UNK_1002074c (*(int *)(((uintptr_t)pf_module_state + 0x133U)))
#undef UNK_10020764
#define UNK_10020764 (*(int *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef UNK_10020768
#define UNK_10020768 (*(int *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef UNK_1002076c
#define UNK_1002076c (*(int *)(((uintptr_t)pf_module_state + 0x153U)))
#undef UNK_10020774
#define UNK_10020774 (*(uint *)(((uintptr_t)pf_module_state + 0x15bU)))
#undef UNK_10020778
#define UNK_10020778 (*(uint *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef UNK_1002077c
#define UNK_1002077c (*(uint *)(((uintptr_t)pf_module_state + 0x163U)))
#undef UNK_10020784
#define UNK_10020784 (*(int *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef UNK_10020788
#define UNK_10020788 (*(int *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef UNK_1002078c
#define UNK_1002078c (*(int *)(((uintptr_t)pf_module_state + 0x173U)))
#undef UNK_10020794
#define UNK_10020794 (*(int *)(((uintptr_t)pf_module_state + 0x17bU)))
#undef UNK_10020798
#define UNK_10020798 (*(int *)(((uintptr_t)pf_module_state + 0x17fU)))
#undef UNK_1002079c
#define UNK_1002079c (*(int *)(((uintptr_t)pf_module_state + 0x183U)))
#undef _DAT_10020730
#define _DAT_10020730 (*(int *)(((uintptr_t)pf_module_state + 0x117U)))
#undef _DAT_10020740
#define _DAT_10020740 (*(int *)(((uintptr_t)pf_module_state + 0x127U)))
#undef _DAT_10020750
#define _DAT_10020750 (*(uint128 *)(((uintptr_t)pf_module_state + 0x137U)))
#undef _DAT_10020760
#define _DAT_10020760 (*(int *)(((uintptr_t)pf_module_state + 0x147U)))
#undef _DAT_10020770
#define _DAT_10020770 (*(uint *)(((uintptr_t)pf_module_state + 0x157U)))
#undef _DAT_10020780
#define _DAT_10020780 (*(int *)(((uintptr_t)pf_module_state + 0x167U)))
#undef _DAT_10020790
#define _DAT_10020790 (*(int *)(((uintptr_t)pf_module_state + 0x177U)))
#undef iRam0000000010020734
#define iRam0000000010020734 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11bU)))
#undef iRam0000000010020738
#define iRam0000000010020738 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef iRam000000001002073c
#define iRam000000001002073c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x123U)))
#undef iRam0000000010020744
#define iRam0000000010020744 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12bU)))
#undef iRam0000000010020748
#define iRam0000000010020748 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef iRam000000001002074c
#define iRam000000001002074c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x133U)))
#undef iRam0000000010020764
#define iRam0000000010020764 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef iRam0000000010020768
#define iRam0000000010020768 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef iRam000000001002076c
#define iRam000000001002076c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef iRam0000000010020784
#define iRam0000000010020784 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef iRam0000000010020788
#define iRam0000000010020788 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef iRam000000001002078c
#define iRam000000001002078c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef iRam0000000010020794
#define iRam0000000010020794 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17bU)))
#undef iRam0000000010020798
#define iRam0000000010020798 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17fU)))
#undef iRam000000001002079c
#define iRam000000001002079c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x183U)))
#undef uRam0000000010020774
#define uRam0000000010020774 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15bU)))
#undef uRam0000000010020778
#define uRam0000000010020778 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef uRam000000001002077c
#define uRam000000001002077c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x163U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001fbd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001fbd0(long param_1,uint *param_2,ulong param_3,undefined8 param_4,
                       undefined1 in_XMM3 [16],undefined1 in_XMM6 [16],undefined1 in_XMM7 [16])

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  char cVar16;
  char cVar15;
  char cVar14;
  char cVar13;
  char cVar12;
  char cVar11;
  char cVar10;
  char cVar9;
  char cVar24;
  char cVar23;
  char cVar22;
  char cVar21;
  char cVar20;
  char cVar19;
  char cVar18;
  char cVar17;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  uint128 auVar48;
  int iVar49;
  int iVar51;
  int iVar52;
  uint128 auVar50;
  int iVar53;
  uint128 auVar54;
  int iVar55;
  int iVar58;
  int iVar59;
  uint128 auVar56;
  uint128 auVar57;
  int iVar60;
  int iVar61;
  long lVar62;
  int iVar69;
  int iVar70;
  uint128 auVar63;
  uint128 auVar64;
  uint128 auVar65;
  uint128 auVar66;
  uint128 auVar67;
  uint128 auVar68;
  int iVar71;
  short sVar72;
  uint uVar73;
  undefined6 uVar74;
  undefined8 uVar75;
  undefined1 auVar76 [12];
  undefined1 auVar77 [14];
  uint128 auVar78;
  uint128 auVar79;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint128 auVar80;
  short sVar84;
  undefined1 auVar85 [12];
  undefined1 auVar86 [14];
  int iVar87;
  int iVar88;
  int iVar89;
  uint128 auVar90;
  uint128 auVar91;
  uint128 auVar92;
  uint128 auVar93;
  uint128 auVar94;
  short sVar95;
  uint uVar96;
  undefined4 uVar97;
  undefined6 uVar98;
  undefined8 uVar99;
  undefined1 auVar100 [12];
  uint uVar107;
  uint uVar108;
  undefined1 auVar101 [14];
  undefined1 in_XMM12 [16];
  uint128 auVar102;
  uint128 auVar103;
  uint128 auVar104;
  uint128 auVar105;
  uint128 auVar106;
  uint uVar109;

  uVar32 = *(uint *)(param_1 + 0x1c);
  uVar27 = 0;
  if (((ulong)uVar32 < 0x21) && ((0x101018000U >> ((ulong)uVar32 & 0x3f) & 1) != 0)) {
    uVar27 = uVar32 + 7 >> 3;
  }
  if ((((*(long *)(param_2 + 2) != 0) && (uVar32 = *param_2, 0 < (int)uVar32)) &&
      (uVar28 = param_2[1], 0 < (int)uVar28)) &&
     (((uVar32 == *(uint *)(param_1 + 0x14) && (uVar28 == *(uint *)(param_1 + 0x18))) &&
      ((*(long *)(param_1 + 0x38) != 0 && (uVar27 != 0)))))) {
    iVar36 = (int)((ulong)param_4 >> 0x20);
    uVar44 = 0;
    uVar45 = 0;
    if (0 < iVar36 && 0 < (int)param_4) {
      uVar39 = param_3 >> 0x20;
      iVar38 = (int)(param_3 >> 0x20);
      uVar41 = iVar36 + iVar38;
      uVar31 = (uint)param_3;
      uVar43 = uVar32;
      if ((int)uVar31 < (int)uVar32) {
        uVar43 = uVar31;
      }
      if ((int)uVar31 < 0) {
        uVar43 = 0;
      }
      if ((int)uVar28 <= iVar38) {
        uVar39 = (ulong)uVar28;
      }
      if ((long)param_3 < 0) {
        uVar39 = 0;
      }
      uVar31 = (int)param_4 + uVar31;
      if ((int)uVar31 < (int)uVar32) {
        uVar32 = uVar31;
      }
      if ((int)uVar31 < 0) {
        uVar32 = 0;
      }
      if ((int)uVar41 < (int)uVar28) {
        uVar28 = uVar41;
      }
      if ((int)uVar41 < 0) {
        uVar28 = 0;
      }
      if (uVar32 - uVar43 == 0 || (int)uVar32 < (int)uVar43) {
        uVar45 = 0;
      }
      else {
        uVar45 = 0;
        iVar36 = uVar28 - (int)uVar39;
        if (iVar36 != 0 && (int)uVar39 <= (int)uVar28) {
          uVar44 = (ulong)uVar43 | uVar39 << 0x20;
          uVar45 = CONCAT44(iVar36,uVar32 - uVar43);
        }
      }
    }
    if (0 < (int)(uVar45 >> 0x20) && 0 < (int)(uint)uVar45) {
      lVar1 = param_1 + 4;
      uVar46 = (ulong)uVar27;
      lVar34 = (long)(int)uVar44 * uVar46;
      lVar42 = (long)uVar44 >> 0x20;
      uVar40 = (ulong)((uint)uVar45 & 0x7fffffff);
      uVar39 = (ulong)(uVar27 & 0xfffffff0);
      uVar32 = uVar27 & 0xfffffff8;
      do {
        lVar2 = *(long *)(param_1 + 0x38);
        uVar47 = (ulong)*(uint *)(param_1 + 0x10);
        lVar3 = *(long *)(param_2 + 2);
        lVar35 = (int)*param_2 * lVar42 + (long)(int)uVar44;
        if (uVar27 == 4) {
          lVar3 = lVar3 + lVar35 * 4;
          uVar37 = 0;
          do {
            uVar28 = recovered_100183a0(lVar1,(uint)*(byte *)(lVar3 + uVar37 * 4),
                                        (uint)*(byte *)(lVar3 + 1 + uVar37 * 4),
                                        (uint)*(byte *)(lVar3 + 2 + uVar37 * 4));
            *(uint *)(uVar47 * lVar42 + lVar2 + lVar34 + uVar37 * 4) = uVar28;
            uVar37 = uVar37 + 1;
          } while (uVar40 != uVar37);
        }
        else if (uVar27 == 2) {
          lVar3 = lVar3 + lVar35 * 4;
          uVar37 = 0;
          do {
            uVar28 = recovered_100183a0(lVar1,(uint)*(byte *)(lVar3 + uVar37 * 4),
                                        (uint)*(byte *)(lVar3 + 1 + uVar37 * 4),
                                        (uint)*(byte *)(lVar3 + 2 + uVar37 * 4));
            *(short *)(uVar47 * lVar42 + lVar2 + lVar34 + uVar37 * 2) = (short)uVar28;
            uVar37 = uVar37 + 1;
          } while (uVar40 != uVar37);
        }
        else {
          lVar3 = lVar3 + lVar35 * 4;
          lVar35 = uVar47 * lVar42 + lVar34 + lVar2;
          uVar47 = 0;
          do {
            uVar29 = recovered_100183a0(lVar1,(uint)*(byte *)(lVar3 + uVar47 * 4),
                                        (uint)*(byte *)(lVar3 + 1 + uVar47 * 4),
                                        (uint)*(byte *)(lVar3 + 2 + uVar47 * 4));
            iVar26 = iRam000000001002078c;
            iVar25 = iRam0000000010020788;
            iVar38 = iRam0000000010020784;
            iVar36 = _DAT_10020780;
            uVar41 = uRam000000001002077c;
            uVar31 = uRam0000000010020778;
            uVar43 = uRam0000000010020774;
            uVar28 = _DAT_10020770;
            if (lVar2 != 0) {
              if (uVar27 < 8) {
                uVar37 = 0;
              }
              else {
                if (uVar27 < 0x10) {
                  uVar37 = 0;
                }
                else {
                  uVar37 = 0;
                  in_XMM3 = _DAT_10020750;
                  iVar49 = _DAT_10020760;
                  iVar51 = iRam0000000010020764;
                  iVar52 = iRam0000000010020768;
                  iVar53 = iRam000000001002076c;
                  iVar55 = _DAT_10020740;
                  iVar58 = iRam0000000010020744;
                  iVar59 = iRam0000000010020748;
                  iVar60 = iRam000000001002074c;
                  iVar61 = _DAT_10020730;
                  iVar69 = iRam0000000010020734;
                  iVar70 = iRam0000000010020738;
                  iVar71 = iRam000000001002073c;
                  do {
                    PF_PART4(auVar66, 0) = iVar49 << 3;
                    PF_PART4(auVar66, 4) = iVar51 << 3;
                    PF_PART4(auVar66, 8) = iVar52 << 3;
                    PF_PART4(auVar66, 12) = iVar53 << 3;
                    PF_PART4(auVar78, 0) = PF_PART4(in_XMM3, 0) << 3;
                    iVar87 = PF_PART4(in_XMM3, 4);
                    PF_PART4(auVar78, 4) = iVar87 << 3;
                    iVar88 = PF_PART4(in_XMM3, 8);
                    iVar89 = PF_PART4(in_XMM3, 12);
                    PF_PART4(auVar78, 8) = iVar88 << 3;
                    PF_PART4(auVar78, 12) = iVar89 << 3;
                    PF_PART4(auVar90, 0) = iVar55 << 3;
                    PF_PART4(auVar90, 4) = iVar58 << 3;
                    PF_PART4(auVar90, 8) = iVar59 << 3;
                    PF_PART4(auVar90, 12) = iVar60 << 3;
                    PF_PART4(auVar65, 0) = iVar61 << 3;
                    PF_PART4(auVar65, 4) = iVar69 << 3;
                    PF_PART4(auVar65, 8) = iVar70 << 3;
                    PF_PART4(auVar65, 12) = iVar71 << 3;
                    auVar54 = pshuflw(in_XMM6,auVar65,0xfe);
                    lVar62 = PF_PART8(auVar54, 0);
                    PF_PART4(auVar91, 0) = uVar29 >> lVar62;
                    PF_PART4(auVar91, 4) = uVar29 >> lVar62;
                    PF_PART4(auVar91, 8) = uVar29 >> lVar62;
                    PF_PART4(auVar91, 12) = uVar29 >> lVar62;
                    auVar102 = pshuflw(in_XMM12,auVar65,0x54);
                    PF_PART4(auVar67, 4) = PF_PART4(auVar65, 12);
                    PF_PART4(auVar67, 0) = PF_PART4(auVar65, 8);
                    PF_PART4(auVar67, 8) = PF_PART4(auVar65, 8);
                    PF_PART4(auVar67, 12) = PF_PART4(auVar65, 12);
                    auVar54 = pshuflw(auVar91,auVar67,0xfe);
                    lVar62 = PF_PART8(auVar54, 0);
                    PF_PART4(auVar103, 0) = uVar29 >> lVar62;
                    PF_PART4(auVar103, 4) = uVar29 >> lVar62;
                    PF_PART4(auVar103, 8) = uVar29 >> lVar62;
                    PF_PART4(auVar103, 12) = uVar29 >> lVar62;
                    auVar65 = pshuflw(auVar67,auVar67,0x54);
                    auVar54 = pshuflw(auVar65,auVar90,0xfe);
                    lVar62 = PF_PART8(auVar54, 0);
                    PF_PART4(auVar92, 0) = uVar29 >> lVar62;
                    PF_PART4(auVar92, 4) = uVar29 >> lVar62;
                    PF_PART4(auVar92, 8) = uVar29 >> lVar62;
                    PF_PART4(auVar92, 12) = uVar29 >> lVar62;
                    auVar104 = pshuflw(auVar103,auVar90,0x54);
                    PF_PART4(auVar94, 4) = PF_PART4(auVar90, 12);
                    PF_PART4(auVar94, 0) = PF_PART4(auVar90, 8);
                    PF_PART4(auVar94, 8) = PF_PART4(auVar90, 8);
                    PF_PART4(auVar94, 12) = PF_PART4(auVar90, 12);
                    auVar54 = pshuflw(auVar92,auVar94,0xfe);
                    lVar62 = PF_PART8(auVar54, 0);
                    PF_PART4(auVar105, 0) = uVar29 >> lVar62;
                    PF_PART4(auVar105, 4) = uVar29 >> lVar62;
                    PF_PART4(auVar105, 8) = uVar29 >> lVar62;
                    PF_PART4(auVar105, 12) = uVar29 >> lVar62;
                    auVar90 = pshuflw(auVar94,auVar94,0x54);
                    auVar54 = pshuflw(auVar90,auVar78,0xfe);
                    lVar62 = PF_PART8(auVar54, 0);
                    PF_PART4(auVar93, 0) = uVar29 >> lVar62;
                    PF_PART4(auVar93, 4) = uVar29 >> lVar62;
                    PF_PART4(auVar93, 8) = uVar29 >> lVar62;
                    PF_PART4(auVar93, 12) = uVar29 >> lVar62;
                    auVar106 = pshuflw(auVar105,auVar78,0x54);
                    PF_PART4(auVar79, 4) = PF_PART4(auVar78, 12);
                    PF_PART4(auVar79, 0) = PF_PART4(auVar78, 8);
                    PF_PART4(auVar79, 8) = PF_PART4(auVar78, 8);
                    PF_PART4(auVar79, 12) = PF_PART4(auVar78, 12);
                    auVar94 = pshuflw(auVar93,auVar79,0xfe);
                    auVar67 = pshuflw(auVar79,auVar79,0x54);
                    auVar68 = pshuflw(auVar67,auVar66,0xfe);
                    auVar78 = pshuflw(auVar68,auVar66,0x54);
                    PF_PART4(auVar54, 4) = PF_PART4(auVar66, 12);
                    PF_PART4(auVar54, 0) = PF_PART4(auVar66, 8);
                    PF_PART4(auVar54, 8) = PF_PART4(auVar66, 8);
                    PF_PART4(auVar54, 12) = PF_PART4(auVar66, 12);
                    auVar66 = pshuflw(auVar78,auVar54,0xfe);
                    in_XMM7 = pshuflw(auVar54,auVar54,0x54);
                    uVar96 = uVar29 >> PF_PART8(auVar78, 0) & uVar28;
                    uVar107 = uVar29 >> PF_PART8(auVar68, 0) & uVar43;
                    uVar108 = uVar29 >> PF_PART8(in_XMM7, 0) & uVar31;
                    uVar109 = uVar29 >> PF_PART8(auVar66, 0) & uVar41;
                    uVar73 = uVar29 >> PF_PART8(auVar106, 0) & uVar28;
                    uVar81 = PF_PART4(auVar93, 4) & uVar43;
                    uVar82 = uVar29 >> PF_PART8(auVar67, 0) & uVar31;
                    uVar83 = uVar29 >> PF_PART8(auVar94, 0) & uVar41;
                    sVar4 = (short)uVar96;
                    cVar16 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar96 - (0xff < sVar4);
                    sVar4 = (short)(uVar96 >> 0x10);
                    sVar95 = CONCAT11((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar96 >> 0x10) -
                                      (0xff < sVar4),cVar16);
                    sVar4 = (short)uVar107;
                    cVar9 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar107 - (0xff < sVar4);
                    sVar4 = (short)(uVar107 >> 0x10);
                    uVar97 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar107 >> 0x10) -
                                      (0xff < sVar4),CONCAT12(cVar9,sVar95));
                    sVar4 = (short)uVar108;
                    cVar10 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar108 - (0xff < sVar4);
                    sVar4 = (short)(uVar108 >> 0x10);
                    uVar98 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar108 >> 0x10) -
                                      (0xff < sVar4),CONCAT14(cVar10,uVar97));
                    sVar4 = (short)uVar109;
                    cVar11 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar109 - (0xff < sVar4);
                    sVar4 = (short)(uVar109 >> 0x10);
                    uVar99 = CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar109 >> 0x10) -
                                      (0xff < sVar4),CONCAT16(cVar11,uVar98));
                    sVar4 = (short)uVar73;
                    cVar12 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar73 - (0xff < sVar4);
                    sVar4 = (short)(uVar73 >> 0x10);
                    PF_PART10(auVar100, 0) =
                         CONCAT19((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar73 >> 0x10) -
                                  (0xff < sVar4),CONCAT18(cVar12,uVar99));
                    sVar4 = (short)uVar81;
                    cVar13 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar81 - (0xff < sVar4);
                    auVar100[10] = cVar13;
                    sVar4 = (short)(uVar81 >> 0x10);
                    auVar100[0xb] =
                         (0 < sVar4) * (sVar4 < 0x100) * (char)(uVar81 >> 0x10) - (0xff < sVar4);
                    sVar4 = (short)uVar82;
                    cVar14 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar82 - (0xff < sVar4);
                    auVar101[0xc] = cVar14;
                    PF_PART12(auVar101, 0) = auVar100;
                    sVar4 = (short)(uVar82 >> 0x10);
                    auVar101[0xd] =
                         (0 < sVar4) * (sVar4 < 0x100) * (char)(uVar82 >> 0x10) - (0xff < sVar4);
                    sVar4 = (short)uVar83;
                    cVar15 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar83 - (0xff < sVar4);
                    ((uint8_t *)(void *)&auVar106)[0xe] = cVar15;
                    PF_PART14(auVar106, 0) = auVar101;
                    sVar4 = (short)(uVar83 >> 0x10);
                    ((uint8_t *)(void *)&auVar106)[0xf] =
                         (0 < sVar4) * (sVar4 < 0x100) * (char)(uVar83 >> 0x10) - (0xff < sVar4);
                    uVar73 = uVar29 >> PF_PART8(auVar104, 0) & uVar28;
                    uVar81 = PF_PART4(auVar92, 4) & uVar43;
                    uVar82 = uVar29 >> PF_PART8(auVar90, 0) & uVar31;
                    uVar83 = PF_PART4(auVar105, 12) & uVar41;
                    PF_PART4(in_XMM6, 0) = uVar29 >> PF_PART8(auVar102, 0) & uVar28;
                    PF_PART4(in_XMM6, 4) = PF_PART4(auVar91, 4) & uVar43;
                    PF_PART4(in_XMM6, 8) = uVar29 >> PF_PART8(auVar65, 0) & uVar31;
                    PF_PART4(in_XMM6, 12) = PF_PART4(auVar103, 12) & uVar41;
                    sVar4 = (short)uVar73;
                    cVar17 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar73 - (0xff < sVar4);
                    sVar4 = (short)(uVar73 >> 0x10);
                    sVar84 = CONCAT11((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar73 >> 0x10) -
                                      (0xff < sVar4),cVar17);
                    sVar4 = (short)uVar81;
                    cVar18 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar81 - (0xff < sVar4);
                    sVar4 = (short)(uVar81 >> 0x10);
                    uVar33 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar81 >> 0x10) -
                                      (0xff < sVar4),CONCAT12(cVar18,sVar84));
                    sVar4 = (short)uVar82;
                    cVar19 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar82 - (0xff < sVar4);
                    sVar4 = (short)(uVar82 >> 0x10);
                    uVar74 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar82 >> 0x10) -
                                      (0xff < sVar4),CONCAT14(cVar19,uVar33));
                    sVar4 = (short)uVar83;
                    cVar20 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar83 - (0xff < sVar4);
                    sVar4 = (short)(uVar83 >> 0x10);
                    uVar75 = CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar83 >> 0x10) -
                                      (0xff < sVar4),CONCAT16(cVar20,uVar74));
                    sVar4 = (short)PF_PART4(in_XMM6, 0);
                    cVar21 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM6, 0) - (0xff < sVar4);
                    sVar4 = (short)(PF_PART4(in_XMM6, 0) >> 0x10);
                    PF_PART10(auVar85, 0) =
                         CONCAT19((0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM6, 0) >> 0x10) -
                                  (0xff < sVar4),CONCAT18(cVar21,uVar75));
                    sVar4 = (short)PF_PART4(in_XMM6, 4);
                    cVar22 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM6, 4) - (0xff < sVar4);
                    auVar85[10] = cVar22;
                    sVar4 = (short)(PF_PART4(in_XMM6, 4) >> 0x10);
                    auVar85[0xb] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM6, 4) >> 0x10) -
                                   (0xff < sVar4);
                    sVar4 = (short)PF_PART4(in_XMM6, 8);
                    cVar23 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM6, 8) - (0xff < sVar4);
                    auVar86[0xc] = cVar23;
                    PF_PART12(auVar86, 0) = auVar85;
                    sVar4 = (short)(PF_PART4(in_XMM6, 8) >> 0x10);
                    auVar86[0xd] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM6, 8) >> 0x10) -
                                   (0xff < sVar4);
                    sVar4 = (short)PF_PART4(in_XMM6, 12);
                    cVar24 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM6, 12) - (0xff < sVar4);
                    ((uint8_t *)(void *)&auVar68)[0xe] = cVar24;
                    PF_PART14(auVar68, 0) = auVar86;
                    sVar4 = (short)(PF_PART4(in_XMM6, 12) >> 0x10);
                    ((uint8_t *)(void *)&auVar68)[0xf] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM6, 12) >> 0x10) -
                                   (0xff < sVar4);
                    sVar4 = (short)((uint)uVar97 >> 0x10);
                    in_XMM12[1] = (0 < sVar4) * (sVar4 < 0x100) * cVar9 - (0xff < sVar4);
                    in_XMM12[0] = (0 < sVar95) * (sVar95 < 0x100) * cVar16 - (0xff < sVar95);
                    sVar4 = (short)((uint6)uVar98 >> 0x20);
                    in_XMM12[2] = (0 < sVar4) * (sVar4 < 0x100) * cVar10 - (0xff < sVar4);
                    sVar4 = (short)((ulong)uVar99 >> 0x30);
                    in_XMM12[3] = (0 < sVar4) * (sVar4 < 0x100) * cVar11 - (0xff < sVar4);
                    sVar4 = (short)((unkuint10)PF_PART10(auVar100, 0) >> 0x40);
                    in_XMM12[4] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar100, 10);
                    in_XMM12[5] = (0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar101, 12);
                    in_XMM12[6] = (0 < sVar4) * (sVar4 < 0x100) * cVar14 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar106, 14);
                    in_XMM12[7] = (0 < sVar4) * (sVar4 < 0x100) * cVar15 - (0xff < sVar4);
                    in_XMM12[8] = (0 < sVar84) * (sVar84 < 0x100) * cVar17 - (0xff < sVar84);
                    sVar4 = (short)((uint)uVar33 >> 0x10);
                    in_XMM12[9] = (0 < sVar4) * (sVar4 < 0x100) * cVar18 - (0xff < sVar4);
                    sVar4 = (short)((uint6)uVar74 >> 0x20);
                    in_XMM12[10] = (0 < sVar4) * (sVar4 < 0x100) * cVar19 - (0xff < sVar4);
                    sVar4 = (short)((ulong)uVar75 >> 0x30);
                    in_XMM12[0xb] = (0 < sVar4) * (sVar4 < 0x100) * cVar20 - (0xff < sVar4);
                    sVar4 = (short)((unkuint10)PF_PART10(auVar85, 0) >> 0x40);
                    in_XMM12[0xc] = (0 < sVar4) * (sVar4 < 0x100) * cVar21 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar85, 10);
                    in_XMM12[0xd] = (0 < sVar4) * (sVar4 < 0x100) * cVar22 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar86, 12);
                    in_XMM12[0xe] = (0 < sVar4) * (sVar4 < 0x100) * cVar23 - (0xff < sVar4);
                    sVar4 = PF_PART2(auVar68, 14);
                    in_XMM12[0xf] = (0 < sVar4) * (sVar4 < 0x100) * cVar24 - (0xff < sVar4);
                    *(uint128 *)(lVar35 + uVar37) = in_XMM12;
                    uVar37 = uVar37 + 0x10;
                    iVar49 = iVar49 + iVar36;
                    iVar51 = iVar51 + iVar38;
                    iVar52 = iVar52 + iVar25;
                    iVar53 = iVar53 + iVar26;
                    PF_PART4(in_XMM3, 0) = PF_PART4(in_XMM3, 0) + iVar36;
                    PF_PART4(in_XMM3, 4) = iVar87 + iVar38;
                    PF_PART4(in_XMM3, 8) = iVar88 + iVar25;
                    PF_PART4(in_XMM3, 12) = iVar89 + iVar26;
                    iVar55 = iVar55 + iVar36;
                    iVar58 = iVar58 + iVar38;
                    iVar59 = iVar59 + iVar25;
                    iVar60 = iVar60 + iVar26;
                    iVar61 = iVar61 + iVar36;
                    iVar69 = iVar69 + iVar38;
                    iVar70 = iVar70 + iVar25;
                    iVar71 = iVar71 + iVar26;
                  } while (uVar39 != uVar37);
                  if ((uVar27 & 0xfffffff0) == uVar27) goto LAB_1001fe80;
                  uVar37 = uVar39;
                  if ((uVar27 & 8) == 0) goto LAB_10020210;
                }
                iVar26 = iRam000000001002079c;
                iVar25 = iRam0000000010020798;
                iVar38 = iRam0000000010020794;
                iVar36 = _DAT_10020790;
                uVar41 = uRam000000001002077c;
                uVar31 = uRam0000000010020778;
                uVar43 = uRam0000000010020774;
                uVar28 = _DAT_10020770;
                uVar33 = (undefined4)uVar37;
                PF_PART4(auVar104, 4) = uVar33;
                PF_PART4(auVar104, 0) = uVar33;
                PF_PART4(auVar104, 8) = uVar33;
                PF_PART4(auVar104, 12) = uVar33;
                auVar50 = auVar104 | _DAT_10020750;
                PF_PART4(auVar102, 4) = iRam0000000010020764;
                PF_PART4(auVar102, 0) = _DAT_10020760;
                PF_PART4(auVar102, 8) = iRam0000000010020768;
                PF_PART4(auVar102, 12) = iRam000000001002076c;
                auVar48 = auVar104 | auVar102;
                do {
                  PF_PART4(auVar56, 0) = PF_PART4(auVar48, 0) << 3;
                  iVar49 = PF_PART4(auVar48, 4);
                  PF_PART4(auVar56, 4) = iVar49 << 3;
                  iVar51 = PF_PART4(auVar48, 8);
                  iVar52 = PF_PART4(auVar48, 12);
                  PF_PART4(auVar56, 8) = iVar51 << 3;
                  PF_PART4(auVar56, 12) = iVar52 << 3;
                  PF_PART4(auVar63, 0) = PF_PART4(auVar50, 0) << 3;
                  iVar53 = PF_PART4(auVar50, 4);
                  PF_PART4(auVar63, 4) = iVar53 << 3;
                  iVar55 = PF_PART4(auVar50, 8);
                  iVar58 = PF_PART4(auVar50, 12);
                  PF_PART4(auVar63, 8) = iVar55 << 3;
                  PF_PART4(auVar63, 12) = iVar58 << 3;
                  auVar54 = pshuflw(in_XMM3,auVar63,0xfe);
                  auVar78 = pshuflw(in_XMM7,auVar63,0x54);
                  PF_PART4(auVar64, 4) = PF_PART4(auVar63, 12);
                  PF_PART4(auVar64, 0) = PF_PART4(auVar63, 8);
                  PF_PART4(auVar64, 8) = PF_PART4(auVar63, 8);
                  PF_PART4(auVar64, 12) = PF_PART4(auVar63, 12);
                  auVar79 = pshuflw(auVar78,auVar64,0xfe);
                  auVar65 = pshuflw(auVar64,auVar64,0x54);
                  auVar66 = pshuflw(auVar65,auVar56,0xfe);
                  lVar62 = PF_PART8(auVar66, 0);
                  PF_PART4(in_XMM6, 0) = uVar29 >> lVar62;
                  PF_PART4(in_XMM6, 4) = uVar29 >> lVar62;
                  PF_PART4(in_XMM6, 8) = uVar29 >> lVar62;
                  PF_PART4(in_XMM6, 12) = uVar29 >> lVar62;
                  auVar67 = pshuflw(auVar66,auVar56,0x54);
                  PF_PART4(auVar57, 4) = PF_PART4(auVar56, 12);
                  PF_PART4(auVar57, 0) = PF_PART4(auVar56, 8);
                  PF_PART4(auVar57, 8) = PF_PART4(auVar56, 8);
                  PF_PART4(auVar57, 12) = PF_PART4(auVar56, 12);
                  auVar68 = pshuflw(auVar67,auVar57,0xfe);
                  auVar66 = pshuflw(auVar57,auVar57,0x54);
                  uVar73 = uVar29 >> PF_PART8(auVar67, 0) & uVar28;
                  uVar81 = PF_PART4(in_XMM6, 4) & uVar43;
                  uVar82 = uVar29 >> PF_PART8(auVar66, 0) & uVar31;
                  uVar83 = uVar29 >> PF_PART8(auVar68, 0) & uVar41;
                  PF_PART4(in_XMM3, 0) = uVar29 >> PF_PART8(auVar78, 0) & uVar28;
                  PF_PART4(in_XMM3, 4) = uVar29 >> PF_PART8(auVar54, 0) & uVar43;
                  PF_PART4(in_XMM3, 8) = uVar29 >> PF_PART8(auVar65, 0) & uVar31;
                  PF_PART4(in_XMM3, 12) = uVar29 >> PF_PART8(auVar79, 0) & uVar41;
                  sVar4 = (short)uVar73;
                  cVar9 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar73 - (0xff < sVar4);
                  sVar4 = (short)(uVar73 >> 0x10);
                  sVar72 = CONCAT11((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar73 >> 0x10) -
                                    (0xff < sVar4),cVar9);
                  sVar4 = (short)uVar81;
                  cVar10 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar81 - (0xff < sVar4);
                  sVar4 = (short)(uVar81 >> 0x10);
                  uVar33 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar81 >> 0x10) -
                                    (0xff < sVar4),CONCAT12(cVar10,sVar72));
                  sVar4 = (short)uVar82;
                  cVar11 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar82 - (0xff < sVar4);
                  sVar4 = (short)(uVar82 >> 0x10);
                  uVar74 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar82 >> 0x10) -
                                    (0xff < sVar4),CONCAT14(cVar11,uVar33));
                  sVar4 = (short)uVar83;
                  cVar12 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar83 - (0xff < sVar4);
                  sVar4 = (short)(uVar83 >> 0x10);
                  uVar75 = CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar83 >> 0x10) -
                                    (0xff < sVar4),CONCAT16(cVar12,uVar74));
                  sVar4 = (short)PF_PART4(in_XMM3, 0);
                  cVar13 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM3, 0) - (0xff < sVar4);
                  sVar4 = (short)(PF_PART4(in_XMM3, 0) >> 0x10);
                  PF_PART10(auVar76, 0) =
                       CONCAT19((0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM3, 0) >> 0x10) -
                                (0xff < sVar4),CONCAT18(cVar13,uVar75));
                  sVar4 = (short)PF_PART4(in_XMM3, 4);
                  cVar14 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM3, 4) - (0xff < sVar4);
                  auVar76[10] = cVar14;
                  sVar4 = (short)(PF_PART4(in_XMM3, 4) >> 0x10);
                  auVar76[0xb] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM3, 4) >> 0x10) -
                                 (0xff < sVar4);
                  sVar4 = (short)PF_PART4(in_XMM3, 8);
                  cVar15 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM3, 8) - (0xff < sVar4);
                  auVar77[0xc] = cVar15;
                  PF_PART12(auVar77, 0) = auVar76;
                  sVar4 = (short)(PF_PART4(in_XMM3, 8) >> 0x10);
                  auVar77[0xd] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM3, 8) >> 0x10) -
                                 (0xff < sVar4);
                  sVar4 = (short)PF_PART4(in_XMM3, 12);
                  cVar16 = (0 < sVar4) * (sVar4 < 0x100) * (char)PF_PART4(in_XMM3, 12) - (0xff < sVar4);
                  ((uint8_t *)(void *)&auVar80)[0xe] = cVar16;
                  PF_PART14(auVar80, 0) = auVar77;
                  sVar4 = (short)(PF_PART4(in_XMM3, 12) >> 0x10);
                  ((uint8_t *)(void *)&auVar80)[0xf] = (0 < sVar4) * (sVar4 < 0x100) * (char)(PF_PART4(in_XMM3, 12) >> 0x10) -
                                 (0xff < sVar4);
                  sVar4 = (short)((uint)uVar33 >> 0x10);
                  sVar84 = (short)((uint6)uVar74 >> 0x20);
                  sVar95 = (short)((ulong)uVar75 >> 0x30);
                  sVar5 = (short)((unkuint10)PF_PART10(auVar76, 0) >> 0x40);
                  sVar6 = PF_PART2(auVar76, 10);
                  sVar7 = PF_PART2(auVar77, 12);
                  sVar8 = PF_PART2(auVar80, 14);
                  PF_PART8(in_XMM7, 0) =
                       CONCAT17((0 < sVar8) * (sVar8 < 0x100) * cVar16 - (0xff < sVar8),
                                CONCAT16((0 < sVar7) * (sVar7 < 0x100) * cVar15 - (0xff < sVar7),
                                         CONCAT15((0 < sVar6) * (sVar6 < 0x100) * cVar14 -
                                                  (0xff < sVar6),
                                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) * cVar13 -
                                                           (0xff < sVar5),
                                                           CONCAT13((0 < sVar95) * (sVar95 < 0x100)
                                                                    * cVar12 - (0xff < sVar95),
                                                                    CONCAT12((0 < sVar84) *
                                                                             (sVar84 < 0x100) *
                                                                             cVar11 - (0xff < sVar84
                                                                                      ),
                                                                             CONCAT11((0 < sVar4) *
                                                                                      (sVar4 < 0x100
                                                                                      ) * cVar10 -
                                                                                      (0xff < sVar4)
                                                                                      ,(0 < sVar72)
                                                                                       * (sVar72 <
                                                  0x100) * cVar9 - (0xff < sVar72))))))));
                  in_XMM7[8] = (0 < sVar72) * (sVar72 < 0x100) * cVar9 - (0xff < sVar72);
                  in_XMM7[9] = (0 < sVar4) * (sVar4 < 0x100) * cVar10 - (0xff < sVar4);
                  in_XMM7[10] = (0 < sVar84) * (sVar84 < 0x100) * cVar11 - (0xff < sVar84);
                  in_XMM7[0xb] = (0 < sVar95) * (sVar95 < 0x100) * cVar12 - (0xff < sVar95);
                  in_XMM7[0xc] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
                  in_XMM7[0xd] = (0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6);
                  in_XMM7[0xe] = (0 < sVar7) * (sVar7 < 0x100) * cVar15 - (0xff < sVar7);
                  in_XMM7[0xf] = (0 < sVar8) * (sVar8 < 0x100) * cVar16 - (0xff < sVar8);
                  *(undefined8 *)(lVar35 + uVar37) = PF_PART8(in_XMM7, 0);
                  uVar37 = uVar37 + 8;
                  PF_PART4(auVar48, 0) = PF_PART4(auVar48, 0) + iVar36;
                  PF_PART4(auVar48, 4) = iVar49 + iVar38;
                  PF_PART4(auVar48, 8) = iVar51 + iVar25;
                  PF_PART4(auVar48, 12) = iVar52 + iVar26;
                  PF_PART4(auVar50, 0) = PF_PART4(auVar50, 0) + iVar36;
                  PF_PART4(auVar50, 4) = iVar53 + iVar38;
                  PF_PART4(auVar50, 8) = iVar55 + iVar25;
                  PF_PART4(auVar50, 12) = iVar58 + iVar26;
                } while (uVar32 != uVar37);
                uVar37 = (ulong)uVar32;
                if (uVar32 == uVar27) goto LAB_1001fe80;
              }
LAB_10020210:
              bVar30 = 0;
              do {
                *(char *)(lVar35 + uVar37) = (char)(uVar29 >> (bVar30 & 0x1f));
                uVar37 = uVar37 + 1;
                bVar30 = bVar30 + 8;
              } while (uVar46 != uVar37);
            }
LAB_1001fe80:
            uVar47 = uVar47 + 1;
            lVar35 = lVar35 + uVar46;
          } while (uVar47 != uVar40);
        }
        lVar42 = lVar42 + 1;
      } while (lVar42 < (long)((uVar45 & 0xffffffff00000000) + uVar44) >> 0x20);
    }
  }
  return;
}

#undef DAT_10020730
#undef DAT_10020740
#undef DAT_10020750
#undef DAT_10020760
#undef DAT_10020770
#undef DAT_10020780
#undef DAT_10020790
#undef UNK_10020734
#undef UNK_10020738
#undef UNK_1002073c
#undef UNK_10020744
#undef UNK_10020748
#undef UNK_1002074c
#undef UNK_10020764
#undef UNK_10020768
#undef UNK_1002076c
#undef UNK_10020774
#undef UNK_10020778
#undef UNK_1002077c
#undef UNK_10020784
#undef UNK_10020788
#undef UNK_1002078c
#undef UNK_10020794
#undef UNK_10020798
#undef UNK_1002079c
#undef _DAT_10020730
#undef _DAT_10020740
#undef _DAT_10020750
#undef _DAT_10020760
#undef _DAT_10020770
#undef _DAT_10020780
#undef _DAT_10020790
#undef iRam0000000010020734
#undef iRam0000000010020738
#undef iRam000000001002073c
#undef iRam0000000010020744
#undef iRam0000000010020748
#undef iRam000000001002074c
#undef iRam0000000010020764
#undef iRam0000000010020768
#undef iRam000000001002076c
#undef iRam0000000010020784
#undef iRam0000000010020788
#undef iRam000000001002078c
#undef iRam0000000010020794
#undef iRam0000000010020798
#undef iRam000000001002079c
#undef uRam0000000010020774
#undef uRam0000000010020778
#undef uRam000000001002077c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020240
 */

void recovered_10020240(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *dst;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  void *a;
  void *b;
  uint uVar13;
  long lVar14;

  uVar1 = (ulong)*(uint *)(param_1 + 0x1c);
  if (((uVar1 < 0x21) && ((0x101018000U >> (uVar1 & 0x3f) & 1) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    uVar13 = *(uint *)(param_1 + 0x14);
    uVar7 = *(uint *)(param_1 + 0x18);
    iVar8 = (int)((ulong)param_4 >> 0x20);
    uVar6 = 0;
    uVar5 = 0;
    if ((0 < iVar8 && 0 < (int)param_4) && (0 < (int)uVar7 && 0 < (int)uVar13)) {
      uVar11 = param_3 >> 0x20;
      iVar10 = (int)(param_3 >> 0x20);
      uVar9 = iVar8 + iVar10;
      uVar3 = (uint)param_3;
      uVar12 = uVar13;
      if ((int)uVar3 < (int)uVar13) {
        uVar12 = uVar3;
      }
      if ((int)uVar3 < 0) {
        uVar12 = 0;
      }
      if ((int)uVar7 <= iVar10) {
        uVar11 = (ulong)uVar7;
      }
      if ((long)param_3 < 0) {
        uVar11 = 0;
      }
      uVar3 = (int)param_4 + uVar3;
      if ((int)uVar3 < (int)uVar13) {
        uVar13 = uVar3;
      }
      if ((int)uVar3 < 0) {
        uVar13 = 0;
      }
      if ((int)uVar9 < (int)uVar7) {
        uVar7 = uVar9;
      }
      if ((int)uVar9 < 0) {
        uVar7 = 0;
      }
      if (uVar13 - uVar12 == 0 || (int)uVar13 < (int)uVar12) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        iVar8 = uVar7 - (int)uVar11;
        if (iVar8 != 0 && (int)uVar11 <= (int)uVar7) {
          uVar6 = (ulong)uVar12 | uVar11 << 0x20;
          uVar5 = CONCAT44(iVar8,uVar13 - uVar12);
        }
      }
    }
    if (0 < (int)(uVar5 >> 0x20) && 0 < (int)(uint)uVar5) {
      uVar1 = uVar1 + 7 >> 3;
      uVar11 = ((uint)uVar5 & 0x7fffffff) * uVar1;
      if ((uVar11 != 0) &&
         (lVar4 = (long)(int)uVar6 * uVar1, uVar11 + lVar4 <= (ulong)*(uint *)(param_1 + 0x10))) {
        lVar14 = (long)uVar6 >> 0x20;
        do {
          lVar2 = (ulong)*(uint *)(param_1 + 0x10) * lVar14 + lVar4;
          a = (void *)(*(long *)(param_1 + 0x38) + lVar2);
          dst = (void *)(param_2 + lVar2);
          if (*(long *)(param_1 + 0x40) == 0) {
LAB_1002042a:
            memcpy(dst,a,uVar11);
          }
          else {
            b = (void *)(*(long *)(param_1 + 0x40) + lVar2);
            if (((*(char *)(param_1 + 0x58) != '\x01') ||
                (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48))) ||
               (iVar8 = memcmp(a,b,uVar11), iVar8 != 0)) {
              memcpy(dst,a,uVar11);
              dst = b;
              goto LAB_1002042a;
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < (long)((uVar5 & 0xffffffff00000000) + uVar6) >> 0x20);
      }
    }
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000695c
#define UINT_0000695c (*(uint *)(0x695cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020460
 */

void recovered_10020460(long param_1,ulong param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;

  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 != 0) && (uVar4 = *(uint *)(param_1 + 0x18), uVar4 != 0)) {
    iVar6 = (int)((ulong)param_3 >> 0x20);
    uVar3 = 0;
    uVar1 = 0;
    uVar7 = 0;
    if ((0 < iVar6 && 0 < (int)param_3) && (0 < (int)uVar4 && 0 < (int)uVar2)) {
      uVar9 = param_2 >> 0x20;
      iVar8 = (int)(param_2 >> 0x20);
      uVar7 = iVar6 + iVar8;
      uVar1 = (uint)param_2;
      uVar10 = uVar2;
      if ((int)uVar1 < (int)uVar2) {
        uVar10 = uVar1;
      }
      if ((int)uVar1 < 0) {
        uVar10 = 0;
      }
      if ((int)uVar4 <= iVar8) {
        uVar9 = (ulong)uVar4;
      }
      if ((long)param_2 < 0) {
        uVar9 = 0;
      }
      uVar1 = (int)param_3 + uVar1;
      if ((int)uVar1 < (int)uVar2) {
        uVar2 = uVar1;
      }
      if ((int)uVar1 < 0) {
        uVar2 = 0;
      }
      if ((int)uVar7 < (int)uVar4) {
        uVar4 = uVar7;
      }
      if ((int)uVar7 < 0) {
        uVar4 = 0;
      }
      if (uVar2 - uVar10 == 0 || (int)uVar2 < (int)uVar10) {
        uVar1 = 0;
        uVar7 = 0;
      }
      else {
        uVar5 = uVar4 - (int)uVar9;
        uVar1 = 0;
        uVar7 = 0;
        if (uVar5 != 0 && (int)uVar9 <= (int)uVar4) {
          uVar3 = (ulong)uVar10 | uVar9 << 0x20;
          uVar1 = uVar2 - uVar10;
          uVar7 = uVar5;
        }
      }
    }
    if ((((0 < (int)uVar7 && 0 < (int)uVar1) && (iVar6 = Ram0000000000006800, iVar6 == 0x50414d57))
        && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x15f < uVar2))))
    {
      uVar2 = UINT_0000695c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10020578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar2)((uint)uVar3,(uint)(uVar3 >> 0x20),uVar1,uVar7);
        return;
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000695c

#undef DAT_1002231c
#define DAT_1002231c (*(int *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10022368
#define DAT_10022368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4fU)))
#undef DAT_10022990
#define DAT_10022990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2377U)))
#undef DAT_10027194
#define DAT_10027194 (*(int *)(((uintptr_t)pf_module_state + 0x6b7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10020580
 */

void recovered_10020580(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;

  recovered_1000d9d0();
  recovered_1000de50();
  recovered_1000e110();
  recovered_1000e200();
  if (0 < DAT_10027194) {
    lVar4 = 0;
    lVar3 = DAT_10022990;
    iVar2 = DAT_10027194;
    do {
      iVar1 = *(int *)(lVar3 + lVar4 * 4);
      if (iVar1 != param_1) {
        recovered_1000e5b0((char *)((long)iVar1 * 0xda8 + DAT_10022368),iVar1 == DAT_1002231c);
        lVar3 = DAT_10022990;
        iVar2 = DAT_10027194;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  recovered_1000f5d0();
  recovered_1000f6e0();
  recovered_1000f940();
  recovered_1000fa10();
  return;
}

#undef DAT_1002231c
#undef DAT_10022368
#undef DAT_10022990
#undef DAT_10027194
