/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#define DAT_0000680c (*(uint8_t *)(0x680cU))
#define DAT_00006810 (*(uint8_t *)(0x6810U))
#define DAT_00006814 (*(uint8_t *)(0x6814U))
#define DAT_00006818 (*(uint8_t *)(0x6818U))
#define DAT_0000681c (*(uint8_t *)(0x681cU))
#define DAT_00006820 (*(uint8_t *)(0x6820U))
#define DAT_00006824 (*(uint8_t *)(0x6824U))
#define DAT_00006828 (*(uint8_t *)(0x6828U))
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#define DAT_00006848 (*(uint8_t *)(0x6848U))
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#define DAT_0000685c (*(uint8_t *)(0x685cU))
#define DAT_00006860 (*(uint8_t *)(0x6860U))
#define DAT_00006864 (*(uint8_t *)(0x6864U))
#define DAT_00006868 (*(uint8_t *)(0x6868U))
#define DAT_0000686c (*(uint8_t *)(0x686cU))
#define DAT_00006870 (*(uint8_t *)(0x6870U))
#define DAT_00006874 (*(uint8_t *)(0x6874U))
#define DAT_00006878 (*(uint8_t *)(0x6878U))
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#define DAT_00006884 (*(uint8_t *)(0x6884U))
#define DAT_00006888 (*(uint8_t *)(0x6888U))
#define DAT_0000688c (*(uint8_t *)(0x688cU))
#define DAT_00006890 (*(uint8_t *)(0x6890U))
#define DAT_00006894 (*(uint8_t *)(0x6894U))
#define DAT_00006898 (*(uint8_t *)(0x6898U))
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#define DAT_000068ac (*(uint8_t *)(0x68acU))
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#define DAT_000068b8 (*(uint8_t *)(0x68b8U))
#define DAT_000068bc (*(uint8_t *)(0x68bcU))
#define DAT_000068c0 (*(uint8_t *)(0x68c0U))
#define DAT_000068c4 (*(uint8_t *)(0x68c4U))
#define DAT_000068c8 (*(uint8_t *)(0x68c8U))
#define DAT_000068cc (*(uint8_t *)(0x68ccU))
#define DAT_000068d0 (*(uint8_t *)(0x68d0U))
#define DAT_000068d4 (*(uint8_t *)(0x68d4U))
#define DAT_000068d8 (*(uint8_t *)(0x68d8U))
#define DAT_000068dc (*(uint8_t *)(0x68dcU))
#define DAT_000068e0 (*(uint8_t *)(0x68e0U))
#define DAT_000068e4 (*(uint8_t *)(0x68e4U))
#define DAT_000068e8 (*(uint8_t *)(0x68e8U))
#define DAT_000068ec (*(uint8_t *)(0x68ecU))
#define DAT_000068f0 (*(uint8_t *)(0x68f0U))
#define DAT_000068f4 (*(uint8_t *)(0x68f4U))
#define DAT_000068f8 (*(uint8_t *)(0x68f8U))
#define DAT_000068fc (*(uint8_t *)(0x68fcU))
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#define DAT_00006904 (*(uint8_t *)(0x6904U))
#define DAT_00006908 (*(uint8_t *)(0x6908U))
#define DAT_0000690c (*(uint8_t *)(0x690cU))
#define DAT_00006910 (*(uint8_t *)(0x6910U))
#define DAT_00006914 (*(uint8_t *)(0x6914U))
#define DAT_00006918 (*(uint8_t *)(0x6918U))
#define DAT_0000691c (*(uint8_t *)(0x691cU))
#define DAT_00006920 (*(uint8_t *)(0x6920U))
#define DAT_00006924 (*(uint8_t *)(0x6924U))
#define DAT_00006928 (*(uint8_t *)(0x6928U))
#define DAT_0000692c (*(uint8_t *)(0x692cU))
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#define DAT_00006934 (*(uint8_t *)(0x6934U))
#define DAT_00006938 (*(uint8_t *)(0x6938U))
#define DAT_0000693c (*(uint8_t *)(0x693cU))
#define DAT_00006940 (*(uint8_t *)(0x6940U))
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#define DAT_00006948 (*(uint8_t *)(0x6948U))
#define DAT_0000694c (*(uint8_t *)(0x694cU))
#define DAT_00006950 (*(uint8_t *)(0x6950U))
#define DAT_00006954 (*(uint8_t *)(0x6954U))
#define DAT_00006958 (*(uint8_t *)(0x6958U))
#define DAT_0000695c (*(uint8_t *)(0x695cU))
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#define DAT_00006968 (*(uint8_t *)(0x6968U))
#define DAT_0000696c (*(uint8_t *)(0x696cU))
#define DAT_00006970 (*(uint8_t *)(0x6970U))
#define DAT_00006974 (*(uint8_t *)(0x6974U))
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#define DAT_0000697c (*(uint8_t *)(0x697cU))
#define DAT_00006980 (*(uint8_t *)(0x6980U))
#define DAT_00006984 (*(uint8_t *)(0x6984U))
#define DAT_00006988 (*(uint8_t *)(0x6988U))
#define DAT_0000698c (*(uint8_t *)(0x698cU))
#define DAT_00006990 (*(uint8_t *)(0x6990U))
#define DAT_00006994 (*(uint8_t *)(0x6994U))
#define DAT_00006998 (*(uint8_t *)(0x6998U))
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c57d0 (*(uint8_t *)(0x20c57d0U))
#define DAT_020c585f (*(uint8_t *)(0x20c585fU))
#define DAT_020c5864 (*(uint8_t *)(0x20c5864U))
#define DAT_020c5865 (*(char *)(0x20c5865U))
#define DAT_020c5866 (*(char *)(0x20c5866U))
#define DAT_020c5867 (*(char *)(0x20c5867U))
#define DAT_020c5868 (*(char *)(0x20c5868U))
#define DAT_020c58d2 (*(uint8_t *)(0x20c58d2U))
#define DAT_020c58ef (*(uint8_t *)(0x20c58efU))
#define DAT_020cd805 (*(uint8_t *)(0x20cd805U))
#define DAT_020d6c13 (*(uint8_t *)(0x20d6c13U))
#define DAT_020d6c17 (*(uint8_t *)(0x20d6c17U))
#define DAT_020d6c53 (*(uint8_t *)(0x20d6c53U))
#define DAT_020d6c5e (*(uint8_t *)(0x20d6c5eU))
#define DAT_020d6c63 (*(uint8_t *)(0x20d6c63U))
#define DAT_020d6c67 (*(uint8_t *)(0x20d6c67U))
#define DAT_020d6c6b (*(uint8_t *)(0x20d6c6bU))
#define DAT_020d6c99 (*(uint8_t *)(0x20d6c99U))
#define DAT_020d6c9e (*(uint8_t *)(0x20d6c9eU))
#define DAT_020d6ca9 (*(uint8_t *)(0x20d6ca9U))
#define DAT_020d6cae (*(uint8_t *)(0x20d6caeU))
#define DAT_020d6cb1 (*(uint8_t *)(0x20d6cb1U))
#define DAT_020d6cbc (*(uint8_t *)(0x20d6cbcU))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define DAT_020de14c (*(uint32_t volatile *)(0x20de14cU))
#define DAT_020de150 (*(uint32_t volatile *)(0x20de150U))
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#define DAT_020de168 (*(uint32_t volatile *)(0x20de168U))
#define DAT_020de175 (*(uint8_t volatile *)(0x20de175U))
#define DAT_020de41c (*(uint8_t volatile *)(0x20de41cU))
#define DAT_020de420 (*(uint8_t volatile *)(0x20de420U))
#define DAT_020de424 (*(uint8_t volatile *)(0x20de424U))
#define DAT_020de428 (*(uint8_t volatile *)(0x20de428U))
#define DAT_020de42c (*(uint8_t volatile *)(0x20de42cU))
#define DAT_020de430 (*(uint8_t volatile *)(0x20de430U))
#define DAT_020de434 (*(uint8_t volatile *)(0x20de434U))
#define DAT_020de438 (*(uint8_t volatile *)(0x20de438U))
#define DAT_020de43c (*(uint8_t volatile *)(0x20de43cU))
#define DAT_020de440 (*(uint8_t volatile *)(0x20de440U))
#define DAT_020de444 (*(uint8_t volatile *)(0x20de444U))
#define DAT_020de448 (*(uint8_t volatile *)(0x20de448U))
#define DAT_020de44c (*(uint8_t volatile *)(0x20de44cU))
#define DAT_020de450 (*(uint8_t volatile *)(0x20de450U))
#define DAT_020de454 (*(uint8_t volatile *)(0x20de454U))
#define DAT_020de458 (*(uint8_t volatile *)(0x20de458U))
#define DAT_020de45c (*(uint8_t volatile *)(0x20de45cU))
#define DAT_020de460 (*(uint8_t volatile *)(0x20de460U))
#define DAT_020de464 (*(uint8_t volatile *)(0x20de464U))
#define DAT_020de468 (*(uint8_t volatile *)(0x20de468U))
#define DAT_020de46c (*(uint8_t volatile *)(0x20de46cU))
#define DAT_020de470 (*(uint8_t volatile *)(0x20de470U))
#define DAT_020de474 (*(uint8_t volatile *)(0x20de474U))
#define DAT_020de478 (*(uint8_t volatile *)(0x20de478U))
#define DAT_020de47c (*(uint8_t volatile *)(0x20de47cU))
#define DAT_020de480 (*(uint8_t volatile *)(0x20de480U))
#define DAT_020de484 (*(uint8_t volatile *)(0x20de484U))
#define DAT_020de488 (*(uint8_t volatile *)(0x20de488U))
#define DAT_020de48c (*(uint8_t volatile *)(0x20de48cU))
#define DAT_020de490 (*(uint8_t volatile *)(0x20de490U))
#define DAT_020de494 (*(uint8_t volatile *)(0x20de494U))
#define DAT_020de498 (*(uint8_t volatile *)(0x20de498U))
#define DAT_020de49c (*(uint8_t volatile *)(0x20de49cU))
#define DAT_020de4a0 (*(uint8_t volatile *)(0x20de4a0U))
#define DAT_020de4a4 (*(uint8_t volatile *)(0x20de4a4U))
#define DAT_020de4a8 (*(uint8_t volatile *)(0x20de4a8U))
#define DAT_020de4ac (*(uint8_t volatile *)(0x20de4acU))
#define DAT_020de4b0 (*(uint8_t volatile *)(0x20de4b0U))
#define DAT_020de4b4 (*(uint8_t volatile *)(0x20de4b4U))
#define DAT_020de4b8 (*(uint8_t volatile *)(0x20de4b8U))
#define DAT_020de4bc (*(uint8_t volatile *)(0x20de4bcU))
#define DAT_020de4c0 (*(uint8_t volatile *)(0x20de4c0U))
#define DAT_020de4c4 (*(uint8_t volatile *)(0x20de4c4U))
#define DAT_020de4c8 (*(uint8_t volatile *)(0x20de4c8U))
#define DAT_020de4cc (*(uint8_t volatile *)(0x20de4ccU))
#define DAT_020de4d0 (*(uint8_t volatile *)(0x20de4d0U))
#define DAT_020de4d4 (*(uint8_t volatile *)(0x20de4d4U))
#define DAT_020de4d8 (*(uint8_t volatile *)(0x20de4d8U))
#define DAT_020de4dc (*(uint8_t volatile *)(0x20de4dcU))
#define DAT_020de4e0 (*(uint8_t volatile *)(0x20de4e0U))
#define DAT_020de4e4 (*(uint8_t volatile *)(0x20de4e4U))
#define DAT_020de4e8 (*(uint8_t volatile *)(0x20de4e8U))
#define DAT_020de4ec (*(uint8_t volatile *)(0x20de4ecU))
#define DAT_020de500 (*(uint32_t volatile *)(0x20de500U))
#define DAT_020de504 (*(uint32_t volatile *)(0x20de504U))
#define DAT_020de508 (*(uint32_t volatile *)(0x20de508U))
#define DAT_020de50c (*(uint32_t volatile *)(0x20de50cU))
#define DAT_020de510 (*(uint32_t volatile *)(0x20de510U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_02130750 (*(uint32_t volatile *)(0x2130750U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_02130860 (*(uint8_t volatile *)(0x2130860U))
#define DAT_021408e8 (*(uint8_t volatile *)(0x21408e8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define DAT_021408f0 (*(uint32_t volatile *)(0x21408f0U))
#define DAT_02140910 (*(uint8_t volatile *)(0x2140910U))
#define DAT_0214094c (*(uint32_t volatile *)(0x214094cU))
#define DAT_0214acf8 (*(uint8_t volatile *)(0x214acf8U))
#define DAT_0214aff4 (*(uint32_t volatile *)(0x214aff4U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214b11c (*(uint8_t volatile *)(0x214b11cU))
#define DAT_0214b11d (*(uint8_t volatile *)(0x214b11dU))
#define DAT_0215bc84 (*(uint32_t volatile *)(0x215bc84U))
#define DAT_021ec4e8 (*(uint8_t volatile *)(0x21ec4e8U))
#define DAT_0223dbfc (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_0223dc00 (*(uint32_t volatile *)(0x223dc00U))
#define DAT_0223dc04 (*(uint32_t volatile *)(0x223dc04U))
#define DAT_0223dd20 (*(uint8_t volatile *)(0x223dd20U))
#define DAT_0223de29 (*(uint8_t volatile *)(0x223de29U))
#define DAT_0225229c (*(uint8_t volatile *)(0x225229cU))
#define PTR_DAT_020d9c34 (*(uint8_t * *)(0x20d9c34U))
#define PTR_recovered_2025810_020d8088 (*(uint8_t * *)(0x20d8088U))
#define PTR_recovered_2025f10_020d808c (*(uint8_t * *)(0x20d808cU))
#define PTR_str_020ccf0d_020d9c94 (*(char * *)(0x20d9c94U))
#define Ram020de41c (*(uint32_t volatile *)(0x20de41cU))
#define Ram020de420 (*(uint32_t volatile *)(0x20de420U))
#define Ram020de424 (*(uint32_t volatile *)(0x20de424U))
#define Ram020de428 (*(uint32_t volatile *)(0x20de428U))
#define Ram020de42c (*(uint32_t volatile *)(0x20de42cU))
#define Ram020de430 (*(uint32_t volatile *)(0x20de430U))
#define Ram020de434 (*(uint32_t volatile *)(0x20de434U))
#define Ram020de438 (*(uint32_t volatile *)(0x20de438U))
#define Ram020de43c (*(uint32_t volatile *)(0x20de43cU))
#define Ram020de440 (*(uint32_t volatile *)(0x20de440U))
#define Ram020de444 (*(uint32_t volatile *)(0x20de444U))
#define Ram020de448 (*(uint32_t volatile *)(0x20de448U))
#define Ram020de44c (*(uint32_t volatile *)(0x20de44cU))
#define Ram020de450 (*(uint32_t volatile *)(0x20de450U))
#define Ram020de454 (*(uint32_t volatile *)(0x20de454U))
#define Ram020de458 (*(uint32_t volatile *)(0x20de458U))
#define Ram020de45c (*(uint32_t volatile *)(0x20de45cU))
#define Ram020de460 (*(uint32_t volatile *)(0x20de460U))
#define Ram020de464 (*(uint32_t volatile *)(0x20de464U))
#define Ram020de468 (*(uint32_t volatile *)(0x20de468U))
#define Ram020de46c (*(uint32_t volatile *)(0x20de46cU))
#define Ram020de470 (*(uint32_t volatile *)(0x20de470U))
#define Ram020de474 (*(uint32_t volatile *)(0x20de474U))
#define Ram020de478 (*(uint32_t volatile *)(0x20de478U))
#define Ram020de47c (*(uint32_t volatile *)(0x20de47cU))
#define Ram020de480 (*(uint32_t volatile *)(0x20de480U))
#define Ram020de484 (*(uint32_t volatile *)(0x20de484U))
#define Ram020de488 (*(uint32_t volatile *)(0x20de488U))
#define Ram020de48c (*(uint32_t volatile *)(0x20de48cU))
#define Ram020de490 (*(uint32_t volatile *)(0x20de490U))
#define Ram020de494 (*(uint32_t volatile *)(0x20de494U))
#define Ram020de498 (*(uint32_t volatile *)(0x20de498U))
#define Ram020de49c (*(uint32_t volatile *)(0x20de49cU))
#define Ram020de4a0 (*(uint32_t volatile *)(0x20de4a0U))
#define Ram020de4a4 (*(uint32_t volatile *)(0x20de4a4U))
#define Ram020de4a8 (*(uint32_t volatile *)(0x20de4a8U))
#define Ram020de4ac (*(uint32_t volatile *)(0x20de4acU))
#define Ram020de4b0 (*(uint32_t volatile *)(0x20de4b0U))
#define Ram020de4b4 (*(uint32_t volatile *)(0x20de4b4U))
#define Ram020de4b8 (*(uint32_t volatile *)(0x20de4b8U))
#define Ram020de4bc (*(uint32_t volatile *)(0x20de4bcU))
#define Ram020de4c0 (*(uint32_t volatile *)(0x20de4c0U))
#define Ram020de4c4 (*(uint32_t volatile *)(0x20de4c4U))
#define Ram020de4c8 (*(uint32_t volatile *)(0x20de4c8U))
#define Ram020de4cc (*(uint32_t volatile *)(0x20de4ccU))
#define Ram020de4d0 (*(uint32_t volatile *)(0x20de4d0U))
#define Ram020de4d4 (*(uint32_t volatile *)(0x20de4d4U))
#define Ram020de4d8 (*(uint32_t volatile *)(0x20de4d8U))
#define Ram020de4dc (*(uint32_t volatile *)(0x20de4dcU))
#define Ram020de4e0 (*(uint32_t volatile *)(0x20de4e0U))
#define Ram020de4e4 (*(uint32_t volatile *)(0x20de4e4U))
#define Ram020de4e8 (*(uint32_t volatile *)(0x20de4e8U))
#define Ram020de4ec (*(uint32_t volatile *)(0x20de4ecU))
#define Ram0223dd20 (*(uint32_t volatile *)(0x223dd20U))
#define _DAT_00006800 (*(uint32_t *)(0x6800U))
#define _DAT_00006804 (*(uint32_t *)(0x6804U))
#define _DAT_00006808 (*(uint32_t *)(0x6808U))
#define _DAT_0000680c (*(uint8_t * *)(0x680cU))
#define _DAT_00006810 (*(uint8_t * *)(0x6810U))
#define _DAT_00006814 (*(uint8_t * *)(0x6814U))
#define _DAT_00006818 (*(uint8_t * *)(0x6818U))
#define _DAT_0000681c (*(uint8_t * *)(0x681cU))
#define _DAT_00006820 (*(uint8_t * *)(0x6820U))
#define _DAT_00006824 (*(uint8_t * *)(0x6824U))
#define _DAT_00006828 (*(uint8_t * *)(0x6828U))
#define _DAT_0000682c (*(uint8_t * *)(0x682cU))
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#define _DAT_00006834 (*(uint8_t * *)(0x6834U))
#define _DAT_00006838 (*(uint8_t * *)(0x6838U))
#define _DAT_0000683c (*(uint8_t * *)(0x683cU))
#define _DAT_00006840 (*(uint8_t * *)(0x6840U))
#define _DAT_00006844 (*(uint8_t * *)(0x6844U))
#define _DAT_00006848 (*(uint8_t * *)(0x6848U))
#define _DAT_0000684c (*(uint8_t * *)(0x684cU))
#define _DAT_00006850 (*(uint8_t * *)(0x6850U))
#define _DAT_00006854 (*(uint8_t * *)(0x6854U))
#define _DAT_00006858 (*(uint8_t * *)(0x6858U))
#define _DAT_0000685c (*(uint8_t * *)(0x685cU))
#define _DAT_00006860 (*(uint8_t * *)(0x6860U))
#define _DAT_00006864 (*(uint8_t * *)(0x6864U))
#define _DAT_00006868 (*(uint32_t *)(0x6868U))
#define _DAT_0000686c (*(uint32_t *)(0x686cU))
#define _DAT_00006870 (*(uint32_t *)(0x6870U))
#define _DAT_00006874 (*(uint32_t *)(0x6874U))
#define _DAT_00006878 (*(uint32_t *)(0x6878U))
#define _DAT_0000687c (*(uint8_t * *)(0x687cU))
#define _DAT_00006880 (*(uint8_t * *)(0x6880U))
#define _DAT_00006884 (*(uint8_t * *)(0x6884U))
#define _DAT_00006888 (*(uint8_t * *)(0x6888U))
#define _DAT_0000688c (*(uint8_t * *)(0x688cU))
#define _DAT_00006890 (*(uint8_t * *)(0x6890U))
#define _DAT_00006894 (*(uint8_t * *)(0x6894U))
#define _DAT_00006898 (*(uint8_t * *)(0x6898U))
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
#define _DAT_000068a0 (*(uint8_t * *)(0x68a0U))
#define _DAT_000068a4 (*(uint8_t * *)(0x68a4U))
#define _DAT_000068a8 (*(uint8_t * *)(0x68a8U))
#define _DAT_000068ac (*(uint8_t * *)(0x68acU))
#define _DAT_000068b0 (*(uint8_t * *)(0x68b0U))
#define _DAT_000068b4 (*(uint8_t * *)(0x68b4U))
#define _DAT_000068b8 (*(uint8_t * *)(0x68b8U))
#define _DAT_000068bc (*(uint8_t * *)(0x68bcU))
#define _DAT_000068c0 (*(uint8_t * *)(0x68c0U))
#define _DAT_000068c4 (*(uint8_t * *)(0x68c4U))
#define _DAT_000068c8 (*(uint8_t * *)(0x68c8U))
#define _DAT_000068cc (*(uint8_t * *)(0x68ccU))
#define _DAT_000068d0 (*(uint8_t * *)(0x68d0U))
#define _DAT_000068d4 (*(uint8_t * *)(0x68d4U))
#define _DAT_000068d8 (*(uint8_t * *)(0x68d8U))
#define _DAT_000068dc (*(uint8_t * *)(0x68dcU))
#define _DAT_000068e0 (*(uint8_t * *)(0x68e0U))
#define _DAT_000068e4 (*(uint32_t *)(0x68e4U))
#define _DAT_000068e8 (*(uint8_t * *)(0x68e8U))
#define _DAT_000068ec (*(uint8_t * *)(0x68ecU))
#define _DAT_000068f0 (*(uint8_t * *)(0x68f0U))
#define _DAT_000068f4 (*(uint8_t * *)(0x68f4U))
#define _DAT_000068f8 (*(uint8_t * *)(0x68f8U))
#define _DAT_000068fc (*(uint8_t * *)(0x68fcU))
#define _DAT_00006900 (*(uint8_t * *)(0x6900U))
#define _DAT_00006904 (*(uint8_t * *)(0x6904U))
#define _DAT_00006908 (*(uint8_t * *)(0x6908U))
#define _DAT_0000690c (*(uint8_t * *)(0x690cU))
#define _DAT_00006910 (*(uint8_t * *)(0x6910U))
#define _DAT_00006914 (*(uint8_t * *)(0x6914U))
#define _DAT_00006918 (*(uint8_t * *)(0x6918U))
#define _DAT_0000691c (*(uint8_t * *)(0x691cU))
#define _DAT_00006920 (*(uint8_t * *)(0x6920U))
#define _DAT_00006924 (*(uint8_t * *)(0x6924U))
#define _DAT_00006928 (*(uint8_t * *)(0x6928U))
#define _DAT_0000692c (*(uint8_t * *)(0x692cU))
#define _DAT_00006930 (*(uint8_t * *)(0x6930U))
#define _DAT_00006934 (*(uint8_t * *)(0x6934U))
#define _DAT_00006938 (*(uint8_t * *)(0x6938U))
#define _DAT_0000693c (*(uint8_t * *)(0x693cU))
#define _DAT_00006940 (*(uint8_t * *)(0x6940U))
#define _DAT_00006944 (*(uint8_t * *)(0x6944U))
#define _DAT_00006948 (*(uint8_t * *)(0x6948U))
#define _DAT_0000694c (*(uint8_t * *)(0x694cU))
#define _DAT_00006950 (*(uint8_t * *)(0x6950U))
#define _DAT_00006954 (*(uint8_t * *)(0x6954U))
#define _DAT_00006958 (*(uint8_t * *)(0x6958U))
#define _DAT_0000695c (*(uint8_t * *)(0x695cU))
#define _DAT_00006960 (*(uint8_t * *)(0x6960U))
#define _DAT_00006964 (*(uint8_t * *)(0x6964U))
#define _DAT_00006968 (*(uint8_t * *)(0x6968U))
#define _DAT_0000696c (*(uint8_t * *)(0x696cU))
#define _DAT_00006970 (*(uint8_t * *)(0x6970U))
#define _DAT_00006974 (*(uint8_t * *)(0x6974U))
#define _DAT_00006978 (*(uint8_t * *)(0x6978U))
#define _DAT_0000697c (*(uint8_t * *)(0x697cU))
#define _DAT_00006980 (*(uint8_t * *)(0x6980U))
#define _DAT_00006984 (*(uint8_t * *)(0x6984U))
#define _DAT_00006988 (*(uint8_t * *)(0x6988U))
#define _DAT_0000698c (*(uint8_t * *)(0x698cU))
#define _DAT_00006990 (*(uint8_t * *)(0x6990U))
#define _DAT_00006994 (*(uint8_t * *)(0x6994U))
#define _DAT_00006998 (*(uint8_t * *)(0x6998U))
#define str_020c4fe7 (*(char (*)[1])(0x20c4fe7U))
#define str_020c575c (*(char (*)[1])(0x20c575cU))
#define str_020c5779 (*(char (*)[1])(0x20c5779U))
#define str_020c57b0 (*(char (*)[1])(0x20c57b0U))
#define str_020c57d3 (*(char (*)[1])(0x20c57d3U))
#define str_020c57f1 (*(char (*)[1])(0x20c57f1U))
#define str_020c580d (*(char (*)[1])(0x20c580dU))
#define str_020c5847 (*(char (*)[1])(0x20c5847U))
#define str_020c5869 (*(char (*)[1])(0x20c5869U))
#define str_020c58e3 (*(char (*)[1])(0x20c58e3U))
#define str_020c596d (*(char (*)[1])(0x20c596dU))
#define str_020c5973 (*(char (*)[1])(0x20c5973U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020cd7ff (*(char (*)[1])(0x20cd7ffU))
#define str_020cd809 (*(char (*)[1])(0x20cd809U))
#define str_020cd853 (*(char (*)[1])(0x20cd853U))
#define str_020cd85f (*(char (*)[1])(0x20cd85fU))
#define str_020cd86c (*(char (*)[1])(0x20cd86cU))
#define str_020cd879 (*(char (*)[1])(0x20cd879U))
#define str_020cd884 (*(char (*)[1])(0x20cd884U))
#define str_020cd890 (*(char (*)[1])(0x20cd890U))
#define str_020cd89d (*(char (*)[1])(0x20cd89dU))
#define str_020cd8ab (*(char (*)[1])(0x20cd8abU))
#define str_020cd8b7 (*(char (*)[1])(0x20cd8b7U))
#define str_020cd8c3 (*(char (*)[1])(0x20cd8c3U))
#define str_020cd8d1 (*(char (*)[1])(0x20cd8d1U))
#define str_020cd8dc (*(char (*)[1])(0x20cd8dcU))
#define str_020cd8e9 (*(char (*)[1])(0x20cd8e9U))
#define str_020cd8f6 (*(char (*)[1])(0x20cd8f6U))
#define str_020cd903 (*(char (*)[1])(0x20cd903U))
#define str_020cd9a9 (*(char (*)[1])(0x20cd9a9U))
#define str_020cd9e5 (*(char (*)[1])(0x20cd9e5U))
#define str_020cd9f0 (*(char (*)[1])(0x20cd9f0U))
#define str_020cd9fa (*(char (*)[1])(0x20cd9faU))
#define str_020cda03 (*(char (*)[1])(0x20cda03U))
#define str_020cda0c (*(char (*)[1])(0x20cda0cU))
#define str_020cda15 (*(char (*)[1])(0x20cda15U))
#define str_020cda1e (*(char (*)[1])(0x20cda1eU))
#define str_020cda27 (*(char (*)[1])(0x20cda27U))
#define str_020cda30 (*(char (*)[1])(0x20cda30U))
#define str_020cda39 (*(char (*)[1])(0x20cda39U))
#define str_020cda43 (*(char (*)[1])(0x20cda43U))
#define str_020cda53 (*(char (*)[1])(0x20cda53U))
#define str_020cda63 (*(char (*)[1])(0x20cda63U))
#define str_020cda6c (*(char (*)[1])(0x20cda6cU))
#define str_020cda78 (*(char (*)[1])(0x20cda78U))
#define str_020cda81 (*(char (*)[1])(0x20cda81U))
#define str_020cda89 (*(char (*)[1])(0x20cda89U))
#define str_020cda91 (*(char (*)[1])(0x20cda91U))
#define str_020cea83 (*(char (*)[1])(0x20cea83U))
#define str_020d16e4 (*(char (*)[1])(0x20d16e4U))
#define str_020d2d40 (*(char (*)[1])(0x20d2d40U))
#define str_020d6bb5 (*(char (*)[1])(0x20d6bb5U))
#define str_020d6bc1 (*(char (*)[1])(0x20d6bc1U))
#define str_020d6bd0 (*(char (*)[1])(0x20d6bd0U))
#define str_020d6bdf (*(char (*)[1])(0x20d6bdfU))
#define str_020d6bed (*(char (*)[1])(0x20d6bedU))
#define str_020d6bff (*(char (*)[1])(0x20d6bffU))
#define str_020d6c07 (*(char (*)[1])(0x20d6c07U))
#define str_020d6c0d (*(char (*)[1])(0x20d6c0dU))
#define str_020d6c3e (*(char (*)[1])(0x20d6c3eU))
#define str_020d6c45 (*(char (*)[1])(0x20d6c45U))
#define str_020d6c4c (*(char (*)[1])(0x20d6c4cU))
#define str_020d6c58 (*(char (*)[1])(0x20d6c58U))
#define str_020d6ca3 (*(char (*)[1])(0x20d6ca3U))
#define str_020d6cb6 (*(char (*)[1])(0x20d6cb6U))
#define str_020d6ce0 (*(char (*)[1])(0x20d6ce0U))
#define str_020d6d02 (*(char (*)[1])(0x20d6d02U))
#define str_020d6d42 (*(char (*)[1])(0x20d6d42U))
#define str_020d6d4f (*(char (*)[1])(0x20d6d4fU))
#define str_020d6d5a (*(char (*)[1])(0x20d6d5aU))
#define bStack_455 (*(byte *)(frame + 539))
#define local_654 (*(undefined4 *)(frame + 28))
#define local_650 (*(undefined4 *)(frame + 32))
#define local_64c (*(undefined4 *)(frame + 36))
#define local_648 (*(undefined4 *)(frame + 40))
#define local_644 (*(undefined4 *)(frame + 44))
#define local_640 (*(undefined4 *)(frame + 48))
#define local_63c (*(undefined4 *)(frame + 52))
#define local_638 (*(undefined4 * *)(frame + 56))
#define local_634 (*(undefined4 *)(frame + 60))
#define local_454 (*(undefined4 *)(frame + 540))
#define local_450 (*(undefined4 *)(frame + 544))
#define local_44c (*(undefined4 *)(frame + 548))
#define local_448 (*(void * *)(frame + 552))
#define local_444 (*(undefined4 *)(frame + 556))
#define local_440 (*(undefined4 *)(frame + 560))
#define local_43c (*(undefined4 *)(frame + 564))
#define local_438 (*(undefined4 *)(frame + 568))
#define local_434 (*(undefined4 *)(frame + 572))
#define local_54 (*(int *)(frame + 1564))
#define local_50 (*(uint *)(frame + 1568))
#define local_4c (*(float *)(frame + 1572))
#define local_48 (*(uint *)(frame + 1576))
#define local_44 (*(uint *)(frame + 1580))
#define local_40 (*(undefined4 *)(frame + 1584))
#define local_3c (*(undefined4 *)(frame + 1588))
#define local_38 (*(undefined4 *)(frame + 1592))
#define local_34 (*(undefined4 *)(frame + 1596))
#define local_30 (*(undefined4 *)(frame + 1600))
#define local_2c (*(undefined4 *)(frame + 1604))
#define local_28 (*(undefined4 *)(frame + 1608))
#define local_24 (*(undefined4 *)(frame + 1612))
#define local_1e (*(ushort *)(frame + 1618))
#define local_1c (*(char * *)(frame + 1620))
#define local_14 (*(undefined4 * *)(frame + 1628))


void recovered_2044080(void)

{
  unsigned char frame[1680] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  char cVar2;
  uchar uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  uint *puVar10;
  undefined1 *vararg0;
  undefined4 uVar11;
  uchar *puVar12;
  ulong uVar13;
  uchar in_CL;
  uchar in_CL_00;
  uchar in_CL_01;
  byte extraout_CL = 0;
  byte extraout_CL_00 = 0;
  byte extraout_CL_01 = 0;
  byte extraout_CL_02 = 0;
  byte extraout_CL_03 = 0;
  byte extraout_CL_04 = 0;
  byte extraout_CL_05 = 0;
  uchar in_CL_02;
  byte extraout_CL_06 = 0;
  byte extraout_CL_07 = 0;
  byte extraout_CL_08 = 0;
  byte extraout_CL_09 = 0;
  int iVar14;
  uint uVar15;
  uint extraout_ECX = 0;
  uint extraout_ECX_00 = 0;
  uint extraout_ECX_01 = 0;
  uint extraout_ECX_02 = 0;
  uint extraout_ECX_03 = 0;
  uint extraout_ECX_04 = 0;
  uint extraout_ECX_05 = 0;
  uint extraout_ECX_06 = 0;
  uint extraout_ECX_07 = 0;
  uint extraout_ECX_08 = 0;
  uint extraout_ECX_09 = 0;
  uint extraout_ECX_10 = 0;
  uint extraout_ECX_11 = 0;
  uint extraout_ECX_12 = 0;
  uint extraout_ECX_13 = 0;
  uint extraout_ECX_14 = 0;
  uint extraout_ECX_15 = 0;
  uint extraout_ECX_16 = 0;
  char cVar16;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx;
  uint incoming_edx_00;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint incoming_edx_01;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  uint incoming_edx_02;
  uint extraout_EDX_05 = 0;
  uint extraout_EDX_06 = 0;
  uint incoming_edx_03;
  uint incoming_edx_04;
  uint incoming_edx_05;
  uint extraout_EDX_07 = 0;
  uint extraout_EDX_08 = 0;
  uint incoming_edx_06;
  uint extraout_EDX_09 = 0;
  uint extraout_EDX_10 = 0;
  uint extraout_EDX_11 = 0;
  uint incoming_edx_07;
  uint extraout_EDX_12 = 0;
  uint extraout_EDX_13 = 0;
  uint extraout_EDX_14 = 0;
  uint incoming_edx_08;
  uint extraout_EDX_15 = 0;
  uint extraout_EDX_16 = 0;
  uint extraout_EDX_17 = 0;
  uint incoming_edx_09;
  uint extraout_EDX_18 = 0;
  uint extraout_EDX_19 = 0;
  uint extraout_EDX_20 = 0;
  uint incoming_edx_10;
  uint extraout_EDX_21 = 0;
  uint extraout_EDX_22 = 0;
  uint extraout_EDX_23 = 0;
  uint extraout_EDX_24 = 0;
  uint extraout_EDX_25 = 0;
  uint extraout_EDX_26 = 0;
  uint extraout_EDX_27 = 0;
  uint extraout_EDX_28 = 0;
  uint extraout_EDX_29 = 0;
  uint extraout_EDX_30 = 0;
  uint incoming_edx_11;
  uint extraout_EDX_31 = 0;
  uint extraout_EDX_32 = 0;
  uint incoming_edx_12;
  uint extraout_EDX_33 = 0;
  uint extraout_EDX_34 = 0;
  uint extraout_EDX_35 = 0;
  uint incoming_edx_13;
  uint extraout_EDX_36 = 0;
  uint extraout_EDX_37 = 0;
  uint extraout_EDX_38 = 0;
  uint incoming_edx_14;
  uint extraout_EDX_39 = 0;
  uint extraout_EDX_40 = 0;
  uint extraout_EDX_41 = 0;
  uint incoming_edx_15;
  uint extraout_EDX_42 = 0;
  uint extraout_EDX_43 = 0;
  uint extraout_EDX_44 = 0;
  uint incoming_edx_16;
  uint extraout_EDX_45 = 0;
  uint extraout_EDX_46 = 0;
  uint incoming_edx_17;
  uint extraout_EDX_47 = 0;
  uint extraout_EDX_48 = 0;
  uint extraout_EDX_49 = 0;
  uint incoming_edx_18;
  uint extraout_EDX_50 = 0;
  uint extraout_EDX_51 = 0;
  uint extraout_EDX_52 = 0;
  uint incoming_edx_19;
  uint extraout_EDX_53 = 0;
  uint extraout_EDX_54 = 0;
  uint extraout_EDX_55 = 0;
  uint incoming_edx_20;
  uint extraout_EDX_56 = 0;
  uint extraout_EDX_57 = 0;
  uint extraout_EDX_58 = 0;
  uint incoming_edx_21;
  uint extraout_EDX_59 = 0;
  uint extraout_EDX_60 = 0;
  uint extraout_EDX_61 = 0;
  uint extraout_EDX_62 = 0;
  uint extraout_EDX_63 = 0;
  uint extraout_EDX_64 = 0;
  uint extraout_EDX_65 = 0;
  uint extraout_EDX_66 = 0;
  uint extraout_EDX_67 = 0;
  uint extraout_EDX_68 = 0;
  uint extraout_EDX_69 = 0;
  uint extraout_EDX_70 = 0;
  uint incoming_edx_22;
  uint extraout_EDX_71 = 0;
  uint extraout_EDX_72 = 0;
  uint incoming_edx_23;
  uint extraout_EDX_73 = 0;
  uint extraout_EDX_74 = 0;
  uint extraout_EDX_75 = 0;
  uint incoming_edx_24;
  uint extraout_EDX_76 = 0;
  uint extraout_EDX_77 = 0;
  uint extraout_EDX_78 = 0;
  uint incoming_edx_25;
  uint extraout_EDX_79 = 0;
  uint extraout_EDX_80 = 0;
  uint incoming_edx_26;
  uint extraout_EDX_81 = 0;
  uint extraout_EDX_82 = 0;
  uint extraout_EDX_83 = 0;
  uint incoming_edx_27;
  uint extraout_EDX_84 = 0;
  uint extraout_EDX_85 = 0;
  uint extraout_EDX_86 = 0;
  uint incoming_edx_28;
  uint extraout_EDX_87 = 0;
  uint extraout_EDX_88 = 0;
  uint incoming_edx_29;
  uint extraout_EDX_89 = 0;
  uint extraout_EDX_90 = 0;
  uint extraout_EDX_91 = 0;
  uint incoming_edx_30;
  uint extraout_EDX_92 = 0;
  uint extraout_EDX_93 = 0;
  uint extraout_EDX_94 = 0;
  uint incoming_edx_31;
  uint extraout_EDX_95 = 0;
  uint extraout_EDX_96 = 0;
  uint extraout_EDX_97 = 0;
  uint extraout_EDX_98 = 0;
  uint extraout_EDX_99 = 0;
  uint uVar17;
  uint incoming_edx_32;
  uint incoming_edx_33;
  uint incoming_edx_34;
  uint incoming_edx_35;
  uint incoming_edx_36;
  uint incoming_edx_37;
  float incoming_edx_38;
  char *pcVar18;
  uint incoming_edx_39;
  uint incoming_edx_40;
  uint incoming_edx_41;
  uint incoming_edx_42;
  byte bVar19;
  char *pcVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint *puVar23;
  uchar *incoming_edx_43;
  int *in_ECX;
  ushort in_FPUControlWord = pf_fpu_control();

  recovered_20070b0();
  uVar6 = recovered_2008190();
  DAT_0214aff4 = uVar6;
  uVar6 = recovered_2012480(0,0,&local_454);
  if ((char)uVar6 == '\0') {
    DAT_020de150 = 1;
    iVar14 = 0x10;
    uVar6 = 0x4000;
  }
  else {
    puVar21 = (undefined4 *)0x1;
    if (10 < local_454) {
      uVar6 = recovered_2012480(0xb,0,&local_654);
      if ((char)uVar6 != '\0') {
        uVar6 = local_650 & 0xffff;
        if (uVar6 != 0 && PF_PART1(local_64c, 1) != '\0') {
          uVar7 = recovered_2012480(0xb,1,&local_654);
          if (((char)uVar7 == '\0') ||
             (puVar21 = (undefined4 *)(local_650 & 0xffff),
             puVar21 == (undefined4 *)0x0 || PF_PART1(local_64c, 1) == '\0')) {
LAB_0204433c:
            puVar21 = (undefined4 *)uVar6;
          }
          else {
            if (puVar21 <= uVar6) {
              puVar21 = (undefined4 *)uVar6;
            }
            uVar6 = recovered_2012480(0xb,2,&local_654);
            if ((char)uVar6 != '\0') {
              uVar6 = local_650 & 0xffff;
              if (uVar6 != 0 && PF_PART1(local_64c, 1) != '\0') {
                if (uVar6 <= puVar21) {
                  uVar6 = (uint)puVar21;
                }
                uVar7 = recovered_2012480(0xb,3,&local_654);
                if (((char)uVar7 == '\0') ||
                   (puVar21 = (undefined4 *)(local_650 & 0xffff),
                   puVar21 == (undefined4 *)0x0 || PF_PART1(local_64c, 1) == '\0')) goto LAB_0204433c;
                if (puVar21 <= uVar6) {
                  puVar21 = (undefined4 *)uVar6;
                }
                uVar6 = recovered_2012480(0xb,4,&local_654);
                if ((char)uVar6 != '\0') {
                  uVar6 = local_650 & 0xffff;
                  if (uVar6 != 0 && PF_PART1(local_64c, 1) != '\0') {
                    local_14 = (undefined4 *)uVar6;
                    if (uVar6 <= puVar21) {
                      local_14 = puVar21;
                    }
                    uVar6 = recovered_2012480(0xb,5,&local_654);
                    if (((char)uVar6 == '\0') ||
                       (puVar21 = (undefined4 *)(local_650 & 0xffff),
                       puVar21 == (undefined4 *)0x0 || PF_PART1(local_64c, 1) == '\0')) {
                      puVar21 = local_14;
                    }
                    else {
                      if (puVar21 <= local_14) {
                        puVar21 = local_14;
                      }
                      uVar6 = recovered_2012480(0xb,6,&local_654);
                      if ((char)uVar6 != '\0') {
                        uVar6 = local_650 & 0xffff;
                        if (uVar6 != 0 && PF_PART1(local_64c, 1) != '\0') {
                          if (uVar6 <= puVar21) {
                            uVar6 = (uint)puVar21;
                          }
                          uVar7 = recovered_2012480(0xb,7,&local_654);
                          if ((((char)uVar7 == '\0') ||
                              (puVar21 = (undefined4 *)(local_650 & 0xffff),
                              puVar21 == (undefined4 *)0x0 || PF_PART1(local_64c, 1) == '\0')) ||
                             (puVar21 <= uVar6)) goto LAB_0204433c;
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
    if ((puVar21 == (undefined4 *)0x1) && (local_454 != 0)) {
      puVar21 = (undefined4 *)0x1;
      uVar6 = recovered_2012480(1,0,&local_654);
      if ((char)uVar6 != '\0') {
        puVar21 = (undefined4 *)((uint)PF_PART1(local_650, 2) + (uint)(PF_PART1(local_650, 2) == 0));
      }
    }
    uVar6 = (uint)puVar21;
    if (0x3f < puVar21) {
      uVar6 = 0x40;
    }
    DAT_020de150 = uVar6;
    if (puVar21 < 5) {
      iVar14 = 0x10;
    }
    else {
      iVar14 = uVar6 * 4;
    }
    uVar6 = uVar6 << 0xe;
  }
  DAT_020de164 = iVar14;
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  DAT_020de168 = uVar6;
  DAT_020de500 = 0x1000;
  DAT_020de504 = 0x1000;
  DAT_020de508 = 0x1000;
  DAT_020de50c = 1;
  DAT_020de510 = 1;
  local_454 = 0x1000;
  local_450 = 0x1000;
  local_44c = 5.73972e-42;
  local_448 = (void *)0x1;
  local_444 = 1;
  recovered_2004760(&local_454);
  recovered_2001e00(&DAT_00006800,0,0x19c);
  _DAT_00006800 = 0x50414d57;
  _DAT_00006804 = 1000000;
  _DAT_00006808 = 0x19c;
  _DAT_0000680c = recovered_203df50;
  _DAT_00006810 = recovered_20424e0;
  _DAT_00006814 = recovered_2042550;
  _DAT_00006818 = recovered_2043300;
  _DAT_0000681c = recovered_2043620;
  _DAT_00006820 = recovered_2026d50;
  _DAT_00006824 = recovered_2027370;
  _DAT_00006828 = recovered_2027430;
  _DAT_0000682c = recovered_2027510;
  _DAT_00006830 = recovered_20276c0;
  _DAT_00006834 = recovered_2027e10;
  _DAT_00006838 = recovered_2027fe0;
  _DAT_0000683c = recovered_20288f0;
  _DAT_00006840 = recovered_20292a0;
  _DAT_00006844 = recovered_2029300;
  _DAT_00006848 = recovered_2043690;
  _DAT_0000684c = recovered_2029930;
  _DAT_00006850 = recovered_2029a60;
  _DAT_00006854 = recovered_2029b10;
  _DAT_00006858 = recovered_2029050;
  _DAT_0000685c = PTR_recovered_2025810_020d8088;
  _DAT_0000691c = recovered_2029110;
  _DAT_00006860 = recovered_2029130;
  _DAT_00006864 = PTR_recovered_2025f10_020d808c;
  _DAT_00006868 = 0;
  _DAT_0000686c = 0;
  _DAT_00006870 = 0;
  _DAT_00006874 = 0;
  _DAT_00006878 = 0;
  _DAT_0000687c = recovered_2042dc0;
  _DAT_0000695c = recovered_2042e80;
  _DAT_00006880 = recovered_2042fb0;
  _DAT_00006884 = recovered_2029c10;
  _DAT_00006888 = recovered_2039190;
  _DAT_0000688c = recovered_20391b0;
  _DAT_00006890 = recovered_202c200;
  _DAT_00006894 = recovered_20391f0;
  _DAT_00006898 = recovered_2043be0;
  _DAT_0000689c = recovered_2039940;
  _DAT_000068b8 = recovered_2039e80;
  _DAT_000068a0 = recovered_203ce80;
  _DAT_000068a4 = recovered_203d0f0;
  _DAT_000068a8 = recovered_203d450;
  _DAT_000068ac = recovered_203d4a0;
  _DAT_000068b0 = recovered_203d650;
  _DAT_000068b4 = recovered_203d790;
  _DAT_000068bc = recovered_202a330;
  _DAT_000068c0 = recovered_202a350;
  _DAT_000068c4 = recovered_202ac30;
  _DAT_000068c8 = recovered_202ad00;
  _DAT_000068cc = recovered_202b3a0;
  _DAT_000068d0 = recovered_202b490;
  _DAT_000068d4 = recovered_202b590;
  _DAT_000068d8 = recovered_202b610;
  _DAT_000068dc = recovered_202bc40;
  _DAT_000068e0 = recovered_202bfa0;
  _DAT_00006920 = recovered_202c030;
  _DAT_000068e4 = 0;
  _DAT_000068e8 = recovered_202c170;
  _DAT_000068ec = recovered_203d850;
  _DAT_000068f0 = recovered_203d900;
  _DAT_000068f4 = recovered_2027df0;
  _DAT_000068f8 = recovered_2039ed0;
  _DAT_000068fc = recovered_203d950;
  _DAT_00006900 = recovered_203da10;
  _DAT_00006960 = recovered_203d6a0;
  _DAT_00006964 = recovered_203d6f0;
  _DAT_0000697c = recovered_203d740;
  _DAT_00006904 = recovered_203bc30;
  _DAT_00006908 = recovered_203c2f0;
  _DAT_0000690c = recovered_203c1c0;
  _DAT_00006910 = recovered_203c7d0;
  _DAT_00006914 = recovered_203cd90;
  _DAT_00006918 = recovered_203ce20;
  _DAT_00006924 = recovered_203caa0;
  _DAT_00006928 = recovered_203cc00;
  _DAT_0000692c = recovered_203ccc0;
  _DAT_00006930 = recovered_202c7e0;
  _DAT_00006934 = recovered_202ca80;
  _DAT_00006938 = recovered_202ed80;
  _DAT_0000693c = recovered_202d1e0;
  _DAT_00006940 = recovered_202d3b0;
  _DAT_00006944 = recovered_202d430;
  _DAT_00006948 = recovered_202d900;
  _DAT_0000694c = recovered_202d9c0;
  _DAT_00006950 = recovered_202da40;
  _DAT_00006954 = recovered_202dae0;
  _DAT_00006958 = recovered_2028700;
  _DAT_00006968 = recovered_203bac0;
  _DAT_0000696c = recovered_203bbb0;
  _DAT_00006970 = recovered_20416e0;
  _DAT_00006974 = recovered_2039a00;
  _DAT_00006978 = recovered_203da80;
  _DAT_00006980 = recovered_2028760;
  _DAT_00006984 = recovered_2028800;
  _DAT_00006988 = recovered_2028890;
  _DAT_0000698c = recovered_203a700;
  _DAT_00006990 = recovered_2039700;
  _DAT_00006994 = recovered_2039820;
  _DAT_00006998 = recovered_203d7d0;
  Ram020de41c = 0x54584b57;
  Ram020de420 = 1000000;
  Ram020de424 = 0xd4;
  Ram020de428 = 0x20717b0;
  Ram020de42c = 0x20bd350;
  Ram020de430 = 0x2071bb0;
  Ram020de434 = 0x20bd3e0;
  Ram020de438 = 0x2071d90;
  Ram020de43c = 0x2071ae0;
  Ram020de440 = 0x2070f60;
  Ram020de444 = 0x20716e0;
  Ram020de448 = 0x2066890;
  Ram020de44c = 0x206d920;
  Ram020de450 = 0x2071780;
  Ram020de454 = 0x20717a0;
  Ram020de458 = 0x2070b80;
  Ram020de45c = 0x2070eb0;
  Ram020de460 = 0x2070cb0;
  Ram020de464 = 0x2070ce0;
  Ram020de468 = 0x2070df0;
  Ram020de46c = 0x2071950;
  Ram020de470 = 0x20716b0;
  Ram020de474 = 0x2071a40;
  Ram020de478 = 0x206d570;
  Ram020de47c = 0x206d5b0;
  Ram020de480 = 0x20bd4a0;
  Ram020de484 = 0x20bd4d0;
  Ram020de488 = 0x20bd500;
  Ram020de4d4 = 0x206d540;
  Ram020de4d8 = 0x2071a70;
  Ram020de4dc = 0x2071aa0;
  Ram020de48c = 0x206d5f0;
  Ram020de490 = 0x206d620;
  Ram020de494 = 0x2071ad0;
  Ram020de498 = 0x20bd530;
  Ram020de49c = 0x20b55c0;
  Ram020de4a0 = 0x20bd580;
  Ram020de4a4 = 0x20bd590;
  Ram020de4a8 = 0x20bd5a0;
  Ram020de4ac = 0x20bd5b0;
  Ram020de4b0 = 0x20bd5f0;
  Ram020de4b4 = 0x20b55d0;
  Ram020de4b8 = 0x20bba60;
  Ram020de4bc = 0x2071c10;
  Ram020de4c0 = 0x20bd630;
  Ram020de4c4 = 0x20bd700;
  Ram020de4c8 = 0x20bd710;
  Ram020de4cc = 0x20bd750;
  Ram020de4d0 = 0x2071f10;
  Ram020de4e0 = 0x2071f30;
  Ram020de4e4 = 0x206d940;
  Ram020de4e8 = 0x2072110;
  Ram020de4ec = 0x20bd790;
  recovered_2012230();
  DAT_021408e8 = 1;
  recovered_2008f70();
  recovered_20070b0();
  recovered_20b63c0();
  DAT_0214b0e0 = 0;
  DAT_021408e9 = 0;
  recovered_2042810(0x280,0x1e0);
  DAT_020de175 = 1;
  DAT_0215bc84 = 0;
  DAT_0214b11d = 0;
  uVar6 = recovered_20081a0();
  Ram0223dd20 = uVar6;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  uVar8 = recovered_2002270(str_020c58e3);
  pvVar9 = recovered_2001650(uVar8 + 1);
  if (pvVar9 != (void *)0x0) {
    uVar6 = extraout_EDX;
    if (uVar8 != 0) {
      recovered_2001b70(pvVar9,str_020c58e3,uVar8);
      uVar6 = extraout_EDX_00;
    }
    *(undefined1 *)((int)pvVar9 + uVar8) = 0;
    recovered_2043a90(&local_454,uVar6);
    local_454 = 3;
    local_448 = pvVar9;
    recovered_207e100(str_020d6bb5,(int)&local_454);
    recovered_2043a90(&local_454,incoming_edx);
  }
  local_654 = 0.0;
  uVar3 = recovered_2083500(&DAT_020c58ef,(float *)&local_654);
  if (uVar3 != '\0') {
    local_1e = in_FPUControlWord | 0xc00;
    local_450 = (int)ROUND(local_654);
    local_454 = 2;
    local_44c = local_654;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    local_54 = local_450;
    recovered_207e100(str_020d6bc1,(int)&local_454);
    recovered_2043a90(&local_454,incoming_edx_00);
  }
  uVar8 = recovered_2002270(&DAT_020c58d2);
  pvVar9 = recovered_2001650(uVar8 + 1);
  if (pvVar9 != (void *)0x0) {
    uVar6 = extraout_EDX_01;
    if (uVar8 != 0) {
      recovered_2001b70(pvVar9,&DAT_020c58d2,uVar8);
      uVar6 = extraout_EDX_02;
    }
    *(undefined1 *)((int)pvVar9 + uVar8) = 0;
    recovered_2043a90(&local_454,uVar6);
    local_454 = 3;
    local_448 = pvVar9;
    recovered_207e100(str_020d6bd0,(int)&local_454);
    recovered_2043a90(&local_454,incoming_edx_01);
  }
  uVar8 = recovered_2002270(str_020c596d);
  pvVar9 = recovered_2001650(uVar8 + 1);
  if (pvVar9 != (void *)0x0) {
    uVar6 = extraout_EDX_03;
    if (uVar8 != 0) {
      recovered_2001b70(pvVar9,str_020c596d,uVar8);
      uVar6 = extraout_EDX_04;
    }
    *(undefined1 *)((int)pvVar9 + uVar8) = 0;
    recovered_2043a90(&local_454,uVar6);
    local_454 = 3;
    local_448 = pvVar9;
    recovered_207e100(str_020d6bdf,(int)&local_454);
    recovered_2043a90(&local_454,incoming_edx_02);
  }
  uVar8 = recovered_2002270(str_020c5973);
  pvVar9 = recovered_2001650(uVar8 + 1);
  if (pvVar9 != (void *)0x0) {
    uVar6 = extraout_EDX_05;
    if (uVar8 != 0) {
      recovered_2001b70(pvVar9,str_020c5973,uVar8);
      uVar6 = extraout_EDX_06;
    }
    *(undefined1 *)((int)pvVar9 + uVar8) = 0;
    recovered_2043a90(&local_454,uVar6);
    local_454 = 3;
    local_448 = pvVar9;
    recovered_207e100(str_020d6bed,(int)&local_454);
    recovered_2043a90(&local_454,incoming_edx_03);
  }
  local_454 = 2;
  local_450 = 3;
  local_44c = 3.1415927;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  recovered_207e100(str_020d6bff,(int)&local_454);
  recovered_2043a90(&local_454,incoming_edx_04);
  local_654 = 0.0;
  local_650 = 0;
  local_64c = 0;
  local_648 = 0;
  local_644 = 0;
  local_640 = 0;
  local_63c = 0;
  local_638 = (undefined4 *)0x0;
  local_634 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_05;
  if (puVar21 == (undefined4 *)0x0) goto LAB_02045380;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_05);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cd809);
  uVar6 = extraout_EDX_07;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_02045375:
    recovered_2043a90(&local_454,uVar6);
    uVar6 = extraout_EDX_30;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020cd805,'\x01');
    uVar6 = extraout_EDX_08;
    if (puVar10 == (uint *)0x0) goto LAB_02045375;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_06);
    uVar6 = extraout_EDX_09;
    if ((char)uVar7 == '\0') goto LAB_02045380;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd85f);
    uVar6 = extraout_EDX_10;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045375;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c07,'\x01');
    uVar6 = extraout_EDX_11;
    if (puVar10 == (uint *)0x0) goto LAB_02045375;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_07);
    uVar6 = extraout_EDX_12;
    if ((char)uVar7 == '\0') goto LAB_02045380;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd86c);
    uVar6 = extraout_EDX_13;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045375;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c0d,'\x01');
    uVar6 = extraout_EDX_14;
    if (puVar10 == (uint *)0x0) goto LAB_02045375;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_08);
    uVar6 = extraout_EDX_15;
    if ((char)uVar7 == '\0') goto LAB_02045380;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd879);
    uVar6 = extraout_EDX_16;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045375;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c13,'\x01');
    uVar6 = extraout_EDX_17;
    if (puVar10 == (uint *)0x0) goto LAB_02045375;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_09);
    uVar6 = extraout_EDX_18;
    if ((char)uVar7 != '\0') {
      local_454 = 0;
      local_450 = 0;
      local_44c = 0.0;
      local_448 = (void *)0x0;
      local_444 = 0;
      local_440 = 0;
      local_43c = 0;
      local_438 = 0;
      local_434 = 0;
      uVar7 = recovered_2084d80(&local_454,str_020cd884);
      uVar6 = extraout_EDX_19;
      if ((((char)uVar7 != '\0') && (local_654 == 1.12104e-44)) && (local_638 != (undefined4 *)0x0))
      {
        puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c17,'\x01');
        uVar6 = extraout_EDX_20;
        if (puVar10 != (uint *)0x0) {
          uVar7 = recovered_207e1d0(puVar10,&local_454);
          recovered_2043a90(&local_454,incoming_edx_10);
          uVar6 = extraout_EDX_21;
          if ((char)uVar7 != '\0') {
            uVar7 = recovered_20bdb50(&local_654,0x20d6c1c,str_020cd890);
            uVar6 = extraout_EDX_22;
            if ((char)uVar7 != '\0') {
              uVar7 = recovered_20bdb50(&local_654,0x20d6c22,str_020cd89d);
              uVar6 = extraout_EDX_23;
              if ((char)uVar7 != '\0') {
                uVar7 = recovered_20bdb50(&local_654,0x20d6c29,str_020cd8ab);
                uVar6 = extraout_EDX_24;
                if ((char)uVar7 != '\0') {
                  uVar7 = recovered_20bdb50(&local_654,0x20d6c2e,str_020cd8b7);
                  uVar6 = extraout_EDX_25;
                  if ((char)uVar7 != '\0') {
                    uVar7 = recovered_20bdb50(&local_654,0x20d6c33,str_020cd8c3);
                    uVar6 = extraout_EDX_26;
                    if ((char)uVar7 != '\0') {
                      uVar7 = recovered_20bdb50(&local_654,0x20d6c3a,str_020cd8d1);
                      uVar6 = extraout_EDX_27;
                      if ((char)uVar7 != '\0') {
                        uVar7 = recovered_20bdb50(&local_654,0x20cd84e,str_020cd853);
                        uVar6 = extraout_EDX_28;
                        if ((char)uVar7 != '\0') {
                          recovered_207e100(str_020cea83,(int)&local_654);
                          uVar6 = extraout_EDX_29;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_02045380;
        }
      }
      goto LAB_02045375;
    }
  }
LAB_02045380:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_11;
  if (puVar21 == (undefined4 *)0x0) goto LAB_020456e6;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_11);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cd8dc);
  uVar6 = extraout_EDX_31;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_020456db:
    recovered_2043a90(&local_454,uVar6);
    uVar6 = extraout_EDX_44;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c3e,'\x01');
    uVar6 = extraout_EDX_32;
    if (puVar10 == (uint *)0x0) goto LAB_020456db;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_12);
    uVar6 = extraout_EDX_33;
    if ((char)uVar7 == '\0') goto LAB_020456e6;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd8e9);
    uVar6 = extraout_EDX_34;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_020456db;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c45,'\x01');
    uVar6 = extraout_EDX_35;
    if (puVar10 == (uint *)0x0) goto LAB_020456db;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_13);
    uVar6 = extraout_EDX_36;
    if ((char)uVar7 == '\0') goto LAB_020456e6;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd8f6);
    uVar6 = extraout_EDX_37;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_020456db;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c4c,'\x01');
    uVar6 = extraout_EDX_38;
    if (puVar10 == (uint *)0x0) goto LAB_020456db;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_14);
    uVar6 = extraout_EDX_39;
    if ((char)uVar7 != '\0') {
      local_454 = 0;
      local_450 = 0;
      local_44c = 0.0;
      local_448 = (void *)0x0;
      local_444 = 0;
      local_440 = 0;
      local_43c = 0;
      local_438 = 0;
      local_434 = 0;
      uVar7 = recovered_2084d80(&local_454,str_020cd903);
      uVar6 = extraout_EDX_40;
      if ((((char)uVar7 != '\0') && (local_654 == 1.12104e-44)) && (local_638 != (undefined4 *)0x0))
      {
        puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c53,'\x01');
        uVar6 = extraout_EDX_41;
        if (puVar10 != (uint *)0x0) {
          uVar7 = recovered_207e1d0(puVar10,&local_454);
          recovered_2043a90(&local_454,incoming_edx_15);
          uVar6 = extraout_EDX_42;
          if ((char)uVar7 != '\0') {
            recovered_207e100(str_020cd7ff,(int)&local_654);
            uVar6 = extraout_EDX_43;
          }
          goto LAB_020456e6;
        }
      }
      goto LAB_020456db;
    }
  }
LAB_020456e6:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_16;
  if (puVar21 == (undefined4 *)0x0) goto LAB_02045c70;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_16);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cd9e5);
  uVar6 = extraout_EDX_45;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_02045c65:
    puVar10 = &local_454;
LAB_02045c6b:
    recovered_2043a90(puVar10,uVar6);
    uVar6 = extraout_EDX_70;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6c58,'\x01');
    uVar6 = extraout_EDX_46;
    if (puVar10 == (uint *)0x0) goto LAB_02045c65;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_17);
    uVar6 = extraout_EDX_47;
    if ((char)uVar7 == '\0') goto LAB_02045c70;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd9f0);
    uVar6 = extraout_EDX_48;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045c65;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c5e,'\x01');
    uVar6 = extraout_EDX_49;
    if (puVar10 == (uint *)0x0) goto LAB_02045c65;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_18);
    uVar6 = extraout_EDX_50;
    if ((char)uVar7 == '\0') goto LAB_02045c70;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cd9fa);
    uVar6 = extraout_EDX_51;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045c65;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c63,'\x01');
    uVar6 = extraout_EDX_52;
    if (puVar10 == (uint *)0x0) goto LAB_02045c65;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_19);
    uVar6 = extraout_EDX_53;
    if ((char)uVar7 == '\0') goto LAB_02045c70;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cda03);
    uVar6 = extraout_EDX_54;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045c65;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c67,'\x01');
    uVar6 = extraout_EDX_55;
    if (puVar10 == (uint *)0x0) goto LAB_02045c65;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_20);
    uVar6 = extraout_EDX_56;
    if ((char)uVar7 == '\0') goto LAB_02045c70;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    uVar7 = recovered_2084d80(&local_454,str_020cda0c);
    uVar6 = extraout_EDX_57;
    if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0))
    goto LAB_02045c65;
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6c6b,'\x01');
    uVar6 = extraout_EDX_58;
    if (puVar10 == (uint *)0x0) goto LAB_02045c65;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_21);
    uVar6 = extraout_EDX_59;
    if ((char)uVar7 != '\0') {
      uVar7 = recovered_20bdb50(&local_654,0x20d6c6f,str_020cda15);
      uVar6 = extraout_EDX_60;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20d6c73,str_020cda1e);
      uVar6 = extraout_EDX_61;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20d6c77,str_020cda27);
      uVar6 = extraout_EDX_62;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20cbdaa,str_020cda30);
      uVar6 = extraout_EDX_63;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20d6c7b,str_020cda39);
      uVar6 = extraout_EDX_64;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20cd9a2,str_020cd9a9);
      uVar6 = extraout_EDX_65;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20d6c80,str_020cda43);
      uVar6 = extraout_EDX_66;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      uVar7 = recovered_20bdb50(&local_654,0x20d6c8b,str_020cda53);
      uVar6 = extraout_EDX_67;
      if ((char)uVar7 == '\0') goto LAB_02045c70;
      local_44 = 2;
      local_40 = 3;
      local_3c = 0x40490fdb;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      uVar7 = recovered_209fb70(&local_654,0x20d6c96,(int)&local_44);
      uVar6 = extraout_EDX_68;
      if ((char)uVar7 != '\0') {
        recovered_207e100(&DAT_020d6c99,(int)&local_654);
        uVar6 = extraout_EDX_69;
      }
      puVar10 = &local_44;
      goto LAB_02045c6b;
    }
  }
LAB_02045c70:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_22;
  if (puVar21 == (undefined4 *)0x0) goto LAB_02045e56;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_22);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cda63);
  uVar6 = extraout_EDX_71;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_02045e4b:
    recovered_2043a90(&local_454,uVar6);
    uVar6 = extraout_EDX_78;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020cd805,'\x01');
    uVar6 = extraout_EDX_72;
    if (puVar10 == (uint *)0x0) goto LAB_02045e4b;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_23);
    uVar6 = extraout_EDX_73;
    if ((char)uVar7 != '\0') {
      local_454 = 0;
      local_450 = 0;
      local_44c = 0.0;
      local_448 = (void *)0x0;
      local_444 = 0;
      local_440 = 0;
      local_43c = 0;
      local_438 = 0;
      local_434 = 0;
      uVar7 = recovered_2084d80(&local_454,str_020cda6c);
      uVar6 = extraout_EDX_74;
      if ((((char)uVar7 != '\0') && (local_654 == 1.12104e-44)) && (local_638 != (undefined4 *)0x0))
      {
        puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d16e4,'\x01');
        uVar6 = extraout_EDX_75;
        if (puVar10 != (uint *)0x0) {
          uVar7 = recovered_207e1d0(puVar10,&local_454);
          recovered_2043a90(&local_454,incoming_edx_24);
          uVar6 = extraout_EDX_76;
          if ((char)uVar7 != '\0') {
            recovered_207e100(&DAT_020d6c9e,(int)&local_654);
            uVar6 = extraout_EDX_77;
          }
          goto LAB_02045e56;
        }
      }
      goto LAB_02045e4b;
    }
  }
LAB_02045e56:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_25;
  if (puVar21 == (undefined4 *)0x0) goto LAB_0204603c;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_25);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cda78);
  uVar6 = extraout_EDX_79;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_02046031:
    recovered_2043a90(&local_454,uVar6);
    uVar6 = extraout_EDX_86;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6ca3,'\x01');
    uVar6 = extraout_EDX_80;
    if (puVar10 == (uint *)0x0) goto LAB_02046031;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_26);
    uVar6 = extraout_EDX_81;
    if ((char)uVar7 != '\0') {
      local_454 = 0;
      local_450 = 0;
      local_44c = 0.0;
      local_448 = (void *)0x0;
      local_444 = 0;
      local_440 = 0;
      local_43c = 0;
      local_438 = 0;
      local_434 = 0;
      uVar7 = recovered_2084d80(&local_454,str_020cda81);
      uVar6 = extraout_EDX_82;
      if ((((char)uVar7 != '\0') && (local_654 == 1.12104e-44)) && (local_638 != (undefined4 *)0x0))
      {
        puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6ca9,'\x01');
        uVar6 = extraout_EDX_83;
        if (puVar10 != (uint *)0x0) {
          uVar7 = recovered_207e1d0(puVar10,&local_454);
          recovered_2043a90(&local_454,incoming_edx_27);
          uVar6 = extraout_EDX_84;
          if ((char)uVar7 != '\0') {
            recovered_207e100(&DAT_020d6cae,(int)&local_654);
            uVar6 = extraout_EDX_85;
          }
          goto LAB_0204603c;
        }
      }
      goto LAB_02046031;
    }
  }
LAB_0204603c:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_28;
  if (puVar21 == (undefined4 *)0x0) goto LAB_02046222;
  *puVar21 = 1;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  recovered_2043a90(&local_654,incoming_edx_28);
  local_654 = 1.12104e-44;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0.0;
  local_448 = (void *)0x0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_638 = puVar21;
  uVar7 = recovered_2084d80(&local_454,str_020cda89);
  uVar6 = extraout_EDX_87;
  if ((((char)uVar7 == '\0') || (local_654 != 1.12104e-44)) || (local_638 == (undefined4 *)0x0)) {
LAB_02046217:
    recovered_2043a90(&local_454,uVar6);
    uVar6 = extraout_EDX_94;
  }
  else {
    puVar10 = (uint *)recovered_209b1b0((int)local_638,&DAT_020d6cb1,'\x01');
    uVar6 = extraout_EDX_88;
    if (puVar10 == (uint *)0x0) goto LAB_02046217;
    uVar7 = recovered_207e1d0(puVar10,&local_454);
    recovered_2043a90(&local_454,incoming_edx_29);
    uVar6 = extraout_EDX_89;
    if ((char)uVar7 != '\0') {
      local_454 = 0;
      local_450 = 0;
      local_44c = 0.0;
      local_448 = (void *)0x0;
      local_444 = 0;
      local_440 = 0;
      local_43c = 0;
      local_438 = 0;
      local_434 = 0;
      uVar7 = recovered_2084d80(&local_454,str_020cda91);
      uVar6 = extraout_EDX_90;
      if ((((char)uVar7 != '\0') && (local_654 == 1.12104e-44)) && (local_638 != (undefined4 *)0x0))
      {
        puVar10 = (uint *)recovered_209b1b0((int)local_638,str_020d6cb6,'\x01');
        uVar6 = extraout_EDX_91;
        if (puVar10 != (uint *)0x0) {
          uVar7 = recovered_207e1d0(puVar10,&local_454);
          recovered_2043a90(&local_454,incoming_edx_30);
          uVar6 = extraout_EDX_92;
          if ((char)uVar7 != '\0') {
            recovered_207e100(&DAT_020d6cbc,(int)&local_654);
            uVar6 = extraout_EDX_93;
          }
          goto LAB_02046222;
        }
      }
      goto LAB_02046217;
    }
  }
LAB_02046222:
  recovered_2043a90(&local_654,uVar6);
  puVar21 = recovered_2001650(0x10);
  uVar6 = incoming_edx_31;
  if (puVar21 != (undefined4 *)0x0) {
    *puVar21 = 1;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    recovered_2043a90(&local_654,incoming_edx_31);
    local_654 = 1.12104e-44;
    local_638 = puVar21;
    uVar7 = recovered_20a0640(&local_654,0x20cf40a,&DAT_020c5084);
    uVar6 = extraout_EDX_95;
    if ((char)uVar7 != '\0') {
      uVar7 = recovered_20a0640(&local_654,0x20d6cbf,&DAT_020c5084);
      uVar6 = extraout_EDX_96;
      if ((char)uVar7 != '\0') {
        recovered_207e100(str_020d2d40,(int)&local_654);
        uVar6 = extraout_EDX_97;
      }
    }
  }
  recovered_2043a90(&local_654,uVar6);
  iVar14 = -0x68;
  do {
    local_454 = 0;
    local_450 = 0;
    local_44c = 0.0;
    local_448 = (void *)0x0;
    local_444 = 0;
    local_440 = 0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0;
    pcVar18 = *(char **)((int)&PTR_DAT_020d9c34 + iVar14);
    uVar7 = recovered_2084d80(&local_454,pcVar18);
    uVar6 = extraout_EDX_98;
    if ((char)uVar7 != '\0') {
      recovered_207e100(pcVar18,(int)&local_454);
      uVar6 = extraout_EDX_99;
    }
    recovered_2043a90(&local_454,uVar6);
    iVar14 = iVar14 + 4;
  } while (iVar14 != 0);
  recovered_2043440();
  recovered_2006e50(0x2047550);
  recovered_2005cf0();
  uVar6 = recovered_2006e80();
  uVar7 = recovered_2006ea0();
  if (1 < uVar6) {
    uVar17 = uVar6;
    if (0x3f < uVar6) {
      uVar17 = 0x40;
    }
    uVar22 = uVar7;
    if (0x3f < uVar7) {
      uVar22 = 0x40;
    }
    uVar15 = 1;
    if (uVar7 != 0) {
      uVar15 = uVar22;
    }
    DAT_020de150 = uVar17;
    DAT_020de14c = uVar15;
    if (uVar15 < 5) {
      iVar14 = 0x10;
    }
    else {
      iVar14 = (uVar15 + (uVar15 == 0)) * 4;
    }
    DAT_020de164 = iVar14;
    uVar15 = uVar15 << 0xe;
    if (0xfffe < uVar15) {
      uVar15 = 0xffff;
    }
    DAT_020de168 = uVar15;
    pf_varargs_202ce90__4__4_(str_020c575c,uVar7,uVar6);
  }
  bVar4 = recovered_2047710();
  if (bVar4 == 0) {
    uVar6 = 0;
    pcVar18 = str_020c5779;
    while( true ) {
      do {
        pcVar20 = pcVar18 + 1;
        cVar16 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar16 == '\r');
      if (cVar16 == '\0') break;
      if (cVar16 == '\n') {
        recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
        uVar6 = 0;
      }
      else if (uVar6 + 1 < 0x400) {
        *(char *)((int)&local_454 + uVar6) = cVar16;
        uVar6 = uVar6 + 1;
      }
    }
    recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
    recovered_2027720(in_CL);
    recovered_2012b20();
  }
  iVar14 = DAT_0214aff4;
  if (iVar14 == 0) {
    local_14 = (undefined4 *)0x41;
    bVar4 = 0x80;
LAB_020464d9:
    local_454 = 0;
    uVar6 = recovered_20ba950((uint)bVar4,&local_454);
    iVar14 = DAT_0214aff4;
    puVar10 = &local_454;
    if (iVar14 != 0) {
      puVar10 = (uint *)(iVar14 + 0x84);
    }
    puVar23 = &local_454;
    if ((char)uVar6 == '\0') {
      puVar23 = puVar10;
    }
    uVar7 = 0;
    uVar6 = 0;
    if (0x41 < *puVar23) {
      uVar6 = *puVar23 - 0x41;
    }
    DAT_02130860 = 0;
    if (iVar14 != 0) goto LAB_02046523;
  }
  else {
    local_14 = (undefined4 *)0x41;
    if (*(undefined4 **)(iVar14 + 0x118) != (undefined4 *)0x0) {
      local_14 = *(undefined4 **)(iVar14 + 0x118);
    }
    bVar4 = *(byte *)(iVar14 + 0x68);
    uVar6 = *(uint *)(iVar14 + 0x11c);
    if (uVar6 == 0) goto LAB_020464d9;
    DAT_02130860 = 0;
LAB_02046523:
    uVar7 = *(uint *)(iVar14 + 0x120);
  }
  uVar6 = recovered_2040a60((uint)bVar4,(uint)local_14,uVar6,uVar7);
  cVar16 = (char)uVar6;
  if ((cVar16 == '\0') && (cVar2 = DAT_02130860, cVar2 == '\0')) {
    pf_varargs_20044f0__4_(&DAT_02130860,0x80,&DAT_020c5119,0x20d6cc5);
  }
  if (cVar16 == '\0') {
    uVar3 = recovered_2004750();
    if (uVar3 != '\0') {
      cVar16 = DAT_02130860;
      vararg0 = &DAT_020c5084;
      if (cVar16 != '\0') {
        vararg0 = &DAT_020c57d0;
      }
      pf_varargs_202ce90__4__4_(str_020c57b0,(uint)vararg0,0x2130860);
      recovered_2027720(in_CL_00);
      recovered_2012b20();
    }
    uVar6 = 0;
    pcVar18 = str_020c57d3;
    while( true ) {
      do {
        pcVar20 = pcVar18 + 1;
        cVar16 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar16 == '\r');
      if (cVar16 == '\0') break;
      if (cVar16 == '\n') {
        recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
        uVar6 = 0;
      }
      else if (uVar6 + 1 < 0x400) {
        *(char *)((int)&local_454 + uVar6) = cVar16;
        uVar6 = uVar6 + 1;
      }
    }
    recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
    uVar6 = 0;
    pcVar18 = str_020c57f1;
    while( true ) {
      do {
        pcVar20 = pcVar18 + 1;
        cVar16 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar16 == '\r');
      if (cVar16 == '\0') break;
      if (cVar16 == '\n') {
        recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
        uVar6 = 0;
      }
      else if (uVar6 + 1 < 0x400) {
        *(char *)((int)&local_454 + uVar6) = cVar16;
        uVar6 = uVar6 + 1;
      }
    }
    recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
    iVar14 = DAT_0214aff4;
    uVar6 = extraout_ECX;
    if (iVar14 != 0) {
      pf_varargs_202ce90__4__4__4__4__4_
                (str_020c580d,*(uint *)(iVar14 + 0x68),*(uint *)(iVar14 + 0x84),
                 *(uint *)(iVar14 + 0x118),*(uint *)(iVar14 + 0x11c),*(uint *)(iVar14 + 0x120));
      uVar6 = extraout_ECX_00;
    }
    cVar16 = DAT_02130860;
    if (cVar16 != '\0') {
      pf_varargs_202ce90__4_(str_020c5847,0x2130860);
      uVar6 = extraout_ECX_01;
    }
LAB_0204673e:
    DAT_0214b11c = 1;
    goto LAB_02047125;
  }
  uVar3 = recovered_202a5c0();
  if (uVar3 != '\0') {
    recovered_203a500();
    iVar14 = DAT_021408ec;
    if (iVar14 != 0) {
      puVar10 = &DAT_0214094c;
      do {
        if ((char)puVar10[-0xf] == '\x01') {
          uVar6 = puVar10[-1];
          if (uVar6 == 0) {
            uVar7 = DAT_0213075c;
          }
          else {
            uVar7 = uVar6;
          }
          *puVar10 = uVar7;
          if (uVar6 == 6) {
            bVar4 = PF_PART1(DAT_02130758, 0);
            PF_PART1(DAT_02130758, 0) = bVar4 | 1;
            uVar1 = PF_PART1(DAT_02130758, 0);
            uVar1 = PF_PART1(DAT_02130758, 0);
            uVar1 = PF_PART1(DAT_02130758, 0);
          }
          DAT_020d9d44 = puVar10[-0x17];
          goto joined_r0x02046773;
        }
        puVar10 = puVar10 + 0x18;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar6 = 0;
joined_r0x02046773:
      if (cVar16 == '\0') goto LAB_0204673e;
    }
  }
  local_1c = (char *)CONCAT31(PF_PART3(local_1c, 1),cVar16);
  recovered_2047890();
  cVar16 = DAT_0214acf8;
  if (cVar16 == '\0') {
    local_454 = local_454 & 0xffffff00;
    uVar11 = recovered_20a0d50(str_020c4fe7,(char *)&local_454);
    if ((char)uVar11 != '\0') {
      recovered_2043440();
    }
  }
  cVar16 = DAT_021307dc;
  if (cVar16 == '\x01') {
    incoming_edx_43 = (uchar *)&local_454;
    recovered_202a060(0x20c4ff8,incoming_edx_43);
    uVar6 = recovered_202af10(incoming_edx_43,incoming_edx_32);
    if (((uVar6 != 0xffffffff) &&
        ((iVar14 = DAT_02130724, iVar14 == 0 ||
         ((*(byte *)(iVar14 + 0xfc + uVar6 * 0x110) & 2) == 0)))) &&
       (uVar7 = recovered_202b020(uVar6,incoming_edx_33), (char)uVar7 != '\0')) {
      iVar14 = DAT_02130724;
      uVar7 = *(uint *)(iVar14 + 0xf8 + uVar6 * 0x110);
      if (uVar7 != 0) {
        if (0x1fe < uVar7) {
          uVar7 = 0x1ff;
        }
        recovered_2001b70(incoming_edx_43,*(void **)(iVar14 + 0xf4 + uVar6 * 0x110),uVar7);
        *(undefined1 *)((int)&local_454 + uVar7) = 0;
        uVar3 = (uchar)local_454;
        while (uVar3 != '\0') {
          while ((uVar3 == '\t' || (uVar3 == ' '))) {
            puVar12 = incoming_edx_43 + 1;
            incoming_edx_43 = incoming_edx_43 + 1;
            uVar3 = *puVar12;
          }
          if ((byte)(uVar3 + 0x9f) < 0x1a) {
            uVar3 = uVar3 + 0xe0;
          }
          if (uVar3 == 'C') {
            uVar3 = incoming_edx_43[1];
            if ((byte)(uVar3 + 0x9f) < 0x1a) {
              uVar3 = uVar3 + 0xe0;
            }
            if (uVar3 == 'A') {
              uVar3 = incoming_edx_43[2];
              if ((byte)(uVar3 + 0x9f) < 0x1a) {
                uVar3 = uVar3 + 0xe0;
              }
              if (uVar3 == 'N') {
                uVar3 = incoming_edx_43[3];
                if ((byte)(uVar3 + 0x9f) < 0x1a) {
                  uVar3 = uVar3 + 0xe0;
                }
                if (uVar3 == 'C') {
                  uVar3 = incoming_edx_43[4];
                  if ((byte)(uVar3 + 0x9f) < 0x1a) {
                    uVar3 = uVar3 + 0xe0;
                  }
                  if (uVar3 == 'E') {
                    uVar3 = incoming_edx_43[5];
                    if ((byte)(uVar3 + 0x9f) < 0x1a) {
                      uVar3 = uVar3 + 0xe0;
                    }
                    if (uVar3 == 'R') {
                      uVar3 = incoming_edx_43[6];
                      if ((byte)(uVar3 + 0x9f) < 0x1a) {
                        uVar3 = uVar3 + 0xe0;
                      }
                      if (uVar3 == 'T') {
                        uVar3 = incoming_edx_43[7];
                        if ((byte)(uVar3 + 0x9f) < 0x1a) {
                          uVar3 = uVar3 + 0xe0;
                        }
                        if (uVar3 == 'R') {
                          uVar3 = incoming_edx_43[8];
                          if ((byte)(uVar3 + 0x9f) < 0x1a) {
                            uVar3 = uVar3 + 0xe0;
                          }
                          if (uVar3 == 'A') {
                            uVar3 = incoming_edx_43[9];
                            if ((byte)(uVar3 + 0x9f) < 0x1a) {
                              uVar3 = uVar3 + 0xe0;
                            }
                            if (uVar3 == 'C') {
                              uVar3 = incoming_edx_43[10];
                              if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                uVar3 = uVar3 + 0xe0;
                              }
                              if (uVar3 == 'E') {
                                for (puVar12 = incoming_edx_43 + 0xe;
                                    ((bVar4 = puVar12[-3], bVar4 == 9 || (bVar4 == 0x20)) ||
                                    (bVar4 == 0x3d)); puVar12 = puVar12 + 1) {
                                }
                                if ((byte)(bVar4 + 0x9f) < 0x1a) {
                                  bVar4 = bVar4 - 0x20;
                                }
                                bVar5 = true;
                                if (bVar4 < 0x54) {
                                  if (bVar4 != 0x31) {
                                    if (bVar4 == 0x4f) {
                                      uVar3 = puVar12[-2];
                                      if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                        uVar3 = uVar3 + 0xe0;
                                      }
                                      if (uVar3 == 'N') goto LAB_02046a65;
                                    }
                                    goto LAB_02046a63;
                                  }
                                }
                                else {
                                  if (bVar4 == 0x54) {
                                    uVar3 = puVar12[-2];
                                    if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                      uVar3 = uVar3 + 0xe0;
                                    }
                                    if (uVar3 == 'R') {
                                      uVar3 = puVar12[-1];
                                      if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                        uVar3 = uVar3 + 0xe0;
                                      }
                                      if (uVar3 == 'U') {
                                        uVar3 = *puVar12;
                                        if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                          uVar3 = uVar3 + 0xe0;
                                        }
                                        if (uVar3 == 'E') goto LAB_02046a65;
                                      }
                                    }
                                  }
                                  else if (bVar4 == 0x59) {
                                    uVar3 = puVar12[-2];
                                    if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                      uVar3 = uVar3 + 0xe0;
                                    }
                                    if (uVar3 == 'E') {
                                      uVar3 = puVar12[-1];
                                      if ((byte)(uVar3 + 0x9f) < 0x1a) {
                                        uVar3 = uVar3 + 0xe0;
                                      }
                                      bVar5 = uVar3 == 'S';
                                      goto LAB_02046a65;
                                    }
                                  }
LAB_02046a63:
                                  bVar5 = false;
                                }
LAB_02046a65:
                                DAT_021ec4e8 = bVar5;
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
          for (; (uVar3 = *incoming_edx_43, uVar3 != '\0' && (uVar3 != '\n'));
              incoming_edx_43 = incoming_edx_43 + 1) {
          }
          puVar12 = incoming_edx_43 + (uVar3 == '\n');
          incoming_edx_43 = incoming_edx_43 + (uVar3 == '\n');
          uVar3 = *puVar12;
        }
      }
    }
  }
  cVar16 = DAT_021307dc;
  if (cVar16 == '\x01') {
    recovered_202a060(0x20c4fa8,(uchar *)&local_454);
    uVar6 = recovered_202af10((uchar *)&local_454,incoming_edx_34);
    if (((uVar6 == 0xffffffff) ||
        ((iVar14 = DAT_02130724, iVar14 != 0 &&
         ((*(byte *)(iVar14 + 0xfc + uVar6 * 0x110) & 2) != 0)))) ||
       (uVar7 = recovered_202b020(uVar6,incoming_edx_35), (char)uVar7 == '\0')) goto LAB_02046bab;
    iVar14 = DAT_02130724;
    uVar7 = *(uint *)(iVar14 + 0xf8 + uVar6 * 0x110);
    if (uVar7 == 0) goto LAB_02046bab;
    local_454 = 0;
    local_654 = 0.0;
    local_44 = 0;
    uVar6 = recovered_20744f0(*(int *)(iVar14 + 0xf4 + uVar6 * 0x110),uVar7,&local_454,&local_654,
                              &local_44);
    if ((char)uVar6 != '\0') {
      puVar21 = (undefined4 *)DAT_0223dbfc;
      local_14 = puVar21;
      if (puVar21 == (undefined4 *)0x0) {
        DAT_0223dbfc = local_454;
        DAT_0223dc00 = local_654;
        uVar6 = local_44;
        uVar7 = local_454;
        incoming_edx_38 = local_654;
      }
      else {
        local_48 = local_44;
        local_4c = local_654;
        local_50 = local_454;
        iVar14 = DAT_0223dc00;
        if (iVar14 != 0) {
          do {
            recovered_2001710((void *)*puVar21);
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        recovered_2001710(local_14);
        DAT_0223dbfc = local_50;
        DAT_0223dc00 = local_4c;
        uVar6 = local_48;
        uVar7 = local_50;
        incoming_edx_38 = local_4c;
      }
      DAT_0223dc04 = uVar6;
      DAT_0223de29 = 1;
      recovered_2074860(uVar7,(uint)incoming_edx_38);
      goto LAB_02046d38;
    }
    uVar6 = 0;
    pcVar18 = str_020d6ce0;
    while( true ) {
      do {
        pcVar20 = pcVar18 + 1;
        cVar16 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar16 == '\r');
      if (cVar16 == '\0') break;
      if (cVar16 == '\n') {
        recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
        uVar6 = 0;
      }
      else if (uVar6 + 1 < 0x400) {
        *(char *)((int)&local_454 + uVar6) = cVar16;
        uVar6 = uVar6 + 1;
      }
    }
    recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
  }
  else {
LAB_02046bab:
    cVar16 = DAT_021307dc;
    if (cVar16 == '\x01') {
      recovered_202a060(0x20c5006,(uchar *)&local_454);
      uVar6 = recovered_202af10((uchar *)&local_454,incoming_edx_36);
      if ((uVar6 != 0xffffffff) &&
         ((((iVar14 = DAT_02130724, iVar14 == 0 ||
            ((*(byte *)(iVar14 + 0xfc + uVar6 * 0x110) & 2) == 0)) &&
           (uVar7 = recovered_202b020(uVar6,incoming_edx_37), (char)uVar7 != '\0')) &&
          (iVar14 = DAT_02130724, *(int *)(iVar14 + 0xf8 + uVar6 * 0x110) != 0)))) {
        DAT_0223de29 = 1;
        uVar6 = recovered_20bdeb0(0x20c5006);
        if ((char)uVar6 == '\0') {
          uVar6 = 0;
          pcVar18 = str_020d6d02;
          while( true ) {
            do {
              pcVar20 = pcVar18 + 1;
              cVar16 = *pcVar18;
              pcVar18 = pcVar20;
            } while (cVar16 == '\r');
            if (cVar16 == '\0') break;
            if (cVar16 == '\n') {
              recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
              uVar6 = 0;
            }
            else if (uVar6 + 1 < 0x400) {
              *(char *)((int)&local_454 + uVar6) = cVar16;
              uVar6 = uVar6 + 1;
            }
          }
          recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
        }
LAB_02046d38:
        DAT_0223de29 = 0;
      }
    }
  }
  recovered_2043440();
  iVar14 = DAT_020d9d44;
  uVar6 = extraout_ECX_02;
  if ((-1 < iVar14) && (uVar6 = DAT_021408ec, uVar6 != 0)) {
    uVar7 = 0;
    pcVar18 = &DAT_02140910;
    do {
      if (*(int *)(pcVar18 + -0x20) == iVar14) {
        if ((-1 < (int)uVar7) && (*pcVar18 != '\0')) goto LAB_02046df8;
        break;
      }
      uVar7 = uVar7 + 1;
      pcVar18 = pcVar18 + 0x60;
    } while (uVar6 != uVar7);
    uVar7 = 0;
    in_ECX = &DAT_021408f0;
    do {
      if (*in_ECX == iVar14) {
        if (-1 < (int)uVar7) {
          uVar11 = recovered_20bdc00((int)in_ECX);
          uVar6 = extraout_ECX_03;
          if (((((char)uVar11 != '\0') && ((char)in_ECX[8] == '\0')) && (in_ECX[0x17] - 3U < 3)) &&
             (((cVar16 = DAT_021307dc, cVar16 == '\x01' && (iVar14 = DAT_0213075c, iVar14 - 3U < 3))
              && ((cVar16 = DAT_0213073c, cVar16 == (char)in_ECX[1] &&
                  ((iVar14 = DAT_0213074c, iVar14 == in_ECX[2] &&
                   (iVar14 = DAT_02130750, iVar14 == in_ECX[3])))))))) goto LAB_02046eaf;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      in_ECX = in_ECX + 0x18;
    } while (uVar6 != uVar7);
  }
LAB_02046df8:
  cVar16 = DAT_021408ea;
  if (cVar16 == '\0') {
    uVar3 = recovered_202a5c0();
    uVar6 = extraout_ECX_04;
    if (uVar3 != '\0') goto LAB_02046e0e;
  }
  else {
LAB_02046e0e:
    iVar14 = DAT_021408ec;
    if (iVar14 != 0) {
      uVar7 = 0;
      puVar21 = &DAT_021408f0;
      do {
        local_14 = (undefined4 *)*puVar21;
        uVar11 = recovered_20bdc00((int)puVar21);
        uVar6 = extraout_ECX_05;
        if (((((char)uVar11 != '\0') && (*(char *)(puVar21 + 8) == '\0')) && (0 < (int)puVar21[7]))
           && ((puVar21[0x16] - 3 < 3 && ((*(byte *)(puVar21 + 6) & 1) == 0)))) {
          uVar17 = recovered_20a3d60((int)local_14,puVar21[0x16]);
          uVar6 = extraout_ECX_06;
          if ((char)uVar17 != '\0') {
            uVar17 = recovered_202ac50((int)local_14,incoming_edx_39);
            uVar6 = extraout_ECX_07;
            if ((char)uVar17 != '\0') {
              pcVar18 = str_020c5bb8;
              if (puVar21[0x16] - 1 < 0xc) {
                pcVar18 = (&PTR_str_020ccf0d_020d9c94)[puVar21[0x16]];
              }
              pf_varargs_202ce90__4__4_(str_020d6d42,(uint)local_14,(uint)pcVar18);
              uVar6 = extraout_ECX_08;
              break;
            }
          }
        }
        uVar7 = uVar7 + 1;
        puVar21 = puVar21 + 0x18;
        uVar17 = DAT_021408ec;
      } while (uVar7 < uVar17);
    }
  }
LAB_02046eaf:
  DAT_0214b11c = 1;
  if (((char)local_1c != '\0') && (cVar16 = DAT_021307dc, cVar16 == '\x01')) {
    recovered_202a060(0x20c4fb4,(uchar *)&local_454);
    uVar7 = recovered_202af10((uchar *)&local_454,incoming_edx_40);
    uVar6 = extraout_ECX_09;
    if ((uVar7 != 0xffffffff) &&
       ((iVar14 = DAT_02130724, iVar14 == 0 ||
        (uVar6 = uVar7 * 0x110, (*(byte *)(iVar14 + 0xfc + uVar6) & 2) == 0)))) {
      uVar17 = recovered_202b020(uVar7,incoming_edx_41);
      uVar6 = extraout_ECX_10;
      if ((char)uVar17 != '\0') {
        iVar14 = DAT_02130724;
        uVar6 = uVar7 * 0x110;
        uVar7 = *(uint *)(iVar14 + 0xf8 + uVar6);
        if (uVar7 != 0) {
          local_14 = *(undefined4 **)(iVar14 + 0xf4 + uVar6);
          DAT_0223de29 = 1;
          uVar17 = 0;
          do {
            uVar6 = 0;
            do {
              cVar16 = *(char *)((int)local_14 + uVar17);
              if ((cVar16 == '\n') || (cVar16 == '\r')) break;
              if (uVar6 + 1 < 0x200) {
                *(char *)((int)&local_454 + uVar6) = cVar16;
                uVar6 = uVar6 + 1;
              }
              else {
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar7);
            *(undefined1 *)((int)&local_454 + uVar6) = 0;
            if (uVar17 < uVar7) {
              do {
                if ((*(char *)((int)local_14 + uVar17) != '\r') &&
                   (*(char *)((int)local_14 + uVar17) != '\n')) goto LAB_02046fea;
                uVar17 = uVar17 + 1;
              } while (uVar7 != uVar17);
              uVar17 = uVar7;
            }
LAB_02046fea:
            for (iVar14 = 0;
                (*(byte *)((int)&local_454 + iVar14) - 9 < 5 ||
                (*(byte *)((int)&local_454 + iVar14) == 0x20)); iVar14 = iVar14 + 1) {
            }
            if (iVar14 != 0) {
              local_1c = (char *)((int)&local_454 + iVar14);
              uVar8 = recovered_2002270(local_1c);
              recovered_2001c30(&local_454,local_1c,uVar8 + 1);
            }
            uVar8 = recovered_2002270((char *)&local_454);
            uVar6 = extraout_ECX_12;
            for (; (uVar8 != 0 &&
                   ((uVar6 = (uint)(&bStack_455)[uVar8], uVar6 - 9 < 5 || (uVar6 == 0x20))));
                uVar8 = uVar8 - 1) {
              (&bStack_455)[uVar8] = 0;
            }
            if (((local_454 & 0xff) != 0) && ((local_454 & 0xff) != 0x23)) {
              pf_varargs_202ce90__4_(str_020d6d4f,(uint)&local_454);
              cVar16 = DAT_0223de29;
              if (cVar16 == '\0') {
                recovered_2027720(in_CL_01);
              }
              uVar6 = recovered_2047930((char *)&local_454);
              if ((char)uVar6 == '\0') {
                uVar6 = recovered_2047db0((char *)&local_454);
                if ((char)uVar6 == '\0') {
                  uVar22 = recovered_2043be0((char *)&local_454,(char *)0x0,0);
                  uVar6 = extraout_ECX_11;
                  if (uVar22 != 0) goto LAB_02046f80;
                }
                else {
                  local_654 = (float)((uint)local_654 & 0xffffff00);
                  uVar22 = recovered_2048290((uint)&local_454,(uchar *)&local_654);
                  uVar6 = extraout_ECX_14;
                  if ((char)uVar22 != '\0') goto LAB_02047107;
                }
                pf_varargs_202ce90__4_(str_020d6d5a,(uint)&local_454);
                uVar6 = extraout_ECX_15;
              }
              else {
                recovered_2047ac0();
                uVar6 = extraout_ECX_13;
              }
LAB_02047107:
              cVar16 = DAT_0223de29;
              if (cVar16 == '\0') {
                recovered_2027720((uchar)uVar6);
                uVar6 = extraout_ECX_16;
              }
            }
LAB_02046f80:
          } while (uVar17 < uVar7);
          DAT_0223de29 = 0;
        }
      }
    }
  }
LAB_02047125:
  recovered_2027720((uchar)uVar6);
  do {
    recovered_2029350(&DAT_0214b11d,0x200,(char *)0x0,'\0','\0');
    pf_varargs_20044f0__4_((char *)&local_654,0x200,&DAT_020c5119,0x214b11d);
    for (iVar14 = 0;
        (*(byte *)((int)&local_654 + iVar14) - 9 < 5 ||
        (*(byte *)((int)&local_654 + iVar14) == 0x20)); iVar14 = iVar14 + 1) {
    }
    if (iVar14 != 0) {
      uVar8 = recovered_2002270((char *)((int)&local_654 + iVar14));
      recovered_2001c30(&local_654,(char *)((int)&local_654 + iVar14),uVar8 + 1);
    }
    uVar8 = recovered_2002270((char *)&local_654);
    bVar4 = extraout_CL_00;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      bVar4 = *(byte *)((int)(uintptr_t)(frame + 1648) + (uVar8 - 0x655));
      if ((4 < bVar4 - 9) && (bVar4 != 0x20)) break;
      *(undefined1 *)((int)(uintptr_t)(frame + 1648) + (uVar8 - 0x655)) = 0;
    }
    if ((uchar)local_654 != '\0') {
      pf_varargs_202ce90__4__4_(&DAT_020c585f,0x20c4a24,(uint)&local_654);
      uVar6 = recovered_2047930((char *)&local_654);
      if ((char)uVar6 == '\0') {
        uVar8 = recovered_2002270((char *)&local_654);
        uVar13 = recovered_2002270(&DAT_020c5864);
        if (uVar8 < uVar13) {
LAB_02047330:
          uVar6 = recovered_2047db0((char *)&local_654);
          bVar19 = (byte)uVar6;
          iVar14 = DAT_020d9d4c;
          bVar4 = bVar19;
          if (iVar14 != 1) goto LAB_02047360;
LAB_02047342:
          bVar19 = bVar4;
          iVar14 = DAT_020d9d48;
          bVar4 = DAT_020d9d65;
          if (((bVar4 | bVar19) & 1) != 0 || iVar14 == 0) goto LAB_02047360;
          DAT_0225229c = 0;
          recovered_202ed80((byte *)&local_654,&DAT_0225229c,0x2000);
          cVar16 = DAT_0225229c;
          bVar4 = extraout_CL_04;
          if (cVar16 == '\0') goto LAB_02047145;
          uVar6 = 0;
          pcVar18 = &DAT_0225229c;
          while( true ) {
            do {
              pcVar20 = pcVar18 + 1;
              cVar16 = *pcVar18;
              pcVar18 = pcVar20;
            } while (cVar16 == '\r');
            if (cVar16 == '\0') break;
            if (cVar16 == '\n') {
              recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
              uVar6 = 0;
            }
            else if (uVar6 + 1 < 0x400) {
              *(char *)((int)&local_454 + uVar6) = cVar16;
              uVar6 = uVar6 + 1;
            }
          }
LAB_02047493:
          recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
          bVar4 = extraout_CL_05;
        }
        else {
          cVar16 = *(char *)((int)&local_654 + (uVar8 - uVar13));
          cVar2 = DAT_020c5864;
          if (cVar16 != '\0') {
            if ((byte)(cVar16 + 0x9fU) < 0x1a) {
              cVar16 = cVar16 + -0x20;
            }
            if (cVar16 != '.') goto LAB_02047330;
            iVar14 = -uVar13;
            cVar16 = *(char *)((int)&local_654 + iVar14 + uVar8 + 1);
            cVar2 = DAT_020c5865;
            if (cVar16 != '\0') {
              if ((byte)(cVar16 + 0x9fU) < 0x1a) {
                cVar16 = cVar16 + -0x20;
              }
              if (cVar16 != 'A') goto LAB_02047330;
              cVar16 = *(char *)((int)&local_654 + iVar14 + uVar8 + 2);
              cVar2 = DAT_020c5866;
              if (cVar16 != '\0') {
                if ((byte)(cVar16 + 0x9fU) < 0x1a) {
                  cVar16 = cVar16 + -0x20;
                }
                if (cVar16 != 'P') goto LAB_02047330;
                cVar16 = *(char *)((int)&local_654 + iVar14 + uVar8 + 3);
                cVar2 = DAT_020c5867;
                if (cVar16 != '\0') {
                  if ((byte)(cVar16 + 0x9fU) < 0x1a) {
                    cVar16 = cVar16 + -0x20;
                  }
                  if ((cVar16 != 'P') ||
                     (cVar2 = DAT_020c5868, *(char *)((int)&local_650 + iVar14 + uVar8) != '\0'))
                  goto LAB_02047330;
                }
              }
            }
          }
          if (cVar2 != '\0') goto LAB_02047330;
          bVar19 = 1;
          iVar14 = DAT_020d9d4c;
          bVar4 = 1;
          if (iVar14 == 1) goto LAB_02047342;
LAB_02047360:
          bVar5 = recovered_2048120((char *)&local_654);
          if (bVar5) {
            DAT_0225229c = 0;
            recovered_202ed80((byte *)&local_654,&DAT_0225229c,0x2000);
            cVar16 = DAT_0225229c;
            bVar4 = extraout_CL_01;
            if (cVar16 != '\0') {
              uVar6 = 0;
              pcVar18 = &DAT_0225229c;
              while( true ) {
                do {
                  pcVar20 = pcVar18 + 1;
                  cVar16 = *pcVar18;
                  pcVar18 = pcVar20;
                } while (cVar16 == '\r');
                if (cVar16 == '\0') break;
                if (cVar16 == '\n') {
                  recovered_20a11d0((uchar *)&local_454,uVar6,'\x01','\x01');
                  uVar6 = 0;
                }
                else if (uVar6 + 1 < 0x400) {
                  *(char *)((int)&local_454 + uVar6) = cVar16;
                  uVar6 = uVar6 + 1;
                }
              }
              goto LAB_02047493;
            }
          }
          else if (bVar19 == 0) {
            uVar6 = recovered_2048850((int)&local_654,incoming_edx_42);
            if ((char)uVar6 == '\0') {
              uVar3 = recovered_2048b80((char *)&local_654);
              if (uVar3 == '\0') {
                local_454 = local_454 & 0xffffff00;
                recovered_2048290((uint)&local_654,(uchar *)&local_454);
                bVar4 = extraout_CL_08;
                if ((uchar)local_454 == '\0') {
                  recovered_2049ef0((char *)&local_654);
                  bVar4 = extraout_CL_09;
                }
              }
              else {
                recovered_20492b0((char *)&local_654);
                bVar4 = extraout_CL_07;
              }
            }
            else {
              recovered_2027720(in_CL_02);
              bVar4 = extraout_CL_06;
            }
          }
          else {
            local_454 = local_454 & 0xffffff00;
            uVar6 = recovered_2048290((uint)&local_654,(uchar *)&local_454);
            bVar4 = extraout_CL_02;
            if ((char)uVar6 == '\0') {
              pf_varargs_202ce90__4_(str_020c5869,(uint)&local_654);
              bVar4 = extraout_CL_03;
            }
          }
        }
      }
      else {
        recovered_2047ac0();
        bVar4 = extraout_CL;
      }
    }
LAB_02047145:
    DAT_0214b11d = 0;
    recovered_2027720(bVar4);
  } while( true );
}
#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000680c
#undef DAT_00006810
#undef DAT_00006814
#undef DAT_00006818
#undef DAT_0000681c
#undef DAT_00006820
#undef DAT_00006824
#undef DAT_00006828
#undef DAT_0000682c
#undef DAT_00006830
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_00006848
#undef DAT_0000684c
#undef DAT_00006850
#undef DAT_00006854
#undef DAT_00006858
#undef DAT_0000685c
#undef DAT_00006860
#undef DAT_00006864
#undef DAT_00006868
#undef DAT_0000686c
#undef DAT_00006870
#undef DAT_00006874
#undef DAT_00006878
#undef DAT_0000687c
#undef DAT_00006880
#undef DAT_00006884
#undef DAT_00006888
#undef DAT_0000688c
#undef DAT_00006890
#undef DAT_00006894
#undef DAT_00006898
#undef DAT_0000689c
#undef DAT_000068a0
#undef DAT_000068a4
#undef DAT_000068a8
#undef DAT_000068ac
#undef DAT_000068b0
#undef DAT_000068b4
#undef DAT_000068b8
#undef DAT_000068bc
#undef DAT_000068c0
#undef DAT_000068c4
#undef DAT_000068c8
#undef DAT_000068cc
#undef DAT_000068d0
#undef DAT_000068d4
#undef DAT_000068d8
#undef DAT_000068dc
#undef DAT_000068e0
#undef DAT_000068e4
#undef DAT_000068e8
#undef DAT_000068ec
#undef DAT_000068f0
#undef DAT_000068f4
#undef DAT_000068f8
#undef DAT_000068fc
#undef DAT_00006900
#undef DAT_00006904
#undef DAT_00006908
#undef DAT_0000690c
#undef DAT_00006910
#undef DAT_00006914
#undef DAT_00006918
#undef DAT_0000691c
#undef DAT_00006920
#undef DAT_00006924
#undef DAT_00006928
#undef DAT_0000692c
#undef DAT_00006930
#undef DAT_00006934
#undef DAT_00006938
#undef DAT_0000693c
#undef DAT_00006940
#undef DAT_00006944
#undef DAT_00006948
#undef DAT_0000694c
#undef DAT_00006950
#undef DAT_00006954
#undef DAT_00006958
#undef DAT_0000695c
#undef DAT_00006960
#undef DAT_00006964
#undef DAT_00006968
#undef DAT_0000696c
#undef DAT_00006970
#undef DAT_00006974
#undef DAT_00006978
#undef DAT_0000697c
#undef DAT_00006980
#undef DAT_00006984
#undef DAT_00006988
#undef DAT_0000698c
#undef DAT_00006990
#undef DAT_00006994
#undef DAT_00006998
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c57d0
#undef DAT_020c585f
#undef DAT_020c5864
#undef DAT_020c5865
#undef DAT_020c5866
#undef DAT_020c5867
#undef DAT_020c5868
#undef DAT_020c58d2
#undef DAT_020c58ef
#undef DAT_020cd805
#undef DAT_020d6c13
#undef DAT_020d6c17
#undef DAT_020d6c53
#undef DAT_020d6c5e
#undef DAT_020d6c63
#undef DAT_020d6c67
#undef DAT_020d6c6b
#undef DAT_020d6c99
#undef DAT_020d6c9e
#undef DAT_020d6ca9
#undef DAT_020d6cae
#undef DAT_020d6cb1
#undef DAT_020d6cbc
#undef DAT_020d9d44
#undef DAT_020d9d48
#undef DAT_020d9d4c
#undef DAT_020d9d65
#undef DAT_020de14c
#undef DAT_020de150
#undef DAT_020de164
#undef DAT_020de168
#undef DAT_020de175
#undef DAT_020de41c
#undef DAT_020de420
#undef DAT_020de424
#undef DAT_020de428
#undef DAT_020de42c
#undef DAT_020de430
#undef DAT_020de434
#undef DAT_020de438
#undef DAT_020de43c
#undef DAT_020de440
#undef DAT_020de444
#undef DAT_020de448
#undef DAT_020de44c
#undef DAT_020de450
#undef DAT_020de454
#undef DAT_020de458
#undef DAT_020de45c
#undef DAT_020de460
#undef DAT_020de464
#undef DAT_020de468
#undef DAT_020de46c
#undef DAT_020de470
#undef DAT_020de474
#undef DAT_020de478
#undef DAT_020de47c
#undef DAT_020de480
#undef DAT_020de484
#undef DAT_020de488
#undef DAT_020de48c
#undef DAT_020de490
#undef DAT_020de494
#undef DAT_020de498
#undef DAT_020de49c
#undef DAT_020de4a0
#undef DAT_020de4a4
#undef DAT_020de4a8
#undef DAT_020de4ac
#undef DAT_020de4b0
#undef DAT_020de4b4
#undef DAT_020de4b8
#undef DAT_020de4bc
#undef DAT_020de4c0
#undef DAT_020de4c4
#undef DAT_020de4c8
#undef DAT_020de4cc
#undef DAT_020de4d0
#undef DAT_020de4d4
#undef DAT_020de4d8
#undef DAT_020de4dc
#undef DAT_020de4e0
#undef DAT_020de4e4
#undef DAT_020de4e8
#undef DAT_020de4ec
#undef DAT_020de500
#undef DAT_020de504
#undef DAT_020de508
#undef DAT_020de50c
#undef DAT_020de510
#undef DAT_02130724
#undef DAT_0213073c
#undef DAT_0213074c
#undef DAT_02130750
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_021307dc
#undef DAT_02130860
#undef DAT_021408e8
#undef DAT_021408e9
#undef DAT_021408ea
#undef DAT_021408ec
#undef DAT_021408f0
#undef DAT_02140910
#undef DAT_0214094c
#undef DAT_0214acf8
#undef DAT_0214aff4
#undef DAT_0214b0e0
#undef DAT_0214b11c
#undef DAT_0214b11d
#undef DAT_0215bc84
#undef DAT_021ec4e8
#undef DAT_0223dbfc
#undef DAT_0223dc00
#undef DAT_0223dc04
#undef DAT_0223dd20
#undef DAT_0223de29
#undef DAT_0225229c
#undef PTR_DAT_020d9c34
#undef PTR_recovered_2025810_020d8088
#undef PTR_recovered_2025f10_020d808c
#undef PTR_str_020ccf0d_020d9c94
#undef Ram020de41c
#undef Ram020de420
#undef Ram020de424
#undef Ram020de428
#undef Ram020de42c
#undef Ram020de430
#undef Ram020de434
#undef Ram020de438
#undef Ram020de43c
#undef Ram020de440
#undef Ram020de444
#undef Ram020de448
#undef Ram020de44c
#undef Ram020de450
#undef Ram020de454
#undef Ram020de458
#undef Ram020de45c
#undef Ram020de460
#undef Ram020de464
#undef Ram020de468
#undef Ram020de46c
#undef Ram020de470
#undef Ram020de474
#undef Ram020de478
#undef Ram020de47c
#undef Ram020de480
#undef Ram020de484
#undef Ram020de488
#undef Ram020de48c
#undef Ram020de490
#undef Ram020de494
#undef Ram020de498
#undef Ram020de49c
#undef Ram020de4a0
#undef Ram020de4a4
#undef Ram020de4a8
#undef Ram020de4ac
#undef Ram020de4b0
#undef Ram020de4b4
#undef Ram020de4b8
#undef Ram020de4bc
#undef Ram020de4c0
#undef Ram020de4c4
#undef Ram020de4c8
#undef Ram020de4cc
#undef Ram020de4d0
#undef Ram020de4d4
#undef Ram020de4d8
#undef Ram020de4dc
#undef Ram020de4e0
#undef Ram020de4e4
#undef Ram020de4e8
#undef Ram020de4ec
#undef Ram0223dd20
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000680c
#undef _DAT_00006810
#undef _DAT_00006814
#undef _DAT_00006818
#undef _DAT_0000681c
#undef _DAT_00006820
#undef _DAT_00006824
#undef _DAT_00006828
#undef _DAT_0000682c
#undef _DAT_00006830
#undef _DAT_00006834
#undef _DAT_00006838
#undef _DAT_0000683c
#undef _DAT_00006840
#undef _DAT_00006844
#undef _DAT_00006848
#undef _DAT_0000684c
#undef _DAT_00006850
#undef _DAT_00006854
#undef _DAT_00006858
#undef _DAT_0000685c
#undef _DAT_00006860
#undef _DAT_00006864
#undef _DAT_00006868
#undef _DAT_0000686c
#undef _DAT_00006870
#undef _DAT_00006874
#undef _DAT_00006878
#undef _DAT_0000687c
#undef _DAT_00006880
#undef _DAT_00006884
#undef _DAT_00006888
#undef _DAT_0000688c
#undef _DAT_00006890
#undef _DAT_00006894
#undef _DAT_00006898
#undef _DAT_0000689c
#undef _DAT_000068a0
#undef _DAT_000068a4
#undef _DAT_000068a8
#undef _DAT_000068ac
#undef _DAT_000068b0
#undef _DAT_000068b4
#undef _DAT_000068b8
#undef _DAT_000068bc
#undef _DAT_000068c0
#undef _DAT_000068c4
#undef _DAT_000068c8
#undef _DAT_000068cc
#undef _DAT_000068d0
#undef _DAT_000068d4
#undef _DAT_000068d8
#undef _DAT_000068dc
#undef _DAT_000068e0
#undef _DAT_000068e4
#undef _DAT_000068e8
#undef _DAT_000068ec
#undef _DAT_000068f0
#undef _DAT_000068f4
#undef _DAT_000068f8
#undef _DAT_000068fc
#undef _DAT_00006900
#undef _DAT_00006904
#undef _DAT_00006908
#undef _DAT_0000690c
#undef _DAT_00006910
#undef _DAT_00006914
#undef _DAT_00006918
#undef _DAT_0000691c
#undef _DAT_00006920
#undef _DAT_00006924
#undef _DAT_00006928
#undef _DAT_0000692c
#undef _DAT_00006930
#undef _DAT_00006934
#undef _DAT_00006938
#undef _DAT_0000693c
#undef _DAT_00006940
#undef _DAT_00006944
#undef _DAT_00006948
#undef _DAT_0000694c
#undef _DAT_00006950
#undef _DAT_00006954
#undef _DAT_00006958
#undef _DAT_0000695c
#undef _DAT_00006960
#undef _DAT_00006964
#undef _DAT_00006968
#undef _DAT_0000696c
#undef _DAT_00006970
#undef _DAT_00006974
#undef _DAT_00006978
#undef _DAT_0000697c
#undef _DAT_00006980
#undef _DAT_00006984
#undef _DAT_00006988
#undef _DAT_0000698c
#undef _DAT_00006990
#undef _DAT_00006994
#undef _DAT_00006998
#undef str_020c4fe7
#undef str_020c575c
#undef str_020c5779
#undef str_020c57b0
#undef str_020c57d3
#undef str_020c57f1
#undef str_020c580d
#undef str_020c5847
#undef str_020c5869
#undef str_020c58e3
#undef str_020c596d
#undef str_020c5973
#undef str_020c5bb8
#undef str_020cd7ff
#undef str_020cd809
#undef str_020cd853
#undef str_020cd85f
#undef str_020cd86c
#undef str_020cd879
#undef str_020cd884
#undef str_020cd890
#undef str_020cd89d
#undef str_020cd8ab
#undef str_020cd8b7
#undef str_020cd8c3
#undef str_020cd8d1
#undef str_020cd8dc
#undef str_020cd8e9
#undef str_020cd8f6
#undef str_020cd903
#undef str_020cd9a9
#undef str_020cd9e5
#undef str_020cd9f0
#undef str_020cd9fa
#undef str_020cda03
#undef str_020cda0c
#undef str_020cda15
#undef str_020cda1e
#undef str_020cda27
#undef str_020cda30
#undef str_020cda39
#undef str_020cda43
#undef str_020cda53
#undef str_020cda63
#undef str_020cda6c
#undef str_020cda78
#undef str_020cda81
#undef str_020cda89
#undef str_020cda91
#undef str_020cea83
#undef str_020d16e4
#undef str_020d2d40
#undef str_020d6bb5
#undef str_020d6bc1
#undef str_020d6bd0
#undef str_020d6bdf
#undef str_020d6bed
#undef str_020d6bff
#undef str_020d6c07
#undef str_020d6c0d
#undef str_020d6c3e
#undef str_020d6c45
#undef str_020d6c4c
#undef str_020d6c58
#undef str_020d6ca3
#undef str_020d6cb6
#undef str_020d6ce0
#undef str_020d6d02
#undef str_020d6d42
#undef str_020d6d4f
#undef str_020d6d5a
#undef bStack_455
#undef local_654
#undef local_650
#undef local_64c
#undef local_648
#undef local_644
#undef local_640
#undef local_63c
#undef local_638
#undef local_634
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1e
#undef local_1c
#undef local_14
