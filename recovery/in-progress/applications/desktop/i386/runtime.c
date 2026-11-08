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
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2e0
#define DAT_0181f2e0 (*(uint8_t *)(0x181f2e0U))
#undef DAT_0181f2e4
#define DAT_0181f2e4 (*(uint8_t *)(0x181f2e4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006814
#define UINT_00006814 (*(uint *)(0x6814U))
#undef UINT_00006818
#define UINT_00006818 (*(uint *)(0x6818U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

/* WARNING: Removing unreachable block (ram,0x10000c90) */
/* WARNING: Removing unreachable block (ram,0x10001070) */
/* WARNING: Removing unreachable block (ram,0x1000107b) */
/* WARNING: Removing unreachable block (ram,0x10001088) */
/* WARNING: Removing unreachable block (ram,0x10001096) */
/* WARNING: Removing unreachable block (ram,0x100010a4) */
/* WARNING: Removing unreachable block (ram,0x100010b1) */
/* WARNING: Removing unreachable block (ram,0x10000cd2) */
/* WARNING: Removing unreachable block (ram,0x10000cd9) */
/* WARNING: Removing unreachable block (ram,0x10000ce2) */
/* WARNING: Removing unreachable block (ram,0x10000cec) */
/* WARNING: Removing unreachable block (ram,0x10000cf6) */
/* WARNING: Removing unreachable block (ram,0x10000cff) */
/* WARNING: Removing unreachable block (ram,0x10000d12) */
/* WARNING: Removing unreachable block (ram,0x10000d1a) */
/* WARNING: Removing unreachable block (ram,0x10000d2d) */
/* WARNING: Removing unreachable block (ram,0x10000d36) */
/* WARNING: Removing unreachable block (ram,0x10000d45) */
/* WARNING: Removing unreachable block (ram,0x10000d54) */
/* WARNING: Removing unreachable block (ram,0x10000d5e) */
/* WARNING: Removing unreachable block (ram,0x10000d6b) */
/* WARNING: Removing unreachable block (ram,0x10000d7c) */
/* WARNING: Removing unreachable block (ram,0x10000d85) */
/* WARNING: Removing unreachable block (ram,0x10000d8f) */
/* WARNING: Removing unreachable block (ram,0x10000d99) */
/* WARNING: Removing unreachable block (ram,0x10000da2) */
/* WARNING: Removing unreachable block (ram,0x10000db1) */
/* WARNING: Removing unreachable block (ram,0x10000dc7) */
/* WARNING: Removing unreachable block (ram,0x10000dd0) */
/* WARNING: Removing unreachable block (ram,0x10000ddb) */
/* WARNING: Removing unreachable block (ram,0x10000de6) */
/* WARNING: Removing unreachable block (ram,0x10000df0) */
/* WARNING: Removing unreachable block (ram,0x10000e00) */
/* WARNING: Removing unreachable block (ram,0x10000e24) */
/* WARNING: Removing unreachable block (ram,0x10000ef8) */
/* WARNING: Removing unreachable block (ram,0x10000f01) */
/* WARNING: Removing unreachable block (ram,0x10000f0b) */
/* WARNING: Removing unreachable block (ram,0x10000f17) */
/* WARNING: Removing unreachable block (ram,0x10000f20) */
/* WARNING: Removing unreachable block (ram,0x10000f24) */
/* WARNING: Removing unreachable block (ram,0x10000fc3) */
/* WARNING: Removing unreachable block (ram,0x10000fd2) */
/* WARNING: Removing unreachable block (ram,0x10000ffb) */
/* WARNING: Removing unreachable block (ram,0x10001008) */
/* WARNING: Removing unreachable block (ram,0x10001016) */
/* WARNING: Removing unreachable block (ram,0x10001026) */
/* WARNING: Removing unreachable block (ram,0x10001033) */
/* WARNING: Removing unreachable block (ram,0x1000104d) */
/* WARNING: Removing unreachable block (ram,0x1000116b) */
/* WARNING: Removing unreachable block (ram,0x1000105c) */
/* WARNING: Removing unreachable block (ram,0x1000116f) */
/* WARNING: Removing unreachable block (ram,0x10001184) */
/* WARNING: Removing unreachable block (ram,0x1000118a) */
/* WARNING: Removing unreachable block (ram,0x10001193) */
/* WARNING: Removing unreachable block (ram,0x10001179) */
/* WARNING: Removing unreachable block (ram,0x1000119b) */
/* WARNING: Removing unreachable block (ram,0x10001230) */
/* WARNING: Removing unreachable block (ram,0x10001239) */
/* WARNING: Removing unreachable block (ram,0x10001243) */
/* WARNING: Removing unreachable block (ram,0x1000124d) */
/* WARNING: Removing unreachable block (ram,0x10001256) */
/* WARNING: Removing unreachable block (ram,0x1000128e) */
/* WARNING: Removing unreachable block (ram,0x100012a2) */
/* WARNING: Removing unreachable block (ram,0x100012c4) */
/* WARNING: Removing unreachable block (ram,0x100012cd) */
/* WARNING: Removing unreachable block (ram,0x100012d7) */
/* WARNING: Removing unreachable block (ram,0x100012e1) */
/* WARNING: Removing unreachable block (ram,0x100012ea) */
/* WARNING: Removing unreachable block (ram,0x10001322) */
/* WARNING: Removing unreachable block (ram,0x10001336) */
/* WARNING: Removing unreachable block (ram,0x10001358) */
/* WARNING: Removing unreachable block (ram,0x10001361) */
/* WARNING: Removing unreachable block (ram,0x1000136b) */
/* WARNING: Removing unreachable block (ram,0x10001375) */
/* WARNING: Removing unreachable block (ram,0x1000137e) */
/* WARNING: Removing unreachable block (ram,0x100013b6) */
/* WARNING: Removing unreachable block (ram,0x100013c7) */
/* WARNING: Removing unreachable block (ram,0x10001424) */
/* WARNING: Removing unreachable block (ram,0x100013d2) */
/* WARNING: Removing unreachable block (ram,0x100013d7) */
/* WARNING: Removing unreachable block (ram,0x100013e9) */
/* WARNING: Removing unreachable block (ram,0x100013f6) */
/* WARNING: Removing unreachable block (ram,0x10001469) */
/* WARNING: Removing unreachable block (ram,0x10001479) */
/* WARNING: Removing unreachable block (ram,0x10001486) */
/* WARNING: Removing unreachable block (ram,0x10001494) */
/* WARNING: Removing unreachable block (ram,0x100014a2) */
/* WARNING: Removing unreachable block (ram,0x100014af) */
/* WARNING: Removing unreachable block (ram,0x100014cd) */
/* WARNING: Removing unreachable block (ram,0x100014e5) */
/* WARNING: Removing unreachable block (ram,0x100014f3) */
/* WARNING: Removing unreachable block (ram,0x100014fc) */
/* WARNING: Removing unreachable block (ram,0x10001507) */
/* WARNING: Removing unreachable block (ram,0x10001512) */
/* WARNING: Removing unreachable block (ram,0x1000151c) */
/* WARNING: Removing unreachable block (ram,0x10001525) */
/* WARNING: Removing unreachable block (ram,0x1000141f) */
/* WARNING: Removing unreachable block (ram,0x1000157c) */
/* WARNING: Removing unreachable block (ram,0x100015cc) */
/* WARNING: Removing unreachable block (ram,0x100015d5) */
/* WARNING: Removing unreachable block (ram,0x100015fe) */
/* WARNING: Removing unreachable block (ram,0x1000161e) */
/* WARNING: Removing unreachable block (ram,0x10001627) */
/* WARNING: Removing unreachable block (ram,0x10001631) */
/* WARNING: Removing unreachable block (ram,0x1000163b) */
/* WARNING: Removing unreachable block (ram,0x10001644) */
/* WARNING: Removing unreachable block (ram,0x10001651) */
/* WARNING: Removing unreachable block (ram,0x1000165e) */
/* WARNING: Removing unreachable block (ram,0x100010c3) */
/* WARNING: Removing unreachable block (ram,0x100010cf) */
/* WARNING: Removing unreachable block (ram,0x100010d8) */
/* WARNING: Removing unreachable block (ram,0x100010e2) */
/* WARNING: Removing unreachable block (ram,0x100010ec) */
/* WARNING: Removing unreachable block (ram,0x100010f5) */
/* WARNING: Removing unreachable block (ram,0x10001102) */
/* WARNING: Removing unreachable block (ram,0x10001110) */
/* WARNING: Removing unreachable block (ram,0x1000111e) */
/* WARNING: Removing unreachable block (ram,0x10001127) */
/* WARNING: Removing unreachable block (ram,0x10001132) */
/* WARNING: Removing unreachable block (ram,0x1000113d) */
/* WARNING: Removing unreachable block (ram,0x10001147) */
/* WARNING: Removing unreachable block (ram,0x10001150) */
/* WARNING: Removing unreachable block (ram,0x1000115a) */
/* WARNING: Removing unreachable block (ram,0x10000bc3) */
/* WARNING: Removing unreachable block (ram,0x10002a63) */
/* WARNING: Removing unreachable block (ram,0x10002a71) */
/* WARNING: Removing unreachable block (ram,0x10002a83) */
/* WARNING: Removing unreachable block (ram,0x10002a90) */
/* WARNING: Removing unreachable block (ram,0x10002a9f) */
/* WARNING: Removing unreachable block (ram,0x10002ab1) */
/* WARNING: Removing unreachable block (ram,0x10002abf) */
/* WARNING: Removing unreachable block (ram,0x1000335c) */
/* WARNING: Removing unreachable block (ram,0x1000335f) */
/* WARNING: Removing unreachable block (ram,0x10003370) */
/* WARNING: Removing unreachable block (ram,0x1000337b) */
/* WARNING: Removing unreachable block (ram,0x10003387) */
/* WARNING: Removing unreachable block (ram,0x100033b9) */
/* WARNING: Removing unreachable block (ram,0x10003390) */
/* WARNING: Removing unreachable block (ram,0x1000339a) */
/* WARNING: Removing unreachable block (ram,0x100033a6) */
/* WARNING: Removing unreachable block (ram,0x100033af) */
/* WARNING: Removing unreachable block (ram,0x100033b1) */
/* WARNING: Removing unreachable block (ram,0x100033bc) */
/* WARNING: Removing unreachable block (ram,0x100033c5) */
/* WARNING: Removing unreachable block (ram,0x100033ca) */
/* WARNING: Removing unreachable block (ram,0x100033d8) */
/* WARNING: Removing unreachable block (ram,0x100033e1) */
/* WARNING: Removing unreachable block (ram,0x100033ec) */
/* WARNING: Removing unreachable block (ram,0x100033fa) */
/* WARNING: Removing unreachable block (ram,0x10003404) */
/* WARNING: Removing unreachable block (ram,0x10003410) */
/* WARNING: Removing unreachable block (ram,0x1000341d) */
/* WARNING: Removing unreachable block (ram,0x1000342d) */
/* WARNING: Removing unreachable block (ram,0x1000343a) */
/* WARNING: Removing unreachable block (ram,0x10003448) */
/* WARNING: Removing unreachable block (ram,0x10003458) */
/* WARNING: Removing unreachable block (ram,0x10003465) */
/* WARNING: Removing unreachable block (ram,0x1000166e) */
/* WARNING: Removing unreachable block (ram,0x1000167b) */
/* WARNING: Removing unreachable block (ram,0x10001688) */
/* WARNING: Removing unreachable block (ram,0x100017cf) */
/* WARNING: Removing unreachable block (ram,0x100017dc) */
/* WARNING: Removing unreachable block (ram,0x100017e4) */
/* WARNING: Removing unreachable block (ram,0x100017f1) */
/* WARNING: Removing unreachable block (ram,0x100016be) */
/* WARNING: Removing unreachable block (ram,0x10001816) */
/* WARNING: Removing unreachable block (ram,0x100016cb) */
/* WARNING: Removing unreachable block (ram,0x100016e7) */
/* WARNING: Removing unreachable block (ram,0x100016f4) */
/* WARNING: Removing unreachable block (ram,0x100016f7) */
/* WARNING: Removing unreachable block (ram,0x10001725) */
/* WARNING: Removing unreachable block (ram,0x10001743) */
/* WARNING: Removing unreachable block (ram,0x1000174a) */
/* WARNING: Removing unreachable block (ram,0x1000174c) */
/* WARNING: Removing unreachable block (ram,0x1000175e) */
/* WARNING: Removing unreachable block (ram,0x10001760) */
/* WARNING: Removing unreachable block (ram,0x10001767) */
/* WARNING: Removing unreachable block (ram,0x10001769) */
/* WARNING: Removing unreachable block (ram,0x10001774) */
/* WARNING: Removing unreachable block (ram,0x10001776) */
/* WARNING: Removing unreachable block (ram,0x10001786) */
/* WARNING: Removing unreachable block (ram,0x10001788) */
/* WARNING: Removing unreachable block (ram,0x10001793) */
/* WARNING: Removing unreachable block (ram,0x10001796) */
/* WARNING: Removing unreachable block (ram,0x100017a6) */
/* WARNING: Removing unreachable block (ram,0x100017a8) */
/* WARNING: Removing unreachable block (ram,0x100017b3) */
/* WARNING: Removing unreachable block (ram,0x100017b6) */
/* WARNING: Removing unreachable block (ram,0x100017bb) */
/* WARNING: Removing unreachable block (ram,0x100017c0) */
/* WARNING: Removing unreachable block (ram,0x1000181c) */
/* WARNING: Removing unreachable block (ram,0x100017fe) */
/* WARNING: Removing unreachable block (ram,0x10001823) */
/* WARNING: Removing unreachable block (ram,0x10001838) */
/* WARNING: Removing unreachable block (ram,0x10001858) */
/* WARNING: Removing unreachable block (ram,0x10001863) */
/* WARNING: Removing unreachable block (ram,0x10001874) */
/* WARNING: Removing unreachable block (ram,0x1000187c) */
/* WARNING: Removing unreachable block (ram,0x10001890) */
/* WARNING: Removing unreachable block (ram,0x10001882) */
/* WARNING: Removing unreachable block (ram,0x10001892) */
/* WARNING: Removing unreachable block (ram,0x100018b8) */
/* WARNING: Removing unreachable block (ram,0x100018c5) */
/* WARNING: Removing unreachable block (ram,0x100018d3) */
/* WARNING: Removing unreachable block (ram,0x100018e3) */
/* WARNING: Removing unreachable block (ram,0x100018f0) */
/* WARNING: Removing unreachable block (ram,0x10001907) */
/* WARNING: Removing unreachable block (ram,0x1000197a) */
/* WARNING: Removing unreachable block (ram,0x10001988) */
/* WARNING: Removing unreachable block (ram,0x1000198a) */
/* WARNING: Removing unreachable block (ram,0x10001995) */
/* WARNING: Removing unreachable block (ram,0x10003485) */
/* WARNING: Removing unreachable block (ram,0x1000348f) */
/* WARNING: Removing unreachable block (ram,0x100019a4) */
/* WARNING: Removing unreachable block (ram,0x100019bb) */
/* WARNING: Removing unreachable block (ram,0x100019bd) */
/* WARNING: Removing unreachable block (ram,0x100019c3) */
/* WARNING: Removing unreachable block (ram,0x100019c5) */
/* WARNING: Removing unreachable block (ram,0x100019e5) */
/* WARNING: Removing unreachable block (ram,0x100019e7) */
/* WARNING: Removing unreachable block (ram,0x100019ec) */
/* WARNING: Removing unreachable block (ram,0x10003494) */
/* WARNING: Removing unreachable block (ram,0x1000349e) */
/* WARNING: Removing unreachable block (ram,0x100019f5) */
/* WARNING: Removing unreachable block (ram,0x10001a0c) */
/* WARNING: Removing unreachable block (ram,0x10001a0e) */
/* WARNING: Removing unreachable block (ram,0x10001914) */
/* WARNING: Removing unreachable block (ram,0x1000191e) */
/* WARNING: Removing unreachable block (ram,0x10001934) */
/* WARNING: Removing unreachable block (ram,0x10001947) */
/* WARNING: Removing unreachable block (ram,0x10001949) */
/* WARNING: Removing unreachable block (ram,0x10001954) */
/* WARNING: Removing unreachable block (ram,0x10001956) */
/* WARNING: Removing unreachable block (ram,0x10001973) */
/* WARNING: Removing unreachable block (ram,0x10001a10) */
/* WARNING: Removing unreachable block (ram,0x10001a14) */
/* WARNING: Removing unreachable block (ram,0x10001a16) */
/* WARNING: Removing unreachable block (ram,0x10001a1c) */
/* WARNING: Removing unreachable block (ram,0x10001a33) */
/* WARNING: Removing unreachable block (ram,0x10001a47) */
/* WARNING: Removing unreachable block (ram,0x10001a4c) */
/* WARNING: Removing unreachable block (ram,0x10001a57) */
/* WARNING: Removing unreachable block (ram,0x10001a68) */
/* WARNING: Removing unreachable block (ram,0x10001a70) */
/* WARNING: Removing unreachable block (ram,0x10001a7b) */
/* WARNING: Removing unreachable block (ram,0x10001a85) */
/* WARNING: Removing unreachable block (ram,0x10001a96) */
/* WARNING: Removing unreachable block (ram,0x10001aa3) */
/* WARNING: Removing unreachable block (ram,0x10001ab0) */
/* WARNING: Removing unreachable block (ram,0x10001abd) */
/* WARNING: Removing unreachable block (ram,0x10001aca) */
/* WARNING: Removing unreachable block (ram,0x10001ad7) */
/* WARNING: Removing unreachable block (ram,0x10001ae4) */
/* WARNING: Removing unreachable block (ram,0x10001af1) */
/* WARNING: Removing unreachable block (ram,0x10001afe) */
/* WARNING: Removing unreachable block (ram,0x10001b0b) */
/* WARNING: Removing unreachable block (ram,0x10001b18) */
/* WARNING: Removing unreachable block (ram,0x10001b25) */
/* WARNING: Removing unreachable block (ram,0x10001b32) */
/* WARNING: Removing unreachable block (ram,0x10001b3f) */
/* WARNING: Removing unreachable block (ram,0x10001b4c) */
/* WARNING: Removing unreachable block (ram,0x10001b59) */
/* WARNING: Removing unreachable block (ram,0x10001b66) */
/* WARNING: Removing unreachable block (ram,0x10001b73) */
/* WARNING: Removing unreachable block (ram,0x10001b80) */
/* WARNING: Removing unreachable block (ram,0x10001b8d) */
/* WARNING: Removing unreachable block (ram,0x10001b9a) */
/* WARNING: Removing unreachable block (ram,0x10001ba7) */
/* WARNING: Removing unreachable block (ram,0x10001bb4) */
/* WARNING: Removing unreachable block (ram,0x10001bc1) */
/* WARNING: Removing unreachable block (ram,0x10001bce) */
/* WARNING: Removing unreachable block (ram,0x10001bdb) */
/* WARNING: Removing unreachable block (ram,0x10001be8) */
/* WARNING: Removing unreachable block (ram,0x10001bf1) */
/* WARNING: Removing unreachable block (ram,0x10001bfa) */
/* WARNING: Removing unreachable block (ram,0x10001c03) */
/* WARNING: Removing unreachable block (ram,0x10001c0c) */
/* WARNING: Removing unreachable block (ram,0x10001c15) */
/* WARNING: Removing unreachable block (ram,0x10001c1e) */
/* WARNING: Removing unreachable block (ram,0x10001c27) */
/* WARNING: Removing unreachable block (ram,0x10001c30) */
/* WARNING: Removing unreachable block (ram,0x10001c39) */
/* WARNING: Removing unreachable block (ram,0x10001c42) */
/* WARNING: Removing unreachable block (ram,0x10001c4b) */
/* WARNING: Removing unreachable block (ram,0x10001c54) */
/* WARNING: Removing unreachable block (ram,0x10001c5d) */
/* WARNING: Removing unreachable block (ram,0x10001c6d) */
/* WARNING: Removing unreachable block (ram,0x10001cb2) */
/* WARNING: Removing unreachable block (ram,0x10001c9a) */
/* WARNING: Removing unreachable block (ram,0x10001e9c) */
/* WARNING: Removing unreachable block (ram,0x10002536) */
/* WARNING: Removing unreachable block (ram,0x10001ca6) */
/* WARNING: Removing unreachable block (ram,0x10001ea4) */
/* WARNING: Removing unreachable block (ram,0x10001f0f) */
/* WARNING: Removing unreachable block (ram,0x10001f28) */
/* WARNING: Removing unreachable block (ram,0x10001f3e) */
/* WARNING: Removing unreachable block (ram,0x10001f43) */
/* WARNING: Removing unreachable block (ram,0x10001f49) */
/* WARNING: Removing unreachable block (ram,0x10001f51) */
/* WARNING: Removing unreachable block (ram,0x10001f32) */
/* WARNING: Removing unreachable block (ram,0x10001f53) */
/* WARNING: Removing unreachable block (ram,0x10001f58) */
/* WARNING: Removing unreachable block (ram,0x10001f7a) */
/* WARNING: Removing unreachable block (ram,0x10001f82) */
/* WARNING: Removing unreachable block (ram,0x10001f65) */
/* WARNING: Removing unreachable block (ram,0x10001f92) */
/* WARNING: Removing unreachable block (ram,0x10001fa0) */
/* WARNING: Removing unreachable block (ram,0x10001fa2) */
/* WARNING: Removing unreachable block (ram,0x1000200c) */
/* WARNING: Removing unreachable block (ram,0x1000201c) */
/* WARNING: Removing unreachable block (ram,0x10002021) */
/* WARNING: Removing unreachable block (ram,0x10001fea) */
/* WARNING: Removing unreachable block (ram,0x10001ffa) */
/* WARNING: Removing unreachable block (ram,0x10001ffc) */
/* WARNING: Removing unreachable block (ram,0x10002008) */
/* WARNING: Removing unreachable block (ram,0x10002024) */
/* WARNING: Removing unreachable block (ram,0x10002057) */
/* WARNING: Removing unreachable block (ram,0x10002067) */
/* WARNING: Removing unreachable block (ram,0x1000206c) */
/* WARNING: Removing unreachable block (ram,0x10002031) */
/* WARNING: Removing unreachable block (ram,0x10002041) */
/* WARNING: Removing unreachable block (ram,0x10002043) */
/* WARNING: Removing unreachable block (ram,0x1000204d) */
/* WARNING: Removing unreachable block (ram,0x1000204f) */
/* WARNING: Removing unreachable block (ram,0x10002072) */
/* WARNING: Removing unreachable block (ram,0x10002086) */
/* WARNING: Removing unreachable block (ram,0x10002088) */
/* WARNING: Removing unreachable block (ram,0x10002092) */
/* WARNING: Removing unreachable block (ram,0x10002094) */
/* WARNING: Removing unreachable block (ram,0x1000209d) */
/* WARNING: Removing unreachable block (ram,0x1000209f) */
/* WARNING: Removing unreachable block (ram,0x100020a9) */
/* WARNING: Removing unreachable block (ram,0x100020ab) */
/* WARNING: Removing unreachable block (ram,0x100020cc) */
/* WARNING: Removing unreachable block (ram,0x100020cf) */
/* WARNING: Removing unreachable block (ram,0x10002106) */
/* WARNING: Removing unreachable block (ram,0x10001f6f) */
/* WARNING: Removing unreachable block (ram,0x10002125) */
/* WARNING: Removing unreachable block (ram,0x1000218a) */
/* WARNING: Removing unreachable block (ram,0x1000218f) */
/* WARNING: Removing unreachable block (ram,0x10002194) */
/* WARNING: Removing unreachable block (ram,0x1000219b) */
/* WARNING: Removing unreachable block (ram,0x100021b2) */
/* WARNING: Removing unreachable block (ram,0x100021b7) */
/* WARNING: Removing unreachable block (ram,0x100021bc) */
/* WARNING: Removing unreachable block (ram,0x100021c3) */
/* WARNING: Removing unreachable block (ram,0x100021d7) */
/* WARNING: Removing unreachable block (ram,0x100021d9) */
/* WARNING: Removing unreachable block (ram,0x100021de) */
/* WARNING: Removing unreachable block (ram,0x100021e0) */
/* WARNING: Removing unreachable block (ram,0x10002218) */
/* WARNING: Removing unreachable block (ram,0x1000221a) */
/* WARNING: Removing unreachable block (ram,0x10002226) */
/* WARNING: Removing unreachable block (ram,0x1000222f) */
/* WARNING: Removing unreachable block (ram,0x10002237) */
/* WARNING: Removing unreachable block (ram,0x1000224d) */
/* WARNING: Removing unreachable block (ram,0x10002257) */
/* WARNING: Removing unreachable block (ram,0x10002260) */
/* WARNING: Removing unreachable block (ram,0x10002274) */
/* WARNING: Removing unreachable block (ram,0x1000227c) */
/* WARNING: Removing unreachable block (ram,0x1000228b) */
/* WARNING: Removing unreachable block (ram,0x10002284) */
/* WARNING: Removing unreachable block (ram,0x10002289) */
/* WARNING: Removing unreachable block (ram,0x1000228d) */
/* WARNING: Removing unreachable block (ram,0x10002290) */
/* WARNING: Removing unreachable block (ram,0x100022a2) */
/* WARNING: Removing unreachable block (ram,0x100022d7) */
/* WARNING: Removing unreachable block (ram,0x100022df) */
/* WARNING: Removing unreachable block (ram,0x100022a6) */
/* WARNING: Removing unreachable block (ram,0x100022b6) */
/* WARNING: Removing unreachable block (ram,0x100022c1) */
/* WARNING: Removing unreachable block (ram,0x100022cc) */
/* WARNING: Removing unreachable block (ram,0x100022f1) */
/* WARNING: Removing unreachable block (ram,0x100022f6) */
/* WARNING: Removing unreachable block (ram,0x100022ff) */
/* WARNING: Removing unreachable block (ram,0x10002309) */
/* WARNING: Removing unreachable block (ram,0x1000232b) */
/* WARNING: Removing unreachable block (ram,0x10002354) */
/* WARNING: Removing unreachable block (ram,0x10002364) */
/* WARNING: Removing unreachable block (ram,0x10002369) */
/* WARNING: Removing unreachable block (ram,0x10002332) */
/* WARNING: Removing unreachable block (ram,0x10002342) */
/* WARNING: Removing unreachable block (ram,0x10002344) */
/* WARNING: Removing unreachable block (ram,0x10002350) */
/* WARNING: Removing unreachable block (ram,0x1000236c) */
/* WARNING: Removing unreachable block (ram,0x100023a2) */
/* WARNING: Removing unreachable block (ram,0x100023b1) */
/* WARNING: Removing unreachable block (ram,0x100023b6) */
/* WARNING: Removing unreachable block (ram,0x10002379) */
/* WARNING: Removing unreachable block (ram,0x1000238f) */
/* WARNING: Removing unreachable block (ram,0x10002391) */
/* WARNING: Removing unreachable block (ram,0x1000239b) */
/* WARNING: Removing unreachable block (ram,0x1000239d) */
/* WARNING: Removing unreachable block (ram,0x100023b9) */
/* WARNING: Removing unreachable block (ram,0x1000230f) */
/* WARNING: Removing unreachable block (ram,0x100023bf) */
/* WARNING: Removing unreachable block (ram,0x100023d3) */
/* WARNING: Removing unreachable block (ram,0x100023d5) */
/* WARNING: Removing unreachable block (ram,0x100023df) */
/* WARNING: Removing unreachable block (ram,0x100023e1) */
/* WARNING: Removing unreachable block (ram,0x100023f0) */
/* WARNING: Removing unreachable block (ram,0x100023f2) */
/* WARNING: Removing unreachable block (ram,0x100023ff) */
/* WARNING: Removing unreachable block (ram,0x10002401) */
/* WARNING: Removing unreachable block (ram,0x10002416) */
/* WARNING: Removing unreachable block (ram,0x10002430) */
/* WARNING: Removing unreachable block (ram,0x10002438) */
/* WARNING: Removing unreachable block (ram,0x1000243d) */
/* WARNING: Removing unreachable block (ram,0x10002445) */
/* WARNING: Removing unreachable block (ram,0x1000244d) */
/* WARNING: Removing unreachable block (ram,0x10002452) */
/* WARNING: Removing unreachable block (ram,0x1000245a) */
/* WARNING: Removing unreachable block (ram,0x10002464) */
/* WARNING: Removing unreachable block (ram,0x1000246c) */
/* WARNING: Removing unreachable block (ram,0x10002471) */
/* WARNING: Removing unreachable block (ram,0x10002485) */
/* WARNING: Removing unreachable block (ram,0x100024c4) */
/* WARNING: Removing unreachable block (ram,0x1000248d) */
/* WARNING: Removing unreachable block (ram,0x100024bb) */
/* WARNING: Removing unreachable block (ram,0x100024d0) */
/* WARNING: Removing unreachable block (ram,0x100024e3) */
/* WARNING: Removing unreachable block (ram,0x100024f0) */
/* WARNING: Removing unreachable block (ram,0x1000252f) */
/* WARNING: Removing unreachable block (ram,0x10002509) */
/* WARNING: Removing unreachable block (ram,0x10002514) */
/* WARNING: Removing unreachable block (ram,0x10002519) */
/* WARNING: Removing unreachable block (ram,0x10002525) */
/* WARNING: Removing unreachable block (ram,0x10001eb5) */
/* WARNING: Removing unreachable block (ram,0x10001ed5) */
/* WARNING: Removing unreachable block (ram,0x100024bf) */
/* WARNING: Removing unreachable block (ram,0x10001ef3) */
/* WARNING: Removing unreachable block (ram,0x10001ef9) */
/* WARNING: Removing unreachable block (ram,0x10001efc) */
/* WARNING: Removing unreachable block (ram,0x1000253d) */
/* WARNING: Removing unreachable block (ram,0x10002558) */
/* WARNING: Removing unreachable block (ram,0x1000255e) */
/* WARNING: Removing unreachable block (ram,0x10002565) */
/* WARNING: Removing unreachable block (ram,0x10002574) */
/* WARNING: Removing unreachable block (ram,0x10002548) */
/* WARNING: Removing unreachable block (ram,0x10001cb9) */
/* WARNING: Removing unreachable block (ram,0x10001cdb) */
/* WARNING: Removing unreachable block (ram,0x10001ce4) */
/* WARNING: Removing unreachable block (ram,0x10001cee) */
/* WARNING: Removing unreachable block (ram,0x10001cfa) */
/* WARNING: Removing unreachable block (ram,0x10001d03) */
/* WARNING: Removing unreachable block (ram,0x10001d16) */
/* WARNING: Removing unreachable block (ram,0x10001d2f) */
/* WARNING: Removing unreachable block (ram,0x10001d47) */
/* WARNING: Removing unreachable block (ram,0x10002589) */
/* WARNING: Removing unreachable block (ram,0x10001d5b) */
/* WARNING: Removing unreachable block (ram,0x10001d81) */
/* WARNING: Removing unreachable block (ram,0x10001d8e) */
/* WARNING: Removing unreachable block (ram,0x10001d9c) */
/* WARNING: Removing unreachable block (ram,0x10001dac) */
/* WARNING: Removing unreachable block (ram,0x10001db9) */
/* WARNING: Removing unreachable block (ram,0x10001dd0) */
/* WARNING: Removing unreachable block (ram,0x10001ddf) */
/* WARNING: Removing unreachable block (ram,0x10001deb) */
/* WARNING: Removing unreachable block (ram,0x10001e1f) */
/* WARNING: Removing unreachable block (ram,0x10001e2c) */
/* WARNING: Removing unreachable block (ram,0x10001e3a) */
/* WARNING: Removing unreachable block (ram,0x10001e4a) */
/* WARNING: Removing unreachable block (ram,0x10001e57) */
/* WARNING: Removing unreachable block (ram,0x100025af) */
/* WARNING: Removing unreachable block (ram,0x10001e7c) */
/* WARNING: Removing unreachable block (ram,0x100025ad) */
/* WARNING: Removing unreachable block (ram,0x100025bb) */
/* WARNING: Removing unreachable block (ram,0x100025bd) */
/* WARNING: Removing unreachable block (ram,0x100025ca) */
/* WARNING: Removing unreachable block (ram,0x100025d3) */
/* WARNING: Removing unreachable block (ram,0x100025dc) */
/* WARNING: Removing unreachable block (ram,0x100025e5) */
/* WARNING: Removing unreachable block (ram,0x100025ee) */
/* WARNING: Removing unreachable block (ram,0x100025f4) */
/* WARNING: Removing unreachable block (ram,0x10002618) */
/* WARNING: Removing unreachable block (ram,0x1000261d) */
/* WARNING: Removing unreachable block (ram,0x10002623) */
/* WARNING: Removing unreachable block (ram,0x10002629) */
/* WARNING: Removing unreachable block (ram,0x10002605) */
/* WARNING: Removing unreachable block (ram,0x1000262f) */
/* WARNING: Removing unreachable block (ram,0x10002787) */
/* WARNING: Removing unreachable block (ram,0x10002794) */
/* WARNING: Removing unreachable block (ram,0x1000279d) */
/* WARNING: Removing unreachable block (ram,0x100027a6) */
/* WARNING: Removing unreachable block (ram,0x100027b5) */
/* WARNING: Removing unreachable block (ram,0x100027d5) */
/* WARNING: Removing unreachable block (ram,0x10002a15) */
/* WARNING: Removing unreachable block (ram,0x10002658) */
/* WARNING: Removing unreachable block (ram,0x10002662) */
/* WARNING: Removing unreachable block (ram,0x10002665) */
/* WARNING: Removing unreachable block (ram,0x1000266f) */
/* WARNING: Removing unreachable block (ram,0x10002672) */
/* WARNING: Removing unreachable block (ram,0x10002687) */
/* WARNING: Removing unreachable block (ram,0x10002689) */
/* WARNING: Removing unreachable block (ram,0x1000269f) */
/* WARNING: Removing unreachable block (ram,0x100026a1) */
/* WARNING: Removing unreachable block (ram,0x100026c4) */
/* WARNING: Removing unreachable block (ram,0x100026d8) */
/* WARNING: Removing unreachable block (ram,0x100026e4) */
/* WARNING: Removing unreachable block (ram,0x100026f0) */
/* WARNING: Removing unreachable block (ram,0x100026ff) */
/* WARNING: Removing unreachable block (ram,0x1000270e) */
/* WARNING: Removing unreachable block (ram,0x1000271b) */
/* WARNING: Removing unreachable block (ram,0x100027f5) */
/* WARNING: Removing unreachable block (ram,0x100027f8) */
/* WARNING: Removing unreachable block (ram,0x10002728) */
/* WARNING: Removing unreachable block (ram,0x1000275b) */
/* WARNING: Removing unreachable block (ram,0x10002a30) */
/* WARNING: Removing unreachable block (ram,0x10002765) */
/* WARNING: Removing unreachable block (ram,0x10002acf) */
/* WARNING: Removing unreachable block (ram,0x10002ad4) */
/* WARNING: Removing unreachable block (ram,0x10002ad7) */
/* WARNING: Removing unreachable block (ram,0x10002adf) */
/* WARNING: Removing unreachable block (ram,0x10002ae5) */
/* WARNING: Removing unreachable block (ram,0x10002aeb) */
/* WARNING: Removing unreachable block (ram,0x10002aed) */
/* WARNING: Removing unreachable block (ram,0x10002af7) */
/* WARNING: Removing unreachable block (ram,0x10002af9) */
/* WARNING: Removing unreachable block (ram,0x10002779) */
/* WARNING: Removing unreachable block (ram,0x10002b04) */
/* WARNING: Removing unreachable block (ram,0x100027fc) */
/* WARNING: Removing unreachable block (ram,0x10002809) */
/* WARNING: Removing unreachable block (ram,0x1000281a) */
/* WARNING: Removing unreachable block (ram,0x1000294e) */
/* WARNING: Removing unreachable block (ram,0x1000295c) */
/* WARNING: Removing unreachable block (ram,0x10002965) */
/* WARNING: Removing unreachable block (ram,0x10002972) */
/* WARNING: Removing unreachable block (ram,0x1000282d) */
/* WARNING: Removing unreachable block (ram,0x1000283e) */
/* WARNING: Removing unreachable block (ram,0x1000284d) */
/* WARNING: Removing unreachable block (ram,0x1000285c) */
/* WARNING: Removing unreachable block (ram,0x10002867) */
/* WARNING: Removing unreachable block (ram,0x10002876) */
/* WARNING: Removing unreachable block (ram,0x10002883) */
/* WARNING: Removing unreachable block (ram,0x10002890) */
/* WARNING: Removing unreachable block (ram,0x100028b1) */
/* WARNING: Removing unreachable block (ram,0x100028b8) */
/* WARNING: Removing unreachable block (ram,0x100028ba) */
/* WARNING: Removing unreachable block (ram,0x100028cc) */
/* WARNING: Removing unreachable block (ram,0x100028ce) */
/* WARNING: Removing unreachable block (ram,0x100028d6) */
/* WARNING: Removing unreachable block (ram,0x100028d9) */
/* WARNING: Removing unreachable block (ram,0x100028e4) */
/* WARNING: Removing unreachable block (ram,0x100028e6) */
/* WARNING: Removing unreachable block (ram,0x100028eb) */
/* WARNING: Removing unreachable block (ram,0x100028ee) */
/* WARNING: Removing unreachable block (ram,0x100028f9) */
/* WARNING: Removing unreachable block (ram,0x100028fc) */
/* WARNING: Removing unreachable block (ram,0x10002904) */
/* WARNING: Removing unreachable block (ram,0x1000290a) */
/* WARNING: Removing unreachable block (ram,0x10002915) */
/* WARNING: Removing unreachable block (ram,0x10002918) */
/* WARNING: Removing unreachable block (ram,0x10002eb9) */
/* WARNING: Removing unreachable block (ram,0x10002920) */
/* WARNING: Removing unreachable block (ram,0x1000293d) */
/* WARNING: Removing unreachable block (ram,0x10002ece) */
/* WARNING: Removing unreachable block (ram,0x10002ed5) */
/* WARNING: Removing unreachable block (ram,0x10002ed7) */
/* WARNING: Removing unreachable block (ram,0x10002ee9) */
/* WARNING: Removing unreachable block (ram,0x10002eeb) */
/* WARNING: Removing unreachable block (ram,0x10002ef3) */
/* WARNING: Removing unreachable block (ram,0x10002ef6) */
/* WARNING: Removing unreachable block (ram,0x10002f01) */
/* WARNING: Removing unreachable block (ram,0x10002f03) */
/* WARNING: Removing unreachable block (ram,0x10002f08) */
/* WARNING: Removing unreachable block (ram,0x10002f0b) */
/* WARNING: Removing unreachable block (ram,0x10002f16) */
/* WARNING: Removing unreachable block (ram,0x10002f19) */
/* WARNING: Removing unreachable block (ram,0x10002f21) */
/* WARNING: Removing unreachable block (ram,0x10002f27) */
/* WARNING: Removing unreachable block (ram,0x10002f32) */
/* WARNING: Removing unreachable block (ram,0x10002f35) */
/* WARNING: Removing unreachable block (ram,0x10002f60) */
/* WARNING: Removing unreachable block (ram,0x10002f39) */
/* WARNING: Removing unreachable block (ram,0x10002f52) */
/* WARNING: Removing unreachable block (ram,0x10002f75) */
/* WARNING: Removing unreachable block (ram,0x10002f8b) */
/* WARNING: Removing unreachable block (ram,0x10002f91) */
/* WARNING: Removing unreachable block (ram,0x10002fbf) */
/* WARNING: Removing unreachable block (ram,0x10002fd3) */
/* WARNING: Removing unreachable block (ram,0x10002fe4) */
/* WARNING: Removing unreachable block (ram,0x10002ff5) */
/* WARNING: Removing unreachable block (ram,0x1000322d) */
/* WARNING: Removing unreachable block (ram,0x10003286) */
/* WARNING: Removing unreachable block (ram,0x10003006) */
/* WARNING: Removing unreachable block (ram,0x1000300e) */
/* WARNING: Removing unreachable block (ram,0x10003014) */
/* WARNING: Removing unreachable block (ram,0x1000346c) */
/* WARNING: Removing unreachable block (ram,0x10003020) */
/* WARNING: Removing unreachable block (ram,0x1000302f) */
/* WARNING: Removing unreachable block (ram,0x10003475) */
/* WARNING: Removing unreachable block (ram,0x10003033) */
/* WARNING: Removing unreachable block (ram,0x10003480) */
/* WARNING: Removing unreachable block (ram,0x10003035) */
/* WARNING: Removing unreachable block (ram,0x10002f95) */
/* WARNING: Removing unreachable block (ram,0x10002fb2) */
/* WARNING: Removing unreachable block (ram,0x1000304b) */
/* WARNING: Removing unreachable block (ram,0x1000305c) */
/* WARNING: Removing unreachable block (ram,0x10003075) */
/* WARNING: Removing unreachable block (ram,0x1000307c) */
/* WARNING: Removing unreachable block (ram,0x1000307e) */
/* WARNING: Removing unreachable block (ram,0x10003092) */
/* WARNING: Removing unreachable block (ram,0x10003095) */
/* WARNING: Removing unreachable block (ram,0x1000309d) */
/* WARNING: Removing unreachable block (ram,0x100030a0) */
/* WARNING: Removing unreachable block (ram,0x100030ad) */
/* WARNING: Removing unreachable block (ram,0x100030b0) */
/* WARNING: Removing unreachable block (ram,0x100030bc) */
/* WARNING: Removing unreachable block (ram,0x100030be) */
/* WARNING: Removing unreachable block (ram,0x100030c7) */
/* WARNING: Removing unreachable block (ram,0x100030c9) */
/* WARNING: Removing unreachable block (ram,0x100030d8) */
/* WARNING: Removing unreachable block (ram,0x100030db) */
/* WARNING: Removing unreachable block (ram,0x100030e4) */
/* WARNING: Removing unreachable block (ram,0x100030e6) */
/* WARNING: Removing unreachable block (ram,0x10003109) */
/* WARNING: Removing unreachable block (ram,0x100030eb) */
/* WARNING: Removing unreachable block (ram,0x100030fa) */
/* WARNING: Removing unreachable block (ram,0x1000310f) */
/* WARNING: Removing unreachable block (ram,0x10002fba) */
/* WARNING: Removing unreachable block (ram,0x10002988) */
/* WARNING: Removing unreachable block (ram,0x10002992) */
/* WARNING: Removing unreachable block (ram,0x10002a3e) */
/* WARNING: Removing unreachable block (ram,0x1000299c) */
/* WARNING: Removing unreachable block (ram,0x100029a6) */
/* WARNING: Removing unreachable block (ram,0x10002bce) */
/* WARNING: Removing unreachable block (ram,0x100029b0) */
/* WARNING: Removing unreachable block (ram,0x100029bb) */
/* WARNING: Removing unreachable block (ram,0x100029c1) */
/* WARNING: Removing unreachable block (ram,0x100029cc) */
/* WARNING: Removing unreachable block (ram,0x100029d2) */
/* WARNING: Removing unreachable block (ram,0x100029e5) */
/* WARNING: Removing unreachable block (ram,0x100029e8) */
/* WARNING: Removing unreachable block (ram,0x100029fb) */
/* WARNING: Removing unreachable block (ram,0x100029fe) */
/* WARNING: Removing unreachable block (ram,0x10002be6) */
/* WARNING: Removing unreachable block (ram,0x10002bf3) */
/* WARNING: Removing unreachable block (ram,0x10002bf6) */
/* WARNING: Removing unreachable block (ram,0x10002c20) */
/* WARNING: Removing unreachable block (ram,0x10002ce2) */
/* WARNING: Removing unreachable block (ram,0x10002ce9) */
/* WARNING: Removing unreachable block (ram,0x10002cec) */
/* WARNING: Removing unreachable block (ram,0x10002cfe) */
/* WARNING: Removing unreachable block (ram,0x10002d01) */
/* WARNING: Removing unreachable block (ram,0x10002d09) */
/* WARNING: Removing unreachable block (ram,0x10002d0c) */
/* WARNING: Removing unreachable block (ram,0x10002d19) */
/* WARNING: Removing unreachable block (ram,0x10002d1c) */
/* WARNING: Removing unreachable block (ram,0x10002d27) */
/* WARNING: Removing unreachable block (ram,0x10002d2a) */
/* WARNING: Removing unreachable block (ram,0x10002d33) */
/* WARNING: Removing unreachable block (ram,0x10002d35) */
/* WARNING: Removing unreachable block (ram,0x10002d43) */
/* WARNING: Removing unreachable block (ram,0x10002d46) */
/* WARNING: Removing unreachable block (ram,0x10002d4f) */
/* WARNING: Removing unreachable block (ram,0x10002d51) */
/* WARNING: Removing unreachable block (ram,0x10003218) */
/* WARNING: Removing unreachable block (ram,0x10002d5a) */
/* WARNING: Removing unreachable block (ram,0x10002d76) */
/* WARNING: Removing unreachable block (ram,0x10002c10) */
/* WARNING: Removing unreachable block (ram,0x10002c1b) */
/* WARNING: Removing unreachable block (ram,0x10002c5d) */
/* WARNING: Removing unreachable block (ram,0x10002c63) */
/* WARNING: Removing unreachable block (ram,0x10002cd1) */
/* WARNING: Removing unreachable block (ram,0x10002c69) */
/* WARNING: Removing unreachable block (ram,0x10002c71) */
/* WARNING: Removing unreachable block (ram,0x10002d89) */
/* WARNING: Removing unreachable block (ram,0x10002c7b) */
/* WARNING: Removing unreachable block (ram,0x10002c86) */
/* WARNING: Removing unreachable block (ram,0x10002c8c) */
/* WARNING: Removing unreachable block (ram,0x10002c97) */
/* WARNING: Removing unreachable block (ram,0x10002c9d) */
/* WARNING: Removing unreachable block (ram,0x10002cac) */
/* WARNING: Removing unreachable block (ram,0x10002cae) */
/* WARNING: Removing unreachable block (ram,0x10002cc0) */
/* WARNING: Removing unreachable block (ram,0x10002cc2) */
/* WARNING: Removing unreachable block (ram,0x10002d9b) */
/* WARNING: Removing unreachable block (ram,0x10002d9e) */
/* WARNING: Removing unreachable block (ram,0x10002db3) */
/* WARNING: Removing unreachable block (ram,0x10002dc1) */
/* WARNING: Removing unreachable block (ram,0x10002dc9) */
/* WARNING: Removing unreachable block (ram,0x10002de4) */
/* WARNING: Removing unreachable block (ram,0x10002deb) */
/* WARNING: Removing unreachable block (ram,0x10002ded) */
/* WARNING: Removing unreachable block (ram,0x10002e01) */
/* WARNING: Removing unreachable block (ram,0x10002e04) */
/* WARNING: Removing unreachable block (ram,0x10002e0b) */
/* WARNING: Removing unreachable block (ram,0x10002e0d) */
/* WARNING: Removing unreachable block (ram,0x10002e1a) */
/* WARNING: Removing unreachable block (ram,0x10002e1d) */
/* WARNING: Removing unreachable block (ram,0x10002e26) */
/* WARNING: Removing unreachable block (ram,0x10002e28) */
/* WARNING: Removing unreachable block (ram,0x10002e31) */
/* WARNING: Removing unreachable block (ram,0x10002e33) */
/* WARNING: Removing unreachable block (ram,0x10002e3f) */
/* WARNING: Removing unreachable block (ram,0x10002e41) */
/* WARNING: Removing unreachable block (ram,0x10002e4a) */
/* WARNING: Removing unreachable block (ram,0x10002e4c) */
/* WARNING: Removing unreachable block (ram,0x10002e74) */
/* WARNING: Removing unreachable block (ram,0x10002e51) */
/* WARNING: Removing unreachable block (ram,0x10002e62) */
/* WARNING: Removing unreachable block (ram,0x10002e7f) */
/* WARNING: Removing unreachable block (ram,0x10002e9a) */
/* WARNING: Removing unreachable block (ram,0x10003140) */
/* WARNING: Removing unreachable block (ram,0x1000329f) */
/* WARNING: Removing unreachable block (ram,0x100032a8) */
/* WARNING: Removing unreachable block (ram,0x100032b1) */
/* WARNING: Removing unreachable block (ram,0x100032d0) */
/* WARNING: Removing unreachable block (ram,0x1000330f) */
/* WARNING: Removing unreachable block (ram,0x10003318) */
/* WARNING: Removing unreachable block (ram,0x10003341) */
/* WARNING: Removing unreachable block (ram,0x10003150) */
/* WARNING: Removing unreachable block (ram,0x10002bbe) */
/* WARNING: Removing unreachable block (ram,0x10003161) */
/* WARNING: Removing unreachable block (ram,0x10002bc9) */
/* WARNING: Removing unreachable block (ram,0x1000316c) */
/* WARNING: Removing unreachable block (ram,0x10003178) */
/* WARNING: Removing unreachable block (ram,0x10003181) */
/* WARNING: Removing unreachable block (ram,0x1000318b) */
/* WARNING: Removing unreachable block (ram,0x10003197) */
/* WARNING: Removing unreachable block (ram,0x100031a0) */
/* WARNING: Removing unreachable block (ram,0x100031a2) */
/* WARNING: Removing unreachable block (ram,0x100031a5) */
/* WARNING: Removing unreachable block (ram,0x100031b0) */
/* WARNING: Removing unreachable block (ram,0x100031b5) */
/* WARNING: Removing unreachable block (ram,0x100031ce) */
/* WARNING: Removing unreachable block (ram,0x100031db) */
/* WARNING: Removing unreachable block (ram,0x100031ea) */
/* WARNING: Removing unreachable block (ram,0x100031fc) */
/* WARNING: Removing unreachable block (ram,0x1000320a) */
/* WARNING: Removing unreachable block (ram,0x10002a2b) */
/* WARNING: Removing unreachable block (ram,0x100027e3) */
/* WARNING: Removing unreachable block (ram,0x10002a4f) */
/* WARNING: Removing unreachable block (ram,0x100027ed) */
/* WARNING: Removing unreachable block (ram,0x100034a3) */
/* WARNING: Removing unreachable block (ram,0x100034c5) */
/* WARNING: Removing unreachable block (ram,0x100034ce) */
/* WARNING: Removing unreachable block (ram,0x100034d9) */
/* WARNING: Removing unreachable block (ram,0x100034e4) */
/* WARNING: Removing unreachable block (ram,0x100034ee) */
/* WARNING: Removing unreachable block (ram,0x100034f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000a90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x43 < uVar3 && (pcVar2 = (code *)UINT_00006840, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)("tundra: entry");
  }
  (*(uint32_t *)(pf_module_state+0x12d4U)) = 0x3c0;
  (*(uint32_t *)(pf_module_state+0x12d8U)) = 0x21c;
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1488U)),0,0x18);
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x14b0U)),0,0x5c);
  iVar1 = Ram00006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      (((uVar3 = Ram00006808, 0x17 < uVar3 &&
        (pcVar2 = (code *)UINT_00006814, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)(), uVar3 != 0)))))) {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 &&
        ((uVar3 = Ram00006808, 0x7f < uVar3 &&
         (pcVar2 = (code *)UINT_0000687c, pcVar2 != (code *)0x0)))))) {
      (*pcVar2)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x14b4U)));
    }
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       ((uVar3 = Ram00006808, 0x1b < uVar3 &&
        (pcVar2 = (code *)UINT_00006818, pcVar2 != (code *)0x0)))) {
      (*pcVar2)();
    }
  }
  iVar1 = Ram00006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      ((uVar3 = Ram00006808, 0x43 < uVar3 && (pcVar2 = (code *)UINT_00006840, pcVar2 != (code *)0x0)
       ))))) {
    (*pcVar2)("tundra: graphics mode unavailable");
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2b8
#undef DAT_0181f2e0
#undef DAT_0181f2e4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006814
#undef UINT_00006818
#undef UINT_00006840
#undef UINT_0000687c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(uint8_t *)(0x181f2dcU))
#undef DAT_0181f33c
#define DAT_0181f33c (*(char *)(0x181f33cU))
#undef DAT_0181f340
#define DAT_0181f340 (*(uint8_t *)(0x181f340U))
#undef DAT_0181f344
#define DAT_0181f344 (*(uint8_t *)(0x181f344U))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UNK_0181e654
#define UNK_0181e654 (*(uint8_t *)(0x181e654U))
#undef UNK_0181e670
#define UNK_0181e670 (*(uint8_t *)(0x181e670U))
#define local_110 (*(char (*)[128])(frame + 16))
#define local_90 (*(int *)(frame + 144))
#define local_8c (*(int *)(frame + 148))
#define local_84 (*(int *)(frame + 156))
#define local_80 (*(int *)(frame + 160))
#define local_7c (*(int *)(frame + 164))
#define local_78 (*(int *)(frame + 168))
#define local_74 (*(uint *)(frame + 172))
#define local_70 (*(uint *)(frame + 176))
#define local_6c (*(int *)(frame + 180))
#define local_68 (*(int *)(frame + 184))
#define local_64 (*(int *)(frame + 188))
#define local_60 (*(int *)(frame + 192))
#define local_5c (*(int *)(frame + 196))
#define local_58 (*(int *)(frame + 200))
#define local_54 (*(int *)(frame + 204))
#define local_34 (*(uint *)(frame + 236))
#define local_24 (*(uint *)(frame + 252))
#define local_20 (*(char * *)(frame + 256))
#define local_1c (*(uint *)(frame + 260))
#define local_18 (*(uint *)(frame + 264))
#define local_14 (*(int *)(frame + 268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003510(char *in_ECX)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  void *dst;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  int *piVar18;
  char *a;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;

  bVar12 = 0;
  if (*in_ECX != '\x01') {
    return 0;
  }
  memset(&local_84,0,0x34);
  iVar6 = Ram00006800;
  if (iVar6 != 0x50414d57) {
    return 0;
  }
  iVar6 = Ram00006804;
  if (iVar6 == 0) {
    return 0;
  }
  uVar5 = Ram00006808;
  if (uVar5 < 0xc) {
    return 0;
  }
  uVar5 = Ram00006808;
  if (uVar5 < 0x80) {
    return 0;
  }
  pcVar3 = (code *)UINT_0000687c;
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(&local_84);
  if (uVar5 == 0) {
    return 0;
  }
  if (local_84 == 0 || local_80 != 0) {
    return 0;
  }
  local_20 = in_ECX;
  local_18 = local_74;
  local_1c = local_70;
  if ((local_70 == 0 || local_74 == 0) ||
      ((local_78 == 0 || (0x1fdfcU >> ((byte)(local_6c - 0xfU) & 0x1f) & 1) != 0) ||
      0x11 < local_6c - 0xfU)) {
    return 0;
  }
  if (((((((*(int *)(in_ECX + 4) == local_84) && (*(int *)(in_ECX + 8) == 0)) &&
         (*(int *)(in_ECX + 0xc) == local_7c)) &&
        ((*(int *)(in_ECX + 0x10) == local_78 && (*(uint *)(in_ECX + 0x14) == local_74)))) &&
       (*(uint *)(in_ECX + 0x18) == local_70)) &&
      (((*(int *)(in_ECX + 0x1c) == local_6c && (*(int *)(in_ECX + 0x20) == local_68)) &&
       ((*(int *)(in_ECX + 0x24) == local_64 &&
        (((*(int *)(in_ECX + 0x28) == local_60 && (*(int *)(in_ECX + 0x2c) == local_5c)) &&
         (*(int *)(in_ECX + 0x30) == local_58)))))))) && (*(int *)(in_ECX + 0x34) == local_54)) {
    local_14 = 0;
  }
  else {
    piVar18 = &local_84;
    piVar22 = (int *)(in_ECX + 4);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar22 = *piVar18;
      piVar18 = piVar18 + (uint)bVar12 * -2 + 1;
      piVar22 = piVar22 + (uint)bVar12 * -2 + 1;
    }
    in_ECX[0x48] = '\0';
    (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
    (*(uint32_t *)(pf_module_state+0x12e0U)) = 0xffffffff;
    recovered_10009e10((int)in_ECX);
    local_14 = CONCAT31((int3)(local_70 >> 8),1);
  }
  local_1c = local_70;
  local_18 = local_74;
  memset(&local_90,0,0xc);
  iVar6 = Ram00006800;
  bVar25 = true;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
     ((uVar5 = Ram00006808, 0xb < uVar5 &&
      ((uVar5 = Ram00006808, 0x37 < uVar5 && (pcVar3 = (code *)UINT_00006834, pcVar3 != (code *)0x0)
       ))))) {
    uVar5 = (*pcVar3)("Tundra.resolution",&local_90);
    bVar25 = uVar5 == 0;
  }
  uVar5 = local_18;
  if (!((local_90 != 0 && !bVar25) && 0xffffff80 < local_8c - 0x80U)) goto LAB_100038a9;
  iVar6 = 0;
  do {
    local_110[iVar6] = *(char *)(local_90 + iVar6);
    iVar6 = iVar6 + 1;
  } while (local_8c != iVar6);
  local_110[local_8c] = '\0';
  if (local_110[0] == '\0') goto LAB_100038a9;
  local_24 = 0;
  a = local_110;
  uVar23 = 0;
  do {
    uVar7 = strlen("renderWidth=");
    iVar6 = strncmp(a,"renderWidth=",uVar7);
    if (iVar6 == 0) {
      bVar12 = a[0xc];
      uVar5 = (uint)bVar12;
      if (bVar12 != 0) {
        uVar8 = 0;
        if ((byte)(bVar12 - 0x30U) < 10) {
          pcVar16 = a + 0xd;
          uVar8 = 0;
          do {
            if (0x19999999 < uVar8) goto LAB_10003891;
            bVar12 = (char)uVar5 - 0x30;
            if (uVar8 == 0x19999999 && 5 < bVar12) goto LAB_10003891;
            uVar8 = (uint)bVar12 + uVar8 * 10;
            bVar12 = *pcVar16 - 0x30;
            uVar5 = (uint)CONCAT11(bVar12,*pcVar16);
            pcVar16 = pcVar16 + 1;
          } while (bVar12 < 10);
        }
        if (((byte)uVar5 < 0xe) && ((0x2401U >> (uVar5 & 0x1f) & 1) != 0)) {
          uVar23 = uVar8;
        }
      }
    }
    else {
      uVar7 = strlen("renderHeight=");
      iVar6 = strncmp(a,"renderHeight=",uVar7);
      if (iVar6 == 0) {
        bVar12 = a[0xd];
        uVar5 = (uint)bVar12;
        if (bVar12 != 0) {
          uVar8 = 0;
          if ((byte)(bVar12 - 0x30U) < 10) {
            pcVar16 = a + 0xe;
            uVar8 = 0;
            do {
              if (0x19999999 < uVar8) goto LAB_10003891;
              bVar12 = (char)uVar5 - 0x30;
              if (uVar8 == 0x19999999 && 5 < bVar12) goto LAB_10003891;
              uVar8 = (uint)bVar12 + uVar8 * 10;
              bVar12 = *pcVar16 - 0x30;
              uVar5 = (uint)CONCAT11(bVar12,*pcVar16);
              pcVar16 = pcVar16 + 1;
            } while (bVar12 < 10);
          }
          if (((byte)uVar5 < 0xe) && ((0x2401U >> (uVar5 & 0x1f) & 1) != 0)) {
            local_24 = uVar8;
          }
        }
      }
    }
LAB_10003891:
    for (; (cVar1 = *a, cVar1 != '\0' && (cVar1 != '\n')); a = a + 1) {
    }
    pcVar16 = a + (cVar1 == '\n');
    a = a + (cVar1 == '\n');
  } while (*pcVar16 != '\0');
  uVar5 = local_18;
  if ((uVar23 == 0) || (local_24 == 0)) goto LAB_100038a9;
  if (0xfff < (int)uVar23) {
    uVar23 = 0x1000;
  }
  if ((int)uVar23 < 2) {
    uVar23 = 1;
    if ((int)local_24 < 0x1000) goto LAB_10003a55;
LAB_10003a6e:
    local_1c = 0x1000;
  }
  else {
    if (0xfff < (int)local_24) goto LAB_10003a6e;
LAB_10003a55:
    local_1c = local_24;
    if ((int)local_24 < 2) {
      local_1c = 1;
    }
  }
  uVar5 = uVar23;
LAB_100038a9:
  uVar23 = local_1c;
  if (0xfff < (local_1c - 1 | uVar5 - 1)) {
    if (0xfff < (int)local_74) {
      local_74 = 0x1000;
    }
    uVar5 = local_74;
    if ((int)local_74 < 2) {
      uVar5 = 1;
    }
    if ((int)local_70 < 0x1000) {
      uVar23 = local_70;
      if ((int)local_70 < 2) {
        uVar23 = 1;
      }
    }
    else {
      uVar23 = 0x1000;
    }
  }
  if ((((*(uint32_t *)(pf_module_state+0x1490U)) == (void *)0x0) || ((*(uint32_t *)(pf_module_state+0x1488U)) != uVar5)) || ((*(uint32_t *)(pf_module_state+0x148cU)) != uVar23)) {
    if (((((0xfff < (uVar23 - 1 | uVar5 - 1)) ||
          (lVar4 = (ulonglong)uVar5 * (ulonglong)uVar23 * 4,
          uVar8 = (uint)((ulonglong)lVar4 >> 0x20), uVar7 = (ulong)lVar4,
          uVar8 != 0 || uVar8 < (uVar7 == 0))) ||
         ((iVar6 = Ram00006800, iVar6 != 0x50414d57 ||
          ((iVar6 = Ram00006804, iVar6 == 0 || (uVar8 = Ram00006808, uVar8 < 0xc)))))) ||
        (uVar8 = Ram00006808, uVar8 < 0x58)) ||
       (pcVar3 = (code *)UINT_00006854, pcVar3 == (code *)0x0)) {
      return local_14;
    }
    dst = (*pcVar3)((*(uint32_t *)(pf_module_state+0x1490U)),uVar7);
    if (dst == (void *)0x0) {
      return local_14;
    }
    (*(uint32_t *)(pf_module_state+0x12d4U)) = uVar5;
    (*(uint32_t *)(pf_module_state+0x12d8U)) = uVar23;
    (*(uint32_t *)(pf_module_state+0x1488U)) = uVar5;
    (*(uint32_t *)(pf_module_state+0x148cU)) = uVar23;
    (*(uint32_t *)(pf_module_state+0x1490U)) = dst;
    memset(dst,0,uVar7);
    (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
    (*(uint32_t *)(pf_module_state+0x12e0U)) = 0xffffffff;
  }
  else if ((char)local_14 == '\0') {
    return 0;
  }
  uVar23 = (*(uint32_t *)(pf_module_state+0x12d8U));
  uVar5 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if ((int)(*(uint32_t *)(pf_module_state+0x12d4U)) < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U)) - 1;
  }
  if ((int)(*(uint32_t *)(pf_module_state+0x12d8U)) < 1) {
    iVar13 = 0;
  }
  else {
    iVar13 = (*(uint32_t *)(pf_module_state+0x12d8U)) - 1;
  }
  iVar9 = *(int *)(local_20 + 0x4c);
  iVar24 = iVar9;
  if (iVar6 <= iVar9) {
    iVar24 = iVar6;
  }
  iVar6 = *(int *)(local_20 + 0x50);
  iVar20 = 0;
  if (-1 < iVar9) {
    iVar20 = iVar24;
  }
  *(int *)(local_20 + 0x4c) = iVar20;
  iVar9 = iVar6;
  if (iVar13 <= iVar6) {
    iVar9 = iVar13;
  }
  iVar24 = 0;
  if (-1 < iVar6) {
    iVar24 = iVar9;
  }
  *(int *)(local_20 + 0x50) = iVar24;
  iVar6 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if ((*(uint32_t *)(pf_module_state+0x14a4U)) == 0) {
    return CONCAT31((int3)((uint)iVar13 >> 8),1);
  }
  iVar9 = uVar5 - 0x1c;
  iVar13 = uVar23 - 0x6e;
  iVar24 = -0x11030;
  uVar8 = uVar23;
  do {
    if (*(char *)(iVar6 + 0x11030 + iVar24) == '\x01') {
      uVar2 = *(uint *)(iVar6 + 0x11040 + iVar24);
      if (uVar2 < 7) {
        iVar20 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x824U)) + uVar2 * 4);
        local_1c = *(uint *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x840U)) + uVar2 * 4);
      }
      else {
        local_1c = 0x6e;
        iVar20 = 0xb4;
      }
      iVar14 = -4;
      if (uVar2 != 6) {
        iVar14 = -0x42;
      }
      local_24 = uVar5 - 8;
      if ((int)(uVar5 - 8) <= iVar20) {
        local_24 = iVar20;
      }
      uVar8 = (uVar23 - 0x1a) + iVar14;
      if ((int)uVar8 <= (int)local_1c) {
        uVar8 = local_1c;
      }
      if (*(char *)(iVar6 + 0x11033 + iVar24) == '\x01') {
        *(int *)(iVar6 + 0x11090 + iVar24) = iVar9;
        *(int *)(iVar6 + 0x11094 + iVar24) = iVar13;
        iVar19 = iVar9;
        if (iVar9 < iVar20) {
          *(int *)(iVar6 + 0x11090 + iVar24) = iVar20;
          iVar19 = iVar20;
        }
        iVar15 = 0xe;
        local_34 = 0x24;
        if (iVar13 < (int)local_1c) {
          *(uint *)(iVar6 + 0x11094 + iVar24) = local_1c;
          local_14 = local_1c;
        }
        else {
          local_14 = iVar13;
        }
      }
      else {
        iVar15 = *(int *)(iVar6 + 0x11090 + iVar24);
        uVar17 = iVar15;
        if ((int)local_24 <= iVar15) {
          uVar17 = local_24;
        }
        iVar19 = iVar20;
        if (iVar20 <= iVar15) {
          iVar19 = uVar17;
        }
        *(int *)(iVar6 + 0x11090 + iVar24) = iVar19;
        iVar15 = *(int *)(iVar6 + 0x11094 + iVar24);
        local_14 = iVar15;
        if ((int)uVar8 <= iVar15) {
          local_14 = uVar8;
        }
        uVar17 = local_1c;
        if ((int)local_1c <= iVar15) {
          uVar17 = local_14;
        }
        *(uint *)(iVar6 + 0x11094 + iVar24) = uVar17;
        iVar15 = *(int *)(iVar6 + 0x11088 + iVar24);
        local_34 = *(uint *)(iVar6 + 0x1108c + iVar24);
        local_14 = uVar17;
      }
      iVar10 = 4;
      if (7 < (int)(uVar5 - iVar19)) {
        iVar10 = (uVar5 - iVar19) + -4;
      }
      uVar17 = (iVar14 + uVar23) - local_14;
      if ((int)uVar17 < 0x1b) {
        uVar17 = 0x1a;
      }
      iVar21 = iVar15;
      if (iVar10 <= iVar15) {
        iVar21 = iVar10;
      }
      iVar10 = 4;
      if (3 < iVar15) {
        iVar10 = iVar21;
      }
      *(int *)(iVar6 + 0x11088 + iVar24) = iVar10;
      uVar11 = local_34;
      if (uVar17 <= local_34) {
        uVar11 = uVar17;
      }
      uVar17 = 0x1a;
      if (0x19 < (int)local_34) {
        uVar17 = uVar11;
      }
      *(uint *)(iVar6 + 0x1108c + iVar24) = uVar17;
      iVar15 = *(int *)(iVar6 + 0x110a0 + iVar24);
      iVar10 = iVar19;
      if (iVar15 != 0) {
        iVar10 = iVar15;
      }
      uVar17 = iVar10;
      if ((int)local_24 <= iVar10) {
        uVar17 = local_24;
      }
      if (iVar20 <= iVar10) {
        iVar20 = uVar17;
      }
      *(int *)(iVar6 + 0x110a0 + iVar24) = iVar20;
      iVar15 = *(int *)(iVar6 + 0x110a4 + iVar24);
      iVar10 = local_14;
      if (iVar15 != 0) {
        iVar10 = iVar15;
      }
      iVar15 = iVar10;
      if ((int)uVar8 <= iVar10) {
        iVar15 = uVar8;
      }
      if ((int)local_1c <= iVar10) {
        local_1c = iVar15;
      }
      *(uint *)(iVar6 + 0x110a4 + iVar24) = local_1c;
      iVar15 = 4;
      if (7 < (int)(uVar5 - iVar20)) {
        iVar15 = (uVar5 - iVar20) + -4;
      }
      local_1c = (iVar14 + uVar23) - local_1c;
      if ((int)local_1c < 0x1b) {
        local_1c = 0x1a;
      }
      iVar20 = *(int *)(iVar6 + 0x11098 + iVar24);
      uVar17 = *(uint *)(iVar6 + 0x1109c + iVar24);
      iVar14 = iVar20;
      if (iVar15 <= iVar20) {
        iVar14 = iVar15;
      }
      iVar15 = 4;
      if (3 < iVar20) {
        iVar15 = iVar14;
      }
      *(int *)(iVar6 + 0x11098 + iVar24) = iVar15;
      uVar11 = uVar17;
      if ((int)local_1c <= (int)uVar17) {
        uVar11 = local_1c;
      }
      uVar8 = 0x1a;
      if (0x19 < (int)uVar17) {
        uVar8 = uVar11;
      }
      *(uint *)(iVar6 + 0x1109c + iVar24) = uVar8;
      if (uVar2 == 0) {
        iVar20 = local_14 + -0x6a;
        iVar14 = -1;
        if (0x49 < iVar20) {
          iVar20 = (int)((ulonglong)((longlong)iVar20 * 0x22983759) >> 0x20) - iVar20;
          iVar14 = (iVar20 >> 6) - (iVar20 >> 0x1f);
        }
        iVar19 = (int)((ulonglong)((longlong)(iVar19 + -0x26) * -0x2df2df2d) >> 0x20) + -0x26 +
                 iVar19;
        iVar20 = (iVar19 >> 6) - (iVar19 >> 0x1f);
        if (iVar20 < 2) {
          iVar20 = 1;
        }
        uVar8 = *(uint *)(iVar6 + 0x11b28 + iVar24);
        if ((int)uVar8 < 0) {
          *(undefined4 *)(iVar6 + 0x11b28 + iVar24) = 0;
          uVar8 = 0;
        }
        uVar2 = iVar20 * iVar14 + 2 + *(int *)(iVar6 + 0x11b20 + iVar24);
        if (((int)uVar2 < 1) || ((int)uVar2 < (int)uVar8)) {
          uVar8 = 0;
          if (0 < (int)uVar2) {
            uVar8 = uVar2;
          }
          *(uint *)(iVar6 + 0x11b28 + iVar24) = uVar8;
        }
      }
    }
    iVar24 = iVar24 + 0xd9c;
  } while (iVar24 != 0);
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) != '\0') {
    if ((int)uVar5 < 0xa9) {
      uVar5 = 0xa8;
    }
    iVar6 = (*(uint32_t *)(pf_module_state+0x1510U));
    if ((int)(uVar5 - 0xa8) <= (*(uint32_t *)(pf_module_state+0x1510U))) {
      iVar6 = uVar5 - 0xa8;
    }
    uVar5 = (uVar23 - 4) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * -0x16;
    bVar25 = -1 < (*(uint32_t *)(pf_module_state+0x1510U));
    (*(uint32_t *)(pf_module_state+0x1510U)) = 0;
    if (bVar25) {
      (*(uint32_t *)(pf_module_state+0x1510U)) = iVar6;
    }
    if ((int)uVar5 < 0x19) {
      uVar5 = 0x18;
    }
    uVar23 = (*(uint32_t *)(pf_module_state+0x1514U));
    if ((int)uVar5 <= (int)(*(uint32_t *)(pf_module_state+0x1514U))) {
      uVar23 = uVar5;
    }
    uVar8 = 0x18;
    if (0x17 < (int)(*(uint32_t *)(pf_module_state+0x1514U))) {
      uVar8 = uVar23;
    }
    (*(uint32_t *)(pf_module_state+0x1514U)) = uVar8;
  }
  return CONCAT31((int3)(uVar8 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f110
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_0181f2d4
#undef DAT_0181f2dc
#undef DAT_0181f33c
#undef DAT_0181f340
#undef DAT_0181f344
#undef DAT_0181f8d4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_00006854
#undef UINT_0000687c
#undef UNK_0181e654
#undef UNK_0181e670
#undef local_110
#undef local_90
#undef local_8c
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_34
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006818
#define UINT_00006818 (*(uint *)(0x6818U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

void recovered_10003e90(undefined1 *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  if (*(void **)(in_ECX + 0x38) != (void *)0x0) {
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x53 < uVar2 &&
        (UNRECOVERED_JUMPTABLE = (code *)UINT_00006850, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
      (*UNRECOVERED_JUMPTABLE)(*(void **)(in_ECX + 0x38));
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  if (*(void **)(in_ECX + 0x3c) != (void *)0x0) {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x53 < uVar2 &&
         (UNRECOVERED_JUMPTABLE = (code *)UINT_00006850, UNRECOVERED_JUMPTABLE != (code *)0x0))))))
    {
      (*UNRECOVERED_JUMPTABLE)(*(void **)(in_ECX + 0x3c));
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    in_ECX[0x48] = 0;
  }
  *in_ECX = 0;
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x1b < uVar2 &&
      (UNRECOVERED_JUMPTABLE = (code *)UINT_00006818, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10003f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006818
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(uint8_t *)(0x181f2dcU))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018225d8
#define DAT_018225d8 (*(uint8_t *)(0x18225d8U))
#undef DAT_018225dc
#define DAT_018225dc (*(uint8_t *)(0x18225dcU))
#undef DAT_018226ec
#define DAT_018226ec (*(uint8_t *)(0x18226ecU))
#undef DAT_01823f74
#define DAT_01823f74 (*(uint8_t *)(0x1823f74U))
#undef DAT_01823f78
#define DAT_01823f78 (*(uint8_t *)(0x1823f78U))
#undef DAT_01823f7c
#define DAT_01823f7c (*(uint8_t *)(0x1823f7cU))
#undef DAT_01823f80
#define DAT_01823f80 (*(uint8_t *)(0x1823f80U))
#undef DAT_01823f84
#define DAT_01823f84 (*(uint8_t *)(0x1823f84U))
#undef DAT_01823f88
#define DAT_01823f88 (*(uint8_t *)(0x1823f88U))
#undef DAT_01823f8c
#define DAT_01823f8c (*(uint8_t *)(0x1823f8cU))
#undef DAT_01823f90
#define DAT_01823f90 (*(uint8_t *)(0x1823f90U))
#undef DAT_01823f94
#define DAT_01823f94 (*(uint8_t *)(0x1823f94U))
#undef DAT_01823f98
#define DAT_01823f98 (*(uint8_t *)(0x1823f98U))
#undef DAT_01823f9c
#define DAT_01823f9c (*(uint8_t *)(0x1823f9cU))
#undef DAT_01823fa0
#define DAT_01823fa0 (*(uint8_t *)(0x1823fa0U))
#undef DAT_01823fa4
#define DAT_01823fa4 (*(uint8_t *)(0x1823fa4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *dst;

  iVar5 = 0;
  pvVar4 = (*(uint32_t *)(pf_module_state+0x14a4U));
  pvVar6 = (*(uint32_t *)(pf_module_state+0x14a4U));
  do {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else if (*(char *)((int)pvVar4 + iVar5) == '\x01') {
      pvVar4 = *(void **)((int)pvVar4 + iVar5 + 0xaec);
      if ((((pvVar4 != (void *)0x0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57)) &&
          (iVar1 = Ram00006804, iVar1 != 0)) &&
         (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
          (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
        (*pcVar3)(pvVar4);
        pvVar6 = (*(uint32_t *)(pf_module_state+0x14a4U));
      }
      pvVar4 = *(void **)((int)pvVar6 + iVar5 + 0xb04);
      if (((pvVar4 != (void *)0x0 && *(int *)((int)pvVar6 + iVar5 + 0xb08) == 0) &&
          (iVar1 = Ram00006800, iVar1 == 0x50414d57)) &&
         ((iVar1 = Ram00006804, iVar1 != 0 &&
          (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
           (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
        (*pcVar3)(pvVar4);
      }
      memset((void *)((int)pvVar6 + iVar5 + 0xb04),0,0x18);
      pvVar4 = (*(uint32_t *)(pf_module_state+0x14a4U));
      pvVar6 = (*(uint32_t *)(pf_module_state+0x14a4U));
    }
    iVar5 = iVar5 + 0xd9c;
  } while (iVar5 != 0x11030);
  iVar5 = 10;
  dst = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x48bcU));
  do {
    if ((((void *)*dst != (void *)0x0 && dst[1] == 0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57))
       && (((iVar1 = Ram00006804, iVar1 != 0 &&
            ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))) &&
           (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)((void *)*dst);
    }
    memset(dst,0,0x18);
    dst = dst + 0x44;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((*(uint32_t *)(pf_module_state+0x6144U)) != (void *)0x0) {
    iVar5 = Ram00006800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x7b < uVar2 &&
        (pcVar3 = (code *)UINT_00006878, pcVar3 != (code *)0x0)))) {
      (*pcVar3)((*(uint32_t *)(pf_module_state+0x6144U)));
    }
    (*(uint32_t *)(pf_module_state+0x6144U)) = (void *)0x0;
  }
  if ((((*(uint32_t *)(pf_module_state+0x47a8U)) != (void *)0x0 && (*(uint32_t *)(pf_module_state+0x47acU)) == 0) &&
      (iVar5 = Ram00006800, iVar5 == 0x50414d57)) &&
     ((iVar5 = Ram00006804, iVar5 != 0 &&
      (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
       (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
    (*pcVar3)((*(uint32_t *)(pf_module_state+0x47a8U)));
  }
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x47a8U)),0,0x18);
  if ((*(uint32_t *)(pf_module_state+0x6148U)) != (void *)0x0) {
    iVar5 = Ram00006800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x53 < uVar2 &&
         (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)((*(uint32_t *)(pf_module_state+0x6148U)));
    }
    (*(uint32_t *)(pf_module_state+0x6148U)) = (void *)0x0;
  }
  (*(uint32_t *)(pf_module_state+0x614cU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
  (*(uint32_t *)(pf_module_state+0x12e0U)) = 0xffffffff;
  if (((((*(uint32_t *)(pf_module_state+0x14a4U)) != (void *)0x0) && (iVar5 = Ram00006800, iVar5 == 0x50414d57)) &&
      (iVar5 = Ram00006804, iVar5 != 0)) &&
     (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
      (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
    (*pcVar3)((*(uint32_t *)(pf_module_state+0x14a4U)));
  }
  if ((((*(uint32_t *)(pf_module_state+0x1aa8U)) != (void *)0x0) && (iVar5 = Ram00006800, iVar5 == 0x50414d57)) &&
     ((iVar5 = Ram00006804, iVar5 != 0 &&
      (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
       (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
    (*pcVar3)((*(uint32_t *)(pf_module_state+0x1aa8U)));
  }
  if ((((*(uint32_t *)(pf_module_state+0x1aacU)) != (void *)0x0) && (iVar5 = Ram00006800, iVar5 == 0x50414d57)) &&
     (((iVar5 = Ram00006804, iVar5 != 0 &&
       ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))) &&
      (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
    (*pcVar3)((*(uint32_t *)(pf_module_state+0x1aacU)));
  }
  if ((((((*(uint32_t *)(pf_module_state+0x6150U)) != (void *)0x0) && (iVar5 = Ram00006800, iVar5 == 0x50414d57)) &&
       (iVar5 = Ram00006804, iVar5 != 0)) &&
      ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))) &&
     (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)) {
    (*pcVar3)((*(uint32_t *)(pf_module_state+0x6150U)));
  }
  if ((*(uint32_t *)(pf_module_state+0x6158U)) != (void *)0x0) {
    iVar5 = Ram00006800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x53 < uVar2 &&
         (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)((*(uint32_t *)(pf_module_state+0x6158U)));
    }
    (*(uint32_t *)(pf_module_state+0x6158U)) = (void *)0x0;
  }
  if ((*(uint32_t *)(pf_module_state+0x615cU)) != (void *)0x0) {
    iVar5 = Ram00006800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x53 < uVar2 &&
        (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)((*(uint32_t *)(pf_module_state+0x615cU)));
    }
    (*(uint32_t *)(pf_module_state+0x615cU)) = (void *)0x0;
  }
  (*(uint32_t *)(pf_module_state+0x6160U)) = 0;
  (*(uint32_t *)(pf_module_state+0x6164U)) = 0;
  (*(uint32_t *)(pf_module_state+0x6168U)) = 0;
  (*(uint32_t *)(pf_module_state+0x616cU)) = 0;
  (*(uint32_t *)(pf_module_state+0x6170U)) = 0;
  (*(uint32_t *)(pf_module_state+0x6174U)) = 0;
  (*(uint32_t *)(pf_module_state+0x14a4U)) = (void *)0x0;
  (*(uint32_t *)(pf_module_state+0x1aa8U)) = (void *)0x0;
  (*(uint32_t *)(pf_module_state+0x1aacU)) = (void *)0x0;
  (*(uint32_t *)(pf_module_state+0x6150U)) = (void *)0x0;
  (*(uint32_t *)(pf_module_state+0x6154U)) = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f110
#undef DAT_0181f2d4
#undef DAT_0181f2dc
#undef DAT_0181f8d8
#undef DAT_0181f8dc
#undef DAT_018225d8
#undef DAT_018225dc
#undef DAT_018226ec
#undef DAT_01823f74
#undef DAT_01823f78
#undef DAT_01823f7c
#undef DAT_01823f80
#undef DAT_01823f84
#undef DAT_01823f88
#undef DAT_01823f8c
#undef DAT_01823f90
#undef DAT_01823f94
#undef DAT_01823f98
#undef DAT_01823f9c
#undef DAT_01823fa0
#undef DAT_01823fa4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006878

#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#define local_14 (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10004490(int in_ECX,char *in_EDX,undefined4 param_3,char param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;

  local_14 = "";
  if (in_EDX != (char *)0x0) {
    local_14 = in_EDX;
  }
  iVar8 = 0;
  iVar6 = 8;
  pcVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if ((pcVar1[iVar6 + -8] == '\x01') && (*(int *)(pcVar1 + iVar6 + -4) == in_ECX)) {
      iVar2 = strcmp(pcVar1 + iVar6,local_14);
      if (iVar2 == 0) {
        return iVar8;
      }
      pcVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 300;
  } while (iVar8 != 0x12);
  uVar7 = 0;
  iVar6 = 0;
  pcVar4 = pcVar1;
  if (*pcVar1 != '\0') {
    if (pcVar1[300] == '\x01') {
      if (pcVar1[600] == '\x01') {
        if (pcVar1[900] == '\x01') {
          if (pcVar1[0x4b0] == '\x01') {
            if (pcVar1[0x5dc] == '\x01') {
              if (pcVar1[0x708] == '\x01') {
                if (pcVar1[0x834] == '\x01') {
                  if (pcVar1[0x960] == '\x01') {
                    if (pcVar1[0xa8c] == '\x01') {
                      if (pcVar1[3000] == '\x01') {
                        if (pcVar1[0xce4] == '\x01') {
                          if (pcVar1[0xe10] == '\x01') {
                            if (pcVar1[0xf3c] == '\x01') {
                              if (pcVar1[0x1068] == '\x01') {
                                if (pcVar1[0x1194] == '\x01') {
                                  if (pcVar1[0x12c0] == '\x01') {
                                    if (pcVar1[0x13ec] == '\x01') {
                                      return -1;
                                    }
                                    pcVar4 = pcVar1 + 0x13ec;
                                    iVar6 = 0x11;
                                  }
                                  else {
                                    pcVar4 = pcVar1 + 0x12c0;
                                    iVar6 = 0x10;
                                  }
                                }
                                else {
                                  pcVar4 = pcVar1 + 0x1194;
                                  iVar6 = 0xf;
                                }
                              }
                              else {
                                pcVar4 = pcVar1 + 0x1068;
                                iVar6 = 0xe;
                              }
                            }
                            else {
                              pcVar4 = pcVar1 + 0xf3c;
                              iVar6 = 0xd;
                            }
                          }
                          else {
                            pcVar4 = pcVar1 + 0xe10;
                            iVar6 = 0xc;
                          }
                        }
                        else {
                          pcVar4 = pcVar1 + 0xce4;
                          iVar6 = 0xb;
                        }
                      }
                      else {
                        pcVar4 = pcVar1 + 3000;
                        iVar6 = 10;
                      }
                    }
                    else {
                      pcVar4 = pcVar1 + 0xa8c;
                      iVar6 = 9;
                    }
                  }
                  else {
                    pcVar4 = pcVar1 + 0x960;
                    iVar6 = 8;
                  }
                }
                else {
                  pcVar4 = pcVar1 + 0x834;
                  iVar6 = 7;
                }
              }
              else {
                pcVar4 = pcVar1 + 0x708;
                iVar6 = 6;
              }
            }
            else {
              pcVar4 = pcVar1 + 0x5dc;
              iVar6 = 5;
            }
          }
          else {
            pcVar4 = pcVar1 + 0x4b0;
            iVar6 = 4;
          }
        }
        else {
          pcVar4 = pcVar1 + 900;
          iVar6 = 3;
        }
      }
      else {
        pcVar4 = pcVar1 + 600;
        iVar6 = 2;
      }
    }
    else {
      pcVar4 = pcVar1 + 300;
      iVar6 = 1;
    }
  }
  *pcVar4 = '\x01';
  iVar8 = iVar6 * 300;
  pcVar1[iVar8 + 1] = param_4;
  *(int *)(pcVar1 + iVar8 + 4) = in_ECX;
  cVar5 = *local_14;
  if (cVar5 != '\0') {
    uVar3 = 0;
    do {
      uVar7 = uVar3 + 1;
      pcVar1[uVar3 + iVar8 + 8] = cVar5;
      if (0x26 < uVar7) break;
      cVar5 = local_14[uVar3 + 1];
      uVar3 = uVar7;
    } while (cVar5 != '\0');
  }
  pcVar1[uVar7 + iVar8 + 8] = '\0';
  pcVar1[iVar8 + 0x30] = '\0';
  iVar2 = recovered_10004ab0();
  pcVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  *(int *)((*(uint32_t *)(pf_module_state+0x1aa8U)) + iVar8 + 0x124) = iVar2;
  pcVar1[iVar8 + 0x12a] = PF_PART1(param_3, 2);
  *(undefined2 *)(pcVar1 + iVar8 + 0x128) = (undefined2)param_3;
  return iVar6;
}

#undef DAT_0181f8d8
#undef local_14

#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004770(char *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;

  pcVar1 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    in_ECX = "";
  }
  else {
    cVar3 = *in_ECX;
    if (cVar3 != '\0') {
      pcVar6 = in_ECX;
      pcVar4 = (char *)0x0;
      do {
        pcVar1 = pcVar6;
        if (cVar3 != '/') {
          pcVar1 = pcVar4;
        }
        cVar3 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
        pcVar4 = pcVar1;
      } while (cVar3 != '\0');
    }
  }
  pcVar6 = in_ECX;
  if (pcVar1 != (char *)0x0) {
    pcVar6 = pcVar1 + 1;
  }
  iVar8 = -0x1518;
  pcVar1 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
  do {
    if ((((pcVar1[iVar8 + 0x1518] == '\x01') && (*(int *)(pcVar1 + iVar8 + 0x151c) == 5)) &&
        (*(int *)(pcVar1 + iVar8 + 0x163c) == in_EDX)) &&
       (iVar2 = strcmp(pcVar1 + iVar8 + 0x1548,in_ECX), pcVar1 = (*(uint8_t * *)(pf_module_state+0x1aa8U)),
       iVar2 == 0)) {
      (*(uint8_t * *)(pf_module_state+0x1aa8U))[iVar8 + 0x1519] = '\x01';
      return;
    }
    iVar8 = iVar8 + 300;
  } while (iVar8 != 0);
  uVar7 = 0;
  iVar8 = 0;
  pcVar4 = pcVar1;
  if (*pcVar1 != '\0') {
    if (pcVar1[300] == '\x01') {
      if (pcVar1[600] == '\x01') {
        if (pcVar1[900] == '\x01') {
          if (pcVar1[0x4b0] == '\x01') {
            if (pcVar1[0x5dc] == '\x01') {
              if (pcVar1[0x708] == '\x01') {
                if (pcVar1[0x834] == '\x01') {
                  if (pcVar1[0x960] == '\x01') {
                    if (pcVar1[0xa8c] == '\x01') {
                      if (pcVar1[3000] == '\x01') {
                        if (pcVar1[0xce4] == '\x01') {
                          if (pcVar1[0xe10] == '\x01') {
                            if (pcVar1[0xf3c] == '\x01') {
                              if (pcVar1[0x1068] == '\x01') {
                                if (pcVar1[0x1194] == '\x01') {
                                  if (pcVar1[0x12c0] == '\x01') {
                                    if (pcVar1[0x13ec] == '\x01') {
                                      return;
                                    }
                                    pcVar4 = pcVar1 + 0x13ec;
                                    iVar8 = 0x11;
                                  }
                                  else {
                                    pcVar4 = pcVar1 + 0x12c0;
                                    iVar8 = 0x10;
                                  }
                                }
                                else {
                                  pcVar4 = pcVar1 + 0x1194;
                                  iVar8 = 0xf;
                                }
                              }
                              else {
                                pcVar4 = pcVar1 + 0x1068;
                                iVar8 = 0xe;
                              }
                            }
                            else {
                              pcVar4 = pcVar1 + 0xf3c;
                              iVar8 = 0xd;
                            }
                          }
                          else {
                            pcVar4 = pcVar1 + 0xe10;
                            iVar8 = 0xc;
                          }
                        }
                        else {
                          pcVar4 = pcVar1 + 0xce4;
                          iVar8 = 0xb;
                        }
                      }
                      else {
                        pcVar4 = pcVar1 + 3000;
                        iVar8 = 10;
                      }
                    }
                    else {
                      pcVar4 = pcVar1 + 0xa8c;
                      iVar8 = 9;
                    }
                  }
                  else {
                    pcVar4 = pcVar1 + 0x960;
                    iVar8 = 8;
                  }
                }
                else {
                  pcVar4 = pcVar1 + 0x834;
                  iVar8 = 7;
                }
              }
              else {
                pcVar4 = pcVar1 + 0x708;
                iVar8 = 6;
              }
            }
            else {
              pcVar4 = pcVar1 + 0x5dc;
              iVar8 = 5;
            }
          }
          else {
            pcVar4 = pcVar1 + 0x4b0;
            iVar8 = 4;
          }
        }
        else {
          pcVar4 = pcVar1 + 900;
          iVar8 = 3;
        }
      }
      else {
        pcVar4 = pcVar1 + 600;
        iVar8 = 2;
      }
    }
    else {
      pcVar4 = pcVar1 + 300;
      iVar8 = 1;
    }
  }
  *pcVar4 = '\x01';
  iVar8 = iVar8 * 300;
  pcVar1[iVar8 + 1] = '\x01';
  pcVar4 = pcVar1 + iVar8 + 4;
  pcVar4[0] = '\x05';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  *(int *)(pcVar1 + iVar8 + 0x124) = in_EDX;
  cVar3 = *in_ECX;
  if (cVar3 != '\0') {
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 1;
      pcVar1[uVar5 + iVar8 + 0x30] = cVar3;
      if (0xef < uVar7) break;
      cVar3 = in_ECX[uVar5 + 1];
      uVar5 = uVar7;
    } while (cVar3 != '\0');
  }
  pcVar1[uVar7 + iVar8 + 0x30] = '\0';
  pcVar4 = "Root";
  if (*pcVar6 != '\0') {
    pcVar4 = pcVar6;
  }
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar7 = uVar5 + 1;
      pcVar1[uVar5 + iVar8 + 8] = cVar3;
      if (0x26 < uVar7) break;
      cVar3 = pcVar4[uVar5 + 1];
      uVar5 = uVar7;
    } while (cVar3 != '\0');
  }
  pcVar1[uVar7 + iVar8 + 8] = '\0';
  (pcVar1 + iVar8 + 0x128)[0] = -0x14;
  (pcVar1 + iVar8 + 0x128)[1] = -0x14;
  pcVar1[iVar8 + 0x12a] = -0x14;
  return;
}

#undef DAT_0181f8d8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2a0
#define DAT_0181f2a0 (*(uint8_t *)(0x181f2a0U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#define local_a8 (*(uint *)(frame + 16152))
#define local_20 (*(undefined * *)(frame + 16288))
#define local_1c (*(uint *)(frame + 16292))
#define local_18 (*(undefined * *)(frame + 16296))
#define local_14 (*(undefined * *)(frame + 16300))
#define local_3fac (*(undefined1 (*)[496])(frame + 20))
#define local_3dbc (*(int (*)[3908])(frame + 516))
#define local_ac (*(undefined1 (*)[4])(frame + 16148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10004ab0(void)

{
  unsigned char frame[16352] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  undefined *puVar9;

  iVar1 = Ram00006800;
  iVar6 = -1;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0xbf < uVar3 && (pcVar2 = (code *)UINT_000068bc, pcVar2 != (code *)0x0))
     )) {
    iVar6 = (*pcVar2)();
  }
  local_1c = 0;
  if (-1 < (int)(*(uint32_t *)(pf_module_state+0x1470U))) {
    return (int)(*(uint32_t *)(pf_module_state+0x1470U));
  }
  if (-1 < iVar6) {
    (*(uint32_t *)(pf_module_state+0x1470U)) = (undefined *)iVar6;
    return iVar6;
  }
  (*(uint32_t *)(pf_module_state+0x1470U)) = (undefined *)0xfffffffe;
  memset(local_3fac,0,0x3f00);
  iVar1 = Ram00006800;
  puVar8 = (undefined *)0xffffffff;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      (((uVar3 = Ram00006808, 0xc3 < uVar3 &&
        (pcVar2 = (code *)UINT_000068c0, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)(local_3fac,0x20,&local_1c), uVar3 != 0)))))) {
    if (local_1c < 0x21) {
      if (local_1c == 0) goto LAB_10004d48;
    }
    else {
      local_1c = 0x20;
    }
    uVar3 = 0;
    piVar7 = local_3dbc;
    local_18 = (undefined *)0xffffffff;
    puVar9 = puVar8;
    do {
      local_14 = (undefined *)*piVar7;
      puVar8 = puVar9;
      if (-1 < (int)local_14) {
        memset(local_ac,0,0x8c);
        iVar1 = Ram00006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
           ((((uVar4 = Ram00006808, 0xb < uVar4 &&
              ((uVar4 = Ram00006808, 0x113 < uVar4 &&
               (pcVar2 = (code *)UINT_00006910, pcVar2 != (code *)0x0)))) &&
             (uVar4 = (*pcVar2)((int)local_14,local_ac), uVar4 != 0)) && ((local_a8 & 0x12) == 2))))
        {
          puVar8 = local_14;
          if (-1 < (int)puVar9) {
            puVar8 = puVar9;
          }
          memset(local_ac,0,0x8c);
          iVar1 = Ram00006800;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
              (uVar4 = Ram00006808, 0xb < uVar4)) &&
             (((uVar4 = Ram00006808, 0x113 < uVar4 &&
               (pcVar2 = (code *)UINT_00006910, pcVar2 != (code *)0x0)) &&
              ((uVar4 = (*pcVar2)((int)local_14,local_ac), uVar4 != 0 &&
               (((local_a8 & 0x12) == 2 && ((local_a8 & 0xc) == 0)))))))) {
            local_20 = local_14;
            if (-1 < (int)local_18) {
              local_20 = local_18;
            }
            uVar5 = recovered_1000af80(local_14);
            local_18 = local_20;
            if ((char)uVar5 != '\0') {
              (*(uint32_t *)(pf_module_state+0x1470U)) = local_14;
              return (int)local_14;
            }
          }
        }
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 0x7e;
      puVar9 = puVar8;
    } while (uVar3 < local_1c);
    if (-1 < (int)local_18) {
      return (int)local_18;
    }
  }
LAB_10004d48:
  if ((int)puVar8 < 0) {
    puVar8 = (undefined *)0xffffffff;
  }
  return (int)puVar8;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2a0
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068bc
#undef UINT_000068c0
#undef UINT_00006910
#undef local_a8
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_3fac
#undef local_3dbc
#undef local_ac

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004d60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1000c310();
  recovered_1000c710();
  recovered_1000c940();
  recovered_1000ca80();
  if (0 < (*(uint32_t *)(pf_module_state+0x6274U))) {
    iVar1 = 0;
    do {
      recovered_1000ce80((char *)(*(int *)((*(uint32_t *)(pf_module_state+0x1aacU)) + iVar1 * 4) * 0xd9c + (*(uint32_t *)(pf_module_state+0x14a4U))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (*(uint32_t *)(pf_module_state+0x6274U)));
  }
  recovered_1000e0a0();
  recovered_1000e1d0();
  recovered_1000e450();
  recovered_1000e590();
  return;
}

#undef DAT_0181f2d4
#undef DAT_0181f8dc
#undef DAT_018240a4

#undef DAT_0181f074
#define DAT_0181f074 (*(uint8_t *)(0x181f074U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004de0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar11;
  int iVar10;
  char *pcVar12;
  uint uVar13;

  iVar5 = (*(uint32_t *)(pf_module_state+0x12d8U));
  iVar4 = (*(uint32_t *)(pf_module_state+0x12d4U));
  uVar2 = *(uint *)(in_ECX + 0x4c);
  iVar3 = *(int *)(in_ECX + 0x50);
  iVar9 = 0;
LAB_10004e1d:
  pcVar12 = *(char **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1244U)) + iVar9 * 4);
  uVar6 = iVar3 + iVar9;
  iVar7 = 0;
  uVar13 = uVar2;
  do {
    cVar1 = *pcVar12;
    if (cVar1 == 'B') {
      if (((int)uVar13 < iVar4 && -1 < (int)(uVar13 | uVar6)) &&
         ((int)uVar6 < iVar5 && (*(uint32_t *)(pf_module_state+0x1490U)) != 0)) {
        uVar11 = iVar7 + uVar2;
        uVar8 = 0;
LAB_10004ec5:
        iVar10 = uVar11 + iVar4 * uVar6;
        *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar10 * 4) = uVar8;
        *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar10 * 4) = uVar8;
        *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar10 * 4) = uVar8;
        *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 3 + iVar10 * 4) = 0xff;
      }
    }
    else if (cVar1 == 'W') {
      if (((int)uVar13 < iVar4 && -1 < (int)(uVar13 | uVar6)) &&
         ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)uVar6 < iVar5)) {
        uVar8 = 0xff;
        uVar11 = uVar13;
        goto LAB_10004ec5;
      }
    }
    else if (cVar1 == '\0') break;
    iVar7 = iVar7 + 1;
    uVar13 = uVar13 + 1;
    pcVar12 = pcVar12 + 1;
  } while( true );
  iVar9 = iVar9 + 1;
  if (iVar9 == 0x10) {
    return;
  }
  goto LAB_10004e1d;
}

#undef DAT_0181f074
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_01823f88
#define DAT_01823f88 (*(uint8_t *)(0x1823f88U))
#undef DAT_01823f8c
#define DAT_01823f8c (*(uint8_t *)(0x1823f8cU))
#undef DAT_01823f90
#define DAT_01823f90 (*(uint8_t *)(0x1823f90U))
#undef DAT_01823f94
#define DAT_01823f94 (*(uint8_t *)(0x1823f94U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000695c
#define UINT_0000695c (*(uint *)(0x695cU))
#define local_28 (*(undefined1 * *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004f00(char *in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *in_ECX_00;
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  undefined1 *puVar13;
  void *b;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  void *a;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  ulonglong uVar26;

  if ((*in_ECX == '\x01') && (iVar1 = *(int *)(in_ECX + 4), iVar1 != 0 && *(int *)(in_ECX + 8) == 0)
     ) {
    in_ECX_00 = in_ECX + 4;
    uVar3 = recovered_10009e10((int)in_ECX);
    uVar18 = (*(uint32_t *)(pf_module_state+0x148cU));
    uVar20 = (*(uint32_t *)(pf_module_state+0x1488U));
    iVar9 = *(int *)(in_ECX + 0x1c);
    if ((char)uVar3 == '\0') {
      if ((((iVar9 - 0xfU < 0x12) && ((0x20203U >> (iVar9 - 0xfU & 0x1f) & 1) != 0)) &&
          ((*(uint32_t *)(pf_module_state+0x1490U)) != 0)) &&
         (((uVar19 = *(uint *)(in_ECX + 0x14), uVar19 != 0 &&
           (uVar17 = *(uint *)(in_ECX + 0x18), uVar17 != 0)) &&
          ((0 < (int)(*(uint32_t *)(pf_module_state+0x1488U)) &&
           ((0 < (int)(*(uint32_t *)(pf_module_state+0x148cU)) &&
            (iVar1 = *(int *)(in_ECX + 4), iVar1 != 0 && *(int *)(in_ECX + 8) == 0)))))))) {
        uVar26 = pf_app_udiv_full((ulonglong)(*(uint32_t *)(pf_module_state+0x148cU)) * (ulonglong)uVar19,
                                    (ulonglong)(*(uint32_t *)(pf_module_state+0x1488U)));
        uVar4 = (uint)uVar26;
        local_18 = uVar19;
        if (uVar17 < (uint)uVar26) {
          uVar26 = pf_app_udiv_full((ulonglong)uVar20 * (ulonglong)uVar17,(ulonglong)uVar18);
          local_18 = (uint)uVar26;
          uVar4 = uVar17;
        }
        if ((uVar4 != 0) && (local_18 != 0)) {
          recovered_10015750(uVar20,uVar18,local_18,uVar4);
          uVar20 = *(uint *)(in_ECX + 0x18);
          if (uVar20 != 0) {
            uVar14 = iVar9 + 7U >> 3;
            uVar21 = uVar19 - local_18 >> 1;
            uVar19 = uVar17 - uVar4 >> 1;
            uVar18 = *(uint *)(in_ECX + 0x14);
            local_24 = 0;
            do {
              bVar22 = uVar18 != 0;
              uVar18 = 0;
              if (bVar22) {
                local_28 = (undefined1 *)(*(int *)(in_ECX + 0x10) * local_24 + iVar1);
                uVar20 = 0;
                do {
                  uVar18 = 0;
                  if ((((local_24 < uVar19 + uVar4) && (uVar19 <= local_24)) && (uVar21 <= uVar20))
                     && (uVar20 < uVar21 + local_18)) {
                    if (((*(uint32_t *)(pf_module_state+0x6158U)) == 0) || ((*(uint32_t *)(pf_module_state+0x6160U)) != local_18)) {
                      uVar26 = pf_app_udiv_full((ulonglong)(uVar20 - uVar21) *
                                                  (ulonglong)(*(uint32_t *)(pf_module_state+0x1488U)),(ulonglong)local_18);
                      iVar9 = (int)uVar26;
                    }
                    else {
                      iVar9 = *(int *)((*(uint32_t *)(pf_module_state+0x6158U)) + (uVar20 - uVar21) * 4);
                    }
                    if (((*(uint32_t *)(pf_module_state+0x615cU)) == 0) || ((*(uint32_t *)(pf_module_state+0x6164U)) != uVar4)) {
                      uVar26 = pf_app_udiv_full((ulonglong)(local_24 - uVar19) *
                                                  (ulonglong)(*(uint32_t *)(pf_module_state+0x148cU)),(ulonglong)uVar4);
                      iVar8 = (int)uVar26;
                    }
                    else {
                      iVar8 = *(int *)((*(uint32_t *)(pf_module_state+0x615cU)) + (local_24 - uVar19) * 4);
                    }
                    iVar9 = iVar8 * (*(uint32_t *)(pf_module_state+0x1488U)) + iVar9;
                    uVar18 = recovered_10016e50((int)in_ECX_00,
                                                (uint)*(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar9 * 4),
                                                *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar9 * 4),
                                                *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar9 * 4));
                  }
                  bVar10 = 0;
                  puVar13 = local_28;
                  uVar17 = uVar14;
                  do {
                    *puVar13 = (char)(uVar18 >> (bVar10 & 0x1f));
                    puVar13 = puVar13 + 1;
                    bVar10 = bVar10 + 8;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                  uVar18 = *(uint *)(in_ECX + 0x14);
                  uVar20 = uVar20 + 1;
                  local_28 = local_28 + uVar14;
                } while (uVar20 < uVar18);
                uVar20 = *(uint *)(in_ECX + 0x18);
              }
              local_24 = local_24 + 1;
            } while (local_24 < uVar20);
          }
        }
      }
    }
    else {
      uVar19 = 0;
      if ((iVar9 - 0xfU < 0x12) && ((0x20203U >> (iVar9 - 0xfU & 0x1f) & 1) != 0)) {
        uVar19 = iVar9 + 7U >> 3;
      }
      if (((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (pvVar12 = *(void **)(in_ECX + 0x38), pvVar12 != (void *)0x0))
          && (uVar19 != 0)) &&
         (((uVar17 = *(uint *)(in_ECX + 0x14), uVar17 != 0 &&
           (uVar4 = *(uint *)(in_ECX + 0x18), uVar4 != 0)) &&
          ((0 < (int)(*(uint32_t *)(pf_module_state+0x1488U)) && (0 < (int)(*(uint32_t *)(pf_module_state+0x148cU)))))))) {
        local_14 = (*(uint32_t *)(pf_module_state+0x1488U));
        uVar26 = pf_app_udiv_full((ulonglong)(*(uint32_t *)(pf_module_state+0x148cU)) * (ulonglong)uVar17,
                                    (ulonglong)(*(uint32_t *)(pf_module_state+0x1488U)));
        uVar14 = (uint)uVar26;
        uVar21 = uVar17;
        if (uVar4 < (uint)uVar26) {
          uVar26 = pf_app_udiv_full((ulonglong)uVar20 * (ulonglong)uVar4,(ulonglong)uVar18);
          uVar21 = (uint)uVar26;
          uVar14 = uVar4;
        }
        if ((uVar14 != 0) && (uVar21 != 0)) {
          if ((uVar4 - uVar14 != 0) || (uVar17 != uVar21)) {
            memset(pvVar12,0,*(ulong *)(in_ECX + 0x40));
            local_14 = (*(uint32_t *)(pf_module_state+0x1488U));
            uVar18 = (*(uint32_t *)(pf_module_state+0x148cU));
          }
          recovered_10015750(local_14,uVar18,uVar21,uVar14);
          iVar8 = (*(uint32_t *)(pf_module_state+0x615cU));
          iVar9 = (*(uint32_t *)(pf_module_state+0x6158U));
          bVar22 = (*(uint32_t *)(pf_module_state+0x615cU)) != 0;
          bVar23 = (*(uint32_t *)(pf_module_state+0x6164U)) == uVar14;
          bVar24 = (*(uint32_t *)(pf_module_state+0x6158U)) == 0;
          bVar25 = (*(uint32_t *)(pf_module_state+0x6160U)) != uVar21;
          uVar20 = 0;
          do {
            if (bVar23 && bVar22) {
              iVar5 = *(int *)(iVar8 + uVar20 * 4);
            }
            else {
              uVar26 = pf_app_udiv_full((ulonglong)uVar20 * (ulonglong)(*(uint32_t *)(pf_module_state+0x148cU)),
                                          (ulonglong)uVar14);
              iVar5 = (int)uVar26;
            }
            iVar16 = (*(uint32_t *)(pf_module_state+0x1490U));
            uVar18 = (*(uint32_t *)(pf_module_state+0x1488U));
            iVar6 = *(int *)(in_ECX + 0x38);
            iVar11 = ((uVar4 - uVar14 >> 1) + uVar20) * *(int *)(in_ECX + 0x10) +
                     (uVar17 - uVar21 >> 1) * uVar19 + iVar6;
            if (uVar19 == 4) {
              uVar18 = 0;
              do {
                uVar15 = (*(uint32_t *)(pf_module_state+0x1488U));
                if (bVar25 || bVar24) {
                  uVar26 = pf_app_udiv_full((ulonglong)(*(uint32_t *)(pf_module_state+0x1488U)) * (ulonglong)uVar18,
                                              (ulonglong)uVar21);
                  iVar6 = (int)uVar26;
                }
                else {
                  iVar6 = *(int *)(iVar9 + uVar18 * 4);
                }
                iVar6 = uVar15 * iVar5 + iVar6;
                uVar15 = recovered_10016e50((int)in_ECX_00,(uint)*(byte *)(iVar16 + iVar6 * 4),
                                            *(byte *)(iVar16 + 1 + iVar6 * 4),
                                            *(byte *)(iVar16 + 2 + iVar6 * 4));
                *(uint *)(iVar11 + uVar18 * 4) = uVar15;
                uVar18 = uVar18 + 1;
              } while (uVar21 != uVar18);
            }
            else if (uVar19 == 2) {
              iVar5 = iVar5 * (*(uint32_t *)(pf_module_state+0x1488U));
              uVar15 = 0;
              do {
                if (bVar25 || bVar24) {
                  uVar26 = pf_app_udiv_full((ulonglong)uVar15 * (ulonglong)uVar18,
                                              (ulonglong)uVar21);
                  iVar6 = (int)uVar26;
                }
                else {
                  iVar6 = *(int *)(iVar9 + uVar15 * 4);
                }
                iVar6 = iVar6 + iVar5;
                uVar7 = recovered_10016e50((int)in_ECX_00,(uint)*(byte *)(iVar16 + iVar6 * 4),
                                           *(byte *)(iVar16 + 1 + iVar6 * 4),
                                           *(byte *)(iVar16 + 2 + iVar6 * 4));
                *(short *)(iVar11 + uVar15 * 2) = (short)uVar7;
                uVar15 = uVar15 + 1;
              } while (uVar21 != uVar15);
            }
            else {
              uVar18 = 0;
              do {
                uVar15 = (*(uint32_t *)(pf_module_state+0x1488U));
                if (bVar25 || bVar24) {
                  uVar26 = pf_app_udiv_full((ulonglong)(*(uint32_t *)(pf_module_state+0x1488U)) * (ulonglong)uVar18,
                                              (ulonglong)uVar21);
                  iVar16 = (int)uVar26;
                }
                else {
                  iVar16 = *(int *)(iVar9 + uVar18 * 4);
                }
                iVar16 = uVar15 * iVar5 + iVar16;
                uVar15 = recovered_10016e50((int)in_ECX_00,
                                            (uint)*(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar16 * 4),
                                            *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar16 * 4),
                                            *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar16 * 4));
                if (iVar6 != 0) {
                  bVar10 = 0;
                  iVar16 = 0;
                  uVar7 = uVar19;
                  do {
                    *(char *)(uVar18 * uVar19 + iVar11 + iVar16) = (char)(uVar15 >> (bVar10 & 0x1f))
                    ;
                    iVar16 = iVar16 + 1;
                    bVar10 = bVar10 + 8;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar21);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar14);
          iVar9 = *(int *)(in_ECX + 0x1c);
        }
      }
      if ((((iVar9 - 0xfU < 0x12) && ((0x20203U >> (iVar9 - 0xfU & 0x1f) & 1) != 0)) &&
          (*(int *)(in_ECX + 0x38) != 0)) &&
         ((uVar20 = (iVar9 + 7U >> 3) * *(int *)(in_ECX + 0x14), uVar20 != 0 &&
          (uVar20 <= *(uint *)(in_ECX + 0x10))))) {
        if (*(int *)(in_ECX + 0x18) != 0) {
          uVar18 = 0;
          do {
            iVar9 = *(int *)(in_ECX + 0x10) * uVar18;
            a = (void *)(*(int *)(in_ECX + 0x38) + iVar9);
            pvVar12 = (void *)(iVar1 + iVar9);
            if (*(int *)(in_ECX + 0x3c) == 0) {
LAB_100055ef:
              memcpy(pvVar12,a,uVar20);
            }
            else {
              b = (void *)(*(int *)(in_ECX + 0x3c) + iVar9);
              if (((in_ECX[0x48] != '\x01') || (*(int *)(in_ECX + 0x44) != *(int *)(in_ECX + 0x40)))
                 || (iVar9 = memcmp(a,b,uVar20), iVar9 != 0)) {
                memcpy(pvVar12,a,uVar20);
                pvVar12 = b;
                goto LAB_100055ef;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(uint *)(in_ECX + 0x18));
        }
        if (*(int *)(in_ECX + 0x3c) != 0) {
          in_ECX[0x48] = '\x01';
        }
      }
    }
    if (((((*(uint *)(in_ECX + 0x14) != 0) && (*(uint *)(in_ECX + 0x18) != 0)) &&
         (iVar1 = Ram00006800, iVar1 == 0x50414d57)) &&
        ((iVar1 = Ram00006804, iVar1 != 0 && (uVar20 = Ram00006808, 0xb < uVar20)))) &&
       ((uVar20 = Ram00006808, 0x15f < uVar20 &&
        (pcVar2 = (code *)UINT_0000695c, pcVar2 != (code *)0x0)))) {
      (*pcVar2)(0,0,*(uint *)(in_ECX + 0x14),*(uint *)(in_ECX + 0x18));
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_01823f88
#undef DAT_01823f8c
#undef DAT_01823f90
#undef DAT_01823f94
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000695c
#undef local_28
#undef local_24
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f10c
#define DAT_0181f10c (*(uint8_t *)(0x181f10cU))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f114
#define DAT_0181f114 (*(uint8_t *)(0x181f114U))
#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f2ac
#define DAT_0181f2ac (*(uint8_t *)(0x181f2acU))
#undef DAT_0181f2b0
#define DAT_0181f2b0 (*(uint8_t *)(0x181f2b0U))
#undef DAT_0181f2b4
#define DAT_0181f2b4 (*(uint8_t *)(0x181f2b4U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f2d8
#define DAT_0181f2d8 (*(uint8_t *)(0x181f2d8U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(uint8_t *)(0x181f2dcU))
#undef DAT_0181f2e1
#define DAT_0181f2e1 (*(uint8_t *)(0x181f2e1U))
#undef DAT_0181f33c
#define DAT_0181f33c (*(uint8_t *)(0x181f33cU))
#undef DAT_0181f340
#define DAT_0181f340 (*(uint8_t *)(0x181f340U))
#undef DAT_0181f344
#define DAT_0181f344 (*(uint8_t *)(0x181f344U))
#undef DAT_0181f348
#define DAT_0181f348 (*(uint8_t *)(0x181f348U))
#undef DAT_0181f34c
#define DAT_0181f34c (*(uint8_t *)(0x181f34cU))
#undef DAT_0181f350
#define DAT_0181f350 (*(uint8_t *)(0x181f350U))
#undef DAT_0181f354
#define DAT_0181f354 (*(uint8_t *)(0x181f354U))
#undef DAT_0181f358
#define DAT_0181f358 (*(uint8_t *)(0x181f358U))
#undef DAT_0181f35c
#define DAT_0181f35c (*(uint8_t *)(0x181f35cU))
#undef DAT_0181f360
#define DAT_0181f360 (*(char *)(0x181f360U))
#undef DAT_0181f361
#define DAT_0181f361 (*(char *)(0x181f361U))
#undef DAT_0181f362
#define DAT_0181f362 (*(char *)(0x181f362U))
#undef DAT_0181f363
#define DAT_0181f363 (*(char *)(0x181f363U))
#undef DAT_0181f364
#define DAT_0181f364 (*(uint8_t *)(0x181f364U))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_0181f8e0
#define DAT_0181f8e0 (*(uint8_t *)(0x181f8e0U))
#undef DAT_018223dc
#define DAT_018223dc (*(uint8_t *)(0x18223dcU))
#undef DAT_018223dd
#define DAT_018223dd (*(char *)(0x18223ddU))
#undef DAT_018223e0
#define DAT_018223e0 (*(uint8_t *)(0x18223e0U))
#undef DAT_018223e4
#define DAT_018223e4 (*(uint8_t *)(0x18223e4U))
#undef DAT_018223e8
#define DAT_018223e8 (*(uint8_t *)(0x18223e8U))
#undef DAT_018223ec
#define DAT_018223ec (*(uint8_t *)(0x18223ecU))
#undef DAT_018225d2
#define DAT_018225d2 (*(byte *)(0x18225d2U))
#undef DAT_018225d4
#define DAT_018225d4 (*(uint8_t *)(0x18225d4U))
#undef DAT_018225f0
#define DAT_018225f0 (*(uint8_t *)(0x18225f0U))
#undef DAT_01823fac
#define DAT_01823fac (*(uint8_t *)(0x1823facU))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
#undef DAT_019293c4
#define DAT_019293c4 (*(uint8_t *)(0x19293c4U))
#undef DAT_019293c8
#define DAT_019293c8 (*(uint8_t *)(0x19293c8U))
#undef DAT_019293cc
#define DAT_019293cc (*(char *)(0x19293ccU))
#undef DAT_019293cd
#define DAT_019293cd (*(char *)(0x19293cdU))
#undef DAT_019293d0
#define DAT_019293d0 (*(uint8_t *)(0x19293d0U))
#undef DAT_019293d4
#define DAT_019293d4 (*(char *)(0x19293d4U))
#undef DAT_019293d5
#define DAT_019293d5 (*(char *)(0x19293d5U))
#undef DAT_019293d6
#define DAT_019293d6 (*(char *)(0x19293d6U))
#undef DAT_019293d7
#define DAT_019293d7 (*(char *)(0x19293d7U))
#undef DAT_019293d8
#define DAT_019293d8 (*(char *)(0x19293d8U))
#undef DAT_019293d9
#define DAT_019293d9 (*(char *)(0x19293d9U))
#undef DAT_019293da
#define DAT_019293da (*(char *)(0x19293daU))
#undef DAT_019293db
#define DAT_019293db (*(char *)(0x19293dbU))
#undef DAT_019293dc
#define DAT_019293dc (*(char *)(0x19293dcU))
#undef DAT_019293dd
#define DAT_019293dd (*(char *)(0x19293ddU))
#undef DAT_019293de
#define DAT_019293de (*(char *)(0x19293deU))
#undef DAT_019293df
#define DAT_019293df (*(char *)(0x19293dfU))
#undef DAT_019293e0
#define DAT_019293e0 (*(char *)(0x19293e0U))
#undef DAT_019293e1
#define DAT_019293e1 (*(char *)(0x19293e1U))
#undef DAT_019293e2
#define DAT_019293e2 (*(char *)(0x19293e2U))
#undef DAT_019293e3
#define DAT_019293e3 (*(char *)(0x19293e3U))
#undef DAT_019293e4
#define DAT_019293e4 (*(char *)(0x19293e4U))
#undef DAT_019293e5
#define DAT_019293e5 (*(char *)(0x19293e5U))
#undef DAT_019293e6
#define DAT_019293e6 (*(char *)(0x19293e6U))
#undef DAT_019293e7
#define DAT_019293e7 (*(char *)(0x19293e7U))
#undef DAT_019293e8
#define DAT_019293e8 (*(char *)(0x19293e8U))
#undef DAT_019293e9
#define DAT_019293e9 (*(char *)(0x19293e9U))
#undef DAT_019293ea
#define DAT_019293ea (*(char *)(0x19293eaU))
#undef DAT_019293eb
#define DAT_019293eb (*(char *)(0x19293ebU))
#undef DAT_019293ec
#define DAT_019293ec (*(char *)(0x19293ecU))
#undef DAT_019293ed
#define DAT_019293ed (*(char *)(0x19293edU))
#undef DAT_019293ee
#define DAT_019293ee (*(char *)(0x19293eeU))
#undef DAT_019293ef
#define DAT_019293ef (*(char *)(0x19293efU))
#undef DAT_019293f0
#define DAT_019293f0 (*(char *)(0x19293f0U))
#undef DAT_019293f1
#define DAT_019293f1 (*(char *)(0x19293f1U))
#undef DAT_019293f2
#define DAT_019293f2 (*(char *)(0x19293f2U))
#undef DAT_019293f3
#define DAT_019293f3 (*(char *)(0x19293f3U))
#undef DAT_019293f4
#define DAT_019293f4 (*(char *)(0x19293f4U))
#undef DAT_019293f5
#define DAT_019293f5 (*(char *)(0x19293f5U))
#undef DAT_019293f6
#define DAT_019293f6 (*(char *)(0x19293f6U))
#undef DAT_019293f7
#define DAT_019293f7 (*(char *)(0x19293f7U))
#undef DAT_019293f8
#define DAT_019293f8 (*(char *)(0x19293f8U))
#undef DAT_019293f9
#define DAT_019293f9 (*(char *)(0x19293f9U))
#undef DAT_019293fa
#define DAT_019293fa (*(char *)(0x19293faU))
#undef DAT_019293fb
#define DAT_019293fb (*(char *)(0x19293fbU))
#undef DAT_019293fc
#define DAT_019293fc (*(char *)(0x19293fcU))
#undef DAT_01929400
#define DAT_01929400 (*(uint8_t *)(0x1929400U))
#undef DAT_01929404
#define DAT_01929404 (*(uint8_t *)(0x1929404U))
#undef DAT_01929408
#define DAT_01929408 (*(uint8_t *)(0x1929408U))
#undef DAT_01929410
#define DAT_01929410 (*(uint8_t *)(0x1929410U))
#undef DAT_01929414
#define DAT_01929414 (*(uint8_t *)(0x1929414U))
#undef DAT_01929418
#define DAT_01929418 (*(uint8_t *)(0x1929418U))
#undef DAT_0192941c
#define DAT_0192941c (*(uint8_t *)(0x192941cU))
#undef DAT_01929420
#define DAT_01929420 (*(byte *)(0x1929420U))
#undef DAT_01929421
#define DAT_01929421 (*(uint8_t *)(0x1929421U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006888
#define UINT_00006888 (*(uint *)(0x6888U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef UINT_000068d8
#define UINT_000068d8 (*(uint *)(0x68d8U))
#undef UINT_000068dc
#define UINT_000068dc (*(uint *)(0x68dcU))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#undef UNK_0181e654
#define UNK_0181e654 (*(uint8_t *)(0x181e654U))
#undef UNK_0181e670
#define UNK_0181e670 (*(uint8_t *)(0x181e670U))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#undef UNK_0181ed7d
#define UNK_0181ed7d (*(uint8_t *)(0x181ed7dU))
#undef UNK_0181ed8e
#define UNK_0181ed8e (*(uint8_t *)(0x181ed8eU))
#undef UNK_0181eec5
#define UNK_0181eec5 (*(uint8_t *)(0x181eec5U))
#undef UNK_0181ef15
#define UNK_0181ef15 (*(uint8_t *)(0x181ef15U))
#undef UNK_0181f550
#define UNK_0181f550 (*(uint8_t *)(0x181f550U))
#undef UNK_0181f554
#define UNK_0181f554 (*(uint8_t *)(0x181f554U))
#undef UNK_0181f598
#define UNK_0181f598 (*(uint8_t *)(0x181f598U))
#undef UNK_0181f5e0
#define UNK_0181f5e0 (*(uint8_t *)(0x181f5e0U))
#undef UNK_0181f5e4
#define UNK_0181f5e4 (*(uint8_t *)(0x181f5e4U))
#undef UNK_0181f5e6
#define UNK_0181f5e6 (*(uint8_t *)(0x181f5e6U))
#undef UNK_0181f5e8
#define UNK_0181f5e8 (*(uint8_t *)(0x181f5e8U))
#undef UNK_0181f5ea
#define UNK_0181f5ea (*(uint8_t *)(0x181f5eaU))
#undef UNK_0181f5ec
#define UNK_0181f5ec (*(uint8_t *)(0x181f5ecU))
#undef UNK_0181f5ee
#define UNK_0181f5ee (*(uint8_t *)(0x181f5eeU))
#undef UNK_0181f5f0
#define UNK_0181f5f0 (*(uint8_t *)(0x181f5f0U))
#undef UNK_0181f5f2
#define UNK_0181f5f2 (*(uint8_t *)(0x181f5f2U))
#undef UNK_0181f8e1
#define UNK_0181f8e1 (*(uint8_t *)(0x181f8e1U))
#undef UNK_0181f909
#define UNK_0181f909 (*(uint8_t *)(0x181f909U))
#undef UNK_018223f0
#define UNK_018223f0 (*(uint8_t *)(0x18223f0U))
#undef UNK_018224e1
#define UNK_018224e1 (*(uint8_t *)(0x18224e1U))
#define acStack_32e (*(char (*)[482])(frame + 290))
#define uStack_50 (*(uint *)(frame + 1024))
#define cStack_39 (*(char *)(frame + 1047))
#define local_420 (*(undefined4 *)(frame + 48))
#define local_41c (*(uint *)(frame + 52))
#define local_418 (*(uint *)(frame + 56))
#define local_414 (*(uint *)(frame + 60))
#define local_410 (*(uint *)(frame + 64))
#define local_40c (*(uint *)(frame + 68))
#define local_14c (*(undefined4 *)(frame + 772))
#define local_148 (*(undefined4 *)(frame + 776))
#define local_144 (*(undefined4 *)(frame + 780))
#define local_140 (*(int *)(frame + 784))
#define local_13c (*(undefined4 *)(frame + 788))
#define local_54 (*(uint *)(frame + 1020))
#define local_4c (*(uint *)(frame + 1028))
#define local_48 (*(uint *)(frame + 1032))
#define local_44 (*(char * *)(frame + 1036))
#define local_40 (*(char * *)(frame + 1040))
#define local_38 (*(uint *)(frame + 1048))
#define local_34 (*(char * *)(frame + 1052))
#define local_2d (*(byte *)(frame + 1059))
#define local_2c (*(char * *)(frame + 1060))
#define local_28 (*(uint *)(frame + 1064))
#define local_24 (*(uint *)(frame + 1068))
#define local_20 (*(char * *)(frame + 1072))
#define local_1c (*(int *)(frame + 1076))
#define local_18 (*(char * *)(frame + 1080))
#define local_14 (*(char * *)(frame + 1084))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005670(int in_ECX)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  byte bVar26;
  int iVar25;
  int iVar27;
  undefined4 *puVar28;
  uint uVar29;
  int iVar30;
  undefined4 *puVar31;
  char *pcVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 uVar35;

  pcVar24 = (*(uint32_t *)(pf_module_state+0x10b594U));
  pcVar15 = (*(uint32_t *)(pf_module_state+0x1520U));
  pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
  local_1c = *(int *)(in_ECX + 0x4c);
  local_24 = *(uint *)(in_ECX + 0x50);
  local_48 = *(uint *)(in_ECX + 0x58);
  local_54 = *(uint *)(in_ECX + 0x54);
  local_4c = local_54 & 2;
  local_28 = local_54 & 1;
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  if ((local_54 & 1) == 0) {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b59cU)) != '\0') {
      if ((*(uint32_t *)(pf_module_state+0x12e4U)) < 0) {
        if ((((*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)) == '\x01') && ((*(uint8_t *)((uintptr_t)pf_module_state+0x45adU)) == '\x01')) && (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U)))) {
          local_14 = (*(uint32_t *)(pf_module_state+0x1aacU));
          uVar21 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
          local_2c = (*(uint8_t * *)(pf_module_state+0x14a4U));
          do {
            iVar27 = *(int *)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar21 * 4 + -8) * 0xd9c;
            if (((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar27] == '\x01') &&
               (pcVar15 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27, pcVar15[1] == '\x01')) {
              local_20 = (char *)0x18;
              if (pcVar15[2] == '\0') {
                local_20 = *(char **)(pcVar15 + 100);
              }
              if (((*(int *)(pcVar15 + 0x58) <= local_1c) &&
                  (local_18 = *(char **)(pcVar15 + 0x5c), (int)local_18 <= (int)local_24)) &&
                 ((local_1c < *(int *)(pcVar15 + 0x58) + *(int *)(pcVar15 + 0x60) &&
                  ((int)local_24 < (int)(local_20 + (int)local_18))))) {
                if ((-1 < *(int *)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar21 * 4 + -8)) &&
                   (*(int *)(pcVar15 + 0x10) == 0)) {
                  uVar21 = recovered_10018900((int)pcVar15,local_1c,local_24);
                  cVar9 = pcVar15[0x78];
                  if (cVar9 != '\0') {
                    uVar29 = 0;
                    goto LAB_10008471;
                  }
                  uVar22 = 0;
                  goto LAB_10008772;
                }
                break;
              }
            }
            uVar21 = uVar21 - 1;
          } while (1 < uVar21);
        }
        goto LAB_10005a3c;
      }
      if (((((*(uint8_t * *)(pf_module_state+0x14a4U)) != (char *)0x0) &&
           (pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (*(uint32_t *)(pf_module_state+0x12e4U)) * 0xd9c, *pcVar20 == '\x01')) &&
          (pcVar20[2] == '\0')) && (pcVar20[3] == '\0')) {
        *(char **)(pcVar20 + 0x60) = (*(uint32_t *)(pf_module_state+0x10b594U));
        iVar27 = (*(uint32_t *)(pf_module_state+0x10b598U));
        *(int *)(pcVar20 + 100) = (*(uint32_t *)(pf_module_state+0x10b598U));
        *(char **)(pcVar20 + 0x70) = pcVar24;
        *(int *)(pcVar20 + 0x74) = iVar27;
        *(undefined4 *)(pcVar20 + 0x68) = *(undefined4 *)(pcVar20 + 0x58);
        *(undefined4 *)(pcVar20 + 0x6c) = *(undefined4 *)(pcVar20 + 0x5c);
        if (*(int *)(pcVar20 + 0x10) == 6) {
          pcVar20[4] = '\x01';
          if (*(uint *)(pcVar20 + 0xb1c) != 0) {
            if (iVar27 < 0x36) {
              iVar27 = 0x35;
            }
            if ((int)pcVar24 < 0x1e) {
              pcVar24 = (char *)0x1d;
            }
            terror_ui_window_set_content_size(*(uint *)(pcVar20 + 0xb1c),(uint)(pcVar24 + -0x1c),iVar27 - 0x34);
          }
        }
        else if (*(int *)(pcVar20 + 0x10) == 0) {
          iVar27 = iVar27 + -0x6a;
          iVar30 = -1;
          if (0x49 < iVar27) {
            iVar27 = (int)((ulonglong)((longlong)iVar27 * 0x22983759) >> 0x20) - iVar27;
            iVar30 = (iVar27 >> 6) - (iVar27 >> 0x1f);
          }
          iVar27 = ((int)(pcVar24 +
                         (int)((ulonglong)((longlong)(int)(pcVar24 + -0x26) * -0x2df2df2d) >> 0x20)
                         + -0x26) >> 6) -
                   ((int)(pcVar24 +
                         (int)((ulonglong)((longlong)(int)(pcVar24 + -0x26) * -0x2df2df2d) >> 0x20)
                         + -0x26) >> 0x1f);
          if (iVar27 < 2) {
            iVar27 = 1;
          }
          iVar27 = iVar30 * iVar27 + 2 + *(int *)(pcVar20 + 0xaf0);
          iVar30 = *(int *)(pcVar20 + 0xaf8);
          if (iVar30 < 0) {
            pcVar20[0xaf8] = '\0';
            pcVar20[0xaf9] = '\0';
            pcVar20[0xafa] = '\0';
            pcVar20[0xafb] = '\0';
            iVar30 = 0;
          }
          if ((iVar27 < 1) || (iVar27 < iVar30)) {
            iVar30 = 0;
            if (0 < iVar27) {
              iVar30 = iVar27;
            }
            *(int *)(pcVar20 + 0xaf8) = iVar30;
          }
        }
      }
      (*(uint32_t *)(pf_module_state+0x12e4U)) = -1;
      memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)),0,0x1fc);
      puVar11 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12dcU));
      goto LAB_10005f85;
    }
  }
  else if ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b59cU)) == '\0') {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) == '\x01') {
      if (((local_1c < (*(uint32_t *)(pf_module_state+0x1510U))) || ((*(uint32_t *)(pf_module_state+0x1510U)) + 0xa8 <= local_1c)) ||
         (((int)(local_24 - (*(uint32_t *)(pf_module_state+0x1514U))) < -0x15 ||
          (iVar30 = (int)(local_24 - (*(uint32_t *)(pf_module_state+0x1514U))) / 0x16, (*(uint32_t *)(pf_module_state+0x1aa4U)) <= iVar30)))) {
        (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\0';
      }
      else {
        iVar19 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + iVar30 * 4);
        (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\0';
        if (iVar19 == 2) {
          recovered_10017c00((uint)(*(uint32_t *)(pf_module_state+0x1520U)));
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        }
        else if ((int)(*(uint32_t *)(pf_module_state+0x1520U)) < 0 || iVar19 != 0x13) {
          switch((uintptr_t)(iVar19)) {
          case 3:
            iVar30 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + iVar30 * 4);
            if (-1 < iVar30) {
              pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar30 * 0xd9c + 1;
              pcVar20[0] = '\x01';
              pcVar20[1] = '\0';
              recovered_1000c1b0(iVar30);
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            }
            break;
          case 4:
            iVar27 = 0;
            uVar21 = 0;
            do {
              if ((pcVar20[iVar27] == '\x01') && (*(char **)(pcVar20 + iVar27 + 0x14) == pcVar15)) {
                recovered_1001c8a0(uVar21);
                pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
              }
              uVar21 = uVar21 + 1;
              iVar27 = iVar27 + 0xd9c;
            } while (uVar21 != 0x14);
            iVar30 = 0;
            local_14 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
            do {
              if ((local_14[iVar30 * 300] == '\x01') && ((local_14 + iVar30 * 300)[1] == '\0')) {
                iVar27 = 0;
                iVar19 = -0x11030;
                do {
                  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar19 + 0x11030] == '\x01') {
                    iVar27 = iVar27 + (uint)(*(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar19 + 0x11044) == iVar30);
                  }
                  iVar19 = iVar19 + 0xd9c;
                } while (iVar19 != 0);
                if (iVar27 == 0) {
                  memset(local_14 + iVar30 * 300,0,300);
                  local_14 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
                }
              }
              iVar30 = iVar30 + 1;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            } while (iVar30 != 0x12);
            break;
          default:
            goto LAB_10005eba;
          case 0x18:
            iVar27 = -0x11030;
            do {
              if ((pcVar20[iVar27 + 0x11030] == '\x01') &&
                 (*(int *)(pcVar20 + iVar27 + 0x11040) == 6)) {
                if (*(uint *)(pcVar20 + iVar27 + 0x11b4c) != 0) {
                  terror_ui_window_request_close(*(uint *)(pcVar20 + iVar27 + 0x11b4c),
                                     *(int *)(pcVar20 + iVar27 + 0x11088),
                                     *(int *)(pcVar20 + iVar27 + 0x1108c));
                  pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
                }
              }
              iVar27 = iVar27 + 0xd9c;
            } while (iVar27 != 0);
                    /* WARNING: Read-only address (ram,((uintptr_t)pf_module_state+0x14b1U)) is written */
            (*(uint8_t *)((uintptr_t)pf_module_state+0x14b1U)) = 1;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            break;
          case 0x19:
            recovered_100192f0();
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            break;
          case 0x1a:
            iVar30 = Ram00006800;
            if ((((iVar30 == 0x50414d57) && (iVar30 = Ram00006804, iVar30 != 0)) &&
                (uVar21 = Ram00006808, 0xb < uVar21)) &&
               ((uVar21 = Ram00006808, 0xf7 < uVar21 &&
                (pcVar7 = (code *)UINT_000068f4, pcVar7 != (code *)0x0)))) {
              (*pcVar7)();
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            }
          }
        }
        else if (*(int *)((*(uint8_t * *)(pf_module_state+0x1aa8U)) + (int)(*(uint32_t *)(pf_module_state+0x1520U)) * 300 + 4) == 5) {
          memset((*(uint8_t * *)(pf_module_state+0x1aa8U)) + (int)(*(uint32_t *)(pf_module_state+0x1520U)) * 300,0,300);
          recovered_10019130();
          iVar30 = 0;
          pcVar20 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
          do {
            if (pcVar20[iVar30 * 300] == '\x01') {
              if ((pcVar20 + iVar30 * 300)[1] == '\0') {
                iVar27 = 0;
                iVar19 = -0x11030;
                do {
                  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar19 + 0x11030] == '\x01') {
                    iVar27 = iVar27 + (uint)(*(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar19 + 0x11044) == iVar30);
                  }
                  iVar19 = iVar19 + 0xd9c;
                } while (iVar19 != 0);
                local_14 = pcVar20;
                if (iVar27 == 0) {
                  memset(pcVar20 + iVar30 * 300,0,300);
                  pcVar20 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
                }
              }
            }
            iVar30 = iVar30 + 1;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
          } while (iVar30 != 0x12);
        }
        else {
LAB_10005eba:
          if (((int)(*(uint32_t *)(pf_module_state+0x1518U)) < 0) || ((*(uint8_t * *)(pf_module_state+0x14a4U))[(int)(*(uint32_t *)(pf_module_state+0x1518U)) * 0xd9c] == '\0')) {
            switch((uintptr_t)(iVar19)) {
            case 1:
              pcVar24 = (char *)0x0;
code_r0x10008643:
              pcVar20 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
              pcVar15 = (*(uint32_t *)(pf_module_state+0x152cU));
LAB_1000757b:
              recovered_10018b50(pcVar20,(int)pcVar24,pcVar15);
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            default:
              if (iVar19 == 0x13) {
LAB_100084f6:
                recovered_10019fa0((int)(*(uint32_t *)(pf_module_state+0x152cU)));
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
              break;
            case 5:
code_r0x100086b8:
              if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1531U)) == '\x01') {
                recovered_10019840((*(uint32_t *)(pf_module_state+0x152cU)));
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
              break;
            case 0xb:
              pcVar13 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
LAB_100084e1:
              recovered_100193b0(pcVar13,0);
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0xe:
code_r0x10008716:
              recovered_1001b5a0("",0xc,(int)(*(uint32_t *)(pf_module_state+0x152cU)),(*(uint8_t *)((uintptr_t)pf_module_state+0x1530U)));
              recovered_1001b720();
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0xf:
code_r0x10008743:
              recovered_10019b20((int)(*(uint32_t *)(pf_module_state+0x152cU)));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x10:
code_r0x100086d5:
              recovered_10019dc0((int)(*(uint32_t *)(pf_module_state+0x152cU)));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x11:
code_r0x100086ec:
              recovered_10019e90((int)(*(uint32_t *)(pf_module_state+0x152cU)));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x12:
code_r0x100086fc:
              recovered_10004770(&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)),(int)(*(uint32_t *)(pf_module_state+0x152cU)));
              recovered_10019130();
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x17:
code_r0x10008753:
              if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1533U)) == '\x01') {
                recovered_10019a00((int)(*(uint32_t *)(pf_module_state+0x152cU)));
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
            }
          }
          else {
            local_20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
            pcVar13 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (int)(*(uint32_t *)(pf_module_state+0x1518U)) * 0xd9c;
            pcVar24 = (char *)0x0;
            if ((-1 < (int)(*(uint32_t *)(pf_module_state+0x151cU))) && ((*(uint32_t *)(pf_module_state+0x151cU)) < *(uint *)(pcVar13 + 0xaf0))) {
              pcVar24 = (char *)((*(uint32_t *)(pf_module_state+0x151cU)) * 0x1f8 + *(int *)(pcVar13 + 0xaec));
            }
            pcVar20 = (*(uint32_t *)(pf_module_state+0x1518U));
            pcVar15 = local_18;
            local_14 = pcVar24;
            switch((uintptr_t)(iVar19)) {
            case 0x14:
              if (*(int *)(pcVar13 + 0x10) == 0) {
                recovered_1000b4a0(pcVar13 + 0x78,*(int *)(pcVar13 + 0x25c));
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
              else {
code_r0x1000869d:
                local_18 = (char *)CONCAT31(PF_PART3(local_18, 1),pcVar24 != (char *)0x0);
LAB_100086a5:
                switch((uintptr_t)(iVar19)) {
                case 5:
                  goto code_r0x100086b8;
                case 6:
                  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1532U)) == '\x01') {
                    recovered_1000b4a0(&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)),(int)(*(uint32_t *)(pf_module_state+0x152cU)));
                    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                  }
                  break;
                default:
                  local_2c = (*(uint32_t *)(pf_module_state+0x1518U));
                  if (iVar19 == 0x13) goto LAB_100084f6;
                  if ((iVar19 == 7 & (byte)local_18) == 1) {
                    uVar35 = 0;
                  }
                  else {
                    if ((iVar19 == 8 & (byte)local_18) != 1) {
                      if (iVar19 == 9) {
                        recovered_1001a5b0((int)pcVar13);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      }
                      else if ((iVar19 == 10 & (byte)local_18) == 1) {
                        recovered_1001a8e0(1,(int)(*(uint32_t *)(pf_module_state+0x1518U)),&(*(uint8_t *)((uintptr_t)pf_module_state+0xf4dU)),"New name:",pcVar24);
                        pcVar15 = (*(uint8_t * *)(pf_module_state+0x14a4U));
                        pcVar20 = (*(uint32_t *)(pf_module_state+0x1474U));
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        if (-1 < (int)(*(uint32_t *)(pf_module_state+0x1474U))) {
                          local_18 = (*(uint8_t * *)(pf_module_state+0x14a4U));
                          iVar27 = (int)(*(uint32_t *)(pf_module_state+0x1474U)) * 0xd9c + 0x78;
                          cVar9 = local_14[0xf1];
                          if (cVar9 == '\0') {
                            uVar21 = 0;
                          }
                          else {
                            uVar29 = 0;
                            do {
                              uVar21 = uVar29 + 1;
                              pcVar15[uVar29 + iVar27] = cVar9;
                              if (0xef < uVar21) break;
                              cVar9 = local_14[uVar29 + 0xf2];
                              uVar29 = uVar21;
                            } while (cVar9 != '\0');
                          }
                          pcVar15[uVar21 + iVar27] = '\0';
                          iVar27 = *(int *)(local_14 + 0x1f0);
                          if (iVar27 < 0) {
                            if (local_20 == (char *)0x0) {
                              iVar27 = recovered_10004ab0();
                              local_18 = (*(uint8_t * *)(pf_module_state+0x14a4U));
                              pcVar20 = (*(uint32_t *)(pf_module_state+0x1474U));
                            }
                            else {
                              iVar27 = *(int *)(pcVar13 + 0x25c);
                            }
                          }
                          *(int *)(local_18 + (int)pcVar20 * 0xd9c + 0x25c) = iVar27;
                          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        }
                      }
                      else if (iVar19 == 0xc) {
                        recovered_1001a8e0(2,(int)(*(uint32_t *)(pf_module_state+0x1518U)),&(*(uint8_t *)((uintptr_t)pf_module_state+0xf5eU)),"Folder name:",
                                           "new-folder");
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      }
                      else if (iVar19 == 0xb) {
                        if ((byte)local_18 == 0) {
                          pcVar13 = pcVar13 + 0x78;
                          goto LAB_100084e1;
                        }
                        recovered_100193b0(pcVar24 + 0xf1,(int)pcVar24);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      }
                      else if ((iVar19 == 0xd & (byte)local_18) == 1) {
                        pcVar20 = *(char **)(pcVar24 + 0x1f0);
                        if ((int)pcVar20 < 0) {
                          pcVar20 = *(char **)(pcVar13 + 0x25c);
                        }
                        recovered_1001aa40(pcVar20,pcVar24 + 0xf1);
                        goto LAB_10008b3c;
                      }
                      break;
                    }
                    uVar35 = 1;
                  }
                  recovered_1001a490((int)pcVar13,(*(uint32_t *)(pf_module_state+0x151cU)),uVar35);
                  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                  break;
                case 0xe:
                  goto code_r0x10008716;
                case 0xf:
                  goto code_r0x10008743;
                case 0x10:
                  goto code_r0x100086d5;
                case 0x11:
                  goto code_r0x100086ec;
                case 0x12:
                  goto code_r0x100086fc;
                case 0x17:
                  goto code_r0x10008753;
                }
              }
              break;
            case 0x15:
LAB_10007e88:
              local_18 = pcVar15;
              recovered_1001c8a0((uint)pcVar20);
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x16:
              recovered_10019200(*(int *)(pcVar13 + 0x14));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            default:
              if ((iVar19 == 1) && ((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) != '\0')) goto code_r0x10008643;
              local_18 = (char *)CONCAT31(PF_PART3(local_18, 1),pcVar24 != (char *)0x0);
              if ((iVar19 != 1) || (pcVar24 == (char *)0x0)) {
                if (iVar19 == 1) {
                  if (pcVar24 == (char *)0x0 && *(int *)(pcVar13 + 0x10) == 0) {
                    recovered_1000b4a0(pcVar13 + 0x78,*(int *)(pcVar13 + 0x25c));
                    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                  }
                  break;
                }
                goto LAB_100086a5;
              }
              if (*(int *)(pcVar24 + 0x1ec) != 3) break;
              *(undefined4 *)(pcVar13 + 0x25c) = *(undefined4 *)(pcVar24 + 0x1f0);
              pcVar13[0x260] = '\0';
              pcVar13[0x78] = '\0';
              pcVar13[0xaf8] = '\0';
              pcVar13[0xaf9] = '\0';
              pcVar13[0xafa] = '\0';
              pcVar13[0xafb] = '\0';
LAB_10008b3c:
              recovered_1000b9e0((int)pcVar13);
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x1b:
              if (*(int *)(pcVar13 + 0x10) != 1) goto code_r0x1000869d;
              recovered_1001a020((int)pcVar13,*(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + iVar30 * 4));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              break;
            case 0x1c:
              if (*(int *)(pcVar13 + 0x10) != 6) goto code_r0x1000869d;
              terror_ui_window_menu_command(*(uint *)(pcVar13 + 0xb1c),(*(uint32_t *)(pf_module_state+0x1534U)),
                                 *(uint *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + iVar30 * 4));
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            }
          }
        }
      }
    }
    else if (local_24 < 0x18) {
      if (local_1c < 0x52) {
        memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
        (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\x01';
        (*(uint32_t *)(pf_module_state+0x1510U)) = 4;
        (*(uint32_t *)(pf_module_state+0x1514U)) = 0x18;
        (*(uint32_t *)(pf_module_state+0x1518U)) = (char *)0xffffffff;
        (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
        (*(uint32_t *)(pf_module_state+0x1520U)) = (char *)0xffffffff;
        (*(uint32_t *)(pf_module_state+0x1524U)) = -1;
        (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x18;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x74697551;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6e755420;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x617264;
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
            (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0x19;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x74737953;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x49206d65;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x726f666e;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x6974616d;
            *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17c0U)) + iVar27) = 0x6e6f;
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17c2U)))[iVar27] = 0;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0x1a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x74756853;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x776f4420;
              *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x6e;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            }
          }
        }
      }
      else if (local_1c - 0x56U < 0x26) {
        recovered_100172d0(1,0x56);
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      }
      else if (local_1c - 0x82U < 0x28) {
        recovered_100172d0(2,0x82);
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      }
      else if (local_1c - 0xb0U < 0x3c) {
        recovered_100172d0(3,0xb0);
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      }
    }
    else {
      uVar29 = recovered_10017a90(local_1c,local_24);
      uVar21 = (*(uint32_t *)(pf_module_state+0x6274U));
      pcVar20 = (*(uint32_t *)(pf_module_state+0x1aacU));
      local_38 = (*(uint32_t *)(pf_module_state+0x6274U));
      if ((int)uVar29 < 0) {
        if (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
          uVar21 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
          local_44 = (*(uint32_t *)(pf_module_state+0x1aacU));
          do {
            pcVar20 = *(char **)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar21 * 4 + -8);
            if ((*(uint8_t * *)(pf_module_state+0x14a4U))[(int)pcVar20 * 0xd9c] == '\x01') {
              local_14 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (int)pcVar20 * 0xd9c;
              if (local_14[1] == '\x01') {
                local_2d = local_14[2];
                local_20 = (char *)0x18;
                if (local_2d == 0) {
                  local_20 = *(char **)(local_14 + 100);
                }
                local_2c = *(char **)(local_14 + 0x58);
                if ((int)local_2c <= local_1c) {
                  local_34 = *(char **)(local_14 + 0x5c);
                  local_18 = pcVar20;
                  if ((((int)local_34 <= (int)local_24) &&
                      (local_1c < (int)(local_2c + *(int *)(local_14 + 0x60)))) &&
                     ((int)local_24 < (int)(local_34 + (int)local_20))) {
                    if (-1 < (int)pcVar20) {
                      local_40 = local_34 + 6;
                      pcVar15 = local_34 + 0x12;
                      local_20 = (char *)CONCAT31(PF_PART3(local_20, 1),(int)local_24 < (int)pcVar15);
                      if ((int)local_24 < (int)pcVar15 &&
                          (local_1c < (int)(local_2c + 0x15) &&
                          ((int)(local_2c + 9) <= local_1c && (int)local_40 <= (int)local_24))) {
                        pcVar15 = pcVar20;
                        goto LAB_10007e88;
                      }
                      local_20 = (char *)CONCAT31(PF_PART3(local_20, 1),(int)local_24 < (int)pcVar15);
                      if ((int)local_24 < (int)pcVar15 &&
                          (local_1c < (int)(local_2c + 0x27) &&
                          ((int)(local_2c + 0x1b) <= local_1c && (int)local_40 <= (int)local_24))) {
                        local_14[2] = local_2d ^ 1;
                        recovered_1000c1b0((int)pcVar20);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        goto LAB_10005f95;
                      }
                      if ((local_1c < (int)(local_2c + 0x39) &&
                          ((int)(local_2c + 0x2d) <= local_1c && (int)local_40 <= (int)local_24)) &&
                          (int)local_24 < (int)pcVar15) {
                        recovered_10017cd0((int)pcVar20);
                        recovered_1000c1b0((int)pcVar20);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        goto LAB_10005f95;
                      }
                      if ((local_1c < (int)(local_2c + 0x4b) && (int)local_24 < (int)pcVar15) &&
                          ((int)(local_2c + 0x3f) <= local_1c && (int)local_40 <= (int)local_24)) {
                        uVar21 = 0;
                        goto LAB_10008835;
                      }
                      recovered_1000c1b0((int)pcVar20);
                      iVar27 = 0;
                      if ((*local_14 == '\x01') && (local_14[2] == '\0')) {
                        iVar19 = 0;
                        iVar30 = 0;
                        if (local_14[3] == '\0') {
                          iVar30 = *(int *)(local_14 + 0x58) + -0x10 + *(int *)(local_14 + 0x60);
                          iVar19 = *(int *)(local_14 + 0x5c) + -0x10 + *(int *)(local_14 + 100);
                          iVar27 = 0xe;
                        }
                      }
                      else {
                        iVar19 = 0;
                        iVar30 = 0;
                      }
                      if (((iVar30 <= local_1c) && (iVar19 <= (int)local_24)) &&
                         ((local_1c < iVar30 + iVar27 && ((int)local_24 < iVar19 + iVar27)))) {
                        recovered_10017db0((int)local_18);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        goto LAB_10005f95;
                      }
                      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      if (((int)local_24 < *(int *)(local_14 + 0x5c) + 0x18) &&
                         (local_14[3] == '\0')) {
                        (*(uint32_t *)(pf_module_state+0x12dcU)) = local_18;
                        (*(uint32_t *)(pf_module_state+0x10b5d0U)) = local_1c - *(int *)(local_14 + 0x58);
                        (*(uint32_t *)(pf_module_state+0x10b5d4U)) = local_24 - *(int *)(local_14 + 0x5c);
                        (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
                        (*(uint32_t *)(pf_module_state+0x12e0U)) = 0xffffffff;
                        goto LAB_10005f95;
                      }
                      iVar30 = *(int *)(local_14 + 0x10);
                      if (iVar30 == 3) {
                        if (local_14[2] != '\0') goto LAB_10005f95;
                        uVar18 = recovered_10017e00((int)local_18,local_1c,local_24);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        if ((char)uVar18 != '\0') goto LAB_10005f95;
                        iVar30 = *(int *)(local_14 + 0x10);
                      }
                      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      if ((iVar30 != 0) || (local_14[2] != '\0')) goto LAB_10005f95;
                      iVar27 = recovered_10018580((int)local_14,local_1c,local_24);
                      if (-1 < iVar27) {
                        recovered_10017c90(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1ab0U)) + iVar27 * 0x124);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        goto LAB_10005f95;
                      }
                      uVar18 = recovered_10018610((int)local_18,local_1c,local_24);
                      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      if ((char)uVar18 != '\0') goto LAB_10005f95;
                      local_20 = (char *)recovered_10018900((int)local_14,local_1c,local_24);
                      if (local_20 == (char *)0xfffffffe) {
                        recovered_1000b9e0((int)local_14);
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        goto LAB_10005f95;
                      }
                      if (local_20 == (char *)0xffffffff) {
                        if (local_14[0x260] == '\x01') {
                          local_14[0x260] = '\0';
                          local_14[0x78] = '\0';
                        }
                        else if (local_14[0x78] == '\0') {
                          local_14[0x260] = '\x01';
                        }
                        else {
                          recovered_10018a80(local_14 + 0x78,local_14 + 0x78);
                        }
                      }
                      else {
                        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                        if (((int)local_20 < 0) || (*(char **)(local_14 + 0xaf0) <= local_20))
                        goto LAB_10005f95;
                        iVar27 = *(int *)(local_14 + 0xaec);
                        iVar30 = (int)local_20 * 0x1f8;
                        if (*(int *)(iVar27 + 0x1ec + iVar30) != 3) {
                          *(char **)(local_14 + 0xaf4) = local_20;
                          local_14[0xafc] = '\x01';
                          (*(uint32_t *)(pf_module_state+0x45acU)) = 1;
                          (*(uint32_t *)(pf_module_state+0x45b0U)) = local_18;
                          (*(uint32_t *)(pf_module_state+0x45b8U)) = local_1c;
                          (*(uint32_t *)(pf_module_state+0x45bcU)) = local_24;
                          cVar9 = *(char *)(iVar27 + 0xf1 + iVar30);
                          (*(uint32_t *)(pf_module_state+0x45b4U)) = local_20;
                          if (cVar9 != '\0') {
                            uVar21 = 0;
                            goto LAB_100091eb;
                          }
                          uVar29 = 0;
                          goto LAB_1000920a;
                        }
                        *(undefined4 *)(local_14 + 0x25c) = *(undefined4 *)(iVar27 + iVar30 + 0x1f0)
                        ;
                        local_14[0x260] = '\0';
                        local_14[0x78] = '\0';
                      }
                      local_14[0xaf8] = '\0';
                      local_14[0xaf9] = '\0';
                      local_14[0xafa] = '\0';
                      local_14[0xafb] = '\0';
                      recovered_1000b9e0((int)local_14);
                      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                      goto LAB_10005f95;
                    }
                    break;
                  }
                }
              }
            }
            uVar21 = uVar21 - 1;
          } while (1 < uVar21);
        }
        local_20 = (*(uint32_t *)(pf_module_state+0x12d4U));
        local_14 = (char *)((int)((*(uint32_t *)(pf_module_state+0x12d4U)) + -0x18) / 0x52);
        if ((int)local_14 < 2) {
          local_14 = (char *)0x1;
        }
        iVar30 = 0;
        iVar27 = 0x18;
        pcVar20 = "";
        do {
          if (*pcVar20 == '\x01') {
            iVar19 = (iVar30 % (int)local_14) * 0x52;
            if (((iVar19 + 0xc <= local_1c) &&
                (iVar12 = (iVar30 / (int)local_14) * 0x4e, iVar12 + 0x24 <= (int)local_24)) &&
               ((local_1c < iVar19 + 0x56 && ((int)local_24 < iVar12 + 0x66)))) {
              bVar8 = recovered_1000f540((int)pcVar20);
              pcVar15 = *(char **)(pcVar20 + 0x11c);
              pcVar20 = pcVar20 + 0x29;
              if (bVar8 != 0) {
                recovered_1000b4a0(pcVar20,(int)pcVar15);
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
                goto LAB_10005f95;
              }
              pcVar24 = (char *)0x0;
              goto LAB_1000757b;
            }
            iVar30 = iVar30 + 1;
          }
          pcVar20 = pcVar20 + 0x124;
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
        pcVar20 = (char *)0x8;
        if (0x5d < (int)(*(uint32_t *)(pf_module_state+0x12d4U))) {
          pcVar20 = (*(uint32_t *)(pf_module_state+0x12d4U)) + -0x56;
        }
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        if ((((local_24 < 0x66) && (0x23 < (int)local_24)) && ((int)pcVar20 <= local_1c)) &&
           (local_1c < (int)(pcVar20 + 0x4a))) {
          iVar27 = recovered_10004ab0();
          recovered_1000b4a0("",iVar27);
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        }
      }
      else {
        if (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
          local_14 = (*(uint32_t *)(pf_module_state+0x1aacU));
          uVar22 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
          do {
            pcVar15 = *(char **)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar22 * 4 + -8);
            iVar27 = (int)pcVar15 * 0xd9c;
            if (((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar27] == '\x01') &&
               (*(uint *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27 + 0x14) == uVar29)) {
              if (-1 < (int)pcVar15) {
                pcVar24 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27 + 1;
                pcVar24[0] = '\x01';
                pcVar24[1] = '\0';
                uVar29 = 0;
                pcVar24 = pcVar20;
                goto LAB_10005b47;
              }
              break;
            }
            uVar22 = uVar22 - 1;
          } while (1 < uVar22);
        }
        recovered_10017c00(uVar29);
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      }
    }
  }
  goto LAB_10005f95;
  while( true ) {
    cVar9 = pcVar20[uVar29 + iVar27 + 0x79];
    uVar29 = uVar22;
    if (cVar9 == '\0') break;
LAB_10008471:
    uVar22 = uVar29 + 1;
    acStack_32e[uVar29 + 0x1e2] = cVar9;
    if (0xef < uVar22) break;
  }
LAB_10008772:
  acStack_32e[uVar22 + 0x1e2] = '\0';
  if (((-1 < (int)uVar21) && (uVar21 < *(uint *)(pcVar15 + 0xaf0))) &&
     (iVar27 = *(int *)(pcVar15 + 0xaec), iVar27 != 0)) {
    iVar30 = uVar21 * 0x1f8;
    if ((*(int *)(iVar27 + iVar30 + 0x1ec) == 2) || ((*(byte *)(iVar27 + iVar30 + 0x1e8) & 2) != 0))
    {
      cVar9 = *(char *)(iVar27 + 0xf1 + iVar30);
      if (cVar9 == '\0') {
        uVar21 = 0;
      }
      else {
        uVar29 = 0;
        do {
          uVar21 = uVar29 + 1;
          acStack_32e[uVar29 + 0x1e2] = cVar9;
          if (0xef < uVar21) break;
          cVar9 = *(char *)(iVar30 + 0xf2 + iVar27 + uVar29);
          uVar29 = uVar21;
        } while (cVar9 != '\0');
      }
      acStack_32e[uVar21 + 0x1e2] = '\0';
    }
  }
  local_14 = pcVar15;
  recovered_1000ffc0((char *)&local_14c,"",(char *)&local_420);
  iVar27 = strcmp((char *)&local_420,"");
  if ((iVar27 != 0) && ((*(uint32_t *)(pf_module_state+0x47a4U)) == *(int *)(pcVar15 + 0x25c))) {
    recovered_1001b9e0((*(uint32_t *)(pf_module_state+0x47a4U)),"",(char *)&local_420);
    iVar27 = 0;
    pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
    do {
      if ((pcVar20[iVar27] == '\x01') && (*(int *)(pcVar20 + iVar27 + 0x10) == 0)) {
        recovered_1000b9e0((int)(pcVar20 + iVar27));
        pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
      }
      iVar27 = iVar27 + 0xd9c;
    } while (iVar27 != 0x11030);
  }
LAB_10005a3c:
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)),0,0x1fc);
  (*(uint32_t *)(pf_module_state+0x12dcU)) = (char *)0xffffffff;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
  puVar11 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12e0U));
LAB_10005f85:
  *puVar11 = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x147cU)) = -1;
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  goto LAB_10005f95;
  while (uVar21 = uVar21 + 1, (*(uint32_t *)(pf_module_state+0x6274U)) != uVar21) {
LAB_10008835:
    if (*(char **)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar21 * 4) == pcVar20) goto LAB_10008bba;
  }
  uVar21 = 0xffffffff;
LAB_10008bba:
  if (uVar21 == (*(uint32_t *)(pf_module_state+0x6274U)) - 1) {
    recovered_10017d50((int)pcVar20);
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  }
  else {
    recovered_1000c1b0((int)pcVar20);
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  }
  goto LAB_10005f95;
  while( true ) {
    cVar9 = *(char *)(iVar30 + 0xf2 + iVar27 + uVar21);
    uVar21 = uVar29;
    if (cVar9 == '\0') break;
LAB_100091eb:
    uVar29 = uVar21 + 1;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x45c0U)))[uVar21] = cVar9;
    if (0xef < uVar29) break;
  }
LAB_1000920a:
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x45c0U)))[uVar29] = 0;
  pcVar20 = "";
  if (*(int *)(local_14 + 0xaec) != 0) {
    pcVar20 = (char *)(*(int *)(local_14 + 0xaec) + iVar30);
  }
  cVar9 = *pcVar20;
  if (cVar9 == '\0') {
    uVar21 = 0;
  }
  else {
    uVar29 = 0;
    do {
      uVar21 = uVar29 + 1;
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x46b1U)))[uVar29] = cVar9;
      if (0xef < uVar21) break;
      cVar9 = pcVar20[uVar29 + 1];
      uVar29 = uVar21;
    } while (cVar9 != '\0');
  }
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x46b1U)))[uVar21] = 0;
  iVar27 = *(int *)(local_14 + 0xaec);
  iVar30 = iVar30 + iVar27;
  if (iVar27 == 0) {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x47a2U)) = 0;
LAB_10009296:
    (*(uint32_t *)(pf_module_state+0x47a4U)) = *(int *)(local_14 + 0x25c);
  }
  else {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x47a2U)) = 1;
    if (*(int *)(iVar30 + 0x1ec) != 2) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x47a2U)) = *(byte *)(iVar30 + 0x1e8) >> 1 & 1;
    }
    (*(uint32_t *)(pf_module_state+0x47a4U)) = *(int *)(iVar30 + 0x1f0);
    if ((*(uint32_t *)(pf_module_state+0x47a4U)) < 0) goto LAB_10009296;
  }
  if ((((*(uint32_t *)(pf_module_state+0x1480U)) == local_18) && ((*(uint32_t *)(pf_module_state+0x1484U)) == local_20)) &&
     ((uint)((*(uint32_t *)(pf_module_state+0x14a8U)) - (*(uint32_t *)(pf_module_state+0x10b5d8U))) < 0x1c)) {
    if ((iVar27 == 0) || (pcVar20 = *(char **)(iVar30 + 0x1f0), (int)pcVar20 < 0)) {
      pcVar20 = *(char **)(local_14 + 0x25c);
    }
    recovered_10018b50((char *)(iVar30 + 0xf1),iVar30,pcVar20);
  }
  (*(uint32_t *)(pf_module_state+0x1480U)) = local_18;
  (*(uint32_t *)(pf_module_state+0x1484U)) = local_20;
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  (*(uint32_t *)(pf_module_state+0x10b5d8U)) = (*(uint32_t *)(pf_module_state+0x14a8U));
  goto LAB_10005f95;
LAB_10006ae0:
  do {
    if (pcVar23[((uintptr_t)pf_module_state+0x1990U)] == '\x01') {
      local_14 = pcVar24;
      if (((((int)(local_18 + (int)pcVar13 * 0x5c) <= local_1c) && ((int)local_34 <= (int)local_24))
          && (local_2c = pcVar13, local_1c < (int)(pcVar15 + (int)pcVar13 * 0x5c + 0x76))) &&
         ((int)local_24 < (int)local_38)) {
        local_18 = pcVar23;
        memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
        (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\x01';
        (*(uint32_t *)(pf_module_state+0x1510U)) = local_1c;
        (*(uint32_t *)(pf_module_state+0x1514U)) = uVar29;
        (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
        (*(uint32_t *)(pf_module_state+0x1520U)) = (char *)0xffffffff;
        (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
        (*(uint32_t *)(pf_module_state+0x1518U)) = local_20;
        pcVar20 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ab1U)) + -(int)local_14;
        bVar8 = local_18[((uintptr_t)pf_module_state+0x1ab0U)];
        uVar18 = *(undefined4 *)(local_18 + ((uintptr_t)pf_module_state+0x1aacU));
        pcVar15 = local_20;
        (*(uint32_t *)(pf_module_state+0x1524U)) = iVar27;
        pcVar24 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ad9U)) + -(int)local_14;
        goto LAB_10006660;
      }
      pcVar13 = pcVar13 + 1;
    }
    iVar27 = iVar27 + 1;
    pcVar23 = pcVar23 + 0x124;
    pcVar24 = pcVar24 + -0x124;
  } while (iVar27 != 0xc);
  local_14 = (char *)recovered_10018900((int)pcVar20,local_1c,local_24);
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
  (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\x01';
  (*(uint32_t *)(pf_module_state+0x1510U)) = iVar30;
  (*(uint32_t *)(pf_module_state+0x1518U)) = (char *)0xffffffff;
  (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1520U)) = (char *)0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1524U)) = -1;
  (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1514U)) = uVar29;
  if (((int)local_14 < 0) || (*(char **)(pcVar20 + 0xaf0) <= local_14)) {
    local_18 = pcVar20 + 0x78;
    cVar9 = pcVar20[0x78];
    if (cVar9 == '\0') {
      pcVar15 = (char *)0x0;
    }
    else {
      pcVar24 = local_18;
      pcVar13 = (char *)0x0;
      do {
        pcVar15 = pcVar24;
        if (cVar9 != '/') {
          pcVar15 = pcVar13;
        }
        cVar9 = pcVar24[1];
        pcVar24 = pcVar24 + 1;
        pcVar13 = pcVar15;
      } while (cVar9 != '\0');
    }
    pcVar24 = local_18;
    if (pcVar15 != (char *)0x0) {
      pcVar24 = pcVar15 + 1;
    }
    recovered_1001c160(local_20,local_14,local_18,pcVar24,*(undefined4 *)(pcVar20 + 0x25c),'\x01');
    recovered_1001bb00();
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
    if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) goto LAB_10005fa8;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 9;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x74736150;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x65;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    if (0x10 < (*(uint32_t *)(pf_module_state+0x1aa4U))) goto LAB_10005fa8;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0xc;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x61657243;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x46206574;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x65646c6f;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x72;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    if (0x10 < (*(uint32_t *)(pf_module_state+0x1aa4U))) goto LAB_10005fa8;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0xb;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6f666e49;
    puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27;
LAB_1000861a:
    *puVar17 = 0;
    goto LAB_10006abc;
  }
  iVar27 = *(int *)(pcVar20 + 0xaec);
  pcVar15 = (char *)(iVar27 + (int)local_14 * 0x1f8);
  pcVar24 = (char *)(iVar27 + 0xf1 + (int)local_14 * 0x1f8);
  if (iVar27 == 0) {
    iVar27 = *(int *)(pcVar20 + 0x25c);
    bVar8 = 0;
  }
  else {
    iVar27 = *(int *)(pcVar15 + 0x1f0);
    if (iVar27 < 0) {
      iVar27 = *(int *)(pcVar20 + 0x25c);
    }
    bVar8 = 1;
    if (*(int *)(pcVar15 + 0x1ec) != 2) {
      bVar8 = (pcVar15[0x1e8] & 2U) >> 1;
    }
  }
  recovered_1001c160(local_20,local_14,pcVar24,pcVar15,iVar27,bVar8);
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 1;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6e65704f;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar27] = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
  cVar9 = *pcVar24;
  if (cVar9 == '\0') {
    pcVar20 = (char *)0x0;
  }
  else {
    pcVar15 = pcVar24;
    pcVar13 = (char *)0x0;
    do {
      pcVar20 = pcVar15;
      if (cVar9 != '/') {
        pcVar20 = pcVar13;
      }
      cVar9 = pcVar15[1];
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar20;
    } while (cVar9 != '\0');
  }
  pcVar15 = pcVar24;
  if (pcVar20 != (char *)0x0) {
    pcVar15 = pcVar20 + 1;
  }
  cVar9 = *pcVar15;
  if (cVar9 == '\0') {
    pcVar20 = (char *)0x0;
  }
  else {
    pcVar13 = (char *)0x0;
    do {
      pcVar20 = pcVar15;
      if (cVar9 != '.') {
        pcVar20 = pcVar13;
      }
      cVar9 = pcVar15[1];
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar20;
    } while (cVar9 != '\0');
  }
  pcVar15 = "";
  if (pcVar20 != (char *)0x0) {
    pcVar15 = pcVar20;
  }
  iVar27 = 0;
  do {
    bVar8 = pcVar15[iVar27];
    bVar26 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar27];
    if ((bVar8 == 0) || (bVar26 == 0)) {
      if (bVar8 == bVar26) {
        if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) goto LAB_100089ef;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 6;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x65746e45;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x70412072;
        *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x70;
        (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
      }
      break;
    }
    if ((byte)(bVar8 + 0xbf) < 0x1a) {
      bVar8 = bVar8 | 0x20;
    }
    if ((byte)(bVar26 + 0xbf) < 0x1a) {
      bVar26 = bVar26 | 0x20;
    }
    iVar27 = iVar27 + 1;
  } while (bVar8 == bVar26);
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xb;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6f666e49;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar27] = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
LAB_100089ef:
  local_14 = pcVar24;
  recovered_1001bb00();
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 7;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x79706f43;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar27] = 0;
    iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
      (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 8;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a) = 0x747543;
      iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
      if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
        (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 10;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x616e6552;
        *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x656d;
        (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b6U)))[iVar27] = 0;
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0xd;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x656c6544;
          *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6574;
          (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b6U)))[iVar27] = 0;
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
          iVar30 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar30;
          bVar10 = recovered_1000fd50(pcVar24);
          if (iVar27 < 0x11 && bVar10) {
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27 * 4) = 5;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x20746553;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6b636142;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x756f7267;
            *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x646e;
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17beU)))[iVar27] = 0;
            iVar30 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar30;
          }
          uVar21 = recovered_1001b1a0(local_14);
          iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
          if ((iVar30 < 0x12 & (byte)uVar21) == 1) {
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + iVar30 * 4) = 0x17;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x20746553;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6b736544;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x20706f74;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x746e6f46;
            puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17c0U)) + iVar27;
            goto LAB_1000861a;
          }
          goto LAB_10005fa8;
        }
      }
    }
  }
  (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar27;
  recovered_1000fd50(pcVar24);
  recovered_1001b1a0(pcVar24);
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  goto LAB_10005fa8;
LAB_10006591:
  uVar21 = uVar21 + 1;
  pcVar15 = pcVar15 + 0x124;
  if (uVar21 == 0x18) goto LAB_10005fa8;
  goto LAB_100065a1;
  while( true ) {
    uVar29 = uVar29 + 1;
    pcVar24 = pcVar13;
    if (uVar21 == uVar29) break;
LAB_10005b47:
    pcVar13 = pcVar24 + 4;
    if (*(char **)pcVar24 == pcVar15) {
      uVar21 = uVar21 - 1;
      iVar27 = uVar21 - uVar29;
      if (iVar27 != 0 && (int)uVar29 <= (int)uVar21) {
        do {
          *(undefined4 *)(pcVar13 + -4) = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
      }
      goto LAB_100075bc;
    }
  }
  if ((int)uVar21 < 0x14) {
    (*(uint32_t *)(pf_module_state+0x6274U)) = uVar21 + 1;
LAB_100075bc:
    *(char **)(pcVar20 + uVar21 * 4) = pcVar15;
  }
  (*(uint32_t *)(pf_module_state+0x1474U)) = pcVar15;
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
LAB_10005f95:
  (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar27;
  uVar21 = local_24;
  iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
  if (local_4c != 0) {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b59dU)) == '\0') {
      if (((local_24 < 0x18) && ((*(uint32_t *)(pf_module_state+0x10b5e8U)) <= local_1c)) &&
         ((local_1c < (*(uint32_t *)(pf_module_state+0x10b5e8U)) + (*(uint32_t *)(pf_module_state+0x10b5ecU)) && (((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U)) & 1) != 0)))) {
        memset(&local_14c,0,0x18);
        iVar27 = Ram00006800;
        if (((((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
             (uVar21 = Ram00006808, 0xb < uVar21)) &&
            ((uVar21 = Ram00006808, 0x16b < uVar21 &&
             (pcVar7 = (code *)UINT_00006968, pcVar7 != (code *)0x0)))) &&
           (uVar21 = (*pcVar7)(&local_14c), uVar21 != 0)) {
          lVar34 = CONCAT44(local_140,local_144);
          memset(&local_420,0,0x1c);
          lVar34 = (longlong)(*(uint32_t *)(pf_module_state+0x617cU)) * 0x3c + lVar34;
          iVar30 = (int)((ulonglong)lVar34 >> 0x20);
          iVar27 = 0;
          if (-1 < lVar34) {
            iVar27 = (int)lVar34;
          }
          if (iVar30 == 0 || -1 >= lVar34) {
            iVar30 = 0;
          }
          recovered_1001cf90(iVar27,iVar30,&local_420);
          local_14c = local_14c & 0xffffff00;
          if (local_420 == 0) {
            acStack_32e[0xf1] = '0';
            uVar21 = 1;
LAB_10007f1f:
            do {
              acStack_32e[uVar21 + 0xf1] = '0';
              uVar21 = uVar21 + 1;
            } while (uVar21 != 4);
            uVar21 = 4;
          }
          else {
            uVar29 = local_420;
            uVar21 = 0;
            do {
              uVar22 = uVar21;
              acStack_32e[uVar22 + 0xf1] = (char)uVar29 + (char)(uVar29 / 10) * -10 | 0x30;
              uVar21 = uVar22 + 1;
              if (10 < uVar22) break;
              bVar10 = 9 < uVar29;
              uVar29 = uVar29 / 10;
            } while (bVar10);
            if (uVar22 < 3) goto LAB_10007f1f;
          }
          do {
            cVar9 = acStack_32e[uVar21 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
          uVar14 = strlen((char *)&local_14c);
          if (uVar14 < 0x20) {
            iVar27 = 0x1f;
            if (uVar14 != 0x1f) {
              iVar27 = uVar14 + 1;
              acStack_32e[uVar14 + 0x1e2] = '-';
            }
            acStack_32e[iVar27 + 0x1e2] = '\0';
          }
          if (local_41c == 0) {
            acStack_32e[0xf1] = '0';
LAB_1000800d:
            acStack_32e[0xf2] = 0x30;
            uVar29 = 2;
          }
          else {
            uVar21 = 0;
            do {
              acStack_32e[uVar21 + 0xf1] = (char)local_41c + (char)(local_41c / 10) * -10 | 0x30;
              uVar29 = uVar21 + 1;
              if (10 < uVar21) break;
              bVar10 = 9 < local_41c;
              local_41c = local_41c / 10;
              uVar21 = uVar29;
            } while (bVar10);
            if (uVar29 == 1) goto LAB_1000800d;
          }
          do {
            cVar9 = acStack_32e[uVar29 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar14 = strlen((char *)&local_14c);
          if (uVar14 < 0x20) {
            iVar27 = 0x1f;
            if (uVar14 != 0x1f) {
              iVar27 = uVar14 + 1;
              acStack_32e[uVar14 + 0x1e2] = '-';
            }
            acStack_32e[iVar27 + 0x1e2] = '\0';
          }
          if (local_418 == 0) {
            acStack_32e[0xf1] = '0';
LAB_100080fd:
            acStack_32e[0xf2] = 0x30;
            uVar29 = 2;
          }
          else {
            uVar21 = 0;
            do {
              acStack_32e[uVar21 + 0xf1] = (char)local_418 + (char)(local_418 / 10) * -10 | 0x30;
              uVar29 = uVar21 + 1;
              if (10 < uVar21) break;
              bVar10 = 9 < local_418;
              local_418 = local_418 / 10;
              uVar21 = uVar29;
            } while (bVar10);
            if (uVar29 == 1) goto LAB_100080fd;
          }
          do {
            cVar9 = acStack_32e[uVar29 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar14 = strlen((char *)&local_14c);
          if (uVar14 < 0x20) {
            iVar27 = 0x1f;
            if (uVar14 != 0x1f) {
              iVar27 = uVar14 + 1;
              acStack_32e[uVar14 + 0x1e2] = ' ';
            }
            acStack_32e[iVar27 + 0x1e2] = '\0';
          }
          if (local_414 == 0) {
            acStack_32e[0xf1] = '0';
LAB_100081ed:
            acStack_32e[0xf2] = 0x30;
            uVar29 = 2;
          }
          else {
            uVar21 = 0;
            do {
              acStack_32e[uVar21 + 0xf1] = (char)local_414 + (char)(local_414 / 10) * -10 | 0x30;
              uVar29 = uVar21 + 1;
              if (10 < uVar21) break;
              bVar10 = 9 < local_414;
              local_414 = local_414 / 10;
              uVar21 = uVar29;
            } while (bVar10);
            if (uVar29 == 1) goto LAB_100081ed;
          }
          do {
            cVar9 = acStack_32e[uVar29 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar14 = strlen((char *)&local_14c);
          if (uVar14 < 0x20) {
            iVar27 = 0x1f;
            if (uVar14 != 0x1f) {
              iVar27 = uVar14 + 1;
              acStack_32e[uVar14 + 0x1e2] = ':';
            }
            acStack_32e[iVar27 + 0x1e2] = '\0';
          }
          if (local_410 == 0) {
            acStack_32e[0xf1] = '0';
LAB_100082dd:
            acStack_32e[0xf2] = 0x30;
            uVar29 = 2;
          }
          else {
            uVar21 = 0;
            do {
              acStack_32e[uVar21 + 0xf1] = (char)local_410 + (char)(local_410 / 10) * -10 | 0x30;
              uVar29 = uVar21 + 1;
              if (10 < uVar21) break;
              bVar10 = 9 < local_410;
              local_410 = local_410 / 10;
              uVar21 = uVar29;
            } while (bVar10);
            if (uVar29 == 1) goto LAB_100082dd;
          }
          do {
            cVar9 = acStack_32e[uVar29 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar14 = strlen((char *)&local_14c);
          if (uVar14 < 0x20) {
            iVar27 = 0x1f;
            if (uVar14 != 0x1f) {
              iVar27 = uVar14 + 1;
              acStack_32e[uVar14 + 0x1e2] = ':';
            }
            acStack_32e[iVar27 + 0x1e2] = '\0';
          }
          if (local_40c == 0) {
            acStack_32e[0xf1] = '0';
LAB_100083cd:
            acStack_32e[0xf2] = 0x30;
            uVar29 = 2;
          }
          else {
            uVar21 = 0;
            do {
              acStack_32e[uVar21 + 0xf1] = (char)local_40c + (char)(local_40c / 10) * -10 | 0x30;
              uVar29 = uVar21 + 1;
              if (10 < uVar21) break;
              bVar10 = 9 < local_40c;
              local_40c = local_40c / 10;
              uVar21 = uVar29;
            } while (bVar10);
            if (uVar29 == 1) goto LAB_100083cd;
          }
          do {
            cVar9 = acStack_32e[uVar29 + 0xf0];
            acStack_32e[1] = 0;
            uVar14 = strlen((char *)&local_14c);
            if (uVar14 < 0x20) {
              if (uVar14 != 0x1f && cVar9 != '\0') {
                pcVar20 = acStack_32e;
                uVar16 = uVar14;
                do {
                  pcVar20 = pcVar20 + 1;
                  acStack_32e[uVar16 + 0x1e2] = cVar9;
                  uVar14 = uVar16 + 1;
                  if (0x1d < uVar16) break;
                  cVar9 = *pcVar20;
                  uVar16 = uVar14;
                } while (cVar9 != '\0');
              }
              acStack_32e[uVar14 + 0x1e2] = '\0';
            }
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
        else {
          local_14c = 0x30373931;
          local_148 = 0x2d31302d;
          local_144 = 0x30203130;
          local_140 = 0x30303a30;
          local_13c = 0x30303a;
        }
        recovered_1001a8e0(4,-1,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1095U)),"YYYY-MM-DD HH:MM:SS",(char *)&local_14c);
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      }
      else {
        pcVar20 = (char *)recovered_10017a90(local_1c,local_24);
        iVar30 = local_1c;
        uVar29 = local_24;
        iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        if ((int)pcVar20 < 0) {
          if (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
            local_14 = (*(uint32_t *)(pf_module_state+0x1aacU));
            uVar22 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
            do {
              local_20 = *(char **)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar22 * 4 + -8);
              if ((*(uint8_t * *)(pf_module_state+0x14a4U))[(int)local_20 * 0xd9c] == '\x01') {
                pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (int)local_20 * 0xd9c;
                if (pcVar20[1] == '\x01') {
                  iVar19 = 0x18;
                  if (pcVar20[2] == '\0') {
                    iVar19 = *(int *)(pcVar20 + 100);
                  }
                  pcVar15 = *(char **)(pcVar20 + 0x58);
                  local_18 = pcVar15;
                  if ((int)pcVar15 <= local_1c) {
                    iVar12 = *(int *)(pcVar20 + 0x5c);
                    if (((iVar12 <= (int)uVar21) &&
                        (uVar21 = local_24, local_1c < (int)(pcVar15 + *(int *)(pcVar20 + 0x60))))
                       && ((int)local_24 < iVar19 + iVar12)) {
                      if (-1 < (int)local_20) {
                        if (*(int *)(pcVar20 + 0x10) != 0) goto LAB_10005fa8;
                        local_34 = (char *)(iVar12 + 0x22);
                        local_38 = iVar12 + 0x3c;
                        local_18 = pcVar15 + 0x22;
                        pcVar23 = (char *)0x120;
                        pcVar24 = (char *)0x0;
                        iVar27 = 0;
                        pcVar13 = (char *)0x0;
                        goto LAB_10006ae0;
                      }
                      break;
                    }
                  }
                }
              }
              uVar22 = uVar22 - 1;
            } while (1 < uVar22);
          }
          local_14 = (char *)((int)((*(uint32_t *)(pf_module_state+0x12d4U)) + -0x18) / 0x52);
          if ((int)local_14 < 2) {
            local_14 = (char *)0x1;
          }
          uVar21 = 0;
          pcVar15 = "";
          iVar30 = 0;
LAB_100065a1:
          if (*pcVar15 != '\x01') goto LAB_10006591;
          iVar19 = (iVar30 % (int)local_14) * 0x52;
          if ((((local_1c < iVar19 + 0xc) ||
               (iVar12 = (iVar30 / (int)local_14) * 0x4e, (int)local_24 < iVar12 + 0x24)) ||
              (iVar19 + 0x56 <= local_1c)) || (iVar12 + 0x66 <= (int)local_24)) {
            iVar30 = iVar30 + 1;
            goto LAB_10006591;
          }
          if (uVar21 < 0x18) {
            memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
            (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\x01';
            (*(uint32_t *)(pf_module_state+0x1510U)) = local_1c;
            (*(uint32_t *)(pf_module_state+0x1514U)) = local_24;
            (*(uint32_t *)(pf_module_state+0x1518U)) = (char *)0xffffffff;
            (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
            (*(uint32_t *)(pf_module_state+0x1520U)) = (char *)0xffffffff;
            (*(uint32_t *)(pf_module_state+0x1524U)) = -1;
            local_14 = pcVar15 + 0x29;
            pcVar20 = pcVar15 + 1;
            uVar18 = *(undefined4 *)(pcVar15 + 0x11c);
            (*(uint32_t *)(pf_module_state+0x1528U)) = uVar21;
            bVar8 = recovered_1000f540((int)pcVar15);
            pcVar15 = (char *)0xffffffff;
            pcVar24 = local_14;
LAB_10006660:
            recovered_1001c160(pcVar15,0xfffffc18,pcVar24,pcVar20,uVar18,bVar8);
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 1;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6e65704f;
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar27] = 0;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
                (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0xb;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6f666e49;
                (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar27] = 0;
                (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
            }
            (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar27;
            recovered_1001bb00();
            if (((*(uint8_t *)((uintptr_t)pf_module_state+0x1531U)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12)) {
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 5;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x20746553;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6b636142;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x756f7267;
              *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x646e;
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17beU)))[iVar27] = 0;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            }
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            if (((*(uint8_t *)((uintptr_t)pf_module_state+0x1533U)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12)) {
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x17;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x20746553;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6b736544;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x20706f74;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x746e6f46;
              goto LAB_10006ab5;
            }
          }
          goto LAB_10005fa8;
        }
        if (pcVar20 < (char *)0x12) {
          pcVar15 = (char *)((int)pcVar20 * 300);
          if ((*(uint8_t * *)(pf_module_state+0x1aa8U))[(int)pcVar15] == '\x01') {
            memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
            (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = '\x01';
            (*(uint32_t *)(pf_module_state+0x1510U)) = local_1c;
            (*(uint32_t *)(pf_module_state+0x1514U)) = local_24;
            (*(uint32_t *)(pf_module_state+0x1518U)) = (char *)0xffffffff;
            (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
            (*(uint32_t *)(pf_module_state+0x1524U)) = -1;
            (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
            (*(uint32_t *)(pf_module_state+0x1520U)) = pcVar20;
            if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 2;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x2077654e;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x646e6957;
              *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x776f;
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17baU)))[iVar27] = 0;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            }
            pcVar13 = (*(uint8_t * *)(pf_module_state+0x14a4U));
            pcVar24 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x19;
            iVar27 = 0;
            local_20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
            iVar30 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            do {
              iVar19 = iVar27 * 0xd9c;
              if (((pcVar13[iVar19] == '\x01') && (*(char **)(pcVar13 + iVar19 + 0x14) == pcVar20))
                 && (iVar30 < 0x12)) {
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + iVar30 * 4) = 3;
                *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = iVar27;
                iVar30 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
                cVar9 = pcVar13[iVar19 + 0x18];
                if (cVar9 == '\0') {
                  uVar21 = 0;
                }
                else {
                  uVar29 = 0;
                  do {
                    uVar21 = uVar29 + 1;
                    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar29 + iVar30] = cVar9;
                    if (0x28 < uVar21) break;
                    cVar9 = pcVar24[uVar29];
                    uVar29 = uVar21;
                  } while (cVar9 != '\0');
                }
                (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar21 + iVar30] = 0;
                iVar30 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
                (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar30;
              }
              iVar27 = iVar27 + 1;
              pcVar24 = pcVar24 + 0xd9c;
            } while (iVar27 != 0x14);
            iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            local_18 = pcVar15;
            local_14 = pcVar20;
            if (iVar30 < 0x12) {
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + iVar30 * 4) = 4;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6c6c694b;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x6e695720;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x73776f64;
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)))[iVar27] = 0;
              iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11 && *(int *)((*(uint8_t * *)(pf_module_state+0x1aa8U)) + 4 + (int)pcVar15) == 5) {
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
                (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar27) = 0x13;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar27) = 0x6f6d6552;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar27) = 0x66206576;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar27) = 0x206d6f72;
                *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar27) = 0x6b636f44;
LAB_10006ab5:
                (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17c0U)))[iVar27] = 0;
LAB_10006abc:
                (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
                iVar27 = (*(uint32_t *)(pf_module_state+0x1aa4U));
              }
            }
          }
        }
      }
    }
  }
LAB_10005fa8:
  (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar27;
  pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U));
  iVar27 = (*(uint32_t *)(pf_module_state+0x12e4U));
  bVar8 = (byte)local_28;
  if ((-1 < (*(uint32_t *)(pf_module_state+0x12e4U)) & bVar8) == 1) {
    if ((((*(uint8_t * *)(pf_module_state+0x14a4U)) != (char *)0x0) &&
        (pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (*(uint32_t *)(pf_module_state+0x12e4U)) * 0xd9c, *pcVar20 == '\x01')) &&
       ((pcVar20[2] == '\0' && (pcVar20[3] == '\0')))) {
      uVar21 = *(uint *)(pcVar20 + 0x10);
      if (uVar21 < 7) {
        (*(uint32_t *)(pf_module_state+0x10b594U)) = *(char **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x824U)) + uVar21 * 4);
        (*(uint32_t *)(pf_module_state+0x10b598U)) = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x840U)) + uVar21 * 4);
      }
      else {
        (*(uint32_t *)(pf_module_state+0x10b598U)) = 0x6e;
        (*(uint32_t *)(pf_module_state+0x10b594U)) = (char *)0xb4;
      }
      local_14 = *(char **)(pcVar20 + 0x5c);
      iVar27 = -4;
      if (uVar21 != 6) {
        iVar27 = -0x42;
      }
      iVar27 = (iVar27 + (*(uint32_t *)(pf_module_state+0x12d8U))) - (int)local_14;
      pcVar15 = (*(uint32_t *)(pf_module_state+0x12d4U)) + (-4 - *(int *)(pcVar20 + 0x58));
      if ((int)((*(uint32_t *)(pf_module_state+0x12d4U)) + (-4 - *(int *)(pcVar20 + 0x58))) <= (int)(*(uint32_t *)(pf_module_state+0x10b594U))) {
        pcVar15 = (*(uint32_t *)(pf_module_state+0x10b594U));
      }
      if (iVar27 <= (*(uint32_t *)(pf_module_state+0x10b598U))) {
        iVar27 = (*(uint32_t *)(pf_module_state+0x10b598U));
      }
      pcVar24 = (char *)((local_1c - *(int *)(pcVar20 + 0x58)) + 1);
      pcVar20 = pcVar24;
      if ((int)pcVar15 <= (int)pcVar24) {
        pcVar20 = pcVar15;
      }
      if ((int)(*(uint32_t *)(pf_module_state+0x10b594U)) <= (int)pcVar24) {
        (*(uint32_t *)(pf_module_state+0x10b594U)) = pcVar20;
      }
      iVar19 = (local_24 - (int)local_14) + 1;
      iVar30 = iVar19;
      if (iVar27 <= iVar19) {
        iVar30 = iVar27;
      }
      if ((*(uint32_t *)(pf_module_state+0x10b598U)) <= iVar19) {
        (*(uint32_t *)(pf_module_state+0x10b598U)) = iVar30;
      }
    }
  }
  else {
    if ((-1 < (int)(*(uint32_t *)(pf_module_state+0x12dcU)) & bVar8) == 1) {
      iVar30 = (int)(*(uint32_t *)(pf_module_state+0x12dcU)) * 0xd9c;
      iVar19 = -0x1c;
      if (*(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar30 + 0x10) != 6) {
        iVar19 = -0x5a;
      }
      pcVar15 = (char *)(local_1c - (*(uint32_t *)(pf_module_state+0x10b5d0U)));
      local_14 = pcVar15;
      if ((int)((*(uint32_t *)(pf_module_state+0x12d4U)) + (-4 - *(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar30 + 0x60))) <= (int)pcVar15) {
        local_14 = (*(uint32_t *)(pf_module_state+0x12d4U)) + (-4 - *(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar30 + 0x60));
      }
      iVar19 = iVar19 + (*(uint32_t *)(pf_module_state+0x12d8U));
      pcVar24 = (char *)0x4;
      if (3 < (int)pcVar15) {
        pcVar24 = local_14;
      }
      *(char **)((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar30 + 0x58) = pcVar24;
      iVar25 = local_24 - (*(uint32_t *)(pf_module_state+0x10b5d4U));
      iVar12 = iVar25;
      if (iVar19 <= iVar25) {
        iVar12 = iVar19;
      }
      iVar19 = 0x1a;
      if (0x19 < iVar25) {
        iVar19 = iVar12;
      }
      *(int *)(pcVar20 + iVar30 + 0x5c) = iVar19;
    }
    bVar8 = iVar27 < 0 & bVar8;
    if (((-1 < (*(uint32_t *)(pf_module_state+0x147cU)) & bVar8) == 1) && ((*(uint8_t * *)(pf_module_state+0x14a4U))[(*(uint32_t *)(pf_module_state+0x147cU)) * 0xd9c] == '\x01')) {
      pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (*(uint32_t *)(pf_module_state+0x147cU)) * 0xd9c;
      if (*(int *)(pcVar20 + 0x10) == 0) {
        iVar27 = *(int *)(pcVar20 + 100);
        local_14 = (char *)0x12;
        if (0x15 < iVar27 + -0x84) {
          local_14 = (char *)(iVar27 + -0x88);
        }
        local_2c = (char *)(iVar27 + -0x6a);
        local_18 = *(char **)(pcVar20 + 0xaf0);
        iVar30 = (int)((ulonglong)((longlong)(int)local_2c * -0x22983759) >> 0x20) + -0x6a + iVar27;
        iVar19 = (int)((ulonglong)((longlong)(*(int *)(pcVar20 + 0x60) + -0x26) * -0x2df2df2d) >>
                      0x20) + -0x26 + *(int *)(pcVar20 + 0x60);
        iVar19 = (iVar19 >> 6) - (iVar19 >> 0x1f);
        if (iVar19 < 2) {
          iVar19 = 1;
        }
        iVar30 = (iVar30 >> 6) - (iVar30 >> 0x1f);
        iVar27 = ((int)((ulonglong)((longlong)(int)local_2c * 0x22983759) >> 0x20) - iVar27) + 0x6a;
        iVar27 = (iVar27 >> 6) - (iVar27 >> 0x1f);
        local_20 = local_18 + 2;
        if ((int)local_2c < 0x4a) {
          iVar30 = 1;
          iVar27 = -1;
        }
        pcVar15 = local_18 + iVar27 * iVar19 + 2;
        pcVar24 = local_14;
        if (((-2 < (int)local_18) && (iVar19 * iVar30 < (int)local_20)) && (0 < (int)pcVar15)) {
          pcVar24 = (char *)((iVar19 * iVar30 * (int)local_14) / (int)local_20);
          if ((int)pcVar24 < 0x13) {
            pcVar24 = (char *)0x12;
          }
          if ((int)local_14 <= (int)pcVar24) {
            pcVar24 = local_14;
          }
        }
        if ((0 < (int)pcVar15) && (0 < (int)local_14 - (int)pcVar24)) {
          pcVar13 = (char *)((int)((local_24 - (*(uint32_t *)(pf_module_state+0x10b5e0U))) * (int)pcVar15) /
                             ((int)local_14 - (int)pcVar24) + (*(uint32_t *)(pf_module_state+0x10b5e4U)));
          pcVar24 = pcVar13;
          if ((int)pcVar13 < 1) {
            pcVar24 = (char *)0x0;
          }
          if ((int)pcVar13 <= (int)pcVar15) {
            pcVar15 = pcVar24;
          }
          *(char **)(pcVar20 + 0xaf8) = pcVar15;
          goto LAB_100061f4;
        }
LAB_100069dc:
        pcVar20[0xaf8] = '\0';
        pcVar20[0xaf9] = '\0';
        pcVar20[0xafa] = '\0';
        pcVar20[0xafb] = '\0';
      }
      else {
        if ((*(int *)(pcVar20 + 0x10) != 3) || (*(int *)(pcVar20 + 0xb00) != 1)) goto LAB_100061e9;
        iVar30 = *(int *)(pcVar20 + 0x5c);
        iVar27 = iVar30 + -0x92 + *(int *)(pcVar20 + 100);
        if (iVar27 <= iVar30 + 0x114) {
          iVar27 = iVar30 + 0x114;
        }
        iVar27 = iVar27 - iVar30;
        uVar21 = (iVar27 + -0x102) / 0x12;
        if ((int)uVar21 < 2) {
          uVar21 = 1;
        }
        iVar30 = -0x19;
        uVar29 = 1;
        if (0x25 < iVar27 + -0xee) {
          iVar30 = iVar27 + -0x12d;
          uVar29 = uVar21;
        }
        iVar27 = 0x12;
        if (0x13 < iVar30) {
          iVar27 = iVar30 + -2;
        }
        recovered_100163f0(&local_14c,(int)pcVar20);
        uVar21 = (*(uint32_t *)(pf_module_state+0x627cU));
        uVar22 = 0;
        if (uVar29 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
          uVar22 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar29;
        }
        if (((int)uVar22 < 1) || (iVar27 - local_140 < 1)) goto LAB_100069dc;
        uVar29 = (int)((local_24 - (*(uint32_t *)(pf_module_state+0x10b5e0U))) * uVar22) / (iVar27 - local_140) + (*(uint32_t *)(pf_module_state+0x10b5e4U));
        *(uint *)(pcVar20 + 0xaf8) = uVar29;
        if (uVar21 == 0) {
          pcVar20[0xaf4] = '\0';
          pcVar20[0xaf5] = '\0';
          pcVar20[0xaf6] = '\0';
          pcVar20[0xaf7] = '\0';
          pcVar20[0xaf8] = '\0';
          pcVar20[0xaf9] = '\0';
          pcVar20[0xafa] = '\0';
          pcVar20[0xafb] = '\0';
          pcVar20[0xafc] = '\0';
        }
        else {
          if ((pcVar20[0xafc] != '\x01') || (uVar21 <= *(uint *)(pcVar20 + 0xaf4))) {
            pcVar20[0xaf4] = '\0';
            pcVar20[0xaf5] = '\0';
            pcVar20[0xaf6] = '\0';
            pcVar20[0xaf7] = '\0';
            pcVar20[0xafc] = '\x01';
          }
          if ((int)uVar29 < 0) goto LAB_100069dc;
          if (uVar22 < uVar29) {
            *(uint *)(pcVar20 + 0xaf8) = uVar22;
          }
        }
      }
    }
    else {
LAB_100061e9:
      if (bVar8 == 0) goto LAB_10006c22;
    }
LAB_100061f4:
    if ((((*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)) == '\x01') && ((*(uint8_t *)((uintptr_t)pf_module_state+0x45adU)) == '\0')) &&
       (0x24 < (local_24 - (*(uint32_t *)(pf_module_state+0x45bcU))) * (local_24 - (*(uint32_t *)(pf_module_state+0x45bcU))) +
               (local_1c - (*(uint32_t *)(pf_module_state+0x45b8U))) * (local_1c - (*(uint32_t *)(pf_module_state+0x45b8U))))) {
      (*(uint32_t *)(pf_module_state+0x45acU)) = 0x101;
    }
  }
LAB_10006c22:
  uVar21 = local_28;
  if ((int)(*(uint32_t *)(pf_module_state+0x1474U)) < 0) {
    pcVar20 = (char *)0x0;
    uVar29 = 0;
    goto LAB_100078ec;
  }
  iVar27 = (int)(*(uint32_t *)(pf_module_state+0x1474U)) * 0xd9c;
  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar27] != '\x01') goto LAB_100078a7;
  pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27;
  local_14 = pcVar20;
  if (*(int *)(pcVar20 + 0x10) != 4) goto LAB_100078a7;
  local_18 = (*(uint8_t * *)(pf_module_state+0x14a4U));
  uVar21 = (*(uint32_t *)(pf_module_state+0x10b5a0U));
  if (((((((int)(*(uint32_t *)(pf_module_state+0x10b5a0U)) < 0x20) && (uVar21 = 0x61, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a6U)) == '\0')) &&
        ((uVar21 = 0x62, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a7U)) == '\0' &&
         ((uVar21 = 99, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a8U)) == '\0' && (uVar21 = 100, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a9U)) == '\0')))))) &&
       (uVar21 = 0x65, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aaU)) == '\0')) &&
      (((((((uVar21 = 0x66, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5abU)) == '\0' && (uVar21 = 0x67, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5acU)) == '\0')) &&
           (uVar21 = 0x68, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5adU)) == '\0')) &&
          ((uVar21 = 0x69, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aeU)) == '\0' && (uVar21 = 0x6a, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5afU)) == '\0')))) &&
         (uVar21 = 0x6b, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b0U)) == '\0')) &&
        ((uVar21 = 0x6c, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b1U)) == '\0' && (uVar21 = 0x6d, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b2U)) == '\0')))) &&
       (((((uVar21 = 0x6e, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b3U)) == '\0' &&
           (((uVar21 = 0x6f, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b4U)) == '\0' && (uVar21 = 0x70, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b5U)) == '\0')) &&
            (uVar21 = 0x71, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b6U)) == '\0')))) &&
          ((uVar21 = 0x72, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b7U)) == '\0' && (uVar21 = 0x73, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b8U)) == '\0')))) &&
         (uVar21 = 0x74, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b9U)) == '\0')) &&
        (((uVar21 = 0x75, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5baU)) == '\0' && (uVar21 = 0x76, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bbU)) == '\0')) &&
         ((uVar21 = 0x77, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bcU)) == '\0' &&
          (((uVar21 = 0x78, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bdU)) == '\0' && (uVar21 = 0x79, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5beU)) == '\0')) &&
           (uVar21 = 0x7a, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bfU)) == '\0')))))))))))) &&
     ((((uVar21 = 0x30, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c0U)) == '\0' && (uVar21 = 0x31, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c1U)) == '\0')) &&
       ((uVar21 = 0x32, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c2U)) == '\0' &&
        (((uVar21 = 0x33, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c3U)) == '\0' && (uVar21 = 0x34, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c4U)) == '\0')) &&
         ((uVar21 = 0x35, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c5U)) == '\0' &&
          ((((uVar21 = 0x36, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c6U)) == '\0' && (uVar21 = 0x37, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c7U)) == '\0')) &&
            (uVar21 = 0x38, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c8U)) == '\0')) &&
           ((uVar21 = 0x39, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c9U)) == '\0' && (uVar21 = 0x2d, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5caU)) == '\0'))))))))))))
      && (uVar21 = 0x2e, (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5cbU)) == '\0')))) {
    uVar21 = (uint)(byte)((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5ccU)) << 5);
  }
  local_20 = (*(uint32_t *)(pf_module_state+0x1474U));
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a4U)) == '\x01') {
    uVar14 = strlen(pcVar20 + 0xa61);
    if (uVar14 != 0) {
      (pcVar20 + 0xa61)[uVar14 - 1] = '\0';
    }
  }
  pcVar20 = local_14;
  if ((char)uVar21 != '\0') {
    pcVar15 = local_14 + 0xa61;
    uVar14 = strlen(pcVar15);
    if (uVar14 + 1 < 0x80) {
      pcVar15[uVar14] = (char)uVar21;
      pcVar20[uVar14 + 0xa62] = '\0';
    }
  }
  pcVar20 = local_14;
  uVar21 = local_28;
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a5U)) != '\x01') goto LAB_100078a7;
  switch((uintptr_t)(*(undefined4 *)(local_14 + 0xae4))) {
  case 1:
    cVar9 = local_14[0x78];
    uVar29 = 0;
    uVar21 = 0;
    if (cVar9 != '\0') {
      uVar22 = 0;
      do {
        uVar21 = uVar22 + 1;
        acStack_32e[uVar22 + 0xf1] = cVar9;
        if (0xef < uVar21) break;
        cVar9 = local_18[uVar22 + iVar27 + 0x79];
        uVar22 = uVar21;
      } while (cVar9 != '\0');
    }
    acStack_32e[uVar21 + 0xf1] = '\0';
    if (acStack_32e[0xf1] != '\0') {
      uVar21 = 0;
      cVar9 = acStack_32e[0xf1];
      do {
        uVar29 = uVar21 + 1;
        acStack_32e[uVar21 + 0x1e2] = cVar9;
        if (0xef < uVar29) break;
        cVar9 = acStack_32e[uVar21 + 0xf2];
        uVar21 = uVar29;
      } while (cVar9 != '\0');
    }
    acStack_32e[uVar29 + 0x1e2] = '\0';
    pcVar15 = acStack_32e;
    if ((char)local_14c != '\0') {
      puVar11 = &local_14c;
      puVar31 = (undefined4 *)0x0;
      cVar9 = (char)local_14c;
      do {
        puVar28 = puVar11;
        if (cVar9 != '/') {
          puVar28 = puVar31;
        }
        cVar9 = *(char *)((int)puVar11 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar31 = puVar28;
      } while (cVar9 != '\0');
      if (puVar28 != (undefined4 *)0x0) {
        *(undefined1 *)puVar28 = 0;
        if ((char)local_14c == '\0') {
          uVar21 = 0;
        }
        else {
          uVar29 = 0;
          cVar9 = (char)local_14c;
          do {
            uVar21 = uVar29 + 1;
            acStack_32e[uVar29] = cVar9;
            if (0xef < uVar21) break;
            cVar9 = acStack_32e[uVar29 + 0x1e3];
            uVar29 = uVar21;
          } while (cVar9 != '\0');
        }
        pcVar15 = acStack_32e + uVar21;
      }
    }
    *pcVar15 = '\0';
    pcVar20 = pcVar20 + 0xa61;
    recovered_1000ffc0(acStack_32e,pcVar20,(char *)&local_420);
    pcVar15 = local_14;
    uVar21 = local_28;
    if (acStack_32e[0xf1] == '\0') {
      pcVar24 = (char *)0x0;
    }
    else {
      pcVar13 = acStack_32e + 0xf1;
      pcVar23 = (char *)0x0;
      cVar9 = acStack_32e[0xf1];
      do {
        pcVar24 = pcVar13;
        if (cVar9 != '/') {
          pcVar24 = pcVar23;
        }
        cVar9 = pcVar13[1];
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar24;
      } while (cVar9 != '\0');
    }
    if (pcVar24 == (char *)0x0) {
      pcVar24 = acStack_32e + 0xf1;
    }
    else {
      pcVar24 = pcVar24 + 1;
    }
    cVar9 = *pcVar24;
    if (cVar9 == '\0') {
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar23 = (char *)0x0;
      pcVar32 = pcVar24;
      do {
        pcVar13 = pcVar32;
        if (cVar9 != '/') {
          pcVar13 = pcVar23;
        }
        cVar9 = pcVar32[1];
        pcVar32 = pcVar32 + 1;
        pcVar23 = pcVar13;
      } while (cVar9 != '\0');
    }
    if (pcVar13 != (char *)0x0) {
      pcVar24 = pcVar13 + 1;
    }
    cVar9 = *pcVar24;
    if (cVar9 == '\0') {
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar23 = (char *)0x0;
      do {
        pcVar13 = pcVar24;
        if (cVar9 != '.') {
          pcVar13 = pcVar23;
        }
        cVar9 = pcVar24[1];
        pcVar24 = pcVar24 + 1;
        pcVar23 = pcVar13;
      } while (cVar9 != '\0');
    }
    pcVar24 = "";
    if (pcVar13 != (char *)0x0) {
      pcVar24 = pcVar13;
    }
    cVar9 = *pcVar20;
    if (cVar9 == '\0') {
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar23 = (char *)0x0;
      pcVar32 = pcVar20;
      do {
        pcVar13 = pcVar32;
        if (cVar9 != '/') {
          pcVar13 = pcVar23;
        }
        cVar9 = pcVar32[1];
        pcVar32 = pcVar32 + 1;
        pcVar23 = pcVar13;
      } while (cVar9 != '\0');
    }
    if (pcVar13 != (char *)0x0) {
      pcVar20 = pcVar13 + 1;
    }
    cVar9 = *pcVar20;
    if (cVar9 == '\0') {
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar23 = (char *)0x0;
      do {
        pcVar13 = pcVar20;
        if (cVar9 != '.') {
          pcVar13 = pcVar23;
        }
        cVar9 = pcVar20[1];
        pcVar20 = pcVar20 + 1;
        pcVar23 = pcVar13;
      } while (cVar9 != '\0');
    }
    pcVar20 = "";
    if (pcVar13 != (char *)0x0) {
      pcVar20 = pcVar13;
    }
    iVar27 = 0;
    do {
      bVar8 = pcVar24[iVar27];
      bVar26 = pcVar20[iVar27];
      if ((bVar8 == 0) || (bVar26 == 0)) {
        if (bVar8 == bVar26) {
          iVar27 = Ram00006800;
          if ((((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
              (uVar29 = Ram00006808, 0xb < uVar29)) && (uVar29 = Ram00006808, 0xdb < uVar29)) {
            pcVar7 = (code *)UINT_000068d8;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(*(int *)(local_14 + 0x25c),acStack_32e + 0xf1,(char *)&local_420);
            }
          }
          else {
            iVar27 = Ram00006800;
            if (((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
               ((uVar29 = Ram00006808, 0xb < uVar29 &&
                ((uVar29 = Ram00006808, 0x8b < uVar29 &&
                 (pcVar7 = (code *)UINT_00006888, pcVar7 != (code *)0x0)))))) {
              (*pcVar7)(acStack_32e + 0xf1,(char *)&local_420);
            }
          }
          iVar27 = *(int *)(pcVar15 + 0xae8);
          goto code_r0x1000787d;
        }
        break;
      }
      if ((byte)(bVar8 + 0xbf) < 0x1a) {
        bVar8 = bVar8 | 0x20;
      }
      if ((byte)(bVar26 + 0xbf) < 0x1a) {
        bVar26 = bVar26 | 0x20;
      }
      iVar27 = iVar27 + 1;
    } while (bVar8 == bVar26);
    if ((char)local_420 == '\0') {
      uVar29 = 0;
    }
    else {
      uVar22 = 0;
      do {
        uVar29 = uVar22 + 1;
        local_14[uVar22 + 0x169] = (char)local_420;
        if (0xef < uVar29) break;
        PF_PART1(local_420, 0) = *(char *)((int)&local_420 + uVar22 + 1);
        uVar22 = uVar29;
      } while ((char)local_420 != '\0');
    }
    local_14[uVar29 + 0x169] = '\0';
    local_14[0xae4] = '\x03';
    local_14[0xae5] = '\0';
    local_14[0xae6] = '\0';
    local_14[0xae7] = '\0';
    cVar9 = 'E';
    iVar27 = -0x2b;
    do {
      local_14[iVar27 + 0x28c] = cVar9;
      cVar9 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x10e5U)))[iVar27];
      iVar27 = iVar27 + 1;
    } while (iVar27 != 0);
    local_14[0x28c] = '\0';
    break;
  case 2:
    if ((-1 < *(int *)(local_14 + 0xae8)) &&
       (iVar27 = *(int *)(local_14 + 0xae8) * 0xd9c, (*(uint8_t * *)(pf_module_state+0x14a4U))[iVar27] == '\x01')) {
      recovered_1000ffc0((*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27 + 0x78,local_14 + 0xa61,(char *)&local_14c);
      iVar27 = Ram00006800;
      if ((iVar27 == 0x50414d57) &&
         (((iVar27 = Ram00006804, iVar27 != 0 && (uVar29 = Ram00006808, 0xb < uVar29)) &&
          (uVar29 = Ram00006808, 0xdf < uVar29)))) {
        pcVar7 = (code *)UINT_000068dc;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(int *)((*(uint8_t * *)(pf_module_state+0x14a4U)) + *(int *)(pcVar20 + 0xae8) * 0xd9c + 0x25c),
                    (char *)&local_14c);
        }
      }
      else {
        iVar27 = Ram00006800;
        if (((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
           ((uVar29 = Ram00006808, 0xb < uVar29 &&
            ((uVar29 = Ram00006808, 0x8f < uVar29 &&
             (pcVar7 = (code *)UINT_0000688c, pcVar7 != (code *)0x0)))))) {
          (*pcVar7)((char *)&local_14c);
        }
      }
      pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + *(int *)(pcVar20 + 0xae8) * 0xd9c;
code_r0x10007895:
      recovered_1000b9e0((int)pcVar20);
    }
    goto code_r0x1000789a;
  case 3:
    iVar27 = Ram00006800;
    if (((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
       ((uVar29 = Ram00006808, 0xb < uVar29 && (uVar29 = Ram00006808, 0xdb < uVar29)))) {
      pcVar7 = (code *)UINT_000068d8;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(*(int *)(local_14 + 0x25c),local_14 + 0x78,local_14 + 0x169);
      }
    }
    else {
      iVar27 = Ram00006800;
      if ((((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
          (uVar29 = Ram00006808, 0xb < uVar29)) &&
         ((uVar29 = Ram00006808, 0x8b < uVar29 &&
          (pcVar7 = (code *)UINT_00006888, pcVar7 != (code *)0x0)))) {
        (*pcVar7)(local_14 + 0x78,local_14 + 0x169);
      }
    }
    iVar27 = *(int *)(pcVar20 + 0xae8);
code_r0x1000787d:
    if (-1 < iVar27) {
      if ((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar27 * 0xd9c] == '\x01') {
        pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + iVar27 * 0xd9c;
        goto code_r0x10007895;
      }
    }
code_r0x1000789a:
    recovered_1001c8a0((uint)local_20);
    break;
  case 4:
    local_148 = 0;
    local_14c = 0;
    if ((((0xf5 < (byte)(local_14[0xa61] - 0x3aU)) && (0xf5 < (byte)(local_14[0xa62] - 0x3aU))) &&
        ((0xf5 < (byte)(local_14[0xa63] - 0x3aU) &&
         (((0xf5 < (byte)(local_14[0xa64] - 0x3aU) && (local_14[0xa65] == '-')) &&
          (0xf5 < (byte)(local_14[0xa66] - 0x3aU))))))) &&
       ((cVar9 = local_14[0xa67], 0xf5 < (byte)(cVar9 - 0x3aU) && (local_14[0xa68] == '-')))) {
      cVar1 = local_14[0xa69];
      local_18 = (char *)CONCAT31(PF_PART3(local_18, 1),cVar1);
      if (0xf5 < (byte)(cVar1 - 0x3aU)) {
        cVar2 = local_14[0xa6a];
        local_2c = (char *)CONCAT31(PF_PART3(local_2c, 1),cVar2);
        if ((0xf5 < (byte)(cVar2 - 0x3aU)) && (local_14[0xa6b] == ' ')) {
          cVar3 = local_14[0xa6c];
          local_34 = (char *)CONCAT31(PF_PART3(local_34, 1),cVar3);
          if (0xf5 < (byte)(cVar3 - 0x3aU)) {
            cVar4 = local_14[0xa6d];
            local_38 = CONCAT31(PF_PART3(local_38, 1),cVar4);
            if (((0xf5 < (byte)(cVar4 - 0x3aU)) && (local_14[0xa6e] == ':')) &&
               (local_2d = local_14[0xa6f], 0xf5 < (byte)(local_2d - 0x3a))) {
              cVar5 = local_14[0xa70];
              local_44 = (char *)CONCAT31(PF_PART3(local_44, 1),cVar5);
              if ((0xf5 < (byte)(cVar5 - 0x3aU)) && (local_14[0xa71] == ':')) {
                cVar6 = local_14[0xa72];
                local_40 = (char *)CONCAT31(PF_PART3(local_40, 1),cVar6);
                if ((0xf5 < (byte)(cVar6 - 0x3aU)) &&
                   ((cStack_39 = local_14[0xa73], 0xf5 < (byte)(cStack_39 - 0x3aU) &&
                    (local_14[0xa74] == '\0')))) {
                  uStack_50 = (uint)(byte)(cVar9 - 0x30) +
                              (uint)(byte)(local_14[0xa66] * '\n' + 0x20);
                  local_18 = (char *)((uint)(byte)(cVar2 - 0x30) + (uint)(byte)(cVar1 * '\n' + 0x20)
                                     );
                  uVar18 = recovered_1001d260((uint)(byte)(local_14[0xa64] - 0x30) +
                                              ((uint)(byte)(local_14[0xa63] - 0x30) +
                                              ((CONCAT11(cVar9,local_14[0xa62] + -0x30) & 0xff) +
                                              (uint)(byte)(local_14[0xa61] * '\n' + 0x20)) * 10) *
                                              10,uStack_50,(uint)local_18,
                                              (uint)(byte)(cVar4 - 0x30) +
                                              (uint)(byte)(cVar3 * '\n' + 0x20),
                                              (uint)(byte)(cVar5 - 0x30) +
                                              (uint)(byte)(local_2d * '\n' + 0x20),
                                              (uint)(byte)(cVar6 * '\n' + 0x20) +
                                              (uint)(byte)(cStack_39 - 0x30),(longlong *)&local_14c)
                  ;
                  if ((char)uVar18 != '\0') {
                    lVar34 = (longlong)(*(uint32_t *)(pf_module_state+0x617cU)) * -0x3c + CONCAT44(local_148,local_14c);
                    if (-1 < lVar34) {
                      iVar27 = Ram00006800;
                      if (((((iVar27 == 0x50414d57) && (iVar27 = Ram00006804, iVar27 != 0)) &&
                           (uVar21 = Ram00006808, 0xb < uVar21)) &&
                          ((uVar21 = Ram00006808, 0x16f < uVar21 &&
                           (pcVar7 = (code *)UINT_0000696c, pcVar7 != (code *)0x0)))) &&
                         (uVar21 = (*pcVar7)((uint)lVar34,(uint)((ulonglong)lVar34 >> 0x20)),
                         uVar21 != 0)) {
                        (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f1U)) = 0;
                        recovered_1001c8a0((uint)local_20);
                      }
                      else {
                        builtin_strncpy(local_14 + 0x261,"Unable to set system time",0x1a);
                      }
                      uVar21 = local_28;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    builtin_strncpy(pcVar20 + 0x261,"Invalid. Use YYYY-MM-DD HH:MM:SS",0x21);
  }
LAB_100078a7:
  uVar29 = 0;
  if ((*(uint32_t *)(pf_module_state+0x1474U)) < (char *)0x14) {
    pcVar20 = (*(uint8_t * *)(pf_module_state+0x14a4U)) + (int)(*(uint32_t *)(pf_module_state+0x1474U)) * 0xd9c;
    if ((*(uint8_t * *)(pf_module_state+0x14a4U))[(int)(*(uint32_t *)(pf_module_state+0x1474U)) * 0xd9c] == '\x01') {
      if (pcVar20[1] == '\x01') {
        if (*(int *)(pcVar20 + 0x10) == 6) {
          if (*(uint *)(pcVar20 + 0xb1c) != 0) {
            uVar29 = 0;
            if (pcVar20[2] == '\0') {
              uVar29 = *(uint *)(pcVar20 + 0xb1c);
            }
          }
        }
      }
    }
  }
  else {
    pcVar20 = (char *)0x0;
  }
LAB_100078ec:
  if (((*(uint32_t *)(pf_module_state+0x47c0U)) != 0) && ((*(uint32_t *)(pf_module_state+0x47c0U)) != uVar29)) {
    terror_ui_window_pointer_event((*(uint32_t *)(pf_module_state+0x47c0U)),0,0,0,0);
  }
  (*(uint32_t *)(pf_module_state+0x47c0U)) = uVar29;
  if ((pcVar20 != (char *)0x0) && (uVar29 != 0)) {
    local_48 = local_48 & 0x10000;
    iVar27 = 1;
    local_14 = (char *)0x0;
    local_20 = (char *)uVar29;
    if ((*(int *)(pcVar20 + 0x10) == 6) && (pcVar20[2] == '\0')) {
      local_18 = *(char **)(pcVar20 + 100);
      pcVar15 = (char *)0x0;
      pcVar24 = (char *)0x0;
      if (0x34 < (int)local_18 && 0x1c < *(int *)(pcVar20 + 0x60)) {
        pcVar24 = (char *)(*(int *)(pcVar20 + 0x60) + -0x1c);
        pcVar15 = pcVar24;
        if (*(char **)(pcVar20 + 0xb3c) != (char *)0x0) {
          pcVar15 = *(char **)(pcVar20 + 0xb3c);
        }
        local_18 = local_18 + -0x34;
        pcVar13 = local_18;
        if (*(char **)(pcVar20 + 0xb40) != (char *)0x0) {
          pcVar13 = *(char **)(pcVar20 + 0xb40);
        }
        local_34 = local_18;
        local_2c = pcVar24;
        if (0 < (int)pcVar13 && 0 < (int)pcVar15) {
          local_34 = pcVar13;
          local_2c = pcVar15;
        }
        iVar27 = *(int *)(pcVar20 + 0x58);
        iVar30 = *(int *)(pcVar20 + 0x5c);
        local_14 = pcVar24;
        uVar33 = pf_app_udiv_full(ZEXT48(local_34) * ZEXT48(pcVar24),ZEXT48(local_2c));
        pcVar20 = (char *)uVar33;
        if ((int)pcVar20 < 2) {
          pcVar20 = (char *)0x1;
        }
        pcVar15 = pcVar24;
        if (local_18 < pcVar20) {
          uVar33 = pf_app_udiv_full(ZEXT48(local_2c) * ZEXT48(local_18),ZEXT48(local_34));
          pcVar15 = (char *)uVar33;
          if ((int)pcVar15 < 2) {
            pcVar15 = (char *)0x1;
          }
          pcVar20 = local_18;
        }
        pcVar13 = local_34;
        iVar27 = iVar27 + 0xe + ((int)pcVar24 - (int)pcVar15) / 2;
        iVar30 = iVar30 + 0x26 + ((int)local_18 - (int)pcVar20) / 2;
        bVar10 = false;
        local_38 = local_1c - iVar27;
        if (((iVar27 <= local_1c) && (local_1c < (int)(pcVar15 + iVar27))) &&
           (iVar30 <= (int)local_24)) {
          bVar10 = (int)local_24 < (int)(pcVar20 + iVar30);
        }
        lVar34 = (ulonglong)(local_24 - iVar30) * ZEXT48(local_34);
        local_18 = pcVar15;
        lVar34 = pf_app_div_full(CONCAT44(((int)(local_24 - iVar30) >> 0x1f) * (int)local_34 +
                                             (int)((ulonglong)lVar34 >> 0x20),(int)lVar34),
                                    ZEXT48(pcVar20));
        pcVar20 = local_2c;
        pcVar23 = (char *)lVar34;
        pcVar15 = pcVar23;
        if ((int)(pcVar13 + -1) <= (int)pcVar23) {
          pcVar15 = pcVar13 + -1;
        }
        local_14 = (char *)0x0;
        pcVar24 = (char *)0x0;
        if (-1 < (int)pcVar23) {
          pcVar24 = pcVar15;
        }
        lVar34 = pf_app_div_full(CONCAT44(((int)local_38 >> 0x1f) * (int)local_2c +
                                             (int)((ulonglong)local_38 * ZEXT48(local_2c) >> 0x20),
                                             (int)((ulonglong)local_38 * ZEXT48(local_2c))),
                                    ZEXT48(local_18));
        pcVar23 = (char *)lVar34;
        pcVar13 = pcVar23;
        if ((int)(pcVar20 + -1) <= (int)pcVar23) {
          pcVar13 = pcVar20 + -1;
        }
        pcVar15 = (char *)0x0;
        if (-1 < (int)pcVar23) {
          pcVar15 = pcVar13;
        }
        if (bVar10 != false) {
          local_14 = (char *)(local_54 & 3);
        }
        iVar27 = (uint)bVar10 * 2 + 1;
      }
    }
    else {
      pcVar15 = (char *)0x0;
      pcVar24 = (char *)0x0;
    }
    terror_ui_window_pointer_event((uint)local_20,(int)pcVar15,(int)pcVar24,(uint)local_14,local_48 + 4 + iVar27
                      );
    uVar21 = local_28;
  }
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b59cU)) = (char)uVar21;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b59dU)) = (char)(local_4c >> 1);
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a6U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a7U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a8U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a9U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aaU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5abU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5acU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5adU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aeU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5afU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b0U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b1U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b2U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b3U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b4U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b5U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b6U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b7U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b8U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b9U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5baU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bbU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bcU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bdU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5beU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bfU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c0U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c1U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c2U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c3U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c4U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c5U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c6U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c7U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c8U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c9U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5caU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5cbU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5ccU)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a4U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a5U)) = 0;
  (*(uint32_t *)(pf_module_state+0x10b5a0U)) = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f10c
#undef DAT_0181f110
#undef DAT_0181f114
#undef DAT_0181f2a4
#undef DAT_0181f2ac
#undef DAT_0181f2b0
#undef DAT_0181f2b4
#undef DAT_0181f2d4
#undef DAT_0181f2d8
#undef DAT_0181f2dc
#undef DAT_0181f2e1
#undef DAT_0181f33c
#undef DAT_0181f340
#undef DAT_0181f344
#undef DAT_0181f348
#undef DAT_0181f34c
#undef DAT_0181f350
#undef DAT_0181f354
#undef DAT_0181f358
#undef DAT_0181f35c
#undef DAT_0181f360
#undef DAT_0181f361
#undef DAT_0181f362
#undef DAT_0181f363
#undef DAT_0181f364
#undef DAT_0181f36c
#undef DAT_0181f8d4
#undef DAT_0181f8d8
#undef DAT_0181f8dc
#undef DAT_0181f8e0
#undef DAT_018223dc
#undef DAT_018223dd
#undef DAT_018223e0
#undef DAT_018223e4
#undef DAT_018223e8
#undef DAT_018223ec
#undef DAT_018225d2
#undef DAT_018225d4
#undef DAT_018225f0
#undef DAT_01823fac
#undef DAT_018240a4
#undef DAT_018240ac
#undef DAT_019293c4
#undef DAT_019293c8
#undef DAT_019293cc
#undef DAT_019293cd
#undef DAT_019293d0
#undef DAT_019293d4
#undef DAT_019293d5
#undef DAT_019293d6
#undef DAT_019293d7
#undef DAT_019293d8
#undef DAT_019293d9
#undef DAT_019293da
#undef DAT_019293db
#undef DAT_019293dc
#undef DAT_019293dd
#undef DAT_019293de
#undef DAT_019293df
#undef DAT_019293e0
#undef DAT_019293e1
#undef DAT_019293e2
#undef DAT_019293e3
#undef DAT_019293e4
#undef DAT_019293e5
#undef DAT_019293e6
#undef DAT_019293e7
#undef DAT_019293e8
#undef DAT_019293e9
#undef DAT_019293ea
#undef DAT_019293eb
#undef DAT_019293ec
#undef DAT_019293ed
#undef DAT_019293ee
#undef DAT_019293ef
#undef DAT_019293f0
#undef DAT_019293f1
#undef DAT_019293f2
#undef DAT_019293f3
#undef DAT_019293f4
#undef DAT_019293f5
#undef DAT_019293f6
#undef DAT_019293f7
#undef DAT_019293f8
#undef DAT_019293f9
#undef DAT_019293fa
#undef DAT_019293fb
#undef DAT_019293fc
#undef DAT_01929400
#undef DAT_01929404
#undef DAT_01929408
#undef DAT_01929410
#undef DAT_01929414
#undef DAT_01929418
#undef DAT_0192941c
#undef DAT_01929420
#undef DAT_01929421
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006888
#undef UINT_0000688c
#undef UINT_000068d8
#undef UINT_000068dc
#undef UINT_00006968
#undef UNK_0181e654
#undef UNK_0181e670
#undef UNK_0181e96f
#undef UNK_0181ed7d
#undef UNK_0181ed8e
#undef UNK_0181eec5
#undef UNK_0181ef15
#undef UNK_0181f550
#undef UNK_0181f554
#undef UNK_0181f598
#undef UNK_0181f5e0
#undef UNK_0181f5e4
#undef UNK_0181f5e6
#undef UNK_0181f5e8
#undef UNK_0181f5ea
#undef UNK_0181f5ec
#undef UNK_0181f5ee
#undef UNK_0181f5f0
#undef UNK_0181f5f2
#undef UNK_0181f8e1
#undef UNK_0181f909
#undef UNK_018223f0
#undef UNK_018224e1
#undef acStack_32e
#undef uStack_50
#undef cStack_39
#undef local_420
#undef local_41c
#undef local_418
#undef local_414
#undef local_410
#undef local_40c
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_54
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_2d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_01929418
#define DAT_01929418 (*(uint8_t *)(0x1929418U))
#undef DAT_0192941c
#define DAT_0192941c (*(uint8_t *)(0x192941cU))
#undef DAT_01929420
#define DAT_01929420 (*(byte *)(0x1929420U))
#define local_64 (*(char (*)[80])(frame + 28))
#define local_14 (*(int * *)(frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009370(int *in_ECX)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong in_EDX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  local_14 = in_ECX;
  recovered_1001d460(local_64);
  iVar4 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) < 0xf5) {
    iVar4 = 0xf4;
  }
  in_EDX = strlen(local_64);
  if (0 < (int)in_EDX) {
    do {
      uVar2 = recovered_10015df0(local_64,in_EDX);
      if ((int)uVar2 <= iVar4 + -0xf4) goto LAB_100093c7;
      bVar1 = 1 < (int)in_EDX;
      in_EDX = in_EDX - 1;
    } while (bVar1);
    in_EDX = 0;
  }
LAB_100093c7:
  uVar2 = recovered_10015df0(local_64,in_EDX);
  iVar4 = ((*(uint32_t *)(pf_module_state+0x12d4U)) - uVar2) + -2;
  if (iVar4 < 0xf3) {
    iVar4 = 0xf2;
  }
  iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U)) - iVar4;
  iVar5 = 0x18;
  if ((0 < (*(uint32_t *)(pf_module_state+0x10b5ecU)) & (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U))) == 1) {
    if (((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U)) & 1) == 0) {
      iVar5 = 0;
    }
    bVar1 = 0 < iVar6;
    iVar6 = (*(uint32_t *)(pf_module_state+0x10b5ecU));
    iVar3 = (*(uint32_t *)(pf_module_state+0x10b5e8U));
    if (bVar1) {
      if (iVar4 <= (*(uint32_t *)(pf_module_state+0x10b5e8U))) {
        iVar3 = iVar4;
      }
      iVar6 = (*(uint32_t *)(pf_module_state+0x10b5ecU)) + (*(uint32_t *)(pf_module_state+0x10b5e8U));
      if ((*(uint32_t *)(pf_module_state+0x10b5ecU)) + (*(uint32_t *)(pf_module_state+0x10b5e8U)) <= (*(uint32_t *)(pf_module_state+0x12d4U))) {
        iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar6 = iVar6 - iVar3;
      iVar5 = 0x18;
    }
    iVar4 = iVar3;
  }
  *local_14 = iVar4;
  local_14[1] = 0;
  local_14[2] = iVar6;
  local_14[3] = iVar5;
  return;
}

#undef DAT_0181f104
#undef DAT_01929418
#undef DAT_0192941c
#undef DAT_01929420
#undef local_64
#undef local_14

#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009460
 */

void recovered_10009460(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar3 = 0;
  iVar1 = 0;
  iVar4 = 0;
  iVar7 = 0;
  if ((0 < param_5 && 0 < param_4) && (0 < param_7 && 0 < param_6)) {
    iVar3 = in_EDX;
    if (param_6 <= in_EDX) {
      iVar3 = param_6;
    }
    local_18 = 0;
    if (-1 < in_EDX) {
      local_18 = iVar3;
    }
    iVar3 = param_3;
    if (param_7 <= param_3) {
      iVar3 = param_7;
    }
    iVar1 = param_4 + in_EDX;
    iVar6 = 0;
    if (-1 < param_3) {
      iVar6 = iVar3;
    }
    iVar3 = iVar1;
    if (param_6 <= iVar1) {
      iVar3 = param_6;
    }
    iVar4 = param_5 + param_3;
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar2 = iVar3;
    }
    iVar3 = iVar4;
    if (param_7 <= iVar4) {
      iVar3 = param_7;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar3;
    }
    if (iVar2 - local_18 == 0 || iVar2 < local_18) {
      iVar1 = 0;
      iVar4 = 0;
      iVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      iVar1 = 0;
      iVar4 = 0;
      iVar7 = 0;
      if (iVar5 - iVar6 != 0 && iVar6 <= iVar5) {
        iVar3 = local_18;
        iVar1 = iVar6;
        iVar4 = iVar2 - local_18;
        iVar7 = iVar5 - iVar6;
      }
    }
  }
  *in_ECX = iVar3;
  in_ECX[1] = iVar1;
  in_ECX[2] = iVar4;
  in_ECX[3] = iVar7;
  return;
}

#undef local_18

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(char *)(0x181f2dcU))
#undef DAT_01823f78
#define DAT_01823f78 (*(uint8_t *)(0x1823f78U))
#undef DAT_01823f7c
#define DAT_01823f7c (*(uint8_t *)(0x1823f7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009560(int in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if ((((*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x6148U)) != 0)) && ((*(uint32_t *)(pf_module_state+0x1490U)) != 0)) {
    iVar2 = 0;
    if (0 < (*(uint32_t *)(pf_module_state+0x148cU))) {
      iVar2 = (*(uint32_t *)(pf_module_state+0x148cU)) * (*(uint32_t *)(pf_module_state+0x1488U)) * 4;
    }
    iVar1 = 0;
    if (0 < (*(uint32_t *)(pf_module_state+0x1488U))) {
      iVar1 = iVar2;
    }
    if (((*(uint32_t *)(pf_module_state+0x614cU)) == iVar1) &&
       ((0 < param_4 && 0 < param_3) && (0 < (*(uint32_t *)(pf_module_state+0x12d8U)) && 0 < (*(uint32_t *)(pf_module_state+0x12d4U))))) {
      iVar2 = in_ECX;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar1 = 0;
      if (-1 < in_ECX) {
        iVar1 = iVar2;
      }
      iVar2 = in_EDX;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      iVar4 = param_3 + in_ECX;
      iVar3 = 0;
      if (-1 < in_EDX) {
        iVar3 = iVar2;
      }
      iVar2 = iVar4;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar4) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar5 = param_4 + in_EDX;
      iVar6 = 0;
      if (-1 < iVar4) {
        iVar6 = iVar2;
      }
      iVar2 = iVar5;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar5) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      iVar4 = 0;
      if (-1 < iVar5) {
        iVar4 = iVar2;
      }
      if (((iVar1 < iVar6) && (iVar3 < iVar4)) && (iVar6 - iVar1 != 0 && iVar1 <= iVar6)) {
        do {
          iVar2 = ((*(uint32_t *)(pf_module_state+0x12d4U)) * iVar3 + iVar1) * 4;
          memcpy((void *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar2),(void *)(iVar2 + (*(uint32_t *)(pf_module_state+0x6148U))),
                             (iVar6 - iVar1) * 4);
          iVar3 = iVar3 + 1;
        } while (iVar4 != iVar3);
      }
    }
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_0181f2dc
#undef DAT_01823f78
#undef DAT_01823f7c

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_01929418
#define DAT_01929418 (*(uint8_t *)(0x1929418U))
#undef DAT_0192941c
#define DAT_0192941c (*(uint8_t *)(0x192941cU))
#undef DAT_01929420
#define DAT_01929420 (*(byte *)(0x1929420U))
#define in_stack_ffffff5c (*(undefined4 *)(frame + 28))
#define local_94 (*(char (*)[80])(frame + 44))
#define local_44 (*(int *)(frame + 124))
#define local_40 (*(int *)(frame + 128))
#define local_3c (*(uint *)(frame + 132))
#define local_38 (*(int * *)(frame + 136))
#define local_34 (*(int *)(frame + 140))
#define local_30 (*(int *)(frame + 144))
#define local_2c (*(int *)(frame + 148))
#define local_28 (*(undefined2 *)(frame + 152))
#define local_26 (*(undefined1 *)(frame + 154))
#define local_24 (*(int *)(frame + 156))
#define local_1d (*(undefined1 *)(frame + 163))
#define local_1c (*(int *)(frame + 164))
#define local_18 (*(int *)(frame + 168))
#define local_14 (*(int *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_100096c0(int *in_ECX)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong in_EDX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;

  local_38 = in_ECX;
  recovered_1001d460(local_94);
  iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) < 0xf5) {
    iVar12 = 0xf4;
  }
  in_EDX = strlen(local_94);
  uVar16 = (undefined1)((uint)in_stack_ffffff5c >> 0x18);
  if (0 < (int)in_EDX) {
    do {
      uVar4 = recovered_10015df0(local_94,in_EDX);
      uVar16 = (undefined1)((uint)in_stack_ffffff5c >> 0x18);
      if ((int)uVar4 <= iVar12 + -0xf4) goto LAB_10009727;
      bVar1 = 1 < (int)in_EDX;
      in_EDX = in_EDX - 1;
    } while (bVar1);
    in_EDX = 0;
  }
LAB_10009727:
  local_3c = recovered_10015df0(local_94,in_EDX);
  piVar3 = local_38;
  iVar2 = (*(uint32_t *)(pf_module_state+0x12d8U));
  iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
  local_14 = (*(uint32_t *)(pf_module_state+0x12d4U));
  local_40 = ((*(uint32_t *)(pf_module_state+0x12d4U)) - local_3c) + -2;
  if (local_40 < 0xf3) {
    local_40 = 0xf2;
  }
  local_34 = (*(uint32_t *)(pf_module_state+0x12d4U)) - local_40;
  local_18 = 0x18;
  iVar5 = local_34;
  iVar6 = local_40;
  if ((0 < (*(uint32_t *)(pf_module_state+0x10b5ecU)) & (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U))) == 1) {
    local_18 = 0x18;
    if (((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U)) & 1) == 0) {
      local_18 = 0;
    }
    iVar6 = (*(uint32_t *)(pf_module_state+0x10b5e8U));
    if (local_34 < 1) {
      iVar5 = (*(uint32_t *)(pf_module_state+0x10b5ecU));
    }
    else {
      if (local_40 <= (*(uint32_t *)(pf_module_state+0x10b5e8U))) {
        iVar6 = local_40;
      }
      iVar5 = (*(uint32_t *)(pf_module_state+0x10b5ecU)) + (*(uint32_t *)(pf_module_state+0x10b5e8U));
      if ((*(uint32_t *)(pf_module_state+0x10b5ecU)) + (*(uint32_t *)(pf_module_state+0x10b5e8U)) <= (*(uint32_t *)(pf_module_state+0x12d4U))) {
        iVar5 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      local_18 = 0x18;
      iVar5 = iVar5 - iVar6;
    }
  }
  local_1c = 0;
  local_24 = (*(uint32_t *)(pf_module_state+0x12d8U));
  if (((*(uint32_t *)(pf_module_state+0x12d4U)) < 1) || ((*(uint32_t *)(pf_module_state+0x12d8U)) < 1)) {
    iVar9 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    iVar9 = 0;
    if (0 < iVar5) {
      iVar9 = iVar6;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar6) {
        iVar9 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar5 = iVar5 + iVar6;
      local_1c = 0;
      iVar7 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar9;
      }
      iVar6 = iVar5;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar5) {
        iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar13 = 0;
      if (-1 < iVar5) {
        iVar13 = iVar6;
      }
      iVar11 = 0;
      iVar9 = 0;
      if (local_18 != 0 && (iVar13 - iVar7 != 0 && iVar7 <= iVar13)) {
        iVar11 = local_18;
        if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= local_18) {
          iVar11 = (*(uint32_t *)(pf_module_state+0x12d8U));
        }
        iVar9 = iVar13 - iVar7;
        local_1c = iVar7;
      }
    }
  }
  *local_38 = local_1c;
  local_38[1] = 0;
  local_38[2] = iVar9;
  local_38[3] = iVar11;
  iVar5 = (*(uint32_t *)(pf_module_state+0x1490U));
  if ((0 < iVar9) && (0 < iVar11)) {
    iVar6 = local_1c;
    if (iVar12 <= local_1c) {
      iVar6 = iVar12;
    }
    local_18 = 0;
    local_30 = 0;
    if (-1 < local_1c) {
      local_30 = iVar6;
    }
    iVar9 = iVar9 + local_1c;
    iVar6 = iVar9;
    if (iVar12 <= iVar9) {
      iVar6 = iVar12;
    }
    if (-1 < iVar9) {
      local_18 = iVar6;
    }
    local_1c = iVar11;
    if (iVar2 <= iVar11) {
      local_1c = iVar2;
    }
    local_2c = (*(uint32_t *)(pf_module_state+0x1490U));
    bVar14 = (*(uint32_t *)(pf_module_state+0x1490U)) == 0;
    iVar6 = local_18 - local_30;
    bVar15 = iVar6 == 0;
    bVar1 = local_18 < local_30;
    local_1d = (bVar15 || bVar1) || bVar14;
    if (0 < iVar2 && ((!bVar15 && !bVar1) && !bVar14)) {
      local_18 = local_18 - local_30;
      puVar8 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + local_30 * 4);
      local_44 = iVar12 * 4;
      iVar9 = 0;
      do {
        iVar11 = local_18;
        puVar10 = puVar8;
        do {
          *puVar10 = 0xfffafafa;
          puVar10 = puVar10 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + iVar12;
      } while (iVar9 != local_1c);
    }
    if (0x17 < iVar2 && ((!bVar15 && !bVar1) && !bVar14)) {
      puVar8 = (undefined4 *)(iVar5 + (iVar12 * 0x17 + local_30) * 4);
      do {
        *puVar8 = 0xffa6a6a6;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5f0U)) = 1;
  (*(uint32_t *)(pf_module_state+0x10b5e8U)) = local_40;
  (*(uint32_t *)(pf_module_state+0x10b5ecU)) = local_34;
  if (0 < (int)local_3c && 0 < (int)in_EDX) {
    local_28 = 0x4b4b;
    local_26 = 0x4b;
    recovered_1000ec70(local_40,7,local_94,in_EDX,CONCAT13(uVar16,0x4b4b4b),1);
  }
  return piVar3;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef DAT_01929418
#undef DAT_0192941c
#undef DAT_01929420
#undef in_stack_ffffff5c
#undef local_94
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_26
#undef local_24
#undef local_1d
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(char *)(0x181f2dcU))
#undef DAT_01823f78
#define DAT_01823f78 (*(uint8_t *)(0x1823f78U))
#undef DAT_01823f7c
#define DAT_01823f7c (*(uint8_t *)(0x1823f7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100099d0(int in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (((((*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x12e0U)) == -1)) && ((*(uint32_t *)(pf_module_state+0x6148U)) != 0)) &&
     ((*(uint32_t *)(pf_module_state+0x1490U)) != 0)) {
    iVar2 = 0;
    if (0 < (*(uint32_t *)(pf_module_state+0x148cU))) {
      iVar2 = (*(uint32_t *)(pf_module_state+0x148cU)) * (*(uint32_t *)(pf_module_state+0x1488U)) * 4;
    }
    iVar1 = 0;
    if (0 < (*(uint32_t *)(pf_module_state+0x1488U))) {
      iVar1 = iVar2;
    }
    if (((*(uint32_t *)(pf_module_state+0x614cU)) == iVar1) &&
       ((0 < param_4 && 0 < param_3) && (0 < (*(uint32_t *)(pf_module_state+0x12d8U)) && 0 < (*(uint32_t *)(pf_module_state+0x12d4U))))) {
      iVar2 = in_ECX;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar1 = 0;
      if (-1 < in_ECX) {
        iVar1 = iVar2;
      }
      iVar2 = in_EDX;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      iVar4 = param_3 + in_ECX;
      iVar3 = 0;
      if (-1 < in_EDX) {
        iVar3 = iVar2;
      }
      iVar2 = iVar4;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar4) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar5 = param_4 + in_EDX;
      iVar6 = 0;
      if (-1 < iVar4) {
        iVar6 = iVar2;
      }
      iVar2 = iVar5;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar5) {
        iVar2 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      iVar4 = 0;
      if (-1 < iVar5) {
        iVar4 = iVar2;
      }
      if (((iVar1 < iVar6) && (iVar3 < iVar4)) && (iVar6 - iVar1 != 0 && iVar1 <= iVar6)) {
        do {
          iVar2 = ((*(uint32_t *)(pf_module_state+0x12d4U)) * iVar3 + iVar1) * 4;
          memcpy((void *)((*(uint32_t *)(pf_module_state+0x6148U)) + iVar2),(void *)(iVar2 + (*(uint32_t *)(pf_module_state+0x1490U))),
                             (iVar6 - iVar1) * 4);
          iVar3 = iVar3 + 1;
        } while (iVar4 != iVar3);
      }
    }
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f110
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_0181f2dc
#undef DAT_01823f78
#undef DAT_01823f7c

#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define local_24 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009b30(char *in_ECX,int in_EDX,uint param_3,int param_4,int param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int in_EDX_00;
  undefined4 uVar1;
  uint in_EDX_01;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  if ((((((*in_ECX != '\x01') || ((*(uint32_t *)(pf_module_state+0x1490U)) == 0)) || ((int)(*(uint32_t *)(pf_module_state+0x1488U)) < 1)) ||
       (((int)(*(uint32_t *)(pf_module_state+0x148cU)) < 1 || ((*(uint32_t *)(pf_module_state+0x1488U)) != *(uint *)(in_ECX + 0x14))))) ||
      (((*(uint32_t *)(pf_module_state+0x148cU)) != *(uint *)(in_ECX + 0x18) ||
       ((in_EDX_00 = *(int *)(in_ECX + 4), in_EDX_00 == 0 || *(int *)(in_ECX + 8) != 0 ||
        (uVar1 = recovered_10009e10((int)in_ECX), (char)uVar1 == '\0')))))) ||
     (in_ECX[0x48] != '\x01')) {
    return 0;
  }
  uVar1 = CONCAT31(CONCAT21((short)((uint)in_ECX >> 0x10),
                            (int)(*(uint32_t *)(pf_module_state+0x148cU)) < 1 || (int)(*(uint32_t *)(pf_module_state+0x1488U)) < 1),1);
  if ((param_5 < 1 || param_4 < 1) || ((int)(*(uint32_t *)(pf_module_state+0x148cU)) < 1 || (int)(*(uint32_t *)(pf_module_state+0x1488U)) < 1)) {
    return uVar1;
  }
  uVar4 = in_EDX;
  if ((int)(*(uint32_t *)(pf_module_state+0x1488U)) <= in_EDX) {
    uVar4 = (*(uint32_t *)(pf_module_state+0x1488U));
  }
  in_EDX_01 = 0;
  if (-1 < in_EDX) {
    in_EDX_01 = uVar4;
  }
  local_24 = param_3;
  if ((int)(*(uint32_t *)(pf_module_state+0x148cU)) <= (int)param_3) {
    local_24 = (*(uint32_t *)(pf_module_state+0x148cU));
  }
  uVar4 = param_4 + in_EDX;
  local_18 = 0;
  if (-1 < (int)param_3) {
    local_18 = local_24;
  }
  uVar6 = uVar4;
  if ((int)(*(uint32_t *)(pf_module_state+0x1488U)) <= (int)uVar4) {
    uVar6 = (*(uint32_t *)(pf_module_state+0x1488U));
  }
  uVar3 = param_5 + param_3;
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar6;
  }
  uVar4 = uVar3;
  if ((int)(*(uint32_t *)(pf_module_state+0x148cU)) <= (int)uVar3) {
    uVar4 = (*(uint32_t *)(pf_module_state+0x148cU));
  }
  uVar6 = 0;
  if (-1 < (int)uVar3) {
    uVar6 = uVar4;
  }
  if ((int)uVar2 <= (int)in_EDX_01) {
    return uVar1;
  }
  iVar7 = uVar6 - local_18;
  if (iVar7 == 0 || (int)uVar6 < (int)local_18) {
    return uVar1;
  }
  iVar5 = uVar2 - in_EDX_01;
  if (iVar5 == 0 || (int)uVar2 < (int)in_EDX_01) {
    return uVar1;
  }
  if (iVar7 < 1) {
    return uVar1;
  }
  recovered_1001d850((int)in_ECX,(int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x1488U)),in_EDX_01,local_18,iVar5,iVar7);
  recovered_1001dad0((int)in_ECX,in_EDX_00,in_EDX_01,local_18,iVar5,iVar7);
  recovered_1001dc90((int)in_ECX,in_EDX_01,local_18,iVar5,iVar7);
  return uVar1;
}

#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef local_24
#undef local_18

#undef DAT_0181f10c
#define DAT_0181f10c (*(uint8_t *)(0x181f10cU))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(char *)(0x181f2dcU))
#undef DAT_01823f78
#define DAT_01823f78 (*(uint8_t *)(0x1823f78U))
#undef DAT_01823f7c
#define DAT_01823f7c (*(uint8_t *)(0x1823f7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009cd0(int in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_ECX_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX = 0;
  int iVar3;
  ulong n;

  in_ECX_00 = (*(uint32_t *)(pf_module_state+0x12dcU));
  iVar3 = 0;
  if (0 < (*(uint32_t *)(pf_module_state+0x148cU))) {
    iVar3 = (*(uint32_t *)(pf_module_state+0x148cU)) * (*(uint32_t *)(pf_module_state+0x1488U)) * 4;
  }
  iVar1 = 0;
  if (0 < (*(uint32_t *)(pf_module_state+0x1488U))) {
    iVar1 = iVar3;
  }
  iVar3 = 0;
  if ((*(uint32_t *)(pf_module_state+0x1490U)) != (void *)0x0) {
    iVar3 = iVar1;
  }
  if (0x13 < (*(uint32_t *)(pf_module_state+0x12dcU))) {
    return 0;
  }
  iVar1 = (*(uint32_t *)(pf_module_state+0x12dcU)) * 0xd9c;
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + iVar1) == '\x01') {
    if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + iVar1 + 1) != '\x01') {
      return 0;
    }
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = recovered_10016d30();
    if ((char)uVar2 != '\0') {
      if ((((*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x12e0U)) == in_ECX_00)) && ((*(uint32_t *)(pf_module_state+0x614cU)) == iVar3)) {
        recovered_10009560(in_ECX,in_EDX,param_3,param_4);
      }
      else {
        recovered_1001dda0(in_ECX_00);
        n = (*(uint32_t *)(pf_module_state+0x1488U)) * (*(uint32_t *)(pf_module_state+0x148cU)) * 4;
        if ((n != 0 && ((0 < (*(uint32_t *)(pf_module_state+0x148cU)) && 0 < (*(uint32_t *)(pf_module_state+0x1488U))) && (*(uint32_t *)(pf_module_state+0x1490U)) != (void *)0x0))
           && (uVar2 = recovered_10016d30(), (char)uVar2 != '\0')) {
          memcpy((*(uint32_t *)(pf_module_state+0x6148U)),(*(uint32_t *)(pf_module_state+0x1490U)),n);
          (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = '\x01';
          (*(uint32_t *)(pf_module_state+0x12e0U)) = in_ECX_00;
        }
      }
      recovered_1000ce80((char *)(iVar1 + (*(uint32_t *)(pf_module_state+0x14a4U))));
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  return 0;
}

#undef DAT_0181f10c
#undef DAT_0181f110
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_0181f2d4
#undef DAT_0181f2dc
#undef DAT_01823f78
#undef DAT_01823f7c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e10
 */

undefined4 recovered_10009e10(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  ulong size;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;

  uVar6 = 0;
  if (in_ECX == 0) {
    return 0;
  }
  uVar1 = *(int *)(in_ECX + 0x1c) - 0xf;
  if ((uVar1 < 0x12) && ((0x20203U >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar6 = *(int *)(in_ECX + 0x1c) + 7U >> 3;
  }
  lVar2 = (ulonglong)uVar6 * (ulonglong)*(uint *)(in_ECX + 0x14);
  iVar5 = (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  if (iVar5 != 0 || (uint)-iVar5 < (uint)(*(uint *)(in_ECX + 0x10) < (uint)lVar2)) {
    return 0;
  }
  lVar2 = (ulonglong)*(uint *)(in_ECX + 0x18) * (ulonglong)*(uint *)(in_ECX + 0x10);
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  size = (ulong)lVar2;
  if (size != 0 && (uVar6 == 0 && (size == 0) <= uVar6)) {
    if (*(void **)(in_ECX + 0x38) != (void *)0x0) {
      if (((*(int *)(in_ECX + 0x3c) != 0) && (*(ulong *)(in_ECX + 0x40) == size)) &&
         (*(ulong *)(in_ECX + 0x44) == size)) {
        return 1;
      }
      uVar7 = 0;
      iVar5 = Ram00006800;
      if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
         ((uVar6 = Ram00006808, 0xb < uVar6 &&
          ((uVar6 = Ram00006808, 0x53 < uVar6 &&
           (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
        (*pcVar3)(*(void **)(in_ECX + 0x38));
        uVar7 = size;
      }
      *(undefined4 *)(in_ECX + 0x38) = 0;
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    if (*(void **)(in_ECX + 0x3c) != (void *)0x0) {
      iVar5 = Ram00006800;
      if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
          (uVar6 = Ram00006808, 0xb < uVar6)) &&
         ((uVar6 = Ram00006808, 0x53 < uVar6 &&
          (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
        (*pcVar3)(*(void **)(in_ECX + 0x3c));
        uVar7 = size;
      }
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      *(undefined4 *)(in_ECX + 0x44) = 0;
      *(undefined1 *)(in_ECX + 0x48) = 0;
    }
    iVar5 = Ram00006800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar6 = Ram00006808, 0xb < uVar6 &&
        ((uVar6 = Ram00006808, 0x4f < uVar6 &&
         (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))))) {
      pvVar4 = (*pcVar3)(size);
      *(void **)(in_ECX + 0x38) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      iVar5 = Ram00006800;
      if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
          (uVar6 = Ram00006808, 0xb < uVar6)) &&
         ((uVar6 = Ram00006808, 0x4f < uVar6 &&
          (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))) {
        pvVar4 = (*pcVar3)(size);
        *(void **)(in_ECX + 0x3c) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          *(ulong *)(in_ECX + 0x40) = size;
          *(ulong *)(in_ECX + 0x44) = size;
          *(undefined1 *)(in_ECX + 0x48) = 0;
          return CONCAT31((int3)(uVar7 >> 8),1);
        }
        pvVar4 = *(void **)(in_ECX + 0x38);
      }
      else {
        *(undefined4 *)(in_ECX + 0x3c) = 0;
      }
      iVar5 = Ram00006800;
      if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
         ((uVar6 = Ram00006808, 0xb < uVar6 &&
          ((uVar6 = Ram00006808, 0x53 < uVar6 &&
           (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
        (*pcVar3)(pvVar4);
      }
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a060
 */

void recovered_1000a060(undefined4 *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (in_ECX != (undefined4 *)0x0) {
    if (((((void *)*in_ECX != (void *)0x0 && in_ECX[1] == 0) &&
         (iVar1 = Ram00006800, iVar1 == 0x50414d57)) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
        (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)((void *)*in_ECX);
    }
    memset(in_ECX,0,0x18);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181e84a
#define DAT_0181e84a (*(uint8_t *)(0x181e84aU))
#undef DAT_0181e84e
#define DAT_0181e84e (*(uint8_t *)(0x181e84eU))
#undef DAT_0181f118
#define DAT_0181f118 (*(uint8_t *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f120
#define DAT_0181f120 (*(uint8_t *)(0x181f120U))
#undef DAT_0181f124
#define DAT_0181f124 (*(uint8_t *)(0x181f124U))
#undef DAT_0181f128
#define DAT_0181f128 (*(uint8_t *)(0x181f128U))
#undef DAT_0181f129
#define DAT_0181f129 (*(uint8_t *)(0x181f129U))
#undef DAT_0181f1a9
#define DAT_0181f1a9 (*(uint8_t *)(0x181f1a9U))
#undef DAT_0181f29c
#define DAT_0181f29c (*(uint8_t *)(0x181f29cU))
#undef DAT_01823fa8
#define DAT_01823fa8 (*(uint8_t *)(0x1823fa8U))
#undef DAT_01823fac
#define DAT_01823fac (*(uint8_t *)(0x1823facU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UNK_0181e852
#define UNK_0181e852 (*(uint8_t *)(0x181e852U))
#undef UNK_0181e857
#define UNK_0181e857 (*(uint8_t *)(0x181e857U))
#undef UNK_0181e85b
#define UNK_0181e85b (*(uint8_t *)(0x181e85bU))
#undef UNK_0181e860
#define UNK_0181e860 (*(uint8_t *)(0x181e860U))
#undef UNK_0181f1a8
#define UNK_0181f1a8 (*(uint8_t *)(0x181f1a8U))
#undef UNK_01823fb0
#define UNK_01823fb0 (*(uint8_t *)(0x1823fb0U))
#undef UNK_018240a0
#define UNK_018240a0 (*(uint8_t *)(0x18240a0U))
#define local_34 (*(int *)(frame + 332))
#define local_30 (*(uint *)(frame + 336))
#define local_28 (*(uint *)(frame + 344))
#define local_24 (*(int *)(frame + 348))
#define local_20 (*(int *)(frame + 352))
#define local_1c (*(byte * *)(frame + 356))
#define local_18 (*(byte * *)(frame + 360))
#define local_14 (*(byte * *)(frame + 364))
#define abStack_166 (*(byte (*)[306])(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0e0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a0e0(int in_ECX_00)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *in_ECX;
  char *pcVar7;
  byte *pbVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  bool bVar16;

  memset(&local_34,0,0xc);
  if (-1 < in_ECX_00) {
    iVar6 = Ram00006800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
        (uVar4 = Ram00006808, 0xb < uVar4)) && (uVar4 = Ram00006808, 0xcb < uVar4)) {
      pcVar2 = (code *)UINT_000068c8;
      if (pcVar2 == (code *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*pcVar2)(in_ECX_00,"/Tundra-config.ws",&local_34);
      }
    }
    else {
      iVar6 = Ram00006800;
      uVar4 = 0;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
         ((uVar15 = Ram00006808, 0xb < uVar15 &&
          ((uVar15 = Ram00006808, 0x37 < uVar15 &&
           (pcVar2 = (code *)UINT_00006834, pcVar2 != (code *)0x0)))))) {
        uVar4 = (*pcVar2)("/Tundra-config.ws",&local_34);
      }
    }
    local_20 = local_34;
    local_28 = 0;
    if (local_34 != 0 && (local_30 != 0 && uVar4 != 0)) {
      local_24 = in_ECX_00;
LAB_1000a1de:
      iVar6 = 0;
      do {
        bVar11 = *(byte *)(local_20 + local_28 + iVar6);
        iVar1 = iVar6;
        if (bVar11 == 10) break;
        if (iVar6 == 0x130) {
          iVar1 = 0x130;
          break;
        }
        iVar1 = iVar6 + 1;
        abStack_166[iVar6 + 1] = bVar11;
        uVar4 = local_28 + 1 + iVar6;
        iVar6 = iVar1;
      } while (uVar4 < local_30);
      local_28 = local_28 + iVar6;
      if (local_28 < local_30) {
        do {
          local_28 = local_28 + 1;
          if (*(char *)(local_20 + -1 + local_28) == '\n') goto LAB_1000a263;
        } while ((1 - local_30) + local_28 != 1);
        local_28 = local_30;
      }
LAB_1000a263:
      abStack_166[iVar1 + 1] = 0;
      uVar5 = strlen((char *)(abStack_166 + 1));
      while (((uVar5 != 0 && (abStack_166[uVar5] - 9 < 0x18)) &&
             ((0x800011U >> (abStack_166[uVar5] - 9 & 0x1f) & 1) != 0))) {
        abStack_166[uVar5] = 0;
        uVar5 = uVar5 - 1;
      }
      pbVar8 = abStack_166;
code_r0x1000a2c0:
      pbVar8 = pbVar8 + 1;
      switch((uintptr_t)(*pbVar8)) {
      case 0:
        goto LAB_1000a1d0;
      case 9:
      case 0xd:
      case 0x20:
        goto code_r0x1000a2c0;
      }
      uVar5 = strlen("@@");
      iVar6 = strncmp((char *)pbVar8,"@@",uVar5);
      if (iVar6 == 0) goto LAB_1000a1d0;
      in_ECX = (byte *)strchr((char *)pbVar8,0x3d);
      if (in_ECX == (byte *)0x0) goto LAB_1000a1d0;
      *in_ECX = 0;
      uVar5 = strlen((char *)pbVar8);
      while (((uVar5 != 0 && (pbVar8[uVar5 - 1] - 9 < 0x18)) &&
             ((0x800011U >> (pbVar8[uVar5 - 1] - 9 & 0x1f) & 1) != 0))) {
        pbVar8[uVar5 - 1] = 0;
        uVar5 = uVar5 - 1;
      }
      pbVar14 = in_ECX + 2;
      local_18 = in_ECX + 4;
      while( true ) {
        in_ECX = in_ECX + 1;
        if ((0x17 < *in_ECX - 9) || ((0x800011U >> (*in_ECX - 9 & 0x1f) & 1) == 0)) break;
        pbVar14 = pbVar14 + 1;
        local_18 = local_18 + 1;
      }
      iVar6 = strcmp((char *)pbVar8,"TundraMode");
      if (iVar6 == 0) {
        do {
          switch((uintptr_t)(*in_ECX)) {
          case 9:
          case 0xd:
          case 0x20:
            in_ECX = in_ECX + 1;
            pbVar14 = pbVar14 + 1;
            break;
          default:
            goto LAB_1000a7d2;
          case 0x22:
            for (iVar6 = -0xf0;
                ((bVar11 = *pbVar14, bVar11 != 0 && (bVar11 != 0x22)) && (iVar6 != 0));
                iVar6 = iVar6 + 1) {
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = bVar11;
              pbVar14 = pbVar14 + 1;
            }
            in_ECX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6180U));
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = 0;
            goto LAB_1000a7d2;
          }
        } while( true );
      }
      iVar6 = strcmp((char *)pbVar8,"TundraBackground");
      if (iVar6 == 0) {
LAB_1000a522:
        bVar11 = *in_ECX;
        switch((uintptr_t)(bVar11)) {
        case 0:
          break;
        default:
          uVar4 = 0;
          if ((byte)(bVar11 - 0x30U) < 10) {
            uVar4 = 0;
            do {
              if ((0x19999999 < uVar4) || (uVar4 == 0x19999999 && 5 < (byte)(bVar11 - 0x30U)))
              goto LAB_1000a1d0;
              uVar4 = (uint)(byte)(bVar11 - 0x30U) + uVar4 * 10;
              bVar11 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while ((byte)(bVar11 - 0x30U) < 10);
          }
          if ((bVar11 < 0xe) && ((0x2401U >> (bVar11 & 0x1f) & 1) != 0)) {
            if (99 < uVar4) {
              uVar4 = 100;
            }
            (*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)) = (undefined1)((uVar4 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
          }
          break;
        case 9:
        case 0xd:
        case 0x20:
          goto code_r0x1000a520;
        }
        goto LAB_1000a1d0;
      }
      iVar6 = strcmp((char *)pbVar8,"TundraShadow");
      if (iVar6 == 0) {
LAB_1000a5c2:
        bVar11 = *in_ECX;
        switch((uintptr_t)(bVar11)) {
        case 0:
          break;
        default:
          uVar4 = 0;
          if ((byte)(bVar11 - 0x30U) < 10) {
            uVar4 = 0;
            do {
              if ((0x19999999 < uVar4) || (uVar4 == 0x19999999 && 5 < (byte)(bVar11 - 0x30U)))
              goto LAB_1000a1d0;
              uVar4 = (uint)(byte)(bVar11 - 0x30U) + uVar4 * 10;
              bVar11 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while ((byte)(bVar11 - 0x30U) < 10);
          }
          if ((bVar11 < 0xe) && ((0x2401U >> (bVar11 & 0x1f) & 1) != 0)) {
            if (99 < uVar4) {
              uVar4 = 100;
            }
            (*(uint8_t *)((uintptr_t)pf_module_state+0x6178U)) = (undefined1)((uVar4 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
          }
          break;
        case 9:
        case 0xd:
        case 0x20:
          goto code_r0x1000a5c0;
        }
        goto LAB_1000a1d0;
      }
      iVar6 = strcmp((char *)pbVar8,"TundraRefractRange");
      if (iVar6 == 0) {
        do {
          bVar11 = *in_ECX;
          switch((uintptr_t)(bVar11)) {
          case 0:
            goto LAB_1000a1d0;
          default:
            uVar4 = 0;
            if (9 < (byte)(bVar11 - 0x30U)) goto LAB_1000a6bb;
            uVar4 = 0;
            goto LAB_1000a680;
          case 9:
          case 0xd:
          case 0x20:
            in_ECX = in_ECX + 1;
            pbVar14 = pbVar14 + 1;
          }
        } while( true );
      }
      iVar6 = strcmp((char *)pbVar8,"TundraBlurRange");
      if (iVar6 == 0) {
        do {
          bVar11 = *in_ECX;
          switch((uintptr_t)(bVar11)) {
          case 0:
            goto LAB_1000a1d0;
          default:
            uVar4 = 0;
            if (9 < (byte)(bVar11 - 0x30U)) goto LAB_1000a74b;
            uVar4 = 0;
            goto LAB_1000a710;
          case 9:
          case 0xd:
          case 0x20:
            in_ECX = in_ECX + 1;
            pbVar14 = pbVar14 + 1;
          }
        } while( true );
      }
      iVar6 = strcmp((char *)pbVar8,"TundraTimezone");
      if (iVar6 == 0) {
        pbVar8 = in_ECX;
        do {
          switch((uintptr_t)(*pbVar8)) {
          case 9:
          case 0xd:
          case 0x20:
            pbVar8 = pbVar8 + 1;
            pbVar14 = pbVar14 + 1;
            break;
          default:
            goto LAB_1000a946;
          case 0x22:
            for (iVar6 = -0xf0;
                ((bVar11 = *pbVar14, bVar11 != 0 && (bVar11 != 0x22)) && (iVar6 != 0));
                iVar6 = iVar6 + 1) {
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = bVar11;
              pbVar14 = pbVar14 + 1;
            }
            pbVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6180U));
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = 0;
            goto LAB_1000a946;
          }
        } while( true );
      }
      iVar6 = strcmp((char *)pbVar8,"TundraAutoTime");
      if ((iVar6 == 0) ||
         (iVar6 = strcmp((char *)pbVar8,"TundraAutoTimeEnabled"), iVar6 == 0)) {
        do {
          switch((uintptr_t)(*in_ECX)) {
          case 9:
          case 0xd:
          case 0x20:
            in_ECX = in_ECX + 1;
            pbVar14 = pbVar14 + 1;
            break;
          default:
            goto LAB_1000a876;
          case 0x22:
            for (iVar6 = -0xf0;
                ((bVar11 = *pbVar14, bVar11 != 0 && (bVar11 != 0x22)) && (iVar6 != 0));
                iVar6 = iVar6 + 1) {
              (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = bVar11;
              pbVar14 = pbVar14 + 1;
            }
            in_ECX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6180U));
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar6] = 0;
            goto LAB_1000a876;
          }
        } while( true );
      }
      iVar6 = strcmp((char *)pbVar8,"TundraTimeServer");
      if (iVar6 == 0) {
        pcVar7 = recovered_1000ae40(in_ECX);
        cVar10 = *pcVar7;
        if (cVar10 != '\0') {
          uVar4 = 1;
          do {
            uVar15 = uVar4;
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f8U)))[uVar15] = cVar10;
            if (0x7e < uVar15) break;
            cVar10 = pcVar7[uVar15];
            uVar4 = uVar15 + 1;
          } while (cVar10 != '\0');
          (&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f9U)))[uVar15] = 0;
        }
      }
      else {
        iVar6 = strcmp((char *)pbVar8,"background");
        if (iVar6 != 0) goto LAB_1000a1d0;
        pcVar7 = recovered_1000ae40(in_ECX);
        cVar10 = *pcVar7;
        if (cVar10 != '\0') {
          uVar4 = 1;
          do {
            uVar15 = uVar4;
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1378U)))[uVar15] = cVar10;
            if (0xef < uVar15) break;
            cVar10 = pcVar7[uVar15];
            uVar4 = uVar15 + 1;
          } while (cVar10 != '\0');
          (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1379U)))[uVar15] = 0;
        }
      }
      goto LAB_1000a1d0;
    }
  }
  return 0;
LAB_1000a7d2:
  iVar6 = strcmp((char *)in_ECX,"solid");
  if (iVar6 == 0) {
    (*(uint32_t *)(pf_module_state+0x12ecU)) = 0;
  }
  else {
    iVar6 = strcmp((char *)in_ECX,"clear");
    if (iVar6 == 0) {
      (*(uint32_t *)(pf_module_state+0x12ecU)) = 1;
    }
    else {
      iVar6 = strcmp((char *)in_ECX,"blur");
      if (iVar6 == 0) {
        (*(uint32_t *)(pf_module_state+0x12ecU)) = 2;
      }
      else {
        iVar6 = strcmp((char *)in_ECX,"refract");
        if (iVar6 == 0) {
          (*(uint32_t *)(pf_module_state+0x12ecU)) = 3;
        }
      }
    }
  }
  goto LAB_1000a1d0;
code_r0x1000a520:
  in_ECX = in_ECX + 1;
  pbVar14 = pbVar14 + 1;
  goto LAB_1000a522;
code_r0x1000a5c0:
  in_ECX = in_ECX + 1;
  pbVar14 = pbVar14 + 1;
  goto LAB_1000a5c2;
LAB_1000a680:
  if (0x19999999 < uVar4) goto LAB_1000a1d0;
  if (uVar4 == 0x19999999 && 5 < (byte)(bVar11 - 0x30U)) goto LAB_1000a1d0;
  uVar4 = (uint)(byte)(bVar11 - 0x30U) + uVar4 * 10;
  bVar11 = *pbVar14;
  pbVar14 = pbVar14 + 1;
  if (9 < (byte)(bVar11 - 0x30U)) goto LAB_1000a6bb;
  goto LAB_1000a680;
LAB_1000a6bb:
  if ((bVar11 < 0xe) && ((0x2401U >> (bVar11 & 0x1f) & 1) != 0)) {
    if (0xfff < uVar4) {
      uVar4 = 0x1000;
    }
    (*(uint32_t *)(pf_module_state+0x12f4U)) = uVar4;
  }
  goto LAB_1000a1d0;
LAB_1000a710:
  if (0x19999999 < uVar4) goto LAB_1000a1d0;
  if (uVar4 == 0x19999999 && 5 < (byte)(bVar11 - 0x30U)) goto LAB_1000a1d0;
  uVar4 = (uint)(byte)(bVar11 - 0x30U) + uVar4 * 10;
  bVar11 = *pbVar14;
  pbVar14 = pbVar14 + 1;
  if (9 < (byte)(bVar11 - 0x30U)) goto LAB_1000a74b;
  goto LAB_1000a710;
LAB_1000a74b:
  if (bVar11 < 0xe) {
    if ((0x2401U >> (bVar11 & 0x1f) & 1) != 0) {
      if (0xfff < uVar4) {
        uVar4 = 0x1000;
      }
      (*(uint32_t *)(pf_module_state+0x12f0U)) = uVar4;
    }
  }
  goto LAB_1000a1d0;
LAB_1000a946:
  pbVar8 = pbVar8 + 3;
  while( true ) {
    uVar4 = (uint)pbVar8[-3];
    if ((0x17 < uVar4 - 9) || ((0x800011U >> (uVar4 - 9 & 0x1f) & 1) == 0)) break;
    pbVar8 = pbVar8 + 1;
  }
  local_1c = pbVar8 + -3;
  local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa1aU));
  pbVar14 = local_1c;
  do {
    bVar11 = *pbVar14;
    bVar12 = *local_14;
    if ((bVar11 == 0) || (bVar12 == 0)) {
      if (bVar11 != bVar12) break;
LAB_1000aa58:
      (*(uint32_t *)(pf_module_state+0x617cU)) = 0;
      goto LAB_1000a1d0;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    pbVar14 = pbVar14 + 1;
    local_14 = local_14 + 1;
  } while (bVar11 == bVar12);
  local_14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa1eU));
  pbVar14 = local_1c;
  do {
    bVar11 = *pbVar14;
    bVar12 = *local_14;
    if ((bVar11 == 0) || (bVar12 == 0)) {
      if (bVar11 == bVar12) goto LAB_1000aa58;
      break;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    pbVar14 = pbVar14 + 1;
    local_14 = local_14 + 1;
  } while (bVar11 == bVar12);
  if (uVar4 < 0x67) {
    if (uVar4 != 0x47) {
      if (uVar4 == 0x55) goto LAB_1000aafa;
      goto LAB_1000ab2f;
    }
LAB_1000ab17:
    if (((pbVar8[-2] | 0x20) != 0x6d) || ((pbVar8[-1] | 0x20) != 0x74)) {
LAB_1000ab2f:
      pbVar8 = local_1c;
    }
  }
  else {
    if (uVar4 == 0x67) goto LAB_1000ab17;
    if (uVar4 != 0x75) goto LAB_1000ab2f;
LAB_1000aafa:
    if (((pbVar8[-2] | 0x20) != 0x74) || ((pbVar8[-1] | 0x20) != 99)) {
      if (uVar4 == 0x67) goto LAB_1000ab17;
      goto LAB_1000ab2f;
    }
  }
  if (*pbVar8 == 0x2d) {
    pbVar8 = pbVar8 + 1;
    local_14 = (byte *)0xffffffff;
  }
  else if (*pbVar8 == 0x2b) {
    local_14 = (byte *)0x1;
    pbVar8 = pbVar8 + 1;
  }
  else {
    local_14 = (byte *)0x1;
  }
  uVar4 = (uint)(*pbVar8 == 0x2d);
  if (0xf5 < (byte)(pbVar8[uVar4] - 0x3a)) {
    pbVar14 = pbVar8 + uVar4 + 1;
    uVar15 = 0;
    uVar4 = (uint)CONCAT11(*pbVar8,pbVar8[uVar4] - 0x30U);
    do {
      uVar13 = uVar4;
      if (0xccccccc < (int)uVar15) goto LAB_1000a1d0;
      uVar15 = (uVar13 & 0xff) + uVar15 * 10;
      bVar11 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      uVar4 = CONCAT31((int3)(uVar13 >> 8),bVar11 - 0x30U);
    } while ((byte)(bVar11 - 0x30U) < 10);
    if ((char)(uVar13 >> 8) == '-') {
      uVar15 = -uVar15;
    }
    if (bVar11 == 0) {
      bVar11 = *in_ECX;
      while (bVar11 != 0) {
        if ((byte)(bVar11 + 0xbf) < 0x1a) {
          bVar11 = bVar11 | 0x20;
        }
        bVar16 = bVar11 == 0x75;
        bVar11 = local_18[-2];
        if (bVar16) {
          if (bVar11 == 0) {
            pcVar7 = "TC";
          }
          else {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar12 = bVar11 | 0x20;
            }
            else {
              bVar12 = bVar11;
            }
            if (bVar12 != 0x74) goto LAB_1000aca9;
            bVar12 = local_18[-1];
            if (bVar12 == 0) {
              pcVar7 = "C";
            }
            else {
              if ((byte)(bVar12 + 0xbf) < 0x1a) {
                bVar12 = bVar12 | 0x20;
              }
              if (bVar12 != 99) goto LAB_1000aca9;
              pcVar7 = "";
              if (*local_18 != 0) goto LAB_1000ad26;
            }
          }
          if (*pcVar7 == '\0') goto LAB_1000ad26;
        }
LAB_1000aca9:
        local_18 = local_18 + 1;
      }
      uVar9 = recovered_1000af00(0,in_ECX,"GMT");
      if ((char)uVar9 != '\0') {
LAB_1000ad26:
        uVar15 = uVar15 * 0x3c;
      }
      if (uVar15 + 0x5a0 < 0xb41) {
        iVar6 = uVar15 * (int)local_14;
LAB_1000ad40:
        (*(uint32_t *)(pf_module_state+0x617cU)) = iVar6;
      }
    }
    else if (bVar11 == 0x3a) {
      bVar11 = *pbVar14;
      local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),bVar11);
      if (0xf5 < (byte)(pbVar14[bVar11 == 0x2d] - 0x3a)) {
        pbVar14 = pbVar14 + (bVar11 == 0x2d);
        uVar4 = 0;
        do {
          bVar12 = *pbVar14 - 0x30U;
          if (9 < bVar12) {
            if (bVar11 == 0x2d) {
              uVar4 = -uVar4;
            }
            if (uVar4 < 0x3c) {
              if (*pbVar14 == 0) {
                if (uVar15 < 0x19) {
                  iVar6 = (uVar4 + uVar15 * 0x3c) * (int)local_14;
                  if (iVar6 + 0x5a0U < 0xb41) goto LAB_1000ad40;
                }
              }
            }
            break;
          }
          pbVar14 = pbVar14 + 1;
          bVar16 = (int)uVar4 < 0xccccccd;
          uVar4 = (uint)bVar12 + uVar4 * 10;
        } while (bVar16);
      }
    }
  }
  goto LAB_1000a1d0;
LAB_1000a876:
  iVar6 = 0;
  do {
    bVar11 = in_ECX[iVar6];
    bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa22U)))[iVar6];
    if ((bVar11 == 0) || (bVar12 == 0)) {
      uVar3 = 1;
      if (bVar11 != bVar12) break;
      goto LAB_1000ac90;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    iVar6 = iVar6 + 1;
  } while (bVar11 == bVar12);
  iVar6 = 0;
  do {
    bVar11 = in_ECX[iVar6];
    bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa27U)))[iVar6];
    if ((bVar11 == 0) || (bVar12 == 0)) {
      uVar3 = 1;
      if (bVar11 == bVar12) goto LAB_1000ac90;
      break;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    iVar6 = iVar6 + 1;
  } while (bVar11 == bVar12);
  iVar6 = 0;
  do {
    bVar11 = in_ECX[iVar6];
    bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa2bU)))[iVar6];
    if ((bVar11 == 0) || (bVar12 == 0)) {
      uVar3 = 1;
      if (bVar11 == bVar12) goto LAB_1000ac90;
      break;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    iVar6 = iVar6 + 1;
  } while (bVar11 == bVar12);
  iVar6 = strcmp((char *)in_ECX,"1");
  if (iVar6 == 0) {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x12f8U)) = 1;
    goto LAB_1000a1d0;
  }
  iVar6 = 0;
  do {
    bVar11 = in_ECX[iVar6];
    bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xa30U)))[iVar6];
    if ((bVar11 == 0) || (bVar12 == 0)) {
      if (bVar11 != bVar12) break;
      goto LAB_1000ac8e;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    iVar6 = iVar6 + 1;
  } while (bVar11 == bVar12);
  uVar9 = recovered_1000aea0((int)in_ECX,((uintptr_t)pf_module_state+0xa36U));
  if (((char)uVar9 == '\0') &&
     (uVar9 = recovered_1000aea0((int)in_ECX,((uintptr_t)pf_module_state+0xa39U)), (char)uVar9 == '\0')) {
    iVar6 = strcmp((char *)in_ECX,"0");
    if (iVar6 != 0) goto LAB_1000a1d0;
  }
LAB_1000ac8e:
  uVar3 = 0;
LAB_1000ac90:
  (*(uint8_t *)((uintptr_t)pf_module_state+0x12f8U)) = uVar3;
LAB_1000a1d0:
  if (local_30 <= local_28) {
    (*(uint32_t *)(pf_module_state+0x146cU)) = local_24;
    return CONCAT31((int3)((uint)local_24 >> 8),1);
  }
  goto LAB_1000a1de;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181e84a
#undef DAT_0181e84e
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f120
#undef DAT_0181f124
#undef DAT_0181f128
#undef DAT_0181f129
#undef DAT_0181f1a9
#undef DAT_0181f29c
#undef DAT_01823fa8
#undef DAT_01823fac
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8
#undef UNK_0181e852
#undef UNK_0181e857
#undef UNK_0181e85b
#undef UNK_0181e860
#undef UNK_0181f1a8
#undef UNK_01823fb0
#undef UNK_018240a0
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_166

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ada0
 */

uint recovered_1000ada0(int in_ECX,char *in_EDX,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xcb < uVar3)) {
    pcVar2 = (code *)UINT_000068c8;
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)(in_ECX,in_EDX,param_3);
      return uVar3;
    }
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 &&
        ((uVar3 = Ram00006808, 0x37 < uVar3 &&
         (pcVar2 = (code *)UINT_00006834, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)(in_EDX,param_3);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8

#undef DAT_0181e738
#define DAT_0181e738 (*(uint8_t *)(0x181e738U))
#undef UNK_01823fb0
#define UNK_01823fb0 (*(uint8_t *)(0x1823fb0U))
#undef UNK_018240a0
#define UNK_018240a0 (*(uint8_t *)(0x18240a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae40
 */

undefined1 * recovered_1000ae40(undefined1 *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  if (in_ECX == (undefined1 *)0x0) {
    return &(*(uint8_t *)((uintptr_t)pf_module_state+0x908U));
  }
  do {
    switch((uintptr_t)(*in_ECX)) {
    case 9:
    case 0xd:
    case 0x20:
      in_ECX = in_ECX + 1;
      break;
    default:
      return in_ECX;
    case 0x22:
      for (iVar2 = -0xf0;
          ((cVar1 = in_ECX[iVar2 + 0xf1], cVar1 != '\0' && (cVar1 != '\"')) && (iVar2 != 0));
          iVar2 = iVar2 + 1) {
        (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar2] = cVar1;
      }
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x6270U)))[iVar2] = 0;
      return &(*(uint8_t *)((uintptr_t)pf_module_state+0x6180U));
    }
  } while( true );
}

#undef DAT_0181e738
#undef UNK_01823fb0
#undef UNK_018240a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aea0
 */

undefined4 recovered_1000aea0(int in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  byte bVar3;

  iVar1 = 0;
  if (in_EDX != 0 && in_ECX != 0) {
    do {
      bVar2 = *(byte *)(in_ECX + iVar1);
      bVar3 = *(byte *)(in_EDX + iVar1);
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return CONCAT31((int3)((uint)iVar1 >> 8),bVar2 == bVar3);
      }
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 | 0x20;
      }
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      iVar1 = iVar1 + 1;
    } while (bVar2 == bVar3);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af00
 */

undefined4 recovered_1000af00(undefined4 in_EAX,byte *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar3;
  undefined4 uVar2;
  byte bVar4;
  byte bVar5;
  int iVar6;

  bVar3 = in_EDX == (char *)0x0 || in_ECX == (byte *)0x0;
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar3,in_ECX == (byte *)0x0));
  if (bVar3) {
    return 0;
  }
  if (*in_EDX != '\0') {
    bVar4 = *in_ECX;
    while (bVar4 != 0) {
      iVar6 = 0;
      do {
        bVar5 = in_EDX[iVar6];
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
        if (bVar5 == 0) {
          return uVar2;
        }
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        if (bVar4 != bVar5) goto LAB_1000af67;
        bVar4 = in_ECX[iVar6 + 1];
        iVar6 = iVar6 + 1;
      } while (bVar4 != 0);
      if (in_EDX[iVar6] == '\0') {
        return uVar2;
      }
LAB_1000af67:
      pbVar1 = in_ECX + 1;
      in_ECX = in_ECX + 1;
      uVar2 = 0;
      bVar4 = *pbVar1;
    }
  }
  return 0;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UNK_0181e874
#define UNK_0181e874 (*(uint8_t *)(0x181e874U))
#undef UNK_0181e893
#define UNK_0181e893 (*(uint8_t *)(0x181e893U))
#undef UNK_0181e8b2
#define UNK_0181e8b2 (*(uint8_t *)(0x181e8b2U))
#define local_18 (*(char (*)[12])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af80
 */

undefined4 recovered_1000af80(undefined *in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;

  if ((int)in_ECX < 0) {
    return 0;
  }
  pcVar6 = (char *)0xc;
  memset(local_18,0,0xc);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xcb < uVar2)) {
    pcVar3 = (code *)UINT_000068c8;
    if (pcVar3 != (code *)0x0) {
      puVar4 = in_ECX;
      pcVar5 = "Cancer.app/Contents/Info.plist";
      pcVar6 = local_18;
override_prt_1000b020_e1f79679:
      uVar2 = (*pcVar3)((int)puVar4,pcVar5,pcVar6);
      if (uVar2 != 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x37 < uVar2 &&
         (pcVar3 = (code *)UINT_00006834, pcVar3 != (code *)0x0)))))) {
      puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa44U));
      pcVar5 = local_18;
      goto override_prt_1000b020_e1f79679;
    }
  }
  pcVar6 = (char *)0xc;
  memset(local_18,0,0xc);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xcb < uVar2)) {
    pcVar3 = (code *)UINT_000068c8;
    if (pcVar3 == (code *)0x0) goto LAB_1000b0cd;
    puVar4 = in_ECX;
    pcVar5 = "Tundra.app/Contents/Info.plist";
    pcVar6 = local_18;
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
       ((uVar2 = Ram00006808, uVar2 < 0xc ||
        ((uVar2 = Ram00006808, uVar2 < 0x38 ||
         (pcVar3 = (code *)UINT_00006834, pcVar3 == (code *)0x0)))))) goto LAB_1000b0cd;
    puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa63U));
    pcVar5 = local_18;
  }
  uVar2 = (*pcVar3)((int)puVar4,pcVar5,pcVar6);
  if (uVar2 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_1000b0cd:
  pcVar6 = (char *)0xc;
  memset(local_18,0,0xc);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xcb < uVar2)) {
    pcVar3 = (code *)UINT_000068c8;
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    pcVar5 = "ActivityMonitor.app/Contents/Info.plist";
    pcVar6 = local_18;
  }
  else {
    iVar1 = Ram00006800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram00006804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0x38) {
      return 0;
    }
    pcVar3 = (code *)UINT_00006834;
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    in_ECX = &(*(uint8_t *)((uintptr_t)pf_module_state+0xa82U));
    pcVar5 = local_18;
  }
  uVar2 = (*pcVar3)((int)in_ECX,pcVar5,pcVar6);
  if (uVar2 == 0) {
    return 0;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8
#undef UNK_0181e874
#undef UNK_0181e893
#undef UNK_0181e8b2
#undef local_18

#define local_115 (*(char (*)[241])(frame + 59))
#define local_24 (*(uint *)(frame + 300))
#define local_20 (*(uint *)(frame + 304))
#define local_1c (*(char * *)(frame + 308))
#define local_15 (*(bool *)(frame + 315))
#define local_14 (*(int *)(frame + 316))
#define acStack_13d (*(char (*)[29])(frame + 19))
#define uStack_120 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b180
 */

void recovered_1000b180(int in_ECX,uint in_EDX,char param_3,char *param_4,int param_5)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  int iVar13;

  if (in_EDX == 0) {
    return;
  }
  local_20 = in_ECX + in_EDX;
  local_15 = param_5 < 1 || param_4 == (char *)0x0;
  uVar12 = 0;
  local_24 = in_EDX;
  local_14 = in_ECX;
LAB_1000b1cd:
  if (local_14 != 0) {
    uVar3 = (uint)(*(char *)(local_14 + uVar12) == '-');
    cVar11 = *(char *)(uVar3 + local_14 + uVar12);
    if ((byte)(cVar11 - 0x3aU) < 0xf6) goto LAB_1000b290;
    uVar3 = local_14 + uVar12 + uVar3;
    uVar5 = (uint)CONCAT11(cVar11 - 0x30U,*(char *)(local_14 + uVar12));
    iVar8 = 0;
    if ((byte)(cVar11 - 0x30U) < 10) {
      iVar8 = 0;
      do {
        if (0xccccccc < iVar8) goto LAB_1000b290;
        iVar8 = (uVar5 >> 8) + iVar8 * 10;
        cVar11 = *(char *)(uVar3 + 1);
        uVar3 = uVar3 + 1;
        uVar5 = (uint)CONCAT11(cVar11 - 0x30U,(char)uVar5);
      } while ((byte)(cVar11 - 0x30U) < 10);
    }
    if ((char)uVar5 == '-') {
      iVar8 = -iVar8;
    }
    if (local_20 <= uVar3 || cVar11 != '|') goto LAB_1000b290;
    iVar13 = 0;
    if (uVar3 + 1 < local_20) {
      iVar6 = 0;
      do {
        cVar11 = *(char *)(uVar3 + 1 + iVar6);
        if ((cVar11 == '\n') || (cVar11 == '\r')) {
          iVar13 = iVar6;
          break;
        }
        if (iVar6 == 0xf0) {
          iVar13 = 0xf0;
          break;
        }
        iVar13 = iVar6 + 1;
        local_115[iVar6] = cVar11;
        uVar5 = uVar3 + 2 + iVar6;
        iVar6 = iVar13;
      } while (uVar5 < local_20);
    }
    local_115[iVar13] = '\0';
    if (param_3 == '\0') {
      pcVar4 = param_4;
      iVar13 = param_5;
      if (local_15 == false) {
        do {
          if (*pcVar4 == '\0') {
            *pcVar4 = '\x01';
            *(int *)(pcVar4 + 0x11c) = iVar8;
            if (local_115[0] == '\0') {
              pcVar4[0x29] = '\0';
              pcVar9 = "Root";
              goto LAB_1000b40a;
            }
            local_1c = (char *)CONCAT31(PF_PART3(local_1c, 1),local_115[0]);
            iVar8 = 0x29;
            cVar11 = local_115[0];
            goto LAB_1000b350;
          }
          pcVar4 = pcVar4 + 0x124;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    else {
      uStack_120 = 0x1000b2eb;
      recovered_10004770(local_115,iVar8);
    }
    goto LAB_1000b449;
  }
LAB_1000b290:
  uVar3 = 0;
  if ((uVar12 < local_24) && (uVar3 = 1, *(char *)(local_14 + uVar12) != '\n')) {
    uVar12 = uVar12 + 1;
    do {
      uVar3 = uVar12;
      if (local_24 == uVar3) goto LAB_1000b484;
      uVar12 = uVar3 + 1;
    } while (*(char *)(local_14 + uVar3) != '\n');
    goto LAB_1000b2c3;
  }
  goto LAB_1000b1c3;
  while( true ) {
    cVar11 = acStack_13d[iVar8];
    iVar8 = iVar13;
    if (cVar11 == '\0') break;
LAB_1000b350:
    pcVar4[iVar8] = cVar11;
    iVar13 = iVar8 + 1;
    if (0xef < iVar8 - 0x28U) break;
  }
  pcVar4[iVar13] = '\0';
  pcVar9 = local_115;
  pcVar10 = (char *)0x0;
  cVar11 = local_115[0];
  do {
    cVar2 = cVar11;
    pcVar7 = pcVar10;
    pcVar10 = pcVar9;
    if (cVar2 != '/') {
      pcVar10 = pcVar7;
    }
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar11 = *pcVar1;
  } while (*pcVar1 != '\0');
  if (cVar2 != '/') {
    pcVar9 = pcVar7 + 1;
  }
  pcVar7 = local_115;
  if (pcVar10 != (char *)0x0) {
    pcVar7 = pcVar9;
  }
  if (*pcVar7 == '\0') {
    pcVar9 = "Root";
  }
  else {
    pcVar10 = local_115;
    pcVar7 = (char *)0x0;
    cVar11 = local_115[0];
    do {
      cVar2 = cVar11;
      local_1c = pcVar7;
      pcVar7 = pcVar10;
      if (cVar2 != '/') {
        pcVar7 = local_1c;
      }
      pcVar9 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar11 = *pcVar9;
    } while (*pcVar9 != '\0');
    if (cVar2 != '/') {
      pcVar10 = local_1c + 1;
    }
    pcVar9 = local_115;
    if (pcVar7 != (char *)0x0) {
      pcVar9 = pcVar10;
    }
  }
LAB_1000b40a:
  cVar11 = *pcVar9;
  if (cVar11 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar5 = 1;
    do {
      uVar3 = uVar5;
      pcVar4[uVar3] = cVar11;
      if (0x26 < uVar3) break;
      cVar11 = pcVar9[uVar3];
      uVar5 = uVar3 + 1;
    } while (cVar11 != '\0');
  }
  pcVar4[uVar3 + 1] = '\0';
  pcVar4[0x120] = '\x01';
LAB_1000b449:
  uVar3 = 0;
  if ((local_24 <= uVar12) || (uVar3 = 1, *(char *)(local_14 + uVar12) == '\n')) goto LAB_1000b1c3;
  uVar12 = uVar12 + 1;
  do {
    uVar3 = uVar12;
    if (local_24 == uVar3) goto LAB_1000b484;
    uVar12 = uVar3 + 1;
  } while (*(char *)(local_14 + uVar3) != '\n');
LAB_1000b2c3:
  uVar12 = uVar12 - 1;
LAB_1000b486:
  uVar3 = (uint)(uVar3 < local_24);
LAB_1000b1c3:
  uVar12 = uVar12 + uVar3;
  if (local_24 <= uVar12) {
    return;
  }
  goto LAB_1000b1cd;
LAB_1000b484:
  uVar12 = local_24;
  goto LAB_1000b486;
}

#undef local_115
#undef local_24
#undef local_20
#undef local_1c
#undef local_15
#undef local_14
#undef acStack_13d
#undef uStack_120

#undef DAT_0181f118
#define DAT_0181f118 (*(uint8_t *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f120
#define DAT_0181f120 (*(uint8_t *)(0x181f120U))
#undef DAT_0181f124
#define DAT_0181f124 (*(uint8_t *)(0x181f124U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f2d8
#define DAT_0181f2d8 (*(uint8_t *)(0x181f2d8U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef DAT_01823fa8
#define DAT_01823fa8 (*(uint8_t *)(0x1823fa8U))
#undef UNK_0181e71d
#define UNK_0181e71d (*(uint8_t *)(0x181e71dU))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
#define local_2c (*(undefined * *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b4a0(char *in_ECX,int in_EDX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  iVar6 = 0;
  iVar7 = 8;
  iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  local_18 = in_EDX;
  do {
    if ((*(char *)(iVar1 + -8 + iVar7) == '\x01') && (*(int *)(iVar1 + -4 + iVar7) == 0)) {
      iVar1 = strcmp((char *)(iVar1 + iVar7),"Erebus");
      if (iVar1 == 0) goto LAB_1000b4fd;
      iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 300;
  } while (iVar6 != 0x12);
  iVar6 = -1;
LAB_1000b4fd:
  local_34 = 0;
  local_2c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x8edU));
  local_28 = ((*(uint32_t *)(pf_module_state+0x14a8U)) % 5) * 0x12 + 0x40;
  local_24 = ((*(uint32_t *)(pf_module_state+0x14a8U)) % 5) * 0xc + 0x38;
  local_20 = 500;
  local_1c = 0x14c;
  local_30 = iVar6;
  local_14 = recovered_1000b630(&local_34);
  iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if (-1 < local_14) {
    local_14 = local_14 * 0xd9c;
    *(undefined1 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 5 + local_14) = (*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U));
    *(undefined1 *)(iVar1 + 6 + local_14) = (*(uint8_t *)((uintptr_t)pf_module_state+0x6178U));
    uVar8 = (*(uint32_t *)(pf_module_state+0x12ecU));
    uVar2 = 1;
    if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) {
      uVar2 = (*(uint32_t *)(pf_module_state+0x12ecU));
    }
    *(uint *)(iVar1 + 8 + local_14) = uVar2;
    if (uVar8 == 3) {
      uVar3 = (*(uint32_t *)(pf_module_state+0x12f4U));
    }
    else {
      uVar3 = 0;
      if (uVar8 == 2) {
        uVar3 = (*(uint32_t *)(pf_module_state+0x12f0U));
      }
    }
    *(undefined4 *)(iVar1 + 0xc + local_14) = uVar3;
    pcVar4 = "";
    if (in_ECX != (char *)0x0) {
      pcVar4 = in_ECX;
    }
    iVar6 = iVar1 + 0x78 + local_14;
    cVar5 = *pcVar4;
    if (cVar5 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar8 = uVar2 + 1;
        *(char *)(iVar6 + uVar2) = cVar5;
        if (0xef < uVar8) break;
        cVar5 = pcVar4[uVar2 + 1];
        uVar2 = uVar8;
      } while (cVar5 != '\0');
    }
    *(undefined1 *)(iVar6 + uVar8) = 0;
    iVar6 = local_18;
    if (local_18 < 0) {
      iVar6 = recovered_10004ab0();
      iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U));
    }
    *(int *)(iVar1 + 0x25c + local_14) = iVar6;
    *(undefined1 *)(iVar1 + 0x260 + local_14) = 0;
    recovered_1000b9e0(iVar1 + local_14);
  }
  return;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f120
#undef DAT_0181f124
#undef DAT_0181f2d4
#undef DAT_0181f2d8
#undef DAT_0181f8d8
#undef DAT_01823fa8
#undef UNK_0181e71d
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0181f118
#define DAT_0181f118 (*(char *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f120
#define DAT_0181f120 (*(uint8_t *)(0x181f120U))
#undef DAT_0181f124
#define DAT_0181f124 (*(uint8_t *)(0x181f124U))
#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_01823fa8
#define DAT_01823fa8 (*(char *)(0x1823fa8U))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000b630(undefined4 *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  char *dst;
  undefined4 *puVar11;
  int iVar12;

  if (in_ECX == (undefined4 *)0x0) {
    return -1;
  }
  if (*(*(uint8_t * *)(pf_module_state+0x14a4U)) == '\0') {
    iVar12 = 0;
    dst = (*(uint8_t * *)(pf_module_state+0x14a4U));
  }
  else if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xd9c] == '\x01') {
    if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x1b38] == '\x01') {
      if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x28d4] == '\x01') {
        if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x3670] == '\x01') {
          if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x440c] == '\x01') {
            if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x51a8] == '\x01') {
              if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x5f44] == '\x01') {
                if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x6ce0] == '\x01') {
                  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x7a7c] == '\x01') {
                    if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x8818] == '\x01') {
                      if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x95b4] == '\x01') {
                        if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xa350] == '\x01') {
                          if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xb0ec] == '\x01') {
                            if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xbe88] == '\x01') {
                              if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xcc24] == '\x01') {
                                if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xd9c0] == '\x01') {
                                  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xe75c] == '\x01') {
                                    if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0xf4f8] == '\x01') {
                                      if ((*(uint8_t * *)(pf_module_state+0x14a4U))[0x10294] == '\x01') {
                                        return -1;
                                      }
                                      iVar12 = 0x13;
                                      dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x10294;
                                    }
                                    else {
                                      iVar12 = 0x12;
                                      dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xf4f8;
                                    }
                                  }
                                  else {
                                    iVar12 = 0x11;
                                    dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xe75c;
                                  }
                                }
                                else {
                                  iVar12 = 0x10;
                                  dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xd9c0;
                                }
                              }
                              else {
                                iVar12 = 0xf;
                                dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xcc24;
                              }
                            }
                            else {
                              iVar12 = 0xe;
                              dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xbe88;
                            }
                          }
                          else {
                            iVar12 = 0xd;
                            dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xb0ec;
                          }
                        }
                        else {
                          iVar12 = 0xc;
                          dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xa350;
                        }
                      }
                      else {
                        iVar12 = 0xb;
                        dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x95b4;
                      }
                    }
                    else {
                      iVar12 = 10;
                      dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x8818;
                    }
                  }
                  else {
                    iVar12 = 9;
                    dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x7a7c;
                  }
                }
                else {
                  iVar12 = 8;
                  dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x6ce0;
                }
              }
              else {
                iVar12 = 7;
                dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x5f44;
              }
            }
            else {
              iVar12 = 6;
              dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x51a8;
            }
          }
          else {
            iVar12 = 5;
            dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x440c;
          }
        }
        else {
          iVar12 = 4;
          dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x3670;
        }
      }
      else {
        iVar12 = 3;
        dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x28d4;
      }
    }
    else {
      iVar12 = 2;
      dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0x1b38;
    }
  }
  else {
    iVar12 = 1;
    dst = (*(uint8_t * *)(pf_module_state+0x14a4U)) + 0xd9c;
  }
  memset(dst,0,0xd9c);
  dst[0] = '\x01';
  dst[1] = '\x01';
  *(undefined4 *)(dst + 0x10) = *in_ECX;
  *(undefined4 *)(dst + 0x14) = in_ECX[1];
  dst[5] = (*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U));
  dst[6] = (*(uint8_t *)((uintptr_t)pf_module_state+0x6178U));
  uVar7 = (*(uint32_t *)(pf_module_state+0x12ecU));
  uVar10 = 1;
  if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) {
    uVar10 = (*(uint32_t *)(pf_module_state+0x12ecU));
  }
  *(uint *)(dst + 8) = uVar10;
  if (uVar7 == 3) {
    uVar6 = (*(uint32_t *)(pf_module_state+0x12f4U));
  }
  else {
    uVar6 = 0;
    if (uVar7 == 2) {
      uVar6 = (*(uint32_t *)(pf_module_state+0x12f0U));
    }
  }
  *(undefined4 *)(dst + 0xc) = uVar6;
  pcVar5 = "";
  if ((char *)in_ECX[2] != (char *)0x0) {
    pcVar5 = (char *)in_ECX[2];
  }
  cVar9 = *pcVar5;
  if (cVar9 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar7 = uVar10 + 1;
      dst[uVar10 + 0x18] = cVar9;
      if (0x3e < uVar7) break;
      cVar9 = pcVar5[uVar10 + 1];
      uVar10 = uVar7;
    } while (cVar9 != '\0');
  }
  dst[uVar7 + 0x18] = '\0';
  uVar6 = in_ECX[3];
  *(undefined4 *)(dst + 0x58) = uVar6;
  uVar1 = in_ECX[4];
  *(undefined4 *)(dst + 0x5c) = uVar1;
  uVar2 = in_ECX[5];
  *(undefined4 *)(dst + 0x60) = uVar2;
  uVar3 = in_ECX[6];
  *(undefined4 *)(dst + 100) = uVar3;
  *(undefined4 *)(dst + 0x68) = uVar6;
  *(undefined4 *)(dst + 0x6c) = uVar1;
  *(undefined4 *)(dst + 0x70) = uVar2;
  *(undefined4 *)(dst + 0x74) = uVar3;
  dst[0xaf4] = '\0';
  iVar4 = (*(uint32_t *)(pf_module_state+0x1aacU));
  dst[0xaf5] = '\0';
  dst[0xaf6] = '\0';
  dst[0xaf7] = '\0';
  uVar7 = 0xffffffff;
  if (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
    uVar10 = 0;
    do {
      if (*(int *)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar10 * 4) == iVar12) {
        uVar7 = uVar10;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((*(uint32_t *)(pf_module_state+0x6274U)) != uVar10);
  }
  if ((*(uint8_t * *)(pf_module_state+0x14a4U))[iVar12 * 0xd9c] != '\x01') {
    return iVar12;
  }
  if ((int)uVar7 < 0) {
    if (0x13 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
      (*(uint32_t *)(pf_module_state+0x1474U)) = iVar12;
      return iVar12;
    }
    uVar7 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
    uVar10 = (*(uint32_t *)(pf_module_state+0x6274U));
  }
  else {
    uVar10 = (*(uint32_t *)(pf_module_state+0x6274U)) - 1;
    if ((int)uVar7 < (int)uVar10) {
      puVar11 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1aacU)) + 4 + uVar7 * 4);
      iVar8 = ~uVar7 + (*(uint32_t *)(pf_module_state+0x6274U));
      do {
        puVar11[-1] = *puVar11;
        puVar11 = puVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar7 = (*(uint32_t *)(pf_module_state+0x6274U));
  }
  (*(uint32_t *)(pf_module_state+0x6274U)) = uVar7;
  *(int *)(iVar4 + uVar10 * 4) = iVar12;
  (*(uint32_t *)(pf_module_state+0x1474U)) = iVar12;
  return iVar12;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f120
#undef DAT_0181f124
#undef DAT_0181f2a4
#undef DAT_0181f2d4
#undef DAT_0181f8dc
#undef DAT_01823fa8
#undef DAT_018240a4

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
#define local_324 (*(char (*)[241])(frame + 28))
#define local_233 (*(char (*)[247])(frame + 269))
#define local_13c (*(uint *)(frame + 516))
#define local_138 (*(int *)(frame + 520))
#define local_134 (*(undefined4 *)(frame + 524))
#define local_130 (*(undefined4 *)(frame + 528))
#define local_129 (*(char (*)[241])(frame + 535))
#define local_38 (*(ulong *)(frame + 776))
#define local_34 (*(int *)(frame + 780))
#define local_30 (*(char * *)(frame + 784))
#define local_2c (*(uint *)(frame + 788))
#define local_28 (*(uint *)(frame + 792))
#define local_24 (*(char * *)(frame + 796))
#define local_20 (*(char * *)(frame + 800))
#define local_1c (*(uint *)(frame + 804))
#define local_18 (*(int *)(frame + 808))
#define local_14 (*(uint *)(frame + 812))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9e0
 */

void recovered_1000b9e0(int in_ECX)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  void *dst;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 uVar11;
  char *pcVar12;
  byte bVar13;
  char *pcVar14;
  char *pcVar15;

  local_1c = 0;
  if (in_ECX == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    return;
  }
  dst = *(void **)(in_ECX + 0xaec);
  if (dst == (void *)0x0) {
    iVar7 = Ram00006800;
    if ((((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
        (uVar3 = Ram00006808, uVar3 < 0xc)) ||
       ((uVar3 = Ram00006808, uVar3 < 0x50 ||
        (pcVar2 = (code *)UINT_0000684c, pcVar2 == (code *)0x0)))) {
      *(undefined4 *)(in_ECX + 0xaec) = 0;
      *(undefined4 *)(in_ECX + 0xaf0) = 0;
      return;
    }
    dst = (*pcVar2)(0x1f69ba8);
    *(void **)(in_ECX + 0xaec) = dst;
    if (dst == (void *)0x0) {
      *(undefined4 *)(in_ECX + 0xaf0) = 0;
      return;
    }
  }
  local_18 = in_ECX;
  memset(dst,0,0x1f69ba8);
  if (*(char *)(local_18 + 0x260) == '\x01') {
    iVar7 = Ram00006800;
    if (((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
       ((uVar3 = Ram00006808, uVar3 < 0xc ||
        ((uVar3 = Ram00006808, uVar3 < 0xc4 ||
         (pcVar2 = (code *)UINT_000068c0, pcVar2 == (code *)0x0)))))) goto LAB_1000bc43;
    uVar3 = (*pcVar2)(*(void **)(local_18 + 0xaec),0xff4b,&local_1c);
  }
  else {
    iVar7 = Ram00006800;
    if (((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 && (uVar3 = Ram00006808, 0xcf < uVar3)))) {
      pcVar2 = (code *)UINT_000068cc;
      if (pcVar2 == (code *)0x0) goto LAB_1000bc43;
      uVar3 = (*pcVar2)(*(int *)(local_18 + 0x25c),(char *)(local_18 + 0x78),
                        *(void **)(local_18 + 0xaec),0xff4b,&local_1c);
    }
    else {
      iVar7 = Ram00006800;
      if ((((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
          (uVar3 = Ram00006808, uVar3 < 0xc)) ||
         ((uVar3 = Ram00006808, uVar3 < 0x88 ||
          (pcVar2 = (code *)UINT_00006884, pcVar2 == (code *)0x0)))) goto LAB_1000bc43;
      uVar3 = (*pcVar2)((char *)(local_18 + 0x78),*(void **)(local_18 + 0xaec),0xff4b,&local_1c);
    }
  }
  if (uVar3 == 0) {
LAB_1000bc43:
    *(undefined4 *)(local_18 + 0xaf0) = 0;
    return;
  }
  if (0xff4b < local_1c) {
    local_1c = 0xff4b;
  }
  bVar9 = *(byte *)(local_18 + 0x260);
  if (bVar9 != 0) goto LAB_1000bfb5;
  iVar7 = *(int *)(local_18 + 0xaec);
  uVar3 = 0;
  if (local_1c != 0 && iVar7 != 0) {
    local_20 = (char *)(local_18 + 0x78);
    local_30 = (char *)(iVar7 + 0xf1);
    uVar4 = 0;
    uVar3 = 0;
    local_34 = iVar7;
    local_2c = local_1c;
LAB_1000bc68:
    local_24 = (char *)(uVar4 * 0x1f8 + iVar7);
    local_28 = uVar4;
    local_14 = uVar3;
    memcpy(local_324,local_24,0x1f8);
    for (pcVar14 = local_233; (*pcVar14 == '/' || (*pcVar14 == '\\')); pcVar14 = pcVar14 + 1) {
    }
    for (pcVar12 = local_20; (*pcVar12 == '\\' || (*pcVar12 == '/')); pcVar12 = pcVar12 + 1) {
    }
    uVar5 = strlen(pcVar12);
    cVar8 = *pcVar14;
    if (cVar8 == '\0') goto LAB_1000bc58;
    if (*pcVar12 != '\0') {
      local_38 = uVar5;
      iVar6 = strcmp(pcVar14,pcVar12);
      if (iVar6 == 0) {
        pcVar14 = "";
      }
      else {
        uVar5 = strlen(pcVar12);
        iVar6 = strncmp(pcVar14,pcVar12,uVar5);
        if ((iVar6 != 0) || ((pcVar14[local_38] != '/' && (pcVar14[local_38] != '\\'))))
        goto LAB_1000bc58;
        pcVar14 = pcVar14 + local_38 + 1;
      }
      cVar8 = *pcVar14;
      if (cVar8 == '\0') goto LAB_1000bc58;
    }
    uVar3 = 0;
    while (pcVar12 = local_30, uVar4 = local_14, cVar8 != '\0') {
      if ((cVar8 == '/') || (cVar8 == '\\')) {
        if (0xf0 < uVar3 || uVar3 == 0) goto LAB_1000bc58;
        cVar8 = *local_20;
        pcVar12 = local_129;
        uVar4 = uVar3;
        if (cVar8 == '\0') goto LAB_1000be52;
        uVar4 = 0;
        goto LAB_1000bdcf;
      }
      iVar6 = uVar3 + 1;
      uVar3 = uVar3 + 1;
      cVar8 = pcVar14[iVar6];
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar6 = strcmp(pcVar12,local_233);
      if (iVar6 == 0) goto LAB_1000bc58;
      pcVar12 = pcVar12 + 0x1f8;
    }
    goto LAB_1000bf7d;
  }
LAB_1000bfb0:
  local_1c = uVar3;
LAB_1000bfb5:
  *(uint *)(local_18 + 0xaf0) = local_1c;
  if (((bVar9 & 1) == 0) && (1 < local_1c)) {
    pcVar14 = *(char **)(local_18 + 0xaec);
    uVar3 = 1;
    pcVar12 = pcVar14;
    local_2c = local_1c;
    local_24 = pcVar14;
    do {
      memcpy(local_324,pcVar12 + uVar3 * 0x1f8,0x1f8);
      uVar11 = extraout_ECX;
      local_28 = uVar3;
      local_20 = pcVar14;
      do {
        if (pcVar14 == (char *)0x0) {
          local_14 = 0;
        }
        else {
          local_14 = CONCAT31((int3)((uint)uVar11 >> 8),1);
          if (*(int *)(pcVar14 + 0x1ec) != 2) {
            local_14 = (uint)((pcVar14[0x1e8] & 2U) >> 1);
          }
        }
        if (local_138 == 2) {
          bVar13 = 1;
          iVar7 = strcmp(pcVar14,local_324);
          bVar9 = (byte)local_14;
        }
        else {
          uVar4 = local_13c & 2;
          iVar7 = strcmp(pcVar14,local_324);
          bVar9 = (byte)local_14;
          bVar13 = (byte)(uVar4 >> 1);
          if ((~bVar9 & 1) == 0 && bVar13 == 0) goto LAB_1000bfe9;
        }
        if ((bVar9 == bVar13) && (iVar7 < 1)) goto LAB_1000bfe9;
        memcpy(pcVar14 + 0x1f8,pcVar14,0x1f8);
        pcVar14 = pcVar14 + -0x1f8;
        uVar3 = uVar3 - 1;
        uVar11 = extraout_ECX_00;
      } while (uVar3 != 0);
      uVar3 = 0;
LAB_1000bfe9:
      pcVar12 = local_24;
      memcpy(local_24 + uVar3 * 0x1f8,local_324,0x1f8);
      uVar3 = local_28 + 1;
      pcVar14 = local_20 + 0x1f8;
    } while (uVar3 != local_2c);
    local_1c = *(uint *)(local_18 + 0xaf0);
  }
  iVar7 = *(int *)(local_18 + 100) + -0x6a;
  iVar6 = -1;
  if (0x49 < iVar7) {
    iVar7 = (int)((ulonglong)((longlong)iVar7 * 0x22983759) >> 0x20) - iVar7;
    iVar6 = (iVar7 >> 6) - (iVar7 >> 0x1f);
  }
  iVar7 = (int)((ulonglong)((longlong)(*(int *)(local_18 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
          -0x26 + *(int *)(local_18 + 0x60);
  iVar7 = (iVar7 >> 6) - (iVar7 >> 0x1f);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  iVar6 = local_1c + 2 + iVar7 * iVar6;
  iVar7 = *(int *)(local_18 + 0xaf8);
  if (iVar7 < 0) {
    *(undefined4 *)(local_18 + 0xaf8) = 0;
    iVar7 = 0;
  }
  if (iVar6 < 1 || iVar6 < iVar7) {
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(local_18 + 0xaf8) = iVar7;
  }
  return;
  while (cVar8 = *(char *)(local_18 + 0x79 + uVar10), uVar4 = uVar10 + 1, cVar8 != '\0') {
LAB_1000bdcf:
    uVar10 = uVar4;
    local_129[uVar10] = cVar8;
    if (0xef < uVar10 + 1) break;
  }
  local_129[uVar10 + 1] = '\0';
  uVar5 = strlen(local_129);
  iVar7 = local_34;
  if (uVar5 < 0xf1) {
    iVar6 = 0xf0;
    if (uVar5 != 0xf0) {
      iVar6 = uVar5 + 1;
      local_129[uVar5] = '/';
    }
    local_129[iVar6] = '\0';
  }
  uVar5 = strlen(local_129);
  uVar4 = uVar5 + uVar3;
  if (uVar4 < 0xf1) {
    pcVar12 = local_129 + uVar5;
LAB_1000be52:
    memcpy(pcVar12,pcVar14,uVar3);
    local_129[uVar4] = '\0';
    pcVar14 = local_30;
    for (uVar3 = local_14; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar6 = strcmp(pcVar14,local_129);
      if (iVar6 == 0) goto LAB_1000bc58;
      pcVar14 = pcVar14 + 0x1f8;
    }
    memset(local_324,0,0x1f8);
    if (local_129[0] == '\0') {
      local_233[0] = '\0';
      pcVar14 = (char *)0x0;
    }
    else {
      uVar4 = (uint)CONCAT11(local_129[0],local_129[0]);
      uVar3 = 0;
      do {
        uVar10 = uVar3;
        local_233[uVar10] = (char)(uVar4 >> 8);
        if (0xef < uVar10 + 1) break;
        uVar4 = (uint)CONCAT11(local_129[uVar10 + 1],(char)uVar4);
        uVar3 = uVar10 + 1;
      } while (local_129[uVar10 + 1] != '\0');
      local_233[uVar10 + 1] = '\0';
      pcVar12 = local_129;
      pcVar15 = (char *)0x0;
      do {
        pcVar14 = pcVar12;
        if ((char)uVar4 != '/') {
          pcVar14 = pcVar15;
        }
        pbVar1 = (byte *)(pcVar12 + 1);
        uVar4 = (uint)*pbVar1;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar14;
      } while (*pbVar1 != 0);
    }
    pcVar12 = local_129;
    if (pcVar14 != (char *)0x0) {
      pcVar12 = pcVar14 + 1;
    }
    cVar8 = *pcVar12;
    if (cVar8 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar3 = uVar4 + 1;
        local_324[uVar4] = cVar8;
        if (0xef < uVar3) break;
        cVar8 = pcVar12[uVar4 + 1];
        uVar4 = uVar3;
      } while (cVar8 != '\0');
    }
    local_324[uVar3] = '\0';
    local_13c = 2;
    local_138 = 2;
    local_134 = *(undefined4 *)((int)local_24 + 0x1f0);
    local_130 = *(undefined4 *)((int)local_24 + 500);
LAB_1000bf7d:
    uVar3 = local_14 + 1;
    memcpy((void *)(local_14 * 0x1f8 + iVar7),local_324,0x1f8);
  }
  else {
LAB_1000bc58:
    uVar3 = local_14;
  }
  uVar4 = local_28 + 1;
  if (uVar4 == local_2c) goto LAB_1000bfa6;
  goto LAB_1000bc68;
LAB_1000bfa6:
  bVar9 = *(byte *)(local_18 + 0x260);
  goto LAB_1000bfb0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006884
#undef UINT_000068c0
#undef UINT_000068cc
#undef local_324
#undef local_233
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_129
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c1b0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;

  iVar1 = (*(uint32_t *)(pf_module_state+0x1aacU));
  uVar2 = 0xffffffff;
  if (0 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (*(int *)((*(uint32_t *)(pf_module_state+0x1aacU)) + uVar5 * 4) == in_ECX) break;
      uVar5 = uVar5 + 1;
      uVar2 = 0xffffffff;
    } while ((*(uint32_t *)(pf_module_state+0x6274U)) != uVar5);
  }
  if (in_ECX < 0) {
    return;
  }
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c) != '\x01') {
    return;
  }
  if ((int)uVar2 < 0) {
    if (0x13 < (int)(*(uint32_t *)(pf_module_state+0x6274U))) {
      (*(uint32_t *)(pf_module_state+0x1474U)) = in_ECX;
      return;
    }
    uVar2 = (*(uint32_t *)(pf_module_state+0x6274U)) + 1;
    uVar5 = (*(uint32_t *)(pf_module_state+0x6274U));
  }
  else {
    uVar5 = (*(uint32_t *)(pf_module_state+0x6274U)) - 1;
    if ((int)uVar2 < (int)uVar5) {
      puVar4 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1aacU)) + 4 + uVar2 * 4);
      iVar3 = ~uVar2 + (*(uint32_t *)(pf_module_state+0x6274U));
      do {
        puVar4[-1] = *puVar4;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = (*(uint32_t *)(pf_module_state+0x6274U));
  }
  (*(uint32_t *)(pf_module_state+0x6274U)) = uVar2;
  *(int *)(iVar1 + uVar5 * 4) = in_ECX;
  (*(uint32_t *)(pf_module_state+0x1474U)) = in_ECX;
  return;
}

#undef DAT_0181f2a4
#undef DAT_0181f2d4
#undef DAT_0181f8dc
#undef DAT_018240a4

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c260
 */

uint recovered_1000c260(int in_ECX,char *in_EDX,void *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xcf < uVar3)) {
    pcVar2 = (code *)UINT_000068cc;
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)(in_ECX,in_EDX,param_3,param_4,param_5);
      return uVar3;
    }
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 &&
        ((uVar3 = Ram00006808, 0x87 < uVar3 &&
         (pcVar2 = (code *)UINT_00006884, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)(in_EDX,param_3,param_4,param_5);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006884
#undef UINT_000068cc

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_018225d8
#define DAT_018225d8 (*(uint8_t *)(0x18225d8U))
#undef DAT_018225dc
#define DAT_018225dc (*(uint8_t *)(0x18225dcU))
#undef DAT_018225e4
#define DAT_018225e4 (*(uint8_t *)(0x18225e4U))
#undef DAT_018225e8
#define DAT_018225e8 (*(uint8_t *)(0x18225e8U))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
#define local_34 (*(int *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
#define local_28 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c310(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  ulonglong uVar23;

  uVar19 = (*(uint32_t *)(pf_module_state+0x47b8U));
  uVar6 = (*(uint32_t *)(pf_module_state+0x47b4U));
  iVar18 = (*(uint32_t *)(pf_module_state+0x47a8U));
  uVar5 = (*(uint32_t *)(pf_module_state+0x12d8U));
  uVar8 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if ((*(uint32_t *)(pf_module_state+0x47a8U)) == 0 || (*(uint32_t *)(pf_module_state+0x47acU)) != 0) {
    if (0 < (int)(*(uint32_t *)(pf_module_state+0x12d8U))) {
      uVar19 = 0;
      uVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
      if (-1 < (int)(*(uint32_t *)(pf_module_state+0x12d4U))) {
        uVar6 = 0;
      }
      uVar9 = (*(uint32_t *)(pf_module_state+0x12d4U));
      if ((int)(*(uint32_t *)(pf_module_state+0x12d4U)) < 1) {
        uVar9 = 0;
      }
      bVar22 = (*(uint32_t *)(pf_module_state+0x1490U)) != 0;
      uVar16 = (int)(*(uint32_t *)(pf_module_state+0x12d4U)) >> 0x1f;
      uVar10 = (*(uint32_t *)(pf_module_state+0x12d4U)) ^ uVar16;
      puVar17 = (uint *)((*(uint32_t *)(pf_module_state+0x1490U)) + uVar6 * 4);
      do {
        if ((int)uVar6 < (int)uVar9 && bVar22) {
          uVar7 = (uVar19 * 0x12) / uVar5 + 0xe4;
          uVar12 = uVar7 & 0xff;
          puVar13 = puVar17;
          iVar18 = uVar10 - uVar16;
          do {
            *puVar13 = uVar7 * 0x10000 | uVar12 << 8 | uVar12 | 0xff000000;
            puVar13 = puVar13 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        uVar7 = (*(uint32_t *)(pf_module_state+0x12d4U));
        uVar19 = uVar19 + 1;
        puVar17 = puVar17 + uVar8;
      } while (uVar19 != uVar5);
      if (0x7c < (int)uVar5) {
        bVar22 = 0 < (int)(*(uint32_t *)(pf_module_state+0x12d4U));
        iVar18 = ((*(uint32_t *)(pf_module_state+0x12d4U)) ^ (int)(*(uint32_t *)(pf_module_state+0x12d4U)) >> 0x1f) - ((int)(*(uint32_t *)(pf_module_state+0x12d4U)) >> 0x1f);
        iVar11 = 0x3e;
        do {
          uVar8 = 0;
          iVar21 = iVar18 + -10;
          iVar20 = iVar11;
          while( true ) {
            if (((int)uVar8 < (int)uVar7 && -1 < (int)uVar8) &&
               ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && iVar20 < (int)uVar5)) {
              iVar14 = iVar20 * uVar7 + uVar8;
              *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar14 * 4) = 0xd2;
              *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar14 * 4) = 0xd2;
              *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar14 * 4) = 0xd2;
              *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 3 + iVar14 * 4) = 0xff;
            }
            if ((iVar20 == iVar11 + 10) && (uVar8 == uVar7)) break;
            iVar15 = 0;
            iVar14 = iVar21;
            if (-6 < iVar21) {
              iVar14 = iVar21 + -10;
              iVar15 = (uint)bVar22 * 2 + -1;
            }
            iVar4 = iVar21 * 2;
            iVar21 = iVar18;
            if (iVar18 < iVar4) {
              iVar21 = 0;
            }
            iVar21 = iVar14 + iVar21;
            uVar8 = uVar8 + iVar15;
            iVar20 = iVar20 + (uint)(iVar4 <= iVar18);
          }
          iVar11 = iVar11 + 0x48;
        } while (iVar11 < (int)(uVar5 - 0x3e));
      }
    }
  }
  else if (((((*(uint32_t *)(pf_module_state+0x47b4U)) != 0) && (0x18 < (int)(*(uint32_t *)(pf_module_state+0x12d8U)))) && (0 < (int)(*(uint32_t *)(pf_module_state+0x12d4U)))) &&
          ((*(uint32_t *)(pf_module_state+0x47b8U)) != 0)) {
    uVar9 = (*(uint32_t *)(pf_module_state+0x12d8U)) - 0x18;
    uVar10 = (uint)((ulonglong)(*(uint32_t *)(pf_module_state+0x47b8U)) * (ulonglong)(*(uint32_t *)(pf_module_state+0x12d4U)));
    iVar11 = uVar10 + (*(uint32_t *)(pf_module_state+0x47b4U));
    uVar23 = pf_app_udiv_full(CONCAT44((int)((ulonglong)(*(uint32_t *)(pf_module_state+0x47b8U)) * (ulonglong)(*(uint32_t *)(pf_module_state+0x12d4U))
                                              >> 0x20) + (uint)CARRY4(uVar10,(*(uint32_t *)(pf_module_state+0x47b4U))) + -1 +
                                         (uint)(iVar11 != 0),iVar11 + -1),(ulonglong)(*(uint32_t *)(pf_module_state+0x47b4U)));
    local_30 = (uint)uVar23;
    if ((int)local_30 < (int)uVar9) {
      uVar10 = (uint)((ulonglong)uVar6 * (ulonglong)uVar9);
      iVar11 = uVar10 + uVar19;
      uVar23 = pf_app_udiv_full(CONCAT44((int)((ulonglong)uVar6 * (ulonglong)uVar9 >> 0x20) +
                                           (uint)CARRY4(uVar10,uVar19) + -1 + (uint)(iVar11 != 0),
                                           iVar11 + -1),(ulonglong)uVar19);
      local_14 = (uint)uVar23;
      if ((int)local_14 < 1) {
        return;
      }
      local_34 = 0;
      if (local_14 < uVar8 || local_14 - uVar8 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = (int)(local_14 - uVar8) / 2;
      }
      local_30 = uVar9;
    }
    else {
      local_18 = 0;
      if (local_30 < uVar9 || local_30 - uVar9 == 0) {
        local_14 = uVar8;
        local_34 = 0;
      }
      else {
        local_34 = (int)(local_30 - uVar9) / 2;
        local_14 = uVar8;
      }
    }
    local_28 = uVar8 * 0x60;
    uVar19 = 0;
    do {
      uVar10 = (*(uint32_t *)(pf_module_state+0x47b8U));
      lVar3 = (ulonglong)(*(uint32_t *)(pf_module_state+0x47b8U)) * (ulonglong)(uVar19 + local_34);
      uVar23 = pf_app_udiv_full(CONCAT44(((int)(uVar19 + local_34) >> 0x1f) * (*(uint32_t *)(pf_module_state+0x47b8U)) +
                                           (int)((ulonglong)lVar3 >> 0x20),(int)lVar3),
                                  (ulonglong)local_30);
      local_1c = (uint)uVar23;
      if (uVar10 <= local_1c) {
        local_1c = uVar10 + 0x3fffffff;
      }
      uVar10 = 0;
      do {
        lVar3 = (ulonglong)(local_18 + uVar10) * (ulonglong)uVar6;
        uVar23 = pf_app_udiv_full(CONCAT44(((int)(local_18 + uVar10) >> 0x1f) * uVar6 +
                                             (int)((ulonglong)lVar3 >> 0x20),(int)lVar3),
                                    (ulonglong)local_14);
        uVar16 = (uint)uVar23;
        if (uVar6 <= uVar16) {
          uVar16 = uVar6 - 1;
        }
        if (((int)uVar10 < (int)uVar8) && ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)(uVar19 + 0x18) < (int)uVar5))
        {
          iVar11 = uVar16 + uVar6 * local_1c;
          uVar1 = *(undefined1 *)(iVar18 + 1 + iVar11 * 4);
          uVar2 = *(undefined1 *)(iVar18 + 2 + iVar11 * 4);
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + local_28 + uVar10 * 4) =
               *(undefined1 *)(iVar18 + iVar11 * 4);
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + local_28 + 1 + uVar10 * 4) = uVar1;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + local_28 + 2 + uVar10 * 4) = uVar2;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + local_28 + 3 + uVar10 * 4) = 0xff;
          uVar6 = (*(uint32_t *)(pf_module_state+0x47b4U));
        }
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar19 = uVar19 + 1;
      local_28 = local_28 + uVar8 * 4;
    } while (uVar19 != uVar9);
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef DAT_018225d8
#undef DAT_018225dc
#undef DAT_018225e4
#undef DAT_018225e8
#undef local_1c
#undef local_18
#undef local_14
#undef local_34
#undef local_30
#undef local_28

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef UNK_0181e901
#define UNK_0181e901 (*(uint8_t *)(0x181e901U))
#define in_stack_ffffffac (*(undefined4 *)(frame + 28))
#define local_3c (*(int *)(frame + 52))
#define local_2c (*(undefined2 *)(frame + 68))
#define local_2a (*(undefined1 *)(frame + 70))
#define local_18 (*(int *)(frame + 88))
#define local_11 (*(undefined1 *)(frame + 95))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c710(void)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar15;
  uint uVar14;

  uVar15 = (undefined1)((uint)in_stack_ffffffac >> 0x18);
  piVar5 = (int *)recovered_10004ab0();
  piVar5 = recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xad1U)),piVar5);
  iVar4 = (*(uint32_t *)(pf_module_state+0x1490U));
  iVar3 = (*(uint32_t *)(pf_module_state+0x12d8U));
  iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
  local_18 = (*(uint32_t *)(pf_module_state+0x12d4U));
  iVar7 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if (-1 < (*(uint32_t *)(pf_module_state+0x12d4U))) {
    iVar7 = 0;
  }
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) < 1) {
    local_18 = 0;
  }
  local_3c = (*(uint32_t *)(pf_module_state+0x12d8U));
  if (0x17 < (*(uint32_t *)(pf_module_state+0x12d8U))) {
    local_3c = 0x18;
  }
  bVar12 = (*(uint32_t *)(pf_module_state+0x1490U)) != 0;
  iVar11 = local_18 - iVar7;
  bVar13 = iVar11 != 0;
  bVar1 = iVar7 <= local_18;
  local_11 = (bVar13 && bVar1) && bVar12;
  if (0 < (*(uint32_t *)(pf_module_state+0x12d8U)) && ((bVar13 && bVar1) && bVar12)) {
    local_18 = local_18 - iVar7;
    puVar6 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar7 * 4);
    iVar9 = 0;
    do {
      puVar8 = puVar6;
      iVar10 = local_18;
      do {
        *puVar8 = 0xfffafafa;
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + iVar2;
    } while (iVar9 != local_3c);
  }
  if (((bVar13 && bVar1) && bVar12) && 0x17 < iVar3) {
    puVar6 = (undefined4 *)(iVar4 + (iVar2 * 0x17 + iVar7) * 4);
    do {
      *puVar6 = 0xffa6a6a6;
      puVar6 = puVar6 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (piVar5 != (int *)0x0) {
    uVar15 = 0;
    recovered_1000e9f0(piVar5,5,3,0x10,0x10);
  }
  local_2c = 0x1919;
  local_2a = 0x19;
  uVar14 = CONCAT13(uVar15,0x191919);
  recovered_1000ec70(0x19,7,"TUNDRA",0xffffffff,uVar14,1);
  local_2c = 0x4b4b;
  local_2a = 0x4b;
  uVar14 = CONCAT13((char)(uVar14 >> 0x18),0x4b4b4b);
  recovered_1000ec70(0x56,7,"FILE",0xffffffff,uVar14,1);
  local_2c = 0x4b4b;
  local_2a = 0x4b;
  uVar14 = CONCAT13((char)(uVar14 >> 0x18),0x4b4b4b);
  recovered_1000ec70(0x82,7,"EDIT",0xffffffff,uVar14,1);
  local_2c = 0x4b4b;
  local_2a = 0x4b;
  recovered_1000ec70(0xb0,7,"WINDOW",0xffffffff,CONCAT13((char)(uVar14 >> 0x18),0x4b4b4b),1);
  recovered_100096c0((int *)&local_2c);
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef UNK_0181e901
#undef in_stack_ffffffac
#undef local_3c
#undef local_2c
#undef local_2a
#undef local_18
#undef local_11

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef UNK_0181e943
#define UNK_0181e943 (*(uint8_t *)(0x181e943U))
#define in_stack_ffffffdc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c940(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  undefined1 uVar4;
  undefined4 uVar3;

  uVar4 = (undefined1)((uint)in_stack_ffffffdc >> 0x18);
  iVar2 = 8;
  if (0x5d < (*(uint32_t *)(pf_module_state+0x12d4U))) {
    iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U)) + -0x56;
  }
  piVar1 = (int *)recovered_10004ab0();
  piVar1 = recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xb13U)),piVar1);
  if ((0x6f < (*(uint32_t *)(pf_module_state+0x12d4U))) && (0x77 < (*(uint32_t *)(pf_module_state+0x12d8U)))) {
    if (piVar1 == (int *)0x0) {
      uVar3 = CONCAT22((short)(CONCAT13(uVar4,0xff0000) >> 0x10),0xecd7);
      recovered_1000f370(iVar2 + 0x16,0x2c,0x1e,0x18,(uint3)uVar3,
                         -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
      recovered_1000efc0(iVar2 + 0x16,0x2c,0x1e,0x18,CONCAT13((char)((uint)uVar3 >> 0x18),0x967450))
      ;
    }
    else {
      recovered_1000e9f0(piVar1,iVar2 + 0x14,0x2a,0x22,0x22);
    }
    recovered_1000f280(iVar2 + 3,0x4f,0x44,"Erebus",0x1c1c,0x1c);
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef UNK_0181e943
#undef in_stack_ffffffdc

#undef DAT_0181e738
#define DAT_0181e738 (*(uint8_t *)(0x181e738U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_01820690
#define DAT_01820690 (*(uint8_t *)(0x1820690U))
#undef DAT_018207ac
#define DAT_018207ac (*(uint8_t *)(0x18207acU))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#undef UNK_01820691
#define UNK_01820691 (*(uint8_t *)(0x1820691U))
#undef UNK_018206b9
#define UNK_018206b9 (*(uint8_t *)(0x18206b9U))
#define in_stack_ffffffcc (*(undefined4 *)(frame + 28))
#define local_2c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ca80(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int *in_ECX;
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *in_ECX_00;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar9;
  int *piVar8;
  byte bVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 uVar16;

  iVar11 = 0;
  local_2c = 0;
  do {
    iVar12 = iVar11 * 0x124;
    if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)))[iVar12] == '\x01') {
      iVar5 = ((*(uint32_t *)(pf_module_state+0x12d4U)) + -0x18) / 0x52;
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      iVar4 = (local_2c / iVar5) * 0x4e;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) + -0x42 < iVar4 + 0x66) {
        return;
      }
      bVar1 = recovered_1000f540((int)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)) + iVar12));
      uVar16 = (undefined1)((uint)in_stack_ffffffcc >> 0x18);
      if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)))[iVar12] != '\0') {
        in_ECX = (int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x2889U)) + iVar12);
        cVar2 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2889U)))[iVar12];
        if (cVar2 == '\0') {
          piVar6 = (int *)0x0;
        }
        else {
          piVar8 = in_ECX;
          piVar13 = (int *)0x0;
          do {
            piVar6 = piVar8;
            if (cVar2 != '/') {
              piVar6 = piVar13;
            }
            cVar2 = *(char *)((int)piVar8 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
            piVar13 = piVar6;
          } while (cVar2 != '\0');
        }
        piVar8 = in_ECX;
        if (piVar6 != (int *)0x0) {
          piVar8 = (int *)((int)piVar6 + 1);
        }
        cVar2 = (char)*piVar8;
        if (cVar2 == '\0') {
          piVar6 = (int *)0x0;
        }
        else {
          piVar13 = (int *)0x0;
          do {
            piVar6 = piVar8;
            if (cVar2 != '.') {
              piVar6 = piVar13;
            }
            cVar2 = *(char *)((int)piVar8 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
            piVar13 = piVar6;
          } while (cVar2 != '\0');
        }
        piVar8 = (int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x908U));
        if (piVar6 != (int *)0x0) {
          piVar8 = piVar6;
        }
        iVar5 = (local_2c % iVar5) * 0x52;
        iVar7 = 0;
        do {
          bVar10 = *(byte *)((int)piVar8 + iVar7);
          bVar9 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar7];
          if ((bVar10 == 0) || (bVar9 == 0)) {
            if (bVar10 == bVar9) {
              in_ECX_00 = recovered_1000f6e0((char *)in_ECX,*(uint **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x297cU)) + iVar12));
              goto joined_r0x1000ccf7;
            }
            break;
          }
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          if ((byte)(bVar9 + 0xbf) < 0x1a) {
            bVar9 = bVar9 | 0x20;
          }
          iVar7 = iVar7 + 1;
        } while (bVar10 == bVar9);
        bVar3 = recovered_1000fd50((char *)in_ECX);
        if (bVar3) {
          in_ECX_00 = (uint *)recovered_1000e6c0(in_ECX,*(int **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x297cU)) + iVar12));
joined_r0x1000ccf7:
          if (in_ECX_00 == (uint *)0x0) goto LAB_1000cd45;
          uVar16 = 0;
          recovered_1000e9f0((int *)in_ECX_00,iVar5 + 0x20,iVar4 + 0x2a,0x22,0x22);
        }
        else {
LAB_1000cd45:
          if (bVar1 == 0) {
            uVar14 = CONCAT22((short)(CONCAT13(uVar16,0xff0000) >> 0x10),0xffff);
            recovered_1000f370(iVar5 + 0x25,iVar4 + 0x2c,0x18,0x1e,(uint3)uVar14,
                               -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
            uVar15 = CONCAT13((char)((uint)uVar14 >> 0x18),0x787878);
            recovered_1000efc0(iVar5 + 0x25,iVar4 + 0x2c,0x18,0x1e,uVar15);
            uVar14 = CONCAT22((short)(CONCAT13((char)(uVar15 >> 0x18),0xe80000) >> 0x10),0xe8e8);
            recovered_1000f370(iVar5 + 0x36,iVar4 + 0x2d,6,6,(uint3)uVar14,
                               -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
            uVar16 = (undefined1)((uint)uVar14 >> 0x18);
          }
          else {
            uVar14 = CONCAT22((short)(CONCAT13(uVar16,0xff0000) >> 0x10),0xecd7);
            recovered_1000f370(iVar5 + 0x20,iVar4 + 0x30,0x22,0x18,(uint3)uVar14,
                               -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
            uVar15 = CONCAT13((char)((uint)uVar14 >> 0x18),0xcc823e);
            recovered_1000efc0(iVar5 + 0x20,iVar4 + 0x30,0x22,0x18,uVar15);
            uVar14 = CONCAT22((short)(CONCAT13((char)(uVar15 >> 0x18),0xfc0000) >> 0x10),0xdfbe);
            recovered_1000f370(iVar5 + 0x25,iVar4 + 0x2c,0x10,7,(uint3)uVar14,
                               -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
            uVar15 = CONCAT13((char)((uint)uVar14 >> 0x18),0xcc823e);
            recovered_1000efc0(iVar5 + 0x25,iVar4 + 0x2c,0x10,7,uVar15);
            uVar16 = (undefined1)(uVar15 >> 0x18);
          }
        }
        in_stack_ffffffcc = CONCAT13(uVar16,0x1c1c1c);
        recovered_1000f280(iVar5 + 0xf,iVar4 + 0x4f,0x44,&(*(uint8_t *)((uintptr_t)pf_module_state+0x2861U)) + iVar12,0x1c1c,0x1c);
      }
      local_2c = local_2c + 1;
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 0x18) {
      return;
    }
  } while( true );
}

#undef DAT_0181e738
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_01820690
#undef DAT_018207ac
#undef UNK_0181e96f
#undef UNK_01820691
#undef UNK_018206b9
#undef in_stack_ffffffcc
#undef local_2c

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f120
#define DAT_0181f120 (*(uint8_t *)(0x181f120U))
#undef DAT_0181f124
#define DAT_0181f124 (*(uint8_t *)(0x181f124U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define local_98 (*(uint *)(frame + 72))
#define local_84 (*(undefined1 * *)(frame + 92))
#define local_80 (*(undefined1 * *)(frame + 96))
#define local_7c (*(undefined1 * *)(frame + 100))
#define local_78 (*(undefined1 * *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(char * *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define local_68 (*(int *)(frame + 120))
#define local_64 (*(undefined1 * *)(frame + 124))
#define local_60 (*(undefined1 * *)(frame + 128))
#define local_5c (*(int *)(frame + 132))
#define local_58 (*(undefined1 * *)(frame + 136))
#define local_54 (*(undefined1 * *)(frame + 140))
#define local_4d (*(byte *)(frame + 147))
#define local_4c (*(undefined1 * *)(frame + 148))
#define local_48 (*(undefined1 * *)(frame + 152))
#define local_44 (*(undefined1 * *)(frame + 156))
#define local_40 (*(undefined1 * *)(frame + 160))
#define local_3c (*(undefined4 *)(frame + 164))
#define local_38 (*(int *)(frame + 168))
#define local_34 (*(undefined1 * *)(frame + 172))
#define local_30 (*(undefined1 * *)(frame + 176))
#define local_28 (*(undefined1 * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_18 (*(undefined1 * *)(frame + 200))
#define local_14 (*(undefined1 * *)(frame + 204))
#define in_stack_ffffff3f (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ce80(char *in_ECX)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;
  longlong lVar2;
  char *in_ECX_00;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char in_DL;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 uVar24;
  uint uVar23;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  bool bVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined2 uVar40;

  if (*in_ECX != '\x01') {
    return;
  }
  if (in_ECX[1] != '\x01') {
    return;
  }
  puVar25 = (undefined1 *)0x18;
  if (in_ECX[2] == '\0') {
    puVar25 = *(undefined1 **)(in_ECX + 100);
  }
  uVar19 = *(uint *)(in_ECX + 8);
  if (uVar19 == 0xffffffff) {
    uVar6 = (*(uint32_t *)(pf_module_state+0x12ecU));
    if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) goto LAB_1000cecf;
LAB_1000ced7:
    local_4d = ~in_ECX[5];
  }
  else {
    uVar6 = uVar19;
    if (3 < uVar19) goto LAB_1000ced7;
LAB_1000cecf:
    if (uVar6 != 0) goto LAB_1000ced7;
    local_4d = 0xff;
  }
  local_68 = *(int *)(in_ECX + 0x58);
  local_60 = *(undefined1 **)(in_ECX + 0x5c);
  local_5c = *(int *)(in_ECX + 0x60);
  if (uVar19 == 0xffffffff) {
    uVar19 = (*(uint32_t *)(pf_module_state+0x12ecU));
    if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) goto LAB_1000cf0b;
LAB_1000cf13:
    bVar3 = in_ECX[6];
  }
  else {
    if (3 < uVar19) goto LAB_1000cf13;
LAB_1000cf0b:
    if (uVar19 != 0) goto LAB_1000cf13;
    bVar3 = 0xff;
  }
  local_3c = CONCAT13(PF_PART1(local_3c, 3),0xacacac);
  local_64 = puVar25;
  recovered_1000f370(local_68 + 5,(int)(local_60 + 6),local_5c,(int)puVar25,0xacacac,bVar3);
  uVar19 = *(uint *)(in_ECX + 8);
  uVar6 = (*(uint32_t *)(pf_module_state+0x12ecU));
  if (uVar19 != 0xffffffff) {
    uVar6 = uVar19;
  }
  local_70 = in_ECX;
  if (uVar6 < 4) {
    if (uVar6 == 3) {
      if (uVar19 == 0xffffffff) {
        if ((*(uint32_t *)(pf_module_state+0x12ecU)) == 2) {
          puVar9 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f0U));
        }
        else {
          if ((*(uint32_t *)(pf_module_state+0x12ecU)) != 3) goto LAB_1000dad7;
          puVar9 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f4U));
        }
      }
      else {
        puVar9 = (uint *)(in_ECX + 0xc);
      }
      puVar25 = (undefined1 *)*puVar9;
      local_80 = (undefined1 *)0x0;
      if (puVar25 != (undefined1 *)0x0) {
        in_stack_ffffff3f = (undefined1)((uint)&local_3c >> 0x18);
        uVar5 = recovered_100110a0(local_68,(int)local_60,local_5c,(int)local_64,&local_3c,&local_80
                                  );
        iVar1 = (*(uint32_t *)(pf_module_state+0x12d4U));
        if ((char)uVar5 != '\0') {
          puVar26 = local_34;
          if ((int)local_30 <= (int)local_34) {
            puVar26 = local_30;
          }
          puVar26 = (undefined1 *)((int)puVar26 / 2);
          puVar33 = puVar26;
          if (puVar25 <= puVar26) {
            puVar33 = puVar25;
          }
          puVar25 = puVar33;
          if ((int)puVar26 <= (int)puVar33) {
            puVar25 = puVar26;
          }
          puVar22 = (undefined1 *)0x1;
          if (0 < (int)puVar33) {
            puVar22 = puVar25;
          }
          puVar25 = (undefined1 *)((int)puVar22 * 2);
          if ((int)puVar26 <= (int)puVar22 * 2) {
            puVar25 = puVar26;
          }
          local_6c = (undefined1 *)0x8;
          if (3 < (int)puVar22) {
            local_6c = puVar25;
          }
          puVar25 = (undefined1 *)((int)local_34 * 0x80 + -0x80);
          puVar26 = (undefined1 *)((int)local_30 * 0x80 + -0x80);
          local_84 = puVar25;
          if ((int)puVar25 <= (int)puVar26) {
            local_84 = puVar26;
          }
          if (0 < (int)local_30) {
            uVar19 = (uint)puVar22 / 0xc;
            if (4 < uVar19) {
              uVar19 = 5;
            }
            uVar6 = (uint)puVar22 >> 1;
            local_98 = 1;
            if ((undefined1 *)0xb < puVar22) {
              local_98 = uVar19;
            }
            uVar19 = uVar6;
            if (0x25 < uVar6) {
              uVar19 = 0x26;
            }
            puVar20 = (undefined1 *)0x0;
            puVar27 = local_30;
            puVar33 = local_34;
            local_7c = puVar22;
            do {
              if (0 < (int)puVar33) {
                local_58 = (undefined1 *)
                           (((int)(puVar20 + local_38) * iVar1 + local_3c) * 4 + (*(uint32_t *)(pf_module_state+0x1490U)));
                local_78 = (undefined1 *)((int)puVar20 * 0x100);
                uVar34 = (int)local_78 - (int)puVar26;
                uVar29 = (int)uVar34 >> 0x1f;
                local_74 = (undefined1 *)((uVar34 ^ uVar29) - uVar29);
                puVar22 = (undefined1 *)0x0;
                local_24 = puVar20;
                do {
                  puVar27 = local_7c;
                  local_28 = puVar33 + -1;
                  puVar31 = local_28 + -(int)puVar22;
                  puVar20 = puVar31;
                  if ((int)puVar22 <= (int)puVar31) {
                    puVar20 = puVar22;
                  }
                  puVar32 = puVar20;
                  if ((int)local_24 <= (int)puVar20) {
                    puVar32 = local_24;
                  }
                  local_54 = local_30;
                  local_4c = local_30 + -1;
                  puVar7 = local_4c + -(int)local_24;
                  local_18 = (undefined1 *)0x0;
                  puVar21 = (undefined1 *)0x0;
                  local_14 = puVar7;
                  if ((int)puVar32 <= (int)puVar7) {
                    puVar21 = (undefined1 *)((uint)((int)puVar31 < (int)puVar22) * 0x800 + -0x400);
                    local_14 = puVar32;
                  }
                  uVar8 = 0x400;
                  if ((int)puVar32 <= (int)puVar7) {
                    uVar8 = (uint)((int)puVar20 <= (int)local_24) * 0x400 - 0x400;
                  }
                  if ((int)puVar20 <= (int)local_24) {
                    local_18 = puVar21;
                  }
                  local_44 = puVar33;
                  local_40 = puVar22;
                  if (0 < (int)local_6c) {
                    puVar20 = local_6c;
                    puVar31 = local_6c;
                    if (!((int)local_24 < (int)local_6c && (int)puVar22 < (int)local_6c)) {
                      if (((int)local_24 < (int)local_6c) &&
                         ((int)puVar33 - (int)local_6c <= (int)puVar22)) {
                        puVar20 = local_28 + -(int)local_6c;
                      }
                      else if ((int)local_24 < (int)local_30 - (int)local_6c ||
                               (int)local_6c <= (int)puVar22) {
                        if (((int)puVar22 < (int)puVar33 - (int)local_6c) ||
                           ((int)local_24 < (int)local_30 - (int)local_6c)) goto LAB_1000d573;
                        puVar20 = local_28 + -(int)local_6c;
                        puVar31 = local_4c + -(int)local_6c;
                      }
                      else {
                        puVar31 = local_4c + -(int)local_6c;
                      }
                    }
                    uVar15 = (int)puVar22 - (int)puVar20;
                    uVar23 = (int)local_24 - (int)puVar31;
                    puVar33 = (undefined1 *)(uVar23 * uVar23 + uVar15 * uVar15);
                    puVar20 = (undefined1 *)0x40000000;
                    puVar31 = (undefined1 *)0x0;
                    do {
                      local_1c = puVar31;
                      puVar32 = puVar20;
                      puVar20 = (undefined1 *)((uint)puVar32 >> 2);
                      puVar31 = (undefined1 *)((int)puVar32 << 0x1e | (uint)local_1c >> 2);
                    } while (puVar32 != (undefined1 *)0x0 ||
                             (uint)-(int)puVar32 < (uint)(puVar33 < local_1c));
                    if (local_1c == (undefined1 *)0x0 && puVar32 == (undefined1 *)0x0) {
                      uVar8 = 0;
                      local_18 = (undefined1 *)0x0;
                      local_14 = local_6c;
                    }
                    else {
                      puVar20 = (undefined1 *)0x0;
                      local_14 = (undefined1 *)0x0;
                      local_28 = (undefined1 *)0x0;
                      do {
                        local_18 = local_1c;
                        puVar31 = local_28;
                        local_4c = puVar33;
                        puVar7 = puVar32 + (int)puVar20 + CARRY4((uint)local_18,(uint)puVar31);
                        local_1c = (undefined1 *)0x0;
                        local_20 = (undefined1 *)0x0;
                        local_48 = (undefined1 *)0x0;
                        puVar33 = (undefined1 *)0x0;
                        if (puVar7 <= local_14 &&
                            (uint)(local_4c < local_18 + (int)puVar31) <=
                            (uint)((int)local_14 - (int)puVar7)) {
                          local_48 = puVar32;
                          puVar33 = puVar7;
                          local_20 = local_18;
                          local_1c = local_18 + (int)puVar31;
                        }
                        uVar8 = (uint)puVar31 >> 1 | (int)puVar20 << 0x1f;
                        iVar16 = -(int)local_1c;
                        local_14 = local_14 + (-(uint)(local_4c < local_1c) - (int)puVar33);
                        local_28 = local_20 + uVar8;
                        puVar20 = local_48 +
                                  (uint)CARRY4(uVar8,(uint)local_20) + ((uint)puVar20 >> 1);
                        local_1c = (undefined1 *)((int)puVar32 << 0x1e | (uint)local_18 >> 2);
                        local_20 = (undefined1 *)((uint)puVar32 >> 2);
                        bVar35 = puVar32 != (undefined1 *)0x0;
                        uVar8 = -(int)puVar32;
                        puVar33 = local_4c + iVar16;
                        puVar32 = local_20;
                      } while (bVar35 || uVar8 < ((undefined1 *)0x3 < local_18));
                      uVar8 = 0;
                      puVar33 = (undefined1 *)0x0;
                      if (local_28 <= local_6c) {
                        puVar33 = local_6c + -(int)local_28;
                      }
                      if (local_28 == (undefined1 *)0x0) {
                        local_18 = (undefined1 *)0x0;
                        local_28 = puVar31;
                      }
                      else {
                        lVar36 = pf_app_div_full(CONCAT44(((int)uVar15 >> 0x1f) << 10 |
                                                             uVar15 >> 0x16,uVar15 * 0x400),
                                                    ZEXT48(local_28));
                        local_18 = (undefined1 *)lVar36;
                        in_stack_ffffff3f = (undefined1)((uint)local_28 >> 0x18);
                        lVar36 = pf_app_div_full(CONCAT44(((int)uVar23 >> 0x1f) << 10 |
                                                             uVar23 >> 0x16,uVar23 * 0x400),
                                                    ZEXT48(local_28));
                        uVar8 = (uint)lVar36;
                      }
                      local_14 = puVar33;
                    }
                  }
LAB_1000d573:
                  if ((int)local_14 < 1) {
                    local_14 = (undefined1 *)0x0;
                  }
                  puVar32 = (undefined1 *)((int)puVar22 * 0x100);
                  local_1c = local_78;
                  puVar31 = puVar32;
                  if ((int)puVar27 - (int)local_14 != 0 && (int)local_14 <= (int)puVar27) {
                    uVar15 = (((int)puVar27 - (int)local_14) * 0x400 + uVar6) / (uint)puVar27;
                    if (0x3ff < uVar15) {
                      uVar15 = 0x400;
                    }
                    lVar36 = (ulonglong)(uVar15 * uVar15) * (ulonglong)(uVar15 * -2 + 0xc00) +
                             0x80000;
                    uVar15 = (uint)lVar36 >> 0x14 | (int)((ulonglong)lVar36 >> 0x20) << 0xc;
                    uVar15 = ((uVar15 * (uVar15 + 0x400) + 0x200) / 0x600) * (uVar19 + 4);
                    iVar16 = ((int)local_18 >> 0x1f) * uVar15;
                    lVar36 = (ulonglong)uVar15 * ZEXT48(local_18) +
                             CONCAT44(iVar16,(uint)((int)((ulonglong)uVar15 * ZEXT48(local_18) >>
                                                         0x20) + iVar16 >> 0x1f) >> 0x14);
                    puVar31 = puVar32 + -((int)((ulonglong)lVar36 >> 0x20) << 0x14 |
                                         (uint)lVar36 >> 0xc);
                    iVar16 = ((int)uVar8 >> 0x1f) * uVar15;
                    lVar2 = (ulonglong)uVar15 * (ulonglong)uVar8 +
                            CONCAT44(iVar16,(uint)((int)((ulonglong)uVar15 * (ulonglong)uVar8 >>
                                                        0x20) + iVar16 >> 0x1f) >> 0x14);
                    local_1c = local_78 +
                               -((int)((ulonglong)lVar2 >> 0x20) << 0x14 | (uint)lVar2 >> 0xc);
                    puVar22 = local_40;
                  }
                  local_20 = (undefined1 *)uVar8;
                  puVar33 = local_44;
                  puVar27 = local_30;
                  puVar20 = local_24;
                  if (0 < (int)local_84) {
                    local_14 = (undefined1 *)((int)puVar32 - (int)puVar25);
                    uVar8 = (int)local_14 >> 0x1f;
                    puVar32 = (undefined1 *)(((uint)local_14 ^ uVar8) - uVar8);
                    if (puVar32 <= local_74) {
                      puVar32 = local_74;
                    }
                    local_18 = puVar31;
                    puVar22 = local_40;
                    if (puVar32 != (undefined1 *)0x0) {
                      if (local_84 <= puVar32) {
                        puVar32 = local_84;
                      }
                      uVar37 = pf_app_udiv_full(CONCAT44((uint)puVar32 >> 0x16,(int)puVar32 << 10)
                                                  ,ZEXT48(local_84));
                      uVar15 = 0x400 - (int)uVar37;
                      if (0x3ff < uVar15) {
                        uVar15 = 0x400;
                      }
                      lVar36 = (ulonglong)(uVar15 * uVar15) * (ulonglong)(uVar15 * -2 + 0xc00) +
                               0x80000;
                      in_stack_ffffff3f = (undefined1)((uint)puVar32 >> 0x18);
                      uVar38 = pf_app_div_full(CONCAT44(uVar8 << 10 | (uint)local_14 >> 0x16,
                                                           (int)local_14 << 10),ZEXT48(puVar32));
                      iVar16 = (int)uVar38;
                      uVar39 = pf_app_div_full(CONCAT44(uVar29 << 10 | uVar34 >> 0x16,
                                                           uVar34 * 0x400),ZEXT48(puVar32));
                      iVar10 = (int)uVar39;
                      uVar37 = (ulonglong)
                               ((uint)lVar36 >> 0x14 | (int)((ulonglong)lVar36 >> 0x20) << 0xc) *
                               (ulonglong)local_98;
                      iVar17 = (int)(uVar37 >> 0x20);
                      uVar8 = (uint)(uVar37 * (longlong)iVar16);
                      uVar15 = (uint)((longlong)(uVar37 * (longlong)iVar16) >> 0x3f) >> 0x14;
                      puVar31 = local_18 +
                                -((iVar16 * iVar17 +
                                   (int)((uVar37 & 0xffffffff) * (uVar38 & 0xffffffff) >> 0x20) +
                                   (iVar16 >> 0x1f) * (int)uVar37 + (uint)CARRY4(uVar15,uVar8)) *
                                  0x100000 | uVar15 + uVar8 >> 0xc);
                      uVar8 = (uint)(uVar37 * (longlong)iVar10);
                      uVar15 = (uint)((longlong)(uVar37 * (longlong)iVar10) >> 0x3f) >> 0x14;
                      local_1c = local_1c +
                                 -((iVar17 * iVar10 +
                                    (int)((uVar37 & 0xffffffff) * (uVar39 & 0xffffffff) >> 0x20) +
                                    (iVar10 >> 0x1f) * (int)uVar37 + (uint)CARRY4(uVar15,uVar8)) *
                                   0x100000 | uVar15 + uVar8 >> 0xc);
                      puVar33 = local_44;
                      puVar22 = local_40;
                      puVar27 = local_30;
                      puVar20 = local_24;
                    }
                  }
                  local_44 = puVar33;
                  if (0 < (int)local_54) {
                    if (local_58 != (undefined1 *)0x0) {
                      if (local_80 != (undefined1 *)0x0) {
                        puVar32 = (undefined1 *)((int)puVar33 * 0x100 + -0x100);
                        puVar22 = puVar31;
                        if ((int)puVar32 <= (int)puVar31) {
                          puVar22 = puVar32;
                        }
                        puVar32 = (undefined1 *)0x0;
                        if (-1 < (int)puVar31) {
                          puVar32 = puVar22;
                        }
                        puVar31 = (undefined1 *)((int)local_54 * 0x100 + -0x100);
                        puVar22 = local_1c;
                        if ((int)puVar31 <= (int)local_1c) {
                          puVar22 = puVar31;
                        }
                        puVar31 = (undefined1 *)0x0;
                        if (-1 < (int)local_1c) {
                          puVar31 = puVar22;
                        }
                        iVar10 = (int)puVar32 >> 8;
                        iVar16 = iVar10 + 1;
                        if ((int)puVar33 <= iVar10 + 1) {
                          iVar16 = iVar10;
                        }
                        iVar12 = (int)puVar31 >> 8;
                        iVar17 = iVar12 + 1;
                        if ((int)local_54 <= iVar12 + 1) {
                          iVar17 = iVar12;
                        }
                        iVar11 = iVar16 + iVar12 * (int)puVar33;
                        local_20 = (undefined1 *)(iVar12 * (int)puVar33 + iVar10);
                        local_44 = (undefined1 *)(iVar10 + iVar17 * (int)puVar33);
                        local_18 = (undefined1 *)(iVar17 * (int)puVar33 + iVar16);
                        uVar8 = (uint)puVar32 & 0xff;
                        uVar15 = (uint)puVar31 & 0xff;
                        local_28 = (undefined1 *)((0x100 - uVar15) * (0x100 - uVar8));
                        iVar16 = (0x100 - uVar8) * uVar15;
                        local_1c = (undefined1 *)(uVar15 * uVar8);
                        local_48 = (undefined1 *)((0x100 - uVar15) * uVar8);
                        *local_58 = (char)((uint)(byte)local_80[(int)local_18 * 4] * (int)local_1c +
                                           0x8000 + (uint)(byte)local_80[(int)local_44 * 4] * iVar16
                                                    + (uint)(byte)local_80[iVar11 * 4] *
                                                      (int)local_48 +
                                                      (uint)(byte)local_80[(int)local_20 * 4] *
                                                      (int)local_28 >> 0x10);
                        local_58[1] = (char)((uint)(byte)local_80[(int)local_18 * 4 + 1] *
                                             (int)local_1c + 0x8000 +
                                             (uint)(byte)local_80[(int)local_44 * 4 + 1] * iVar16 +
                                             (uint)(byte)local_80[iVar11 * 4 + 1] * (int)local_48 +
                                             (uint)(byte)local_80[(int)local_20 * 4 + 1] *
                                             (int)local_28 >> 0x10);
                        local_58[2] = (char)((uint)(byte)local_80[(int)local_18 * 4 + 2] *
                                             (int)local_1c + 0x8000 +
                                             (uint)(byte)local_80[(int)local_44 * 4 + 2] * iVar16 +
                                             (uint)(byte)local_80[iVar11 * 4 + 2] * (int)local_48 +
                                             (uint)(byte)local_80[(int)local_20 * 4 + 2] *
                                             (int)local_28 >> 0x10);
                        local_58[3] = 0xff;
                        puVar22 = local_40;
                        puVar33 = local_34;
                        local_4c = local_80;
                      }
                    }
                  }
                  local_58 = local_58 + 4;
                  puVar22 = puVar22 + 1;
                  local_30 = puVar27;
                  local_24 = puVar20;
                } while ((int)puVar22 < (int)puVar33);
              }
              puVar20 = puVar20 + 1;
            } while ((int)puVar20 < (int)puVar27);
          }
        }
      }
    }
    else {
      if (uVar6 != 2) goto LAB_1000dadd;
      if (uVar19 == 0xffffffff) {
        if ((*(uint32_t *)(pf_module_state+0x12ecU)) == 2) {
          puVar9 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f0U));
        }
        else {
          if ((*(uint32_t *)(pf_module_state+0x12ecU)) != 3) goto LAB_1000dad7;
          puVar9 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x12f4U));
        }
      }
      else {
        puVar9 = (uint *)(in_ECX + 0xc);
      }
      puVar25 = (undefined1 *)*puVar9;
      local_80 = (undefined1 *)0x0;
      if (puVar25 != (undefined1 *)0x0) {
        in_stack_ffffff3f = (undefined1)((uint)&local_3c >> 0x18);
        uVar5 = recovered_100110a0(local_68,(int)local_60,local_5c,(int)local_64,&local_3c,&local_80
                                  );
        iVar1 = (*(uint32_t *)(pf_module_state+0x12d4U));
        if ((char)uVar5 != '\0') {
          puVar26 = local_34;
          if ((int)local_34 <= (int)local_30) {
            puVar26 = local_30;
          }
          puVar33 = puVar26;
          if (puVar25 <= puVar26) {
            puVar33 = puVar25;
          }
          puVar25 = puVar33;
          if ((int)puVar26 <= (int)puVar33) {
            puVar25 = puVar26;
          }
          if ((int)puVar33 < 1) {
            local_24 = (undefined1 *)0x1;
          }
          else {
            local_24 = (undefined1 *)((int)(puVar25 + 1) / 2);
          }
          if (0 < (int)local_30) {
            local_74 = (undefined1 *)((int)local_24 * -2);
            iVar16 = 0;
            do {
              if (0 < (int)local_34) {
                puVar26 = (undefined1 *)
                          (((local_38 + iVar16) * iVar1 + local_3c) * 4 + (*(uint32_t *)(pf_module_state+0x1490U)));
                puVar25 = (undefined1 *)0x0;
                do {
                  local_78 = puVar25;
                  puVar25 = local_34 + -1;
                  puVar22 = local_78 + (int)local_24 * -2;
                  puVar33 = puVar22;
                  if ((int)puVar25 <= (int)puVar22) {
                    puVar33 = puVar25;
                  }
                  local_14 = (undefined1 *)0x0;
                  local_40 = (undefined1 *)0x0;
                  if (-1 < (int)puVar22) {
                    local_40 = puVar33;
                  }
                  puVar22 = local_78 + -(int)local_24;
                  puVar33 = puVar22;
                  if ((int)puVar25 <= (int)puVar22) {
                    puVar33 = puVar25;
                  }
                  local_44 = (undefined1 *)0x0;
                  if (-1 < (int)puVar22) {
                    local_44 = puVar33;
                  }
                  local_54 = local_78;
                  if ((int)puVar25 <= (int)local_78) {
                    local_54 = puVar25;
                  }
                  puVar33 = local_78 + (int)local_24;
                  puVar22 = puVar33;
                  if ((int)puVar25 <= (int)puVar33) {
                    puVar22 = puVar25;
                  }
                  local_58 = (undefined1 *)0x0;
                  if (-1 < (int)puVar33) {
                    local_58 = puVar22;
                  }
                  puVar33 = local_78 + (int)local_24 * 2;
                  puVar22 = puVar33;
                  if ((int)puVar25 <= (int)puVar33) {
                    puVar22 = puVar25;
                  }
                  local_7c = local_34;
                  local_6c = (undefined1 *)0x0;
                  if (-1 < (int)puVar33) {
                    local_6c = puVar22;
                  }
                  local_48 = local_30 + -1;
                  puVar33 = (undefined1 *)0x0;
                  iVar10 = 0;
                  uVar19 = 5;
                  puVar25 = local_74;
                  do {
                    local_18 = puVar25;
                    local_20 = (undefined1 *)uVar19;
                    puVar25 = local_18;
                    if ((int)local_48 <= (int)local_18) {
                      puVar25 = local_48;
                    }
                    puVar22 = (undefined1 *)0x0;
                    if (-1 < (int)local_18) {
                      puVar22 = puVar25;
                    }
                    iVar17 = (int)puVar22 * (int)local_34;
                    puVar25 = local_40 + iVar17;
                    local_4c = local_44 + iVar17;
                    local_1c = local_54 + iVar17;
                    local_28 = puVar33 + (uint)(byte)local_80[(int)local_1c * 4 + 1] +
                                         (uint)(byte)local_80[(int)local_4c * 4 + 1] +
                                         (uint)(byte)local_80[(int)puVar25 * 4 + 1];
                    puVar22 = local_58 + iVar17;
                    puVar27 = local_6c + iVar17;
                    iVar10 = (uint)(byte)local_80[(int)puVar27 * 4] +
                             (uint)(byte)local_80[(int)puVar22 * 4] +
                             (uint)(byte)local_80[(int)local_1c * 4] +
                             (uint)(byte)local_80[(int)local_4c * 4] +
                             iVar10 + (uint)(byte)local_80[(int)puVar25 * 4];
                    puVar33 = local_28 +
                              (uint)(byte)local_80[(int)puVar27 * 4 + 1] +
                              (uint)(byte)local_80[(int)puVar22 * 4 + 1];
                    local_14 = (undefined1 *)
                               ((uint)(byte)local_80[(int)puVar27 * 4 + 2] +
                                (uint)(byte)local_80[(int)puVar22 * 4 + 2] +
                               (uint)(byte)local_80[(int)local_1c * 4 + 2] +
                               (uint)(byte)local_80[(int)local_4c * 4 + 2] +
                               (int)local_14 + (uint)(byte)local_80[(int)puVar25 * 4 + 2]);
                    uVar19 = (int)local_20 - 1U;
                    puVar25 = local_18 + (int)local_24;
                  } while ((int)local_20 - 1U != 0);
                  *puVar26 = (char)((iVar10 + 0xcU) / 0x19);
                  puVar26[1] = (char)((uint)(puVar33 + 0xc) / 0x19);
                  puVar26[2] = (char)(((int)local_14 + 0xcU) / 0x19);
                  puVar26[3] = 0xff;
                  puVar26 = puVar26 + 4;
                  puVar25 = local_78 + 1;
                } while ((int)(local_78 + 1) < (int)local_34);
              }
              iVar16 = iVar16 + 1;
              local_74 = local_74 + 1;
            } while (iVar16 < (int)local_30);
          }
        }
      }
    }
LAB_1000dad7:
    puVar25 = local_64;
  }
LAB_1000dadd:
  bVar3 = local_4d;
  iVar1 = local_68;
  local_3c = CONCAT13(PF_PART1(local_3c, 3),0xf6f6f6);
  iVar16 = local_3c;
  local_14 = (undefined1 *)(uint)local_4d;
  PF_PART1(local_3c, 2) = 0xf6;
  PF_PART2(local_3c, 0) = 0xf6f6;
  local_3c = iVar16;
  if ((local_70[2] == '\0') && (*(int *)(local_70 + 0x10) == 6)) {
    uVar19 = *(uint *)(local_70 + 8);
    if (*(uint *)(local_70 + 8) == 0xffffffff) {
      uVar19 = (*(uint32_t *)(pf_module_state+0x12ecU));
    }
    if ((3 < uVar19) || (uVar19 != 0)) {
      local_18 = *(undefined1 **)(local_70 + 0x58);
      local_1c = *(undefined1 **)(local_70 + 0x5c);
      local_4c = local_1c + 0x26;
      local_28 = *(undefined1 **)(local_70 + 0x60);
      local_20 = *(undefined1 **)(local_70 + 100);
      puVar25 = (undefined1 *)((int)local_20 - 0x34);
      local_48 = puVar25;
      recovered_1000f370(local_68,(int)local_60,local_5c,(int)local_4c - (int)local_60,0xf6f6f6,
                         local_4d);
      puVar26 = local_4c;
      recovered_1000f370(iVar1,(int)local_4c,(int)(local_18 + (0xe - iVar1)),(int)puVar25,
                         (uint3)local_3c,bVar3);
      recovered_1000f370((int)(local_18 + -0xe + (int)local_28),(int)puVar26,
                         (local_5c + iVar1) - (int)(local_18 + -0xe + (int)local_28),(int)local_48,
                         (uint3)local_3c,bVar3);
      puVar26 = local_1c + ((int)local_20 - 0xe);
      puVar25 = local_64;
      puVar33 = local_60 + ((int)local_64 - (int)(local_1c + ((int)local_20 - 0xe)));
      uVar40 = (undefined2)local_3c;
      uVar4 = PF_PART1(local_3c, 2);
      goto LAB_1000dc3e;
    }
  }
  puVar26 = local_60;
  puVar33 = puVar25;
  uVar40 = (undefined2)local_3c;
  uVar4 = PF_PART1(local_3c, 2);
LAB_1000dc3e:
  recovered_1000f370(iVar1,(int)puVar26,local_5c,(int)puVar33,CONCAT12(uVar4,uVar40),bVar3);
  iVar10 = local_3c;
  iVar16 = local_5c;
  iVar1 = local_68;
  bVar35 = in_DL == '\0';
  uVar4 = 0x28;
  if (bVar35) {
    uVar4 = 0x80;
  }
  PF_PART2(local_3c, 0) = CONCAT11(uVar4,uVar4);
  PF_PART1(local_3c, 3) = SUB41(iVar10,3);
  PF_PART3(local_3c, 0) = CONCAT12(uVar4,(undefined2)local_3c);
  uVar24 = 0xe8;
  if (bVar35) {
    uVar24 = 0xda;
  }
  uVar14 = 0x1c;
  if (bVar35) {
    uVar14 = 0x60;
  }
  local_18 = (undefined1 *)CONCAT31(PF_PART3(local_18, 1),uVar14);
  recovered_1000efc0(local_68,(int)local_60,local_5c,(int)puVar25,
                     CONCAT13(in_stack_ffffff3f,CONCAT12(uVar4,(undefined2)local_3c)));
  puVar25 = local_60;
  PF_PART2(local_3c, 0) = CONCAT11(uVar24,uVar24);
  PF_PART3(local_3c, 0) = CONCAT12(uVar24,(undefined2)local_3c);
  recovered_1000f370(iVar1 + 1,(int)(local_60 + 1),iVar16 + -2,0x17,
                     CONCAT12(uVar24,(undefined2)local_3c),(byte)local_14);
  PF_PART3(local_3c, 0) = 0x9a9a9a;
  recovered_1000f370(iVar1 + 1,(int)(puVar25 + 0x17),iVar16 + -2,1,0x9a9a9a,(byte)local_14);
  in_ECX_00 = local_70;
  PF_PART3(local_3c, 0) = 0x505cee;
  recovered_100100c0(*(int *)(local_70 + 0x58) + 9,*(int *)(local_70 + 0x5c) + 6,0xc,0xc,0x505cee,0)
  ;
  PF_PART3(local_3c, 0) = 0x48beee;
  recovered_100100c0(*(int *)(in_ECX_00 + 0x58) + 0x1b,*(int *)(in_ECX_00 + 0x5c) + 6,0xc,0xc,
                     0x48beee,1);
  PF_PART3(local_3c, 0) = 0x6ecd78;
  recovered_100100c0(*(int *)(in_ECX_00 + 0x58) + 0x2d,*(int *)(in_ECX_00 + 0x5c) + 6,0xc,0xc,
                     0x6ecd78,2);
  PF_PART3(local_3c, 0) = 0xbababa;
  recovered_100100c0(*(int *)(in_ECX_00 + 0x58) + 0x3f,*(int *)(in_ECX_00 + 0x5c) + 6,0xc,0xc,
                     0xbababa,3);
  PF_PART2(local_3c, 0) = CONCAT11(PF_PART1(local_18, 0),PF_PART1(local_18, 0));
  PF_PART3(local_3c, 0) = CONCAT12(PF_PART1(local_18, 0),(undefined2)local_3c);
  recovered_1000ec70(local_68 + 0x58,(int)(puVar25 + 8),in_ECX_00 + 0x18,0x22,
                     CONCAT13(in_stack_ffffff3f,CONCAT12(PF_PART1(local_18, 0),(undefined2)local_3c)),1);
  if ((((in_ECX_00[2] == '\0') && (recovered_100104e0(in_ECX_00), *in_ECX_00 == '\x01')) &&
      (in_ECX_00[2] == '\0')) && (in_ECX_00[3] == '\0')) {
    local_18 = *(undefined1 **)(in_ECX_00 + 0x60);
    local_14 = *(undefined1 **)(in_ECX_00 + 0x58);
    iVar1 = *(int *)(in_ECX_00 + 0x5c);
    local_20 = *(undefined1 **)(in_ECX_00 + 100);
    PF_PART3(local_3c, 0) = 0xb6b6b6;
    local_54 = (undefined1 *)((int)local_14 + -0x10 + (int)local_18);
    local_1c = (undefined1 *)(iVar1 + -0x10 + (int)local_20);
    recovered_1000f370((int)local_54,(int)local_1c,0xe,0xe,0xb6b6b6,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    puVar25 = local_20;
    PF_PART3(local_3c, 0) = 0xcecece;
    recovered_1000f370((int)local_14 + -0xf + (int)local_18,iVar1 + -0xf + (int)local_20,0xc,0xc,
                       0xcecece,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    local_3c = CONCAT13(PF_PART1(local_3c, 3),0x6e6e6e);
    recovered_1000efc0((int)local_54,(int)local_1c,0xe,0xe,CONCAT13(in_stack_ffffff3f,0x6e6e6e));
    iVar10 = (*(uint32_t *)(pf_module_state+0x12d8U));
    iVar16 = (*(uint32_t *)(pf_module_state+0x12d4U));
    iVar17 = 0;
    uVar19 = iVar1 + -3 + (int)puVar25;
    uVar6 = (int)local_14 + -3 + (int)local_18;
    do {
      iVar28 = iVar17 * -4 + 0xb;
      iVar1 = iVar17 * 4 + -0xb;
      uVar29 = iVar28 + (int)local_54;
      iVar11 = uVar6 - uVar29;
      iVar12 = iVar11 + -0xb + iVar17 * 4;
      uVar34 = uVar19;
      while( true ) {
        if (((int)uVar29 < iVar16 && -1 < (int)(uVar29 | uVar34)) &&
           ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)uVar34 < iVar10)) {
          iVar18 = uVar34 * iVar16 + uVar29;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar18 * 4) = 0x80;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar18 * 4) = 0x80;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar18 * 4) = 0x80;
          *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 3 + iVar18 * 4) = 0xff;
        }
        if ((uVar34 == uVar19 - iVar28) && (uVar29 == uVar6)) break;
        iVar18 = iVar12 * 2;
        iVar13 = iVar1;
        if (iVar18 < iVar1) {
          iVar13 = 0;
        }
        iVar30 = iVar11;
        if (iVar11 < iVar18) {
          iVar30 = 0;
        }
        iVar12 = iVar13 + iVar12 + iVar30;
        uVar29 = uVar29 + (iVar1 <= iVar18);
        uVar34 = uVar34 - (iVar18 <= iVar11);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 3);
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f120
#undef DAT_0181f124
#undef DAT_0181f2c0
#undef local_98
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_4d
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_ffffff3f

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f114
#define DAT_0181f114 (*(uint8_t *)(0x181f114U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_019293c4
#define DAT_019293c4 (*(uint8_t *)(0x19293c4U))
#undef DAT_019293c8
#define DAT_019293c8 (*(uint8_t *)(0x19293c8U))
#undef UNK_0181e654
#define UNK_0181e654 (*(uint8_t *)(0x181e654U))
#undef UNK_0181e670
#define UNK_0181e670 (*(uint8_t *)(0x181e670U))
#define in_stack_ffffffcc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e0a0(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  if ((*(uint32_t *)(pf_module_state+0x12e4U)) < 0) {
    return;
  }
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + (*(uint32_t *)(pf_module_state+0x12e4U)) * 0xd9c) != '\x01') {
    return;
  }
  iVar3 = (*(uint32_t *)(pf_module_state+0x14a4U)) + (*(uint32_t *)(pf_module_state+0x12e4U)) * 0xd9c;
  uVar6 = *(uint *)(iVar3 + 0x10);
  iVar4 = ((*(uint32_t *)(pf_module_state+0x12d4U)) - *(int *)(iVar3 + 0x58)) + -4;
  iVar1 = (*(uint32_t *)(pf_module_state+0x10b594U));
  if (iVar4 <= (*(uint32_t *)(pf_module_state+0x10b594U))) {
    iVar1 = iVar4;
  }
  if (uVar6 < 7) {
    iVar4 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x824U)) + uVar6 * 4);
    iVar5 = *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x840U)) + uVar6 * 4);
    if ((*(uint32_t *)(pf_module_state+0x10b594U)) < iVar4) goto LAB_1000e119;
  }
  else {
    iVar5 = 0x6e;
    iVar4 = 0xb4;
    if ((*(uint32_t *)(pf_module_state+0x10b594U)) < 0xb4) goto LAB_1000e119;
  }
  iVar4 = iVar1;
LAB_1000e119:
  iVar1 = -4;
  if (uVar6 != 6) {
    iVar1 = -0x42;
  }
  iVar2 = (iVar1 + (*(uint32_t *)(pf_module_state+0x12d8U))) - *(int *)(iVar3 + 0x5c);
  iVar1 = (*(uint32_t *)(pf_module_state+0x10b598U));
  if (iVar2 <= (*(uint32_t *)(pf_module_state+0x10b598U))) {
    iVar1 = iVar2;
  }
  if (iVar5 <= (*(uint32_t *)(pf_module_state+0x10b598U))) {
    iVar5 = iVar1;
  }
  uVar6 = CONCAT13((char)((uint)in_stack_ffffffcc >> 0x18),0x5c5c5c);
  recovered_1000efc0(*(int *)(iVar3 + 0x58),*(int *)(iVar3 + 0x5c),iVar4,iVar5,uVar6);
  if ((2 < iVar4) && (2 < iVar5)) {
    recovered_1000efc0(*(int *)(iVar3 + 0x58) + 1,*(int *)(iVar3 + 0x5c) + 1,iVar4 + -2,iVar5 + -2,
                       CONCAT13((char)(uVar6 >> 0x18),0xd2d2d2));
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f114
#undef DAT_0181f2d4
#undef DAT_019293c4
#undef DAT_019293c8
#undef UNK_0181e654
#undef UNK_0181e670
#undef in_stack_ffffffcc

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#define in_stack_ffffffdc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e1d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e1d0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  iVar1 = (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x13ec] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x12c0] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x1194] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x1068] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xf3c] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xe10] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xce4] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[3000] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xa8c] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x960] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x834] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x708] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x5dc] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x4b0] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[900] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[600] +
          (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[300] + (uint)*(*(uint8_t * *)(pf_module_state+0x1aa8U));
  if (iVar1 != 0) {
    iVar3 = (*(uint32_t *)(pf_module_state+0x12d4U)) + iVar1 * -0x44;
    iVar4 = ((iVar3 + 0x12) - (iVar3 + 0x12 >> 0x1f) >> 1) + -0xc;
    iVar5 = (*(uint32_t *)(pf_module_state+0x12d8U)) + -0x3c;
    iVar1 = iVar1 * 0x44 + 6;
    iVar3 = 0;
    uVar6 = CONCAT22((short)(CONCAT13((char)((uint)in_stack_ffffffdc >> 0x18),0xee0000) >> 0x10),
                     0xeeee);
    recovered_1000f370(iVar4,iVar5,iVar1,0x3a,(uint3)uVar6,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    recovered_1000efc0(iVar4,iVar5,iVar1,0x3a,CONCAT13((char)((uint)uVar6 >> 0x18),0x8e8e8e));
    iVar1 = 0;
    pbVar2 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
    do {
      if (pbVar2[iVar3] == 1) {
        iVar5 = (uint)pbVar2[0x13ec] + (uint)pbVar2[0x12c0] +
                (uint)pbVar2[0x1194] +
                (uint)pbVar2[0x1068] +
                (uint)pbVar2[0xf3c] + (uint)pbVar2[0xe10] + (uint)pbVar2[0xce4] +
                (uint)pbVar2[3000] + (uint)pbVar2[0xa8c] + (uint)pbVar2[0x960] + (uint)pbVar2[0x834]
                + (uint)pbVar2[0x708] + (uint)pbVar2[0x5dc] + (uint)pbVar2[0x4b0] +
                  (uint)pbVar2[900] + (uint)pbVar2[600] + (uint)pbVar2[300] + (uint)*pbVar2;
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = iVar5 * -0x44 + 0x12;
        }
        recovered_100165a0(iVar1 * 0x44 + (iVar4 + (*(uint32_t *)(pf_module_state+0x12d4U))) / 2,(*(uint32_t *)(pf_module_state+0x12d8U)) + -0x36,0x32,
                           (int)(pbVar2 + iVar3));
        iVar1 = iVar1 + 1;
        pbVar2 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
      }
      iVar3 = iVar3 + 300;
    } while (iVar3 != 0x1518);
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f8d8
#undef in_stack_ffffffdc

#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_018223dc
#define DAT_018223dc (*(char *)(0x18223dcU))
#undef DAT_018223dd
#define DAT_018223dd (*(char *)(0x18223ddU))
#undef DAT_018223e8
#define DAT_018223e8 (*(uint8_t *)(0x18223e8U))
#undef DAT_018223ec
#define DAT_018223ec (*(uint8_t *)(0x18223ecU))
#undef DAT_018225d2
#define DAT_018225d2 (*(char *)(0x18225d2U))
#define local_18 (*(undefined2 *)(frame + 56))
#define in_stack_ffffffcc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e450
 */

/* WARNING: Removing unreachable block (ram,0x1000e57c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e450(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int in_ECX;
  int in_EDX;
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;

  iVar2 = (*(uint32_t *)(pf_module_state+0x45bcU));
  iVar1 = (*(uint32_t *)(pf_module_state+0x45b8U));
  if (((*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)) == '\x01') && ((*(uint8_t *)((uintptr_t)pf_module_state+0x45adU)) == '\x01')) {
    in_ECX = (*(uint32_t *)(pf_module_state+0x45b8U)) + 0x12;
    in_EDX = (*(uint32_t *)(pf_module_state+0x45bcU)) + 0x12;
    uVar6 = CONCAT22((short)(CONCAT13((char)((uint)in_stack_ffffffcc >> 0x18),0xff0000) >> 0x10),
                     0xffff);
    recovered_1000f370(in_ECX,in_EDX,0x2c,0x20,(uint3)uVar6,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x47a2U)) == '\0') {
      uVar3 = 0x78;
      uVar4 = 0x78;
      uVar5 = 0x78;
    }
    else {
      uVar3 = 0x3e;
      uVar4 = 0x82;
      uVar5 = 0xcc;
    }
    local_18 = CONCAT11(uVar4,uVar3);
    uVar7 = CONCAT22(CONCAT11((char)((uint)uVar6 >> 0x18),uVar5),local_18);
    recovered_1000efc0(in_ECX,in_EDX,0x2c,0x20,uVar7);
    recovered_1000ec70(iVar1 + 0x16,iVar2 + 0x1e,"",5,CONCAT13((char)(uVar7 >> 0x18),0x141414),1);
  }
  return;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_018223dc
#undef DAT_018223dd
#undef DAT_018223e8
#undef DAT_018223ec
#undef DAT_018225d2
#undef local_18
#undef in_stack_ffffffcc

#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f33c
#define DAT_0181f33c (*(char *)(0x181f33cU))
#undef DAT_0181f340
#define DAT_0181f340 (*(uint8_t *)(0x181f340U))
#undef DAT_0181f344
#define DAT_0181f344 (*(uint8_t *)(0x181f344U))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#define in_stack_ffffffcc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e590(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;

  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) == '\x01') {
    iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x16 + 4;
    iVar2 = 0;
    uVar4 = CONCAT22((short)(CONCAT13((char)((uint)in_stack_ffffffcc >> 0x18),0xfa0000) >> 0x10),
                     0xfafa);
    recovered_1000f370((*(uint32_t *)(pf_module_state+0x1510U)),(*(uint32_t *)(pf_module_state+0x1514U)),0xa8,iVar1,(uint3)uVar4,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    uVar5 = CONCAT13((char)((uint)uVar4 >> 0x18),0x666666);
    recovered_1000efc0((*(uint32_t *)(pf_module_state+0x1510U)),(*(uint32_t *)(pf_module_state+0x1514U)),0xa8,iVar1,uVar5);
    if (0 < (*(uint32_t *)(pf_module_state+0x1aa4U))) {
      pcVar3 = "";
      iVar1 = 8;
      do {
        uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x232323);
        recovered_1000ec70((*(uint32_t *)(pf_module_state+0x1510U)) + 10,(*(uint32_t *)(pf_module_state+0x1514U)) + iVar1,pcVar3,0xffffffff,uVar5,1);
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 0x2a;
        iVar1 = iVar1 + 0x16;
      } while (iVar2 < (*(uint32_t *)(pf_module_state+0x1aa4U)));
    }
  }
  return;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f33c
#undef DAT_0181f340
#undef DAT_0181f344
#undef DAT_0181f8d4
#undef in_stack_ffffffcc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2a8
#define DAT_0181f2a8 (*(uint8_t *)(0x181f2a8U))
#undef DAT_0181f2d0
#define DAT_0181f2d0 (*(uint8_t *)(0x181f2d0U))
#undef DAT_0181f2d8
#define DAT_0181f2d8 (*(uint8_t *)(0x181f2d8U))
#undef DAT_018225f4
#define DAT_018225f4 (*(uint8_t *)(0x18225f4U))
#undef DAT_018226ec
#define DAT_018226ec (*(uint8_t *)(0x18226ecU))
#undef DAT_01822704
#define DAT_01822704 (*(uint8_t *)(0x1822704U))
#undef DAT_01822814
#define DAT_01822814 (*(uint8_t *)(0x1822814U))
#undef DAT_01822924
#define DAT_01822924 (*(uint8_t *)(0x1822924U))
#undef DAT_01822a34
#define DAT_01822a34 (*(uint8_t *)(0x1822a34U))
#undef DAT_01822b44
#define DAT_01822b44 (*(uint8_t *)(0x1822b44U))
#undef DAT_01822c54
#define DAT_01822c54 (*(uint8_t *)(0x1822c54U))
#undef DAT_01822d64
#define DAT_01822d64 (*(uint8_t *)(0x1822d64U))
#undef DAT_01822e74
#define DAT_01822e74 (*(uint8_t *)(0x1822e74U))
#undef DAT_01822f84
#define DAT_01822f84 (*(uint8_t *)(0x1822f84U))
#undef DAT_01823094
#define DAT_01823094 (*(uint8_t *)(0x1823094U))
#undef DAT_018231a4
#define DAT_018231a4 (*(uint8_t *)(0x18231a4U))
#undef DAT_018232b4
#define DAT_018232b4 (*(uint8_t *)(0x18232b4U))
#undef DAT_018233c4
#define DAT_018233c4 (*(uint8_t *)(0x18233c4U))
#undef DAT_018234d4
#define DAT_018234d4 (*(uint8_t *)(0x18234d4U))
#undef DAT_018235e4
#define DAT_018235e4 (*(uint8_t *)(0x18235e4U))
#undef DAT_018236f4
#define DAT_018236f4 (*(uint8_t *)(0x18236f4U))
#undef DAT_01823804
#define DAT_01823804 (*(uint8_t *)(0x1823804U))
#undef DAT_01823914
#define DAT_01823914 (*(uint8_t *)(0x1823914U))
#undef DAT_01823a24
#define DAT_01823a24 (*(uint8_t *)(0x1823a24U))
#undef DAT_01823b34
#define DAT_01823b34 (*(uint8_t *)(0x1823b34U))
#undef DAT_01823c44
#define DAT_01823c44 (*(uint8_t *)(0x1823c44U))
#undef DAT_01823d54
#define DAT_01823d54 (*(uint8_t *)(0x1823d54U))
#undef DAT_01823e64
#define DAT_01823e64 (*(uint8_t *)(0x1823e64U))
#undef DAT_018240a8
#define DAT_018240a8 (*(uint8_t *)(0x18240a8U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define in_stack_ffffffdc (*(int * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_1000e6c0(int *in_ECX,int *in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar5;
  uint uVar4;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined *dst;

  if (in_ECX == (int *)0x0) {
    return (int *)0x0;
  }
  if ((char)*in_ECX == '\0') {
    return (int *)0x0;
  }
  iVar7 = 0x18;
  piVar8 = (int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x48bcU));
  do {
    if ((((char)piVar8[-0x3e] == '\x01') && ((int *)piVar8[-1] == in_EDX)) &&
       (iVar2 = strcmp((char *)((int)piVar8 + -0xf7),(char *)in_ECX), iVar2 == 0)) {
      piVar3 = (int *)0x0;
      if (*piVar8 != 0) {
        piVar3 = piVar8;
      }
      if (piVar8[1] == 0) {
        return piVar3;
      }
      return (int *)0x0;
    }
    piVar8 = piVar8 + 0x44;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((*(uint32_t *)(pf_module_state+0x1478U)) == (*(uint32_t *)(pf_module_state+0x14a8U))) {
    if (1 < (*(uint32_t *)(pf_module_state+0x6278U))) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x14a0U)) = 1;
      return (int *)0x0;
    }
  }
  else {
    (*(uint32_t *)(pf_module_state+0x1478U)) = (*(uint32_t *)(pf_module_state+0x14a8U));
    (*(uint32_t *)(pf_module_state+0x6278U)) = 0;
  }
  (*(uint32_t *)(pf_module_state+0x6278U)) = (*(uint32_t *)(pf_module_state+0x6278U)) + 1;
  dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x47c4U));
  if (((((((*(uint8_t *)((uintptr_t)pf_module_state+0x47c4U)) == '\x01') && (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x48d4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x48d4U)) == '\x01')) &&
        ((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x49e4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x49e4U)) == '\x01' &&
         ((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4af4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4af4U)) == '\x01' &&
          (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4c04U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4c04U)) == '\x01')))))) &&
       (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4d14U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4d14U)) == '\x01')) &&
      (((((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4e24U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4e24U)) == '\x01' &&
          (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4f34U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4f34U)) == '\x01')) &&
         (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5044U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5044U)) == '\x01')) &&
        ((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5154U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5154U)) == '\x01' &&
         (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5264U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5264U)) == '\x01')))) &&
       (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5374U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5374U)) == '\x01')))) &&
     (((((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5484U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5484U)) == '\x01' &&
         (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5594U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5594U)) == '\x01')) &&
        ((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x56a4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x56a4U)) == '\x01' &&
         (((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x57b4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x57b4U)) == '\x01' &&
           (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x58c4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x58c4U)) == '\x01')) &&
          (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x59d4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x59d4U)) == '\x01')))))) &&
       ((((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5ae4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5ae4U)) == '\x01' &&
          (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5bf4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5bf4U)) == '\x01')) &&
         (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5d04U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5d04U)) == '\x01')) &&
        ((dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5e14U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5e14U)) == '\x01' &&
         (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5f24U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5f24U)) == '\x01')))))) &&
      (dst = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6034U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x6034U)) != '\0')))) {
    return (int *)0x0;
  }
  *dst = 1;
  *(int **)(dst + 0xf4) = in_EDX;
  cVar6 = (char)*in_ECX;
  if (cVar6 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      dst[uVar4] = cVar6;
      if (0xef < uVar4) break;
      cVar6 = *(char *)((int)in_ECX + uVar4);
      uVar1 = uVar4 + 1;
    } while (cVar6 != '\0');
  }
  dst[uVar4 + 1] = 0;
  piVar8 = (int *)(dst + 0xf8);
  iVar7 = Ram00006800;
  if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) && (uVar4 = Ram00006808, 0xe3 < uVar4)) {
    pcVar5 = (code *)UINT_000068e0;
    if (pcVar5 == (code *)0x0) goto LAB_1000e9c7;
    in_stack_ffffffdc = piVar8;
  }
  else {
    iVar7 = Ram00006800;
    if (((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
       ((uVar4 = Ram00006808, uVar4 < 0xc ||
        ((uVar4 = Ram00006808, uVar4 < 0x5c ||
         (pcVar5 = (code *)UINT_00006858, pcVar5 == (code *)0x0)))))) goto LAB_1000e9c7;
    in_EDX = in_ECX;
    in_ECX = piVar8;
  }
  uVar4 = (*pcVar5)((int)in_EDX,(char *)in_ECX,in_stack_ffffffdc);
  if (uVar4 != 0) {
    return piVar8;
  }
LAB_1000e9c7:
  memset(dst,0,0x110);
  return (int *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2a8
#undef DAT_0181f2d0
#undef DAT_0181f2d8
#undef DAT_018225f4
#undef DAT_018226ec
#undef DAT_01822704
#undef DAT_01822814
#undef DAT_01822924
#undef DAT_01822a34
#undef DAT_01822b44
#undef DAT_01822c54
#undef DAT_01822d64
#undef DAT_01822e74
#undef DAT_01822f84
#undef DAT_01823094
#undef DAT_018231a4
#undef DAT_018232b4
#undef DAT_018233c4
#undef DAT_018234d4
#undef DAT_018235e4
#undef DAT_018236f4
#undef DAT_01823804
#undef DAT_01823914
#undef DAT_01823a24
#undef DAT_01823b34
#undef DAT_01823c44
#undef DAT_01823d54
#undef DAT_01823e64
#undef DAT_018240a8
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006858
#undef UINT_000068e0
#undef in_stack_ffffffdc

#define a (*(ulonglong *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9f0
 */

void recovered_1000e9f0(int *in_ECX,int in_EDX,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  if (((in_ECX != (int *)0x0) && (iVar2 = *in_ECX, iVar2 != 0 && in_ECX[1] == 0)) &&
     (uVar6 = in_ECX[3], uVar6 != 0)) {
    uVar8 = in_ECX[4];
    if (0 < (int)param_4 && uVar8 != 0) {
      uVar9 = pf_app_udiv_full((ulonglong)uVar8 * (ulonglong)param_4,(ulonglong)uVar6);
      uVar5 = (uint)uVar9;
      uVar4 = param_4;
      if ((int)param_5 < (int)(uint)uVar9) {
        uVar9 = pf_app_udiv_full((ulonglong)uVar6 * (ulonglong)param_5,(ulonglong)uVar8);
        uVar4 = (uint)uVar9;
        uVar5 = param_5;
      }
      if ((0 < (int)uVar5) && (0 < (int)uVar4)) {
        uVar6 = 0;
        do {
          uVar9 = pf_app_udiv_full((ulonglong)uVar6 * (ulonglong)(uint)in_ECX[4],(ulonglong)uVar5)
          ;
          uVar8 = 0;
          do {
            uVar3 = in_ECX[3];
            a = (ulonglong)uVar3 * (ulonglong)uVar8;
            uVar10 = pf_app_udiv_full(a,(ulonglong)uVar4);
            iVar7 = uVar3 * (int)uVar9 + (int)uVar10;
            bVar1 = *(byte *)(iVar2 + 3 + iVar7 * 4);
            if (bVar1 != 0) {
              iVar7 = iVar7 * 4;
              recovered_1000eb60((int)(param_4 - uVar4) / 2 + in_EDX + uVar8,
                                 (int)(param_5 - uVar5) / 2 + param_3 + uVar6,
                                 (uint)CONCAT62(CONCAT51((int5)(a >> 0x18),
                                                         *(undefined1 *)(iVar2 + 2 + iVar7)),
                                                *(undefined2 *)(iVar2 + iVar7)),bVar1);
            }
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
      }
    }
  }
  return;
}

#undef a

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000eb60(uint in_ECX,uint in_EDX,uint param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  if ((((-1 < (int)(in_EDX | in_ECX)) && ((int)in_ECX < (*(uint32_t *)(pf_module_state+0x12d4U)))) && (param_4 != 0)) &&
     (((int)in_EDX < (*(uint32_t *)(pf_module_state+0x12d8U)) && ((*(uint32_t *)(pf_module_state+0x1490U)) != 0)))) {
    iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U)) * in_EDX;
    if (param_4 == 0xff) {
      iVar3 = iVar2 + in_ECX;
      *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar3 * 4) = (undefined1)param_3;
      *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar3 * 4) = PF_PART1(param_3, 1);
      *(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar3 * 4) = PF_PART1(param_3, 2);
    }
    else {
      uVar4 = (uint)param_4;
      iVar3 = iVar2 + in_ECX;
      uVar1 = uVar4 ^ 0xff;
      *(char *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar3 * 4) =
           (char)((*(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar3 * 4) * uVar1 + 0x7f + (param_3 & 0xff) * uVar4) /
                 0xff);
      *(char *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar3 * 4) =
           (char)((*(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 1 + iVar3 * 4) * uVar1 + 0x7f + PF_PART1(param_3, 1) * uVar4)
                 / 0xff);
      *(char *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar3 * 4) =
           (char)((*(byte *)((*(uint32_t *)(pf_module_state+0x1490U)) + 2 + iVar3 * 4) * uVar1 + 0x7f + PF_PART1(param_3, 2) * uVar4)
                 / 0xff);
    }
    *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + 3 + (iVar2 + in_ECX) * 4) = 0xff;
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_01823f74
#define DAT_01823f74 (*(uint8_t *)(0x1823f74U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_dc (*(int (*)[40])(frame + 20))
#define local_3c (*(int (*)[6])(frame + 180))
#define local_24 (*(void * *)(frame + 204))
#define local_20 (*(uint *)(frame + 208))
#define local_1c (*(code * *)(frame + 212))
#define local_18 (*(int *)(frame + 216))
#define local_14 (*(int *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ec70(int in_ECX,int in_EDX,char *param_3,uint param_4,uint param_5,uint param_6)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;

  local_18 = in_EDX;
  local_14 = in_ECX;
  if (((param_3 == (char *)0x0) || (param_6 != 1)) || ((*(uint32_t *)(pf_module_state+0x6144U)) == (void *)0x0)) {
    if (param_3 == (char *)0x0) {
      return;
    }
  }
  else {
    cVar3 = *param_3;
    if (cVar3 == '\0') {
      return;
    }
    uVar4 = 0;
    do {
      if (param_4 <= uVar4) {
        uVar6 = uVar4;
        break;
      }
      if (uVar4 == 0x9f) {
        uVar6 = 0x9f;
        break;
      }
      uVar6 = uVar4 + 1;
      *(char *)((int)local_dc + uVar4) = cVar3;
      cVar3 = param_3[uVar4 + 1];
      uVar4 = uVar6;
    } while (cVar3 != '\0');
    *(undefined1 *)((int)local_dc + uVar6) = 0;
    memset(local_3c,0,0x18);
    local_24 = (*(uint32_t *)(pf_module_state+0x6144U));
    local_20 = param_5 & 0xff;
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        ((uVar4 = Ram00006808, 0xb < uVar4 &&
         ((uVar4 = Ram00006808, 0x77 < uVar4 &&
          (pcVar2 = (code *)UINT_00006874, pcVar2 != (code *)0x0)))))) &&
       (local_1c = pcVar2,
       uVar4 = (*pcVar2)((*(uint32_t *)(pf_module_state+0x6144U)),(char *)local_dc,local_20,(uint)PF_PART1(param_5, 1),
                         (uint)PF_PART1(param_5, 2),0xff,local_3c), uVar4 != 0)) {
      piVar5 = local_3c;
      goto LAB_1000ee30;
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  if ((int)param_4 < 0) {
    param_4 = 0xffffffff;
  }
  memset(local_dc,0,0x18);
  iVar1 = Ram00006800;
  if (iVar1 != 0x50414d57) {
    return;
  }
  iVar1 = Ram00006804;
  if (iVar1 == 0) {
    return;
  }
  uVar4 = Ram00006808;
  if (uVar4 < 0xc) {
    return;
  }
  uVar4 = Ram00006808;
  if (uVar4 < 0x17c) {
    return;
  }
  pcVar2 = (code *)UINT_00006978;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar4 = (*pcVar2)(param_3,param_4,param_6,
                    (uint)PF_PART1(param_5, 2) * 0x100 + 0xff +
                    ((uint)PF_PART1(param_5, 1) << 0x10 | param_5 << 0x18),local_dc);
  if (uVar4 == 0) {
    return;
  }
  piVar5 = local_dc;
LAB_1000ee30:
  recovered_1000ee50(local_14,local_18,piVar5);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_01823f74
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006874
#undef UINT_00006978
#undef local_dc
#undef local_3c
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#define in_stack_ffffffc4 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee50
 */

uint recovered_1000ee50(int in_ECX,int in_EDX,int *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *ptr;
  uint uVar6;
  bool bVar7;

  if (param_3 == (int *)0x0) {
    return 0;
  }
  uVar2 = param_3[3];
  uVar6 = uVar2;
  if (0x7ffffffe < uVar2) {
    uVar6 = 0x7fffffff;
  }
  ptr = (void *)*param_3;
  iVar3 = param_3[1];
  if ((iVar3 == 0) && (ptr != (void *)0x0)) {
    uVar4 = param_3[4];
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        bVar7 = uVar2 != 0;
        uVar2 = 0;
        if (bVar7) {
          uVar4 = 0;
          do {
            iVar3 = param_3[5] * uVar5;
            in_stack_ffffffc4 =
                 CONCAT22(CONCAT11((char)(in_stack_ffffffc4 >> 0x18),
                                   *(undefined1 *)((int)ptr + uVar4 * 4 + iVar3 + 2)),
                          *(undefined2 *)((int)ptr + uVar4 * 4 + iVar3));
            recovered_1000eb60(in_ECX + uVar4,in_EDX + uVar5,in_stack_ffffffc4,
                               *(byte *)((int)ptr + uVar4 * 4 + iVar3 + 3));
            uVar4 = uVar4 + 1;
            uVar2 = param_3[3];
          } while (uVar4 < uVar2);
          uVar4 = param_3[4];
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
      ptr = (void *)*param_3;
      iVar3 = param_3[1];
      goto joined_r0x1000ef43;
    }
  }
  else {
joined_r0x1000ef43:
    if (iVar3 != 0) goto LAB_1000ef91;
  }
  if ((((ptr != (void *)0x0) && (iVar3 = Ram00006800, iVar3 == 0x50414d57)) &&
      (iVar3 = Ram00006804, iVar3 != 0)) &&
     (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
      (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
    (*pcVar1)(ptr);
  }
LAB_1000ef91:
  memset(param_3,0,0x18);
  return uVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef in_stack_ffffffc4

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define local_14 (*(int *)(frame + 44))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000efc0(int in_ECX,int in_EDX,int param_3,int param_4,uint param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;

  iVar13 = (*(uint32_t *)(pf_module_state+0x1490U));
  iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
  iVar1 = (*(uint32_t *)(pf_module_state+0x12d4U));
  if (0 < param_4 && 0 < param_3) {
    iVar6 = in_ECX;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
      iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    local_14 = 0;
    iVar9 = 0;
    if (-1 < in_ECX) {
      iVar9 = iVar6;
    }
    iVar6 = in_EDX;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
      iVar6 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    iVar10 = 0;
    if (-1 < in_EDX) {
      iVar10 = iVar6;
    }
    iVar14 = param_3 + in_ECX;
    iVar6 = iVar14;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar14) {
      iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    local_2c = 0;
    if (-1 < iVar14) {
      local_2c = iVar6;
    }
    iVar6 = in_EDX + 1;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX + 1) {
      iVar6 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    if (-2 < in_EDX) {
      local_14 = iVar6;
    }
    bVar15 = (*(uint32_t *)(pf_module_state+0x1490U)) != 0;
    iVar6 = local_2c - iVar9;
    uVar4 = param_5 & 0xffff;
    uVar2 = param_5 >> 0x10 & 0xff;
    if (((iVar6 != 0 && iVar9 <= local_2c) && bVar15) && (iVar10 < local_14)) {
      piVar5 = (int *)((*(uint32_t *)(pf_module_state+0x1490U)) + (iVar10 * (*(uint32_t *)(pf_module_state+0x12d4U)) + iVar9) * 4);
      iVar11 = iVar10;
      do {
        iVar3 = local_2c - iVar9;
        piVar8 = piVar5;
        do {
          *piVar8 = uVar2 * 0x10000 + -0x1000000 + uVar4;
          piVar8 = piVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar11 = iVar11 + 1;
        piVar5 = piVar5 + iVar1;
      } while (iVar11 != local_14);
    }
    iVar11 = param_4 + in_EDX;
    iVar3 = param_4 + -1 + in_EDX;
    if (iVar12 <= iVar3) {
      iVar3 = iVar12;
    }
    iVar7 = iVar11;
    if (iVar12 <= iVar11) {
      iVar7 = iVar12;
    }
    local_14 = 0;
    if (iVar11 < 1) {
      iVar3 = 0;
    }
    if (-1 < iVar11) {
      local_14 = iVar7;
    }
    if (((iVar6 != 0 && iVar9 <= local_2c) && bVar15) && iVar3 < local_14) {
      piVar5 = (int *)(iVar13 + (iVar3 * iVar1 + iVar9) * 4);
      do {
        piVar8 = piVar5;
        iVar12 = iVar6;
        do {
          *piVar8 = uVar2 * 0x10000 + -0x1000000 + uVar4;
          piVar8 = piVar8 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + iVar1;
      } while (iVar3 != local_14);
    }
    iVar12 = in_ECX + 1;
    if (iVar1 <= in_ECX + 1) {
      iVar12 = iVar1;
    }
    local_28 = 0;
    if (-2 < in_ECX) {
      local_28 = iVar12;
    }
    if (iVar13 != 0) {
      if ((local_28 - iVar9 != 0 && iVar9 <= local_28) && (iVar10 < local_14)) {
        piVar5 = (int *)(iVar13 + (iVar9 + iVar10 * iVar1) * 4);
        iVar12 = iVar10;
        do {
          iVar6 = local_28 - iVar9;
          piVar8 = piVar5;
          do {
            *piVar8 = uVar2 * 0x10000 + -0x1000000 + uVar4;
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar12 = iVar12 + 1;
          piVar5 = piVar5 + iVar1;
        } while (iVar12 != local_14);
      }
    }
    iVar12 = iVar14 + -1;
    if (iVar1 <= iVar14 + -1) {
      iVar12 = iVar1;
    }
    if (iVar14 < 1) {
      iVar12 = 0;
    }
    if (iVar13 != 0) {
      if ((local_2c - iVar12 != 0 && iVar12 <= local_2c) && (iVar10 < local_14)) {
        piVar5 = (int *)(iVar13 + (iVar12 + iVar10 * iVar1) * 4);
        do {
          piVar8 = piVar5;
          iVar13 = local_2c - iVar12;
          do {
            *piVar8 = uVar2 * 0x10000 + -0x1000000 + uVar4;
            piVar8 = piVar8 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          iVar10 = iVar10 + 1;
          piVar5 = piVar5 + iVar1;
        } while (iVar10 != local_14);
      }
    }
  }
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef local_14
#undef local_2c
#undef local_28

#define in_stack_ffffffdc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f280
 */

int recovered_1000f280(int in_ECX,int in_EDX,int param_3,char *param_4,undefined2 param_5,
                      undefined1 in_stack_0000000e)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  uint uVar2;
  uint uVar3;

  iVar1 = param_3 * 0x2aaaaaab;
  uVar2 = param_3 / 6;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    uVar3 = CONCAT22(CONCAT11((char)((uint)in_stack_ffffffdc >> 0x18),in_stack_0000000e),param_5);
    recovered_1000ec70(in_ECX,in_EDX,param_4,uVar2,uVar3,1);
    iVar1 = extraout_EAX;
    if (param_4[uVar2] != '\0') {
      uVar3 = CONCAT22(CONCAT11((char)(uVar3 >> 0x18),in_stack_0000000e),param_5);
      recovered_1000ec70(in_ECX,in_EDX + 10,param_4 + uVar2,uVar2,uVar3,1);
      iVar1 = extraout_EAX_00;
      if (param_4[uVar2 * 2] != '\0') {
        recovered_1000ec70(in_ECX,in_EDX + 0x14,param_4 + uVar2 * 2,uVar2,
                           CONCAT22(CONCAT11((char)(uVar3 >> 0x18),in_stack_0000000e),param_5),1);
        iVar1 = extraout_EAX_01;
      }
    }
  }
  return iVar1;
}

#undef in_stack_ffffffdc

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define local_20 (*(int *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined3 *
recovered_1000f370(int in_ECX,int in_EDX,int param_3,int param_4,uint3 param_5,byte param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint3 *puVar3;
  uint3 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;

  iVar2 = (*(uint32_t *)(pf_module_state+0x12d4U));
  iVar11 = in_ECX;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
    iVar11 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  local_1c = 0;
  local_14 = 0;
  if (-1 < in_ECX) {
    local_14 = iVar11;
  }
  iVar11 = in_EDX;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
    iVar11 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  iVar10 = 0;
  if (-1 < in_EDX) {
    iVar10 = iVar11;
  }
  iVar5 = in_ECX + param_3;
  iVar11 = iVar5;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar5) {
    iVar11 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  local_20 = 0;
  if (-1 < iVar5) {
    local_20 = iVar11;
  }
  iVar5 = in_EDX + param_4;
  iVar11 = iVar5;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar5) {
    iVar11 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  if (-1 < iVar5) {
    local_1c = iVar11;
  }
  puVar4 = &param_5;
  if (param_6 == 0xff) {
    if ((*(uint32_t *)(pf_module_state+0x1490U)) != 0) {
      if ((local_20 - local_14 != 0 && local_14 <= local_20) && (iVar10 < local_1c)) {
        puVar8 = (uint *)((*(uint32_t *)(pf_module_state+0x1490U)) + (local_14 + iVar10 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
        puVar4 = (uint3 *)(param_5 | 0xff000000);
        do {
          puVar9 = puVar8;
          iVar11 = local_20 - local_14;
          do {
            *puVar9 = (uint)puVar4;
            puVar9 = puVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar10 = iVar10 + 1;
          puVar8 = puVar8 + iVar2;
        } while (iVar10 != local_1c);
      }
    }
  }
  else if ((param_6 != 0) && ((*(uint32_t *)(pf_module_state+0x1490U)) != 0)) {
    if ((local_20 - local_14 != 0 && local_14 <= local_20) && (iVar10 < local_1c)) {
      uVar6 = (uint)param_6;
      uVar7 = uVar6 ^ 0xff;
      puVar3 = (uint3 *)((byte)param_5 * uVar6 + 0x7f);
      puVar4 = puVar3;
      do {
        pbVar12 = (byte *)((iVar10 * iVar2 + local_14) * 4 + (*(uint32_t *)(pf_module_state+0x1490U)));
        iVar11 = local_20 - local_14;
        do {
          if ((param_6 != 0) && (pbVar12 != (byte *)0x0)) {
            *pbVar12 = (byte)(ZEXT48((uint3 *)(*pbVar12 * uVar7 + (int)puVar3)) * 0x1010102 >> 0x20)
            ;
            pbVar12[1] = (byte)((ulonglong)(pbVar12[1] * uVar7 + PF_PART1(param_5, 1) * uVar6 + 0x7f) *
                                0x1010102 >> 0x20);
            lVar1 = (ulonglong)(pbVar12[2] * uVar7 + PF_PART1(param_5, 2) * uVar6 + 0x7f) * 0x1010102;
            puVar4 = (uint3 *)lVar1;
            pbVar12[2] = (byte)((ulonglong)lVar1 >> 0x20);
            pbVar12[3] = 0xff;
          }
          pbVar12 = pbVar12 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        iVar10 = iVar10 + 1;
      } while (iVar10 != local_1c);
    }
  }
  return puVar4;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef local_20
#undef local_1c
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define local_1c (*(undefined1 (*)[8])(frame + 20))
#define local_14 (*(byte *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f540
 */

byte recovered_1000f540(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (in_ECX == 0) {
    return 1;
  }
  if (*(char *)(in_ECX + 0x29) == '\0') {
    return 1;
  }
  memset(local_1c,0,0xc);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xcb < uVar3)) {
    pcVar2 = (code *)UINT_000068c8;
    if (pcVar2 == (code *)0x0) goto LAB_1000f609;
    uVar3 = (*pcVar2)(*(int *)(in_ECX + 0x11c),(char *)(in_ECX + 0x29),local_1c);
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
       ((uVar3 = Ram00006808, uVar3 < 0xc ||
        ((uVar3 = Ram00006808, uVar3 < 0x38 ||
         (pcVar2 = (code *)UINT_00006834, pcVar2 == (code *)0x0)))))) goto LAB_1000f609;
    uVar3 = (*pcVar2)((char *)(in_ECX + 0x29),local_1c);
  }
  if (uVar3 != 0) {
    return (local_14 & 2) >> 1;
  }
LAB_1000f609:
  return *(byte *)(in_ECX + 0x120);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8
#undef local_1c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f620
 */

bool recovered_1000f620(char *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;

  pcVar2 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    in_ECX = "";
  }
  else {
    cVar4 = *in_ECX;
    if (cVar4 != '\0') {
      pcVar6 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar2 = pcVar6;
        if (cVar4 != '/') {
          pcVar2 = pcVar7;
        }
        cVar4 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar2;
      } while (cVar4 != '\0');
    }
  }
  if (pcVar2 != (char *)0x0) {
    in_ECX = pcVar2 + 1;
  }
  cVar4 = *in_ECX;
  if (cVar4 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)0x0;
    do {
      pcVar2 = in_ECX;
      if (cVar4 != '.') {
        pcVar2 = pcVar6;
      }
      cVar4 = in_ECX[1];
      in_ECX = in_ECX + 1;
      pcVar6 = pcVar2;
    } while (cVar4 != '\0');
  }
  if (in_EDX != 0) {
    pcVar6 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar6 = pcVar2;
    }
    iVar3 = 0;
    do {
      bVar1 = pcVar6[iVar3];
      bVar5 = *(byte *)(in_EDX + iVar3);
      if ((bVar1 == 0) || (bVar5 == 0)) {
        return bVar1 == bVar5;
      }
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      iVar3 = iVar3 + 1;
    } while (bVar1 == bVar5);
  }
  return false;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2a8
#define DAT_0181f2a8 (*(uint8_t *)(0x181f2a8U))
#undef DAT_0181f2d0
#define DAT_0181f2d0 (*(uint8_t *)(0x181f2d0U))
#undef DAT_0181f2d8
#define DAT_0181f2d8 (*(uint8_t *)(0x181f2d8U))
#undef DAT_018225f4
#define DAT_018225f4 (*(uint8_t *)(0x18225f4U))
#undef DAT_018226ec
#define DAT_018226ec (*(uint8_t *)(0x18226ecU))
#undef DAT_01822704
#define DAT_01822704 (*(uint8_t *)(0x1822704U))
#undef DAT_01822814
#define DAT_01822814 (*(uint8_t *)(0x1822814U))
#undef DAT_01822924
#define DAT_01822924 (*(uint8_t *)(0x1822924U))
#undef DAT_01822a34
#define DAT_01822a34 (*(uint8_t *)(0x1822a34U))
#undef DAT_01822b44
#define DAT_01822b44 (*(uint8_t *)(0x1822b44U))
#undef DAT_01822c54
#define DAT_01822c54 (*(uint8_t *)(0x1822c54U))
#undef DAT_01822d64
#define DAT_01822d64 (*(uint8_t *)(0x1822d64U))
#undef DAT_01822e74
#define DAT_01822e74 (*(uint8_t *)(0x1822e74U))
#undef DAT_01822f84
#define DAT_01822f84 (*(uint8_t *)(0x1822f84U))
#undef DAT_01823094
#define DAT_01823094 (*(uint8_t *)(0x1823094U))
#undef DAT_018231a4
#define DAT_018231a4 (*(uint8_t *)(0x18231a4U))
#undef DAT_018232b4
#define DAT_018232b4 (*(uint8_t *)(0x18232b4U))
#undef DAT_018233c4
#define DAT_018233c4 (*(uint8_t *)(0x18233c4U))
#undef DAT_018234d4
#define DAT_018234d4 (*(uint8_t *)(0x18234d4U))
#undef DAT_018235e4
#define DAT_018235e4 (*(uint8_t *)(0x18235e4U))
#undef DAT_018236f4
#define DAT_018236f4 (*(uint8_t *)(0x18236f4U))
#undef DAT_01823804
#define DAT_01823804 (*(uint8_t *)(0x1823804U))
#undef DAT_01823914
#define DAT_01823914 (*(uint8_t *)(0x1823914U))
#undef DAT_01823a24
#define DAT_01823a24 (*(uint8_t *)(0x1823a24U))
#undef DAT_01823b34
#define DAT_01823b34 (*(uint8_t *)(0x1823b34U))
#undef DAT_01823c44
#define DAT_01823c44 (*(uint8_t *)(0x1823c44U))
#undef DAT_01823d54
#define DAT_01823d54 (*(uint8_t *)(0x1823d54U))
#undef DAT_01823e64
#define DAT_01823e64 (*(uint8_t *)(0x1823e64U))
#undef DAT_018240a8
#define DAT_018240a8 (*(uint8_t *)(0x18240a8U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef UNK_0181e9af
#define UNK_0181e9af (*(uint8_t *)(0x181e9afU))
#define in_stack_ffffbfcc (*(uint * *)(frame + 28))
#define local_4020 (*(byte (*)[241])(frame + 48))
#define local_3f2f (*(uint (*)[61])(frame + 289))
#define local_3e38 (*(byte (*)[4])(frame + 536))
#define local_11d (*(uint (*)[60])(frame + 16179))
#define aiStack_3e34 (*(int (*)[3909])(frame + 540))
#define local_2c (*(undefined * *)(frame + 16420))
#define local_28 (*(uint *)(frame + 16424))
#define local_24 (*(uint * *)(frame + 16428))
#define local_20 (*(uint *)(frame + 16432))
#define local_1c (*(uint * *)(frame + 16436))
#define local_18 (*(byte * *)(frame + 16440))
#define local_14 (*(byte * *)(frame + 16444))
#define path (*(uint * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_1000f6e0(char *in_ECX,uint *in_EDX)

{
  unsigned char frame[16496] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  byte *pbVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  undefined *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;

  local_20 = 0;
  if (in_ECX == (char *)0x0) {
    return (uint *)0x0;
  }
  if (*in_ECX == '\0') {
    return (uint *)0x0;
  }
  iVar16 = 0x18;
  puVar18 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x48bcU));
  local_1c = in_EDX;
  do {
    if (((char)puVar18[-0x3e] == '\x01') && ((uint *)puVar18[-1] == in_EDX)) {
      iVar5 = strcmp((char *)((int)puVar18 + -0xf7),in_ECX);
      in_EDX = local_1c;
      if (iVar5 == 0) {
        if ((puVar18[1] == 0) && (*puVar18 != 0)) {
          return puVar18;
        }
        goto LAB_1000f760;
      }
    }
    puVar18 = puVar18 + 0x44;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  if ((*(uint32_t *)(pf_module_state+0x1478U)) == (*(uint32_t *)(pf_module_state+0x14a8U))) {
    if (1 < (*(uint32_t *)(pf_module_state+0x6278U))) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x14a0U)) = 1;
      return (uint *)0x0;
    }
  }
  else {
    (*(uint32_t *)(pf_module_state+0x1478U)) = (*(uint32_t *)(pf_module_state+0x14a8U));
    (*(uint32_t *)(pf_module_state+0x6278U)) = 0;
  }
  (*(uint32_t *)(pf_module_state+0x6278U)) = (*(uint32_t *)(pf_module_state+0x6278U)) + 1;
  puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x47c4U));
  if ((((((((*(uint8_t *)((uintptr_t)pf_module_state+0x47c4U)) == '\x01') && (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x48d4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x48d4U)) == '\x01')) &&
         (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x49e4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x49e4U)) == '\x01')) &&
        (((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4af4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4af4U)) == '\x01' &&
          (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4c04U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4c04U)) == '\x01')) &&
         ((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4d14U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4d14U)) == '\x01' &&
          ((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4e24U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4e24U)) == '\x01' &&
           (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x4f34U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x4f34U)) == '\x01')))))))) &&
       (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5044U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5044U)) == '\x01')) &&
      ((((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5154U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5154U)) == '\x01' &&
         (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5264U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5264U)) == '\x01')) &&
        (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5374U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5374U)) == '\x01')) &&
       ((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5484U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5484U)) == '\x01' &&
        (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5594U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5594U)) == '\x01')))))) &&
     ((((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x56a4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x56a4U)) == '\x01' &&
        ((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x57b4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x57b4U)) == '\x01' &&
         (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x58c4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x58c4U)) == '\x01')))) &&
       (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x59d4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x59d4U)) == '\x01')) &&
      ((((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5ae4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5ae4U)) == '\x01' &&
         (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5bf4U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5bf4U)) == '\x01')) &&
        (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5d04U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5d04U)) == '\x01')) &&
       (((puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5e14U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5e14U)) == '\x01' &&
         (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x5f24U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x5f24U)) == '\x01')) &&
        (puVar17 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6034U)), (*(uint8_t *)((uintptr_t)pf_module_state+0x6034U)) == '\x01')))))))) {
LAB_1000f760:
    piVar6 = (int *)recovered_10004ab0();
    puVar18 = (uint *)recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xb7fU)),piVar6);
    return puVar18;
  }
  *puVar17 = 1;
  *(uint **)(puVar17 + 0xf4) = in_EDX;
  cVar11 = *in_ECX;
  if (cVar11 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar8 = 1;
    do {
      uVar7 = uVar8;
      puVar17[uVar7] = cVar11;
      if (0xef < uVar7) break;
      cVar11 = in_ECX[uVar7];
      uVar8 = uVar7 + 1;
    } while (cVar11 != '\0');
  }
  puVar17[uVar7 + 1] = 0;
  recovered_1000ffc0(in_ECX,"Contents/Resources/AppIcon.png",(char *)local_11d);
  puVar18 = (uint *)(puVar17 + 0xf8);
  iVar16 = Ram00006800;
  if (((iVar16 == 0x50414d57) && (iVar16 = Ram00006804, iVar16 != 0)) &&
     ((uVar7 = Ram00006808, 0xb < uVar7 && (uVar7 = Ram00006808, 0xe3 < uVar7)))) {
    pcVar9 = (code *)UINT_000068e0;
    if (pcVar9 == (code *)0x0) goto LAB_1000fa2f;
    puVar20 = local_1c;
    puVar19 = local_11d;
    in_stack_ffffbfcc = puVar18;
  }
  else {
    iVar16 = Ram00006800;
    if ((((iVar16 != 0x50414d57) || (iVar16 = Ram00006804, iVar16 == 0)) ||
        (uVar7 = Ram00006808, uVar7 < 0xc)) ||
       ((uVar7 = Ram00006808, uVar7 < 0x5c ||
        (pcVar9 = (code *)UINT_00006858, pcVar9 == (code *)0x0)))) goto LAB_1000fa2f;
    puVar20 = local_11d;
    puVar19 = puVar18;
  }
  uVar7 = (*pcVar9)((int)puVar20,(char *)puVar19,in_stack_ffffbfcc);
  if (uVar7 != 0) {
    return puVar18;
  }
LAB_1000fa2f:
  local_2c = puVar17;
  recovered_1000a060(puVar18);
  recovered_1000ffc0(in_ECX,"Contents/Resources",(char *)local_11d);
  puVar20 = &local_20;
  uVar7 = recovered_1000c260((int)local_1c,(char *)local_11d,local_4020,0x20,puVar20);
  if ((uVar7 == 0) || (local_28 = local_20, local_20 == 0)) {
LAB_1000fd21:
    piVar6 = (int *)recovered_10004ab0();
    puVar18 = (uint *)recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xb7fU)),piVar6);
    return puVar18;
  }
  pbVar10 = local_4020 + 4;
  uVar7 = 0;
  pbVar14 = local_4020 + 3;
LAB_1000fa90:
  if (aiStack_3e34[uVar7 * 0x7e] != 2) {
    if ((local_3e38[uVar7 * 0x1f8] & 2) != 0) goto LAB_1000fd06;
    local_24 = local_3f2f + uVar7 * 0x7e;
    local_18 = pbVar10;
    local_14 = pbVar14;
    bVar2 = recovered_1000fd50((char *)local_24);
    if (bVar2) {
      uVar8 = (uint)local_4020[uVar7 * 0x1f8];
      pbVar10 = local_18;
      uVar13 = uVar8;
      if (local_4020[uVar7 * 0x1f8] != 0) {
        do {
          uVar3 = (undefined1)uVar8;
          bVar12 = (byte)uVar13;
          uVar8 = (uint)CONCAT11(bVar12 + 0xbf,uVar3);
          if ((byte)(bVar12 + 0xbf) < 0x1a) {
            bVar12 = bVar12 | 0x20;
          }
          bVar1 = pbVar10[-3];
          uVar13 = (uint)bVar1;
          if (bVar12 == 0x69) {
            if (bVar1 == 0) {
              pcVar15 = "con";
            }
            else {
              if ((byte)(bVar1 + 0xbf) < 0x1a) {
                uVar4 = CONCAT11(bVar1,uVar3) | 0x2000;
                bVar12 = (byte)(uVar4 >> 8);
              }
              else {
                uVar4 = CONCAT11(bVar1,uVar3);
                bVar12 = bVar1;
              }
              uVar8 = (uint)uVar4;
              if (bVar12 != 99) goto LAB_1000faf3;
              bVar12 = pbVar10[-2];
              uVar8 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 == 0) {
                pcVar15 = "on";
              }
              else {
                uVar13 = (uint)CONCAT11(bVar12 + 0xbf,bVar1);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  uVar8 = (uint)(ushort)(CONCAT11(bVar12,uVar3) | 0x2000);
                }
                if ((char)(uVar8 >> 8) != 'o') goto LAB_1000faf3;
                bVar12 = pbVar10[-1];
                uVar3 = (undefined1)uVar8;
                uVar8 = (uint)CONCAT11(bVar12,uVar3);
                if (bVar12 == 0) {
                  pcVar15 = "n";
                }
                else {
                  uVar13 = (uint)CONCAT11(bVar12 + 0xbf,bVar1);
                  if ((byte)(bVar12 + 0xbf) < 0x1a) {
                    uVar8 = (uint)(ushort)(CONCAT11(bVar12,uVar3) | 0x2000);
                  }
                  if ((char)(uVar8 >> 8) != 'n') goto LAB_1000faf3;
                  pcVar15 = "";
                  if (*pbVar10 != 0) goto LAB_1000fc06;
                }
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000fc06;
          }
LAB_1000faf3:
          pbVar10 = pbVar10 + 1;
        } while ((char)uVar13 != '\0');
        pbVar10 = local_14;
        do {
          bVar12 = (byte)uVar8;
          if ((byte)(bVar12 + 0xbf) < 0x1a) {
            bVar12 = bVar12 | 0x20;
          }
          bVar1 = pbVar10[-2];
          uVar8 = (uint)bVar1;
          if (bVar12 == 0x61) {
            if (bVar1 == 0) {
              pcVar15 = "pp";
            }
            else {
              bVar12 = bVar1;
              if ((byte)(bVar1 + 0xbf) < 0x1a) {
                bVar12 = bVar1 | 0x20;
              }
              if (bVar12 != 0x70) goto LAB_1000fb9b;
              bVar12 = pbVar10[-1];
              if (bVar12 == 0) {
                pcVar15 = "p";
              }
              else {
                uVar8 = (uint)CONCAT11(bVar12 + 0xbf,bVar1);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  bVar12 = bVar12 | 0x20;
                }
                if (bVar12 != 0x70) goto LAB_1000fb9b;
                pcVar15 = "";
                if (*pbVar10 != 0) goto LAB_1000fc06;
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000fc06;
          }
LAB_1000fb9b:
          pbVar10 = pbVar10 + 1;
        } while ((char)uVar8 != '\0');
      }
    }
    goto LAB_1000fd00;
  }
  goto LAB_1000fd06;
LAB_1000fc06:
  iVar16 = Ram00006800;
  if ((((iVar16 == 0x50414d57) && (iVar16 = Ram00006804, iVar16 != 0)) &&
      (uVar8 = Ram00006808, 0xb < uVar8)) && (uVar8 = Ram00006808, 0xe3 < uVar8)) {
    pcVar9 = (code *)UINT_000068e0;
    if (pcVar9 == (code *)0x0) goto LAB_1000fc8c;
    puVar19 = local_1c;
    path = local_24;
    puVar20 = puVar18;
  }
  else {
    iVar16 = Ram00006800;
    if (((iVar16 != 0x50414d57) || (iVar16 = Ram00006804, iVar16 == 0)) ||
       ((uVar8 = Ram00006808, uVar8 < 0xc ||
        ((uVar8 = Ram00006808, uVar8 < 0x5c ||
         (pcVar9 = (code *)UINT_00006858, pcVar9 == (code *)0x0)))))) goto LAB_1000fc8c;
    puVar19 = local_24;
    path = puVar18;
  }
  uVar8 = (*pcVar9)((int)puVar19,(char *)path,puVar20);
  if (uVar8 != 0) {
    return puVar18;
  }
LAB_1000fc8c:
  if ((((*(void **)(local_2c + 0xf8) != (void *)0x0 && *(int *)(local_2c + 0xfc) == 0) &&
       (iVar16 = Ram00006800, iVar16 == 0x50414d57)) && (iVar16 = Ram00006804, iVar16 != 0)) &&
     (((uVar8 = Ram00006808, 0xb < uVar8 && (uVar8 = Ram00006808, 0x53 < uVar8)) &&
      (pcVar9 = (code *)UINT_00006850, pcVar9 != (code *)0x0)))) {
    (*pcVar9)(*(void **)(local_2c + 0xf8));
  }
  puVar20 = (uint *)0x18;
  memset(puVar18,0,0x18);
  local_28 = local_20;
LAB_1000fd00:
  pbVar10 = local_18;
  pbVar14 = local_14;
LAB_1000fd06:
  if (0x1e < uVar7) goto LAB_1000fd21;
  uVar7 = uVar7 + 1;
  pbVar10 = pbVar10 + 0x1f8;
  pbVar14 = pbVar14 + 0x1f8;
  if (local_28 <= uVar7) goto LAB_1000fd21;
  goto LAB_1000fa90;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2a8
#undef DAT_0181f2d0
#undef DAT_0181f2d8
#undef DAT_018225f4
#undef DAT_018226ec
#undef DAT_01822704
#undef DAT_01822814
#undef DAT_01822924
#undef DAT_01822a34
#undef DAT_01822b44
#undef DAT_01822c54
#undef DAT_01822d64
#undef DAT_01822e74
#undef DAT_01822f84
#undef DAT_01823094
#undef DAT_018231a4
#undef DAT_018232b4
#undef DAT_018233c4
#undef DAT_018234d4
#undef DAT_018235e4
#undef DAT_018236f4
#undef DAT_01823804
#undef DAT_01823914
#undef DAT_01823a24
#undef DAT_01823b34
#undef DAT_01823c44
#undef DAT_01823d54
#undef DAT_01823e64
#undef DAT_018240a8
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef UNK_0181e9af
#undef in_stack_ffffbfcc
#undef local_4020
#undef local_3f2f
#undef local_3e38
#undef local_11d
#undef aiStack_3e34
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef path

#undef DAT_0181f04c
#define DAT_0181f04c (*(uint8_t *)(0x181f04cU))
#undef UNK_0181e9d9
#define UNK_0181e9d9 (*(uint8_t *)(0x181e9d9U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd50
 */

bool recovered_1000fd50(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;

  iVar2 = 0;
  do {
    if (in_ECX == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      cVar4 = *in_ECX;
      pcVar6 = (char *)0x0;
      if (cVar4 != '\0') {
        pcVar3 = in_ECX;
        pcVar8 = (char *)0x0;
        do {
          pcVar6 = pcVar3;
          if (cVar4 != '/') {
            pcVar6 = pcVar8;
          }
          cVar4 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar6;
        } while (cVar4 != '\0');
      }
      pcVar3 = in_ECX;
      if (pcVar6 != (char *)0x0) {
        pcVar3 = pcVar6 + 1;
      }
    }
    cVar4 = *pcVar3;
    if (cVar4 == '\0') {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar8 = (char *)0x0;
      do {
        pcVar6 = pcVar3;
        if (cVar4 != '.') {
          pcVar6 = pcVar8;
        }
        cVar4 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar6;
      } while (cVar4 != '\0');
    }
    pcVar3 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar3 = pcVar6;
    }
    iVar7 = 0;
    do {
      bVar1 = pcVar3[iVar7];
      bVar5 = *(byte *)(*(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x121cU)) + iVar2 * 0xc) + iVar7);
      if ((bVar1 == 0) || (bVar5 == 0)) {
        if (bVar1 == bVar5) {
          return true;
        }
        break;
      }
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      iVar7 = iVar7 + 1;
    } while (bVar1 == bVar5);
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      pcVar3 = (char *)0x0;
      if (in_ECX == (char *)0x0) {
        in_ECX = "";
      }
      else {
        cVar4 = *in_ECX;
        if (cVar4 != '\0') {
          pcVar6 = in_ECX;
          pcVar8 = (char *)0x0;
          do {
            pcVar3 = pcVar6;
            if (cVar4 != '/') {
              pcVar3 = pcVar8;
            }
            cVar4 = pcVar6[1];
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar3;
          } while (cVar4 != '\0');
        }
        if (pcVar3 != (char *)0x0) {
          in_ECX = pcVar3 + 1;
        }
      }
      cVar4 = *in_ECX;
      if (cVar4 == '\0') {
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)0x0;
        do {
          pcVar3 = in_ECX;
          if (cVar4 != '.') {
            pcVar3 = pcVar6;
          }
          cVar4 = in_ECX[1];
          in_ECX = in_ECX + 1;
          pcVar6 = pcVar3;
        } while (cVar4 != '\0');
      }
      pcVar6 = "";
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      iVar2 = 0;
      do {
        bVar1 = pcVar6[iVar2];
        bVar5 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xba9U)))[iVar2];
        if ((bVar1 == 0) || (bVar5 == 0)) {
          return bVar1 == bVar5;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        iVar2 = iVar2 + 1;
      } while (bVar1 == bVar5);
      return false;
    }
  } while( true );
}

#undef DAT_0181f04c
#undef UNK_0181e9d9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff40
 */

char * recovered_1000ff40(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar2 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    in_ECX = "";
  }
  else {
    cVar1 = *in_ECX;
    if (cVar1 != '\0') {
      pcVar3 = in_ECX;
      pcVar4 = (char *)0x0;
      do {
        pcVar2 = pcVar3;
        if (cVar1 != '/') {
          pcVar2 = pcVar4;
        }
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar2;
      } while (cVar1 != '\0');
    }
  }
  if (pcVar2 != (char *)0x0) {
    in_ECX = pcVar2 + 1;
  }
  cVar1 = *in_ECX;
  if (cVar1 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)0x0;
    do {
      pcVar2 = in_ECX;
      if (cVar1 != '.') {
        pcVar2 = pcVar3;
      }
      cVar1 = in_ECX[1];
      in_ECX = in_ECX + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  pcVar3 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  return pcVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ffc0
 */

void recovered_1000ffc0(char *in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;

  if (param_3 != (char *)0x0) {
    if ((in_ECX == (char *)0x0) || (cVar4 = *in_ECX, cVar4 == '\0')) {
      pcVar6 = "";
      if (in_EDX != (char *)0x0) {
        pcVar6 = in_EDX;
      }
      cVar4 = *pcVar6;
      if (cVar4 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar3 = 0;
        do {
          uVar2 = uVar3 + 1;
          param_3[uVar3] = cVar4;
          if (0xef < uVar2) break;
          cVar4 = pcVar6[uVar3 + 1];
          uVar3 = uVar2;
        } while (cVar4 != '\0');
      }
    }
    else {
      uVar2 = 1;
      do {
        uVar3 = uVar2;
        param_3[uVar3 - 1] = cVar4;
        if (0xef < uVar3) break;
        cVar4 = in_ECX[uVar3];
        uVar2 = uVar3 + 1;
      } while (cVar4 != '\0');
      param_3[uVar3] = '\0';
      uVar1 = strlen(param_3);
      if (uVar1 < 0xf1) {
        iVar5 = 0xf0;
        if (uVar1 != 0xf0) {
          iVar5 = uVar1 + 1;
          param_3[uVar1] = '/';
        }
        param_3[iVar5] = '\0';
      }
      pcVar6 = "";
      if (in_EDX != (char *)0x0) {
        pcVar6 = in_EDX;
      }
      uVar2 = strlen(param_3);
      if (0xf0 < uVar2) {
        return;
      }
      cVar4 = *pcVar6;
      uVar3 = uVar2;
      if (uVar2 != 0xf0 && cVar4 != '\0') {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar3] = cVar4;
          uVar2 = uVar3 + 1;
          if (0xee < uVar3) break;
          cVar4 = *pcVar6;
          uVar3 = uVar2;
        } while (cVar4 != '\0');
      }
    }
    param_3[uVar2] = '\0';
  }
  return;
}


#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define in_stack_ffffffbc (*(undefined4 *)(frame + 28))
#define local_24 (*(int *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_18 (*(uint *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100100c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100100c0(int in_ECX,int in_EDX,int param_3,int param_4,uint3 param_5,int param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar15;
  undefined2 uVar14;

  iVar13 = (*(uint32_t *)(pf_module_state+0x12d8U));
  iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
  iVar7 = in_ECX;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
    iVar7 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  local_20 = 0;
  local_24 = 0;
  if (-1 < in_ECX) {
    local_24 = iVar7;
  }
  iVar7 = in_EDX;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
    iVar7 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  iVar10 = 0;
  if (-1 < in_EDX) {
    iVar10 = iVar7;
  }
  iVar7 = param_3 + in_ECX;
  iVar4 = iVar7;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar7) {
    iVar4 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  local_18 = 0;
  if (-1 < iVar7) {
    local_18 = iVar4;
  }
  iVar7 = param_4 + in_EDX;
  iVar4 = iVar7;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar7) {
    iVar4 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  if (-1 < iVar7) {
    local_20 = iVar4;
  }
  if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (local_18 - local_24 != 0 && local_24 <= (int)local_18)) &&
     (iVar10 < (int)local_20)) {
    puVar1 = (uint *)((*(uint32_t *)(pf_module_state+0x1490U)) + (local_24 + iVar10 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
    do {
      puVar3 = puVar1;
      iVar7 = local_18 - local_24;
      do {
        *puVar3 = param_5 | 0xff000000;
        puVar3 = puVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar10 = iVar10 + 1;
      puVar1 = puVar1 + iVar12;
    } while (iVar10 != local_20);
  }
  uVar11 = CONCAT13((char)((uint)in_stack_ffffffbc >> 0x18),0x434343);
  recovered_1000efc0(in_ECX,in_EDX,param_3,param_4,uVar11);
  iVar10 = param_3 / 2;
  iVar4 = param_4 / 2 + in_EDX;
  iVar7 = iVar10 + in_ECX;
  uVar15 = (undefined1)(uVar11 >> 0x18);
  if (param_6 == 2) {
    iVar7 = iVar7 + -4;
    iVar4 = iVar4 + -4;
    uVar14 = (undefined2)(CONCAT13(uVar15,0x1e0000) >> 0x10);
    iVar13 = 8;
    iVar12 = 8;
  }
  else {
    if (param_6 == 1) {
      iVar10 = iVar7 + -4;
      if (iVar12 <= iVar7 + -4) {
        iVar10 = iVar12;
      }
      local_20 = 0;
      iVar2 = 0;
      if (3 < iVar7) {
        iVar2 = iVar10;
      }
      iVar10 = iVar4 + 2;
      if (iVar13 <= iVar4 + 2) {
        iVar10 = iVar13;
      }
      iVar9 = 0;
      if (-3 < iVar4) {
        iVar9 = iVar10;
      }
      iVar10 = iVar7 + 4;
      if (iVar12 <= iVar7 + 4) {
        iVar10 = iVar12;
      }
      local_18 = 0;
      if (-5 < iVar7) {
        local_18 = iVar10;
      }
      iVar7 = iVar4 + 4;
      if (iVar13 <= iVar4 + 4) {
        iVar7 = iVar13;
      }
      if (-5 < iVar4) {
        local_20 = iVar7;
      }
      if ((*(uint32_t *)(pf_module_state+0x1490U)) == 0) {
        return;
      }
      if (local_18 - iVar2 == 0 || (int)local_18 < iVar2) {
        return;
      }
      if ((int)local_20 <= iVar9) {
        return;
      }
      puVar5 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + (iVar2 + iVar9 * iVar12) * 4);
      do {
        iVar13 = local_18 - iVar2;
        puVar6 = puVar5;
        do {
          *puVar6 = 0xff1e1e1e;
          puVar6 = puVar6 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + iVar12;
      } while (iVar9 != local_20);
      return;
    }
    if (param_6 == 0) {
      uVar11 = iVar7 - 3;
      local_18 = iVar4 - 3;
      local_20 = iVar7 + 3;
      iVar2 = iVar12 * local_18 * 4;
      iVar7 = in_ECX * 4 + iVar10 * 4;
      iVar4 = 6;
      uVar8 = local_18;
      while( true ) {
        if (((int)uVar11 < iVar12 && -1 < (int)(uVar11 | uVar8)) &&
           ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)uVar8 < iVar13)) {
          *(undefined1 *)(iVar7 + -0xc + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + -0xb + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + -10 + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + -9 + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0xff;
        }
        if (iVar4 == 0) break;
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + iVar12 * 4 + 4;
        iVar4 = iVar4 + -1;
      }
      iVar7 = in_ECX * 4 + iVar10 * 4;
      iVar10 = -6;
      while( true ) {
        if (((int)local_20 < iVar12 && -1 < (int)(local_20 | local_18)) &&
           ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)local_18 < iVar13)) {
          *(undefined1 *)(iVar7 + 0xc + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + 0xd + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + 0xe + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0x1e;
          *(undefined1 *)(iVar7 + 0xf + (*(uint32_t *)(pf_module_state+0x1490U)) + iVar2) = 0xff;
        }
        if (iVar10 == 0) break;
        local_20 = local_20 - 1;
        local_18 = local_18 + 1;
        iVar7 = iVar7 + iVar12 * 4 + -4;
        iVar10 = iVar10 + 1;
      }
      return;
    }
    uVar11 = CONCAT22((short)(CONCAT13(uVar15,0x1e0000) >> 0x10),0x1e1e);
    recovered_1000efc0(iVar7 + -5,iVar4 + -4,6,6,uVar11);
    iVar7 = iVar7 + -1;
    iVar4 = iVar4 + -1;
    uVar14 = CONCAT11((char)(uVar11 >> 0x18),0x1e);
    iVar13 = 6;
    iVar12 = 6;
  }
  recovered_1000efc0(iVar7,iVar4,iVar12,iVar13,CONCAT22(uVar14,0x1e1e));
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef in_stack_ffffffbc
#undef local_24
#undef local_20
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006930
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_01823f88
#define DAT_01823f88 (*(uint8_t *)(0x1823f88U))
#undef DAT_01823f8c
#define DAT_01823f8c (*(uint8_t *)(0x1823f8cU))
#undef DAT_01823f90
#define DAT_01823f90 (*(uint8_t *)(0x1823f90U))
#undef DAT_01823f94
#define DAT_01823f94 (*(uint8_t *)(0x1823f94U))
#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
#undef DAT_018240b0
#define DAT_018240b0 (*(uint8_t *)(0x18240b0U))
#undef DAT_018240b4
#define DAT_018240b4 (*(uint8_t *)(0x18240b4U))
#undef DAT_018240b8
#define DAT_018240b8 (*(uint8_t *)(0x18240b8U))
#undef DAT_018240bc
#define DAT_018240bc (*(uint8_t *)(0x18240bcU))
#undef DAT_018240c0
#define DAT_018240c0 (*(uint8_t *)(0x18240c0U))
#undef DAT_018241b5
#define DAT_018241b5 (*(uint8_t *)(0x18241b5U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006930
#define Ram00006930 (*(uint32_t *)(0x6930U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_000068b8
#define UINT_000068b8 (*(uint *)(0x68b8U))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_000068f8
#define UINT_000068f8 (*(uint *)(0x68f8U))
#undef UNK_0181e901
#define UNK_0181e901 (*(uint8_t *)(0x181e901U))
#undef UNK_018240c4
#define UNK_018240c4 (*(uint8_t *)(0x18240c4U))
#define uStack_d2 (*(undefined1 *)(frame + 9022))
#define uStack_ac (*(undefined4 *)(frame + 9060))
#define uStack_a8 (*(undefined4 *)(frame + 9064))
#define uStack_a4 (*(undefined4 *)(frame + 9068))
#define uStack_94 (*(undefined4 *)(frame + 9084))
#define uStack_90 (*(undefined4 *)(frame + 9088))
#define uStack_8c (*(undefined4 *)(frame + 9092))
#define uStack_7c (*(undefined4 *)(frame + 9108))
#define uStack_78 (*(undefined4 *)(frame + 9112))
#define uStack_74 (*(undefined4 *)(frame + 9116))
#define uStack_70 (*(uint *)(frame + 9120))
#define iStack_6c (*(int *)(frame + 9124))
#define iStack_68 (*(int *)(frame + 9128))
#define iStack_64 (*(int *)(frame + 9132))
#define iStack_60 (*(int *)(frame + 9136))
#define uStack_5c (*(uint *)(frame + 9140))
#define uStack_58 (*(uint *)(frame + 9144))
#define uStack_50 (*(uint *)(frame + 9152))
#define uStack_4c (*(uint *)(frame + 9156))
#define iStack_48 (*(int *)(frame + 9160))
#define uStack_44 (*(uint *)(frame + 9164))
#define pcStack_40 (*(char * *)(frame + 9168))
#define uStack_3c (*(uint *)(frame + 9172))
#define uStack_34 (*(uint *)(frame + 9180))
#define uStack_30 (*(uint *)(frame + 9184))
#define piStack_2c (*(int * *)(frame + 9188))
#define pcStack_28 (*(char * *)(frame + 9192))
#define uStack_24 (*(undefined4 *)(frame + 9196))
#define pcStack_20 (*(char * *)(frame + 9200))
#define pcStack_18 (*(char * *)(frame + 9208))
#define uStack_14 (*(undefined4 *)(frame + 9212))
#define in_stack_fffffebc (*(uint *)(frame + 8908))
#define in_stack_ffffff1f (*(undefined1 *)(frame + 9007))
#define local_d4 (*(undefined2 *)(frame + 9020))
#define local_54 (*(uint *)(frame + 9148))
#define local_38 (*(char * *)(frame + 9176))
#define local_1c (*(char * *)(frame + 9204))
#define acStack_23ec (*(char (*)[96])(frame + 36))
#define uStack_238c (*(undefined1 *)(frame + 132))
#define acStack_238b (*(char (*)[3])(frame + 133))
#define iStack_2388 (*(int *)(frame + 136))
#define uStack_2384 (*(uint *)(frame + 140))
#define iStack_2380 (*(int *)(frame + 144))
#define acStack_2364 (*(char (*)[16])(frame + 172))
#define acStack_2354 (*(char (*)[428])(frame + 188))
#define auStack_21a8 (*(uint (*)[1896])(frame + 616))
#define acStack_408 (*(char (*)[72])(frame + 8200))
#define auStack_3c0 (*(undefined1 (*)[16])(frame + 8272))
#define uStack_3b0 (*(uint *)(frame + 8288))
#define uStack_3ac (*(uint *)(frame + 8292))
#define uStack_3a8 (*(uint *)(frame + 8296))
#define acStack_38c (*(char (*)[96])(frame + 8324))
#define acStack_32c (*(char (*)[48])(frame + 8420))
#define acStack_2fc (*(char (*)[32])(frame + 8468))
#define abStack_2dc (*(byte (*)[4])(frame + 8500))
#define acStack_2d8 (*(char (*)[96])(frame + 8504))
#define uStack_278 (*(uint *)(frame + 8600))
#define iStack_274 (*(int *)(frame + 8604))
#define iStack_270 (*(int *)(frame + 8608))
#define iStack_26c (*(int *)(frame + 8612))
#define uStack_268 (*(uint *)(frame + 8616))
#define uStack_264 (*(uint *)(frame + 8620))
#define uStack_260 (*(uint *)(frame + 8624))
#define uStack_25c (*(uint *)(frame + 8628))
#define uStack_258 (*(uint *)(frame + 8632))
#define uStack_254 (*(uint *)(frame + 8636))
#define uStack_250 (*(uint *)(frame + 8640))
#define uStack_24c (*(uint *)(frame + 8644))
#define uStack_248 (*(uint *)(frame + 8648))
#define uStack_244 (*(uint *)(frame + 8652))
#define pcStack_240 (*(char * *)(frame + 8656))
#define uStack_234 (*(undefined4 *)(frame + 8668))
#define uStack_230 (*(undefined4 *)(frame + 8672))
#define uStack_22c (*(undefined4 *)(frame + 8676))
#define uStack_214 (*(undefined4 *)(frame + 8700))
#define uStack_210 (*(undefined4 *)(frame + 8704))
#define uStack_20c (*(undefined4 *)(frame + 8708))
#define uStack_1f4 (*(undefined4 *)(frame + 8732))
#define uStack_1f0 (*(undefined4 *)(frame + 8736))
#define uStack_1ec (*(undefined4 *)(frame + 8740))
#define uStack_1d4 (*(undefined4 *)(frame + 8764))
#define uStack_1d0 (*(undefined4 *)(frame + 8768))
#define uStack_1cc (*(undefined4 *)(frame + 8772))
#define uStack_1b4 (*(uint *)(frame + 8796))
#define uStack_1b0 (*(undefined4 *)(frame + 8800))
#define uStack_1ac (*(undefined4 *)(frame + 8804))
#define uStack_174 (*(uint *)(frame + 8860))
#define uStack_170 (*(undefined4 *)(frame + 8864))
#define uStack_16c (*(undefined4 *)(frame + 8868))
#define uStack_168 (*(undefined4 *)(frame + 8872))
#define uStack_164 (*(undefined4 *)(frame + 8876))
#define uStack_150 (*(undefined4 *)(frame + 8896))
#define uStack_134 (*(undefined4 *)(frame + 8924))
#define uStack_130 (*(undefined4 *)(frame + 8928))
#define uStack_12c (*(uint *)(frame + 8932))
#define uStack_128 (*(undefined4 *)(frame + 8936))
#define uStack_124 (*(undefined2 *)(frame + 8940))
#define uStack_10c (*(undefined4 *)(frame + 8964))
#define uStack_108 (*(undefined4 *)(frame + 8968))
#define uStack_104 (*(undefined4 *)(frame + 8972))
#define uStack_100 (*(undefined1 *)(frame + 8976))
#define uStack_f0 (*(undefined4 *)(frame + 8992))
#define cStack_d5 (*(char *)(frame + 9019))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100104e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100104e0(char *in_ECX)

{
  unsigned char frame[9264] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  undefined1 uVar34;
  undefined2 uVar35;
  undefined1 uVar36;

  uVar8 = *(uint *)(in_ECX + 0x58);
  local_1c = (char *)(uVar8 + 0xe);
  iVar12 = *(int *)(in_ECX + 0x5c);
  iVar25 = iVar12 + 0x26;
  local_38 = in_ECX;
  switch((uintptr_t)(*(undefined4 *)(in_ECX + 0x10))) {
  case 0:
    iVar25 = *(int *)(in_ECX + 100) + -0x6a;
    iVar12 = 1;
    if (0x49 < iVar25) {
      iVar12 = iVar25 / 0x4a - iVar25 / -0x6c000000;
    }
    uStack_30 = *(uint *)(in_ECX + 0x58);
    pcStack_28 = *(char **)(in_ECX + 0x5c);
    iVar25 = (int)((ulonglong)((longlong)(*(int *)(in_ECX + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
             -0x26 + *(int *)(in_ECX + 0x60);
    iVar25 = (iVar25 >> 6) - (iVar25 >> 0x1f);
    if (iVar25 < 2) {
      iVar25 = 1;
    }
    uStack_34 = iVar25 * iVar12;
    local_38 = (char *)(uStack_30 + 0x22);
    uStack_3c = (int)pcStack_28 + 0x44;
    piStack_2c = (int *)(*(int *)(in_ECX + 0xaf0) + 2);
    pcStack_18 = (char *)0x0;
    iVar25 = 0xc;
    pcVar15 = "";
    pcStack_20 = in_ECX;
    do {
      uVar36 = (undefined1)(in_stack_fffffebc >> 0x18);
      if (pcVar15[-1] == '\x01') {
        iVar12 = *(int *)(pcStack_20 + 0x58);
        if (iVar12 + -0xe + *(int *)(pcStack_20 + 0x60) < (int)pcStack_18 * 0x5c + 0x76 + iVar12)
        break;
        iVar12 = (int)pcStack_18 * 0x5c + 0x22 + iVar12;
        local_1c = *(char **)(pcStack_20 + 0x5c);
        uStack_24 = (int)local_1c + 0x22;
        PF_PART3(uStack_134, 0) = 0xfafafa;
        uVar33 = CONCAT22(CONCAT11(uVar36,0xfa),0xfafa);
        uStack_150 = 0x10011400;
        recovered_1000f370(iVar12,uStack_24,0x54,0x1a,(uint3)uVar33,
                           -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
        PF_PART3(uStack_134, 0) = 0x969696;
        uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0x969696);
        uStack_150 = 0x1001143a;
        recovered_1000efc0(iVar12,uStack_24,0x54,0x1a,uVar8);
        uStack_134 = CONCAT13(PF_PART1(uStack_134, 3),0x202020);
        in_stack_fffffebc = CONCAT13((char)(uVar8 >> 0x18),0x202020);
        uStack_150 = 0x1001147e;
        recovered_1000ec70(iVar12 + 8,(int)local_1c + 0x2b,pcVar15,0xb,in_stack_fffffebc,1);
        pcStack_18 = (char *)((int)pcStack_18 + 1);
      }
      uVar36 = (undefined1)(in_stack_fffffebc >> 0x18);
      pcVar15 = pcVar15 + 0x124;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    pcVar15 = pcStack_20;
    if (pcStack_20[0x260] == '\0') {
      uStack_134 = 0x69766564;
      uStack_130 = 0x206563;
      uVar8 = *(uint *)(pcStack_20 + 0x25c);
      if ((int)uVar8 < 0) {
        uStack_150 = 0x10011525;
        uVar11 = strlen((char *)&uStack_134);
        if (uVar11 < 0xf3) {
          iVar25 = 0xf2;
          if (uVar11 != 0xf2) {
            iVar25 = uVar11 + 1;
            *(undefined1 *)((int)&uStack_134 + uVar11) = 0x2d;
          }
          *(undefined1 *)((int)&uStack_134 + iVar25) = 0;
        }
        uVar8 = -uVar8;
      }
      uStack_150 = 0x10011557;
      recovered_10015400((char *)&uStack_134,0xf3,uVar8);
      uStack_150 = 0x1001155f;
      uVar11 = strlen((char *)&uStack_134);
      if (uVar11 < 0xf3) {
        uVar8 = 0xf2;
        if (uVar11 != 0xf2) {
          cVar4 = ' ';
          pcVar15 = "/";
          do {
            *(char *)((int)&uStack_134 + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0xf0 < uVar11) break;
            cVar4 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_134 + uVar8) = 0;
        pcVar15 = pcStack_20;
      }
      uStack_150 = 0x100115ad;
      uVar11 = strlen((char *)&uStack_134);
      if (0xf2 < uVar11) goto LAB_100115f2;
      cVar4 = pcVar15[0x78];
      if (uVar11 != 0xf2 && cVar4 != '\0') {
        pcVar15 = pcVar15 + 0x79;
        uVar9 = uVar11;
        do {
          *(char *)((int)&uStack_134 + uVar9) = cVar4;
          uVar11 = uVar9 + 1;
          if (0xf0 < uVar9) break;
          cVar4 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          uVar9 = uVar11;
        } while (cVar4 != '\0');
      }
    }
    else {
      uStack_134 = 0x6e756f6d;
      uStack_130 = 0x20646574;
      uStack_12c = 0x69766564;
      uStack_128 = CONCAT13(PF_PART1(uStack_128, 3),0x736563);
      uVar11 = 0xf;
    }
    *(undefined1 *)((int)&uStack_134 + uVar11) = 0;
LAB_100115f2:
    pcVar15 = local_38;
    uStack_14 = CONCAT13(PF_PART1(uStack_14, 3),0x2e2e2e);
    uVar8 = CONCAT13(uVar36,0x2e2e2e);
    uStack_150 = 0x10011630;
    recovered_1000ec70((int)local_38,uStack_3c,(char *)&uStack_134,0xffffffff,uVar8,1);
    iVar25 = (*(uint32_t *)(pf_module_state+0x12d4U));
    uVar36 = (undefined1)(uVar8 >> 0x18);
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= (int)pcVar15) {
      local_38 = (char *)(*(uint32_t *)(pf_module_state+0x12d4U));
    }
    pcStack_18 = (char *)0x0;
    pcVar15 = (char *)0;
    if (-0x23 < (int)uStack_30) {
      pcVar15 = local_38;
    }
    iVar12 = (int)pcStack_28 + 0x56;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)pcStack_28 + 0x56) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    local_1c = *(char **)(pcStack_20 + 0x60);
    iVar6 = 0;
    if (-0x57 < (int)pcStack_28) {
      iVar6 = iVar12;
    }
    iVar12 = uStack_30 + -0xe + (int)local_1c;
    iVar21 = iVar12;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar12) {
      iVar21 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar20 = 0;
    if (-1 < iVar12) {
      iVar20 = iVar21;
    }
    iVar12 = (int)pcStack_28 + 0x57;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)pcStack_28 + 0x57) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    if (-0x58 < (int)pcStack_28) {
      pcStack_18 = (char *)iVar12;
    }
    if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar20 - (int)pcVar15 != 0 && (int)pcVar15 <= iVar20)) &&
       (iVar6 < (int)pcStack_18)) {
      puVar26 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + ((int)pcVar15 + iVar6 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
      do {
        puVar24 = puVar26;
        iVar12 = iVar20 - (int)pcVar15;
        do {
          *puVar24 = 0xffcccccc;
          puVar24 = puVar24 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar6 = iVar6 + 1;
        puVar26 = puVar26 + iVar25;
      } while ((char *)iVar6 != pcStack_18);
      local_1c = *(char **)(pcStack_20 + 0x60);
    }
    iVar25 = *(int *)(pcStack_20 + 100);
    pcStack_28 = (char *)(iVar25 + -0x6a);
    iVar12 = ((int)((ulonglong)((longlong)(int)pcStack_28 * 0x22983759) >> 0x20) - iVar25) + 0x6a;
    iVar6 = (iVar12 >> 6) - (iVar12 >> 0x1f);
    iVar12 = iVar6;
    if ((int)pcStack_28 < 0x4a) {
      iVar12 = -1;
    }
    uStack_24 = *(uint *)(pcStack_20 + 0xaf0);
    iVar21 = (int)((ulonglong)((longlong)((int)local_1c + -0x26) * -0x2df2df2d) >> 0x20) + -0x26 +
             (int)local_1c;
    local_1c = (char *)((iVar21 >> 6) - (iVar21 >> 0x1f));
    if ((int)local_1c < 2) {
      local_1c = (char *)0x1;
    }
    iVar12 = uStack_24 + 2 + iVar12 * (int)local_1c;
    iVar21 = *(int *)(pcStack_20 + 0xaf8);
    if (iVar21 < 0) {
      pcStack_20[0xaf8] = '\0';
      pcStack_20[0xaf9] = '\0';
      pcStack_20[0xafa] = '\0';
      pcStack_20[0xafb] = '\0';
      iVar21 = 0;
    }
    if (iVar12 < 1 || iVar12 < iVar21) {
      iVar21 = 0;
      if (0 < iVar12) {
        iVar21 = iVar12;
      }
      *(int *)(pcStack_20 + 0xaf8) = iVar21;
    }
    pcVar15 = pcStack_20;
    if (0 < (int)uStack_34) {
      pcVar19 = (char *)0x0;
      do {
        uVar36 = (undefined1)(uVar8 >> 0x18);
        iVar25 = (int)((ulonglong)((longlong)(*(int *)(pcVar15 + 0x60) + -0x26) * -0x2df2df2d) >>
                      0x20) + -0x26 + *(int *)(pcVar15 + 0x60);
        local_1c = (char *)((iVar25 >> 6) - (iVar25 >> 0x1f));
        if ((int)local_1c < 2) {
          local_1c = (char *)0x1;
        }
        iVar25 = (int)pcVar19 + *(int *)(pcVar15 + 0xaf8);
        if ((int)piStack_2c <= iVar25) goto LAB_10011a48;
        pcVar14 = (char *)(*(int *)(pcVar15 + 0x58) + 0x22 + ((uint)pcVar19 % (uint)local_1c) * 0x4e
                          );
        iVar12 = *(int *)(pcVar15 + 0x5c) + 0x60 + ((uint)pcVar19 / (uint)local_1c) * 0x4a;
        pcStack_18 = pcVar19;
        if (iVar25 == 0) {
          uStack_150 = 0x100119b9;
          recovered_10014ef0((int)pcVar14 + 10,iVar12,(char *)0x0,'\x01');
          pcVar23 = "Parent";
          if ((pcStack_20[0x78] == '\0') && (pcStack_20[0x260] == '\0')) {
            pcVar23 = "Devices";
          }
          pcVar19 = pcStack_18;
LAB_10011a06:
          pcVar15 = pcStack_20;
          uVar8 = CONCAT13(uVar36,0x1c1c1c);
          uStack_14 = CONCAT13(PF_PART1(uStack_14, 3),0x1c1c1c);
          uStack_150 = 0x10011a0d;
          recovered_1000f280((int)pcVar14,iVar12 + 0x26,0x44,pcVar23,0x1c1c,0x1c);
        }
        else {
          local_1c = pcVar14;
          if (iVar25 != 1) {
            iVar6 = ((int)pcVar19 - 2U) + *(int *)(pcVar15 + 0xaf8);
            if (((1 < iVar25) && (pcStack_20[0xafc] != '\0')) &&
               (iVar6 == *(int *)(pcStack_20 + 0xaf4))) {
              pcStack_28 = (char *)((int)pcVar14 - 4);
              uStack_24 = iVar12 + -4;
              PF_PART3(uStack_14, 0) = 0xe8e8e8;
              uVar33 = CONCAT22(CONCAT11(uVar36,0xe8),0xe8e8);
              uStack_150 = 0x10011903;
              recovered_1000f370((int)pcStack_28,uStack_24,0x44,0x40,(uint3)uVar33,
                                 -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
              uStack_14 = CONCAT13(PF_PART1(uStack_14, 3),0x8e8e8e);
              uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0x8e8e8e);
              uStack_150 = 0x10011935;
              recovered_1000efc0((int)pcStack_28,uStack_24,0x44,0x40,uVar8);
              uVar36 = (undefined1)(uVar8 >> 0x18);
            }
            iVar6 = iVar6 * 0x1f8;
            uStack_150 = 0x1001195e;
            recovered_10014ef0((int)local_1c + 10,iVar12,
                               (char *)(*(int *)(pcStack_20 + 0xaec) + iVar6),'\0');
            pcVar23 = (char *)(iVar6 + *(int *)(pcStack_20 + 0xaec));
            pcVar14 = local_1c;
            goto LAB_10011a06;
          }
          uStack_150 = 0x100117cc;
          recovered_10014ef0((int)pcVar14 + 10,iVar12,(char *)0x0,'\0');
          uStack_14 = CONCAT13(PF_PART1(uStack_14, 3),0x1c1c1c);
          uVar8 = CONCAT13(uVar36,0x1c1c1c);
          uStack_150 = 0x100117ff;
          recovered_1000f280((int)pcVar14,iVar12 + 0x26,0x44,"Refresh",0x1c1c,0x1c);
          pcVar15 = pcStack_20;
        }
        uVar36 = (undefined1)(uVar8 >> 0x18);
        pcVar19 = (char *)((int)pcVar19 + 1);
      } while ((char *)uStack_34 != pcVar19);
      iVar25 = (int)((ulonglong)((longlong)(*(int *)(pcVar15 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20
                    ) + -0x26 + *(int *)(pcVar15 + 0x60);
      local_1c = (char *)((iVar25 >> 6) - (iVar25 >> 0x1f));
      if ((int)local_1c < 2) {
        local_1c = (char *)0x1;
      }
      pcVar15 = pcStack_20;
LAB_10011a48:
      iVar25 = *(int *)(pcVar15 + 100);
      uStack_24 = *(uint *)(pcVar15 + 0xaf0);
      pcStack_28 = (char *)(iVar25 + -0x6a);
      iVar12 = ((int)((ulonglong)((longlong)(int)pcStack_28 * 0x22983759) >> 0x20) - iVar25) + 0x6a;
      iVar6 = (iVar12 >> 6) - (iVar12 >> 0x1f);
    }
    piStack_2c = (int *)(uStack_24 + 2);
    pcStack_18 = (char *)0x12;
    if (0x15 < iVar25 + -0x84) {
      pcStack_18 = (char *)(iVar25 + -0x88);
    }
    iVar12 = *(int *)(pcVar15 + 0x5c) + 0x5e;
    iVar25 = (int)pcStack_28 / 0x4a - (int)pcStack_28 / -0x6c000000;
    if ((int)pcStack_28 < 0x4a) {
      iVar25 = 1;
      iVar6 = -1;
    }
    uStack_34 = *(uint *)(pcVar15 + 0x58);
    bVar31 = -2 < (int)uStack_24;
    uStack_24 = iVar12;
    pcVar19 = pcStack_18;
    if (((bVar31) && (iVar25 * (int)local_1c < (int)piStack_2c)) &&
       (iVar6 = (int)local_1c * iVar6 + (int)piStack_2c, 0 < iVar6)) {
      pcVar19 = (char *)((iVar25 * (int)local_1c * (int)pcStack_18) / (int)piStack_2c);
      if ((int)pcVar19 < 0x13) {
        pcVar19 = (char *)0x12;
      }
      if ((int)pcStack_18 <= (int)pcVar19) {
        pcVar19 = pcStack_18;
      }
      uStack_24 = (((int)pcStack_18 - (int)pcVar19) * *(int *)(pcVar15 + 0xaf8)) / iVar6 + iVar12;
    }
    local_1c = pcVar19;
    iVar25 = uStack_34 + 0xe;
    PF_PART3(uStack_14, 0) = 0xe4e4e4;
    uVar33 = CONCAT22(CONCAT11(uVar36,0xe4),0xe4e4);
    uStack_150 = 0x10011b9b;
    uStack_30 = iVar12;
    piStack_2c = (int *)iVar25;
    recovered_1000f370(iVar25,iVar12,0xc,(int)pcStack_18,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    PF_PART3(uStack_14, 0) = 0xacacac;
    uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0xacacac);
    uStack_150 = 0x10011bca;
    recovered_1000efc0(iVar25,iVar12,0xc,(int)pcStack_18,uVar8);
    pcVar15 = local_1c;
    iVar25 = uStack_24;
    pcStack_18 = (char *)(uStack_24 + 1);
    PF_PART3(uStack_14, 0) = 0xbebebe;
    uVar33 = CONCAT22(CONCAT11((char)(uVar8 >> 0x18),0xbe),0xbebe);
    uStack_150 = 0x10011c2a;
    recovered_1000f370(uStack_34 + 0xf,(int)pcStack_18,10,(int)local_1c + -2,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    uStack_14 = CONCAT13(PF_PART1(uStack_14, 3),0x747474);
    uStack_150 = 0x10011c57;
    recovered_1000efc0((int)piStack_2c,iVar25,0xc,(int)pcVar15,
                       CONCAT13((char)((uint)uVar33 >> 0x18),0x747474));
    pcVar15 = pcStack_20;
    uStack_150 = 0x10011c86;
    recovered_100154f0(*(int *)(pcStack_20 + 0x58) + 0xe,
                       *(int *)(pcStack_20 + 0x5c) + -0x26 + *(int *)(pcStack_20 + 100),0xc,0xe,1);
    uStack_150 = 0x10011cb2;
    recovered_100154f0(*(int *)(pcVar15 + 0x58) + 0xe,
                       *(int *)(pcVar15 + 0x5c) + -0x16 + *(int *)(pcVar15 + 100),0xc,0xe,0);
    return;
  case 1:
    pcStack_28 = *(char **)(in_ECX + 0xb04);
    if (pcStack_28 != (char *)0x0 && *(int *)(in_ECX + 0xb08) == 0) {
      uStack_14 = *(uint *)(in_ECX + 0xb10);
      if (uStack_14 == 0) {
        return;
      }
      if (*(int *)(in_ECX + 100) < 0x35) {
        return;
      }
      if (*(int *)(in_ECX + 0x60) < 0x1d) {
        return;
      }
      uStack_24 = *(uint *)(in_ECX + 0xb14);
      if (uStack_24 == 0) {
        return;
      }
      uVar16 = *(int *)(in_ECX + 0x60) - 0x1c;
      uVar29 = *(int *)(in_ECX + 100) - 0x34;
      uStack_f0 = 0x100108d6;
      uStack_34 = uVar8;
      uVar32 = pf_app_udiv_full((ulonglong)uStack_24 * (ulonglong)uVar16,(ulonglong)uStack_14);
      uStack_3c = (uint)uVar32;
      uVar8 = uVar16;
      if ((int)uVar29 < (int)(uint)uVar32) {
        uStack_f0 = 0x100108f0;
        uVar32 = pf_app_udiv_full((ulonglong)uStack_14 * (ulonglong)uVar29,(ulonglong)uStack_24);
        uVar8 = (uint)uVar32;
        uStack_3c = uVar29;
      }
      if ((int)uStack_3c < 1) {
        return;
      }
      if ((int)uVar8 < 1) {
        return;
      }
      iVar12 = (int)(uVar16 - uVar8) / 2;
      iStack_48 = (int)(uVar29 - uStack_3c) / 2 + iVar25;
      iVar25 = uStack_34 + iVar12;
      local_1c = (char *)((int)local_1c + iVar12);
      pcStack_20 = (char *)(uStack_34 * 4 + (*(uint32_t *)(pf_module_state+0x12d4U)) * iStack_48 * 4 + iVar12 * 4);
      uStack_34 = (*(uint32_t *)(pf_module_state+0x12d8U));
      uStack_30 = (iVar25 + (*(uint32_t *)(pf_module_state+0x12d4U)) * iStack_48) * 4;
      uStack_50 = (*(uint32_t *)(pf_module_state+0x12d4U));
      pcStack_40 = (char *)((*(uint32_t *)(pf_module_state+0x12d4U)) * 4);
      uVar16 = 0;
      uStack_14 = uVar8;
      do {
        uStack_f0 = 0x1001099f;
        uVar32 = pf_app_udiv_full((ulonglong)uVar16 * (ulonglong)*(uint *)(local_38 + 0xb14),
                                    (ulonglong)uStack_3c);
        pcStack_18 = (char *)uVar32;
        uStack_24 = iStack_48 + uVar16;
        uVar8 = 0;
        piStack_2c = (int *)uVar16;
        do {
          uVar16 = *(uint *)(local_38 + 0xb10);
          uStack_f0 = 0x100109df;
          uVar32 = pf_app_udiv_full((ulonglong)uVar16 * (ulonglong)uVar8,(ulonglong)uStack_14);
          if (((int)((int)local_1c + uVar8) < (int)uStack_50 &&
               -1 < (int)((int)local_1c + uVar8 | uStack_24)) &&
             ((*(uint32_t *)(pf_module_state+0x1490U)) != 0 && (int)uStack_24 < (int)uStack_34)) {
            iVar25 = uVar16 * (int)pcStack_18 + (int)uVar32;
            uVar36 = *(undefined1 *)((int)pcStack_28 + 1U + iVar25 * 4);
            uVar34 = *(undefined1 *)((int)pcStack_28 + 2U + iVar25 * 4);
            *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + (int)pcStack_20 + 0x38 + uVar8 * 4) =
                 *(undefined1 *)((int)pcStack_28 + iVar25 * 4);
            *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + uStack_30 + 0x39 + uVar8 * 4) = uVar36;
            *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + uStack_30 + 0x3a + uVar8 * 4) = uVar34;
            *(undefined1 *)((*(uint32_t *)(pf_module_state+0x1490U)) + uStack_30 + 0x3b + uVar8 * 4) = 0xff;
          }
          uVar8 = uVar8 + 1;
        } while (uStack_14 != uVar8);
        uVar16 = (int)piStack_2c + 1;
        uStack_30 = uStack_30 + (int)pcStack_40;
        pcStack_20 = (char *)((int)pcStack_20 + (int)pcStack_40);
      } while ((int)uVar16 < (int)uStack_3c);
      return;
    }
    pcVar15 = in_ECX + 0x261;
    local_d4 = 0x3232;
    uStack_d2 = 0x32;
    uVar35 = 0x3232;
    uVar36 = 0x32;
    break;
  default:
    local_54 = CONCAT13(PF_PART1(local_54, 3),0x2d2d2d);
    cVar4 = in_ECX[0x261];
    if (cVar4 == '\0') {
      return;
    }
    pcVar15 = in_ECX + 0x261;
    do {
      pcVar19 = pcVar15;
      for (iVar12 = 1; ((cVar4 != '\0' && (cVar4 != '\n')) && (iVar12 != 0x60)); iVar12 = iVar12 + 1
          ) {
        (&cStack_d5)[iVar12] = cVar4;
        cVar4 = pcVar19[1];
        pcVar19 = pcVar19 + 1;
      }
      (&cStack_d5)[iVar12] = '\0';
      uStack_f0 = 0x10010589;
      recovered_1000ec70((int)local_1c,iVar25,(char *)&local_d4,0xffffffff,
                         CONCAT13(in_stack_ffffff1f,(int3)local_54),1);
      iVar25 = iVar25 + 0x10;
      pcVar15 = pcVar19 + (*pcVar19 == '\n');
      cVar4 = pcVar19[*pcVar19 == '\n'];
    } while (cVar4 != '\0');
    return;
  case 3:
    pcStack_18 = *(char **)(in_ECX + 0x58);
    iVar12 = *(int *)(in_ECX + 0x5c);
    pcStack_28 = *(char **)(in_ECX + 0x60);
    iVar25 = (int)pcStack_28 + -0xb2;
    uStack_4c = recovered_10015df0("W",0xffffffff);
    if ((int)uStack_4c < 2) {
      uStack_4c = 1;
    }
    uStack_4c = iVar25 / (int)uStack_4c;
    piVar10 = (int *)recovered_10004ab0();
    piStack_2c = recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xad1U)),piVar10);
    recovered_10015a70("Permafrost","1.0",acStack_408,0x48);
    recovered_10015a70("WinterShell","0.4",(char *)&uStack_10c,0x60);
    memset(&uStack_238c,0,0x1bc);
    pcVar15 = pcStack_18;
    iVar25 = Ram00006800;
    local_1c = in_ECX;
    uStack_14 = iVar12;
    if ((((iVar25 == 0x50414d57) && (iVar25 = Ram00006804, iVar25 != 0)) &&
        (uVar8 = Ram00006808, 0xb < uVar8)) &&
       (((uVar8 = Ram00006808, 0x133 < uVar8 &&
         (pcVar3 = (code *)Ram00006930, pcVar3 != (code *)0x0)) &&
        ((iVar25 = (*pcVar3)(&uStack_238c), iVar25 != 0 && ((uStack_2384 & 1) != 0)))))) {
      uStack_10c = 0x746e6957;
      uStack_108 = 0x68537265;
      uStack_104 = 0x206c6c65;
      uStack_100 = 0;
      uVar11 = strlen((char *)&uStack_10c);
      if (uVar11 < 0x60) {
        uVar8 = 0x5f;
        if (uVar11 != 0x5f) {
          cVar4 = '0';
          pcVar19 = ".4";
          do {
            *(char *)((int)&uStack_10c + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x5d < uVar11) break;
            cVar4 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_10c + uVar8) = 0;
        iVar12 = uStack_14;
      }
      uVar11 = strlen((char *)&uStack_10c);
      if (uVar11 < 0x60) {
        iVar25 = 0x5f;
        if (uVar11 != 0x5f) {
          iVar25 = uVar11 + 1;
          *(undefined1 *)((int)&uStack_10c + uVar11) = 0x20;
        }
        *(undefined1 *)((int)&uStack_10c + iVar25) = 0;
      }
      uVar11 = strlen((char *)&uStack_10c);
      if (uVar11 < 0x60) {
        uVar8 = 0x5f;
        if (uVar11 != 0x5f) {
          cVar4 = 'B';
          pcVar19 = "eta";
          do {
            *(char *)((int)&uStack_10c + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x5d < uVar11) break;
            cVar4 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_10c + uVar8) = 0;
        iVar12 = uStack_14;
      }
      uVar11 = strlen((char *)&uStack_10c);
      if (uVar11 < 0x60) {
        uVar8 = 0x5f;
        if (uVar11 != 0x5f) {
          cVar4 = ' ';
          pcVar19 = "+ Tayga ";
          do {
            *(char *)((int)&uStack_10c + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x5d < uVar11) break;
            cVar4 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_10c + uVar8) = 0;
        iVar12 = uStack_14;
      }
      pcVar19 = "0.2";
      if (acStack_2364[0] != '\0') {
        pcVar19 = acStack_2364;
      }
      uVar8 = strlen((char *)&uStack_10c);
      if (uVar8 < 0x60) {
        if (uVar8 != 0x5f) {
          cVar4 = *pcVar19;
          uVar16 = uVar8;
          while (uVar8 = uVar16, cVar4 != '\0') {
            pcVar19 = pcVar19 + 1;
            *(char *)((int)&uStack_10c + uVar16) = cVar4;
            uVar8 = uVar16 + 1;
            if (0x5d < uVar16) break;
            uVar16 = uVar8;
            cVar4 = *pcVar19;
          }
        }
        *(undefined1 *)((int)&uStack_10c + uVar8) = 0;
      }
      uVar11 = strlen((char *)&uStack_10c);
      if (uVar11 < 0x60) {
        iVar25 = 0x5f;
        if (uVar11 != 0x5f) {
          iVar25 = uVar11 + 1;
          *(undefined1 *)((int)&uStack_10c + uVar11) = 0x20;
        }
        *(undefined1 *)((int)&uStack_10c + iVar25) = 0;
      }
      pcVar19 = "Alpha";
      if (acStack_2354[0] != '\0') {
        pcVar19 = acStack_2354;
      }
      uVar8 = strlen((char *)&uStack_10c);
      if (uVar8 < 0x60) {
        if (uVar8 != 0x5f) {
          cVar4 = *pcVar19;
          uVar16 = uVar8;
          while (uVar8 = uVar16, cVar4 != '\0') {
            pcVar19 = pcVar19 + 1;
            *(char *)((int)&uStack_10c + uVar16) = cVar4;
            uVar8 = uVar16 + 1;
            if (0x5d < uVar16) break;
            uVar16 = uVar8;
            cVar4 = *pcVar19;
          }
        }
        *(undefined1 *)((int)&uStack_10c + uVar8) = 0;
      }
    }
    memset(abStack_2dc,0,0xa8);
    iVar25 = Ram00006800;
    if (((iVar25 == 0x50414d57) && (iVar25 = Ram00006804, iVar25 != 0)) &&
       ((uVar8 = Ram00006808, 0xb < uVar8 &&
        (((uVar8 = Ram00006808, 0xfb < uVar8 &&
          (pcVar3 = (code *)UINT_000068f8, pcVar3 != (code *)0x0)) &&
         (iVar25 = (*pcVar3)(abStack_2dc), iVar25 != 0)))))) {
      pcStack_20 = (char *)CONCAT31((int3)((uint)iVar25 >> 8),1);
    }
    else {
      iVar25 = Ram00006800;
      pcStack_20 = (char *)0x0;
      uStack_278 = 0;
      if (iVar25 == 0x50414d57) {
        iVar25 = Ram00006804;
        if (iVar25 == 0) {
LAB_100120a2:
          pcStack_20 = (char *)0x0;
          uStack_278 = 0;
        }
        else {
          uVar8 = Ram00006808;
          pcStack_20 = (char *)0x0;
          uStack_278 = 0;
          if (0xb < uVar8) {
            uVar8 = Ram00006808;
            pcStack_20 = (char *)0x0;
            uStack_278 = 0;
            if (0xbb < uVar8) {
              pcVar3 = (code *)UINT_000068b8;
              if (pcVar3 == (code *)0x0) goto LAB_100120a2;
              uStack_278 = (*pcVar3)();
              pcStack_20 = (char *)0x0;
            }
          }
        }
      }
    }
    uStack_30 = (int)pcVar15 + 0x12;
    local_38 = (char *)(iVar12 + 0x26);
    iStack_48 = (int)pcStack_28 + -0x24;
    acStack_32c[0] = '\0';
    bVar31 = uStack_278 < 2;
    if (bVar31) {
      uStack_278 = 1;
    }
    pcVar15 = " hardware thread";
    if (!bVar31) {
      pcVar15 = " hardware threads";
    }
    recovered_10015400(acStack_32c,0x30,uStack_278);
    uVar8 = strlen(acStack_32c);
    if (uVar8 < 0x30) {
      if (uVar8 != 0x2f) {
        cVar4 = *pcVar15;
        uVar16 = uVar8;
        while (uVar8 = uVar16, cVar4 != '\0') {
          pcVar15 = pcVar15 + 1;
          acStack_32c[uVar16] = cVar4;
          uVar8 = uVar16 + 1;
          if (0x2d < uVar16) break;
          uVar16 = uVar8;
          cVar4 = *pcVar15;
        }
      }
      acStack_32c[uVar8] = '\0';
    }
    if (acStack_2d8[0] == '\0') {
      pcVar15 = "Unknown CPU";
    }
    else {
      pcVar15 = acStack_2d8;
    }
    if ((char)pcStack_20 == '\0') {
      pcVar15 = "Unknown CPU";
    }
    cVar4 = *pcVar15;
    if (cVar4 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar8 = uVar16 + 1;
        acStack_23ec[uVar16] = cVar4;
        if (0x5e < uVar8) break;
        cVar4 = pcVar15[uVar16 + 1];
        uVar16 = uVar8;
      } while (cVar4 != '\0');
    }
    acStack_23ec[uVar8] = '\0';
    if (((char)pcStack_20 == '\0') || ((abStack_2dc[0] & 4) == 0)) {
      uStack_234 = 0x76616e75;
      uStack_230 = 0x616c6961;
      uStack_22c = 0x656c62;
      uStack_214 = 0x76616e75;
      uStack_210 = 0x616c6961;
      uStack_20c = 0x656c62;
      uStack_1f4 = 0x76616e75;
      uStack_1f0 = 0x616c6961;
      uStack_1ec = 0x656c62;
      uStack_1d4 = 0x76616e75;
      uStack_1d0 = 0x616c6961;
      uStack_1cc = 0x656c62;
      if (((char)pcStack_20 != '\0') && ((abStack_2dc[0] & 2) != 0)) goto LAB_100126f6;
LAB_10012224:
      uStack_1b4 = 0x76616e75;
      uStack_1b0 = 0x616c6961;
      uStack_1ac = 0x656c62;
      uStack_ac = 0x76616e75;
      uStack_a8 = 0x616c6961;
      uStack_a4 = 0x656c62;
      uStack_94 = 0x76616e75;
      uStack_90 = 0x616c6961;
      uStack_8c = 0x656c62;
LAB_1001227e:
      uStack_7c = 0x76616e75;
      uStack_78 = 0x616c6961;
      uStack_74 = 0x656c62;
    }
    else {
      uStack_44 = uStack_248;
      uStack_3c = uStack_24c;
      pcStack_40 = pcStack_240;
      uStack_34 = uStack_244;
      uVar8 = uStack_254;
      uVar16 = uStack_250;
      if (uStack_25c != 0 || uStack_258 != 0) {
        uVar8 = uStack_25c;
        uVar16 = uStack_258;
      }
      recovered_10015bb0(uVar8,uVar16,(char *)&uStack_234,0x20);
      recovered_10015bb0(uStack_254,uStack_250,(char *)&uStack_214,0x20);
      recovered_10015bb0(uStack_34,(uint)pcStack_40,(char *)&uStack_1f4,0x20);
      recovered_10015bb0(uStack_3c,uStack_44,(char *)&uStack_1d4,0x20);
      if ((abStack_2dc[0] & 2) == 0) goto LAB_10012224;
LAB_100126f6:
      uStack_1b4 = uStack_1b4 & 0xffffff00;
      recovered_100161b0((char *)&uStack_1b4,"data",iStack_274);
      recovered_100161b0((char *)&uStack_1b4,"inst",iStack_270);
      recovered_100161b0((char *)&uStack_1b4,"unified",iStack_26c);
      if ((char)uStack_1b4 == '\0') {
        uStack_1b4 = 0x76616e75;
        uStack_1b0 = 0x616c6961;
        uStack_1ac = 0x656c62;
      }
      if (uStack_268 == 0) {
        uStack_ac = 0x76616e75;
        uStack_a8 = 0x616c6961;
        uStack_a4 = 0x656c62;
      }
      else {
        recovered_10015bb0(uStack_268,0,(char *)&uStack_ac,0x18);
      }
      if (uStack_264 == 0) {
        uStack_94 = 0x76616e75;
        uStack_90 = 0x616c6961;
        uStack_8c = 0x656c62;
      }
      else {
        recovered_10015bb0(uStack_264,0,(char *)&uStack_94,0x18);
      }
      if (uStack_260 == 0) goto LAB_1001227e;
      recovered_10015bb0(uStack_260,0,(char *)&uStack_7c,0x18);
    }
    memset(auStack_3c0,0,0x34);
    iVar25 = Ram00006800;
    if (((iVar25 == 0x50414d57) && (iVar25 = Ram00006804, iVar25 != 0)) &&
       ((uVar8 = Ram00006808, 0xb < uVar8 &&
        (((uVar8 = Ram00006808, 0x7f < uVar8 &&
          (pcVar3 = (code *)UINT_0000687c, pcVar3 != (code *)0x0)) &&
         (iVar25 = (*pcVar3)(auStack_3c0), iVar25 != 0)))))) {
      uStack_174 = uStack_174 & 0xffffff00;
      recovered_10015400((char *)&uStack_174,0x48,uStack_3b0);
      uVar11 = strlen((char *)&uStack_174);
      if (uVar11 < 0x48) {
        uVar8 = 0x47;
        if (uVar11 != 0x47) {
          cVar4 = ' ';
          pcVar15 = "x ";
          do {
            *(char *)((int)&uStack_174 + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x45 < uVar11) break;
            cVar4 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_174 + uVar8) = 0;
      }
      recovered_10015400((char *)&uStack_174,0x48,uStack_3ac);
      uVar11 = strlen((char *)&uStack_174);
      if (uVar11 < 0x48) {
        uVar8 = 0x47;
        if (uVar11 != 0x47) {
          cVar4 = ',';
          pcVar15 = " ";
          do {
            *(char *)((int)&uStack_174 + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x45 < uVar11) break;
            cVar4 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        *(undefined1 *)((int)&uStack_174 + uVar8) = 0;
      }
      recovered_10015400((char *)&uStack_174,0x48,uStack_3a8);
      uVar11 = strlen((char *)&uStack_174);
      if (uVar11 < 0x48) {
        uVar8 = 0x47;
        if (uVar11 != 0x47) {
          cVar4 = '-';
          pcVar15 = "bit framebuffer";
          do {
            *(char *)((int)&uStack_174 + uVar11) = cVar4;
            uVar8 = uVar11 + 1;
            if (0x45 < uVar11) break;
            cVar4 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            uVar11 = uVar8;
          } while (cVar4 != '\0');
        }
        goto LAB_10012460;
      }
    }
    else {
      uStack_174 = 0x70617267;
      uStack_170 = 0x73636968;
      uStack_16c = 0x616e7520;
      uStack_168 = 0x6c696176;
      uStack_164 = 0x656c6261;
      uVar8 = 0x14;
LAB_10012460:
      *(undefined1 *)((int)&uStack_174 + uVar8) = 0;
    }
    uStack_24 = 0;
    uVar16 = recovered_10004ab0();
    pcVar15 = local_1c;
    builtin_strncpy(acStack_38c,"device ",8);
    uVar8 = uVar16;
    if ((int)uVar16 < 0) {
      uVar11 = strlen(acStack_38c);
      if (uVar11 < 0x60) {
        iVar25 = 0x5f;
        if (uVar11 != 0x5f) {
          iVar25 = uVar11 + 1;
          acStack_38c[uVar11] = '-';
        }
        acStack_38c[iVar25] = '\0';
      }
      uVar8 = -uVar16;
    }
    recovered_10015400(acStack_38c,0x60,uVar8);
    uStack_12c = 0x6f762030;
    uStack_128 = 0x656d756c;
    uStack_124 = 0x73;
    builtin_strncpy(acStack_2fc,"unknown",8);
    uVar36 = 0;
    memset(&uStack_238c,0,0x1f80);
    iVar25 = Ram00006800;
    if (((iVar25 == 0x50414d57) && (iVar25 = Ram00006804, iVar25 != 0)) &&
       ((uVar8 = Ram00006808, 0xb < uVar8 &&
        ((uVar8 = Ram00006808, 0xc3 < uVar8 &&
         (pcVar3 = (code *)UINT_000068c0, pcVar3 != (code *)0x0)))))) {
      puVar26 = &uStack_24;
      iVar25 = (*pcVar3)(&uStack_238c,0x10,puVar26);
      uVar36 = (undefined1)((uint)puVar26 >> 0x18);
      if (iVar25 != 0) {
        uStack_12c = uStack_12c & 0xffffff00;
        recovered_10015400((char *)&uStack_12c,0x20,uStack_24);
        pcVar15 = " volume";
        if (uStack_24 != 1) {
          pcVar15 = " volumes";
        }
        uVar8 = strlen((char *)&uStack_12c);
        if (uVar8 < 0x20) {
          if (uVar8 != 0x1f) {
            cVar4 = *pcVar15;
            uVar29 = uVar8;
            while (uVar8 = uVar29, cVar4 != '\0') {
              pcVar15 = pcVar15 + 1;
              *(char *)((int)&uStack_12c + uVar29) = cVar4;
              uVar8 = uVar29 + 1;
              if (0x1d < uVar29) break;
              uVar29 = uVar8;
              cVar4 = *pcVar15;
            }
          }
          *(undefined1 *)((int)&uStack_12c + uVar8) = 0;
        }
        pcVar15 = local_1c;
        uStack_44 = uStack_24;
        if (0xf < uStack_24) {
          uStack_44 = 0x10;
        }
        if (uStack_24 == 0) {
          uVar8 = 0;
          uVar16 = 0;
        }
        else {
          uStack_34 = uVar16;
          uVar29 = 0;
          uStack_3c = 0;
          pcVar14 = (char *)0x0;
          pcVar19 = acStack_238b;
          uVar8 = 0;
          do {
            bVar31 = CARRY4((uint)pcVar14,auStack_21a8[uVar29 * 0x7e]);
            pcVar14 = pcVar14 + auStack_21a8[uVar29 * 0x7e];
            uStack_3c = uStack_3c + bVar31;
            bVar31 = uVar8 == 0;
            uVar8 = 1;
            if (bVar31) {
              uVar8 = 0;
              pcStack_40 = pcVar14;
              if (auStack_21a8[uVar29 * 0x7e + 3] == uVar16) {
                cVar4 = acStack_23ec[uVar29 * 0x1f8 + 0x60];
                if (cVar4 != '\0') {
                  uVar30 = 0;
                  do {
                    uVar8 = uVar30 + 1;
                    acStack_38c[uVar30] = cVar4;
                    if (0x5e < uVar8) break;
                    cVar4 = pcVar19[uVar30];
                    uVar30 = uVar8;
                  } while (cVar4 != '\0');
                }
                acStack_38c[uVar8] = '\0';
                uVar8 = 1;
              }
            }
            uVar29 = uVar29 + 1;
            pcVar19 = pcVar19 + 0x1f8;
          } while (uVar29 != uStack_44);
          uVar16 = uStack_3c * 0x200 | (uint)pcVar14 >> 0x17;
          uVar8 = (int)pcVar14 * 0x200;
        }
        recovered_10015bb0(uVar8,uVar16,acStack_2fc,0x20);
      }
    }
    uVar16 = uStack_30;
    pcVar19 = local_38;
    iVar25 = iStack_48;
    (*(uint32_t *)&uStack_238c) = 0xfcfcfc;
    uVar8 = *(uint *)(pcVar15 + 8);
    if (uVar8 == 0xffffffff) {
      uVar8 = (*(uint32_t *)(pf_module_state+0x12ecU));
      if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) goto LAB_100128e9;
LAB_100128f1:
      bVar5 = ~pcVar15[5];
    }
    else {
      if (3 < uVar8) goto LAB_100128f1;
LAB_100128e9:
      if (uVar8 != 0) goto LAB_100128f1;
      bVar5 = 0xff;
    }
    uVar33 = CONCAT22(CONCAT11(uVar36,0xfc),0xfcfc);
    recovered_1000f370(uStack_30,(int)local_38,iStack_48,*(int *)(pcVar15 + 100) + -0x34,
                       (uint3)uVar33,bVar5);
    (*(uint32_t *)&uStack_238c) = 0xb8b8b8;
    uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0xb8b8b8);
    recovered_1000efc0(uVar16,(int)pcVar19,iVar25,*(int *)(local_1c + 100) + -0x34,uVar8);
    iVar25 = uStack_14;
    pcVar15 = pcStack_18;
    if (piStack_2c == (int *)0x0) {
      iVar12 = (int)pcStack_18 + 0x2e;
      iVar6 = uStack_14 + 0x3c;
      (*(uint32_t *)&uStack_238c) = 0xececec;
      uVar33 = CONCAT22(CONCAT11((char)(uVar8 >> 0x18),0xec),0xecec);
      recovered_1000f370(iVar12,iVar6,0x36,0x36,(uint3)uVar33,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)))
      ;
      pcVar15 = pcStack_18;
      (*(uint32_t *)&uStack_238c) = 0x808080;
      uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0x808080);
      recovered_1000efc0(iVar12,iVar6,0x36,0x36,uVar8);
      uVar36 = (undefined1)(uVar8 >> 0x18);
    }
    else {
      uVar36 = 0;
      recovered_1000e9f0(piStack_2c,(int)pcStack_18 + 0x26,uStack_14 + 0x38,0x46,0x46);
    }
    (*(uint32_t *)&uStack_238c) = 0x141414;
    uVar8 = CONCAT13(uVar36,0x141414);
    recovered_1000ec70((int)pcVar15 + 0x82,iVar25 + 0x3a,"Polynya OS",0x1c,uVar8,2);
    (*(uint32_t *)&uStack_238c) = 0x484848;
    uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x484848);
    recovered_1000ec70((int)pcVar15 + 0x84,iVar25 + 0x56,acStack_408,0x26,uVar8,1);
    (*(uint32_t *)&uStack_238c) = 0x484848;
    uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x484848);
    recovered_1000ec70((int)pcVar15 + 0x84,iVar25 + 0x68,"Tundra desktop environment",0x26,uVar8,1);
    local_38 = *(char **)(local_1c + 0x58);
    uStack_30 = *(uint *)(local_1c + 0x5c);
    uVar36 = 0xe8;
    iVar25 = (int)local_38 + 0x82;
    iVar12 = uStack_30 + 0x86;
    if (*(int *)(local_1c + 0xb00) != 0) {
      uVar36 = 0xf6;
    }
    (*(uint32_t *)&uStack_238c) = CONCAT11(uVar36,uVar36);
    (*(uint32_t *)&uStack_238c) = CONCAT12(uVar36,(*(uint32_t *)&uStack_238c));
    PF_PART1(piStack_2c, 0) = 0x20;
    uVar36 = 0x20;
    if (*(int *)(local_1c + 0xb00) != 0) {
      uVar36 = 0x50;
    }
    uVar34 = (undefined1)(uVar8 >> 0x18);
    recovered_1000f370(iVar25,iVar12,0x4c,0x16,(*(uint32_t *)&uStack_238c),-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    (*(uint32_t *)&uStack_238c) = 0x969696;
    uVar8 = CONCAT13(uVar34,0x969696);
    recovered_1000efc0(iVar25,iVar12,0x4c,0x16,uVar8);
    uVar34 = (undefined1)(uVar8 >> 0x18);
    uVar8 = recovered_10015df0("Overview",0xffffffff);
    (*(uint32_t *)&uStack_238c) = CONCAT11(uVar36,uVar36);
    (*(uint32_t *)&uStack_238c) = CONCAT12(uVar36,(*(uint32_t *)&uStack_238c));
    uVar16 = CONCAT22(CONCAT11(uVar34,uVar36),(*(uint32_t *)&uStack_238c));
    recovered_1000ec70((int)(0x4c - uVar8) / 2 + 0x82 + (int)local_38,uStack_30 + 0x8e,"Overview",
                       0xffffffff,uVar16,1);
    uStack_30 = *(uint *)(local_1c + 0x58);
    iVar6 = *(int *)(local_1c + 0x5c);
    iVar25 = uStack_30 + 0xd6;
    iVar12 = iVar6 + 0x86;
    uVar36 = 0xe8;
    if (*(int *)(local_1c + 0xb00) != 1) {
      uVar36 = 0xf6;
    }
    (*(uint32_t *)&uStack_238c) = CONCAT11(uVar36,uVar36);
    (*(uint32_t *)&uStack_238c) = CONCAT12(uVar36,(*(uint32_t *)&uStack_238c));
    if (*(int *)(local_1c + 0xb00) != 1) {
      PF_PART1(piStack_2c, 0) = 0x50;
    }
    uVar36 = (undefined1)(uVar16 >> 0x18);
    recovered_1000f370(iVar25,iVar12,0x46,0x16,(*(uint32_t *)&uStack_238c),-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    (*(uint32_t *)&uStack_238c) = 0x969696;
    uVar8 = CONCAT13(uVar36,0x969696);
    recovered_1000efc0(iVar25,iVar12,0x46,0x16,uVar8);
    uVar36 = (undefined1)(uVar8 >> 0x18);
    uVar8 = recovered_10015df0("Drivers",0xffffffff);
    (*(uint32_t *)&uStack_238c) = CONCAT11(PF_PART1(piStack_2c, 0),PF_PART1(piStack_2c, 0));
    (*(uint32_t *)&uStack_238c) = CONCAT12(PF_PART1(piStack_2c, 0),(*(uint32_t *)&uStack_238c));
    uVar16 = CONCAT22(CONCAT11(uVar36,PF_PART1(piStack_2c, 0)),(*(uint32_t *)&uStack_238c));
    recovered_1000ec70((int)(0x46 - uVar8) / 2 + 0xd6 + uStack_30,iVar6 + 0x8e,"Drivers",0xffffffff,
                       uVar16,1);
    iVar12 = uStack_14;
    pcVar15 = pcStack_18;
    iVar25 = (*(uint32_t *)(pf_module_state+0x12d4U));
    uVar36 = (undefined1)(uVar16 >> 0x18);
    if (*(int *)(local_1c + 0xb00) != 1) {
      iVar6 = (int)pcStack_18 + 0x22;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= (int)pcStack_18 + 0x22) {
        iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      local_1c = (char *)0x0;
      iVar21 = 0;
      if (-0x23 < (int)pcStack_18) {
        iVar21 = iVar6;
      }
      iVar6 = uStack_14 + 0xa8;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(uStack_14 + 0xa8)) {
        iVar6 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      iVar20 = 0;
      if (-0xa9 < (int)uStack_14) {
        iVar20 = iVar6;
      }
      iVar6 = (int)pcStack_18 + -0x22 + (int)pcStack_28;
      iVar13 = iVar6;
      if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar6) {
        iVar13 = (*(uint32_t *)(pf_module_state+0x12d4U));
      }
      iVar7 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar13;
      }
      iVar6 = uStack_14 + 0xa9;
      if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(uStack_14 + 0xa9)) {
        iVar6 = (*(uint32_t *)(pf_module_state+0x12d8U));
      }
      if (-0xaa < (int)uStack_14) {
        local_1c = (char *)iVar6;
      }
      piStack_2c = (int *)((int)pcStack_28 + -0x12 + (int)pcStack_18);
      pcStack_28 = (char *)((int)pcStack_28 + -0x10c + (int)pcStack_18);
      if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar7 - iVar21 != 0 && iVar21 <= iVar7)) &&
         (iVar20 < (int)local_1c)) {
        puVar26 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + (iVar21 + iVar20 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
        do {
          puVar24 = puVar26;
          iVar6 = iVar7 - iVar21;
          do {
            *puVar24 = 0xffd6d6d6;
            puVar24 = puVar24 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar20 = iVar20 + 1;
          puVar26 = puVar26 + iVar25;
        } while ((char *)iVar20 != local_1c);
      }
      uStack_30 = (int)pcStack_18 + 0x24;
      (*(uint32_t *)&uStack_238c) = 0x262626;
      uVar8 = CONCAT13(uVar36,0x262626);
      recovered_1000ec70(uStack_30,uStack_14 + 0xb4,"Processor",0xffffffff,uVar8,1);
      pcVar19 = (char *)((int)pcVar15 + 0x32);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      local_1c = pcVar19;
      recovered_1000ec70((int)pcVar19,iVar12 + 0xca,"Name",0x11,uVar8,1);
      local_38 = (char *)((int)pcVar15 + 0xb2);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)local_38,iVar12 + 0xca,acStack_23ec,0x30,uVar8,1);
      iVar12 = uStack_14;
      iVar25 = uStack_14 + 0xdc;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcVar19,iVar25,"Threads",0x11,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)local_38,iVar25,acStack_32c,0x30,uVar8,1);
      iVar25 = iVar12 + 0xfc;
      (*(uint32_t *)&uStack_238c) = 0x262626;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x262626);
      recovered_1000ec70(uStack_30,iVar25,"Software",0xffffffff,uVar8,1);
      pcVar15 = pcStack_28;
      (*(uint32_t *)&uStack_238c) = 0x262626;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x262626);
      recovered_1000ec70((int)pcStack_28,iVar25,"Memory",0xffffffff,uVar8,1);
      iVar12 = iVar12 + 0x112;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,iVar12,"Kernel",0xd,uVar8,1);
      pcStack_18 = (char *)((int)pcStack_18 + 0x92);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcStack_18,iVar12,acStack_408,0x18,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcVar15,iVar12,"Installed RAM",0xd,uVar8,1);
      pcVar19 = (char *)((int)piStack_2c + -0x9a);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar19,iVar12,(char *)&uStack_234,0x18,uVar8,1);
      iVar12 = uStack_14;
      iVar25 = uStack_14 + 0x124;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,iVar25,"Desktop",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcStack_18,iVar25,"Tundra",0x18,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcStack_28,iVar25,"Usable RAM",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar19,iVar25,(char *)&uStack_214,0x18,uVar8,1);
      pcVar15 = pcStack_18;
      iVar12 = iVar12 + 0x136;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,iVar12,"Built on",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar15,iVar12,"4 July, 2026",0x18,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcStack_28,iVar12,"Heap Free",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar29 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      piStack_2c = (int *)pcVar19;
      recovered_1000ec70((int)pcVar19,iVar12,(char *)&uStack_1f4,0x18,uVar29,1);
      uVar8 = uStack_14 + 0x148;
      uVar16 = uStack_4c;
      if ((int)uStack_4c < 0x19) {
        uVar16 = 0x18;
      }
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar29 = CONCAT13((char)(uVar29 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,uVar8,"Shell",0xd,uVar29,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar29 = CONCAT13((char)(uVar29 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar15,uVar8,(char *)&uStack_10c,uVar16,uVar29,1);
      uVar36 = (undefined1)(uVar29 >> 0x18);
      if (((char)pcStack_20 != '\0') && (uStack_24c != 0 || uStack_248 != 0)) {
        uVar8 = uStack_14 + 0x15a;
        (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
        uVar16 = CONCAT13(uVar36,0x5c5c5c);
        recovered_1000ec70((int)pcStack_28,uVar8,"Unmapped RAM",0xd,uVar16,1);
        (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
        uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x1c1c1c);
        recovered_1000ec70((int)piStack_2c,uVar8,(char *)&uStack_1d4,0x18,uVar16,1);
        uVar36 = (undefined1)(uVar16 >> 0x18);
      }
      (*(uint32_t *)&uStack_238c) = 0x262626;
      uVar16 = CONCAT13(uVar36,0x262626);
      uStack_14 = uVar8;
      recovered_1000ec70(uStack_30,uVar8 + 0x22,"Graphics and Storage",0xffffffff,uVar16,1);
      pcVar15 = pcStack_28;
      (*(uint32_t *)&uStack_238c) = 0x262626;
      uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x262626);
      recovered_1000ec70((int)pcStack_28,uVar8 + 0x22,"CPU Cache",0xffffffff,uVar16,1);
      pcVar19 = local_1c;
      iVar25 = uVar8 + 0x38;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar16 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,iVar25,"Graphics",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcStack_18,iVar25,(char *)&uStack_174,0x18,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcVar15,iVar25,"L1 Cache",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)piStack_2c,iVar25,(char *)&uStack_1b4,0x18,uVar8,1);
      iVar25 = uStack_14 + 0x4a;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcVar19,iVar25,"Startup Disk",0xd,uVar8,1);
      pcVar15 = pcStack_18;
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcStack_18,iVar25,acStack_38c,0x18,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcStack_28,iVar25,"L2 Cache",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar16 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)piStack_2c,iVar25,(char *)&uStack_ac,0x18,uVar16,1);
      uVar8 = uStack_14;
      iVar25 = uStack_14 + 0x5c;
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcVar19,iVar25,"Mounted",0xd,uVar16,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar15,iVar25,(char *)&uStack_12c,0x18,uVar16,1);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcStack_28,iVar25,"L3 Cache",0xd,uVar16,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar16 = CONCAT13((char)(uVar16 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)piStack_2c,iVar25,(char *)&uStack_94,0x18,uVar16,1);
      pcVar19 = (char *)(uVar8 + 0x6e);
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar16 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)local_1c,(int)pcVar19,"Storage",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = 0x1c1c1c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)pcVar15,(int)pcVar19,acStack_2fc,0x18,uVar8,1);
      if (((byte)pcStack_20 & uStack_260 != 0) != 1) {
        return;
      }
      (*(uint32_t *)&uStack_238c) = 0x5c5c5c;
      uVar8 = CONCAT13((char)(uVar8 >> 0x18),0x5c5c5c);
      recovered_1000ec70((int)pcStack_28,(int)pcVar19,"L4 Cache",0xd,uVar8,1);
      (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x1c1c1c);
      pcVar15 = (char *)&uStack_7c;
      uVar16 = CONCAT13((char)(uVar8 >> 0x18),0x1c1c1c);
      uVar8 = 0x18;
      piVar10 = piStack_2c;
      goto LAB_10014d1f;
    }
    pcStack_20 = *(char **)(local_1c + 0x58);
    uStack_14 = *(uint *)(local_1c + 0x5c);
    iVar12 = (int)pcStack_20 + 0x22;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= (int)pcStack_20 + 0x22) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar6 = uStack_14 + 0xa8;
    pcStack_18 = (char *)0x0;
    piStack_2c = (int *)0x0;
    if (-0x23 < (int)pcStack_20) {
      piStack_2c = (int *)iVar12;
    }
    iVar12 = iVar6;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar6) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    pcStack_28 = *(char **)(local_1c + 0x60);
    iVar21 = 0;
    if (-0xa9 < (int)uStack_14) {
      iVar21 = iVar12;
    }
    iVar12 = (int)pcStack_28 + -0x22 + (int)pcStack_20;
    iVar20 = iVar12;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar12) {
      iVar20 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar13 = 0;
    if (-1 < iVar12) {
      iVar13 = iVar20;
    }
    iVar12 = uStack_14 + 0xa9;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(uStack_14 + 0xa9)) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    if (-2 < iVar6) {
      pcStack_18 = (char *)iVar12;
    }
    iVar12 = (int)pcStack_28 + -0x44;
    if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar13 - (int)piStack_2c != 0 && (int)piStack_2c <= iVar13)) &&
       (iVar21 < (int)pcStack_18)) {
      puVar26 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + ((int)piStack_2c + iVar21 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
      do {
        puVar24 = puVar26;
        iVar12 = iVar13 - (int)piStack_2c;
        do {
          *puVar24 = 0xffd6d6d6;
          puVar24 = puVar24 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar21 = iVar21 + 1;
        puVar26 = puVar26 + iVar25;
      } while ((char *)iVar21 != pcStack_18);
      pcStack_20 = *(char **)(local_1c + 0x58);
      uStack_14 = *(uint *)(local_1c + 0x5c);
      pcStack_28 = *(char **)(local_1c + 0x60);
      iVar12 = (int)pcStack_28 + -0x44;
    }
    iVar6 = (int)pcStack_20 + 0x22;
    iVar25 = uStack_14 + 0xb4;
    (*(uint32_t *)&uStack_238c) = 0xfafafa;
    uVar33 = CONCAT22(CONCAT11(uVar36,0xfa),0xfafa);
    recovered_1000f370(iVar6,iVar25,iVar12,0x2e,(uint3)uVar33,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)))
    ;
    (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x949494);
    uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0x949494);
    recovered_1000efc0(iVar6,iVar25,iVar12,0x2e,uVar8);
    uVar36 = (undefined1)(uVar8 >> 0x18);
    (*(uint32_t *)&uStack_238c) = 0x49564544;
    iStack_2388 = 0x3a534543;
    uStack_2384 = CONCAT22(PF_PART2(uStack_2384, 2),0x20);
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x627cU)));
    uVar11 = strlen(&uStack_238c);
    if (uVar11 < 0xa0) {
      iVar25 = 0x9f;
      if (uVar11 != 0x9f) {
        iVar25 = uVar11 + 1;
        acStack_23ec[uVar11 + 0x60] = '/';
      }
      acStack_23ec[iVar25 + 0x60] = '\0';
    }
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6280U)));
    pcVar15 = pcStack_28;
    pcStack_20 = (char *)((int)pcStack_20 + 0x2a);
    piStack_2c = (int *)(uStack_14 + 0xbf);
    pcStack_18 = (char *)((int)pcStack_28 - 0x54);
    uVar16 = recovered_10015df0("W",0xffffffff);
    uVar8 = 1;
    if (0x54 < (int)pcVar15) {
      uVar29 = uVar16;
      if ((int)uVar16 < 2) {
        uVar29 = 1;
      }
      if ((int)uVar16 <= (int)pcStack_18) {
        uVar8 = (uint)pcStack_18 / uVar29;
      }
    }
    PF_PART3(uStack_24, 0) = 0x282828;
    uVar16 = CONCAT13(uVar36,0x282828);
    recovered_1000ec70((int)pcStack_20,(int)piStack_2c,&uStack_238c,uVar8,uVar16,1);
    uVar36 = (undefined1)(uVar16 >> 0x18);
    (*(uint32_t *)&uStack_238c) = 0x4954414e;
    iStack_2388 = 0x204556;
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6284U)));
    uVar11 = strlen(&uStack_238c);
    if (uVar11 < 0xa0) {
      uVar8 = 0x9f;
      if (uVar11 != 0x9f) {
        cVar4 = ' ';
        pcVar15 = "  EFI/PREP ";
        do {
          acStack_23ec[uVar11 + 0x60] = cVar4;
          uVar8 = uVar11 + 1;
          if (0x9d < uVar11) break;
          cVar4 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          uVar11 = uVar8;
        } while (cVar4 != '\0');
      }
      acStack_23ec[uVar8 + 0x60] = '\0';
    }
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6288U)));
    uVar11 = strlen(&uStack_238c);
    if (uVar11 < 0xa0) {
      uVar8 = 0x9f;
      if (uVar11 != 0x9f) {
        cVar4 = ' ';
        pcVar15 = "  FREEBSD ";
        do {
          acStack_23ec[uVar11 + 0x60] = cVar4;
          uVar8 = uVar11 + 1;
          if (0x9d < uVar11) break;
          cVar4 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          uVar11 = uVar8;
        } while (cVar4 != '\0');
      }
      acStack_23ec[uVar8 + 0x60] = '\0';
    }
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x628cU)));
    uVar11 = strlen(&uStack_238c);
    if (uVar11 < 0xa0) {
      uVar8 = 0x9f;
      if (uVar11 != 0x9f) {
        cVar4 = ' ';
        pcVar15 = "  NO DRIVER ";
        do {
          acStack_23ec[uVar11 + 0x60] = cVar4;
          uVar8 = uVar11 + 1;
          if (0x9d < uVar11) break;
          cVar4 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          uVar11 = uVar8;
        } while (cVar4 != '\0');
      }
      acStack_23ec[uVar8 + 0x60] = '\0';
    }
    recovered_10015400(&uStack_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6290U)));
    uVar16 = recovered_10015df0("W",0xffffffff);
    uVar8 = 1;
    if (0x54 < (int)pcStack_28) {
      uVar29 = uVar16;
      if ((int)uVar16 < 2) {
        uVar29 = 1;
      }
      if ((int)uVar16 <= (int)pcStack_18) {
        uVar8 = (uint)pcStack_18 / uVar29;
      }
    }
    uStack_24 = CONCAT13(PF_PART1(uStack_24, 3),0x282828);
    uVar16 = CONCAT13(uVar36,0x282828);
    recovered_1000ec70((int)pcStack_20,uStack_14 + 0xd1,&uStack_238c,uVar8,uVar16,1);
    pcStack_20 = *(char **)(local_1c + 0x5c);
    iVar12 = *(int *)(local_1c + 0x60);
    iVar25 = (int)pcStack_20 + -0x92 + *(int *)(local_1c + 100);
    if (iVar25 <= (int)pcStack_20 + 0x114) {
      iVar25 = (int)pcStack_20 + 0x114;
    }
    local_38 = *(char **)(local_1c + 0x58);
    pcStack_40 = (char *)(iVar12 + -0x46);
    uStack_4c = 1;
    if (0x18 < (int)pcStack_40) {
      uStack_4c = iVar12 - 0x5e;
    }
    uStack_5c = ((iVar25 - (int)pcStack_20) + -0x102) / 0x12;
    uStack_44 = (int)local_38 + 0x36;
    if (uStack_4c < 0x169) {
      uStack_30 = (uStack_4c & 0xffff) / 3;
      piStack_2c = (int *)(uStack_44 + uStack_30);
LAB_10013efc:
      pcStack_28 = (char *)((uStack_4c * 2 & 0xffff) * 0x5556 >> 0x10);
    }
    else {
      piStack_2c = (int *)((int)local_38 + 0xc4);
      pcStack_28 = (char *)0x1b4;
      uStack_30 = 0x8e;
      if (uStack_4c < 0x209) goto LAB_10013efc;
    }
    iStack_48 = (iVar25 - (int)pcStack_20) + -0xee;
    uVar8 = uStack_5c;
    if ((int)uStack_5c < 2) {
      uVar8 = 1;
    }
    uVar29 = 1;
    if (0x25 < iStack_48) {
      uVar29 = uVar8;
    }
    uVar8 = 0;
    if (uVar29 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
      uVar8 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar29;
    }
    iVar6 = (int)pcStack_20 + 0xee;
    if ((int)uVar8 < 1) {
      uVar8 = 0;
    }
    iVar21 = (int)local_38 + 0x22;
    uStack_14 = iVar12 + -0x44;
    iVar25 = iVar25 - iVar6;
    if ((*(uint32_t *)(pf_module_state+0x627cU)) == 0) {
      local_1c[0xaf4] = '\0';
      local_1c[0xaf5] = '\0';
      local_1c[0xaf6] = '\0';
      local_1c[0xaf7] = '\0';
      local_1c[0xaf8] = '\0';
      local_1c[0xaf9] = '\0';
      local_1c[0xafa] = '\0';
      local_1c[0xafb] = '\0';
      local_1c[0xafc] = '\0';
    }
    else {
      if ((local_1c[0xafc] != '\x01') || ((*(uint32_t *)(pf_module_state+0x627cU)) <= *(uint *)(local_1c + 0xaf4))) {
        local_1c[0xaf4] = '\0';
        local_1c[0xaf5] = '\0';
        local_1c[0xaf6] = '\0';
        local_1c[0xaf7] = '\0';
        local_1c[0xafc] = '\x01';
      }
      if ((int)*(uint *)(local_1c + 0xaf8) < 0) {
        local_1c[0xaf8] = '\0';
        local_1c[0xaf9] = '\0';
        local_1c[0xafa] = '\0';
        local_1c[0xafb] = '\0';
      }
      else if (uVar8 < *(uint *)(local_1c + 0xaf8)) {
        *(uint *)(local_1c + 0xaf8) = uVar8;
      }
    }
    pcStack_18 = (char *)((int)pcStack_20 + 0xf4);
    (*(uint32_t *)&uStack_238c) = 0xffffff;
    uVar33 = CONCAT22(CONCAT11((char)(uVar16 >> 0x18),0xff),0xffff);
    uStack_3c = iVar25;
    uStack_34 = iVar21;
    recovered_1000f370(iVar21,iVar6,uStack_14,iVar25,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    (*(uint32_t *)&uStack_238c) = 0xaeaeae;
    uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0xaeaeae);
    recovered_1000efc0(iVar21,iVar6,uStack_14,iVar25,uVar8);
    pcVar15 = local_38;
    uStack_50 = (int)pcStack_20 + 0xef;
    (*(uint32_t *)&uStack_238c) = 0xeeeeee;
    uVar33 = CONCAT22(CONCAT11((char)(uVar8 >> 0x18),0xee),0xeeee);
    recovered_1000f370((int)local_38 + 0x23,uStack_50,(int)pcStack_40,0x12,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    uVar36 = (undefined1)((uint)uVar33 >> 0x18);
    uStack_3c = (int)pcVar15 + 0x39;
    uVar29 = recovered_10015df0("W",0xffffffff);
    pcVar15 = pcStack_28;
    uVar8 = uStack_30;
    uStack_34 = 1;
    uVar16 = 1;
    if (10 < uStack_30) {
      uVar30 = uVar29;
      if ((int)uVar29 < 2) {
        uVar30 = 1;
      }
      if ((int)uVar29 <= (int)(uStack_30 - 10)) {
        uVar16 = (uStack_30 - 10) / uVar30;
      }
    }
    uStack_14 = uStack_44 + (int)pcStack_28;
    (*(uint32_t *)&uStack_238c) = 0x262626;
    uVar29 = CONCAT13(uVar36,0x262626);
    recovered_1000ec70(uStack_3c,(int)pcStack_18,"STATUS",uVar16,uVar29,1);
    uVar36 = (undefined1)(uVar29 >> 0x18);
    pcStack_40 = (char *)((int)piStack_2c + 3);
    iVar25 = (int)pcVar15 - uVar8;
    uStack_58 = iVar25 - 10;
    uVar8 = recovered_10015df0("W",0xffffffff);
    pcVar15 = local_1c;
    if (10 < iVar25) {
      uStack_34 = 1;
      uVar16 = uVar8;
      if ((int)uVar8 < 2) {
        uVar16 = 1;
      }
      if ((int)uVar8 <= (int)uStack_58) {
        uStack_34 = uStack_58 / uVar16;
      }
    }
    (*(uint32_t *)&uStack_238c) = 0x262626;
    uVar8 = CONCAT13(uVar36,0x262626);
    iStack_64 = iVar25;
    recovered_1000ec70((int)pcStack_40,(int)pcStack_18,"DEVICE PATH",uStack_34,uVar8,1);
    uVar36 = (undefined1)(uVar8 >> 0x18);
    uStack_34 = uStack_14 + 3;
    iVar25 = uStack_4c - (int)pcStack_28;
    local_54 = iVar25 - 8;
    uVar16 = recovered_10015df0("W",0xffffffff);
    uVar8 = 1;
    if (8 < iVar25) {
      uVar29 = uVar16;
      if ((int)uVar16 < 2) {
        uVar29 = 1;
      }
      if ((int)uVar16 <= (int)local_54) {
        uVar8 = local_54 / uVar29;
      }
      pcVar15 = local_1c;
    }
    (*(uint32_t *)&uStack_238c) = 0x262626;
    uVar29 = CONCAT13(uVar36,0x262626);
    iStack_60 = iVar25;
    recovered_1000ec70(uStack_34,(int)pcStack_18,"SUMMARY",uVar8,uVar29,1);
    uVar8 = uStack_50;
    (*(uint32_t *)&uStack_238c) = 0xbcbcbc;
    uVar16 = 0;
    uVar33 = CONCAT22(CONCAT11((char)(uVar29 >> 0x18),0xbc),0xbcbc);
    recovered_1000f370((int)((int)piStack_2c + -2),uStack_50,1,0x12,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0xbcbcbc);
    uVar29 = CONCAT22(CONCAT11((char)((uint)uVar33 >> 0x18),0xbc),0xbcbc);
    recovered_1000f370(uStack_14 - 2,uVar8,1,0x12,(uint3)uVar29,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    local_38 = (char *)((int)local_38 + 0x47);
    uStack_50 = uStack_30 - 0x16;
    pcVar19 = (char *)((int)pcStack_20 + 0x106);
    do {
      iVar25 = (*(uint32_t *)&uStack_238c);
      uVar36 = (undefined1)(uVar29 >> 0x18);
      iVar12 = *(int *)(pcVar15 + 0xaf8) + uVar16;
      if ((iVar12 < 0) || ((int)(*(uint32_t *)(pf_module_state+0x627cU)) <= iVar12)) break;
      if ((pcVar15[0xafc] == '\x01') && (iVar12 == *(int *)(pcVar15 + 0xaf4))) {
        uStack_24 = CONCAT13(PF_PART1(uStack_24, 3),0xffffff);
        bVar5 = 0x65;
        uVar18 = 0xabee;
      }
      else {
        uStack_24 = CONCAT13(PF_PART1(uStack_24, 3),0x1e1e1e);
        bVar5 = -((uVar16 & 1) == 0);
        uVar18 = CONCAT11(bVar5,bVar5) | 0xf2fd;
        bVar5 = bVar5 | 0xeb;
      }
      (*(uint32_t *)&uStack_238c) = CONCAT11((char)(uVar18 >> 8),bVar5);
      acStack_238b[2] = SUB41(iVar25,3);
      (*(uint32_t *)&uStack_238c) = CONCAT12((char)uVar18,(*(uint32_t *)&uStack_238c));
      uVar33 = CONCAT22(CONCAT11(uVar36,(char)uVar18),(*(uint32_t *)&uStack_238c));
      pcStack_28 = (char *)uVar16;
      recovered_1000f370(uStack_44,(int)pcVar19 + -5,uStack_4c,0x12,(uint3)uVar33,
                         -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
      uVar36 = (undefined1)((uint)uVar33 >> 0x18);
      piStack_2c = (int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar12 * 0x571);
      pcStack_18 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar12 * 0x571;
      recovered_100162d0(&uStack_238c,(int)piStack_2c);
      uVar33 = CONCAT22(CONCAT11(uVar36,acStack_238b[1]),(*(uint32_t *)&uStack_238c));
      recovered_1000f370(uStack_3c,(int)pcVar19 + -1,8,8,(uint3)uVar33,
                         -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
      uVar36 = (undefined1)((uint)uVar33 >> 0x18);
      uVar16 = recovered_10015df0("W",0xffffffff);
      uStack_14 = 1;
      uVar8 = 1;
      if (0x16 < uStack_30) {
        uVar29 = uVar16;
        if ((int)uVar16 < 2) {
          uVar29 = 1;
        }
        if ((int)uVar16 <= (int)uStack_50) {
          uVar8 = uStack_50 / uVar29;
        }
      }
      uVar16 = CONCAT22(CONCAT11(uVar36,PF_PART1(uStack_24, 2)),(undefined2)uStack_24);
      pcStack_20 = pcVar19;
      recovered_1000ec70((int)local_38,(int)pcVar19,(char *)piStack_2c,uVar8,uVar16,1);
      uVar36 = (undefined1)(uVar16 >> 0x18);
      uVar8 = recovered_10015df0("W",0xffffffff);
      pcVar15 = local_1c;
      if (10 < iStack_64) {
        uStack_14 = 1;
        uVar16 = uVar8;
        if ((int)uVar8 < 2) {
          uVar16 = 1;
        }
        if ((int)uVar8 <= (int)uStack_58) {
          uStack_14 = uStack_58 / uVar16;
        }
      }
      uVar8 = CONCAT22(CONCAT11(uVar36,PF_PART1(uStack_24, 2)),(undefined2)uStack_24);
      recovered_1000ec70((int)pcStack_40,(int)pcVar19,pcStack_18,uStack_14,uVar8,1);
      uVar36 = (undefined1)(uVar8 >> 0x18);
      uVar16 = recovered_10015df0("W",0xffffffff);
      uVar8 = 1;
      if (8 < iStack_60) {
        uVar29 = uVar16;
        if ((int)uVar16 < 2) {
          uVar29 = 1;
        }
        if ((int)uVar16 <= (int)local_54) {
          uVar8 = local_54 / uVar29;
        }
        pcVar15 = local_1c;
        pcVar19 = pcStack_20;
      }
      uVar29 = CONCAT22(CONCAT11(uVar36,PF_PART1(uStack_24, 2)),(undefined2)uStack_24);
      recovered_1000ec70(uStack_34,(int)pcVar19,pcStack_18 + 0x111,uVar8,uVar29,1);
      uVar36 = (undefined1)(uVar29 >> 0x18);
      if (iStack_48 < 0x26) break;
      uVar16 = (int)pcStack_28 + 1;
      pcVar19 = (char *)((int)pcVar19 + 0x12);
    } while ((int)uVar16 < (int)uStack_5c);
    iVar12 = *(int *)(pcVar15 + 0x5c);
    iVar25 = iVar12 + -0x92 + *(int *)(pcVar15 + 100);
    if (iVar25 <= iVar12 + 0x114) {
      iVar25 = iVar12 + 0x114;
    }
    iVar6 = *(int *)(pcVar15 + 0x58);
    iVar21 = -0x19;
    if (0x25 < (iVar25 - iVar12) + -0xee) {
      iVar21 = (iVar25 - iVar12) + -0x12d;
    }
    iVar25 = 0x12;
    if (0x13 < iVar21) {
      iVar25 = iVar21 + -2;
    }
    recovered_100163f0((int *)&uStack_238c,(int)local_1c);
    PF_PART3(uStack_24, 0) = 0xe4e4e4;
    uVar33 = CONCAT22(CONCAT11(uVar36,0xe4),0xe4e4);
    recovered_1000f370(iVar6 + 0x28,iVar12 + 0x106,0xc,iVar25,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    PF_PART3(uStack_24, 0) = 0xacacac;
    uVar16 = CONCAT13((char)((uint)uVar33 >> 0x18),0xacacac);
    recovered_1000efc0(iVar6 + 0x28,iVar12 + 0x106,0xc,iVar25,uVar16);
    uVar8 = uStack_2384;
    pcStack_18 = (char *)(*(uint32_t *)&uStack_238c);
    pcStack_20 = (char *)iStack_2388;
    uStack_14 = (*(uint32_t *)&uStack_238c) + 1;
    pcStack_28 = (char *)(iStack_2388 + 1);
    PF_PART3(uStack_24, 0) = 0xbebebe;
    uVar33 = CONCAT22(CONCAT11((char)(uVar16 >> 0x18),0xbe),0xbebe);
    recovered_1000f370(uStack_14,(int)pcStack_28,uStack_2384 - 2,iStack_2380 + -2,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    pcVar15 = local_1c;
    uStack_24 = CONCAT13(PF_PART1(uStack_24, 3),0x747474);
    recovered_1000efc0((int)pcStack_18,(int)pcStack_20,uVar8,iStack_2380,
                       CONCAT13((char)((uint)uVar33 >> 0x18),0x747474));
    iVar12 = *(int *)(pcVar15 + 0x5c);
    iVar25 = iVar12 + -0x92 + *(int *)(pcVar15 + 100);
    if (iVar25 <= iVar12 + 0x114) {
      iVar25 = iVar12 + 0x114;
    }
    iVar6 = 0x12;
    if (0x25 < (iVar25 - iVar12) + -0xee) {
      iVar6 = (iVar25 - iVar12) + -0x102;
    }
    recovered_100154f0(*(int *)(pcVar15 + 0x58) + 0x28,iVar12 + 0xdb + iVar6,0xc,0xe,1);
    iVar12 = *(int *)(pcVar15 + 0x5c);
    iVar25 = iVar12 + -0x92 + *(int *)(pcVar15 + 100);
    if (iVar25 <= iVar12 + 0x114) {
      iVar25 = iVar12 + 0x114;
    }
    iVar6 = 0x12;
    if (0x25 < (iVar25 - iVar12) + -0xee) {
      iVar6 = (iVar25 - iVar12) + -0x102;
    }
    uVar36 = 0;
    recovered_100154f0(*(int *)(pcVar15 + 0x58) + 0x28,iVar12 + 0xeb + iVar6,0xc,0xe,0);
    pcStack_18 = *(char **)(pcVar15 + 0x58);
    uStack_14 = *(uint *)(pcVar15 + 0x60);
    iVar12 = *(int *)(pcVar15 + 0x5c) + -0x86 + *(int *)(pcVar15 + 100);
    pcVar15 = pcStack_18 + 0x22;
    iVar25 = uStack_14 - 0x44;
    (*(uint32_t *)&uStack_238c) = 0xe7e7e7;
    uVar33 = CONCAT22(CONCAT11(uVar36,0xe7),0xe7e7);
    recovered_1000f370((int)pcVar15,iVar12,iVar25,0x68,(uint3)uVar33,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    pcVar19 = local_1c;
    (*(uint32_t *)&uStack_238c) = 0xc3c3c3;
    uVar8 = CONCAT13((char)((uint)uVar33 >> 0x18),0xc3c3c3);
    recovered_1000efc0((int)pcVar15,iVar12,iVar25,0x68,uVar8);
    pcVar15 = pcStack_18;
    uVar36 = (undefined1)(uVar8 >> 0x18);
    if ((pcVar19[0xafc] == '\x01') && (uVar8 = *(uint *)(pcVar19 + 0xaf4), uVar8 < (*(uint32_t *)(pf_module_state+0x627cU)))) {
      iVar25 = uVar8 * 0x571;
      pcStack_28 = pcStack_18 + 0x34;
      uStack_30 = iVar12 + 0x10;
      (*(uint32_t *)&uStack_238c) = 0x282828;
      uVar8 = CONCAT13(uVar36,0x282828);
      recovered_1000ec70((int)pcStack_28,uStack_30,"DEVICE:",0xffffffff,uVar8,1);
      uVar36 = (undefined1)(uVar8 >> 0x18);
      piStack_2c = (int *)(pcVar15 + 0x80);
      uVar16 = recovered_10015df0("W",0xffffffff);
      piVar10 = piStack_2c;
      uVar8 = 1;
      if (0xb4 < (int)uStack_14) {
        uVar29 = uVar16;
        if ((int)uVar16 < 2) {
          uVar29 = 1;
        }
        if ((int)uVar16 <= (int)(uStack_14 - 0xb4)) {
          uVar8 = (uStack_14 - 0xb4) / uVar29;
        }
      }
      (*(uint32_t *)&uStack_238c) = 0x282828;
      uVar16 = CONCAT13(uVar36,0x282828);
      pcStack_20 = (char *)iVar12;
      local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar25;
      recovered_1000ec70((int)piStack_2c,uStack_30,&(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar25,uVar8,uVar16,1);
      uStack_30 = iVar12 + 0x26;
      (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x282828);
      uVar8 = CONCAT13((char)(uVar16 >> 0x18),0x282828);
      recovered_1000ec70((int)pcStack_28,uStack_30,"STATUS:",0xffffffff,uVar8,1);
      uVar36 = (undefined1)(uVar8 >> 0x18);
      recovered_100162d0(&uStack_238c,(int)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar25));
      uVar33 = CONCAT22(CONCAT11(uVar36,acStack_238b[1]),(*(uint32_t *)&uStack_238c));
      recovered_1000f370((int)piVar10,iVar12 + 0x29,8,8,(uint3)uVar33,
                         -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
      pcVar14 = pcStack_18;
      uVar8 = uStack_30;
      piStack_2c = (int *)(pcStack_18 + 0x90);
      (*(uint32_t *)&uStack_238c) = 0x282828;
      uVar29 = CONCAT13((char)((uint)uVar33 >> 0x18),0x282828);
      recovered_1000ec70((int)piStack_2c,uStack_30,&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar25,0x18,uVar29,1);
      uVar16 = uStack_14;
      pcVar19 = pcStack_20;
      pcVar15 = pcStack_28;
      uVar36 = (undefined1)(uVar29 >> 0x18);
      if ((int)uStack_14 < 0x254) {
        uStack_30 = (int)pcStack_20 + 0x3c;
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar8 = CONCAT13(uVar36,0x282828);
        recovered_1000ec70((int)pcStack_28,uStack_30,"SUMMARY:",0xffffffff,uVar8,1);
        uVar36 = (undefined1)(uVar8 >> 0x18);
        local_38 = local_1c + 0x111;
        pcStack_18 = (char *)(uVar16 - 0xc4);
        uVar29 = recovered_10015df0("W",0xffffffff);
        piVar10 = piStack_2c;
        uVar8 = 1;
        if (0xc4 < (int)uVar16) {
          uVar16 = uVar29;
          if ((int)uVar29 < 2) {
            uVar16 = 1;
          }
          uVar8 = 1;
          if ((int)uVar29 <= (int)pcStack_18) {
            uVar8 = (uint)pcStack_18 / uVar16;
          }
          pcVar15 = pcStack_28;
          pcVar19 = pcStack_20;
        }
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar16 = CONCAT13(uVar36,0x282828);
        recovered_1000ec70((int)piStack_2c,uStack_30,local_38,uVar8,uVar16,1);
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar8 = CONCAT13((char)(uVar16 >> 0x18),0x282828);
        recovered_1000ec70((int)pcVar15,(int)pcVar19 + 0x52,"DETAILS:",0xffffffff,uVar8,1);
        uVar36 = (undefined1)(uVar8 >> 0x18);
        local_1c = local_1c + 0x171;
        uVar16 = recovered_10015df0("W",0xffffffff);
        uVar8 = 1;
        if (0xc4 < (int)uStack_14) {
          uStack_14 = uVar16;
          if ((int)uVar16 < 2) {
            uStack_14 = 1;
          }
          if ((int)uVar16 <= (int)pcStack_18) {
            uVar8 = (uint)pcStack_18 / uStack_14;
          }
          piVar10 = piStack_2c;
        }
        (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x282828);
        uVar16 = CONCAT13(uVar36,0x282828);
        pcVar19 = (char *)((int)pcVar19 + 0x52);
        pcVar15 = local_1c;
      }
      else {
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar29 = CONCAT13(uVar36,0x282828);
        recovered_1000ec70((int)(pcVar14 + 0x150),uVar8,"SUMMARY:",0xffffffff,uVar29,1);
        uVar36 = (undefined1)(uVar29 >> 0x18);
        uVar30 = recovered_10015df0("W",0xffffffff);
        uVar29 = uVar30;
        if ((int)uVar30 < 2) {
          uVar29 = 1;
        }
        pcStack_18 = pcStack_18 + 0x1b0;
        uVar17 = 1;
        if ((int)uVar30 <= (int)(uVar16 - 0x1e4)) {
          uVar17 = (uVar16 - 0x1e4) / uVar29;
        }
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar16 = CONCAT13(uVar36,0x282828);
        recovered_1000ec70((int)pcStack_18,uVar8,local_1c + 0x111,uVar17,uVar16,1);
        pcVar19 = (char *)((int)pcStack_20 + 0x40);
        (*(uint32_t *)&uStack_238c) = 0x282828;
        uVar8 = CONCAT13((char)(uVar16 >> 0x18),0x282828);
        recovered_1000ec70((int)pcStack_28,(int)pcVar19,"DETAILS:",0xffffffff,uVar8,1);
        uVar36 = (undefined1)(uVar8 >> 0x18);
        uVar30 = uStack_14 - 0xc4;
        uVar29 = recovered_10015df0("W",0xffffffff);
        uVar16 = uVar29;
        if ((int)uVar29 < 2) {
          uVar16 = 1;
        }
        local_1c = local_1c + 0x171;
        uVar8 = 1;
        if ((int)uVar29 <= (int)uVar30) {
          uVar8 = uVar30 / uVar16;
        }
        (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x282828);
        uVar16 = CONCAT13(uVar36,0x282828);
        piVar10 = piStack_2c;
        pcVar15 = local_1c;
      }
    }
    else {
      piVar10 = (int *)(pcStack_18 + 0x34);
      pcStack_20 = (char *)(iVar12 + 0x10);
      uVar16 = recovered_10015df0("W",0xffffffff);
      uVar8 = 1;
      if (0x68 < (int)uStack_14) {
        uVar29 = uVar16;
        if ((int)uVar16 < 2) {
          uVar29 = 1;
        }
        pcStack_18 = (char *)piVar10;
        if ((int)uVar16 <= (int)(uStack_14 - 0x68)) {
          uVar8 = (uStack_14 - 0x68) / uVar29;
        }
      }
      (*(uint32_t *)&uStack_238c) = CONCAT13(acStack_238b[2],0x282828);
      uVar16 = CONCAT13(uVar36,0x282828);
      pcVar15 = "NO DEVICES";
      pcVar19 = pcStack_20;
    }
LAB_10014d1f:
    recovered_1000ec70((int)piVar10,(int)pcVar19,pcVar15,uVar8,uVar16,1);
    return;
  case 4:
    local_d4 = 0x2d2d;
    uStack_d2 = 0x2d;
    uStack_f0 = 0x100106aa;
    uStack_34 = uVar8;
    uStack_24 = iVar12;
    recovered_1000ec70((int)local_1c,iVar25,in_ECX + 0x261,0xffffffff,
                       CONCAT13(in_stack_ffffff1f,0x2d2d2d),1);
    pcVar15 = local_1c;
    iVar25 = uStack_24 + 0x48;
    local_d4 = 0xffff;
    uStack_d2 = 0xff;
    uStack_f0 = 0x10010717;
    recovered_1000f370((int)local_1c,iVar25,*(int *)(in_ECX + 0x60) + -0x1c,0x1a,0xffffff,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    local_d4 = 0x9191;
    uStack_d2 = 0x91;
    uStack_f0 = 0x10010758;
    recovered_1000efc0((int)pcVar15,iVar25,*(int *)(in_ECX + 0x60) + -0x1c,0x1a,
                       CONCAT13(in_stack_ffffff1f,0x919191));
    iVar25 = uStack_24;
    local_d4 = 0x1414;
    uStack_d2 = 0x14;
    uStack_f0 = 0x100107a9;
    recovered_1000ec70(uStack_34 + 0x16,uStack_24 + 0x51,in_ECX + 0xa61,0xffffffff,
                       CONCAT13(in_stack_ffffff1f,0x141414),1);
    iVar25 = iVar25 + 0x78;
    local_d4 = 0x5c5c;
    uStack_d2 = 0x5c;
    uVar35 = 0x5c5c;
    uVar36 = 0x5c;
    pcVar15 = "Press Return to apply";
    break;
  case 6:
    pcStack_20 = *(char **)(in_ECX + 0x60);
    uStack_50 = *(uint *)(in_ECX + 100);
    uVar16 = (int)pcStack_20 - 0x1c;
    uStack_14 = uStack_50 - 0x34;
    uStack_34 = uVar8;
    uStack_24 = iVar12;
    if (*(int *)(in_ECX + 0xb30) == 0) {
      if (*(int *)(in_ECX + 0xb2c) != 0) {
        uVar29 = *(uint *)(in_ECX + 0xb3c);
        if (uVar29 != 0) {
          uVar30 = *(uint *)(in_ECX + 0xb40);
          if (uVar30 != 0) {
            if (uVar29 * 4 <= *(uint *)(in_ECX + 0xb44)) {
              pcStack_18 = (char *)((ulonglong)uVar30 * (ulonglong)uVar16);
              in_stack_ffffff1f = (undefined1)(uVar29 >> 0x18);
              uStack_f0 = 0x10010d02;
              uStack_30 = uVar30;
              pcStack_28 = (char *)uVar16;
              uVar32 = pf_app_udiv_full(CONCAT44(((int)uVar16 >> 0x1f) * uVar30 +
                                                   (int)((ulonglong)uVar30 * (ulonglong)uVar16 >>
                                                        0x20),pcStack_18),(ulonglong)uVar29);
              uVar8 = (uint)uVar32;
              pcVar15 = pcStack_28;
              if ((int)uStack_14 < (int)(uint)uVar32) {
                in_stack_ffffff1f = (undefined1)(uStack_30 >> 0x18);
                uStack_f0 = 0x10010d29;
                uVar32 = pf_app_udiv_full(CONCAT44(((int)uStack_14 >> 0x1f) * uVar29 +
                                                     (int)((ulonglong)uVar29 * (ulonglong)uStack_14
                                                          >> 0x20),
                                                     (int)((ulonglong)uVar29 * (ulonglong)uStack_14)
                                                    ),(ulonglong)uStack_30);
                pcVar15 = (char *)uVar32;
                uVar8 = uStack_14;
              }
              if (((int)uVar16 <= (int)pcVar15) && ((int)uStack_14 <= (int)uVar8))
              goto code_r0x10010ab0;
            }
          }
        }
      }
    }
    uVar33 = *(undefined4 *)(local_38 + 0xb48);
    local_d4 = CONCAT11((char)((uint)uVar33 >> 8),(char)((uint)uVar33 >> 0x10));
    uStack_d2 = (undefined1)uVar33;
    uVar8 = *(uint *)(local_38 + 8);
    if (uVar8 == 0xffffffff) {
      uVar8 = (*(uint32_t *)(pf_module_state+0x12ecU));
      if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) goto code_r0x10010a6a;
code_r0x10010a72:
      bVar5 = ~local_38[5];
    }
    else {
      if (3 < uVar8) goto code_r0x10010a72;
code_r0x10010a6a:
      if (uVar8 != 0) goto code_r0x10010a72;
      bVar5 = 0xff;
    }
    uStack_f0 = 0x10010aad;
    recovered_1000f370((int)local_1c,iVar25,uVar16,uStack_14,CONCAT12(uStack_d2,local_d4),bVar5);
code_r0x10010ab0:
    local_d4 = 0x8484;
    uStack_d2 = 0x84;
    uStack_f0 = 0x10010ae8;
    recovered_1000efc0((int)local_1c,iVar25,uVar16,uStack_14,CONCAT13(in_stack_ffffff1f,0x848484));
    uStack_30 = *(uint *)(local_38 + 0xb2c);
    if (uStack_30 == 0 || *(int *)(local_38 + 0xb30) != 0) {
      return;
    }
    uVar8 = *(uint *)(local_38 + 0xb3c);
    if (uVar8 == 0) {
      return;
    }
    pcStack_18 = *(char **)(local_38 + 0xb40);
    if (pcStack_18 == (char *)0x0) {
      return;
    }
    if (*(uint *)(local_38 + 0xb44) < uVar8 * 4) {
      return;
    }
    if ((int)uStack_50 < 0x35) {
      return;
    }
    if ((int)pcStack_20 < 0x1d) {
      return;
    }
    if (*(int *)(local_38 + 0xb34) == 0) {
      return;
    }
    if ((*(uint32_t *)(pf_module_state+0x1490U)) == 0) {
      return;
    }
    uStack_f0 = 0x10010b72;
    pcStack_20 = (char *)uVar8;
    uVar32 = pf_app_udiv_full(ZEXT48(pcStack_18) * (ulonglong)uVar16,(ulonglong)uVar8);
    uVar8 = uStack_14;
    uStack_58 = (uint)uVar32;
    piStack_2c = (int *)uVar16;
    if ((int)uStack_14 < (int)(uint)uVar32) {
      uStack_f0 = 0x10010b91;
      uVar32 = pf_app_udiv_full(ZEXT48(pcStack_20) * (ulonglong)uStack_14,ZEXT48(pcStack_18));
      piStack_2c = (int *)uVar32;
      uStack_58 = uVar8;
    }
    if ((int)uStack_58 < 1) {
      return;
    }
    if ((int)piStack_2c < 1) {
      return;
    }
    pcStack_28 = (char *)((int)(uVar16 - (int)piStack_2c) / 2);
    local_1c = (char *)((int)local_1c + (int)pcStack_28);
    iVar6 = (int)(uStack_14 - uStack_58) / 2;
    uStack_3c = (*(uint32_t *)(pf_module_state+0x12d4U));
    iVar12 = (int)local_1c;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= (int)local_1c) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar25 = iVar25 + iVar6;
    uStack_5c = 0;
    uStack_44 = 0;
    if (-1 < (int)local_1c) {
      uStack_44 = iVar12;
    }
    iVar12 = iVar25;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar25) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    iVar21 = 0;
    if (-1 < iVar25) {
      iVar21 = iVar12;
    }
    iVar20 = (int)piStack_2c + (int)local_1c;
    iVar12 = iVar20;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar20) {
      iVar12 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    uStack_14 = 0;
    if (-1 < iVar20) {
      uStack_14 = iVar12;
    }
    iVar12 = iVar25 + uStack_58;
    iVar20 = iVar12;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar12) {
      iVar20 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    if (-1 < iVar12) {
      uStack_5c = iVar20;
    }
    iStack_48 = uStack_14 - uStack_44;
    if (iStack_48 == 0 || (int)uStack_14 < (int)uStack_44) {
      return;
    }
    if ((int)uStack_5c <= iVar21) {
      return;
    }
    if (((char *)uStack_58 != pcStack_18) || (piStack_2c != (int *)pcStack_20)) {
      uStack_f0 = 0x10010ea1;
      uStack_4c = iVar21;
      recovered_10015750((uint)pcStack_20,(uint)pcStack_18,(uint)piStack_2c,uStack_58);
      uStack_70 = (*(uint32_t *)(pf_module_state+0x6164U));
      uStack_3c = (*(uint32_t *)(pf_module_state+0x6158U)) + (uStack_34 + (int)pcStack_28) * -4 + -0x38;
      local_1c = (char *)(-0xe - (uStack_34 + (int)pcStack_28));
      iVar12 = iVar21 * (*(uint32_t *)(pf_module_state+0x12d4U)) * 4;
      iStack_60 = (*(uint32_t *)(pf_module_state+0x12d4U)) << 2;
      iStack_6c = (*(uint32_t *)(pf_module_state+0x615cU));
      uStack_34 = (*(uint32_t *)(pf_module_state+0x6160U));
      iStack_68 = uStack_44 * 4;
      uStack_50 = iVar25;
      do {
        uVar8 = iVar21 - uStack_50;
        iStack_64 = iVar12;
        uStack_4c = iVar21;
        if (uVar8 < uStack_70) {
          uStack_24 = *(int *)(iStack_6c + uVar8 * 4);
        }
        else {
          uStack_f0 = 0x10010f4e;
          uVar32 = pf_app_udiv_full((ulonglong)uVar8 * (ulonglong)*(uint *)(local_38 + 0xb40),
                                      (ulonglong)uStack_58);
          uStack_24 = (uint)uVar32;
        }
        pcStack_20 = (char *)((*(uint32_t *)(pf_module_state+0x1490U)) + iVar12);
        iVar25 = iStack_68;
        uVar8 = uStack_44;
        do {
          pcVar15 = local_38;
          if ((int)local_1c + uVar8 < uStack_34) {
            iVar12 = *(int *)(uStack_3c + uVar8 * 4);
          }
          else {
            uStack_f0 = 0x10010fc5;
            uVar32 = pf_app_udiv_full((ulonglong)((int)local_1c + uVar8) *
                                        (ulonglong)*(uint *)(local_38 + 0xb3c),ZEXT48(piStack_2c));
            iVar12 = (int)uVar32;
          }
          iVar6 = *(int *)(pcVar15 + 0xb44) * uStack_24;
          if (((uint)(iVar6 + 3 + iVar12 * 4) < *(uint *)(pcVar15 + 0xb34)) &&
             ((int)pcStack_20 + iVar25 != 0)) {
            iVar6 = iVar6 + iVar12 * 4;
            bVar5 = *(byte *)(uStack_30 + 3 + iVar6);
            uVar16 = (uint)bVar5;
            if (bVar5 != 0) {
              bVar5 = *(byte *)(uStack_30 + iVar6);
              pcStack_18 = (char *)CONCAT31(PF_PART3(pcStack_18, 1),bVar5);
              bVar1 = *(byte *)(uStack_30 + 1 + iVar6);
              pcStack_40 = (char *)CONCAT31(PF_PART3(pcStack_40, 1),bVar1);
              bVar2 = *(byte *)(uStack_30 + 2 + iVar6);
              iStack_48 = CONCAT31(PF_PART3(iStack_48, 1),bVar2);
              if (uVar16 == 0xff) {
                *(byte *)((int)pcStack_20 + uVar8 * 4) = bVar5;
                *(byte *)((int)pcStack_20 + 1U + uVar8 * 4) = bVar1;
                *(byte *)((int)pcStack_20 + 2U + uVar8 * 4) = bVar2;
              }
              else {
                pcStack_28 = (char *)(uVar16 ^ 0xff);
                pcStack_40 = (char *)(uint)bVar1;
                *(char *)((int)pcStack_20 + uVar8 * 4) =
                     (char)((ulonglong)
                            (bVar5 * uVar16 + 0x7f +
                            (uint)*(byte *)((int)pcStack_20 + uVar8 * 4) * (int)pcStack_28) *
                            0x1010102 >> 0x20);
                *(char *)((int)pcStack_20 + 1U + uVar8 * 4) =
                     (char)((ulonglong)
                            ((int)pcStack_40 * uVar16 + 0x7f +
                            (uint)*(byte *)((int)pcStack_20 + 1U + uVar8 * 4) * (int)pcStack_28) *
                            0x1010102 >> 0x20);
                *(char *)((int)pcStack_20 + 2U + uVar8 * 4) =
                     (char)((ulonglong)
                            (bVar2 * uVar16 + 0x7f +
                            (uint)*(byte *)((int)pcStack_20 + 2U + uVar8 * 4) * (int)pcStack_28) *
                            0x1010102 >> 0x20);
                pcStack_18 = (char *)uVar16;
              }
              *(undefined1 *)((int)pcStack_20 + 3U + uVar8 * 4) = 0xff;
            }
          }
          uVar8 = uVar8 + 1;
          iVar25 = iVar25 + 4;
        } while (uStack_14 != uVar8);
        iVar21 = uStack_4c + 1;
        iVar12 = iStack_64 + iStack_60;
      } while (iVar21 != uStack_5c);
      return;
    }
    iVar12 = uStack_44 * 4 + (uStack_34 + (int)pcStack_28) * -4;
    iVar20 = ((iVar21 - uStack_24) - iVar6) + -0x26;
    pcStack_18 = (char *)((iVar21 * (*(uint32_t *)(pf_module_state+0x12d4U)) + uStack_44) * 4);
    iVar6 = (*(uint32_t *)(pf_module_state+0x12d4U)) * 4;
    do {
      if (*(uint *)(local_38 + 0xb34) <=
          (iVar21 - iVar25) * *(int *)(local_38 + 0xb44) + (uStack_44 - (int)local_1c) * 4) {
        return;
      }
      iVar27 = *(int *)(local_38 + 0xb44) * iVar20;
      iVar7 = uStack_30 + -0x35 + iVar12 + iVar27;
      iVar28 = (*(uint32_t *)(pf_module_state+0x1490U)) + (int)pcStack_18;
      iVar22 = 0;
      iVar13 = iStack_48;
      do {
        if (*(uint *)(local_38 + 0xb34) <= (uint)(iVar27 + iVar12 + -0x35 + iVar22)) break;
        if ((iVar28 + iVar22 != 0) &&
           (uVar8 = (uint)*(byte *)(iVar7 + iVar22), *(byte *)(iVar7 + iVar22) != 0)) {
          bVar5 = *(byte *)(iVar7 + -3 + iVar22);
          bVar1 = *(byte *)(iVar7 + -2 + iVar22);
          bVar2 = *(byte *)(iVar7 + -1 + iVar22);
          if (uVar8 == 0xff) {
            *(byte *)(iVar28 + iVar22) = bVar5;
            *(byte *)(iVar28 + 1 + iVar22) = bVar1;
            *(byte *)(iVar28 + 2 + iVar22) = bVar2;
          }
          else {
            uVar16 = uVar8 ^ 0xff;
            *(char *)(iVar28 + iVar22) =
                 (char)((ulonglong)(bVar5 * uVar8 + 0x7f + *(byte *)(iVar28 + iVar22) * uVar16) *
                        0x1010102 >> 0x20);
            *(char *)(iVar28 + 1 + iVar22) =
                 (char)((ulonglong)(bVar1 * uVar8 + 0x7f + *(byte *)(iVar28 + 1 + iVar22) * uVar16)
                        * 0x1010102 >> 0x20);
            *(char *)(iVar28 + 2 + iVar22) =
                 (char)((ulonglong)(bVar2 * uVar8 + 0x7f + *(byte *)(iVar28 + 2 + iVar22) * uVar16)
                        * 0x1010102 >> 0x20);
          }
          *(undefined1 *)(iVar28 + 3 + iVar22) = 0xff;
        }
        iVar22 = iVar22 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      iVar21 = iVar21 + 1;
      iVar20 = iVar20 + 1;
      pcStack_18 = (char *)((int)pcStack_18 + iVar6);
      if (iVar21 == uStack_5c) {
        return;
      }
    } while( true );
  }
  uStack_f0 = 0x100107f4;
  recovered_1000ec70((int)local_1c,iVar25,pcVar15,0xffffffff,
                     CONCAT13(in_stack_ffffff1f,CONCAT12(uVar36,uVar35)),1);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006930
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f2c0
#undef DAT_01823f88
#undef DAT_01823f8c
#undef DAT_01823f90
#undef DAT_01823f94
#undef DAT_018240ac
#undef DAT_018240b0
#undef DAT_018240b4
#undef DAT_018240b8
#undef DAT_018240bc
#undef DAT_018240c0
#undef DAT_018241b5
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006930
#undef UINT_0000687c
#undef UINT_000068b8
#undef UINT_000068c0
#undef UINT_000068f8
#undef UNK_0181e901
#undef UNK_018240c4
#undef uStack_d2
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_7c
#undef uStack_78
#undef uStack_74
#undef uStack_70
#undef iStack_6c
#undef iStack_68
#undef iStack_64
#undef iStack_60
#undef uStack_5c
#undef uStack_58
#undef uStack_50
#undef uStack_4c
#undef iStack_48
#undef uStack_44
#undef pcStack_40
#undef uStack_3c
#undef uStack_34
#undef uStack_30
#undef piStack_2c
#undef pcStack_28
#undef uStack_24
#undef pcStack_20
#undef pcStack_18
#undef uStack_14
#undef in_stack_fffffebc
#undef in_stack_ffffff1f
#undef local_d4
#undef local_54
#undef local_38
#undef local_1c
#undef acStack_23ec
#undef uStack_238c
#undef acStack_238b
#undef iStack_2388
#undef uStack_2384
#undef iStack_2380
#undef acStack_2364
#undef acStack_2354
#undef auStack_21a8
#undef acStack_408
#undef auStack_3c0
#undef uStack_3b0
#undef uStack_3ac
#undef uStack_3a8
#undef acStack_38c
#undef acStack_32c
#undef acStack_2fc
#undef abStack_2dc
#undef acStack_2d8
#undef uStack_278
#undef iStack_274
#undef iStack_270
#undef iStack_26c
#undef uStack_268
#undef uStack_264
#undef uStack_260
#undef uStack_25c
#undef uStack_258
#undef uStack_254
#undef uStack_250
#undef uStack_24c
#undef uStack_248
#undef uStack_244
#undef pcStack_240
#undef uStack_234
#undef uStack_230
#undef uStack_22c
#undef uStack_214
#undef uStack_210
#undef uStack_20c
#undef uStack_1f4
#undef uStack_1f0
#undef uStack_1ec
#undef uStack_1d4
#undef uStack_1d0
#undef uStack_1cc
#undef uStack_1b4
#undef uStack_1b0
#undef uStack_1ac
#undef uStack_174
#undef uStack_170
#undef uStack_16c
#undef uStack_168
#undef uStack_164
#undef uStack_150
#undef uStack_134
#undef uStack_130
#undef uStack_12c
#undef uStack_128
#undef uStack_124
#undef uStack_10c
#undef uStack_108
#undef uStack_104
#undef uStack_100
#undef uStack_f0
#undef cStack_d5

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_01823f80
#define DAT_01823f80 (*(uint8_t *)(0x1823f80U))
#undef DAT_01823f84
#define DAT_01823f84 (*(uint8_t *)(0x1823f84U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
#define local_24 (*(int *)(frame + 28))
#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100110a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_100110a0(int in_ECX,int in_EDX,int param_3,int param_4,int *param_5,undefined4 *param_6)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar8 = 0;
  if ((0 < param_4 && 0 < param_3) && (0 < (*(uint32_t *)(pf_module_state+0x12d8U)) && 0 < (*(uint32_t *)(pf_module_state+0x12d4U)))) {
    iVar9 = in_ECX;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= in_ECX) {
      iVar9 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    local_24 = 0;
    if (-1 < in_ECX) {
      local_24 = iVar9;
    }
    iVar9 = in_EDX;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= in_EDX) {
      iVar9 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    iVar3 = param_3 + in_ECX;
    iVar7 = 0;
    if (-1 < in_EDX) {
      iVar7 = iVar9;
    }
    iVar9 = iVar3;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar3) {
      iVar9 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar10 = param_4 + in_EDX;
    iVar4 = 0;
    if (-1 < iVar3) {
      iVar4 = iVar9;
    }
    iVar9 = iVar10;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar10) {
      iVar9 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    iVar3 = 0;
    if (-1 < iVar10) {
      iVar3 = iVar9;
    }
    local_20 = 0;
    if (iVar4 - local_24 == 0 || iVar4 < local_24) {
      local_1c = 0;
      local_18 = 0;
      uVar8 = 0;
    }
    else {
      local_1c = 0;
      local_18 = 0;
      uVar8 = 0;
      if (iVar3 - iVar7 != 0 && iVar7 <= iVar3) {
        local_20 = local_24;
        uVar8 = iVar3 - iVar7;
        local_1c = iVar7;
        local_18 = iVar4 - local_24;
      }
    }
  }
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_5 == (int *)0x0) {
    return 0;
  }
  if ((*(uint32_t *)(pf_module_state+0x1490U)) == 0) {
    return 0;
  }
  if ((int)local_18 < 1) {
    return 0;
  }
  if ((int)uVar8 < 1) {
    return 0;
  }
  uVar5 = (uint)((ulonglong)local_18 * (ulonglong)uVar8);
  if ((0x3fffffff < uVar5 || (int)((ulonglong)local_18 * (ulonglong)uVar8 >> 0x20) != 0) ||
     (uVar5 == 0)) {
    return 0;
  }
  uVar5 = uVar5 << 2;
  if ((*(uint32_t *)(pf_module_state+0x6154U)) < uVar5 || (*(uint32_t *)(pf_module_state+0x6150U)) == (void *)0x0) {
    iVar9 = Ram00006800;
    if (iVar9 != 0x50414d57) {
      return 0;
    }
    iVar9 = Ram00006804;
    if (iVar9 == 0) {
      return 0;
    }
    uVar1 = Ram00006808;
    if (uVar1 < 0xc) {
      return 0;
    }
    uVar1 = Ram00006808;
    if (uVar1 < 0x58) {
      return 0;
    }
    pcVar2 = (code *)UINT_00006854;
    if (pcVar2 == (code *)0x0) {
      return 0;
    }
    pvVar6 = (*pcVar2)((*(uint32_t *)(pf_module_state+0x6150U)),uVar5);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    (*(uint32_t *)(pf_module_state+0x6150U)) = pvVar6;
    (*(uint32_t *)(pf_module_state+0x6154U)) = uVar5;
  }
  iVar9 = 0;
  uVar5 = 0;
  do {
    memcpy((void *)((int)(*(uint32_t *)(pf_module_state+0x6150U)) + iVar9),
                       (void *)(((local_1c + uVar5) * (*(uint32_t *)(pf_module_state+0x12d4U)) + local_20) * 4 + (*(uint32_t *)(pf_module_state+0x1490U)))
                       ,local_18 * 4);
    pvVar6 = (*(uint32_t *)(pf_module_state+0x6150U));
    uVar5 = uVar5 + 1;
    iVar9 = iVar9 + local_18 * 4;
  } while (uVar8 != uVar5);
  *param_5 = local_20;
  param_5[1] = local_1c;
  param_5[2] = local_18;
  param_5[3] = uVar8;
  *param_6 = pvVar6;
  return CONCAT31((int3)((uint)pvVar6 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2c0
#undef DAT_01823f80
#undef DAT_01823f84
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006854
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#define in_stack_fffffebc (*(uint *)(frame + 28))
#define local_134 (*(undefined4 *)(frame + 44))
#define local_130 (*(undefined4 *)(frame + 48))
#define local_12c (*(undefined4 *)(frame + 52))
#define local_128 (*(undefined2 *)(frame + 56))
#define local_126 (*(undefined1 *)(frame + 58))
#define local_3c (*(int *)(frame + 292))
#define local_38 (*(int *)(frame + 296))
#define local_34 (*(uint *)(frame + 300))
#define local_30 (*(int *)(frame + 304))
#define local_2c (*(int *)(frame + 308))
#define local_28 (*(int *)(frame + 312))
#define local_24 (*(int *)(frame + 316))
#define local_20 (*(int *)(frame + 320))
#define local_1c (*(uint *)(frame + 324))
#define local_18 (*(uint *)(frame + 328))
#define local_14 (*(undefined2 *)(frame + 332))
#define local_12 (*(undefined1 *)(frame + 334))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100112e0(int in_ECX)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint in_ECX_00;
  int iVar6;
  char cVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 uVar17;

  iVar10 = *(int *)(in_ECX + 100) + -0x6a;
  iVar12 = 1;
  if (0x49 < iVar10) {
    iVar12 = iVar10 / 0x4a - iVar10 / -0x6c000000;
  }
  local_30 = *(int *)(in_ECX + 0x58);
  local_28 = *(int *)(in_ECX + 0x5c);
  iVar10 = (int)((ulonglong)((longlong)(*(int *)(in_ECX + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
           -0x26 + *(int *)(in_ECX + 0x60);
  iVar10 = (iVar10 >> 6) - (iVar10 >> 0x1f);
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  local_34 = iVar10 * iVar12;
  local_38 = local_30 + 0x22;
  local_3c = local_28 + 0x44;
  local_2c = *(int *)(in_ECX + 0xaf0) + 2;
  local_18 = 0;
  iVar10 = 0xc;
  pcVar8 = "";
  local_20 = in_ECX;
  do {
    uVar17 = (undefined1)(in_stack_fffffebc >> 0x18);
    if (pcVar8[-1] == '\x01') {
      iVar12 = *(int *)(local_20 + 0x58);
      if (iVar12 + -0xe + *(int *)(local_20 + 0x60) < (int)(local_18 * 0x5c + 0x76 + iVar12)) break;
      iVar12 = local_18 * 0x5c + 0x22 + iVar12;
      local_1c = *(int *)(local_20 + 0x5c);
      local_24 = local_1c + 0x22;
      PF_PART3(local_134, 0) = 0xfafafa;
      uVar16 = CONCAT22(CONCAT11(uVar17,0xfa),0xfafa);
      recovered_1000f370(iVar12,local_24,0x54,0x1a,(uint3)uVar16,
                         -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
      PF_PART3(local_134, 0) = 0x969696;
      uVar4 = CONCAT13((char)((uint)uVar16 >> 0x18),0x969696);
      recovered_1000efc0(iVar12,local_24,0x54,0x1a,uVar4);
      local_134 = CONCAT13(PF_PART1(local_134, 3),0x202020);
      in_stack_fffffebc = CONCAT13((char)(uVar4 >> 0x18),0x202020);
      recovered_1000ec70(iVar12 + 8,local_1c + 0x2b,pcVar8,0xb,in_stack_fffffebc,1);
      local_18 = local_18 + 1;
    }
    uVar17 = (undefined1)(in_stack_fffffebc >> 0x18);
    pcVar8 = pcVar8 + 0x124;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = local_20;
  if (*(char *)(local_20 + 0x260) == '\0') {
    local_134 = 0x69766564;
    local_130 = 0x206563;
    uVar4 = *(uint *)(local_20 + 0x25c);
    if ((int)uVar4 < 0) {
      uVar2 = strlen((char *)&local_134);
      if (uVar2 < 0xf3) {
        iVar12 = 0xf2;
        if (uVar2 != 0xf2) {
          iVar12 = uVar2 + 1;
          *(undefined1 *)((int)&local_134 + uVar2) = 0x2d;
        }
        *(undefined1 *)((int)&local_134 + iVar12) = 0;
      }
      uVar4 = -uVar4;
    }
    recovered_10015400((char *)&local_134,0xf3,uVar4);
    uVar2 = strlen((char *)&local_134);
    if (uVar2 < 0xf3) {
      uVar4 = 0xf2;
      if (uVar2 != 0xf2) {
        cVar7 = ' ';
        pcVar8 = "/";
        do {
          *(char *)((int)&local_134 + uVar2) = cVar7;
          uVar4 = uVar2 + 1;
          if (0xf0 < uVar2) break;
          cVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          uVar2 = uVar4;
        } while (cVar7 != '\0');
      }
      *(undefined1 *)((int)&local_134 + uVar4) = 0;
      iVar10 = local_20;
    }
    uVar2 = strlen((char *)&local_134);
    if (0xf2 < uVar2) goto LAB_100115f2;
    cVar7 = *(char *)(iVar10 + 0x78);
    if (uVar2 != 0xf2 && cVar7 != '\0') {
      pcVar8 = (char *)(iVar10 + 0x79);
      uVar3 = uVar2;
      do {
        *(char *)((int)&local_134 + uVar3) = cVar7;
        uVar2 = uVar3 + 1;
        if (0xf0 < uVar3) break;
        cVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar2;
      } while (cVar7 != '\0');
    }
  }
  else {
    local_134 = 0x6e756f6d;
    local_130 = 0x20646574;
    local_12c = 0x69766564;
    local_128 = 0x6563;
    local_126 = 0x73;
    uVar2 = 0xf;
  }
  *(undefined1 *)((int)&local_134 + uVar2) = 0;
LAB_100115f2:
  iVar12 = local_38;
  local_14 = 0x2e2e;
  local_12 = 0x2e;
  uVar4 = CONCAT13(uVar17,0x2e2e2e);
  recovered_1000ec70(local_38,local_3c,(char *)&local_134,0xffffffff,uVar4,1);
  iVar10 = (*(uint32_t *)(pf_module_state+0x12d4U));
  uVar17 = (undefined1)(uVar4 >> 0x18);
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar12) {
    local_38 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  local_18 = 0;
  iVar12 = 0;
  if (-0x23 < local_30) {
    iVar12 = local_38;
  }
  iVar14 = local_28 + 0x56;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= local_28 + 0x56) {
    iVar14 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  local_1c = *(int *)(local_20 + 0x60);
  iVar6 = 0;
  if (-0x57 < local_28) {
    iVar6 = iVar14;
  }
  iVar14 = local_30 + -0xe + local_1c;
  iVar13 = iVar14;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar14) {
    iVar13 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  iVar5 = 0;
  if (-1 < iVar14) {
    iVar5 = iVar13;
  }
  iVar14 = local_28 + 0x57;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= local_28 + 0x57) {
    iVar14 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  if (-0x58 < local_28) {
    local_18 = iVar14;
  }
  if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar5 - iVar12 != 0 && iVar12 <= iVar5)) && (iVar6 < (int)local_18))
  {
    puVar11 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + (iVar12 + iVar6 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
    do {
      puVar9 = puVar11;
      iVar14 = iVar5 - iVar12;
      do {
        *puVar9 = 0xffcccccc;
        puVar9 = puVar9 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      iVar6 = iVar6 + 1;
      puVar11 = puVar11 + iVar10;
    } while (iVar6 != local_18);
    local_1c = *(int *)(local_20 + 0x60);
  }
  iVar10 = *(int *)(local_20 + 100);
  local_28 = iVar10 + -0x6a;
  iVar12 = ((int)((ulonglong)((longlong)local_28 * 0x22983759) >> 0x20) - iVar10) + 0x6a;
  iVar14 = (iVar12 >> 6) - (iVar12 >> 0x1f);
  iVar12 = iVar14;
  if (local_28 < 0x4a) {
    iVar12 = -1;
  }
  local_24 = *(int *)(local_20 + 0xaf0);
  iVar6 = (int)((ulonglong)((longlong)(int)(local_1c + -0x26) * -0x2df2df2d) >> 0x20) + -0x26 +
          local_1c;
  local_1c = (iVar6 >> 6) - (iVar6 >> 0x1f);
  if ((int)local_1c < 2) {
    local_1c = 1;
  }
  iVar12 = local_24 + 2 + iVar12 * local_1c;
  iVar6 = *(int *)(local_20 + 0xaf8);
  if (iVar6 < 0) {
    *(undefined4 *)(local_20 + 0xaf8) = 0;
    iVar6 = 0;
  }
  if (iVar12 < 1 || iVar12 < iVar6) {
    iVar6 = 0;
    if (0 < iVar12) {
      iVar6 = iVar12;
    }
    *(int *)(local_20 + 0xaf8) = iVar6;
  }
  iVar12 = local_20;
  if (0 < (int)local_34) {
    uVar15 = 0;
    do {
      uVar17 = (undefined1)(uVar4 >> 0x18);
      iVar10 = (int)((ulonglong)((longlong)(*(int *)(iVar12 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20)
               + -0x26 + *(int *)(iVar12 + 0x60);
      local_1c = (iVar10 >> 6) - (iVar10 >> 0x1f);
      if ((int)local_1c < 2) {
        local_1c = 1;
      }
      iVar10 = uVar15 + *(int *)(iVar12 + 0xaf8);
      if (local_2c <= iVar10) goto LAB_10011a48;
      in_ECX_00 = *(int *)(iVar12 + 0x58) + 0x22 + (uVar15 % local_1c) * 0x4e;
      iVar14 = *(int *)(iVar12 + 0x5c) + 0x60 + (uVar15 / local_1c) * 0x4a;
      local_18 = uVar15;
      if (iVar10 == 0) {
        recovered_10014ef0(in_ECX_00 + 10,iVar14,(char *)0x0,'\x01');
        pcVar8 = "Parent";
        if ((*(char *)(local_20 + 0x78) == '\0') && (*(char *)(local_20 + 0x260) == '\0')) {
          pcVar8 = "Devices";
        }
        uVar15 = local_18;
LAB_10011a06:
        iVar12 = local_20;
        local_12 = 0x1c;
        local_14 = 0x1c1c;
        uVar4 = CONCAT13(uVar17,0x1c1c1c);
        recovered_1000f280(in_ECX_00,iVar14 + 0x26,0x44,pcVar8,0x1c1c,0x1c);
      }
      else {
        local_1c = in_ECX_00;
        if (iVar10 != 1) {
          iVar12 = (uVar15 - 2) + *(int *)(iVar12 + 0xaf8);
          if (((1 < iVar10) && (*(char *)(local_20 + 0xafc) != '\0')) &&
             (iVar12 == *(int *)(local_20 + 0xaf4))) {
            local_28 = in_ECX_00 - 4;
            local_24 = iVar14 + -4;
            local_14 = 0xe8e8;
            local_12 = 0xe8;
            uVar16 = CONCAT22((short)(CONCAT13(uVar17,0xe80000) >> 0x10),0xe8e8);
            recovered_1000f370(local_28,local_24,0x44,0x40,(uint3)uVar16,
                               -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
            local_14 = 0x8e8e;
            local_12 = 0x8e;
            uVar4 = CONCAT13((char)((uint)uVar16 >> 0x18),0x8e8e8e);
            recovered_1000efc0(local_28,local_24,0x44,0x40,uVar4);
            uVar17 = (undefined1)(uVar4 >> 0x18);
          }
          iVar12 = iVar12 * 0x1f8;
          recovered_10014ef0(local_1c + 10,iVar14,(char *)(*(int *)(local_20 + 0xaec) + iVar12),'\0'
                            );
          pcVar8 = (char *)(iVar12 + *(int *)(local_20 + 0xaec));
          in_ECX_00 = local_1c;
          goto LAB_10011a06;
        }
        recovered_10014ef0(in_ECX_00 + 10,iVar14,(char *)0x0,'\0');
        local_14 = 0x1c1c;
        local_12 = 0x1c;
        uVar4 = CONCAT13(uVar17,0x1c1c1c);
        recovered_1000f280(in_ECX_00,iVar14 + 0x26,0x44,"Refresh",0x1c1c,0x1c);
        iVar12 = local_20;
      }
      uVar17 = (undefined1)(uVar4 >> 0x18);
      uVar15 = uVar15 + 1;
    } while (local_34 != uVar15);
    iVar10 = (int)((ulonglong)((longlong)(*(int *)(iVar12 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
             -0x26 + *(int *)(iVar12 + 0x60);
    local_1c = (iVar10 >> 6) - (iVar10 >> 0x1f);
    if ((int)local_1c < 2) {
      local_1c = 1;
    }
    iVar12 = local_20;
LAB_10011a48:
    iVar10 = *(int *)(iVar12 + 100);
    local_24 = *(int *)(iVar12 + 0xaf0);
    local_28 = iVar10 + -0x6a;
    iVar14 = ((int)((ulonglong)((longlong)local_28 * 0x22983759) >> 0x20) - iVar10) + 0x6a;
    iVar14 = (iVar14 >> 6) - (iVar14 >> 0x1f);
  }
  local_2c = local_24 + 2;
  local_18 = 0x12;
  if (0x15 < iVar10 + -0x84) {
    local_18 = iVar10 + -0x88;
  }
  iVar6 = *(int *)(iVar12 + 0x5c) + 0x5e;
  iVar10 = local_28 / 0x4a - local_28 / -0x6c000000;
  if (local_28 < 0x4a) {
    iVar10 = 1;
    iVar14 = -1;
  }
  local_34 = *(int *)(iVar12 + 0x58);
  bVar1 = -2 < local_24;
  local_24 = iVar6;
  uVar4 = local_18;
  if (((bVar1) && ((int)(iVar10 * local_1c) < local_2c)) &&
     (iVar14 = local_1c * iVar14 + local_2c, 0 < iVar14)) {
    uVar4 = (int)(iVar10 * local_1c * local_18) / local_2c;
    if ((int)uVar4 < 0x13) {
      uVar4 = 0x12;
    }
    if ((int)local_18 <= (int)uVar4) {
      uVar4 = local_18;
    }
    local_24 = (int)((local_18 - uVar4) * *(int *)(iVar12 + 0xaf8)) / iVar14 + iVar6;
  }
  local_1c = uVar4;
  iVar10 = local_34 + 0xe;
  local_14 = 0xe4e4;
  local_12 = 0xe4;
  uVar16 = CONCAT22((short)(CONCAT13(uVar17,0xe40000) >> 0x10),0xe4e4);
  local_30 = iVar6;
  local_2c = iVar10;
  recovered_1000f370(iVar10,iVar6,0xc,local_18,(uint3)uVar16,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  local_14 = 0xacac;
  local_12 = 0xac;
  uVar15 = CONCAT13((char)((uint)uVar16 >> 0x18),0xacacac);
  recovered_1000efc0(iVar10,iVar6,0xc,local_18,uVar15);
  uVar4 = local_1c;
  iVar10 = local_24;
  local_18 = local_24 + 1;
  local_14 = 0xbebe;
  local_12 = 0xbe;
  uVar16 = CONCAT22((short)(CONCAT13((char)(uVar15 >> 0x18),0xbe0000) >> 0x10),0xbebe);
  recovered_1000f370(local_34 + 0xf,local_18,10,local_1c + -2,(uint3)uVar16,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  local_14 = 0x7474;
  local_12 = 0x74;
  recovered_1000efc0(local_2c,iVar10,0xc,uVar4,CONCAT13((char)((uint)uVar16 >> 0x18),0x747474));
  iVar10 = local_20;
  recovered_100154f0(*(int *)(local_20 + 0x58) + 0xe,
                     *(int *)(local_20 + 0x5c) + -0x26 + *(int *)(local_20 + 100),0xc,0xe,1);
  recovered_100154f0(*(int *)(iVar10 + 0x58) + 0xe,
                     *(int *)(iVar10 + 0x5c) + -0x16 + *(int *)(iVar10 + 100),0xc,0xe,0);
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f2c0
#undef in_stack_fffffebc
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_126
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_12

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006930
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
#undef DAT_018240b0
#define DAT_018240b0 (*(uint8_t *)(0x18240b0U))
#undef DAT_018240b4
#define DAT_018240b4 (*(uint8_t *)(0x18240b4U))
#undef DAT_018240b8
#define DAT_018240b8 (*(uint8_t *)(0x18240b8U))
#undef DAT_018240bc
#define DAT_018240bc (*(uint8_t *)(0x18240bcU))
#undef DAT_018240c0
#define DAT_018240c0 (*(uint8_t *)(0x18240c0U))
#undef DAT_018241b5
#define DAT_018241b5 (*(uint8_t *)(0x18241b5U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006930
#define Ram00006930 (*(uint32_t *)(0x6930U))
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_000068b8
#define UINT_000068b8 (*(uint *)(0x68b8U))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_000068f8
#define UINT_000068f8 (*(uint *)(0x68f8U))
#undef UNK_0181e901
#define UNK_0181e901 (*(uint8_t *)(0x181e901U))
#undef UNK_018240c4
#define UNK_018240c4 (*(uint8_t *)(0x18240c4U))
#define local_23ec (*(char (*)[96])(frame + 36))
#define local_238c (*(undefined1 *)(frame + 132))
#define local_2388 (*(int *)(frame + 136))
#define local_2384 (*(uint *)(frame + 140))
#define local_2380 (*(int *)(frame + 144))
#define local_2364 (*(char (*)[16])(frame + 172))
#define local_2354 (*(char (*)[428])(frame + 188))
#define local_408 (*(char (*)[72])(frame + 8200))
#define local_3c0 (*(undefined1 (*)[16])(frame + 8272))
#define local_3b0 (*(uint *)(frame + 8288))
#define local_3ac (*(uint *)(frame + 8292))
#define local_3a8 (*(uint *)(frame + 8296))
#define local_38c (*(char (*)[96])(frame + 8324))
#define local_32c (*(char (*)[48])(frame + 8420))
#define local_2fc (*(char (*)[32])(frame + 8468))
#define local_2dc (*(byte (*)[4])(frame + 8500))
#define local_2d8 (*(char (*)[96])(frame + 8504))
#define local_278 (*(uint *)(frame + 8600))
#define local_274 (*(int *)(frame + 8604))
#define local_270 (*(int *)(frame + 8608))
#define local_26c (*(int *)(frame + 8612))
#define local_268 (*(uint *)(frame + 8616))
#define local_264 (*(uint *)(frame + 8620))
#define local_260 (*(uint *)(frame + 8624))
#define local_25c (*(uint *)(frame + 8628))
#define local_258 (*(uint *)(frame + 8632))
#define local_254 (*(uint *)(frame + 8636))
#define local_250 (*(uint *)(frame + 8640))
#define local_24c (*(uint *)(frame + 8644))
#define local_248 (*(uint *)(frame + 8648))
#define local_244 (*(uint *)(frame + 8652))
#define local_240 (*(char * *)(frame + 8656))
#define local_234 (*(undefined4 *)(frame + 8668))
#define local_230 (*(undefined4 *)(frame + 8672))
#define local_22c (*(undefined4 *)(frame + 8676))
#define local_214 (*(undefined4 *)(frame + 8700))
#define local_210 (*(undefined4 *)(frame + 8704))
#define local_20c (*(undefined4 *)(frame + 8708))
#define local_1f4 (*(undefined4 *)(frame + 8732))
#define local_1f0 (*(undefined4 *)(frame + 8736))
#define local_1ec (*(undefined4 *)(frame + 8740))
#define local_1d4 (*(undefined4 *)(frame + 8764))
#define local_1d0 (*(undefined4 *)(frame + 8768))
#define local_1cc (*(undefined4 *)(frame + 8772))
#define local_1b4 (*(uint *)(frame + 8796))
#define local_1b0 (*(undefined4 *)(frame + 8800))
#define local_1ac (*(undefined4 *)(frame + 8804))
#define local_174 (*(uint *)(frame + 8860))
#define local_170 (*(undefined4 *)(frame + 8864))
#define local_16c (*(undefined4 *)(frame + 8868))
#define local_168 (*(undefined4 *)(frame + 8872))
#define local_164 (*(undefined4 *)(frame + 8876))
#define local_12c (*(uint *)(frame + 8932))
#define local_128 (*(undefined4 *)(frame + 8936))
#define local_124 (*(undefined2 *)(frame + 8940))
#define local_10c (*(undefined4 *)(frame + 8964))
#define local_108 (*(undefined4 *)(frame + 8968))
#define local_104 (*(undefined4 *)(frame + 8972))
#define local_100 (*(undefined1 *)(frame + 8976))
#define local_ac (*(undefined4 *)(frame + 9060))
#define local_a8 (*(undefined4 *)(frame + 9064))
#define local_a4 (*(undefined4 *)(frame + 9068))
#define local_94 (*(undefined4 *)(frame + 9084))
#define local_90 (*(undefined4 *)(frame + 9088))
#define local_8c (*(undefined4 *)(frame + 9092))
#define local_7c (*(undefined4 *)(frame + 9108))
#define local_78 (*(undefined4 *)(frame + 9112))
#define local_74 (*(undefined4 *)(frame + 9116))
#define local_64 (*(int *)(frame + 9132))
#define local_60 (*(int *)(frame + 9136))
#define local_5c (*(uint *)(frame + 9140))
#define local_58 (*(uint *)(frame + 9144))
#define local_54 (*(uint *)(frame + 9148))
#define local_50 (*(uint *)(frame + 9152))
#define local_4c (*(uint *)(frame + 9156))
#define local_48 (*(int *)(frame + 9160))
#define local_44 (*(uint *)(frame + 9164))
#define local_40 (*(char * *)(frame + 9168))
#define local_3c (*(uint *)(frame + 9172))
#define local_38 (*(char * *)(frame + 9176))
#define local_34 (*(uint *)(frame + 9180))
#define local_30 (*(uint *)(frame + 9184))
#define local_2c (*(int * *)(frame + 9188))
#define acStack_238b (*(char (*)[3])(frame + 133))
#define local_28 (*(char * *)(frame + 9192))
#define local_24 (*(undefined4 *)(frame + 9196))
#define local_20 (*(int *)(frame + 9200))
#define local_1c (*(char * *)(frame + 9204))
#define local_18 (*(char * *)(frame + 9208))
#define local_14 (*(uint *)(frame + 9212))
#define auStack_21a8 (*(uint (*)[1896])(frame + 616))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011cc0(char *in_ECX)

{
  unsigned char frame[9264] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  ushort uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  bool bVar24;
  uint *outEntryCount;
  undefined4 uVar25;
  undefined1 uVar26;

  local_18 = *(char **)(in_ECX + 0x58);
  uVar11 = *(uint *)(in_ECX + 0x5c);
  local_28 = *(char **)(in_ECX + 0x60);
  iVar3 = (int)local_28 + -0xb2;
  local_4c = recovered_10015df0("W",0xffffffff);
  if ((int)local_4c < 2) {
    local_4c = 1;
  }
  local_4c = iVar3 / (int)local_4c;
  piVar2 = (int *)recovered_10004ab0();
  local_2c = recovered_1000e6c0((int *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xad1U)),piVar2);
  recovered_10015a70("Permafrost","1.0",local_408,0x48);
  recovered_10015a70("WinterShell","0.4",(char *)&local_10c,0x60);
  memset(&local_238c,0,0x1bc);
  pcVar17 = local_18;
  iVar3 = Ram00006800;
  local_1c = in_ECX;
  local_14 = uVar11;
  if ((((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar5 = Ram00006808, 0xb < uVar5)) &&
       ((uVar5 = Ram00006808, 0x133 < uVar5 && (pcVar1 = (code *)Ram00006930, pcVar1 != (code *)0x0)
        ))) && (iVar3 = (*pcVar1)(&local_238c), iVar3 != 0)) && ((local_2384 & 1) != 0)) {
    local_10c = 0x746e6957;
    local_108 = 0x68537265;
    local_104 = 0x206c6c65;
    local_100 = 0;
    uVar4 = strlen((char *)&local_10c);
    if (uVar4 < 0x60) {
      uVar11 = 0x5f;
      if (uVar4 != 0x5f) {
        cVar14 = '0';
        pcVar8 = ".4";
        do {
          *(char *)((int)&local_10c + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x5d < uVar4) break;
          cVar14 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      *(undefined1 *)((int)&local_10c + uVar11) = 0;
      uVar11 = local_14;
    }
    uVar4 = strlen((char *)&local_10c);
    if (uVar4 < 0x60) {
      iVar3 = 0x5f;
      if (uVar4 != 0x5f) {
        iVar3 = uVar4 + 1;
        *(undefined1 *)((int)&local_10c + uVar4) = 0x20;
      }
      *(undefined1 *)((int)&local_10c + iVar3) = 0;
    }
    uVar4 = strlen((char *)&local_10c);
    if (uVar4 < 0x60) {
      uVar11 = 0x5f;
      if (uVar4 != 0x5f) {
        cVar14 = 'B';
        pcVar8 = "eta";
        do {
          *(char *)((int)&local_10c + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x5d < uVar4) break;
          cVar14 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      *(undefined1 *)((int)&local_10c + uVar11) = 0;
      uVar11 = local_14;
    }
    uVar4 = strlen((char *)&local_10c);
    if (uVar4 < 0x60) {
      uVar11 = 0x5f;
      if (uVar4 != 0x5f) {
        cVar14 = ' ';
        pcVar8 = "+ Tayga ";
        do {
          *(char *)((int)&local_10c + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x5d < uVar4) break;
          cVar14 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      *(undefined1 *)((int)&local_10c + uVar11) = 0;
      uVar11 = local_14;
    }
    pcVar8 = "0.2";
    if (local_2364[0] != '\0') {
      pcVar8 = local_2364;
    }
    uVar5 = strlen((char *)&local_10c);
    if (uVar5 < 0x60) {
      if (uVar5 != 0x5f) {
        cVar14 = *pcVar8;
        uVar21 = uVar5;
        while (uVar5 = uVar21, cVar14 != '\0') {
          pcVar8 = pcVar8 + 1;
          *(char *)((int)&local_10c + uVar21) = cVar14;
          uVar5 = uVar21 + 1;
          if (0x5d < uVar21) break;
          uVar21 = uVar5;
          cVar14 = *pcVar8;
        }
      }
      *(undefined1 *)((int)&local_10c + uVar5) = 0;
    }
    uVar4 = strlen((char *)&local_10c);
    if (uVar4 < 0x60) {
      iVar3 = 0x5f;
      if (uVar4 != 0x5f) {
        iVar3 = uVar4 + 1;
        *(undefined1 *)((int)&local_10c + uVar4) = 0x20;
      }
      *(undefined1 *)((int)&local_10c + iVar3) = 0;
    }
    pcVar8 = "Alpha";
    if (local_2354[0] != '\0') {
      pcVar8 = local_2354;
    }
    uVar5 = strlen((char *)&local_10c);
    if (uVar5 < 0x60) {
      if (uVar5 != 0x5f) {
        cVar14 = *pcVar8;
        uVar21 = uVar5;
        while (uVar5 = uVar21, cVar14 != '\0') {
          pcVar8 = pcVar8 + 1;
          *(char *)((int)&local_10c + uVar21) = cVar14;
          uVar5 = uVar21 + 1;
          if (0x5d < uVar21) break;
          uVar21 = uVar5;
          cVar14 = *pcVar8;
        }
      }
      *(undefined1 *)((int)&local_10c + uVar5) = 0;
    }
  }
  memset(local_2dc,0,0xa8);
  iVar3 = Ram00006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
     ((uVar5 = Ram00006808, 0xb < uVar5 &&
      (((uVar5 = Ram00006808, 0xfb < uVar5 &&
        (pcVar1 = (code *)UINT_000068f8, pcVar1 != (code *)0x0)) &&
       (uVar5 = (*pcVar1)(local_2dc), uVar5 != 0)))))) {
    local_20 = CONCAT31((int3)(uVar5 >> 8),1);
  }
  else {
    iVar3 = Ram00006800;
    local_20 = 0;
    local_278 = 0;
    if (iVar3 == 0x50414d57) {
      iVar3 = Ram00006804;
      if (iVar3 == 0) {
LAB_100120a2:
        local_20 = 0;
        local_278 = 0;
      }
      else {
        uVar5 = Ram00006808;
        local_20 = 0;
        local_278 = 0;
        if (0xb < uVar5) {
          uVar5 = Ram00006808;
          local_20 = 0;
          local_278 = 0;
          if (0xbb < uVar5) {
            pcVar1 = (code *)UINT_000068b8;
            if (pcVar1 == (code *)0x0) goto LAB_100120a2;
            local_278 = (*pcVar1)();
            local_20 = 0;
          }
        }
      }
    }
  }
  local_30 = (int)pcVar17 + 0x12;
  local_38 = (char *)(uVar11 + 0x26);
  local_48 = (int)local_28 + -0x24;
  local_32c[0] = '\0';
  bVar24 = local_278 < 2;
  if (bVar24) {
    local_278 = 1;
  }
  pcVar17 = " hardware thread";
  if (!bVar24) {
    pcVar17 = " hardware threads";
  }
  recovered_10015400(local_32c,0x30,local_278);
  uVar11 = strlen(local_32c);
  if (uVar11 < 0x30) {
    if (uVar11 != 0x2f) {
      cVar14 = *pcVar17;
      uVar5 = uVar11;
      while (uVar11 = uVar5, cVar14 != '\0') {
        pcVar17 = pcVar17 + 1;
        local_32c[uVar5] = cVar14;
        uVar11 = uVar5 + 1;
        if (0x2d < uVar5) break;
        uVar5 = uVar11;
        cVar14 = *pcVar17;
      }
    }
    local_32c[uVar11] = '\0';
  }
  if (local_2d8[0] == '\0') {
    pcVar17 = "Unknown CPU";
  }
  else {
    pcVar17 = local_2d8;
  }
  if ((char)local_20 == '\0') {
    pcVar17 = "Unknown CPU";
  }
  cVar14 = *pcVar17;
  if (cVar14 == '\0') {
    uVar11 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar11 = uVar5 + 1;
      local_23ec[uVar5] = cVar14;
      if (0x5e < uVar11) break;
      cVar14 = pcVar17[uVar5 + 1];
      uVar5 = uVar11;
    } while (cVar14 != '\0');
  }
  local_23ec[uVar11] = '\0';
  if (((char)local_20 == '\0') || ((local_2dc[0] & 4) == 0)) {
    local_234 = 0x76616e75;
    local_230 = 0x616c6961;
    local_22c = 0x656c62;
    local_214 = 0x76616e75;
    local_210 = 0x616c6961;
    local_20c = 0x656c62;
    local_1f4 = 0x76616e75;
    local_1f0 = 0x616c6961;
    local_1ec = 0x656c62;
    local_1d4 = 0x76616e75;
    local_1d0 = 0x616c6961;
    local_1cc = 0x656c62;
    if (((char)local_20 == '\0') || ((local_2dc[0] & 2) == 0)) goto LAB_10012224;
LAB_100126f6:
    local_1b4 = local_1b4 & 0xffffff00;
    recovered_100161b0((char *)&local_1b4,"data",local_274);
    recovered_100161b0((char *)&local_1b4,"inst",local_270);
    recovered_100161b0((char *)&local_1b4,"unified",local_26c);
    if ((char)local_1b4 == '\0') {
      local_1b4 = 0x76616e75;
      local_1b0 = 0x616c6961;
      local_1ac = 0x656c62;
    }
    if (local_268 == 0) {
      local_ac = 0x76616e75;
      local_a8 = 0x616c6961;
      local_a4 = 0x656c62;
    }
    else {
      recovered_10015bb0(local_268,0,(char *)&local_ac,0x18);
    }
    if (local_264 == 0) {
      local_94 = 0x76616e75;
      local_90 = 0x616c6961;
      local_8c = 0x656c62;
    }
    else {
      recovered_10015bb0(local_264,0,(char *)&local_94,0x18);
    }
    if (local_260 == 0) goto LAB_1001227e;
    recovered_10015bb0(local_260,0,(char *)&local_7c,0x18);
  }
  else {
    local_44 = local_248;
    local_3c = local_24c;
    local_40 = local_240;
    local_34 = local_244;
    uVar11 = local_254;
    uVar5 = local_250;
    if (local_25c != 0 || local_258 != 0) {
      uVar11 = local_25c;
      uVar5 = local_258;
    }
    recovered_10015bb0(uVar11,uVar5,(char *)&local_234,0x20);
    recovered_10015bb0(local_254,local_250,(char *)&local_214,0x20);
    recovered_10015bb0(local_34,(uint)local_40,(char *)&local_1f4,0x20);
    recovered_10015bb0(local_3c,local_44,(char *)&local_1d4,0x20);
    if ((local_2dc[0] & 2) != 0) goto LAB_100126f6;
LAB_10012224:
    local_1b4 = 0x76616e75;
    local_1b0 = 0x616c6961;
    local_1ac = 0x656c62;
    local_ac = 0x76616e75;
    local_a8 = 0x616c6961;
    local_a4 = 0x656c62;
    local_94 = 0x76616e75;
    local_90 = 0x616c6961;
    local_8c = 0x656c62;
LAB_1001227e:
    local_7c = 0x76616e75;
    local_78 = 0x616c6961;
    local_74 = 0x656c62;
  }
  memset(local_3c0,0,0x34);
  iVar3 = Ram00006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
     ((uVar11 = Ram00006808, 0xb < uVar11 &&
      (((uVar11 = Ram00006808, 0x7f < uVar11 &&
        (pcVar1 = (code *)UINT_0000687c, pcVar1 != (code *)0x0)) &&
       (uVar11 = (*pcVar1)(local_3c0), uVar11 != 0)))))) {
    local_174 = local_174 & 0xffffff00;
    recovered_10015400((char *)&local_174,0x48,local_3b0);
    uVar4 = strlen((char *)&local_174);
    if (uVar4 < 0x48) {
      uVar11 = 0x47;
      if (uVar4 != 0x47) {
        cVar14 = ' ';
        pcVar17 = "x ";
        do {
          *(char *)((int)&local_174 + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x45 < uVar4) break;
          cVar14 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      *(undefined1 *)((int)&local_174 + uVar11) = 0;
    }
    recovered_10015400((char *)&local_174,0x48,local_3ac);
    uVar4 = strlen((char *)&local_174);
    if (uVar4 < 0x48) {
      uVar11 = 0x47;
      if (uVar4 != 0x47) {
        cVar14 = ',';
        pcVar17 = " ";
        do {
          *(char *)((int)&local_174 + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x45 < uVar4) break;
          cVar14 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      *(undefined1 *)((int)&local_174 + uVar11) = 0;
    }
    recovered_10015400((char *)&local_174,0x48,local_3a8);
    uVar4 = strlen((char *)&local_174);
    if (uVar4 < 0x48) {
      uVar11 = 0x47;
      if (uVar4 != 0x47) {
        cVar14 = '-';
        pcVar17 = "bit framebuffer";
        do {
          *(char *)((int)&local_174 + uVar4) = cVar14;
          uVar11 = uVar4 + 1;
          if (0x45 < uVar4) break;
          cVar14 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          uVar4 = uVar11;
        } while (cVar14 != '\0');
      }
      goto LAB_10012460;
    }
  }
  else {
    local_174 = 0x70617267;
    local_170 = 0x73636968;
    local_16c = 0x616e7520;
    local_168 = 0x6c696176;
    local_164 = 0x656c6261;
    uVar11 = 0x14;
LAB_10012460:
    *(undefined1 *)((int)&local_174 + uVar11) = 0;
  }
  local_24 = 0;
  uVar5 = recovered_10004ab0();
  pcVar17 = local_1c;
  builtin_strncpy(local_38c,"device ",8);
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    uVar4 = strlen(local_38c);
    if (uVar4 < 0x60) {
      iVar3 = 0x5f;
      if (uVar4 != 0x5f) {
        iVar3 = uVar4 + 1;
        local_38c[uVar4] = '-';
      }
      local_38c[iVar3] = '\0';
    }
    uVar11 = -uVar5;
  }
  recovered_10015400(local_38c,0x60,uVar11);
  local_12c = 0x6f762030;
  local_128 = 0x656d756c;
  local_124 = 0x73;
  builtin_strncpy(local_2fc,"unknown",8);
  uVar7 = 0;
  memset(&local_238c,0,0x1f80);
  iVar3 = Ram00006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
     ((uVar11 = Ram00006808, 0xb < uVar11 &&
      ((uVar11 = Ram00006808, 0xc3 < uVar11 &&
       (pcVar1 = (code *)UINT_000068c0, pcVar1 != (code *)0x0)))))) {
    outEntryCount = &local_24;
    uVar11 = (*pcVar1)(&local_238c,0x10,outEntryCount);
    uVar7 = (undefined1)((uint)outEntryCount >> 0x18);
    if (uVar11 != 0) {
      local_12c = local_12c & 0xffffff00;
      recovered_10015400((char *)&local_12c,0x20,local_24);
      pcVar17 = " volume";
      if (local_24 != 1) {
        pcVar17 = " volumes";
      }
      uVar11 = strlen((char *)&local_12c);
      if (uVar11 < 0x20) {
        if (uVar11 != 0x1f) {
          cVar14 = *pcVar17;
          uVar21 = uVar11;
          while (uVar11 = uVar21, cVar14 != '\0') {
            pcVar17 = pcVar17 + 1;
            *(char *)((int)&local_12c + uVar21) = cVar14;
            uVar11 = uVar21 + 1;
            if (0x1d < uVar21) break;
            uVar21 = uVar11;
            cVar14 = *pcVar17;
          }
        }
        *(undefined1 *)((int)&local_12c + uVar11) = 0;
      }
      pcVar17 = local_1c;
      local_44 = local_24;
      if (0xf < local_24) {
        local_44 = 0x10;
      }
      if (local_24 == 0) {
        uVar11 = 0;
        uVar5 = 0;
      }
      else {
        local_34 = uVar5;
        uVar21 = 0;
        local_3c = 0;
        pcVar9 = (char *)0x0;
        pcVar8 = acStack_238b;
        uVar11 = 0;
        do {
          bVar24 = CARRY4((uint)pcVar9,auStack_21a8[uVar21 * 0x7e]);
          pcVar9 = pcVar9 + auStack_21a8[uVar21 * 0x7e];
          local_3c = local_3c + bVar24;
          bVar24 = uVar11 == 0;
          uVar11 = 1;
          if (bVar24) {
            uVar11 = 0;
            local_40 = pcVar9;
            if (auStack_21a8[uVar21 * 0x7e + 3] == uVar5) {
              cVar14 = local_23ec[uVar21 * 0x1f8 + 0x60];
              if (cVar14 != '\0') {
                uVar23 = 0;
                do {
                  uVar11 = uVar23 + 1;
                  local_38c[uVar23] = cVar14;
                  if (0x5e < uVar11) break;
                  cVar14 = pcVar8[uVar23];
                  uVar23 = uVar11;
                } while (cVar14 != '\0');
              }
              local_38c[uVar11] = '\0';
              uVar11 = 1;
            }
          }
          uVar21 = uVar21 + 1;
          pcVar8 = pcVar8 + 0x1f8;
        } while (uVar21 != local_44);
        uVar5 = local_3c * 0x200 | (uint)pcVar9 >> 0x17;
        uVar11 = (int)pcVar9 * 0x200;
      }
      recovered_10015bb0(uVar11,uVar5,local_2fc,0x20);
    }
  }
  uVar5 = local_30;
  pcVar8 = local_38;
  iVar3 = local_48;
  (*(uint32_t *)&local_238c) = 0xfcfcfc;
  uVar11 = *(uint *)(pcVar17 + 8);
  if (uVar11 == 0xffffffff) {
    uVar11 = (*(uint32_t *)(pf_module_state+0x12ecU));
    if ((*(uint32_t *)(pf_module_state+0x12ecU)) < 4) goto LAB_100128e9;
LAB_100128f1:
    bVar6 = ~pcVar17[5];
  }
  else {
    if (3 < uVar11) goto LAB_100128f1;
LAB_100128e9:
    if (uVar11 != 0) goto LAB_100128f1;
    bVar6 = 0xff;
  }
  uVar25 = CONCAT22(CONCAT11(uVar7,0xfc),0xfcfc);
  recovered_1000f370(local_30,(int)local_38,local_48,*(int *)(pcVar17 + 100) + -0x34,(uint3)uVar25,
                     bVar6);
  (*(uint32_t *)&local_238c) = 0xb8b8b8;
  uVar21 = CONCAT13((char)((uint)uVar25 >> 0x18),0xb8b8b8);
  recovered_1000efc0(uVar5,(int)pcVar8,iVar3,*(int *)(local_1c + 100) + -0x34,uVar21);
  uVar11 = local_14;
  pcVar17 = local_18;
  if (local_2c == (int *)0x0) {
    iVar3 = (int)local_18 + 0x2e;
    iVar18 = local_14 + 0x3c;
    (*(uint32_t *)&local_238c) = 0xececec;
    uVar25 = CONCAT22(CONCAT11((char)(uVar21 >> 0x18),0xec),0xecec);
    recovered_1000f370(iVar3,iVar18,0x36,0x36,(uint3)uVar25,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    pcVar17 = local_18;
    (*(uint32_t *)&local_238c) = 0x808080;
    uVar5 = CONCAT13((char)((uint)uVar25 >> 0x18),0x808080);
    recovered_1000efc0(iVar3,iVar18,0x36,0x36,uVar5);
    uVar7 = (undefined1)(uVar5 >> 0x18);
  }
  else {
    uVar7 = 0;
    recovered_1000e9f0(local_2c,(int)local_18 + 0x26,local_14 + 0x38,0x46,0x46);
  }
  (*(uint32_t *)&local_238c) = 0x141414;
  uVar5 = CONCAT13(uVar7,0x141414);
  recovered_1000ec70((int)pcVar17 + 0x82,uVar11 + 0x3a,"Polynya OS",0x1c,uVar5,2);
  (*(uint32_t *)&local_238c) = 0x484848;
  uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x484848);
  recovered_1000ec70((int)pcVar17 + 0x84,uVar11 + 0x56,local_408,0x26,uVar5,1);
  (*(uint32_t *)&local_238c) = 0x484848;
  uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x484848);
  recovered_1000ec70((int)pcVar17 + 0x84,uVar11 + 0x68,"Tundra desktop environment",0x26,uVar5,1);
  local_38 = *(char **)(local_1c + 0x58);
  local_30 = *(uint *)(local_1c + 0x5c);
  uVar7 = 0xe8;
  iVar3 = (int)local_38 + 0x82;
  iVar18 = local_30 + 0x86;
  if (*(int *)(local_1c + 0xb00) != 0) {
    uVar7 = 0xf6;
  }
  (*(uint32_t *)&local_238c) = CONCAT11(uVar7,uVar7);
  (*(uint32_t *)&local_238c) = CONCAT12(uVar7,(*(uint32_t *)&local_238c));
  PF_PART1(local_2c, 0) = 0x20;
  uVar7 = 0x20;
  if (*(int *)(local_1c + 0xb00) != 0) {
    uVar7 = 0x50;
  }
  uVar26 = (undefined1)(uVar5 >> 0x18);
  recovered_1000f370(iVar3,iVar18,0x4c,0x16,(*(uint32_t *)&local_238c),-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  (*(uint32_t *)&local_238c) = 0x969696;
  uVar11 = CONCAT13(uVar26,0x969696);
  recovered_1000efc0(iVar3,iVar18,0x4c,0x16,uVar11);
  uVar26 = (undefined1)(uVar11 >> 0x18);
  uVar11 = recovered_10015df0("Overview",0xffffffff);
  (*(uint32_t *)&local_238c) = CONCAT11(uVar7,uVar7);
  (*(uint32_t *)&local_238c) = CONCAT12(uVar7,(*(uint32_t *)&local_238c));
  uVar5 = CONCAT22(CONCAT11(uVar26,uVar7),(*(uint32_t *)&local_238c));
  recovered_1000ec70((int)(0x4c - uVar11) / 2 + 0x82 + (int)local_38,local_30 + 0x8e,"Overview",
                     0xffffffff,uVar5,1);
  local_30 = *(uint *)(local_1c + 0x58);
  iVar19 = *(int *)(local_1c + 0x5c);
  iVar3 = local_30 + 0xd6;
  iVar18 = iVar19 + 0x86;
  uVar7 = 0xe8;
  if (*(int *)(local_1c + 0xb00) != 1) {
    uVar7 = 0xf6;
  }
  (*(uint32_t *)&local_238c) = CONCAT11(uVar7,uVar7);
  (*(uint32_t *)&local_238c) = CONCAT12(uVar7,(*(uint32_t *)&local_238c));
  if (*(int *)(local_1c + 0xb00) != 1) {
    PF_PART1(local_2c, 0) = 0x50;
  }
  uVar7 = (undefined1)(uVar5 >> 0x18);
  recovered_1000f370(iVar3,iVar18,0x46,0x16,(*(uint32_t *)&local_238c),-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  (*(uint32_t *)&local_238c) = 0x969696;
  uVar11 = CONCAT13(uVar7,0x969696);
  recovered_1000efc0(iVar3,iVar18,0x46,0x16,uVar11);
  uVar7 = (undefined1)(uVar11 >> 0x18);
  uVar11 = recovered_10015df0("Drivers",0xffffffff);
  (*(uint32_t *)&local_238c) = CONCAT11(PF_PART1(local_2c, 0),PF_PART1(local_2c, 0));
  (*(uint32_t *)&local_238c) = CONCAT12(PF_PART1(local_2c, 0),(*(uint32_t *)&local_238c));
  uVar5 = CONCAT22(CONCAT11(uVar7,PF_PART1(local_2c, 0)),(*(uint32_t *)&local_238c));
  recovered_1000ec70((int)(0x46 - uVar11) / 2 + 0xd6 + local_30,iVar19 + 0x8e,"Drivers",0xffffffff,
                     uVar5,1);
  uVar11 = local_14;
  pcVar17 = local_18;
  iVar3 = (*(uint32_t *)(pf_module_state+0x12d4U));
  uVar7 = (undefined1)(uVar5 >> 0x18);
  if (*(int *)(local_1c + 0xb00) != 1) {
    iVar18 = (int)local_18 + 0x22;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= (int)local_18 + 0x22) {
      iVar18 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    local_1c = (char *)0x0;
    iVar19 = 0;
    if (-0x23 < (int)local_18) {
      iVar19 = iVar18;
    }
    iVar18 = local_14 + 0xa8;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(local_14 + 0xa8)) {
      iVar18 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    iVar12 = 0;
    if (-0xa9 < (int)local_14) {
      iVar12 = iVar18;
    }
    iVar18 = (int)local_18 + -0x22 + (int)local_28;
    iVar20 = iVar18;
    if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar18) {
      iVar20 = (*(uint32_t *)(pf_module_state+0x12d4U));
    }
    iVar10 = 0;
    if (-1 < iVar18) {
      iVar10 = iVar20;
    }
    iVar18 = local_14 + 0xa9;
    if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(local_14 + 0xa9)) {
      iVar18 = (*(uint32_t *)(pf_module_state+0x12d8U));
    }
    if (-0xaa < (int)local_14) {
      local_1c = (char *)iVar18;
    }
    local_2c = (int *)((int)local_28 + -0x12 + (int)local_18);
    local_28 = (char *)((int)local_28 + -0x10c + (int)local_18);
    if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar10 - iVar19 != 0 && iVar19 <= iVar10)) &&
       (iVar12 < (int)local_1c)) {
      puVar22 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + (iVar19 + iVar12 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
      do {
        puVar16 = puVar22;
        iVar18 = iVar10 - iVar19;
        do {
          *puVar16 = 0xffd6d6d6;
          puVar16 = puVar16 + 1;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
        iVar12 = iVar12 + 1;
        puVar22 = puVar22 + iVar3;
      } while ((char *)iVar12 != local_1c);
    }
    local_30 = (int)local_18 + 0x24;
    (*(uint32_t *)&local_238c) = 0x262626;
    uVar5 = CONCAT13(uVar7,0x262626);
    recovered_1000ec70(local_30,local_14 + 0xb4,"Processor",0xffffffff,uVar5,1);
    pcVar8 = (char *)((int)pcVar17 + 0x32);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    local_1c = pcVar8;
    recovered_1000ec70((int)pcVar8,uVar11 + 0xca,"Name",0x11,uVar5,1);
    local_38 = (char *)((int)pcVar17 + 0xb2);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_38,uVar11 + 0xca,local_23ec,0x30,uVar5,1);
    uVar11 = local_14;
    iVar3 = local_14 + 0xdc;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)pcVar8,iVar3,"Threads",0x11,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_38,iVar3,local_32c,0x30,uVar5,1);
    iVar3 = uVar11 + 0xfc;
    (*(uint32_t *)&local_238c) = 0x262626;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x262626);
    recovered_1000ec70(local_30,iVar3,"Software",0xffffffff,uVar5,1);
    pcVar17 = local_28;
    (*(uint32_t *)&local_238c) = 0x262626;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x262626);
    recovered_1000ec70((int)local_28,iVar3,"Memory",0xffffffff,uVar5,1);
    iVar3 = uVar11 + 0x112;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,iVar3,"Kernel",0xd,uVar11,1);
    local_18 = (char *)((int)local_18 + 0x92);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_18,iVar3,local_408,0x18,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)pcVar17,iVar3,"Installed RAM",0xd,uVar11,1);
    pcVar8 = (char *)((int)local_2c + -0x9a);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar8,iVar3,(char *)&local_234,0x18,uVar5,1);
    uVar11 = local_14;
    iVar3 = local_14 + 0x124;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,iVar3,"Desktop",0xd,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_18,iVar3,"Tundra",0x18,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_28,iVar3,"Usable RAM",0xd,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar8,iVar3,(char *)&local_214,0x18,uVar5,1);
    pcVar17 = local_18;
    iVar3 = uVar11 + 0x136;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,iVar3,"Built on",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar17,iVar3,"4 July, 2026",0x18,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_28,iVar3,"Heap Free",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar21 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    local_2c = (int *)pcVar8;
    recovered_1000ec70((int)pcVar8,iVar3,(char *)&local_1f4,0x18,uVar21,1);
    uVar11 = local_14 + 0x148;
    uVar5 = local_4c;
    if ((int)local_4c < 0x19) {
      uVar5 = 0x18;
    }
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar21 = CONCAT13((char)(uVar21 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,uVar11,"Shell",0xd,uVar21,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar21 = CONCAT13((char)(uVar21 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar17,uVar11,(char *)&local_10c,uVar5,uVar21,1);
    uVar7 = (undefined1)(uVar21 >> 0x18);
    if (((char)local_20 != '\0') && (local_24c != 0 || local_248 != 0)) {
      uVar11 = local_14 + 0x15a;
      (*(uint32_t *)&local_238c) = 0x5c5c5c;
      uVar5 = CONCAT13(uVar7,0x5c5c5c);
      recovered_1000ec70((int)local_28,uVar11,"Unmapped RAM",0xd,uVar5,1);
      (*(uint32_t *)&local_238c) = 0x1c1c1c;
      uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
      recovered_1000ec70((int)local_2c,uVar11,(char *)&local_1d4,0x18,uVar5,1);
      uVar7 = (undefined1)(uVar5 >> 0x18);
    }
    (*(uint32_t *)&local_238c) = 0x262626;
    uVar5 = CONCAT13(uVar7,0x262626);
    local_14 = uVar11;
    recovered_1000ec70(local_30,uVar11 + 0x22,"Graphics and Storage",0xffffffff,uVar5,1);
    pcVar17 = local_28;
    (*(uint32_t *)&local_238c) = 0x262626;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x262626);
    recovered_1000ec70((int)local_28,uVar11 + 0x22,"CPU Cache",0xffffffff,uVar5,1);
    pcVar8 = local_1c;
    iVar3 = uVar11 + 0x38;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,iVar3,"Graphics",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_18,iVar3,(char *)&local_174,0x18,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)pcVar17,iVar3,"L1 Cache",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_2c,iVar3,(char *)&local_1b4,0x18,uVar11,1);
    iVar3 = local_14 + 0x4a;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)pcVar8,iVar3,"Startup Disk",0xd,uVar11,1);
    pcVar17 = local_18;
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_18,iVar3,local_38c,0x18,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_28,iVar3,"L2 Cache",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_2c,iVar3,(char *)&local_ac,0x18,uVar5,1);
    uVar11 = local_14;
    iVar3 = local_14 + 0x5c;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)pcVar8,iVar3,"Mounted",0xd,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar17,iVar3,(char *)&local_12c,0x18,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_28,iVar3,"L3 Cache",0xd,uVar5,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar5 = CONCAT13((char)(uVar5 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)local_2c,iVar3,(char *)&local_94,0x18,uVar5,1);
    iVar3 = uVar11 + 0x6e;
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_1c,iVar3,"Storage",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = 0x1c1c1c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    recovered_1000ec70((int)pcVar17,iVar3,local_2fc,0x18,uVar11,1);
    if (((byte)local_20 & local_260 != 0) != 1) {
      return;
    }
    (*(uint32_t *)&local_238c) = 0x5c5c5c;
    uVar11 = CONCAT13((char)(uVar11 >> 0x18),0x5c5c5c);
    recovered_1000ec70((int)local_28,iVar3,"L4 Cache",0xd,uVar11,1);
    (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x1c1c1c);
    pcVar17 = (char *)&local_7c;
    uVar5 = CONCAT13((char)(uVar11 >> 0x18),0x1c1c1c);
    uVar11 = 0x18;
    piVar2 = local_2c;
    goto LAB_10014d1f;
  }
  local_20 = *(int *)(local_1c + 0x58);
  local_14 = *(uint *)(local_1c + 0x5c);
  iVar18 = local_20 + 0x22;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= local_20 + 0x22) {
    iVar18 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  iVar19 = local_14 + 0xa8;
  local_18 = (char *)0x0;
  local_2c = (int *)0x0;
  if (-0x23 < local_20) {
    local_2c = (int *)iVar18;
  }
  iVar18 = iVar19;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= iVar19) {
    iVar18 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  local_28 = *(char **)(local_1c + 0x60);
  iVar12 = 0;
  if (-0xa9 < (int)local_14) {
    iVar12 = iVar18;
  }
  iVar18 = (int)local_28 + -0x22 + local_20;
  iVar20 = iVar18;
  if ((*(uint32_t *)(pf_module_state+0x12d4U)) <= iVar18) {
    iVar20 = (*(uint32_t *)(pf_module_state+0x12d4U));
  }
  iVar10 = 0;
  if (-1 < iVar18) {
    iVar10 = iVar20;
  }
  iVar18 = local_14 + 0xa9;
  if ((*(uint32_t *)(pf_module_state+0x12d8U)) <= (int)(local_14 + 0xa9)) {
    iVar18 = (*(uint32_t *)(pf_module_state+0x12d8U));
  }
  if (-2 < iVar19) {
    local_18 = (char *)iVar18;
  }
  iVar18 = (int)local_28 + -0x44;
  if ((((*(uint32_t *)(pf_module_state+0x1490U)) != 0) && (iVar10 - (int)local_2c != 0 && (int)local_2c <= iVar10)) &&
     (iVar12 < (int)local_18)) {
    puVar22 = (undefined4 *)((*(uint32_t *)(pf_module_state+0x1490U)) + ((int)local_2c + iVar12 * (*(uint32_t *)(pf_module_state+0x12d4U))) * 4);
    do {
      puVar16 = puVar22;
      iVar18 = iVar10 - (int)local_2c;
      do {
        *puVar16 = 0xffd6d6d6;
        puVar16 = puVar16 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      iVar12 = iVar12 + 1;
      puVar22 = puVar22 + iVar3;
    } while ((char *)iVar12 != local_18);
    local_20 = *(int *)(local_1c + 0x58);
    local_14 = *(uint *)(local_1c + 0x5c);
    local_28 = *(char **)(local_1c + 0x60);
    iVar18 = (int)local_28 + -0x44;
  }
  iVar19 = local_20 + 0x22;
  iVar3 = local_14 + 0xb4;
  (*(uint32_t *)&local_238c) = 0xfafafa;
  uVar25 = CONCAT22(CONCAT11(uVar7,0xfa),0xfafa);
  recovered_1000f370(iVar19,iVar3,iVar18,0x2e,(uint3)uVar25,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x949494);
  uVar11 = CONCAT13((char)((uint)uVar25 >> 0x18),0x949494);
  recovered_1000efc0(iVar19,iVar3,iVar18,0x2e,uVar11);
  uVar7 = (undefined1)(uVar11 >> 0x18);
  (*(uint32_t *)&local_238c) = 0x49564544;
  local_2388 = 0x3a534543;
  local_2384 = CONCAT22(PF_PART2(local_2384, 2),0x20);
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x627cU)));
  uVar4 = strlen(&local_238c);
  if (uVar4 < 0xa0) {
    iVar3 = 0x9f;
    if (uVar4 != 0x9f) {
      iVar3 = uVar4 + 1;
      local_23ec[uVar4 + 0x60] = '/';
    }
    local_23ec[iVar3 + 0x60] = '\0';
  }
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6280U)));
  pcVar17 = local_28;
  local_20 = local_20 + 0x2a;
  local_2c = (int *)(local_14 + 0xbf);
  local_18 = (char *)((int)local_28 - 0x54);
  uVar5 = recovered_10015df0("W",0xffffffff);
  uVar11 = 1;
  if (0x54 < (int)pcVar17) {
    uVar21 = uVar5;
    if ((int)uVar5 < 2) {
      uVar21 = 1;
    }
    if ((int)uVar5 <= (int)local_18) {
      uVar11 = (uint)local_18 / uVar21;
    }
  }
  PF_PART3(local_24, 0) = 0x282828;
  uVar5 = CONCAT13(uVar7,0x282828);
  recovered_1000ec70(local_20,(int)local_2c,&local_238c,uVar11,uVar5,1);
  uVar7 = (undefined1)(uVar5 >> 0x18);
  (*(uint32_t *)&local_238c) = 0x4954414e;
  local_2388 = 0x204556;
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6284U)));
  uVar4 = strlen(&local_238c);
  if (uVar4 < 0xa0) {
    uVar11 = 0x9f;
    if (uVar4 != 0x9f) {
      cVar14 = ' ';
      pcVar17 = "  EFI/PREP ";
      do {
        local_23ec[uVar4 + 0x60] = cVar14;
        uVar11 = uVar4 + 1;
        if (0x9d < uVar4) break;
        cVar14 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        uVar4 = uVar11;
      } while (cVar14 != '\0');
    }
    local_23ec[uVar11 + 0x60] = '\0';
  }
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6288U)));
  uVar4 = strlen(&local_238c);
  if (uVar4 < 0xa0) {
    uVar11 = 0x9f;
    if (uVar4 != 0x9f) {
      cVar14 = ' ';
      pcVar17 = "  FREEBSD ";
      do {
        local_23ec[uVar4 + 0x60] = cVar14;
        uVar11 = uVar4 + 1;
        if (0x9d < uVar4) break;
        cVar14 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        uVar4 = uVar11;
      } while (cVar14 != '\0');
    }
    local_23ec[uVar11 + 0x60] = '\0';
  }
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x628cU)));
  uVar4 = strlen(&local_238c);
  if (uVar4 < 0xa0) {
    uVar11 = 0x9f;
    if (uVar4 != 0x9f) {
      cVar14 = ' ';
      pcVar17 = "  NO DRIVER ";
      do {
        local_23ec[uVar4 + 0x60] = cVar14;
        uVar11 = uVar4 + 1;
        if (0x9d < uVar4) break;
        cVar14 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        uVar4 = uVar11;
      } while (cVar14 != '\0');
    }
    local_23ec[uVar11 + 0x60] = '\0';
  }
  recovered_10015400(&local_238c,0xa0,(*(uint32_t *)(pf_module_state+0x6290U)));
  uVar5 = recovered_10015df0("W",0xffffffff);
  uVar11 = 1;
  if (0x54 < (int)local_28) {
    uVar21 = uVar5;
    if ((int)uVar5 < 2) {
      uVar21 = 1;
    }
    if ((int)uVar5 <= (int)local_18) {
      uVar11 = (uint)local_18 / uVar21;
    }
  }
  local_24 = CONCAT13(PF_PART1(local_24, 3),0x282828);
  uVar5 = CONCAT13(uVar7,0x282828);
  recovered_1000ec70(local_20,local_14 + 0xd1,&local_238c,uVar11,uVar5,1);
  local_20 = *(int *)(local_1c + 0x5c);
  iVar18 = *(int *)(local_1c + 0x60);
  iVar3 = local_20 + -0x92 + *(int *)(local_1c + 100);
  if (iVar3 <= local_20 + 0x114) {
    iVar3 = local_20 + 0x114;
  }
  local_38 = *(char **)(local_1c + 0x58);
  local_40 = (char *)(iVar18 + -0x46);
  local_4c = 1;
  if (0x18 < (int)local_40) {
    local_4c = iVar18 - 0x5e;
  }
  local_5c = ((iVar3 - local_20) + -0x102) / 0x12;
  local_44 = (int)local_38 + 0x36;
  if (local_4c < 0x169) {
    local_30 = (local_4c & 0xffff) / 3;
    local_2c = (int *)(local_44 + local_30);
LAB_10013efc:
    local_28 = (char *)((local_4c * 2 & 0xffff) * 0x5556 >> 0x10);
  }
  else {
    local_2c = (int *)((int)local_38 + 0xc4);
    local_28 = (char *)0x1b4;
    local_30 = 0x8e;
    if (local_4c < 0x209) goto LAB_10013efc;
  }
  local_48 = (iVar3 - local_20) + -0xee;
  uVar11 = local_5c;
  if ((int)local_5c < 2) {
    uVar11 = 1;
  }
  uVar21 = 1;
  if (0x25 < local_48) {
    uVar21 = uVar11;
  }
  uVar11 = 0;
  if (uVar21 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
    uVar11 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar21;
  }
  iVar19 = local_20 + 0xee;
  if ((int)uVar11 < 1) {
    uVar11 = 0;
  }
  iVar12 = (int)local_38 + 0x22;
  local_14 = iVar18 + -0x44;
  iVar3 = iVar3 - iVar19;
  if ((*(uint32_t *)(pf_module_state+0x627cU)) == 0) {
    local_1c[0xaf4] = '\0';
    local_1c[0xaf5] = '\0';
    local_1c[0xaf6] = '\0';
    local_1c[0xaf7] = '\0';
    local_1c[0xaf8] = '\0';
    local_1c[0xaf9] = '\0';
    local_1c[0xafa] = '\0';
    local_1c[0xafb] = '\0';
    local_1c[0xafc] = '\0';
  }
  else {
    if ((local_1c[0xafc] != '\x01') || ((*(uint32_t *)(pf_module_state+0x627cU)) <= *(uint *)(local_1c + 0xaf4))) {
      local_1c[0xaf4] = '\0';
      local_1c[0xaf5] = '\0';
      local_1c[0xaf6] = '\0';
      local_1c[0xaf7] = '\0';
      local_1c[0xafc] = '\x01';
    }
    if ((int)*(uint *)(local_1c + 0xaf8) < 0) {
      local_1c[0xaf8] = '\0';
      local_1c[0xaf9] = '\0';
      local_1c[0xafa] = '\0';
      local_1c[0xafb] = '\0';
    }
    else if (uVar11 < *(uint *)(local_1c + 0xaf8)) {
      *(uint *)(local_1c + 0xaf8) = uVar11;
    }
  }
  local_18 = (char *)(local_20 + 0xf4);
  (*(uint32_t *)&local_238c) = 0xffffff;
  uVar25 = CONCAT22(CONCAT11((char)(uVar5 >> 0x18),0xff),0xffff);
  local_3c = iVar3;
  local_34 = iVar12;
  recovered_1000f370(iVar12,iVar19,local_14,iVar3,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  (*(uint32_t *)&local_238c) = 0xaeaeae;
  uVar11 = CONCAT13((char)((uint)uVar25 >> 0x18),0xaeaeae);
  recovered_1000efc0(iVar12,iVar19,local_14,iVar3,uVar11);
  pcVar17 = local_38;
  local_50 = local_20 + 0xef;
  (*(uint32_t *)&local_238c) = 0xeeeeee;
  uVar25 = CONCAT22(CONCAT11((char)(uVar11 >> 0x18),0xee),0xeeee);
  recovered_1000f370((int)local_38 + 0x23,local_50,(int)local_40,0x12,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  uVar7 = (undefined1)((uint)uVar25 >> 0x18);
  local_3c = (int)pcVar17 + 0x39;
  uVar21 = recovered_10015df0("W",0xffffffff);
  pcVar17 = local_28;
  uVar11 = local_30;
  local_34 = 1;
  uVar5 = 1;
  if (10 < local_30) {
    uVar23 = uVar21;
    if ((int)uVar21 < 2) {
      uVar23 = 1;
    }
    if ((int)uVar21 <= (int)(local_30 - 10)) {
      uVar5 = (local_30 - 10) / uVar23;
    }
  }
  local_14 = local_44 + (int)local_28;
  (*(uint32_t *)&local_238c) = 0x262626;
  uVar21 = CONCAT13(uVar7,0x262626);
  recovered_1000ec70(local_3c,(int)local_18,"STATUS",uVar5,uVar21,1);
  uVar7 = (undefined1)(uVar21 >> 0x18);
  local_40 = (char *)((int)local_2c + 3);
  iVar3 = (int)pcVar17 - uVar11;
  local_58 = iVar3 - 10;
  uVar11 = recovered_10015df0("W",0xffffffff);
  pcVar17 = local_1c;
  if (10 < iVar3) {
    local_34 = 1;
    uVar5 = uVar11;
    if ((int)uVar11 < 2) {
      uVar5 = 1;
    }
    if ((int)uVar11 <= (int)local_58) {
      local_34 = local_58 / uVar5;
    }
  }
  (*(uint32_t *)&local_238c) = 0x262626;
  uVar11 = CONCAT13(uVar7,0x262626);
  local_64 = iVar3;
  recovered_1000ec70((int)local_40,(int)local_18,"DEVICE PATH",local_34,uVar11,1);
  uVar7 = (undefined1)(uVar11 >> 0x18);
  local_34 = local_14 + 3;
  iVar3 = local_4c - (int)local_28;
  local_54 = iVar3 - 8;
  uVar5 = recovered_10015df0("W",0xffffffff);
  uVar11 = 1;
  if (8 < iVar3) {
    uVar21 = uVar5;
    if ((int)uVar5 < 2) {
      uVar21 = 1;
    }
    if ((int)uVar5 <= (int)local_54) {
      uVar11 = local_54 / uVar21;
    }
    pcVar17 = local_1c;
  }
  (*(uint32_t *)&local_238c) = 0x262626;
  uVar21 = CONCAT13(uVar7,0x262626);
  local_60 = iVar3;
  recovered_1000ec70(local_34,(int)local_18,"SUMMARY",uVar11,uVar21,1);
  uVar11 = local_50;
  (*(uint32_t *)&local_238c) = 0xbcbcbc;
  uVar5 = 0;
  uVar25 = CONCAT22(CONCAT11((char)(uVar21 >> 0x18),0xbc),0xbcbc);
  recovered_1000f370((int)((int)local_2c + -2),local_50,1,0x12,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0xbcbcbc);
  uVar21 = CONCAT22(CONCAT11((char)((uint)uVar25 >> 0x18),0xbc),0xbcbc);
  recovered_1000f370(local_14 - 2,uVar11,1,0x12,(uint3)uVar21,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)))
  ;
  local_38 = (char *)((int)local_38 + 0x47);
  local_50 = local_30 - 0x16;
  iVar3 = local_20 + 0x106;
  do {
    iVar18 = (*(uint32_t *)&local_238c);
    uVar7 = (undefined1)(uVar21 >> 0x18);
    iVar19 = *(int *)(pcVar17 + 0xaf8) + uVar5;
    if ((iVar19 < 0) || ((int)(*(uint32_t *)(pf_module_state+0x627cU)) <= iVar19)) break;
    if ((pcVar17[0xafc] == '\x01') && (iVar19 == *(int *)(pcVar17 + 0xaf4))) {
      local_24 = CONCAT13(PF_PART1(local_24, 3),0xffffff);
      bVar6 = 0x65;
      uVar15 = 0xabee;
    }
    else {
      local_24 = CONCAT13(PF_PART1(local_24, 3),0x1e1e1e);
      bVar6 = -((uVar5 & 1) == 0);
      uVar15 = CONCAT11(bVar6,bVar6) | 0xf2fd;
      bVar6 = bVar6 | 0xeb;
    }
    (*(uint32_t *)&local_238c) = CONCAT11((char)(uVar15 >> 8),bVar6);
    acStack_238b[2] = SUB41(iVar18,3);
    (*(uint32_t *)&local_238c) = CONCAT12((char)uVar15,(*(uint32_t *)&local_238c));
    uVar25 = CONCAT22(CONCAT11(uVar7,(char)uVar15),(*(uint32_t *)&local_238c));
    local_28 = (char *)uVar5;
    recovered_1000f370(local_44,iVar3 + -5,local_4c,0x12,(uint3)uVar25,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    uVar7 = (undefined1)((uint)uVar25 >> 0x18);
    local_2c = (int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar19 * 0x571);
    local_18 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar19 * 0x571;
    recovered_100162d0(&local_238c,(int)local_2c);
    uVar25 = CONCAT22(CONCAT11(uVar7,acStack_238b[1]),(*(uint32_t *)&local_238c));
    recovered_1000f370(local_3c,iVar3 + -1,8,8,(uint3)uVar25,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    uVar7 = (undefined1)((uint)uVar25 >> 0x18);
    uVar5 = recovered_10015df0("W",0xffffffff);
    local_14 = 1;
    uVar11 = 1;
    if (0x16 < local_30) {
      uVar21 = uVar5;
      if ((int)uVar5 < 2) {
        uVar21 = 1;
      }
      if ((int)uVar5 <= (int)local_50) {
        uVar11 = local_50 / uVar21;
      }
    }
    uVar5 = CONCAT22(CONCAT11(uVar7,PF_PART1(local_24, 2)),(undefined2)local_24);
    local_20 = iVar3;
    recovered_1000ec70((int)local_38,iVar3,(char *)local_2c,uVar11,uVar5,1);
    uVar7 = (undefined1)(uVar5 >> 0x18);
    uVar11 = recovered_10015df0("W",0xffffffff);
    pcVar17 = local_1c;
    if (10 < local_64) {
      local_14 = 1;
      uVar5 = uVar11;
      if ((int)uVar11 < 2) {
        uVar5 = 1;
      }
      if ((int)uVar11 <= (int)local_58) {
        local_14 = local_58 / uVar5;
      }
    }
    uVar11 = CONCAT22(CONCAT11(uVar7,PF_PART1(local_24, 2)),(undefined2)local_24);
    recovered_1000ec70((int)local_40,iVar3,local_18,local_14,uVar11,1);
    uVar7 = (undefined1)(uVar11 >> 0x18);
    uVar5 = recovered_10015df0("W",0xffffffff);
    uVar11 = 1;
    if (8 < local_60) {
      uVar21 = uVar5;
      if ((int)uVar5 < 2) {
        uVar21 = 1;
      }
      if ((int)uVar5 <= (int)local_54) {
        uVar11 = local_54 / uVar21;
      }
      pcVar17 = local_1c;
      iVar3 = local_20;
    }
    uVar21 = CONCAT22(CONCAT11(uVar7,PF_PART1(local_24, 2)),(undefined2)local_24);
    recovered_1000ec70(local_34,iVar3,local_18 + 0x111,uVar11,uVar21,1);
    uVar7 = (undefined1)(uVar21 >> 0x18);
    if (local_48 < 0x26) break;
    uVar5 = (int)local_28 + 1;
    iVar3 = iVar3 + 0x12;
  } while ((int)uVar5 < (int)local_5c);
  iVar18 = *(int *)(pcVar17 + 0x5c);
  iVar3 = iVar18 + -0x92 + *(int *)(pcVar17 + 100);
  if (iVar3 <= iVar18 + 0x114) {
    iVar3 = iVar18 + 0x114;
  }
  iVar19 = *(int *)(pcVar17 + 0x58);
  iVar12 = -0x19;
  if (0x25 < (iVar3 - iVar18) + -0xee) {
    iVar12 = (iVar3 - iVar18) + -0x12d;
  }
  iVar3 = 0x12;
  if (0x13 < iVar12) {
    iVar3 = iVar12 + -2;
  }
  recovered_100163f0((int *)&local_238c,(int)local_1c);
  PF_PART3(local_24, 0) = 0xe4e4e4;
  uVar25 = CONCAT22(CONCAT11(uVar7,0xe4),0xe4e4);
  recovered_1000f370(iVar19 + 0x28,iVar18 + 0x106,0xc,iVar3,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  PF_PART3(local_24, 0) = 0xacacac;
  uVar5 = CONCAT13((char)((uint)uVar25 >> 0x18),0xacacac);
  recovered_1000efc0(iVar19 + 0x28,iVar18 + 0x106,0xc,iVar3,uVar5);
  uVar11 = local_2384;
  local_18 = (char *)(*(uint32_t *)&local_238c);
  local_20 = local_2388;
  local_14 = (*(uint32_t *)&local_238c) + 1;
  local_28 = (char *)(local_2388 + 1);
  PF_PART3(local_24, 0) = 0xbebebe;
  uVar25 = CONCAT22(CONCAT11((char)(uVar5 >> 0x18),0xbe),0xbebe);
  recovered_1000f370(local_14,(int)local_28,local_2384 - 2,local_2380 + -2,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  pcVar17 = local_1c;
  local_24 = CONCAT13(PF_PART1(local_24, 3),0x747474);
  recovered_1000efc0((int)local_18,local_20,uVar11,local_2380,
                     CONCAT13((char)((uint)uVar25 >> 0x18),0x747474));
  iVar18 = *(int *)(pcVar17 + 0x5c);
  iVar3 = iVar18 + -0x92 + *(int *)(pcVar17 + 100);
  if (iVar3 <= iVar18 + 0x114) {
    iVar3 = iVar18 + 0x114;
  }
  iVar19 = 0x12;
  if (0x25 < (iVar3 - iVar18) + -0xee) {
    iVar19 = (iVar3 - iVar18) + -0x102;
  }
  recovered_100154f0(*(int *)(pcVar17 + 0x58) + 0x28,iVar18 + 0xdb + iVar19,0xc,0xe,1);
  iVar18 = *(int *)(pcVar17 + 0x5c);
  iVar3 = iVar18 + -0x92 + *(int *)(pcVar17 + 100);
  if (iVar3 <= iVar18 + 0x114) {
    iVar3 = iVar18 + 0x114;
  }
  iVar19 = 0x12;
  if (0x25 < (iVar3 - iVar18) + -0xee) {
    iVar19 = (iVar3 - iVar18) + -0x102;
  }
  uVar7 = 0;
  recovered_100154f0(*(int *)(pcVar17 + 0x58) + 0x28,iVar18 + 0xeb + iVar19,0xc,0xe,0);
  local_18 = *(char **)(pcVar17 + 0x58);
  local_14 = *(uint *)(pcVar17 + 0x60);
  iVar18 = *(int *)(pcVar17 + 0x5c) + -0x86 + *(int *)(pcVar17 + 100);
  pcVar17 = local_18 + 0x22;
  iVar3 = local_14 - 0x44;
  (*(uint32_t *)&local_238c) = 0xe7e7e7;
  uVar25 = CONCAT22(CONCAT11(uVar7,0xe7),0xe7e7);
  recovered_1000f370((int)pcVar17,iVar18,iVar3,0x68,(uint3)uVar25,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  pcVar8 = local_1c;
  (*(uint32_t *)&local_238c) = 0xc3c3c3;
  uVar11 = CONCAT13((char)((uint)uVar25 >> 0x18),0xc3c3c3);
  recovered_1000efc0((int)pcVar17,iVar18,iVar3,0x68,uVar11);
  pcVar17 = local_18;
  uVar7 = (undefined1)(uVar11 >> 0x18);
  if ((pcVar8[0xafc] == '\x01') && (uVar11 = *(uint *)(pcVar8 + 0xaf4), uVar11 < (*(uint32_t *)(pf_module_state+0x627cU)))) {
    iVar3 = uVar11 * 0x571;
    local_28 = local_18 + 0x34;
    local_30 = iVar18 + 0x10;
    (*(uint32_t *)&local_238c) = 0x282828;
    uVar11 = CONCAT13(uVar7,0x282828);
    recovered_1000ec70((int)local_28,local_30,"DEVICE:",0xffffffff,uVar11,1);
    uVar7 = (undefined1)(uVar11 >> 0x18);
    local_2c = (int *)(pcVar17 + 0x80);
    uVar5 = recovered_10015df0("W",0xffffffff);
    piVar2 = local_2c;
    uVar11 = 1;
    if (0xb4 < (int)local_14) {
      uVar21 = uVar5;
      if ((int)uVar5 < 2) {
        uVar21 = 1;
      }
      if ((int)uVar5 <= (int)(local_14 - 0xb4)) {
        uVar11 = (local_14 - 0xb4) / uVar21;
      }
    }
    (*(uint32_t *)&local_238c) = 0x282828;
    uVar5 = CONCAT13(uVar7,0x282828);
    local_20 = iVar18;
    local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar3;
    recovered_1000ec70((int)local_2c,local_30,&(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)) + iVar3,uVar11,uVar5,1);
    local_30 = iVar18 + 0x26;
    (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x282828);
    uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x282828);
    recovered_1000ec70((int)local_28,local_30,"STATUS:",0xffffffff,uVar11,1);
    uVar7 = (undefined1)(uVar11 >> 0x18);
    recovered_100162d0(&local_238c,(int)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar3));
    uVar25 = CONCAT22(CONCAT11(uVar7,acStack_238b[1]),(*(uint32_t *)&local_238c));
    recovered_1000f370((int)piVar2,iVar18 + 0x29,8,8,(uint3)uVar25,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    pcVar8 = local_18;
    uVar11 = local_30;
    local_2c = (int *)(local_18 + 0x90);
    (*(uint32_t *)&local_238c) = 0x282828;
    uVar21 = CONCAT13((char)((uint)uVar25 >> 0x18),0x282828);
    recovered_1000ec70((int)local_2c,local_30,&(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U)) + iVar3,0x18,uVar21,1);
    uVar5 = local_14;
    iVar3 = local_20;
    pcVar17 = local_28;
    uVar7 = (undefined1)(uVar21 >> 0x18);
    if ((int)local_14 < 0x254) {
      local_30 = local_20 + 0x3c;
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar11 = CONCAT13(uVar7,0x282828);
      recovered_1000ec70((int)local_28,local_30,"SUMMARY:",0xffffffff,uVar11,1);
      uVar7 = (undefined1)(uVar11 >> 0x18);
      local_38 = local_1c + 0x111;
      local_18 = (char *)(uVar5 - 0xc4);
      uVar21 = recovered_10015df0("W",0xffffffff);
      piVar2 = local_2c;
      uVar11 = 1;
      if (0xc4 < (int)uVar5) {
        uVar5 = uVar21;
        if ((int)uVar21 < 2) {
          uVar5 = 1;
        }
        uVar11 = 1;
        if ((int)uVar21 <= (int)local_18) {
          uVar11 = (uint)local_18 / uVar5;
        }
        pcVar17 = local_28;
        iVar3 = local_20;
      }
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar5 = CONCAT13(uVar7,0x282828);
      recovered_1000ec70((int)local_2c,local_30,local_38,uVar11,uVar5,1);
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x282828);
      recovered_1000ec70((int)pcVar17,iVar3 + 0x52,"DETAILS:",0xffffffff,uVar11,1);
      uVar7 = (undefined1)(uVar11 >> 0x18);
      local_1c = local_1c + 0x171;
      uVar5 = recovered_10015df0("W",0xffffffff);
      uVar11 = 1;
      if (0xc4 < (int)local_14) {
        local_14 = uVar5;
        if ((int)uVar5 < 2) {
          local_14 = 1;
        }
        if ((int)uVar5 <= (int)local_18) {
          uVar11 = (uint)local_18 / local_14;
        }
        piVar2 = local_2c;
      }
      (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x282828);
      uVar5 = CONCAT13(uVar7,0x282828);
      iVar3 = iVar3 + 0x52;
      pcVar17 = local_1c;
    }
    else {
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar21 = CONCAT13(uVar7,0x282828);
      recovered_1000ec70((int)(pcVar8 + 0x150),uVar11,"SUMMARY:",0xffffffff,uVar21,1);
      uVar7 = (undefined1)(uVar21 >> 0x18);
      uVar23 = recovered_10015df0("W",0xffffffff);
      uVar21 = uVar23;
      if ((int)uVar23 < 2) {
        uVar21 = 1;
      }
      local_18 = local_18 + 0x1b0;
      uVar13 = 1;
      if ((int)uVar23 <= (int)(uVar5 - 0x1e4)) {
        uVar13 = (uVar5 - 0x1e4) / uVar21;
      }
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar5 = CONCAT13(uVar7,0x282828);
      recovered_1000ec70((int)local_18,uVar11,local_1c + 0x111,uVar13,uVar5,1);
      iVar3 = local_20 + 0x40;
      (*(uint32_t *)&local_238c) = 0x282828;
      uVar11 = CONCAT13((char)(uVar5 >> 0x18),0x282828);
      recovered_1000ec70((int)local_28,iVar3,"DETAILS:",0xffffffff,uVar11,1);
      uVar7 = (undefined1)(uVar11 >> 0x18);
      uVar23 = local_14 - 0xc4;
      uVar21 = recovered_10015df0("W",0xffffffff);
      uVar5 = uVar21;
      if ((int)uVar21 < 2) {
        uVar5 = 1;
      }
      local_1c = local_1c + 0x171;
      uVar11 = 1;
      if ((int)uVar21 <= (int)uVar23) {
        uVar11 = uVar23 / uVar5;
      }
      (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x282828);
      uVar5 = CONCAT13(uVar7,0x282828);
      piVar2 = local_2c;
      pcVar17 = local_1c;
    }
  }
  else {
    piVar2 = (int *)(local_18 + 0x34);
    local_20 = iVar18 + 0x10;
    uVar5 = recovered_10015df0("W",0xffffffff);
    uVar11 = 1;
    if (0x68 < (int)local_14) {
      uVar21 = uVar5;
      if ((int)uVar5 < 2) {
        uVar21 = 1;
      }
      local_18 = (char *)piVar2;
      if ((int)uVar5 <= (int)(local_14 - 0x68)) {
        uVar11 = (local_14 - 0x68) / uVar21;
      }
    }
    (*(uint32_t *)&local_238c) = CONCAT13(acStack_238b[2],0x282828);
    uVar5 = CONCAT13(uVar7,0x282828);
    pcVar17 = "NO DEVICES";
    iVar3 = local_20;
  }
LAB_10014d1f:
  recovered_1000ec70((int)piVar2,iVar3,pcVar17,uVar11,uVar5,1);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006930
#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f118
#undef DAT_0181f11c
#undef DAT_0181f2c0
#undef DAT_018240ac
#undef DAT_018240b0
#undef DAT_018240b4
#undef DAT_018240b8
#undef DAT_018240bc
#undef DAT_018240c0
#undef DAT_018241b5
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006930
#undef UINT_0000687c
#undef UINT_000068b8
#undef UINT_000068c0
#undef UINT_000068f8
#undef UNK_0181e901
#undef UNK_018240c4
#undef local_23ec
#undef local_238c
#undef local_2388
#undef local_2384
#undef local_2380
#undef local_2364
#undef local_2354
#undef local_408
#undef local_3c0
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_38c
#undef local_32c
#undef local_2fc
#undef local_2dc
#undef local_2d8
#undef local_278
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_234
#undef local_230
#undef local_22c
#undef local_214
#undef local_210
#undef local_20c
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_12c
#undef local_128
#undef local_124
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_94
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
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
#undef acStack_238b
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_21a8

#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#define local_24 (*(uint (*)[2])(frame + 44))
#define local_1c (*(int *)(frame + 52))
#define local_18 (*(undefined2 *)(frame + 56))
#define local_16 (*(undefined1 *)(frame + 58))
#define local_14 (*(undefined2 *)(frame + 60))
#define local_12 (*(undefined1 *)(frame + 62))
#define in_stack_ffffffcc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10014ef0(int in_ECX_00,int in_EDX,char *param_3,char param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint *in_ECX;
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar9;
  char *pcVar7;
  uint uVar8;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  undefined1 uVar15;
  undefined4 uVar14;

  uVar1 = local_24[0];
  uVar15 = (undefined1)((uint)in_stack_ffffffcc >> 0x18);
  local_18 = 0x7878;
  local_16 = 0x78;
  local_24[0] = CONCAT22(PF_PART2(local_24[0], 2),0x3f);
  uVar8 = local_24[0];
  PF_PART1(local_24[0], 3) = SUB41(uVar1,3);
  local_1c = in_ECX_00;
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      local_24[0] = 0x464552;
      goto LAB_10014f6d;
    }
    if (*(int *)(param_3 + 0x1ec) == 3) {
      local_18 = 0x85d2;
      local_16 = 0x2a;
      local_24[0] = CONCAT13(PF_PART1(local_24[0], 3),0x4448);
      uVar4 = 0xff;
      uVar2 = 0xe7;
      local_12 = 0xc4;
    }
    else {
      pcVar11 = param_3 + 0xf1;
      cVar5 = param_3[0xf1];
      if (cVar5 == '\0') {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar7 = (char *)0x0;
        pcVar10 = pcVar11;
        do {
          pcVar12 = pcVar10;
          if (cVar5 != '/') {
            pcVar12 = pcVar7;
          }
          cVar5 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar12;
        } while (cVar5 != '\0');
      }
      pcVar7 = pcVar11;
      if (pcVar12 != (char *)0x0) {
        pcVar7 = pcVar12 + 1;
      }
      cVar5 = *pcVar7;
      if (cVar5 == '\0') {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar12 = (char *)0x0;
        do {
          pcVar10 = pcVar7;
          if (cVar5 != '.') {
            pcVar10 = pcVar12;
          }
          pcVar12 = pcVar10;
          cVar5 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      }
      pcVar7 = "";
      if (pcVar12 != (char *)0x0) {
        pcVar7 = pcVar12;
      }
      iVar3 = 0;
      do {
        bVar6 = pcVar7[iVar3];
        bVar9 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar3];
        if ((bVar6 == 0) || (bVar9 == 0)) {
          if (bVar6 == bVar9) {
            local_18 = 0x3e84;
            local_16 = 99;
            local_24[0] = 0x505041;
            in_ECX = recovered_1000f6e0(pcVar11,*(uint **)(param_3 + 0x1f0));
            if (in_ECX != (uint *)0x0) {
              recovered_1000e9f0((int *)in_ECX,local_1c,in_EDX + -2,0x2a,0x24);
              return;
            }
            uVar4 = 0xff;
            uVar2 = 0xce;
            local_12 = 0xe6;
            goto LAB_10014f73;
          }
          break;
        }
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if ((byte)(bVar9 + 0xbf) < 0x1a) {
          bVar9 = bVar9 | 0x20;
        }
        iVar3 = iVar3 + 1;
      } while (bVar6 == bVar9);
      if ((*(int *)(param_3 + 0x1ec) == 2) || ((param_3[0x1e8] & 2U) != 0)) {
        local_18 = 0x823e;
        local_16 = 0xcc;
        local_24[0] = uVar8 & 0xffffff00;
        uVar4 = 0xd7;
        uVar2 = 0xec;
        local_12 = 0xff;
      }
      else {
        cVar5 = *param_3;
        if (cVar5 == '\0') {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar12 = param_3;
          pcVar7 = (char *)0x0;
          do {
            pcVar11 = pcVar12;
            if (cVar5 != '/') {
              pcVar11 = pcVar7;
            }
            cVar5 = pcVar12[1];
            pcVar12 = pcVar12 + 1;
            pcVar7 = pcVar11;
          } while (cVar5 != '\0');
        }
        pcVar12 = param_3;
        if (pcVar11 != (char *)0x0) {
          pcVar12 = pcVar11 + 1;
        }
        cVar5 = *pcVar12;
        if (cVar5 == '\0') {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)0x0;
          do {
            pcVar11 = pcVar12;
            if (cVar5 != '.') {
              pcVar11 = pcVar7;
            }
            cVar5 = pcVar12[1];
            pcVar12 = pcVar12 + 1;
            pcVar7 = pcVar11;
          } while (cVar5 != '\0');
        }
        pcVar12 = "";
        if (pcVar11 != (char *)0x0) {
          pcVar12 = pcVar11;
        }
        local_12 = 0xff;
        local_24[0] = uVar8;
        if (*pcVar12 == '.') {
          uVar1 = (uint)CONCAT11(pcVar12[1],0xff);
          if (pcVar12[1] == '\0') {
            uVar8 = 0;
          }
          else {
            uVar13 = 0;
            do {
              uVar8 = uVar13 + 1;
              *(char *)((int)local_24 + uVar13) = (char)(uVar1 >> 8);
              if (6 < uVar8) break;
              iVar3 = uVar13 + 2;
              uVar1 = (uint)CONCAT11(pcVar12[iVar3],(char)uVar1);
              uVar13 = uVar8;
            } while (pcVar12[iVar3] != '\0');
          }
          local_12 = (undefined1)uVar1;
          *(undefined1 *)((int)local_24 + uVar8) = 0;
        }
        uVar2 = 0xff;
        uVar4 = 0xff;
      }
    }
  }
  else {
    local_24[0] = CONCAT13(PF_PART1(local_24[0], 3),0x5055);
LAB_10014f6d:
    local_16 = 0x4c;
    local_18 = 0x9c44;
    uVar2 = 0xf4;
    local_12 = 0xd1;
    uVar4 = 0xd1;
  }
LAB_10014f73:
  iVar3 = local_1c;
  local_14 = CONCAT11(uVar2,uVar4);
  pcVar11 = (char *)0x0;
  uVar14 = CONCAT22(CONCAT11(uVar15,local_12),local_14);
  recovered_1000f370(local_1c,in_EDX,0x2a,0x20,(uint3)uVar14,-((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  uVar1 = CONCAT22(CONCAT11((char)((uint)uVar14 >> 0x18),local_16),local_18);
  recovered_1000efc0(iVar3,in_EDX,0x2a,0x20,uVar1);
  uVar15 = (undefined1)(uVar1 >> 0x18);
  if (param_3 == (char *)0x0) {
LAB_1001513c:
    local_14 = 0x1414;
    local_12 = 0x14;
    recovered_1000ec70(local_1c + 7,in_EDX + 0xc,(char *)local_24,3,CONCAT13(uVar15,0x141414),1);
  }
  else {
    pcVar12 = param_3 + 0xf1;
    cVar5 = param_3[0xf1];
    if (cVar5 != '\0') {
      pcVar11 = (char *)0x0;
      pcVar7 = pcVar12;
      do {
        pcVar10 = pcVar7;
        if (cVar5 != '/') {
          pcVar10 = pcVar11;
        }
        pcVar11 = pcVar10;
        cVar5 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
    }
    if (pcVar11 != (char *)0x0) {
      pcVar12 = pcVar11 + 1;
    }
    cVar5 = *pcVar12;
    if (cVar5 == '\0') {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar7 = (char *)0x0;
      do {
        pcVar11 = pcVar12;
        if (cVar5 != '.') {
          pcVar11 = pcVar7;
        }
        cVar5 = pcVar12[1];
        pcVar12 = pcVar12 + 1;
        pcVar7 = pcVar11;
      } while (cVar5 != '\0');
    }
    pcVar12 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar12 = pcVar11;
    }
    iVar3 = 0;
    do {
      bVar6 = pcVar12[iVar3];
      bVar9 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar3];
      if ((bVar6 == 0) || (bVar9 == 0)) {
        if (bVar6 == bVar9 && param_4 == '\0') {
          iVar3 = local_1c + 8;
          local_14 = 0x84ec;
          local_12 = 0xb7;
          uVar14 = CONCAT22((short)(CONCAT13(uVar15,0xb70000) >> 0x10),0x84ec);
          recovered_1000f370(iVar3,in_EDX + 7,0x1a,0x12,(uint3)uVar14,
                             -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
          local_14 = 0x3f7a;
          local_12 = 0x5c;
          recovered_1000efc0(iVar3,in_EDX + 7,0x1a,0x12,
                             CONCAT13((char)((uint)uVar14 >> 0x18),0x5c3f7a));
          return;
        }
        break;
      }
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if ((byte)(bVar9 + 0xbf) < 0x1a) {
        bVar9 = bVar9 | 0x20;
      }
      iVar3 = iVar3 + 1;
    } while (bVar6 == bVar9);
    if (*(int *)(param_3 + 0x1ec) == 2) {
      if (param_4 != '\0') goto LAB_1001513c;
    }
    else if ((param_3[0x1e8] & 2U) == 0 || param_4 != '\0') goto LAB_1001513c;
    local_14 = 0xdfbe;
    local_12 = 0xfc;
    recovered_1000f370(local_1c + 6,in_EDX + 7,0x1e,6,
                       (uint3)CONCAT22((short)(CONCAT13(uVar15,0xfc0000) >> 0x10),0xdfbe),
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  }
  return;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef UNK_0181e96f
#undef local_24
#undef local_1c
#undef local_18
#undef local_16
#undef local_14
#undef local_12
#undef in_stack_ffffffcc

#define local_28 (*(byte (*)[12])(frame + 24))
#define local_1c (*(char * *)(frame + 36))
#define local_16 (*(byte *)(frame + 42))
#define local_15 (*(byte *)(frame + 43))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015400
 */

void recovered_10015400(char *in_ECX,uint in_EDX,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *text;
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;

  local_14 = in_EDX;
  if (param_3 == 0) {
    if ((in_ECX != (char *)0x0) && (uVar1 = strlen(in_ECX), uVar1 < local_14)) {
      if (uVar1 + 1 < local_14) {
        in_ECX[uVar1] = '0';
        in_ECX[uVar1 + 1] = '\0';
      }
      else {
        in_ECX[uVar1] = '\0';
      }
    }
  }
  else {
    local_1c = in_ECX;
    uVar3 = 0;
    do {
      local_28[uVar3] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      text = local_1c;
      uVar6 = uVar3 + 1;
      if (param_3 < 10) break;
      bVar7 = uVar3 < 0xb;
      param_3 = param_3 / 10;
      uVar3 = uVar6;
    } while (bVar7);
    do {
      bVar5 = local_28[uVar6 - 1];
      local_16 = bVar5;
      local_15 = 0;
      if ((text != (char *)0x0) && (uVar1 = strlen(text), uVar1 < local_14)) {
        if (uVar1 + 1 < local_14 && bVar5 != 0) {
          pbVar4 = &local_15;
          uVar2 = uVar1;
          do {
            text[uVar2] = bVar5;
            bVar5 = *pbVar4;
            uVar1 = uVar2 + 1;
            if (bVar5 == 0) break;
            uVar3 = uVar2 + 2;
            pbVar4 = pbVar4 + 1;
            uVar2 = uVar1;
          } while (uVar3 < local_14);
        }
        text[uVar1] = '\0';
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

#undef local_28
#undef local_1c
#undef local_16
#undef local_15
#undef local_14

#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#define in_stack_ffffffbc (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100154f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100154f0(int in_ECX,int in_EDX,int param_3,int param_4,byte param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;

  iVar1 = param_3 / 2 + in_ECX;
  iVar2 = param_4 / 2 + in_EDX;
  uVar6 = CONCAT22((short)(CONCAT13((char)((uint)in_stack_ffffffbc >> 0x18),0xee0000) >> 0x10),
                   0xeeee);
  recovered_1000f370(in_ECX,in_EDX,param_3,param_4,(uint3)uVar6,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  recovered_1000efc0(in_ECX,in_EDX,param_3,param_4,CONCAT13((char)((uint)uVar6 >> 0x18),0x969696));
  uVar5 = (uint)(param_5 ^ 1);
  recovered_1000f370(iVar1 + uVar5 * -3,iVar2 + -4 + uVar5 * 2,uVar5 * 6 + 1,1,0x464646,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  uVar3 = (uint)param_5;
  iVar4 = -uVar3 + 2;
  recovered_1000f370(iVar1 - iVar4,iVar2 + -3 + uVar5 * 2,-uVar3 + 3 + iVar4,1,0x464646,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  recovered_1000f370(iVar1 - (uVar3 + 1),iVar2 + -2 + uVar5 * 2,uVar3 * 2 + 3,1,0x464646,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  recovered_1000f370(iVar1 + uVar3 * -3,iVar2 + -1 + uVar5 * 2,uVar3 * 6 + 1,1,0x464646,
                     -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
  return;
}

#undef DAT_0181f118
#undef DAT_0181f11c
#undef in_stack_ffffffbc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_01823f88
#define DAT_01823f88 (*(uint8_t *)(0x1823f88U))
#undef DAT_01823f8c
#define DAT_01823f8c (*(uint8_t *)(0x1823f8cU))
#undef DAT_01823f90
#define DAT_01823f90 (*(uint8_t *)(0x1823f90U))
#undef DAT_01823f94
#define DAT_01823f94 (*(uint8_t *)(0x1823f94U))
#undef DAT_01823f98
#define DAT_01823f98 (*(uint8_t *)(0x1823f98U))
#undef DAT_01823f9c
#define DAT_01823f9c (*(uint8_t *)(0x1823f9cU))
#undef DAT_01823fa0
#define DAT_01823fa0 (*(uint8_t *)(0x1823fa0U))
#undef DAT_01823fa4
#define DAT_01823fa4 (*(uint8_t *)(0x1823fa4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
#define local_18 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10015750(uint in_ECX,uint in_EDX,uint param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;

  if (in_EDX == 0 || in_ECX == 0) {
    return;
  }
  if ((((*(uint32_t *)(pf_module_state+0x6160U)) == param_3 && ((*(uint32_t *)(pf_module_state+0x6174U)) == param_4 && (*(uint32_t *)(pf_module_state+0x6170U)) == param_3)) &&
      (((*(uint32_t *)(pf_module_state+0x616cU)) == in_EDX && (*(uint32_t *)(pf_module_state+0x6168U)) == in_ECX) &&
      ((*(uint32_t *)(pf_module_state+0x615cU)) != (void *)0x0 && (*(uint32_t *)(pf_module_state+0x6158U)) != (void *)0x0))) && (*(uint32_t *)(pf_module_state+0x6164U)) == param_4)
  {
    return;
  }
  if ((*(uint32_t *)(pf_module_state+0x6158U)) == (void *)0x0 || (*(uint32_t *)(pf_module_state+0x6160U)) != param_3) {
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar4 = Ram00006808, 0xb < uVar4)) &&
       (((uVar4 = Ram00006808, 0x57 < uVar4 &&
         (pcVar2 = (code *)UINT_00006854, pcVar2 != (code *)0x0)) &&
        (pvVar3 = (*pcVar2)((*(uint32_t *)(pf_module_state+0x6158U)),param_3 * 4), pvVar3 != (void *)0x0)))) {
      (*(uint32_t *)(pf_module_state+0x6160U)) = param_3;
      (*(uint32_t *)(pf_module_state+0x6158U)) = pvVar3;
      goto LAB_100157fb;
    }
LAB_10015991:
    if ((*(uint32_t *)(pf_module_state+0x6158U)) != (void *)0x0) {
LAB_10015995:
      iVar1 = Ram00006800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
         ((uVar4 = Ram00006808, 0xb < uVar4 &&
          ((uVar4 = Ram00006808, 0x53 < uVar4 &&
           (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)))))) {
        (*pcVar2)((*(uint32_t *)(pf_module_state+0x6158U)));
      }
      (*(uint32_t *)(pf_module_state+0x6158U)) = (void *)0x0;
    }
    if ((*(uint32_t *)(pf_module_state+0x615cU)) != (void *)0x0) {
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar4 = Ram00006808, 0xb < uVar4)) &&
         ((uVar4 = Ram00006808, 0x53 < uVar4 &&
          (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)))) {
        (*pcVar2)((*(uint32_t *)(pf_module_state+0x615cU)));
      }
      (*(uint32_t *)(pf_module_state+0x615cU)) = (void *)0x0;
    }
    (*(uint32_t *)(pf_module_state+0x6160U)) = 0;
    (*(uint32_t *)(pf_module_state+0x6164U)) = 0;
    in_ECX = 0;
    in_EDX = 0;
    param_3 = 0;
    param_4 = 0;
  }
  else {
LAB_100157fb:
    if (((*(uint32_t *)(pf_module_state+0x615cU)) == (void *)0x0) || ((*(uint32_t *)(pf_module_state+0x6164U)) != param_4)) {
      iVar1 = Ram00006800;
      if ((iVar1 != 0x50414d57) ||
         ((((iVar1 = Ram00006804, iVar1 == 0 || (uVar4 = Ram00006808, uVar4 < 0xc)) ||
           (uVar4 = Ram00006808, uVar4 < 0x58)) ||
          (pcVar2 = (code *)UINT_00006854, pcVar2 == (code *)0x0)))) goto LAB_10015995;
      local_18 = (*pcVar2)((*(uint32_t *)(pf_module_state+0x615cU)),param_4 * 4);
      if (local_18 == (void *)0x0) goto LAB_10015991;
      (*(uint32_t *)(pf_module_state+0x6164U)) = param_4;
    }
    else {
      local_18 = (*(uint32_t *)(pf_module_state+0x615cU));
    }
    pvVar3 = (*(uint32_t *)(pf_module_state+0x6158U));
    (*(uint32_t *)(pf_module_state+0x615cU)) = local_18;
    if (param_3 != 0) {
      uVar4 = 0;
      do {
        uVar5 = pf_app_udiv_full((ulonglong)uVar4 * (ulonglong)in_ECX,(ulonglong)param_3);
        *(int *)((int)pvVar3 + uVar4 * 4) = (int)uVar5;
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        uVar5 = pf_app_udiv_full((ulonglong)uVar4 * (ulonglong)in_EDX,(ulonglong)param_4);
        *(int *)((int)local_18 + uVar4 * 4) = (int)uVar5;
        uVar4 = uVar4 + 1;
      } while (param_4 != uVar4);
    }
  }
  (*(uint32_t *)(pf_module_state+0x6174U)) = param_4;
  (*(uint32_t *)(pf_module_state+0x6170U)) = param_3;
  (*(uint32_t *)(pf_module_state+0x616cU)) = in_EDX;
  (*(uint32_t *)(pf_module_state+0x6168U)) = in_ECX;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_01823f88
#undef DAT_01823f8c
#undef DAT_01823f90
#undef DAT_01823f94
#undef DAT_01823f98
#undef DAT_01823f9c
#undef DAT_01823fa0
#undef DAT_01823fa4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006854
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015a70
 */

void recovered_10015a70(char *in_ECX,char *in_EDX,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;

  if (param_3 != (char *)0x0) {
    pcVar4 = "";
    if (in_ECX != (char *)0x0) {
      pcVar4 = in_ECX;
    }
    cVar5 = *pcVar4;
    iVar7 = 0;
    if (1 < param_4 && cVar5 != '\0') {
      iVar6 = 0;
      do {
        param_3[iVar6] = cVar5;
        iVar7 = iVar6 + 1;
        if (param_4 <= iVar6 + 2U) break;
        cVar5 = pcVar4[iVar6 + 1];
        iVar6 = iVar7;
      } while (cVar5 != '\0');
    }
    param_3[iVar7] = '\0';
    uVar1 = strlen(param_3);
    if (uVar1 < param_4) {
      if (uVar1 + 1 < param_4) {
        param_3[uVar1] = ' ';
        uVar1 = uVar1 + 1;
      }
      param_3[uVar1] = '\0';
    }
    uVar2 = strlen(param_3);
    if (uVar2 < param_4) {
      pcVar4 = "";
      if (in_EDX != (char *)0x0) {
        pcVar4 = in_EDX;
      }
      cVar5 = *pcVar4;
      if (uVar2 + 1 < param_4 && cVar5 != '\0') {
        do {
          pcVar4 = pcVar4 + 1;
          param_3[uVar2] = cVar5;
          cVar5 = *pcVar4;
          uVar3 = uVar2 + 1;
          if (cVar5 == '\0') break;
          uVar1 = uVar2 + 2;
          uVar2 = uVar3;
        } while (uVar1 < param_4);
      }
      else {
        uVar3 = uVar2;
      }
      param_3[uVar3] = '\0';
    }
    uVar1 = strlen(param_3);
    if (uVar1 < param_4) {
      if (uVar1 + 1 < param_4) {
        param_3[uVar1] = ' ';
        uVar1 = uVar1 + 1;
      }
      param_3[uVar1] = '\0';
    }
    uVar2 = strlen(param_3);
    if (uVar2 < param_4) {
      if (uVar2 + 1 < param_4) {
        cVar5 = 'B';
        pcVar4 = "eta";
        uVar3 = uVar2;
        do {
          param_3[uVar3] = cVar5;
          cVar5 = *pcVar4;
          uVar2 = uVar3 + 1;
          if (cVar5 == '\0') break;
          uVar1 = uVar3 + 2;
          pcVar4 = pcVar4 + 1;
          uVar3 = uVar2;
        } while (uVar1 < param_4);
      }
      param_3[uVar2] = '\0';
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015bb0
 */

void recovered_10015bb0(uint in_ECX,uint in_EDX,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (in_EDX < (in_ECX < 0x40000000)) {
    if (in_EDX < (in_ECX < 0x100000)) {
      if (in_EDX < (in_ECX < 0x400)) {
        recovered_10016070(param_3,param_4,in_ECX,in_EDX);
        uVar4 = strlen(param_3);
        if (param_4 <= uVar4) {
          return;
        }
        if (uVar4 + 1 < param_4) {
          cVar6 = ' ';
          pcVar5 = "B";
          uVar3 = uVar4;
          do {
            param_3[uVar3] = cVar6;
            cVar6 = *pcVar5;
            uVar4 = uVar3 + 1;
            if (cVar6 == '\0') break;
            uVar2 = uVar3 + 2;
            pcVar5 = pcVar5 + 1;
            uVar3 = uVar4;
          } while (uVar2 < param_4);
        }
      }
      else {
        recovered_10016070(param_3,param_4,in_ECX >> 10 | in_EDX << 0x16,in_EDX >> 10);
        uVar4 = strlen(param_3);
        if (param_4 <= uVar4) {
          return;
        }
        if (uVar4 + 1 < param_4) {
          cVar6 = ' ';
          pcVar5 = "KB";
          uVar3 = uVar4;
          do {
            param_3[uVar3] = cVar6;
            cVar6 = *pcVar5;
            uVar4 = uVar3 + 1;
            if (cVar6 == '\0') break;
            uVar2 = uVar3 + 2;
            pcVar5 = pcVar5 + 1;
            uVar3 = uVar4;
          } while (uVar2 < param_4);
        }
      }
    }
    else {
      recovered_10016070(param_3,param_4,in_ECX >> 0x14 | in_EDX << 0xc,in_EDX >> 0x14);
      uVar4 = strlen(param_3);
      if (param_4 <= uVar4) {
        return;
      }
      if (uVar4 + 1 < param_4) {
        cVar6 = ' ';
        pcVar5 = "MB";
        uVar3 = uVar4;
        do {
          param_3[uVar3] = cVar6;
          cVar6 = *pcVar5;
          uVar4 = uVar3 + 1;
          if (cVar6 == '\0') break;
          uVar2 = uVar3 + 2;
          pcVar5 = pcVar5 + 1;
          uVar3 = uVar4;
        } while (uVar2 < param_4);
      }
    }
  }
  else {
    recovered_10016070(param_3,param_4,in_EDX << 2 | in_ECX >> 0x1e,in_EDX >> 0x1e);
    if ((-1 < (int)in_EDX &&
         (uint)(4 < (in_EDX << 1 | in_ECX >> 0x1f)) <= (uint)((int)in_EDX >> 0x1f)) &&
       (0x6666666 < (in_ECX & 0x3fffffff))) {
      lVar1 = (ulonglong)(in_ECX & 0x3fffffff) * 10;
      uVar2 = strlen(param_3);
      if (uVar2 < param_4) {
        if (uVar2 + 1 < param_4) {
          param_3[uVar2] = '.';
          uVar2 = uVar2 + 1;
        }
        param_3[uVar2] = '\0';
      }
      recovered_10016070(param_3,param_4,(int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e,
                         0);
    }
    uVar4 = strlen(param_3);
    if (param_4 <= uVar4) {
      return;
    }
    if (uVar4 + 1 < param_4) {
      cVar6 = ' ';
      pcVar5 = "GB";
      uVar3 = uVar4;
      do {
        param_3[uVar3] = cVar6;
        cVar6 = *pcVar5;
        uVar4 = uVar3 + 1;
        if (cVar6 == '\0') break;
        uVar2 = uVar3 + 2;
        pcVar5 = pcVar5 + 1;
        uVar3 = uVar4;
      } while (uVar2 < param_4);
    }
  }
  param_3[uVar4] = '\0';
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_01823f74
#define DAT_01823f74 (*(uint8_t *)(0x1823f74U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_28 (*(void * *)(frame + 200))
#define local_24 (*(int *)(frame + 204))
#define local_1c (*(uint *)(frame + 212))
#define dst (*(void ** *)(frame + 20))
#define local_c8 (*(void * *)(frame + 40))
#define local_c4 (*(int *)(frame + 44))
#define local_bc (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10015df0(char *in_ECX,uint in_EDX)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;

  if ((in_ECX == (char *)0x0) || ((*(uint32_t *)(pf_module_state+0x6144U)) == (void *)0x0)) {
    if (in_ECX == (char *)0x0) {
      return 0;
    }
  }
  else {
    cVar3 = *in_ECX;
    if (cVar3 == '\0') {
      return 0;
    }
    uVar4 = 0;
    do {
      if (in_EDX <= uVar4) {
        uVar5 = uVar4;
        break;
      }
      if (uVar4 == 0x9f) {
        uVar5 = 0x9f;
        break;
      }
      uVar5 = uVar4 + 1;
      *(char *)((int)&local_c8 + uVar4) = cVar3;
      cVar3 = in_ECX[uVar4 + 1];
      uVar4 = uVar5;
    } while (cVar3 != '\0');
    *(undefined1 *)((int)&local_c8 + uVar5) = 0;
    dst = &local_28;
    memset(dst,0,0x18);
    iVar1 = Ram00006800;
    if (((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
         (uVar4 = Ram00006808, 0xb < uVar4)) &&
        ((uVar4 = Ram00006808, 0x77 < uVar4 &&
         (pcVar2 = (code *)UINT_00006874, pcVar2 != (code *)0x0)))) &&
       (uVar4 = (*pcVar2)((*(uint32_t *)(pf_module_state+0x6144U)),(char *)&local_c8,0,0,0,0,dst), uVar4 != 0)) {
      uVar4 = local_1c;
      if (0x7ffffffe < local_1c) {
        uVar4 = 0x7fffffff;
      }
      if ((((local_24 == 0) && (local_28 != (void *)0x0)) &&
          ((iVar1 = Ram00006800, iVar1 == 0x50414d57 &&
           (((iVar1 = Ram00006804, iVar1 != 0 && (uVar5 = Ram00006808, 0xb < uVar5)) &&
            (uVar5 = Ram00006808, 0x53 < uVar5)))))) &&
         (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(local_28);
      }
      goto LAB_10016050;
    }
  }
  if (*in_ECX == '\0') {
    return 0;
  }
  if ((int)in_EDX < 0) {
    in_EDX = 0xffffffff;
  }
  memset(&local_c8,0,0x18);
  iVar1 = Ram00006800;
  if (iVar1 != 0x50414d57) {
    return 0;
  }
  iVar1 = Ram00006804;
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = Ram00006808;
  if (uVar4 < 0xc) {
    return 0;
  }
  uVar4 = Ram00006808;
  if (uVar4 < 0x17c) {
    return 0;
  }
  pcVar2 = (code *)UINT_00006978;
  if (pcVar2 == (code *)0x0) {
    return 0;
  }
  uVar4 = (*pcVar2)(in_ECX,in_EDX,1,0,&local_c8);
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = local_bc;
  if (0x7ffffffe < local_bc) {
    uVar4 = 0x7fffffff;
  }
  if ((((local_c4 == 0) && (local_c8 != (void *)0x0)) &&
      ((iVar1 = Ram00006800, iVar1 == 0x50414d57 &&
       ((iVar1 = Ram00006804, iVar1 != 0 && (uVar5 = Ram00006808, 0xb < uVar5)))))) &&
     ((uVar5 = Ram00006808, 0x53 < uVar5 && (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)(local_c8);
  }
  dst = &local_c8;
LAB_10016050:
  memset(dst,0,0x18);
  return uVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_01823f74
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006874
#undef UINT_00006978
#undef local_28
#undef local_24
#undef local_1c
#undef dst
#undef local_c8
#undef local_c4
#undef local_bc

#define local_28 (*(uint *)(frame + 56))
#define acStack_41 (*(char (*)[25])(frame + 31))
#define local_24 (*(char * *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_1c (*(uint *)(frame + 68))
#define local_16 (*(char *)(frame + 74))
#define local_15 (*(char *)(frame + 75))
#define local_14 (*(uint *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016070
 */

void recovered_10016070(char *in_ECX,uint in_EDX,uint param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  char *text;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;

  local_1c = in_EDX;
  if (param_3 == 0 && param_4 == 0) {
    if ((in_ECX != (char *)0x0) && (uVar3 = strlen(in_ECX), uVar3 < in_EDX)) {
      if (uVar3 + 1 < in_EDX) {
        in_ECX[uVar3] = '0';
        in_ECX[uVar3 + 1] = '\0';
      }
      else {
        in_ECX[uVar3] = '\0';
      }
    }
  }
  else {
    local_24 = in_ECX;
    local_14 = 0;
    do {
      uVar5 = local_14;
      local_20 = param_3;
      uVar6 = param_4 << 0x1f | param_3 >> 1;
      uVar11 = param_4 >> 1;
      uVar10 = (uVar6 + uVar11 + (uint)CARRY4(uVar6,uVar11)) % 5;
      uVar7 = uVar6 - uVar10;
      lVar1 = (ulonglong)uVar7 * 0xcccccccd;
      local_28 = (uint)lVar1;
      acStack_41[local_14 + 1] = (char)param_3 + (char)lVar1 * -10 | 0x30;
      uVar2 = local_1c;
      text = local_24;
      uVar5 = uVar5 + 1;
      if (param_4 < (local_20 < 10)) break;
      param_4 = (uVar11 - (uVar6 < uVar10)) * -0x33333333 +
                (int)((ulonglong)lVar1 >> 0x20) + uVar7 * -0x33333334;
      bVar12 = local_14 < 0x17;
      param_3 = local_28;
      local_14 = uVar5;
    } while (bVar12);
    do {
      local_14 = uVar5;
      cVar9 = acStack_41[uVar5];
      local_16 = cVar9;
      local_15 = '\0';
      if ((text != (char *)0x0) && (uVar3 = strlen(text), uVar3 < uVar2)) {
        if (uVar3 + 1 < uVar2 && cVar9 != '\0') {
          pcVar8 = &local_15;
          uVar4 = uVar3;
          do {
            text[uVar4] = cVar9;
            cVar9 = *pcVar8;
            uVar3 = uVar4 + 1;
            if (cVar9 == '\0') break;
            uVar5 = uVar4 + 2;
            pcVar8 = pcVar8 + 1;
            uVar4 = uVar3;
          } while (uVar5 < uVar2);
        }
        text[uVar3] = '\0';
      }
      uVar5 = local_14 - 1;
    } while (uVar5 != 0);
  }
  return;
}

#undef local_28
#undef acStack_41
#undef local_24
#undef local_20
#undef local_1c
#undef local_16
#undef local_15
#undef local_14

#define local_2c (*(char *)(frame + 20))
#define local_2b (*(char (*)[23])(frame + 21))
#define local_14 (*(char * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100161b0
 */

void recovered_100161b0(char *in_ECX,char *in_EDX,int param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char cVar6;

  if (param_3 != 0) {
    if (*in_ECX != '\0') {
      uVar1 = strlen(in_ECX);
      if (uVar1 < 0x40) {
        uVar5 = 0x3f;
        if (uVar1 != 0x3f) {
          cVar6 = ',';
          pcVar3 = " ";
          do {
            in_ECX[uVar1] = cVar6;
            uVar5 = uVar1 + 1;
            if (0x3d < uVar1) break;
            cVar6 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            uVar1 = uVar5;
          } while (cVar6 != '\0');
        }
        in_ECX[uVar5] = '\0';
        local_14 = in_EDX;
      }
    }
    recovered_10015bb0(param_3,0,&local_2c,0x18);
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x40) {
      pcVar3 = "";
      if (in_EDX != (char *)0x0) {
        pcVar3 = in_EDX;
      }
      cVar6 = *pcVar3;
      uVar2 = uVar1;
      if (uVar1 != 0x3f && cVar6 != '\0') {
        do {
          pcVar3 = pcVar3 + 1;
          in_ECX[uVar2] = cVar6;
          uVar1 = uVar2 + 1;
          if (0x3d < uVar2) break;
          cVar6 = *pcVar3;
          uVar2 = uVar1;
        } while (cVar6 != '\0');
      }
      in_ECX[uVar1] = '\0';
    }
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x40) {
      iVar4 = 0x3f;
      if (uVar1 != 0x3f) {
        iVar4 = uVar1 + 1;
        in_ECX[uVar1] = ' ';
      }
      in_ECX[iVar4] = '\0';
    }
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x40) {
      if (uVar1 != 0x3f && local_2c != '\0') {
        pcVar3 = local_2b;
        uVar2 = uVar1;
        do {
          in_ECX[uVar2] = local_2c;
          uVar1 = uVar2 + 1;
          if (0x3d < uVar2) break;
          local_2c = *pcVar3;
          pcVar3 = pcVar3 + 1;
          uVar2 = uVar1;
        } while (local_2c != '\0');
      }
      in_ECX[uVar1] = '\0';
    }
  }
  return;
}

#undef local_2c
#undef local_2b
#undef local_14

#undef UNK_0181ec59
#define UNK_0181ec59 (*(uint8_t *)(0x181ec59U))
#undef UNK_0181ec6b
#define UNK_0181ec6b (*(uint8_t *)(0x181ec6bU))
#undef UNK_0181ec7f
#define UNK_0181ec7f (*(uint8_t *)(0x181ec7fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100162d0
 */

void recovered_100162d0(undefined1 *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;

  if (in_EDX != 0) {
    iVar3 = -0xf;
    do {
      cVar5 = *(char *)(in_EDX + 0xf + iVar3);
      if (cVar5 == '\0') {
        if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe29U)))[iVar3] == '\0') {
          uVar4 = 0x78;
          uVar2 = 0x224e;
          goto LAB_100163bf;
        }
        break;
      }
      if (iVar3 == 0) break;
      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        cVar5 = cVar5 + -0x20;
      }
      cVar1 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe29U)))[iVar3];
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      iVar3 = iVar3 + 1;
    } while (cVar5 == cVar1);
    iVar3 = -0x11;
    do {
      cVar5 = *(char *)(in_EDX + 0x11 + iVar3);
      if (cVar5 == '\0') {
        if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe3bU)))[iVar3] == '\0') {
          uVar4 = 0x68;
          uVar2 = 0xa816;
          goto LAB_100163bf;
        }
        break;
      }
      if (iVar3 == 0) break;
      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        cVar5 = cVar5 + -0x20;
      }
      cVar1 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe3bU)))[iVar3];
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      iVar3 = iVar3 + 1;
    } while (cVar5 == cVar1);
    iVar3 = -0x13;
    do {
      cVar5 = *(char *)(in_EDX + 0x13 + iVar3);
      if (cVar5 == '\0') {
        if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe4fU)))[iVar3] == '\0') {
          uVar4 = 0x57;
          uVar2 = 0x3e9e;
          goto LAB_100163bf;
        }
        break;
      }
      if (iVar3 == 0) break;
      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        cVar5 = cVar5 + -0x20;
      }
      cVar1 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe4fU)))[iVar3];
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      iVar3 = iVar3 + 1;
    } while (cVar5 == cVar1);
  }
  uVar4 = 0x30;
  uVar2 = 0xb834;
LAB_100163bf:
  *in_ECX = (char)((ushort)uVar2 >> 8);
  in_ECX[1] = uVar4;
  in_ECX[2] = (char)uVar2;
  return;
}

#undef UNK_0181ec59
#undef UNK_0181ec6b
#undef UNK_0181ec7f

#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100163f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100163f0(int *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  if (in_EDX == 0) {
    iVar3 = -0x84;
    iVar1 = 0x16;
    iVar5 = 0xbc;
  }
  else {
    iVar3 = *(int *)(in_EDX + 0x5c) + -0x92 + *(int *)(in_EDX + 100);
    iVar5 = *(int *)(in_EDX + 0x5c) + 0xe2;
    iVar1 = *(int *)(in_EDX + 0x58) + 0x28;
  }
  if (iVar3 <= iVar5 + 0x32) {
    iVar3 = iVar5 + 0x32;
  }
  iVar7 = -0x19;
  if (0x25 < (iVar3 - iVar5) + -0xc) {
    iVar7 = (iVar3 - iVar5) + -0x4b;
  }
  iVar3 = 0x12;
  if (0x13 < iVar7) {
    iVar3 = iVar7 + -2;
  }
  *in_ECX = iVar1;
  in_ECX[1] = iVar5 + 0x24;
  in_ECX[2] = 0xc;
  if (in_EDX == 0) {
    iVar1 = -0x84;
    iVar7 = 0xbc;
  }
  else {
    iVar1 = *(int *)(in_EDX + 0x5c) + -0x92 + *(int *)(in_EDX + 100);
    iVar7 = *(int *)(in_EDX + 0x5c) + 0xe2;
  }
  if (iVar1 <= iVar7 + 0x32) {
    iVar1 = iVar7 + 0x32;
  }
  uVar4 = ((iVar1 - iVar7) + -0x20) / 0x12;
  uVar6 = 1;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  if (0x25 < (iVar1 - iVar7) + -0xc) {
    uVar6 = uVar4;
  }
  if (in_EDX == 0) {
    iVar1 = -0x84;
    iVar7 = 0xbc;
  }
  else {
    iVar1 = *(int *)(in_EDX + 0x5c) + -0x92 + *(int *)(in_EDX + 100);
    iVar7 = *(int *)(in_EDX + 0x5c) + 0xe2;
  }
  if (iVar1 <= iVar7 + 0x32) {
    iVar1 = iVar7 + 0x32;
  }
  uVar4 = ((iVar1 - iVar7) + -0x20) / 0x12;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  uVar2 = 1;
  if (0x25 < (iVar1 - iVar7) + -0xc) {
    uVar2 = uVar4;
  }
  iVar1 = 0;
  if (uVar2 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
    iVar1 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar2;
  }
  if ((uVar6 < (*(uint32_t *)(pf_module_state+0x627cU))) && (0 < iVar1)) {
    iVar7 = (int)(uVar6 * iVar3) / (int)(*(uint32_t *)(pf_module_state+0x627cU));
    if (iVar7 < 0x13) {
      iVar7 = 0x12;
    }
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
    in_ECX[1] = ((iVar3 - iVar7) * *(int *)(in_EDX + 0xaf8)) / iVar1 + iVar5 + 0x24;
    iVar3 = iVar7;
  }
  in_ECX[3] = iVar3;
  return;
}

#undef DAT_018240ac

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181e738
#define DAT_0181e738 (*(uint8_t *)(0x181e738U))
#undef DAT_0181f118
#define DAT_0181f118 (*(byte *)(0x181f118U))
#undef DAT_0181f11c
#define DAT_0181f11c (*(uint8_t *)(0x181f11cU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006884
#define UINT_00006884 (*(uint *)(0x6884U))
#undef UINT_000068cc
#define UINT_000068cc (*(uint *)(0x68ccU))
#undef UNK_0181e943
#define UNK_0181e943 (*(uint8_t *)(0x181e943U))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#define in_stack_ffff809c (*(undefined4 *)(frame + 28))
#define local_1c (*(byte * *)(frame + 32612))
#define entries (*(undefined2 * *)(frame + 28))
#define local_18 (*(uint * *)(frame + 32616))
#define local_14 (*(uint * *)(frame + 32620))
#define local_7f4c (*(undefined2 *)(frame + 52))
#define local_7f4a (*(undefined1 *)(frame + 54))
#define local_7e5b (*(byte (*)[251])(frame + 293))
#define local_7d60 (*(int (*)[7942])(frame + 544))
#define local_145 (*(char (*)[241])(frame + 32315))
#define local_54 (*(byte (*)[40])(frame + 32556))
#define local_2c (*(uint *)(frame + 32596))
#define local_28 (*(int *)(frame + 32600))
#define local_24 (*(uint *)(frame + 32604))
#define local_20 (*(int *)(frame + 32608))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100165a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100165a0(int in_ECX,int in_EDX_00,int param_3,int param_4)

{
  unsigned char frame[32672] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  ushort uVar6;
  char cVar11;
  int *in_EDX;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  byte *text;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  byte bVar20;
  byte *pbVar21;
  int iVar22;
  byte *pbVar23;
  undefined1 uVar25;
  undefined4 uVar24;

  uVar25 = (undefined1)((uint)in_stack_ffff809c >> 0x18);
  local_28 = in_ECX;
  if (param_4 == 0) goto LAB_10016b8c;
  iVar18 = *(int *)(param_4 + 4);
  if (iVar18 == 4 && *(char *)(param_4 + 8) != '\0') {
    puVar9 = (uint *)(param_4 + 8);
    local_14 = (uint *)recovered_10004ab0();
    local_24 = 0;
    cVar5 = *(char *)puVar9;
    if (cVar5 == '\0') {
LAB_100167f9:
      puVar9 = (uint *)0x0;
      in_ECX = local_28;
    }
    else {
      puVar13 = puVar9;
      puVar17 = (uint *)0x0;
      cVar11 = cVar5;
      do {
        puVar16 = puVar13;
        if (cVar11 != '/') {
          puVar16 = puVar17;
        }
        cVar11 = *(char *)((int)puVar13 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
        puVar17 = puVar16;
      } while (cVar11 != '\0');
      puVar13 = puVar9;
      if (puVar16 != (uint *)0x0) {
        puVar13 = (uint *)((int)puVar16 + 1);
      }
      uVar7 = (uint)CONCAT11((char)*puVar13,cVar5);
      if ((char)*puVar13 == '\0') {
        puVar17 = (uint *)0x0;
      }
      else {
        puVar16 = (uint *)0x0;
        do {
          puVar17 = puVar13;
          if ((char)(uVar7 >> 8) != '.') {
            puVar17 = puVar16;
          }
          pcVar15 = (char *)((int)puVar13 + 1);
          uVar7 = (uint)CONCAT11(*pcVar15,(char)uVar7);
          puVar13 = (uint *)((int)puVar13 + 1);
          puVar16 = puVar17;
        } while (*pcVar15 != '\0');
      }
      puVar13 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x908U));
      if (puVar17 != (uint *)0x0) {
        puVar13 = puVar17;
      }
      iVar18 = 0;
      do {
        bVar12 = *(byte *)((int)puVar13 + iVar18);
        uVar4 = (undefined1)uVar7;
        uVar7 = (uint)CONCAT11(bVar12,uVar4);
        bVar20 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar18];
        local_20 = in_EDX_00;
        local_18 = puVar9;
        if ((bVar12 == 0) || (bVar20 == 0)) {
          if (bVar12 == bVar20) {
            puVar9 = recovered_1000f6e0((char *)puVar9,local_14);
            in_ECX = local_28;
            goto joined_r0x10016688;
          }
          break;
        }
        if ((byte)(bVar12 + 0xbf) < 0x1a) {
          uVar7 = (uint)(ushort)(CONCAT11(bVar12,uVar4) | 0x2000);
        }
        if ((byte)(bVar20 + 0xbf) < 0x1a) {
          bVar20 = bVar20 | 0x20;
        }
        iVar18 = iVar18 + 1;
      } while ((byte)(uVar7 >> 8) == bVar20);
      uVar10 = 0;
      do {
        uVar14 = uVar10;
        local_145[uVar14] = (char)uVar7;
        if (0xef < uVar14 + 1) break;
        bVar12 = *(byte *)(param_4 + 9 + uVar14);
        uVar7 = (uint)bVar12;
        uVar10 = uVar14 + 1;
      } while (bVar12 != 0);
      local_145[uVar14 + 1] = '\0';
      uVar8 = strlen(local_145);
      if (uVar8 < 0xf1) {
        uVar7 = 0xf0;
        if (uVar8 != 0xf0) {
          cVar5 = '.';
          pcVar15 = "app";
          do {
            local_145[uVar8] = cVar5;
            uVar7 = uVar8 + 1;
            if (0xee < uVar8) break;
            cVar5 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            uVar8 = uVar7;
          } while (cVar5 != '\0');
        }
        local_145[uVar7] = '\0';
      }
      puVar9 = recovered_1000f6e0(local_145,local_14);
      in_ECX = local_28;
      if (puVar9 == (uint *)0x0) {
        iVar18 = Ram00006800;
        if ((((iVar18 == 0x50414d57) && (iVar18 = Ram00006804, iVar18 != 0)) &&
            (uVar7 = Ram00006808, 0xb < uVar7)) && (uVar7 = Ram00006808, 0xcf < uVar7)) {
          pcVar2 = (code *)UINT_000068cc;
          if (pcVar2 == (code *)0x0) goto LAB_100167f9;
          entries = &local_7f4c;
          uVar7 = (*pcVar2)((int)local_14,"",entries,0x40,&local_24);
        }
        else {
          iVar18 = Ram00006800;
          puVar9 = (uint *)0x0;
          if (((iVar18 != 0x50414d57) || (iVar18 = Ram00006804, iVar18 == 0)) ||
             ((uVar7 = Ram00006808, uVar7 < 0xc ||
              ((uVar7 = Ram00006808, uVar7 < 0x88 ||
               (pcVar2 = (code *)UINT_00006884, pcVar2 == (code *)0x0)))))) goto joined_r0x10016688;
          entries = (undefined2 *)0x0;
          uVar7 = (*pcVar2)("",&local_7f4c,0x40,&local_24);
        }
        uVar25 = (undefined1)((uint)entries >> 0x18);
        puVar9 = (uint *)0x0;
        in_ECX = local_28;
        if ((uVar7 != 0) && (local_24 != 0)) {
          uVar7 = 0;
          do {
            local_2c = uVar7;
            iVar18 = uVar7 * 0x1f8;
            text = local_7e5b + iVar18;
            local_1c = text;
            bVar12 = local_7e5b[iVar18];
            uVar10 = (uint)bVar12;
            pbVar21 = (byte *)0x0;
            if (bVar12 != 0) {
              pbVar21 = (byte *)0x0;
              uVar10 = (uint)CONCAT11(bVar12,bVar12);
              pbVar19 = text;
              do {
                pbVar23 = pbVar19;
                if ((char)(uVar10 >> 8) != '/') {
                  pbVar23 = pbVar21;
                }
                pbVar21 = pbVar23;
                pbVar23 = pbVar19 + 1;
                uVar10 = (uint)CONCAT11(*pbVar23,(char)uVar10);
                pbVar19 = pbVar19 + 1;
              } while (*pbVar23 != 0);
            }
            pbVar19 = text;
            if (pbVar21 != (byte *)0x0) {
              pbVar19 = pbVar21 + 1;
            }
            uVar10 = (uint)CONCAT11(*pbVar19,(char)uVar10);
            if (*pbVar19 == 0) {
              pbVar21 = (byte *)0x0;
            }
            else {
              pbVar21 = (byte *)0x0;
              do {
                pbVar23 = pbVar19;
                if ((char)(uVar10 >> 8) != '.') {
                  pbVar23 = pbVar21;
                }
                pbVar21 = pbVar23;
                pbVar23 = pbVar19 + 1;
                uVar10 = (uint)CONCAT11(*pbVar23,(char)uVar10);
                pbVar19 = pbVar19 + 1;
              } while (*pbVar23 != 0);
            }
            pbVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x908U));
            if (pbVar21 != (byte *)0x0) {
              pbVar19 = pbVar21;
            }
            iVar22 = 0;
LAB_10016989:
            bVar12 = pbVar19[iVar22];
            cVar5 = (char)uVar10;
            uVar6 = CONCAT11(bVar12,cVar5);
            uVar10 = (uint)uVar6;
            bVar20 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar22];
            if ((bVar12 != 0) && (bVar20 != 0)) goto code_r0x1001699b;
            if ((bVar12 != bVar20) ||
               ((local_7d60[uVar7 * 0x7e] != 2 && ((local_7e5b[iVar18 + 0xf7] & 2) == 0))))
            goto LAB_10016ac6;
            if (cVar5 == '\0') {
              pbVar21 = (byte *)0x0;
            }
            else {
              pbVar19 = text;
              pbVar23 = (byte *)0x0;
              do {
                pbVar21 = pbVar19;
                if ((char)uVar10 != '/') {
                  pbVar21 = pbVar23;
                }
                pbVar1 = pbVar19 + 1;
                uVar10 = (uint)*pbVar1;
                pbVar19 = pbVar19 + 1;
                pbVar23 = pbVar21;
              } while (*pbVar1 != 0);
            }
            if (pbVar21 != (byte *)0x0) {
              text = pbVar21 + 1;
            }
            uVar8 = strlen((char *)text);
            uVar25 = (undefined1)((uint)entries >> 0x18);
            if (uVar8 < 5) goto LAB_10016ac6;
            bVar12 = *text;
            iVar18 = 0;
            uVar7 = 0;
            if (bVar12 != 0) {
              uVar10 = 0;
              do {
                uVar7 = uVar10 + 1;
                local_54[uVar10] = bVar12;
                if (0x26 < uVar7) break;
                bVar12 = text[uVar10 + 1];
                uVar10 = uVar7;
              } while (bVar12 != 0);
            }
            local_54[uVar7] = 0;
            local_145[uVar8 + 0xed] = '\0';
            do {
              bVar12 = *(byte *)((int)local_18 + iVar18);
              bVar20 = local_54[iVar18];
              if ((bVar12 == 0) || (bVar20 == 0)) {
                if (bVar12 != bVar20) break;
LAB_10016d13:
                puVar9 = recovered_1000f6e0((char *)local_1c,local_14);
                in_ECX = local_28;
                in_EDX_00 = local_20;
                goto joined_r0x10016688;
              }
              if ((byte)(bVar12 + 0xbf) < 0x1a) {
                bVar12 = bVar12 | 0x20;
              }
              if ((byte)(bVar20 + 0xbf) < 0x1a) {
                bVar20 = bVar20 | 0x20;
              }
              iVar18 = iVar18 + 1;
            } while (bVar12 == bVar20);
            iVar18 = 0;
            while( true ) {
              bVar12 = *(byte *)((int)local_18 + iVar18);
              bVar20 = text[iVar18];
              if ((bVar12 == 0) || (bVar20 == 0)) break;
              if ((byte)(bVar12 + 0xbf) < 0x1a) {
                bVar12 = bVar12 | 0x20;
              }
              if ((byte)(bVar20 + 0xbf) < 0x1a) {
                bVar20 = bVar20 | 0x20;
              }
              iVar18 = iVar18 + 1;
              if (bVar12 != bVar20) goto LAB_10016ac6;
            }
            if (bVar12 == bVar20) goto LAB_10016d13;
LAB_10016ac6:
            uVar25 = (undefined1)((uint)entries >> 0x18);
            puVar9 = (uint *)0x0;
            in_ECX = local_28;
            in_EDX_00 = local_20;
          } while ((local_2c < 0x3f) && (uVar7 = local_2c + 1, uVar7 < local_24));
        }
      }
    }
joined_r0x10016688:
    if (puVar9 != (uint *)0x0) {
      recovered_1000e9f0((int *)puVar9,in_ECX + 8,in_EDX_00 + 4,param_3 - 0x10,0x1c);
      goto LAB_10016cc9;
    }
  }
  else {
    if (iVar18 == 0) {
      in_EDX = (int *)recovered_10004ab0();
      puVar9 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0xb13U));
LAB_10016681:
      puVar9 = (uint *)recovered_1000e6c0((int *)puVar9,in_EDX);
      goto joined_r0x10016688;
    }
    if (iVar18 == 5) {
      local_18 = (uint *)(param_4 + 0x30);
      bVar3 = recovered_1000fd50((char *)local_18);
      iVar18 = local_28;
      if (bVar3) {
        in_EDX = *(int **)(param_4 + 0x124);
        puVar9 = local_18;
        goto LAB_10016681;
      }
      cVar5 = (char)*local_18;
      if (cVar5 == '\0') {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar13 = local_18;
        puVar17 = (uint *)0x0;
        do {
          puVar9 = puVar13;
          if (cVar5 != '/') {
            puVar9 = puVar17;
          }
          cVar5 = *(char *)((int)puVar13 + 1);
          puVar13 = (uint *)((int)puVar13 + 1);
          puVar17 = puVar9;
        } while (cVar5 != '\0');
      }
      puVar13 = local_18;
      if (puVar9 != (uint *)0x0) {
        puVar13 = (uint *)((int)puVar9 + 1);
      }
      cVar5 = (char)*puVar13;
      if (cVar5 == '\0') {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar17 = (uint *)0x0;
        do {
          puVar9 = puVar13;
          if (cVar5 != '.') {
            puVar9 = puVar17;
          }
          cVar5 = *(char *)((int)puVar13 + 1);
          puVar13 = (uint *)((int)puVar13 + 1);
          puVar17 = puVar9;
        } while (cVar5 != '\0');
      }
      local_14 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x908U));
      if (puVar9 != (uint *)0x0) {
        local_14 = puVar9;
      }
      iVar22 = 0;
      do {
        bVar12 = *(byte *)((int)local_14 + iVar22);
        bVar20 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar22];
        in_ECX = local_28;
        if ((bVar12 == 0) || (bVar20 == 0)) {
          if (bVar12 == bVar20) {
            puVar9 = recovered_1000f6e0((char *)local_18,*(uint **)(param_4 + 0x124));
            in_ECX = iVar18;
            goto joined_r0x10016688;
          }
          break;
        }
        if ((byte)(bVar12 + 0xbf) < 0x1a) {
          bVar12 = bVar12 | 0x20;
        }
        if ((byte)(bVar20 + 0xbf) < 0x1a) {
          bVar20 = bVar20 | 0x20;
        }
        iVar22 = iVar22 + 1;
      } while (bVar12 == bVar20);
    }
  }
LAB_10016b8c:
  local_14 = (uint *)(in_ECX + 0xb);
  if (*(int *)(param_4 + 4) == 0) {
    iVar18 = in_EDX_00 + 9;
    local_7f4c = 0xecd7;
    local_7f4a = 0xff;
    uVar24 = CONCAT22((short)(CONCAT13(uVar25,0xff0000) >> 0x10),0xecd7);
    recovered_1000f370((int)local_14,iVar18,0x1c,0x15,(uint3)uVar24,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    local_7f4c = 0x823e;
    local_7f4a = 0xcc;
    uVar7 = CONCAT13((char)((uint)uVar24 >> 0x18),0xcc823e);
    iVar22 = 0x15;
  }
  else {
    iVar18 = in_EDX_00 + 8;
    local_7f4a = *(undefined1 *)(param_4 + 0x12a);
    local_7f4c = *(undefined2 *)(param_4 + 0x128);
    uVar24 = CONCAT22(CONCAT11(uVar25,local_7f4a),local_7f4c);
    recovered_1000f370((int)local_14,iVar18,0x1c,0x18,(uint3)uVar24,
                       -((*(uint32_t *)(pf_module_state+0x12ecU)) == 0) | ~(*(uint8_t *)((uintptr_t)pf_module_state+0x12e8U)));
    local_7f4c = 0x6060;
    local_7f4a = 0x60;
    uVar7 = CONCAT13((char)((uint)uVar24 >> 0x18),0x606060);
    iVar22 = 0x18;
  }
  recovered_1000efc0((int)local_14,iVar18,0x1c,iVar22,uVar7);
LAB_10016cc9:
  local_7f4c = 0x2d2d;
  local_7f4a = 0x2d;
  recovered_1000f280(local_28 + -6,in_EDX_00 + 0x22,0x3e,(char *)(param_4 + 8),0x2d2d,0x2d);
  return;
code_r0x1001699b:
  if ((byte)(bVar12 + 0xbf) < 0x1a) {
    uVar10 = uVar6 | 0x2000;
  }
  if ((byte)(bVar20 + 0xbf) < 0x1a) {
    bVar20 = bVar20 | 0x20;
  }
  iVar22 = iVar22 + 1;
  if ((byte)(uVar10 >> 8) != bVar20) goto LAB_10016ac6;
  goto LAB_10016989;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181e738
#undef DAT_0181f118
#undef DAT_0181f11c
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006884
#undef UINT_000068cc
#undef UNK_0181e943
#undef UNK_0181e96f
#undef in_stack_ffff809c
#undef local_1c
#undef entries
#undef local_18
#undef local_14
#undef local_7f4c
#undef local_7f4a
#undef local_7e5b
#undef local_7d60
#undef local_145
#undef local_54
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f110
#define DAT_0181f110 (*(uint8_t *)(0x181f110U))
#undef DAT_0181f2b8
#define DAT_0181f2b8 (*(uint8_t *)(0x181f2b8U))
#undef DAT_0181f2bc
#define DAT_0181f2bc (*(uint8_t *)(0x181f2bcU))
#undef DAT_0181f2c0
#define DAT_0181f2c0 (*(uint8_t *)(0x181f2c0U))
#undef DAT_0181f2dc
#define DAT_0181f2dc (*(uint8_t *)(0x181f2dcU))
#undef DAT_01823f78
#define DAT_01823f78 (*(uint8_t *)(0x1823f78U))
#undef DAT_01823f7c
#define DAT_01823f7c (*(uint8_t *)(0x1823f7cU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10016d30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;
  ulong size;

  size = (*(uint32_t *)(pf_module_state+0x1488U)) * (*(uint32_t *)(pf_module_state+0x148cU)) * 4;
  if (size != 0 && ((0 < (*(uint32_t *)(pf_module_state+0x148cU)) && 0 < (*(uint32_t *)(pf_module_state+0x1488U))) && (*(uint32_t *)(pf_module_state+0x1490U)) != 0)) {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (((*(uint32_t *)(pf_module_state+0x6148U)) != (void *)0x0) && ((*(uint32_t *)(pf_module_state+0x614cU)) == size)) {
      return uVar4;
    }
    if ((*(uint32_t *)(pf_module_state+0x6148U)) != (void *)0x0) {
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar2 = Ram00006808, 0xb < uVar2)) &&
         ((uVar2 = Ram00006808, 0x53 < uVar2 &&
          (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
        (*pcVar3)((*(uint32_t *)(pf_module_state+0x6148U)));
      }
      (*(uint32_t *)(pf_module_state+0x6148U)) = (void *)0x0;
    }
    (*(uint32_t *)(pf_module_state+0x614cU)) = 0;
    (*(uint8_t *)((uintptr_t)pf_module_state+0x14acU)) = 0;
    (*(uint32_t *)(pf_module_state+0x12e0U)) = 0xffffffff;
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x4f < uVar2 &&
         (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))))) {
      (*(uint32_t *)(pf_module_state+0x6148U)) = (*pcVar3)(size);
      if ((*(uint32_t *)(pf_module_state+0x6148U)) != (void *)0x0) {
        (*(uint32_t *)(pf_module_state+0x614cU)) = size;
        return uVar4;
      }
    }
    else {
      (*(uint32_t *)(pf_module_state+0x6148U)) = (void *)0x0;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f110
#undef DAT_0181f2b8
#undef DAT_0181f2bc
#undef DAT_0181f2c0
#undef DAT_0181f2dc
#undef DAT_01823f78
#undef DAT_01823f7c
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016e50
 */

uint recovered_10016e50(int in_ECX,uint in_EDX,byte param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = (uint)CONCAT11(param_3,param_4);
  if (in_ECX == 0) {
LAB_10016eed:
    uVar3 = uVar2 & 0xff | uVar2 & 0xffffff00 | (in_EDX & 0xff) << 0x10;
  }
  else {
    uVar2 = *(uint *)(in_ECX + 0x1c);
    if (((uVar2 == 0) || (uVar3 = *(uint *)(in_ECX + 0x24), uVar3 == 0)) ||
       (uVar1 = *(uint *)(in_ECX + 0x2c), uVar1 == 0)) {
      if (*(int *)(in_ECX + 0x18) == 0x10) {
        uVar3 = ((in_EDX & 0xff) * 0x1f + 0x7f) * 0x4041 >> 0xb & 0x3f800;
        uVar4 = ((uint)param_3 * 0x3f + 0x7f) * 0x8081 >> 0x12 & 0x1fe0;
        uVar2 = (uint)param_4;
      }
      else {
        uVar2 = (uint)CONCAT11(param_3,param_4);
        if (*(int *)(in_ECX + 0x18) != 0xf) goto LAB_10016eed;
        uVar3 = ((in_EDX & 0xff) * 0x1f + 0x7f) * 0x4041 >> 0xc & 0x1fc00;
        uVar4 = ((uint)param_3 * 0x1f + 0x7f) * 0x4041 >> 0x11 & 0xfe0;
        uVar2 = uVar2 & 0xff;
      }
      uVar3 = (uVar2 * 0x1f + 0x7f) / 0xff | uVar3;
    }
    else {
      uVar4 = in_EDX & 0xff;
      if (uVar2 < 8) {
        uVar4 = (((uVar4 << ((byte)uVar2 & 0x1f)) - uVar4) + 0x7f) / 0xff;
      }
      else {
        uVar4 = uVar4 << ((byte)uVar2 - 8 & 0x1f);
      }
      uVar2 = (uint)param_3;
      if (uVar3 < 8) {
        uVar2 = (((uVar2 << ((byte)uVar3 & 0x1f)) - uVar2) + 0x7f) / 0xff;
      }
      else {
        uVar2 = uVar2 << ((byte)uVar3 - 8 & 0x1f);
      }
      uVar3 = uVar2 << (*(byte *)(in_ECX + 0x28) & 0x1f) |
              uVar4 << (*(byte *)(in_ECX + 0x20) & 0x1f);
      uVar4 = (uint)param_4;
      if (uVar1 < 8) {
        uVar4 = (((uVar4 << ((byte)uVar1 & 0x1f)) - uVar4) + 0x7f) / 0xff;
      }
      else {
        uVar4 = uVar4 << ((byte)uVar1 - 8 & 0x1f);
      }
      uVar4 = uVar4 << (*(byte *)(in_ECX + 0x30) & 0x1f);
    }
    uVar3 = uVar3 | uVar4;
  }
  return uVar3;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_019293d0
#define DAT_019293d0 (*(uint8_t *)(0x19293d0U))
#undef DAT_019293d4
#define DAT_019293d4 (*(uint8_t *)(0x19293d4U))
#undef DAT_019293d5
#define DAT_019293d5 (*(uint8_t *)(0x19293d5U))
#undef DAT_019293d6
#define DAT_019293d6 (*(uint8_t *)(0x19293d6U))
#undef DAT_019293d7
#define DAT_019293d7 (*(uint8_t *)(0x19293d7U))
#undef DAT_019293d8
#define DAT_019293d8 (*(uint8_t *)(0x19293d8U))
#undef DAT_019293d9
#define DAT_019293d9 (*(uint8_t *)(0x19293d9U))
#undef DAT_019293da
#define DAT_019293da (*(uint8_t *)(0x19293daU))
#undef DAT_019293db
#define DAT_019293db (*(uint8_t *)(0x19293dbU))
#undef DAT_019293dc
#define DAT_019293dc (*(uint8_t *)(0x19293dcU))
#undef DAT_019293dd
#define DAT_019293dd (*(uint8_t *)(0x19293ddU))
#undef DAT_019293de
#define DAT_019293de (*(uint8_t *)(0x19293deU))
#undef DAT_019293df
#define DAT_019293df (*(uint8_t *)(0x19293dfU))
#undef DAT_019293e0
#define DAT_019293e0 (*(uint8_t *)(0x19293e0U))
#undef DAT_019293e1
#define DAT_019293e1 (*(uint8_t *)(0x19293e1U))
#undef DAT_019293e2
#define DAT_019293e2 (*(uint8_t *)(0x19293e2U))
#undef DAT_019293e3
#define DAT_019293e3 (*(uint8_t *)(0x19293e3U))
#undef DAT_019293e4
#define DAT_019293e4 (*(uint8_t *)(0x19293e4U))
#undef DAT_019293e5
#define DAT_019293e5 (*(uint8_t *)(0x19293e5U))
#undef DAT_019293e6
#define DAT_019293e6 (*(uint8_t *)(0x19293e6U))
#undef DAT_019293e7
#define DAT_019293e7 (*(uint8_t *)(0x19293e7U))
#undef DAT_019293e8
#define DAT_019293e8 (*(uint8_t *)(0x19293e8U))
#undef DAT_019293e9
#define DAT_019293e9 (*(uint8_t *)(0x19293e9U))
#undef DAT_019293ea
#define DAT_019293ea (*(uint8_t *)(0x19293eaU))
#undef DAT_019293eb
#define DAT_019293eb (*(uint8_t *)(0x19293ebU))
#undef DAT_019293ec
#define DAT_019293ec (*(uint8_t *)(0x19293ecU))
#undef DAT_019293ed
#define DAT_019293ed (*(uint8_t *)(0x19293edU))
#undef DAT_019293ee
#define DAT_019293ee (*(uint8_t *)(0x19293eeU))
#undef DAT_019293ef
#define DAT_019293ef (*(uint8_t *)(0x19293efU))
#undef DAT_019293f0
#define DAT_019293f0 (*(uint8_t *)(0x19293f0U))
#undef DAT_019293f1
#define DAT_019293f1 (*(uint8_t *)(0x19293f1U))
#undef DAT_019293f2
#define DAT_019293f2 (*(uint8_t *)(0x19293f2U))
#undef DAT_019293f3
#define DAT_019293f3 (*(uint8_t *)(0x19293f3U))
#undef DAT_019293f4
#define DAT_019293f4 (*(uint8_t *)(0x19293f4U))
#undef DAT_019293f5
#define DAT_019293f5 (*(uint8_t *)(0x19293f5U))
#undef DAT_019293f6
#define DAT_019293f6 (*(uint8_t *)(0x19293f6U))
#undef DAT_019293f7
#define DAT_019293f7 (*(uint8_t *)(0x19293f7U))
#undef DAT_019293f8
#define DAT_019293f8 (*(uint8_t *)(0x19293f8U))
#undef DAT_019293f9
#define DAT_019293f9 (*(uint8_t *)(0x19293f9U))
#undef DAT_019293fa
#define DAT_019293fa (*(uint8_t *)(0x19293faU))
#undef DAT_019293fb
#define DAT_019293fb (*(uint8_t *)(0x19293fbU))
#undef DAT_019293fc
#define DAT_019293fc (*(uint8_t *)(0x19293fcU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10016ff0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) &&
     (((uVar4 = Ram00006808, 0x2f < uVar4 && (pcVar2 = (code *)UINT_0000682c, pcVar2 != (code *)0x0)
       ) && (uVar4 = (*pcVar2)(), uVar4 != 0)))) {
    uVar5 = uVar4 >> 8 & 0xff;
    if (((uVar4 & 0x60000) == 0) && ((uVar4 & 0x800000ff) != 0x80000000 || uVar5 != 0)) {
      uVar6 = uVar4 & 0xff;
      bVar3 = (byte)uVar4;
      if (uVar6 - 0x20 < 0x5f) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          uVar4 = (uint)(bVar3 | 0x20);
        }
        (*(uint32_t *)(pf_module_state+0x10b5a0U)) = uVar6;
        switch((uintptr_t)(uVar4 & 0xff)) {
        case 0x20:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5ccU)) = 1;
          break;
        case 0x2d:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5caU)) = 1;
          break;
        case 0x2e:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5cbU)) = 1;
          break;
        case 0x30:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c0U)) = 1;
          break;
        case 0x31:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c1U)) = 1;
          break;
        case 0x32:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c2U)) = 1;
          break;
        case 0x33:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c3U)) = 1;
          break;
        case 0x34:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c4U)) = 1;
          break;
        case 0x35:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c5U)) = 1;
          break;
        case 0x36:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c6U)) = 1;
          break;
        case 0x37:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c7U)) = 1;
          break;
        case 0x38:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c8U)) = 1;
          break;
        case 0x39:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5c9U)) = 1;
          break;
        case 0x61:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a6U)) = 1;
          break;
        case 0x62:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a7U)) = 1;
          break;
        case 99:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a8U)) = 1;
          break;
        case 100:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a9U)) = 1;
          break;
        case 0x65:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aaU)) = 1;
          break;
        case 0x66:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5abU)) = 1;
          break;
        case 0x67:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5acU)) = 1;
          break;
        case 0x68:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5adU)) = 1;
          break;
        case 0x69:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5aeU)) = 1;
          break;
        case 0x6a:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5afU)) = 1;
          break;
        case 0x6b:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b0U)) = 1;
          break;
        case 0x6c:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b1U)) = 1;
          break;
        case 0x6d:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b2U)) = 1;
          break;
        case 0x6e:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b3U)) = 1;
          break;
        case 0x6f:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b4U)) = 1;
          break;
        case 0x70:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b5U)) = 1;
          break;
        case 0x71:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b6U)) = 1;
          break;
        case 0x72:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b7U)) = 1;
          break;
        case 0x73:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b8U)) = 1;
          break;
        case 0x74:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5b9U)) = 1;
          break;
        case 0x75:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5baU)) = 1;
          break;
        case 0x76:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bbU)) = 1;
          break;
        case 0x77:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bcU)) = 1;
          break;
        case 0x78:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bdU)) = 1;
          break;
        case 0x79:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5beU)) = 1;
          break;
        case 0x7a:
          (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5bfU)) = 1;
        }
      }
      else if (((uVar5 == 0xe) || (bVar3 == 0x7f)) || ((uVar4 & 0xff) == 8)) {
        (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a4U)) = 1;
      }
      else if (((uVar5 == 0x1c) || (bVar3 == 0xd)) || ((uVar4 & 0xff) == 10)) {
        (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5a5U)) = 1;
      }
      else if (uVar6 == 0x1b || uVar5 == 1) {
        *(undefined1 *)(in_ECX + 1) = 1;
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_019293d0
#undef DAT_019293d4
#undef DAT_019293d5
#undef DAT_019293d6
#undef DAT_019293d7
#undef DAT_019293d8
#undef DAT_019293d9
#undef DAT_019293da
#undef DAT_019293db
#undef DAT_019293dc
#undef DAT_019293dd
#undef DAT_019293de
#undef DAT_019293df
#undef DAT_019293e0
#undef DAT_019293e1
#undef DAT_019293e2
#undef DAT_019293e3
#undef DAT_019293e4
#undef DAT_019293e5
#undef DAT_019293e6
#undef DAT_019293e7
#undef DAT_019293e8
#undef DAT_019293e9
#undef DAT_019293ea
#undef DAT_019293eb
#undef DAT_019293ec
#undef DAT_019293ed
#undef DAT_019293ee
#undef DAT_019293ef
#undef DAT_019293f0
#undef DAT_019293f1
#undef DAT_019293f2
#undef DAT_019293f3
#undef DAT_019293f4
#undef DAT_019293f5
#undef DAT_019293f6
#undef DAT_019293f7
#undef DAT_019293f8
#undef DAT_019293f9
#undef DAT_019293fa
#undef DAT_019293fb
#undef DAT_019293fc
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000682c

#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f33c
#define DAT_0181f33c (*(uint8_t *)(0x181f33cU))
#undef DAT_0181f340
#define DAT_0181f340 (*(uint8_t *)(0x181f340U))
#undef DAT_0181f344
#define DAT_0181f344 (*(uint8_t *)(0x181f344U))
#undef DAT_0181f348
#define DAT_0181f348 (*(uint8_t *)(0x181f348U))
#undef DAT_0181f34c
#define DAT_0181f34c (*(uint8_t *)(0x181f34cU))
#undef DAT_0181f350
#define DAT_0181f350 (*(uint8_t *)(0x181f350U))
#undef DAT_0181f354
#define DAT_0181f354 (*(uint8_t *)(0x181f354U))
#undef DAT_0181f358
#define DAT_0181f358 (*(uint8_t *)(0x181f358U))
#undef DAT_0181f361
#define DAT_0181f361 (*(char *)(0x181f361U))
#undef DAT_0181f362
#define DAT_0181f362 (*(char *)(0x181f362U))
#undef DAT_0181f363
#define DAT_0181f363 (*(char *)(0x181f363U))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef DAT_018221f0
#define DAT_018221f0 (*(char *)(0x18221f0U))
#undef UNK_0181f044
#define UNK_0181f044 (*(uint8_t *)(0x181f044U))
#undef UNK_0181f048
#define UNK_0181f048 (*(uint8_t *)(0x181f048U))
#undef UNK_0181f550
#define UNK_0181f550 (*(uint8_t *)(0x181f550U))
#undef UNK_0181f554
#define UNK_0181f554 (*(uint8_t *)(0x181f554U))
#undef UNK_0181f598
#define UNK_0181f598 (*(uint8_t *)(0x181f598U))
#undef UNK_0181f5e0
#define UNK_0181f5e0 (*(uint8_t *)(0x181f5e0U))
#undef UNK_0181f5e4
#define UNK_0181f5e4 (*(uint8_t *)(0x181f5e4U))
#undef UNK_0181f5e8
#define UNK_0181f5e8 (*(uint8_t *)(0x181f5e8U))
#undef UNK_0181f5ec
#define UNK_0181f5ec (*(uint8_t *)(0x181f5ecU))
#define local_20 (*(char * *)(frame + 64))
#define local_1c (*(int *)(frame + 68))
#define local_18 (*(int *)(frame + 72))
#define local_11 (*(undefined1 *)(frame + 79))
#define local_4e (*(undefined4 *)(frame + 18))
#define local_4a (*(undefined4 *)(frame + 22))
#define local_46 (*(undefined2 *)(frame + 26))
#define local_44 (*(undefined1 *)(frame + 28))
#define local_24 (*(char * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100172d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100172d0(int in_ECX,undefined4 in_EDX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;

  uVar3 = (*(uint32_t *)(pf_module_state+0x1474U));
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)),0,0x59c);
  iVar5 = (*(uint32_t *)(pf_module_state+0x14a4U));
  (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = 1;
  (*(uint32_t *)(pf_module_state+0x1514U)) = 0x18;
  (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1520U)) = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1524U)) = 0xffffffff;
  (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
  if (0x13 < uVar3) {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = 1;
    (*(uint32_t *)(pf_module_state+0x1510U)) = in_EDX;
    (*(uint32_t *)(pf_module_state+0x1514U)) = 0x18;
    (*(uint32_t *)(pf_module_state+0x1518U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1520U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1524U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
    return;
  }
  iVar8 = uVar3 * 0xd9c;
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + iVar8) != '\x01') {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = 1;
    (*(uint32_t *)(pf_module_state+0x1510U)) = in_EDX;
    (*(uint32_t *)(pf_module_state+0x1514U)) = 0x18;
    (*(uint32_t *)(pf_module_state+0x1518U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1520U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1524U)) = 0xffffffff;
    (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
    return;
  }
  iVar7 = (*(uint32_t *)(pf_module_state+0x14a4U)) + iVar8;
  (*(uint32_t *)(pf_module_state+0x1518U)) = uVar3;
  iVar1 = *(int *)(iVar7 + 0x10);
  (*(uint32_t *)(pf_module_state+0x1510U)) = in_EDX;
  local_18 = in_ECX;
  if (iVar1 == 6) {
    if (in_ECX == 2) {
      pcVar4 = (char *)(iVar7 + 0xc5c);
      uVar9 = 2;
    }
    else if (in_ECX == 1) {
      pcVar4 = (char *)(iVar7 + 0xbbc);
      uVar9 = 1;
    }
    else {
      iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U));
      if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x15;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
        iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar7) = 0x736f6c43;
        *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar7) = 0x65;
        iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
          iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar7) = 0x16;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar7) = 0x736f6c43;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar7) = 0x6c412065;
          *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar7) = 0x6c;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          iVar7 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        }
      }
      (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar7;
      pcVar4 = (char *)(iVar5 + 0xcfc + iVar8);
      uVar9 = 3;
    }
    recovered_1001c030(pcVar4,uVar9);
    goto joined_r0x100178bc;
  }
  if (iVar1 == 1) {
    if (in_ECX != 3) {
      if (in_ECX == 1) {
        iVar5 = 0;
        local_18 = 1;
        do {
          local_4e = 0x6f707845;
          local_4a = 0x74207472;
          local_46 = 0x206f;
          local_44 = 0;
          pcVar4 = *(char **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1218U)) + iVar5 * 0xc);
          uVar3 = strlen((char *)&local_4e);
          if (uVar3 < 0x2a) {
            pcVar10 = "";
            if (pcVar4 != (char *)0x0) {
              pcVar10 = pcVar4;
            }
            if (uVar3 != 0x29) {
              cVar11 = *pcVar10;
              uVar12 = uVar3;
              while (uVar3 = uVar12, cVar11 != '\0') {
                pcVar10 = pcVar10 + 1;
                *(char *)((int)&local_4e + uVar12) = cVar11;
                uVar3 = uVar12 + 1;
                if (0x27 < uVar12) break;
                uVar12 = uVar3;
                cVar11 = *pcVar10;
              }
            }
            *(undefined1 *)((int)&local_4e + uVar3) = 0;
          }
          if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
            uVar9 = *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1214U)) + iVar5 * 0xc);
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x1b;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = uVar9;
            iVar8 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
            if ((char)local_4e == '\0') {
              uVar3 = 0;
            }
            else {
              uVar12 = 0;
              do {
                uVar3 = uVar12 + 1;
                (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar12 + iVar8] = (char)local_4e;
                if (0x28 < uVar3) break;
                PF_PART1(local_4e, 0) = *(char *)((int)&local_4e + uVar12 + 1);
                uVar12 = uVar3;
              } while ((char)local_4e != '\0');
            }
            (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar3 + iVar8] = 0;
            (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 4);
      }
      goto joined_r0x100178bc;
    }
    if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = 1;
      (*(uint32_t *)(pf_module_state+0x1514U)) = 0x18;
      (*(uint32_t *)(pf_module_state+0x1518U)) = uVar3;
      (*(uint32_t *)(pf_module_state+0x151cU)) = 0xffffffff;
      (*(uint32_t *)(pf_module_state+0x1520U)) = 0xffffffff;
      (*(uint32_t *)(pf_module_state+0x1524U)) = 0xffffffff;
      (*(uint32_t *)(pf_module_state+0x1528U)) = 0xffffffff;
      return;
    }
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x15;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x736f6c43;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x65;
    if (0x10 < (*(uint32_t *)(pf_module_state+0x1aa4U))) {
      (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
      return;
    }
    iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar5) = 0x16;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x736f6c43;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x6c412065;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar5) = 0x6c;
  }
  else {
    if (iVar1 != 0) goto joined_r0x100178bc;
    if ((*(char *)(iVar7 + 0xafc) == '\x01') &&
       (uVar12 = *(uint *)(iVar7 + 0xaf4), uVar12 < *(uint *)(iVar7 + 0xaf0))) {
      iVar5 = *(int *)(iVar7 + 0xaec);
      local_24 = (char *)(iVar5 + uVar12 * 0x1f8);
      bVar13 = iVar5 == 0;
      local_20 = (char *)(iVar5 + 0xf1 + uVar12 * 0x1f8);
      if (bVar13) {
        iVar5 = *(int *)(iVar7 + 0x25c);
        bVar6 = 0;
      }
      else {
        local_1c = *(int *)(local_24 + 0x1f0);
        if (local_1c < 0) {
          local_1c = *(int *)(iVar7 + 0x25c);
        }
        bVar6 = 1;
        if (*(int *)(local_24 + 0x1ec) != 2) {
          bVar6 = (local_24[0x1e8] & 2U) >> 1;
        }
        local_11 = 0;
        iVar5 = local_1c;
      }
      recovered_1001c160(uVar3,uVar12,local_20,local_24,iVar5,bVar6);
    }
    else {
      local_20 = (char *)(iVar7 + 0x78);
      cVar11 = *(char *)(iVar7 + 0x78);
      if (cVar11 == '\0') {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = (char *)0x0;
        pcVar10 = local_20;
        do {
          pcVar2 = pcVar10;
          if (cVar11 != '/') {
            pcVar2 = pcVar4;
          }
          pcVar4 = pcVar2;
          cVar11 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        } while (cVar11 != '\0');
      }
      pcVar10 = local_20;
      if (pcVar4 != (char *)0x0) {
        pcVar10 = pcVar4 + 1;
      }
      recovered_1001c160(uVar3,0xfffffc18,local_20,pcVar10,*(undefined4 *)(iVar7 + 0x25c),'\x01');
      bVar13 = true;
      in_ECX = local_18;
    }
    if (in_ECX != 2) {
      if (in_ECX == 1) {
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 1;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x6e65704f;
          (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar5] = 0;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
        }
        if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1532U)) == '\x01') {
          recovered_1001ba80(6,"Enter App",0xffffffff);
        }
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xb;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x6f666e49;
          (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)))[iVar5] = 0;
          (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
        }
        recovered_1001bb00();
      }
      else {
        iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U));
        if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x15;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
          iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
          *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x736f6c43;
          *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x65;
          iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
          if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
            iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
            (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar5) = 0x16;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
            iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x736f6c43;
            *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x6c412065;
            *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar5) = 0x6c;
            iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
            if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x11) {
              iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1724U)) + iVar5) = 0x14;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
              iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x6c707544;
              *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x74616369;
              *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar5) = 0x65;
              (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
              iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U));
            }
          }
        }
        (*(uint32_t *)(pf_module_state+0x1aa4U)) = iVar5;
        if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1531U)) == '\x01') {
          recovered_1001ba80(5,"Set Background",0xffffffff);
        }
        if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1533U)) == '\x01') {
          recovered_1001ba80(0x17,"Set Desktop Font",0xffffffff);
        }
      }
      goto joined_r0x100178bc;
    }
    if (!bVar13) {
      recovered_1001ba80(7,"Copy",0xffffffff);
      recovered_1001ba80(8,"Cut",0xffffffff);
    }
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x43c0U)) == '\x01') {
      recovered_1001ba80(9,"Paste",0xffffffff);
    }
    if (!bVar13) {
      recovered_1001ba80(10,"Rename",0xffffffff);
      recovered_1001ba80(0xd,"Delete",0xffffffff);
    }
    if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) {
      return;
    }
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xc;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar5 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar5) = 0x61657243;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar5) = 0x46206574;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar5) = 0x65646c6f;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar5) = 0x72;
  }
  (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
joined_r0x100178bc:
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) == 0) {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x150cU)) = 0;
  }
  return;
}

#undef DAT_0181f2a4
#undef DAT_0181f2d4
#undef DAT_0181f33c
#undef DAT_0181f340
#undef DAT_0181f344
#undef DAT_0181f348
#undef DAT_0181f34c
#undef DAT_0181f350
#undef DAT_0181f354
#undef DAT_0181f358
#undef DAT_0181f361
#undef DAT_0181f362
#undef DAT_0181f363
#undef DAT_0181f8d4
#undef DAT_018221f0
#undef UNK_0181f044
#undef UNK_0181f048
#undef UNK_0181f550
#undef UNK_0181f554
#undef UNK_0181f598
#undef UNK_0181f5e0
#undef UNK_0181f5e4
#undef UNK_0181f5e8
#undef UNK_0181f5ec
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef local_4e
#undef local_4a
#undef local_46
#undef local_44
#undef local_24

#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017a90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10017a90(int in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = 0;
  iVar5 = 0;
  pbVar1 = (*(uint8_t * *)(pf_module_state+0x1aa8U));
  do {
    if (*pbVar1 == 1) {
      iVar3 = (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x13ec] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x12c0] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x1194] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x1068] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xf3c] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xe10] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xce4] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[3000] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0xa8c] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x960] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x834] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x708] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x5dc] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[0x4b0] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[900] + (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[600] +
              (uint)(*(uint8_t * *)(pf_module_state+0x1aa8U))[300] + (uint)*(*(uint8_t * *)(pf_module_state+0x1aa8U));
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar3 * -0x44 + 0x12;
      }
      iVar4 = (iVar4 + (*(uint32_t *)(pf_module_state+0x12d4U))) / 2;
      if (in_EDX < (*(uint32_t *)(pf_module_state+0x12d8U)) + -8 &&
          (in_ECX < iVar4 + 0x32 + iVar5 * 0x44 &&
          (iVar4 + iVar5 * 0x44 <= in_ECX && (*(uint32_t *)(pf_module_state+0x12d8U)) + -0x36 <= in_EDX))) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    }
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 300;
    if (iVar2 == 0x12) {
      return -1;
    }
  } while( true );
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f8d8

#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017c00(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *in_EDX;
  int iVar2;

  if (in_ECX < 0x12) {
    if (*(char *)((*(uint32_t *)(pf_module_state+0x1aa8U)) + in_ECX * 300) == '\x01') {
      iVar2 = (*(uint32_t *)(pf_module_state+0x1aa8U)) + in_ECX * 300;
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 == 5) {
        recovered_10018b50((char *)(iVar2 + 0x30),0,*(char **)(iVar2 + 0x124));
      }
      else {
        if (iVar1 == 3) {
          recovered_100192f0();
          return;
        }
        if (iVar1 == 0) {
          iVar1 = recovered_10004ab0();
          recovered_1000b4a0("",iVar1);
          return;
        }
        if (*(char *)(iVar2 + 8) != '\0') {
          in_EDX = (char *)recovered_10004ab0();
          recovered_1001c350((char *)(iVar2 + 8),in_EDX);
          return;
        }
      }
    }
  }
  return;
}

#undef DAT_0181f8d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017c90
 */

void recovered_10017c90(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if ((in_ECX != (char *)0x0) && (*in_ECX == '\x01')) {
    bVar1 = recovered_1000f540((int)in_ECX);
    if (bVar1 != 0) {
      recovered_1000b4a0(in_ECX + 0x29,(int)*(char **)(in_ECX + 0x11c));
      return;
    }
    recovered_10018b50(in_ECX + 0x29,0,*(char **)(in_ECX + 0x11c));
  }
  return;
}


#undef DAT_0181f104
#define DAT_0181f104 (*(uint8_t *)(0x181f104U))
#undef DAT_0181f108
#define DAT_0181f108 (*(uint8_t *)(0x181f108U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017cd0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c;
  bVar2 = *(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 3 + in_ECX * 0xd9c) == '\0';
  if (bVar2) {
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(iVar1 + 0x58) = 0xe;
    *(undefined4 *)(iVar1 + 0x5c) = 0x24;
    *(int *)(iVar1 + 0x60) = (*(uint32_t *)(pf_module_state+0x12d4U)) + -0x1c;
    *(int *)(iVar1 + 100) = (*(uint32_t *)(pf_module_state+0x12d8U)) + -0x6e;
    *(undefined1 *)(iVar1 + 2) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x74);
  }
  *(bool *)(iVar1 + 3) = bVar2;
  return;
}

#undef DAT_0181f104
#undef DAT_0181f108
#undef DAT_0181f2d4

#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017d50(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  iVar2 = (*(uint32_t *)(pf_module_state+0x6274U));
  piVar1 = (*(uint8_t * *)(pf_module_state+0x1aacU));
  if (0 < (*(uint32_t *)(pf_module_state+0x6274U))) {
    iVar3 = 0;
    do {
      if ((*(uint8_t * *)(pf_module_state+0x1aacU))[iVar3] == in_ECX) {
        if (iVar3 != 0) {
          iVar3 = iVar3 + 1;
          do {
            piVar1[iVar3 + -1] = piVar1[iVar3 + -2];
            iVar3 = iVar3 + -1;
          } while (1 < iVar3);
        }
        *piVar1 = in_ECX;
        (*(uint32_t *)(pf_module_state+0x1474U)) = piVar1[iVar2 + -1];
        return;
      }
      iVar3 = iVar3 + 1;
    } while ((*(uint32_t *)(pf_module_state+0x6274U)) != iVar3);
  }
  return;
}

#undef DAT_0181f2a4
#undef DAT_0181f8dc
#undef DAT_018240a4

#undef DAT_0181f114
#define DAT_0181f114 (*(uint8_t *)(0x181f114U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_019293c4
#define DAT_019293c4 (*(uint8_t *)(0x19293c4U))
#undef DAT_019293c8
#define DAT_019293c8 (*(uint8_t *)(0x19293c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017db0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;

  if ((in_ECX < 0x14) && ((*(uint32_t *)(pf_module_state+0x14a4U)) != 0)) {
    iVar2 = in_ECX * 0xd9c;
    pcVar1 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + iVar2);
    if ((*pcVar1 == '\x01') && ((pcVar1[2] == '\0' && (pcVar1[3] == '\0')))) {
      (*(uint32_t *)(pf_module_state+0x10b594U)) = *(undefined4 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x60 + iVar2);
      (*(uint32_t *)(pf_module_state+0x10b598U)) = *(undefined4 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 100 + iVar2);
      (*(uint32_t *)(pf_module_state+0x12e4U)) = in_ECX;
    }
  }
  return;
}

#undef DAT_0181f114
#undef DAT_0181f2d4
#undef DAT_019293c4
#undef DAT_019293c8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2ac
#define DAT_0181f2ac (*(uint8_t *)(0x181f2acU))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
#undef DAT_018240b0
#define DAT_018240b0 (*(uint8_t *)(0x18240b0U))
#undef DAT_018240b4
#define DAT_018240b4 (*(uint8_t *)(0x18240b4U))
#undef DAT_018240b8
#define DAT_018240b8 (*(uint8_t *)(0x18240b8U))
#undef DAT_018240bc
#define DAT_018240bc (*(uint8_t *)(0x18240bcU))
#undef DAT_018240c0
#define DAT_018240c0 (*(uint8_t *)(0x18240c0U))
#undef DAT_018241b5
#define DAT_018241b5 (*(uint8_t *)(0x18241b5U))
#undef DAT_0192940c
#define DAT_0192940c (*(char *)(0x192940cU))
#undef DAT_01929410
#define DAT_01929410 (*(uint8_t *)(0x1929410U))
#undef DAT_01929414
#define DAT_01929414 (*(uint8_t *)(0x1929414U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000698c
#define UINT_0000698c (*(uint *)(0x698cU))
#undef UNK_0181ec59
#define UNK_0181ec59 (*(uint8_t *)(0x181ec59U))
#undef UNK_0181ec6b
#define UNK_0181ec6b (*(uint8_t *)(0x181ec6bU))
#undef UNK_0181ec7f
#define UNK_0181ec7f (*(uint8_t *)(0x181ec7fU))
#undef UNK_018240c4
#define UNK_018240c4 (*(uint8_t *)(0x18240c4U))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
#define local_2c (*(int *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(int *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10017e00(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_EAX = 0;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;

  if (0x13 < in_ECX) {
    return 0;
  }
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c) != '\x01') {
    return 0;
  }
  uVar12 = (*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c;
  iVar14 = *(int *)(uVar12 + 0x58);
  local_1c = *(int *)(uVar12 + 0x5c);
  local_14 = uVar12;
  if ((((iVar14 + 0x82 <= in_EDX) && (local_1c + 0x86 <= param_3)) && (in_EDX < iVar14 + 0xce)) &&
     (param_3 < local_1c + 0x9c)) {
    *(undefined4 *)(uVar12 + 0xb00) = 0;
    (*(uint32_t *)(pf_module_state+0x147cU)) = -1;
    goto LAB_100180ef;
  }
  if (((in_EDX < iVar14 + 0xd6) || (param_3 < local_1c + 0x86)) ||
     ((iVar14 + 0x11c <= in_EDX || (local_1c + 0x9c <= param_3)))) {
    if (*(int *)(uVar12 + 0xb00) != 1) {
      return 0;
    }
    iVar9 = local_1c + -0x92 + *(int *)(uVar12 + 100);
    if (iVar9 <= local_1c + 0x114) {
      iVar9 = local_1c + 0x114;
    }
    local_18 = iVar14 + 0x28;
    iVar9 = iVar9 - local_1c;
    local_20 = iVar9 + -0xee;
    local_24 = iVar9 + -0x102;
    iVar4 = 0x12;
    if (0x25 < local_20) {
      iVar4 = local_24;
    }
    iVar14 = iVar14 + 0x34;
    if (((in_EDX < local_18) || (param_3 < iVar4 + 0xdb + local_1c)) ||
       ((iVar14 <= in_EDX || (iVar4 + 0xe9 + local_1c <= param_3)))) {
      if ((((in_EDX < local_18) || (param_3 < iVar4 + local_1c + 0xeb)) || (iVar14 <= in_EDX)) ||
         (iVar4 + local_1c + 0xf9 <= param_3)) {
        iVar4 = -0x19;
        if (0x25 < local_20) {
          iVar4 = iVar9 + -0x12d;
        }
        iVar9 = 0x12;
        if (0x13 < iVar4) {
          iVar9 = iVar4 + -2;
        }
        if (((in_EDX < local_18) || (param_3 < local_1c + 0x106)) ||
           ((iVar14 <= in_EDX || (iVar9 + 0x106 + local_1c <= param_3)))) {
          uVar10 = recovered_1001cb60(uVar12,in_EDX,param_3);
          if ((int)uVar10 < 0) {
            return 0;
          }
          recovered_1001ccc0(uVar12,uVar10);
          local_14 = extraout_EAX;
          goto LAB_100180ef;
        }
        local_18 = in_ECX;
        recovered_100163f0((int *)&local_34,uVar12);
        if (((in_EDX < (int)local_34) || (param_3 < local_30)) ||
           (((int)(local_34 + local_2c) <= in_EDX || (local_30 + local_28 <= param_3)))) {
          recovered_100163f0((int *)&local_34,uVar12);
          uVar8 = (*(uint32_t *)(pf_module_state+0x627cU));
          uVar10 = local_24 / 0x12;
          if ((int)uVar10 < 2) {
            uVar10 = 1;
          }
          uVar5 = 1;
          if (0x25 < local_20) {
            uVar5 = uVar10;
          }
          uVar10 = 0;
          if (uVar5 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
            uVar10 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar5;
          }
          if (((int)uVar10 < 1) || (iVar9 - local_28 < 1)) {
            *(undefined4 *)(uVar12 + 0xaf8) = 0;
LAB_10018546:
            local_14 = 0;
            goto LAB_10018548;
          }
          local_14 = (int)((((param_3 - local_1c) - local_28 / 2) + -0x106) * uVar10) /
                     (iVar9 - local_28);
          *(uint *)(uVar12 + 0xaf8) = local_14;
          if (uVar8 == 0) {
            *(undefined4 *)(uVar12 + 0xaf4) = 0;
            *(undefined4 *)(uVar12 + 0xaf8) = 0;
            *(undefined1 *)(uVar12 + 0xafc) = 0;
            goto LAB_10018546;
          }
          if ((*(char *)(uVar12 + 0xafc) != '\x01') || (uVar8 <= *(uint *)(uVar12 + 0xaf4))) {
            *(undefined4 *)(uVar12 + 0xaf4) = 0;
            *(undefined1 *)(uVar12 + 0xafc) = 1;
          }
          if ((int)local_14 < 0) {
            *(undefined4 *)(uVar12 + 0xaf8) = 0;
            local_14 = 0;
          }
          else if (uVar10 < local_14) {
            *(uint *)(uVar12 + 0xaf8) = uVar10;
            local_14 = uVar10;
          }
        }
        else {
          local_14 = *(uint *)(uVar12 + 0xaf8);
LAB_10018548:
        }
        (*(uint32_t *)(pf_module_state+0x10b5e0U)) = param_3;
        (*(uint32_t *)(pf_module_state+0x147cU)) = local_18;
        (*(uint32_t *)(pf_module_state+0x10b5e4U)) = local_14;
        goto LAB_100180ef;
      }
      iVar14 = *(int *)(uVar12 + 0xaf8);
      uVar10 = iVar14 + 1;
      uVar8 = local_24 / 0x12;
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      *(uint *)(uVar12 + 0xaf8) = uVar10;
      uVar5 = (*(uint32_t *)(pf_module_state+0x627cU));
      uVar13 = 1;
      if (0x25 < local_20) {
        uVar13 = uVar8;
      }
      uVar8 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar13;
      if (((*(uint32_t *)(pf_module_state+0x627cU)) < uVar13) || ((int)uVar8 < 1)) {
        uVar8 = 0;
      }
      if ((*(uint32_t *)(pf_module_state+0x627cU)) == 0) goto LAB_100182db;
      if ((*(char *)(uVar12 + 0xafc) != '\x01') || ((*(uint32_t *)(pf_module_state+0x627cU)) <= *(uint *)(uVar12 + 0xaf4))) {
        *(undefined4 *)(uVar12 + 0xaf4) = 0;
        *(undefined1 *)(uVar12 + 0xafc) = 1;
      }
      if (-2 < iVar14) goto LAB_100181d1;
    }
    else {
      iVar14 = *(int *)(uVar12 + 0xaf8);
      uVar10 = iVar14 - 1;
      uVar8 = local_24 / 0x12;
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      *(uint *)(uVar12 + 0xaf8) = uVar10;
      uVar5 = (*(uint32_t *)(pf_module_state+0x627cU));
      uVar13 = 1;
      if (0x25 < local_20) {
        uVar13 = uVar8;
      }
      uVar8 = (*(uint32_t *)(pf_module_state+0x627cU)) - uVar13;
      if (((*(uint32_t *)(pf_module_state+0x627cU)) < uVar13) || ((int)uVar8 < 1)) {
        uVar8 = 0;
      }
      if ((*(uint32_t *)(pf_module_state+0x627cU)) == 0) {
LAB_100182db:
        *(undefined4 *)(uVar12 + 0xaf4) = 0;
        *(undefined4 *)(uVar12 + 0xaf8) = 0;
        *(undefined1 *)(uVar12 + 0xafc) = 0;
        goto LAB_100180ef;
      }
      if ((*(char *)(uVar12 + 0xafc) != '\x01') || ((*(uint32_t *)(pf_module_state+0x627cU)) <= *(uint *)(uVar12 + 0xaf4))) {
        *(undefined4 *)(uVar12 + 0xaf4) = 0;
        *(undefined1 *)(uVar12 + 0xafc) = 1;
      }
      if (0 < iVar14) {
LAB_100181d1:
        uVar3 = CONCAT31((int3)(uVar5 >> 8),1);
        if (uVar8 < uVar10) {
          *(uint *)(uVar12 + 0xaf8) = uVar8;
          return uVar3;
        }
        return uVar3;
      }
    }
    *(undefined4 *)(uVar12 + 0xaf8) = 0;
    goto LAB_100180ef;
  }
  if ((*(int *)(uVar12 + 0xb00) == 1) && ((*(uint8_t *)((uintptr_t)pf_module_state+0x10b5dcU)) != '\0')) {
    *(undefined4 *)(uVar12 + 0xb00) = 1;
    goto LAB_100180ef;
  }
  *(undefined4 *)(uVar12 + 0xb00) = 1;
  local_34 = 0;
  memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)),0,0x105300);
  (*(uint32_t *)(pf_module_state+0x6280U)) = 0;
  (*(uint32_t *)(pf_module_state+0x627cU)) = 0;
  (*(uint32_t *)(pf_module_state+0x6284U)) = 0;
  (*(uint32_t *)(pf_module_state+0x6288U)) = 0;
  (*(uint32_t *)(pf_module_state+0x628cU)) = 0;
  (*(uint32_t *)(pf_module_state+0x6290U)) = 0;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x10b5dcU)) = '\x01';
  iVar14 = Ram00006800;
  if ((((iVar14 == 0x50414d57) && (iVar14 = Ram00006804, iVar14 != 0)) &&
      (uVar12 = Ram00006808, 0xb < uVar12)) &&
     (((uVar12 = Ram00006808, 399 < uVar12 &&
       (pcVar1 = (code *)UINT_0000698c, pcVar1 != (code *)0x0)) &&
      (uVar12 = (*pcVar1)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x6294U)),0x300,&local_34), uVar12 != 0)))) {
    (*(uint32_t *)(pf_module_state+0x627cU)) = local_34;
    if (0x2ff < local_34) {
      (*(uint32_t *)(pf_module_state+0x627cU)) = 0x300;
    }
    (*(uint32_t *)(pf_module_state+0x6280U)) = local_34;
    uVar12 = 0;
    if (local_34 == 0) goto LAB_100180d0;
    local_18 = (*(uint32_t *)(pf_module_state+0x6284U));
    local_20 = (*(uint32_t *)(pf_module_state+0x6288U));
    local_24 = (*(uint32_t *)(pf_module_state+0x628cU));
    puVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x6385U));
    iVar14 = (*(uint32_t *)(pf_module_state+0x6290U));
    do {
      iVar9 = -0xf;
      do {
        cVar2 = puVar11[iVar9 + 0xf];
        if (cVar2 == '\0') {
          if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe29U)))[iVar9] == '\0') {
            (*(uint32_t *)(pf_module_state+0x6284U)) = local_18 + 1;
            local_18 = (*(uint32_t *)(pf_module_state+0x6284U));
            goto LAB_10018312;
          }
          break;
        }
        if (iVar9 == 0) break;
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          cVar2 = cVar2 + -0x20;
        }
        cVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe29U)))[iVar9];
        if ((byte)(cVar6 + 0x9fU) < 0x1a) {
          cVar6 = cVar6 + -0x20;
        }
        iVar9 = iVar9 + 1;
      } while (cVar2 == cVar6);
      iVar9 = -0x11;
      do {
        cVar2 = puVar11[iVar9 + 0x11];
        if (cVar2 == '\0') {
          if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe3bU)))[iVar9] == '\0') {
            (*(uint32_t *)(pf_module_state+0x6288U)) = local_20 + 1;
            local_20 = (*(uint32_t *)(pf_module_state+0x6288U));
            goto LAB_10018312;
          }
          break;
        }
        if (iVar9 == 0) break;
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          cVar2 = cVar2 + -0x20;
        }
        cVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe3bU)))[iVar9];
        if ((byte)(cVar6 + 0x9fU) < 0x1a) {
          cVar6 = cVar6 + -0x20;
        }
        iVar9 = iVar9 + 1;
      } while (cVar2 == cVar6);
      iVar9 = -0x13;
      do {
        cVar2 = puVar11[iVar9 + 0x13];
        if (cVar2 == '\0') {
          if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0xe4fU)))[iVar9] == '\0') {
            (*(uint32_t *)(pf_module_state+0x628cU)) = local_24 + 1;
            local_24 = (*(uint32_t *)(pf_module_state+0x628cU));
            goto LAB_10018312;
          }
          break;
        }
        if (iVar9 == 0) break;
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          cVar2 = cVar2 + -0x20;
        }
        cVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xe4fU)))[iVar9];
        if ((byte)(cVar6 + 0x9fU) < 0x1a) {
          cVar6 = cVar6 + -0x20;
        }
        iVar9 = iVar9 + 1;
      } while (cVar2 == cVar6);
      iVar14 = iVar14 + 1;
      (*(uint32_t *)(pf_module_state+0x6290U)) = iVar14;
LAB_10018312:
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 0x571;
      uVar7 = 1;
    } while (uVar12 != (*(uint32_t *)(pf_module_state+0x627cU)));
  }
  else {
LAB_100180d0:
    uVar7 = 0;
  }
  *(undefined4 *)(local_14 + 0xaf4) = 0;
  *(undefined4 *)(local_14 + 0xaf8) = 0;
  *(undefined1 *)(local_14 + 0xafc) = uVar7;
LAB_100180ef:
  return CONCAT31((int3)(local_14 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2ac
#undef DAT_0181f2d4
#undef DAT_018240ac
#undef DAT_018240b0
#undef DAT_018240b4
#undef DAT_018240b8
#undef DAT_018240bc
#undef DAT_018240c0
#undef DAT_018241b5
#undef DAT_0192940c
#undef DAT_01929410
#undef DAT_01929414
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000698c
#undef UNK_0181ec59
#undef UNK_0181ec6b
#undef UNK_0181ec7f
#undef UNK_018240c4
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018580
 */

int recovered_10018580(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar1 = 0;
  pcVar4 = "";
  iVar2 = 0;
  do {
    if (*pcVar4 == '\x01') {
      iVar3 = iVar2 * 0x5c + *(int *)(in_ECX + 0x58);
      if ((in_EDX < iVar3 + 0x76 &&
          (*(int *)(in_ECX + 0x5c) + 0x22 <= param_3 && iVar3 + 0x22 <= in_EDX)) &&
          param_3 < *(int *)(in_ECX + 0x5c) + 0x3c) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
    pcVar4 = pcVar4 + 0x124;
  } while (iVar1 != 0xc);
  return -1;
}


#undef DAT_0181f2ac
#define DAT_0181f2ac (*(uint8_t *)(0x181f2acU))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_01929410
#define DAT_01929410 (*(uint8_t *)(0x1929410U))
#undef DAT_01929414
#define DAT_01929414 (*(uint8_t *)(0x1929414U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10018610(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX_00;
  int iVar8;
  int iVar9;

  if ((0x13 < in_ECX) || (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c) != '\x01')) {
    return 0;
  }
  in_ECX_00 = (*(uint32_t *)(pf_module_state+0x14a4U)) + in_ECX * 0xd9c;
  iVar4 = (int)((ulonglong)((longlong)(*(int *)(in_ECX_00 + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
          -0x26 + *(int *)(in_ECX_00 + 0x60);
  iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar8 = *(int *)(in_ECX_00 + 0x5c);
  iVar6 = *(int *)(in_ECX_00 + 0x58) + 0xe;
  iVar1 = *(int *)(in_ECX_00 + 100);
  iVar5 = *(int *)(in_ECX_00 + 0x58) + 0x1a;
  if ((((in_EDX < iVar6) || (param_3 < iVar1 + -0x26 + iVar8)) || (iVar5 <= in_EDX)) ||
     (iVar1 + -0x18 + iVar8 <= param_3)) {
    if (((in_EDX < iVar6) || (param_3 < iVar8 + iVar1 + -0x16)) ||
       ((iVar5 <= in_EDX || (iVar8 + iVar1 + -8 <= param_3)))) {
      iVar3 = 0x12;
      if (0x15 < iVar1 + -0x84) {
        iVar3 = iVar1 + -0x88;
      }
      if (in_EDX < iVar6) {
        return 0;
      }
      iVar6 = iVar8 + 0x5e;
      if (param_3 < iVar6) {
        return 0;
      }
      if (iVar5 <= in_EDX) {
        return 0;
      }
      iVar8 = iVar3 + 0x5e + iVar8;
      if (iVar8 <= param_3) {
        return 0;
      }
      iVar5 = iVar1 + -0x6a;
      iVar7 = (int)((ulonglong)((longlong)iVar5 * -0x22983759) >> 0x20) + -0x6a + iVar1;
      iVar9 = (iVar7 >> 6) - (iVar7 >> 0x1f);
      iVar1 = ((int)((ulonglong)((longlong)iVar5 * 0x22983759) >> 0x20) - iVar1) + 0x6a;
      iVar7 = (iVar1 >> 6) - (iVar1 >> 0x1f);
      iVar1 = *(int *)(in_ECX_00 + 0xaf0);
      if (iVar5 < 0x4a) {
        iVar9 = 1;
        iVar7 = -1;
      }
      if (((-2 < iVar1) && (iVar9 * iVar4 < iVar1 + 2)) &&
         (iVar5 = iVar4 * iVar7 + 2 + iVar1, 0 < iVar5)) {
        iVar8 = (iVar9 * iVar4 * iVar3) / (iVar1 + 2);
        if (iVar8 < 0x13) {
          iVar8 = 0x12;
        }
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
        iVar6 = iVar6 + ((iVar3 - iVar8) * *(int *)(in_ECX_00 + 0xaf8)) / iVar5;
        iVar8 = iVar8 + iVar6;
      }
      if ((param_3 < iVar6) || (iVar8 <= param_3)) {
        recovered_1001ce40(in_ECX_00,param_3);
      }
      (*(uint32_t *)(pf_module_state+0x147cU)) = in_ECX;
      (*(uint32_t *)(pf_module_state+0x10b5e0U)) = param_3;
      (*(uint32_t *)(pf_module_state+0x10b5e4U)) = *(undefined4 *)(in_ECX_00 + 0xaf8);
      return CONCAT31((int3)((uint)*(undefined4 *)(in_ECX_00 + 0xaf8) >> 8),1);
    }
    iVar8 = *(int *)(in_ECX_00 + 0xaf8) + iVar4;
    *(int *)(in_ECX_00 + 0xaf8) = iVar8;
    iVar1 = iVar1 + -0x6a;
    iVar5 = -1;
    iVar6 = iVar8;
    if (0x49 < iVar1) {
      iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x22983759) >> 0x20) - iVar1;
      iVar6 = -(iVar1 >> 0x1f);
      iVar5 = (iVar1 >> 6) + iVar6;
    }
    iVar4 = *(int *)(in_ECX_00 + 0xaf0) + 2 + iVar4 * iVar5;
    if (iVar8 < 0) {
      *(undefined4 *)(in_ECX_00 + 0xaf8) = 0;
      iVar8 = 0;
    }
    uVar2 = CONCAT31((int3)((uint)iVar6 >> 8),1);
    if ((0 < iVar4) && (iVar8 <= iVar4)) {
      return uVar2;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
  }
  else {
    iVar8 = *(int *)(in_ECX_00 + 0xaf8) - iVar4;
    *(int *)(in_ECX_00 + 0xaf8) = iVar8;
    iVar1 = iVar1 + -0x6a;
    iVar6 = -1;
    if (0x49 < iVar1) {
      iVar6 = (int)((ulonglong)((longlong)iVar1 * 0x22983759) >> 0x20) - iVar1;
      iVar1 = -(iVar6 >> 0x1f);
      iVar6 = (iVar6 >> 6) + iVar1;
    }
    iVar4 = *(int *)(in_ECX_00 + 0xaf0) + 2 + iVar4 * iVar6;
    if (iVar8 < 0) {
      *(undefined4 *)(in_ECX_00 + 0xaf8) = 0;
      iVar8 = 0;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    if ((0 < iVar4) && (iVar8 <= iVar4)) {
      return uVar2;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
  }
  *(int *)(in_ECX_00 + 0xaf8) = iVar6;
  return uVar2;
}

#undef DAT_0181f2ac
#undef DAT_0181f2d4
#undef DAT_01929410
#undef DAT_01929414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018900
 */

/* WARNING: Removing unreachable block (ram,0x10018a66) */

int recovered_10018900(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;

  if (in_ECX == 0) {
    iVar5 = 0;
    iVar7 = 1;
  }
  else {
    iVar5 = *(int *)(in_ECX + 100) + -0x6a;
    iVar7 = 1;
    if (0x49 < iVar5) {
      iVar7 = iVar5 / 0x4a - iVar5 / -0x6c000000;
    }
    iVar5 = *(int *)(in_ECX + 0xaf0) + 2;
    iVar3 = (int)((ulonglong)((longlong)(*(int *)(in_ECX + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
            -0x26 + *(int *)(in_ECX + 0x60);
    iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    if (1 < iVar3) goto LAB_1001896f;
  }
  iVar3 = 1;
LAB_1001896f:
  if (0 < iVar3 * iVar7) {
    iVar1 = *(int *)(in_ECX + 0xaf8);
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    iVar1 = -iVar1;
    uVar6 = 0;
    do {
      if (-iVar5 == iVar1) {
        return -1000;
      }
      iVar4 = (int)((ulonglong)((longlong)(*(int *)(in_ECX + 0x60) + -0x26) * -0x2df2df2d) >> 0x20)
              + -0x26 + *(int *)(in_ECX + 0x60);
      uVar8 = (iVar4 >> 6) - (iVar4 >> 0x1f);
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      iVar4 = (uVar6 % uVar8) * 0x4e;
      if (*(int *)(in_ECX + 0x58) + 0x22 + iVar4 <= in_EDX) {
        iVar2 = (uVar6 / uVar8) * 0x4a;
        if (((*(int *)(in_ECX + 0x5c) + 0x60 + iVar2 <= param_3) &&
            (in_EDX < *(int *)(in_ECX + 0x58) + 0x66 + iVar4)) &&
           (param_3 < *(int *)(in_ECX + 0x5c) + 0xa0 + iVar2)) {
          if (iVar1 == 0) {
            return -1;
          }
          if (iVar1 == -1) {
            return -2;
          }
          return -2 - iVar1;
        }
      }
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar3 * iVar7 != uVar6);
  }
  return -1000;
}


#define local_101 (*(char (*)[241])(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018a80
 */

void recovered_10018a80(char *in_ECX,undefined1 *in_EDX)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;

  pcVar1 = "";
  if (in_ECX != (char *)0x0) {
    pcVar1 = in_ECX;
  }
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = uVar5 + 1;
      local_101[uVar5] = cVar3;
      if (0xef < uVar2) break;
      cVar3 = pcVar1[uVar5 + 1];
      uVar5 = uVar2;
    } while (cVar3 != '\0');
  }
  local_101[uVar2] = '\0';
  if (local_101[0] != '\0') {
    pcVar1 = local_101;
    pcVar6 = (char *)0x0;
    cVar3 = local_101[0];
    do {
      pcVar4 = pcVar1;
      if (cVar3 != '/') {
        pcVar4 = pcVar6;
      }
      cVar3 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
      pcVar6 = pcVar4;
    } while (cVar3 != '\0');
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      if (in_EDX == (undefined1 *)0x0) {
        return;
      }
      if (local_101[0] == '\0') {
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar2 = uVar5 + 1;
          in_EDX[uVar5] = local_101[0];
          if (0xef < uVar2) break;
          local_101[0] = local_101[uVar5 + 1];
          uVar5 = uVar2;
        } while (local_101[0] != '\0');
      }
      in_EDX = in_EDX + uVar2;
      goto LAB_10018b37;
    }
  }
  if (in_EDX == (undefined1 *)0x0) {
    return;
  }
LAB_10018b37:
  *in_EDX = 0;
  return;
}

#undef local_101

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#undef UNK_0181eeab
#define UNK_0181eeab (*(uint8_t *)(0x181eeabU))
#undef UNK_0181eeaf
#define UNK_0181eeaf (*(uint8_t *)(0x181eeafU))
#undef UNK_0181eeb8
#define UNK_0181eeb8 (*(uint8_t *)(0x181eeb8U))
#undef UNK_0181eebd
#define UNK_0181eebd (*(uint8_t *)(0x181eebdU))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_30 (*(undefined * *)(frame + 48))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_20 (*(undefined4 *)(frame + 64))
#define local_1c (*(char * *)(frame + 68))
#define local_18 (*(int *)(frame + 72))
#define local_14 (*(int *)(frame + 76))
#define in_stack_ffffffb4 (*(undefined4 *)(frame + 20))
#define in_stack_ffffffbc (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10018b50(char *in_ECX,int in_EDX,char *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  byte bVar12;
  char *pcVar13;
  undefined1 uVar14;

  uVar14 = (undefined1)((uint)in_stack_ffffffb4 >> 0x18);
  if ((in_ECX == (char *)0x0) || (cVar3 = *in_ECX, cVar3 == '\0')) {
    in_ECX = "";
LAB_10018c7d:
    recovered_1000b4a0(in_ECX,(int)param_3);
    return;
  }
  local_18 = in_EDX;
  bVar2 = recovered_1000fd50(in_ECX);
  if (!bVar2) {
    local_1c = param_3;
    local_14 = CONCAT31(PF_PART3(local_14, 1),cVar3);
    pcVar13 = in_ECX;
    pcVar5 = (char *)0x0;
    cVar11 = cVar3;
    do {
      pcVar10 = pcVar13;
      if (cVar11 != '/') {
        pcVar10 = pcVar5;
      }
      cVar11 = pcVar13[1];
      pcVar13 = pcVar13 + 1;
      pcVar5 = pcVar10;
    } while (cVar11 != '\0');
    pcVar13 = in_ECX;
    if (pcVar10 != (char *)0x0) {
      pcVar13 = pcVar10 + 1;
    }
    cVar11 = *pcVar13;
    if (cVar11 == '\0') {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)0x0;
      do {
        pcVar5 = pcVar13;
        if (cVar11 != '.') {
          pcVar5 = pcVar10;
        }
        cVar11 = pcVar13[1];
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar5;
      } while (cVar11 != '\0');
    }
    pcVar13 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar13 = pcVar5;
    }
    iVar9 = 0;
    do {
      bVar4 = pcVar13[iVar9];
      bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar9];
      if ((bVar4 == 0) || (bVar12 == 0)) {
        if (bVar4 == bVar12) goto LAB_1001909e;
        break;
      }
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((byte)(bVar12 + 0xbf) < 0x1a) {
        bVar12 = bVar12 | 0x20;
      }
      iVar9 = iVar9 + 1;
    } while (bVar4 == bVar12);
    pcVar13 = in_ECX;
    pcVar5 = (char *)0x0;
    cVar11 = cVar3;
    do {
      pcVar10 = pcVar13;
      if (cVar11 != '/') {
        pcVar10 = pcVar5;
      }
      cVar11 = pcVar13[1];
      pcVar13 = pcVar13 + 1;
      pcVar5 = pcVar10;
    } while (cVar11 != '\0');
    pcVar13 = in_ECX;
    if (pcVar10 != (char *)0x0) {
      pcVar13 = pcVar10 + 1;
    }
    cVar11 = *pcVar13;
    if (cVar11 == '\0') {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)0x0;
      do {
        pcVar5 = pcVar13;
        if (cVar11 != '.') {
          pcVar5 = pcVar10;
        }
        cVar11 = pcVar13[1];
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar5;
      } while (cVar11 != '\0');
    }
    pcVar13 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar13 = pcVar5;
    }
    iVar9 = 0;
    do {
      bVar4 = pcVar13[iVar9];
      bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1088U)))[iVar9];
      if ((bVar4 == 0) || (bVar12 == 0)) {
        if (bVar4 == bVar12) goto LAB_1001909e;
        break;
      }
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((byte)(bVar12 + 0xbf) < 0x1a) {
        bVar12 = bVar12 | 0x20;
      }
      iVar9 = iVar9 + 1;
    } while (bVar4 == bVar12);
    pcVar13 = in_ECX;
    pcVar5 = (char *)0x0;
    cVar11 = cVar3;
    do {
      pcVar10 = pcVar13;
      if (cVar11 != '/') {
        pcVar10 = pcVar5;
      }
      cVar11 = pcVar13[1];
      pcVar13 = pcVar13 + 1;
      pcVar5 = pcVar10;
    } while (cVar11 != '\0');
    pcVar13 = in_ECX;
    if (pcVar10 != (char *)0x0) {
      pcVar13 = pcVar10 + 1;
    }
    cVar11 = *pcVar13;
    if (cVar11 == '\0') {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)0x0;
      do {
        pcVar5 = pcVar13;
        if (cVar11 != '.') {
          pcVar5 = pcVar10;
        }
        cVar11 = pcVar13[1];
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar5;
      } while (cVar11 != '\0');
    }
    pcVar13 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar13 = pcVar5;
    }
    iVar9 = 0;
    do {
      bVar4 = pcVar13[iVar9];
      bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x107bU)))[iVar9];
      if ((bVar4 == 0) || (bVar12 == 0)) {
        if (bVar4 == bVar12) goto LAB_1001909e;
        break;
      }
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((byte)(bVar12 + 0xbf) < 0x1a) {
        bVar12 = bVar12 | 0x20;
      }
      iVar9 = iVar9 + 1;
    } while (bVar4 == bVar12);
    pcVar13 = in_ECX;
    pcVar5 = (char *)0x0;
    do {
      pcVar10 = pcVar13;
      if (cVar3 != '/') {
        pcVar10 = pcVar5;
      }
      cVar3 = pcVar13[1];
      pcVar13 = pcVar13 + 1;
      pcVar5 = pcVar10;
    } while (cVar3 != '\0');
    pcVar13 = in_ECX;
    if (pcVar10 != (char *)0x0) {
      pcVar13 = pcVar10 + 1;
    }
    cVar3 = *pcVar13;
    if (cVar3 == '\0') {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)0x0;
      do {
        pcVar5 = pcVar13;
        if (cVar3 != '.') {
          pcVar5 = pcVar10;
        }
        cVar3 = pcVar13[1];
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar5;
      } while (cVar3 != '\0');
    }
    pcVar13 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar13 = pcVar5;
    }
    iVar9 = 0;
    do {
      bVar4 = pcVar13[iVar9];
      bVar12 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x107fU)))[iVar9];
      if ((bVar4 == 0) || (bVar12 == 0)) {
        if (bVar4 == bVar12) goto LAB_1001909e;
        break;
      }
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((byte)(bVar12 + 0xbf) < 0x1a) {
        bVar12 = bVar12 | 0x20;
      }
      iVar9 = iVar9 + 1;
    } while (bVar4 == bVar12);
    bVar2 = recovered_1000f620(in_ECX,((uintptr_t)pf_module_state+0x1084U));
    if (bVar2) {
LAB_1001909e:
      recovered_1001c350(in_ECX,local_1c);
      return;
    }
    if (local_18 == 0) {
      memset(&local_38,0,0xc);
      pcVar13 = local_1c;
      uVar6 = recovered_1000ada0((int)local_1c,in_ECX,&local_38);
      if ((uVar6 != 0) && (((uint)local_30 & 2) != 0)) {
        recovered_1000b4a0(in_ECX,(int)pcVar13);
        return;
      }
    }
    else {
      if ((*(int *)(local_18 + 0x1ec) == 2) || ((*(byte *)(local_18 + 0x1e8) & 2) != 0)) {
        param_3 = local_1c;
        goto LAB_10018c7d;
      }
      pcVar13 = recovered_1000ff40(in_ECX);
      if (*pcVar13 == '\0') goto LAB_1001909e;
    }
    recovered_100193b0(in_ECX,local_18);
    return;
  }
  local_38 = CONCAT13(PF_PART1(local_38, 3),0xf4f4f4);
  local_34 = recovered_10004490(1,"Preview",CONCAT13(uVar14,0xf4f4f4),'\0');
  local_38 = 1;
  local_30 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x108dU));
  local_2c = 0xa4;
  local_28 = 0x44;
  local_24 = 0x230;
  local_20 = 0x168;
  local_18 = recovered_1000b630(&local_38);
  iVar9 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if (local_18 < 0) {
    return;
  }
  local_1c = param_3;
  local_18 = local_18 * 0xd9c;
  local_14 = (*(uint32_t *)(pf_module_state+0x14a4U));
  iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U)) + 0x78 + local_18;
  cVar3 = *in_ECX;
  pcVar13 = (char *)0x0;
  uVar6 = 0;
  if (cVar3 != '\0') {
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      *(char *)(iVar1 + uVar7) = cVar3;
      if (0xef < uVar6) break;
      cVar3 = in_ECX[uVar7 + 1];
      uVar7 = uVar6;
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(iVar1 + uVar6) = 0;
  *(char **)(iVar9 + 0x25c + local_18) = param_3;
  cVar3 = *in_ECX;
  if (cVar3 != '\0') {
    pcVar13 = (char *)0x0;
    pcVar5 = in_ECX;
    do {
      pcVar10 = pcVar5;
      if (cVar3 != '/') {
        pcVar10 = pcVar13;
      }
      pcVar13 = pcVar10;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
  }
  pcVar5 = in_ECX;
  if (pcVar13 != (char *)0x0) {
    pcVar5 = pcVar13 + 1;
  }
  iVar1 = iVar9 + 0x18 + local_18;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      *(char *)(iVar1 + uVar7) = cVar3;
      if (0x3e < uVar6) break;
      cVar3 = pcVar5[uVar7 + 1];
      uVar7 = uVar6;
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(iVar1 + uVar6) = 0;
  pcVar13 = (char *)(iVar9 + 0xb04 + local_18);
  iVar9 = Ram00006800;
  if ((((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
      (uVar6 = Ram00006808, 0xb < uVar6)) && (uVar6 = Ram00006808, 0xe3 < uVar6)) {
    pcVar8 = (code *)UINT_000068e0;
    if (pcVar8 == (code *)0x0) goto LAB_10018f33;
    in_stack_ffffffbc = pcVar13;
  }
  else {
    iVar9 = Ram00006800;
    if (((iVar9 != 0x50414d57) || (iVar9 = Ram00006804, iVar9 == 0)) ||
       ((uVar6 = Ram00006808, uVar6 < 0xc ||
        ((uVar6 = Ram00006808, uVar6 < 0x5c ||
         (pcVar8 = (code *)UINT_00006858, pcVar8 == (code *)0x0)))))) goto LAB_10018f33;
    param_3 = in_ECX;
    in_ECX = pcVar13;
  }
  uVar6 = (*pcVar8)((int)param_3,in_ECX,in_stack_ffffffbc);
  if (uVar6 != 0) {
    return;
  }
  local_14 = (*(uint32_t *)(pf_module_state+0x14a4U));
LAB_10018f33:
  *(undefined4 *)(local_14 + 0x261 + local_18) = 0x6c756f43;
  *(undefined4 *)(local_14 + 0x265 + local_18) = 0x6f6e2064;
  *(undefined4 *)(local_14 + 0x269 + local_18) = 0x65642074;
  *(undefined4 *)(local_14 + 0x26d + local_18) = 0x65646f63;
  *(undefined4 *)(local_14 + 0x271 + local_18) = 0x616d6920;
  *(undefined2 *)(local_14 + 0x275 + local_18) = 0x6567;
  *(undefined1 *)(local_14 + 0x277 + local_18) = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2d4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006858
#undef UINT_000068e0
#undef UNK_0181e96f
#undef UNK_0181eeab
#undef UNK_0181eeaf
#undef UNK_0181eeb8
#undef UNK_0181eebd
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_ffffffb4
#undef in_stack_ffffffbc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#define local_80c (*(char (*)[2048])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019130(void)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong size;
  int iVar4;

  local_80c[0] = '\0';
  iVar4 = -0x1518;
  iVar3 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if (((*(char *)(iVar3 + 0x1518 + iVar4) == '\x01') && (*(int *)(iVar3 + 0x151c + iVar4) == 5))
       && (*(char *)(iVar3 + 0x1519 + iVar4) == '\x01')) {
      recovered_1001aac0(local_80c,*(uint *)(iVar3 + 0x163c + iVar4),
                         (char *)(iVar3 + 0x1548 + iVar4));
      iVar3 = (*(uint32_t *)(pf_module_state+0x1aa8U));
    }
    iVar4 = iVar4 + 300;
  } while (iVar4 != 0);
  size = strlen(local_80c);
  iVar3 = Ram00006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
     ((uVar1 = Ram00006808, 0xb < uVar1 &&
      ((uVar1 = Ram00006808, 0x3b < uVar1 && (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0)
       ))))) {
    (*pcVar2)("Tundra.dock",local_80c,size);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f8d8
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef local_80c

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019200(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *dst;
  int iVar2;
  int iVar3;
  uint in_ECX_00;
  int iVar4;

  iVar3 = 0;
  in_ECX_00 = 0;
  iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U));
  do {
    if ((*(char *)(iVar1 + iVar3) == '\x01') && (*(int *)(iVar1 + 0x14 + iVar3) == in_ECX)) {
      recovered_1001c8a0(in_ECX_00);
      iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U));
    }
    in_ECX_00 = in_ECX_00 + 1;
    iVar3 = iVar3 + 0xd9c;
  } while (in_ECX_00 != 0x14);
  iVar3 = 0;
  iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if ((*(char *)(iVar1 + iVar3 * 300) == '\x01') &&
       (dst = (void *)(iVar3 * 300 + iVar1), *(char *)((int)dst + 1) == '\0')) {
      iVar2 = 0;
      iVar4 = -0x11030;
      do {
        if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11030 + iVar4) == '\x01') {
          iVar2 = iVar2 + (uint)(*(int *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11044 + iVar4) == iVar3);
        }
        iVar4 = iVar4 + 0xd9c;
      } while (iVar4 != 0);
      if (iVar2 == 0) {
        memset(dst,0,300);
        iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x12);
  return;
}

#undef DAT_0181f2d4
#undef DAT_0181f8d8

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef UNK_0181edc2
#define UNK_0181edc2 (*(uint8_t *)(0x181edc2U))
#define in_stack_ffffffd4 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(undefined * *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
#define local_10 (*(undefined4 *)(frame + 48))
#define local_c (*(undefined4 *)(frame + 52))
#define local_8 (*(undefined4 *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100192f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100192f0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  local_20 = CONCAT13(PF_PART1(local_20, 3),0x9c9c9c);
  local_1c = recovered_10004490(3,"System Info",
                                CONCAT13((char)((uint)in_stack_ffffffd4 >> 0x18),0x9c9c9c),'\0');
  local_20 = 3;
  local_18 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xf92U));
  local_14 = 100;
  local_10 = 0x20;
  local_c = 0x276;
  local_8 = 0x224;
  iVar2 = recovered_1000b630(&local_20);
  iVar1 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if (-1 < iVar2) {
    iVar2 = iVar2 * 0xd9c;
    *(undefined4 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + iVar2) = 0x74737953;
    *(undefined4 *)(iVar1 + 0x265 + iVar2) = 0x49206d65;
    *(undefined4 *)(iVar1 + 0x269 + iVar2) = 0x726f666e;
    *(undefined4 *)(iVar1 + 0x26d + iVar2) = 0x6974616d;
    *(undefined2 *)(iVar1 + 0x271 + iVar2) = 0x6e6f;
    *(undefined1 *)(iVar1 + 0x273 + iVar2) = 0;
  }
  return;
}

#undef DAT_0181f2d4
#undef UNK_0181edc2
#undef in_stack_ffffffd4
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef UNK_0181edda
#define UNK_0181edda (*(uint8_t *)(0x181eddaU))
#define in_stack_ffffffb4 (*(undefined4 *)(frame + 20))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_30 (*(undefined * *)(frame + 48))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_20 (*(undefined4 *)(frame + 64))
#define local_1c (*(int *)(frame + 68))
#define local_18 (*(char * *)(frame + 72))
#define local_14 (*(int *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100193b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100193b0(char *in_ECX,int in_EDX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;

  local_38 = CONCAT13(PF_PART1(local_38, 3),0xd6d6d6);
  local_1c = in_EDX;
  local_34 = recovered_10004490(2,"Info",CONCAT13((char)((uint)in_stack_ffffffb4 >> 0x18),0xd6d6d6),
                                '\0');
  local_38 = 2;
  local_30 = &(*(uint8_t *)((uintptr_t)pf_module_state+0xfaaU));
  local_2c = 0xf8;
  local_28 = 0x72;
  local_24 = 0x19a;
  local_20 = 0xd6;
  local_14 = recovered_1000b630(&local_38);
  if (-1 < local_14) {
    pcVar6 = (char *)0x0;
    if (in_ECX == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      cVar8 = *in_ECX;
      if (cVar8 != '\0') {
        pcVar4 = in_ECX;
        pcVar5 = (char *)0x0;
        do {
          pcVar6 = pcVar4;
          if (cVar8 != '/') {
            pcVar6 = pcVar5;
          }
          cVar8 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar6;
        } while (cVar8 != '\0');
      }
      pcVar4 = in_ECX;
      if (pcVar6 != (char *)0x0) {
        pcVar4 = pcVar6 + 1;
      }
    }
    cVar8 = *pcVar4;
    if (cVar8 == '\0') {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar5 = (char *)0x0;
      do {
        pcVar6 = pcVar4;
        if (cVar8 != '.') {
          pcVar6 = pcVar5;
        }
        cVar8 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar6;
      } while (cVar8 != '\0');
    }
    pcVar4 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar4 = pcVar6;
    }
    local_14 = local_14 * 0xd9c;
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    *(undefined1 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14) = 0;
    local_18 = in_ECX;
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      uVar7 = 0x7ff;
      if (uVar2 != 0x7ff) {
        cVar8 = 'N';
        pcVar5 = "ame: ";
        do {
          pcVar6[uVar2] = cVar8;
          uVar7 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar8 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          uVar2 = uVar7;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar7] = '\0';
    }
    pcVar6 = (char *)0x0;
    if (local_18 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      cVar8 = *local_18;
      pcVar5 = local_18;
      if (cVar8 != '\0') {
        pcVar9 = (char *)0x0;
        pcVar10 = local_18;
        do {
          pcVar6 = pcVar10;
          if (cVar8 != '/') {
            pcVar6 = pcVar9;
          }
          cVar8 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar6;
        } while (cVar8 != '\0');
      }
    }
    pcVar9 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    if (pcVar6 != (char *)0x0) {
      pcVar5 = pcVar6 + 1;
    }
    uVar7 = strlen(pcVar9);
    if (uVar7 < 0x800) {
      if (uVar7 != 0x7ff) {
        cVar8 = *pcVar5;
        uVar1 = uVar7;
        while (uVar7 = uVar1, cVar8 != '\0') {
          pcVar5 = pcVar5 + 1;
          pcVar9[uVar1] = cVar8;
          uVar7 = uVar1 + 1;
          if (0x7fd < uVar1) break;
          uVar1 = uVar7;
          cVar8 = *pcVar5;
        }
      }
      pcVar9[uVar7] = '\0';
    }
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      uVar7 = 0x7ff;
      if (uVar2 != 0x7ff) {
        cVar8 = '\n';
        pcVar5 = "Path: /";
        do {
          pcVar6[uVar2] = cVar8;
          uVar7 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar8 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          uVar2 = uVar7;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar7] = '\0';
    }
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    pcVar5 = "";
    if (local_18 != (char *)0x0) {
      pcVar5 = local_18;
    }
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      cVar8 = *pcVar5;
      uVar3 = uVar2;
      if (uVar2 != 0x7ff && cVar8 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          pcVar6[uVar3] = cVar8;
          uVar2 = uVar3 + 1;
          if (0x7fd < uVar3) break;
          cVar8 = *pcVar5;
          uVar3 = uVar2;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar2] = '\0';
    }
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      uVar7 = 0x7ff;
      if (uVar2 != 0x7ff) {
        cVar8 = '\n';
        pcVar5 = "Type: ";
        do {
          pcVar6[uVar2] = cVar8;
          uVar7 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar8 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          uVar2 = uVar7;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar7] = '\0';
    }
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    pcVar5 = "file";
    if ((local_1c != 0) &&
       ((*(int *)(local_1c + 0x1ec) == 2 || ((*(uint *)(local_1c + 0x1e8) & 2) != 0)))) {
      pcVar5 = "folder";
    }
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      cVar8 = *pcVar5;
      uVar3 = uVar2;
      if (uVar2 != 0x7ff && cVar8 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          pcVar6[uVar3] = cVar8;
          uVar2 = uVar3 + 1;
          if (0x7fd < uVar3) break;
          cVar8 = *pcVar5;
          uVar3 = uVar2;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar2] = '\0';
    }
    if (*pcVar4 != '\0') {
      pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
      uVar7 = strlen(pcVar6);
      if (uVar7 < 0x800) {
        if (uVar7 != 0x7ff) {
          cVar8 = *pcVar4;
          uVar1 = uVar7;
          while (uVar7 = uVar1, cVar8 != '\0') {
            pcVar4 = pcVar4 + 1;
            pcVar6[uVar1] = cVar8;
            uVar7 = uVar1 + 1;
            if (0x7fd < uVar1) break;
            uVar1 = uVar7;
            cVar8 = *pcVar4;
          }
        }
        pcVar6[uVar7] = '\0';
      }
    }
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      uVar7 = 0x7ff;
      if (uVar2 != 0x7ff) {
        cVar8 = '\n';
        pcVar4 = "Size: ";
        do {
          pcVar6[uVar2] = cVar8;
          uVar7 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar7;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar7] = '\0';
    }
    if (local_1c == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(local_1c + 0x1e4);
    }
    recovered_10015400((char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14),0x800,uVar7);
    pcVar6 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_14);
    uVar2 = strlen(pcVar6);
    if (uVar2 < 0x800) {
      uVar7 = 0x7ff;
      if (uVar2 != 0x7ff) {
        cVar8 = ' ';
        pcVar4 = "bytes";
        do {
          pcVar6[uVar2] = cVar8;
          uVar7 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar7;
        } while (cVar8 != '\0');
      }
      pcVar6[uVar7] = '\0';
    }
  }
  return;
}

#undef DAT_0181f2d4
#undef UNK_0181edda
#undef in_stack_ffffffb4
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f1a9
#define DAT_0181f1a9 (*(uint8_t *)(0x181f1a9U))
#undef DAT_0181f29c
#define DAT_0181f29c (*(uint8_t *)(0x181f29cU))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_0181f36d
#define DAT_0181f36d (*(uint8_t *)(0x181f36dU))
#undef DAT_018225d8
#define DAT_018225d8 (*(uint8_t *)(0x18225d8U))
#undef DAT_018225dc
#define DAT_018225dc (*(uint8_t *)(0x18225dcU))
#undef DAT_018225e0
#define DAT_018225e0 (*(uint8_t *)(0x18225e0U))
#undef DAT_018225e4
#define DAT_018225e4 (*(uint8_t *)(0x18225e4U))
#undef DAT_018225e8
#define DAT_018225e8 (*(uint8_t *)(0x18225e8U))
#undef DAT_018225ec
#define DAT_018225ec (*(uint8_t *)(0x18225ecU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define local_14 (*(undefined4 *)(frame + 60))
#define outImage (*(void ** *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 64))
#define local_24 (*(void * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_18 (*(undefined4 *)(frame + 56))
#define path (*(void ** *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019840(undefined *in_ECX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  code *pcVar3;
  uint uVar2;
  int iVar4;
  char cVar5;
  uint uVar6;

  outImage = (void **)0x18;
  memset(&local_24,0,0x18);
  iVar4 = Ram00006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xe3 < uVar2)) {
    pcVar3 = (code *)UINT_000068e0;
    if (pcVar3 == (code *)0x0) {
      return;
    }
    path = (void **)&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
    outImage = &local_24;
  }
  else {
    iVar4 = Ram00006800;
    if (iVar4 != 0x50414d57) {
      return;
    }
    iVar4 = Ram00006804;
    if (iVar4 == 0) {
      return;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0xc) {
      return;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0x5c) {
      return;
    }
    pcVar3 = (code *)UINT_00006858;
    if (pcVar3 == (code *)0x0) {
      return;
    }
    in_ECX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
    path = &local_24;
  }
  uVar2 = (*pcVar3)((int)in_ECX,(char *)path,outImage);
  if (uVar2 != 0) {
    if (((((*(uint32_t *)(pf_module_state+0x47a8U)) != (void *)0x0 && (*(uint32_t *)(pf_module_state+0x47acU)) == 0) &&
         (iVar4 = Ram00006800, iVar4 == 0x50414d57)) &&
        ((iVar4 = Ram00006804, iVar4 != 0 &&
         ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))))) &&
       (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)) {
      (*pcVar3)((*(uint32_t *)(pf_module_state+0x47a8U)));
    }
    memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x47a8U)),0,0x18);
    (*(uint32_t *)(pf_module_state+0x47a8U)) = local_24;
    (*(uint32_t *)(pf_module_state+0x47acU)) = local_20;
    (*(uint32_t *)(pf_module_state+0x47b0U)) = local_1c;
    (*(uint32_t *)(pf_module_state+0x47b4U)) = local_18;
    (*(uint32_t *)(pf_module_state+0x47b8U)) = local_14;
    (*(uint32_t *)(pf_module_state+0x47bcU)) = local_10;
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar6 = 0;
      cVar5 = (*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
      do {
        uVar2 = uVar6 + 1;
        (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1379U)))[uVar6] = cVar5;
        if (0xef < uVar2) break;
        cVar5 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x153dU)))[uVar6];
        uVar6 = uVar2;
      } while (cVar5 != '\0');
    }
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1379U)))[uVar2] = 0;
    bVar1 = recovered_1001abc0((*(uint32_t *)(pf_module_state+0x146cU)));
    if (!bVar1) {
      iVar4 = recovered_10004ab0();
      recovered_1001abc0(iVar4);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f1a9
#undef DAT_0181f29c
#undef DAT_0181f36c
#undef DAT_0181f36d
#undef DAT_018225d8
#undef DAT_018225dc
#undef DAT_018225e0
#undef DAT_018225e4
#undef DAT_018225e8
#undef DAT_018225ec
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef local_14
#undef outImage
#undef local_10
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef path

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_01823f74
#define DAT_01823f74 (*(uint8_t *)(0x1823f74U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006868
#define UINT_00006868 (*(uint *)(0x6868U))
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
#undef UINT_000068e4
#define UINT_000068e4 (*(uint *)(0x68e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019a00(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;

  pvVar4 = (*(uint32_t *)(pf_module_state+0x6144U));
  if (((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) != '\0') &&
     (uVar3 = recovered_1001b1a0(&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU))), pvVar4 = (*(uint32_t *)(pf_module_state+0x6144U)), (char)uVar3 != '\0')) {
    if ((*(uint32_t *)(pf_module_state+0x6144U)) != (void *)0x0) {
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar3 = Ram00006808, 0xb < uVar3)) &&
         ((uVar3 = Ram00006808, 0x7b < uVar3 &&
          (pcVar2 = (code *)UINT_00006878, pcVar2 != (code *)0x0)))) {
        (*pcVar2)((*(uint32_t *)(pf_module_state+0x6144U)));
      }
      (*(uint32_t *)(pf_module_state+0x6144U)) = (void *)0x0;
    }
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 && (uVar3 = Ram00006808, 0xe7 < uVar3)))) {
      pcVar2 = (code *)UINT_000068e4;
      if (pcVar2 == (code *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (*pcVar2)(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)),11.0);
      }
    }
    else {
      iVar1 = Ram00006800;
      pvVar4 = (void *)0x0;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar3 = Ram00006808, 0xb < uVar3)) &&
         ((uVar3 = Ram00006808, 0x6b < uVar3 &&
          (pcVar2 = (code *)UINT_00006868, pcVar2 != (code *)0x0)))) {
        pvVar4 = (*pcVar2)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)),11.0);
      }
    }
  }
  (*(uint32_t *)(pf_module_state+0x6144U)) = pvVar4;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f36c
#undef DAT_01823f74
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006868
#undef UINT_00006878
#undef UINT_000068e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019b20
 */

/* WARNING: Removing unreachable block (ram,0x10019cfc) */
/* WARNING: Removing unreachable block (ram,0x10019d04) */
/* WARNING: Removing unreachable block (ram,0x10019d93) */
/* WARNING: Removing unreachable block (ram,0x10019ca0) */
/* WARNING: Removing unreachable block (ram,0x10019ca8) */
/* WARNING: Removing unreachable block (ram,0x10019d85) */
/* WARNING: Removing unreachable block (ram,0x10019c44) */
/* WARNING: Removing unreachable block (ram,0x10019c4c) */
/* WARNING: Removing unreachable block (ram,0x10019d77) */
/* WARNING: Removing unreachable block (ram,0x10019be8) */
/* WARNING: Removing unreachable block (ram,0x10019bf0) */
/* WARNING: Removing unreachable block (ram,0x10019d69) */
/* WARNING: Removing unreachable block (ram,0x10019b8c) */
/* WARNING: Removing unreachable block (ram,0x10019b94) */
/* WARNING: Removing unreachable block (ram,0x10019d5b) */
/* WARNING: Removing unreachable block (ram,0x10019b30) */
/* WARNING: Removing unreachable block (ram,0x10019b38) */
/* WARNING: Removing unreachable block (ram,0x10019d4d) */
/* WARNING: Removing unreachable block (ram,0x10019b5e) */
/* WARNING: Removing unreachable block (ram,0x10019b66) */
/* WARNING: Removing unreachable block (ram,0x10019d54) */
/* WARNING: Removing unreachable block (ram,0x10019bba) */
/* WARNING: Removing unreachable block (ram,0x10019bc2) */
/* WARNING: Removing unreachable block (ram,0x10019d62) */
/* WARNING: Removing unreachable block (ram,0x10019c16) */
/* WARNING: Removing unreachable block (ram,0x10019c1e) */
/* WARNING: Removing unreachable block (ram,0x10019d70) */
/* WARNING: Removing unreachable block (ram,0x10019c72) */
/* WARNING: Removing unreachable block (ram,0x10019c7a) */
/* WARNING: Removing unreachable block (ram,0x10019d7e) */
/* WARNING: Removing unreachable block (ram,0x10019cce) */
/* WARNING: Removing unreachable block (ram,0x10019cd6) */
/* WARNING: Removing unreachable block (ram,0x10019d8c) */
/* WARNING: Removing unreachable block (ram,0x10019d26) */
/* WARNING: Removing unreachable block (ram,0x10019d2e) */
/* WARNING: Removing unreachable block (ram,0x10019d9a) */
/* WARNING: Removing unreachable block (ram,0x10019d9f) */

void recovered_10019b20(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_01820690
#define DAT_01820690 (*(uint8_t *)(0x1820690U))
#undef DAT_018207ac
#define DAT_018207ac (*(uint8_t *)(0x18207acU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UNK_018206b9
#define UNK_018206b9 (*(uint8_t *)(0x18206b9U))
#define local_80c (*(char (*)[2048])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019dc0
 */

void recovered_10019dc0(int in_ECX)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  ulong size;
  char in_DL;
  int iVar3;

  recovered_1001b5a0("",0x18,in_ECX,in_DL);
  local_80c[0] = '\0';
  iVar3 = 0;
  do {
    if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)))[iVar3] == '\x01') {
      recovered_1001aac0(local_80c,*(uint *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x297cU)) + iVar3),&(*(uint8_t *)((uintptr_t)pf_module_state+0x2889U)) + iVar3);
    }
    iVar3 = iVar3 + 0x124;
  } while (iVar3 != 0x1b60);
  size = strlen(local_80c);
  iVar3 = Ram00006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
      (uVar1 = Ram00006808, 0xb < uVar1)) &&
     ((uVar1 = Ram00006808, 0x3b < uVar1 && (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)("Tundra.desktop",local_80c,size);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_01820690
#undef DAT_018207ac
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef UNK_018206b9
#undef local_80c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_01820690
#define DAT_01820690 (*(uint8_t *)(0x1820690U))
#undef DAT_018207ac
#define DAT_018207ac (*(uint8_t *)(0x18207acU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UNK_018206b9
#define UNK_018206b9 (*(uint8_t *)(0x18206b9U))
#define local_810 (*(char (*)[2048])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019e90
 */

void recovered_10019e90(int in_ECX)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong size;
  int iVar4;
  char *dst;

  iVar4 = 0x18;
  dst = "";
  while (((*dst != '\x01' || (*(int *)(dst + 0x11c) != in_ECX)) ||
         (iVar3 = strcmp(dst + 0x29,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU))), iVar3 != 0))) {
    dst = dst + 0x124;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  }
  memset(dst,0,0x124);
  local_810[0] = '\0';
  iVar4 = 0;
  do {
    if ((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)))[iVar4] == '\x01') {
      recovered_1001aac0(local_810,*(uint *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x297cU)) + iVar4),&(*(uint8_t *)((uintptr_t)pf_module_state+0x2889U)) + iVar4);
    }
    iVar4 = iVar4 + 0x124;
  } while (iVar4 != 0x1b60);
  size = strlen(local_810);
  iVar4 = Ram00006800;
  if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
     ((uVar1 = Ram00006808, 0xb < uVar1 &&
      ((uVar1 = Ram00006808, 0x3b < uVar1 && (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0)
       ))))) {
    (*pcVar2)("Tundra.desktop",local_810,size);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f36c
#undef DAT_01820690
#undef DAT_018207ac
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef UNK_018206b9
#undef local_810

#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019fa0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if (((*(char *)(iVar1 + iVar3) == '\x01') && (*(int *)(iVar1 + 4 + iVar3) == 5)) &&
       (*(int *)(iVar1 + 0x124 + iVar3) == in_ECX)) {
      iVar2 = strcmp((char *)(iVar1 + 0x30 + iVar3),&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)));
      iVar1 = (*(uint32_t *)(pf_module_state+0x1aa8U));
      if (iVar2 == 0) {
        memset((void *)((*(uint32_t *)(pf_module_state+0x1aa8U)) + iVar3),0,300);
        recovered_10019130();
        return;
      }
    }
    iVar3 = iVar3 + 300;
  } while (iVar3 != 0x1518);
  return;
}

#undef DAT_0181f36c
#undef DAT_0181f8d8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000691c
#define UINT_0000691c (*(uint *)(0x691cU))
#undef UINT_00006920
#define UINT_00006920 (*(uint *)(0x6920U))
#undef UNK_0181f044
#define UNK_0181f044 (*(uint8_t *)(0x181f044U))
#undef UNK_0181f050
#define UNK_0181f050 (*(uint8_t *)(0x181f050U))
#undef UNK_0181f05c
#define UNK_0181f05c (*(uint8_t *)(0x181f05cU))
#undef UNK_0181f068
#define UNK_0181f068 (*(uint8_t *)(0x181f068U))
#define local_1fe (*(undefined4 *)(frame + 18))
#define local_1fa (*(undefined2 *)(frame + 22))
#define local_1c (*(void * *)(frame + 500))
#define local_18 (*(uint *)(frame + 504))
#define local_14 (*(int *)(frame + 508))
#define acStack_10e (*(char (*)[242])(frame + 258))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a020(int in_ECX,undefined4 in_EDX)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int iVar19;

  bVar3 = 1;
  switch((uintptr_t)(in_EDX)) {
  case 1:
    puVar18 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x1214U));
    break;
  case 2:
    puVar18 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x1220U));
    break;
  case 3:
    puVar18 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x122cU));
    break;
  default:
    bVar3 = 0;
    puVar18 = (uint *)0x0;
    break;
  case 5:
    puVar18 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x1238U));
  }
  if (in_ECX == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0xb08) == 0) {
    local_1c = *(void **)(in_ECX + 0xb04);
  }
  else {
    local_1c = (void *)0x0;
  }
  if (((!(bool)(bVar3 & local_1c != (void *)0x0)) || (*(int *)(in_ECX + 0xb10) == 0)) ||
     (*(int *)(in_ECX + 0xb14) == 0)) {
    *(undefined4 *)(in_ECX + 0x261) = 0x69206f4e;
    *(undefined4 *)(in_ECX + 0x265) = 0x6567616d;
    *(undefined4 *)(in_ECX + 0x269) = 0x206f7420;
    *(undefined4 *)(in_ECX + 0x26d) = 0x6f707865;
    *(undefined2 *)(in_ECX + 0x271) = 0x7472;
    *(undefined1 *)(in_ECX + 0x273) = 0;
    return;
  }
  cVar4 = *(char *)(in_ECX + 0x78);
  puVar10 = (undefined4 *)0x0;
  uVar13 = 0;
  if (cVar4 != '\0') {
    uVar16 = 0;
    do {
      uVar13 = uVar16 + 1;
      *(char *)((int)&local_1fe + uVar16) = cVar4;
      if (0xef < uVar13) break;
      cVar4 = *(char *)(in_ECX + 0x79 + uVar16);
      uVar16 = uVar13;
    } while (cVar4 != '\0');
  }
  *(undefined1 *)((int)&local_1fe + uVar13) = 0;
  uVar13 = local_1fe & 0xff;
  if ((char)local_1fe != '\0') {
    puVar14 = &local_1fe;
    uVar13 = (uint)CONCAT11((char)local_1fe,(char)local_1fe);
    puVar17 = (undefined4 *)0x0;
    do {
      puVar10 = puVar14;
      if ((char)(uVar13 >> 8) != '/') {
        puVar10 = puVar17;
      }
      pcVar11 = (char *)((int)puVar14 + 1);
      uVar13 = (uint)CONCAT11(*pcVar11,(char)uVar13);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar17 = puVar10;
    } while (*pcVar11 != '\0');
  }
  if (puVar10 == (undefined4 *)0x0) {
    pcVar11 = (char *)&local_1fe;
  }
  else {
    pcVar11 = (char *)((int)puVar10 + 1);
  }
  uVar13 = (uint)CONCAT11(*pcVar11,(char)uVar13);
  if (*pcVar11 != '\0') {
    pcVar12 = (char *)0x0;
    do {
      pcVar15 = pcVar11;
      if ((char)(uVar13 >> 8) != '.') {
        pcVar15 = pcVar12;
      }
      pcVar1 = pcVar11 + 1;
      uVar13 = (uint)CONCAT11(*pcVar1,(char)uVar13);
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar15;
    } while (*pcVar1 != '\0');
    if (pcVar15 != (char *)0x0) {
      *pcVar15 = '\0';
      uVar13 = local_1fe & 0xff;
    }
  }
  if ((char)uVar13 == '\0') {
    local_1fe = 0x67616d69;
    local_1fa = 0x65;
    uVar13 = 0x69;
  }
  local_14 = in_ECX;
  uVar16 = 1;
  do {
    uVar7 = uVar16;
    acStack_10e[uVar7] = (char)uVar13;
    if (0xef < uVar7) break;
    uVar13 = (uint)*(byte *)((int)&local_1fe + uVar7);
    uVar16 = uVar7 + 1;
  } while (*(byte *)((int)&local_1fe + uVar7) != 0);
  acStack_10e[uVar7 + 1] = '\0';
  uVar5 = strlen(acStack_10e + 1);
  if (uVar5 < 0xf1) {
    uVar13 = 0xf0;
    if (uVar5 != 0xf0) {
      cVar4 = '-';
      pcVar11 = "export";
      do {
        acStack_10e[uVar5 + 1] = cVar4;
        uVar13 = uVar5 + 1;
        if (0xee < uVar5) break;
        cVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        uVar5 = uVar13;
      } while (cVar4 != '\0');
    }
    acStack_10e[uVar13 + 1] = '\0';
  }
  pcVar11 = (char *)puVar18[2];
  uVar13 = strlen(acStack_10e + 1);
  iVar9 = local_14;
  if (uVar13 < 0xf1) {
    pcVar12 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar12 = pcVar11;
    }
    if (uVar13 != 0xf0) {
      cVar4 = *pcVar12;
      uVar16 = uVar13;
      while (uVar13 = uVar16, cVar4 != '\0') {
        pcVar12 = pcVar12 + 1;
        acStack_10e[uVar16 + 1] = cVar4;
        uVar13 = uVar16 + 1;
        if (0xee < uVar16) break;
        uVar16 = uVar13;
        cVar4 = *pcVar12;
      }
    }
    acStack_10e[uVar13 + 1] = '\0';
  }
  local_18 = *(uint *)(iVar9 + 0xb10);
  iVar8 = Ram00006800;
  if (((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
     ((uVar13 = Ram00006808, 0xb < uVar13 && (uVar13 = Ram00006808, 0x123 < uVar13)))) {
    pcVar2 = (code *)UINT_00006920;
    if (pcVar2 == (code *)0x0) goto LAB_1001a457;
    uVar13 = (*pcVar2)(*(int *)(iVar9 + 0x25c),acStack_10e + 1,local_1c,local_18,
                       *(uint *)(iVar9 + 0xb14),*(uint *)(iVar9 + 0xb18),*puVar18);
  }
  else {
    iVar8 = Ram00006800;
    if (((iVar8 != 0x50414d57) || (iVar8 = Ram00006804, iVar8 == 0)) ||
       ((uVar13 = Ram00006808, uVar13 < 0xc ||
        ((uVar13 = Ram00006808, uVar13 < 0x120 ||
         (pcVar2 = (code *)UINT_0000691c, pcVar2 == (code *)0x0)))))) goto LAB_1001a457;
    uVar13 = (*pcVar2)(acStack_10e + 1,local_1c,local_18,*(uint *)(iVar9 + 0xb14),
                       *(uint *)(iVar9 + 0xb18),*puVar18);
  }
  iVar9 = local_14;
  if (uVar13 != 0) {
    pcVar11 = (char *)(local_14 + 0x261);
    *(undefined4 *)(local_14 + 0x261) = 0x6f707845;
    *(undefined4 *)(local_14 + 0x265) = 0x64657472;
    *(undefined2 *)(local_14 + 0x269) = 0x2f20;
    *(undefined1 *)(local_14 + 0x26b) = 0;
    uVar5 = strlen(pcVar11);
    if (uVar5 < 0x800) {
      if (uVar5 != 0x7ff && acStack_10e[1] != '\0') {
        pcVar12 = acStack_10e + 2;
        uVar6 = uVar5;
        do {
          pcVar11[uVar6] = acStack_10e[1];
          uVar5 = uVar6 + 1;
          if (0x7fd < uVar6) break;
          acStack_10e[1] = *pcVar12;
          pcVar12 = pcVar12 + 1;
          uVar6 = uVar5;
        } while (acStack_10e[1] != '\0');
      }
      pcVar11[uVar5] = '\0';
    }
    iVar9 = *(int *)(local_14 + 0x25c);
    iVar19 = 0;
    iVar8 = (*(uint32_t *)(pf_module_state+0x14a4U));
    do {
      if (((*(char *)(iVar8 + iVar19) == '\x01') && (*(int *)(iVar8 + 0x10 + iVar19) == 0)) &&
         (*(int *)(iVar8 + 0x25c + iVar19) == iVar9)) {
        recovered_1000b9e0(iVar8 + iVar19);
        iVar8 = (*(uint32_t *)(pf_module_state+0x14a4U));
      }
      iVar19 = iVar19 + 0xd9c;
    } while (iVar19 != 0x11030);
    return;
  }
LAB_1001a457:
  *(undefined4 *)(iVar9 + 0x261) = 0x6f707845;
  *(undefined4 *)(iVar9 + 0x265) = 0x66207472;
  *(undefined4 *)(iVar9 + 0x269) = 0x656c6961;
  *(undefined2 *)(iVar9 + 0x26d) = 100;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2d4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000691c
#undef UINT_00006920
#undef UNK_0181f044
#undef UNK_0181f050
#undef UNK_0181f05c
#undef UNK_0181f068
#undef local_1fe
#undef local_1fa
#undef local_1c
#undef local_18
#undef local_14
#undef acStack_10e

#undef DAT_018221f0
#define DAT_018221f0 (*(uint8_t *)(0x18221f0U))
#undef DAT_018221f1
#define DAT_018221f1 (*(uint8_t *)(0x18221f1U))
#undef DAT_018221f2
#define DAT_018221f2 (*(byte *)(0x18221f2U))
#undef DAT_018222e4
#define DAT_018222e4 (*(uint8_t *)(0x18222e4U))
#undef DAT_018223d8
#define DAT_018223d8 (*(uint8_t *)(0x18223d8U))
#undef UNK_018221f3
#define UNK_018221f3 (*(uint8_t *)(0x18221f3U))
#undef UNK_018222e5
#define UNK_018222e5 (*(uint8_t *)(0x18222e5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a490(int in_ECX,uint in_EDX,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;

  if ((int)in_EDX < 0 || in_ECX == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0xaf0) <= in_EDX) {
    return;
  }
  iVar2 = *(int *)(in_ECX + 0xaec);
  pcVar1 = (char *)(iVar2 + in_EDX * 0x1f8);
  (*(uint8_t *)((uintptr_t)pf_module_state+0x43c0U)) = 1;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x43c1U)) = param_3;
  uVar3 = 0;
  if (iVar2 == 0) {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x43c2U)) = 0;
  }
  else {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x43c2U)) = 1;
    if (*(int *)(pcVar1 + 0x1ec) != 2) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x43c2U)) = (byte)pcVar1[0x1e8] >> 1 & 1;
    }
  }
  cVar6 = pcVar1[0xf1];
  if (cVar6 != '\0') {
    uVar4 = 0;
    do {
      uVar3 = uVar4 + 1;
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x43c3U)))[uVar4] = cVar6;
      if (0xef < uVar3) break;
      cVar6 = *(char *)(in_EDX * 0x1f8 + 0xf2 + iVar2 + uVar4);
      uVar4 = uVar3;
    } while (cVar6 != '\0');
  }
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x43c3U)))[uVar3] = 0;
  pcVar5 = "";
  if (iVar2 != 0) {
    pcVar5 = pcVar1;
  }
  cVar6 = *pcVar1;
  if (cVar6 == '\0') {
    (*(uint8_t *)((uintptr_t)pf_module_state+0x44b4U)) = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x44b4U)))[uVar4] = cVar6;
      if (0xef < uVar4 + 1) break;
      cVar6 = pcVar5[uVar4 + 1];
      uVar3 = uVar4 + 1;
    } while (cVar6 != '\0');
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x44b5U)))[uVar4] = 0;
    if (iVar2 == 0) goto LAB_1001a59c;
  }
  if (-1 < *(int *)(pcVar1 + 0x1f0)) {
    (*(uint32_t *)(pf_module_state+0x45a8U)) = *(int *)(pcVar1 + 0x1f0);
    return;
  }
LAB_1001a59c:
  (*(uint32_t *)(pf_module_state+0x45a8U)) = *(undefined4 *)(in_ECX + 0x25c);
  return;
}

#undef DAT_018221f0
#undef DAT_018221f1
#undef DAT_018221f2
#undef DAT_018222e4
#undef DAT_018223d8
#undef UNK_018221f3
#undef UNK_018222e5

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_018221f0
#define DAT_018221f0 (*(char *)(0x18221f0U))
#undef DAT_018221f1
#define DAT_018221f1 (*(char *)(0x18221f1U))
#undef DAT_018221f2
#define DAT_018221f2 (*(char *)(0x18221f2U))
#undef DAT_018222e4
#define DAT_018222e4 (*(uint8_t *)(0x18222e4U))
#undef DAT_018223d8
#define DAT_018223d8 (*(uint8_t *)(0x18223d8U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
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
#define path (*(char * *)(frame + 20))
#define local_111 (*(char (*)[241])(frame + 47))
#define local_20 (*(void * *)(frame + 288))
#define local_1c (*(uint *)(frame + 292))
#define local_14 (*(void * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a5b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a5b0(int in_ECX)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (in_ECX == 0) {
    return;
  }
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x43c0U)) != '\x01') {
    return;
  }
  recovered_1000ffc0((char *)(in_ECX + 0x78),&(*(uint8_t *)((uintptr_t)pf_module_state+0x44b4U)),local_111);
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x43c1U)) == '\x01') {
    if ((*(uint32_t *)(pf_module_state+0x45a8U)) == *(int *)(in_ECX + 0x25c)) {
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xdb < uVar2)) {
        pcVar3 = (code *)UINT_000068d8;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)((*(uint32_t *)(pf_module_state+0x45a8U)),"",local_111);
        }
      }
      else {
        iVar1 = Ram00006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
           ((uVar2 = Ram00006808, 0xb < uVar2 &&
            ((uVar2 = Ram00006808, 0x8b < uVar2 &&
             (pcVar3 = (code *)UINT_00006888, pcVar3 != (code *)0x0)))))) {
          (*pcVar3)("",local_111);
        }
      }
    }
    (*(uint8_t *)((uintptr_t)pf_module_state+0x43c0U)) = '\0';
    goto LAB_1001a793;
  }
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x43c2U)) == '\x01') {
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xdf < uVar2)) {
      pcVar3 = (code *)UINT_000068dc;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(int *)(in_ECX + 0x25c),local_111);
      }
      goto LAB_1001a793;
    }
    iVar1 = Ram00006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
       ((uVar2 = Ram00006808, uVar2 < 0xc ||
        ((uVar2 = Ram00006808, uVar2 < 0x90 ||
         (pcVar3 = (code *)UINT_0000688c, pcVar3 == (code *)0x0)))))) goto LAB_1001a793;
    path = local_111;
  }
  else {
    memset(&local_20,0,0xc);
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xcb < uVar2)) {
      pcVar3 = (code *)UINT_000068c8;
      if (pcVar3 == (code *)0x0) goto LAB_1001a793;
      uVar2 = (*pcVar3)((*(uint32_t *)(pf_module_state+0x45a8U)),"",&local_20);
    }
    else {
      iVar1 = Ram00006800;
      if (((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
         ((uVar2 = Ram00006808, uVar2 < 0xc ||
          ((uVar2 = Ram00006808, uVar2 < 0x38 ||
           (pcVar3 = (code *)UINT_00006834, pcVar3 == (code *)0x0)))))) goto LAB_1001a793;
      uVar2 = (*pcVar3)("",&local_20);
    }
    if (uVar2 == 0) goto LAB_1001a793;
    path = *(char **)(in_ECX + 0x25c);
    local_14 = local_20;
    iVar1 = Ram00006800;
    if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
        (uVar2 = Ram00006808, uVar2 < 0xc)) || (uVar2 = Ram00006808, uVar2 < 0xd4)) {
      iVar1 = Ram00006800;
      if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
         ((uVar2 = Ram00006808, 0xb < uVar2 &&
          ((uVar2 = Ram00006808, 0x3b < uVar2 &&
           (pcVar3 = (code *)UINT_00006838, pcVar3 != (code *)0x0)))))) {
        (*pcVar3)(local_111,local_20,local_1c);
      }
      goto LAB_1001a793;
    }
    pcVar3 = (code *)UINT_000068d0;
    if (pcVar3 == (code *)0x0) goto LAB_1001a793;
  }
  (*pcVar3)(path);
LAB_1001a793:
  recovered_1000b9e0(in_ECX);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_018221f0
#undef DAT_018221f1
#undef DAT_018221f2
#undef DAT_018222e4
#undef DAT_018223d8
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_00006888
#undef UINT_0000688c
#undef UINT_000068c8
#undef UINT_000068d0
#undef UINT_000068d8
#undef UINT_000068dc
#undef path
#undef local_111
#undef local_20
#undef local_1c
#undef local_14

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_2c (*(int *)(frame + 36))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_24 (*(undefined4 *)(frame + 44))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_18 (*(undefined4 *)(frame + 56))
#define in_stack_ffffffc4 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a8e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a8e0(undefined4 in_ECX,int in_EDX,undefined4 param_3,char *param_4,char *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;

  local_30 = CONCAT13(PF_PART1(local_30, 3),0xd6d6d6);
  local_2c = recovered_10004490(2,"Info",CONCAT13((char)((uint)in_stack_ffffffc4 >> 0x18),0xd6d6d6),
                                '\0');
  local_30 = 4;
  local_28 = param_3;
  local_24 = 0x124;
  local_20 = 0x9c;
  local_1c = 0x17c;
  local_18 = 0x92;
  iVar3 = recovered_1000b630(&local_30);
  iVar2 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if (-1 < iVar3) {
    iVar3 = iVar3 * 0xd9c;
    *(undefined4 *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0xae4 + iVar3) = in_ECX;
    *(int *)(iVar2 + 0xae8 + iVar3) = in_EDX;
    if ((-1 < in_EDX) && (*(char *)(iVar2 + in_EDX * 0xd9c) == '\x01')) {
      *(undefined4 *)(iVar2 + 0x25c + iVar3) = *(undefined4 *)(in_EDX * 0xd9c + iVar2 + 0x25c);
    }
    pcVar7 = "";
    if (param_4 != (char *)0x0) {
      pcVar7 = param_4;
    }
    iVar1 = iVar2 + 0x261 + iVar3;
    cVar5 = *pcVar7;
    if (cVar5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar4 = uVar6 + 1;
        *(char *)(iVar1 + uVar6) = cVar5;
        if (0x7fe < uVar4) break;
        cVar5 = pcVar7[uVar6 + 1];
        uVar6 = uVar4;
      } while (cVar5 != '\0');
    }
    *(undefined1 *)(iVar1 + uVar4) = 0;
    pcVar7 = "";
    if (param_5 != (char *)0x0) {
      pcVar7 = param_5;
    }
    iVar3 = iVar2 + 0xa61 + iVar3;
    cVar5 = *pcVar7;
    if (cVar5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar4 = uVar6 + 1;
        *(char *)(iVar3 + uVar6) = cVar5;
        if (0x7e < uVar4) break;
        cVar5 = pcVar7[uVar6 + 1];
        uVar6 = uVar4;
      } while (cVar5 != '\0');
    }
    *(undefined1 *)(iVar3 + uVar4) = 0;
  }
  return;
}

#undef DAT_0181f2d4
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef in_stack_ffffffc4

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#undef UINT_000068d4
#define UINT_000068d4 (*(uint *)(0x68d4U))
#define in_stack_fffffff8 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aa40
 */

void recovered_1001aa40(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xd7 < uVar2)) {
    pcVar3 = (code *)UINT_000068d4;
    if (pcVar3 == (code *)0x0) {
      return;
    }
    in_stack_fffffff8 = in_EDX;
  }
  else {
    iVar1 = Ram00006800;
    if (iVar1 != 0x50414d57) {
      return;
    }
    iVar1 = Ram00006804;
    if (iVar1 == 0) {
      return;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0xc) {
      return;
    }
    uVar2 = Ram00006808;
    if (uVar2 < 0x40) {
      return;
    }
    pcVar3 = (code *)UINT_0000683c;
    if (pcVar3 == (code *)0x0) {
      return;
    }
    in_ECX = in_EDX;
  }
  (*pcVar3)((int)in_ECX,in_stack_fffffff8);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000683c
#undef UINT_000068d4
#undef in_stack_fffffff8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aac0
 */

void recovered_1001aac0(char *in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;

  if ((int)in_EDX < 0) {
    if (in_ECX != (char *)0x0) {
      uVar1 = strlen(in_ECX);
      if (uVar1 < 0x800) {
        iVar4 = 0x7ff;
        if (uVar1 != 0x7ff) {
          iVar4 = uVar1 + 1;
          in_ECX[uVar1] = '-';
        }
        in_ECX[iVar4] = '\0';
      }
    }
    in_EDX = -in_EDX;
  }
  recovered_10015400(in_ECX,0x800,in_EDX);
  if (in_ECX != (char *)0x0) {
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x800) {
      iVar4 = 0x7ff;
      if (uVar1 != 0x7ff) {
        iVar4 = uVar1 + 1;
        in_ECX[uVar1] = '|';
      }
      in_ECX[iVar4] = '\0';
    }
    pcVar5 = "";
    if (param_3 != (char *)0x0) {
      pcVar5 = param_3;
    }
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x800) {
      cVar3 = *pcVar5;
      uVar2 = uVar1;
      if (uVar1 != 0x7ff && cVar3 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          in_ECX[uVar2] = cVar3;
          uVar1 = uVar2 + 1;
          if (0x7fd < uVar2) break;
          cVar3 = *pcVar5;
          uVar2 = uVar1;
        } while (cVar3 != '\0');
      }
      in_ECX[uVar1] = '\0';
    }
    uVar1 = strlen(in_ECX);
    if (uVar1 < 0x800) {
      iVar4 = 0x7ff;
      if (uVar1 != 0x7ff) {
        iVar4 = uVar1 + 1;
        in_ECX[uVar1] = '\n';
      }
      in_ECX[iVar4] = '\0';
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
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_000068d0
#define UINT_000068d0 (*(uint *)(0x68d0U))
#undef UNK_0181edb4
#define UNK_0181edb4 (*(uint8_t *)(0x181edb4U))
#define acStack_1035 (*(char (*)[4097])(frame + 4123))
#define local_34 (*(void * *)(frame + 8220))
#define local_30 (*(uint *)(frame + 8224))
#define local_28 (*(ulong *)(frame + 8232))
#define local_24 (*(int *)(frame + 8236))
#define local_20 (*(uint *)(frame + 8240))
#define local_1c (*(uint *)(frame + 8244))
#define local_18 (*(uint *)(frame + 8248))
#define local_11 (*(bool *)(frame + 8255))
#define abStack_2035 (*(byte (*)[4096])(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001abc0
 */

bool recovered_1001abc0(int in_ECX)

{
  unsigned char frame[8304] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte *src;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (in_ECX < 0) {
    in_ECX = recovered_10004ab0();
  }
  if (in_ECX < 0) {
    return false;
  }
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) == '\0') {
    return false;
  }
  local_24 = in_ECX;
  memset(&local_34,0,0xc);
  abStack_2035[1] = 0;
  acStack_1035[1] = 0;
  iVar5 = Ram00006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xcb < uVar3)) {
    pcVar2 = (code *)UINT_000068c8;
    if (pcVar2 == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*pcVar2)(local_24,"/Tundra-config.ws",&local_34);
    }
  }
  else {
    iVar5 = Ram00006800;
    uVar3 = 0;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar10 = Ram00006808, 0xb < uVar10 &&
        ((uVar10 = Ram00006808, 0x37 < uVar10 &&
         (pcVar2 = (code *)UINT_00006834, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)("/Tundra-config.ws",&local_34);
    }
  }
  if (local_30 != 0 && (local_34 != (void *)0x0 && uVar3 != 0)) {
    if (0xfff < local_30) {
      return false;
    }
    memcpy(abStack_2035 + 1,local_34,local_30);
    abStack_2035[local_30 + 1] = 0;
    if (local_30 != 0) {
      local_18 = 0;
      uVar3 = 0;
      local_1c = local_30;
LAB_1001ad10:
      uVar10 = uVar3 + 1;
      uVar8 = local_1c;
      if (local_1c <= uVar10) {
        uVar8 = uVar10;
      }
      local_11 = true;
      local_20 = uVar3;
      if (abStack_2035[uVar3 + 1] != 10) {
        do {
          uVar9 = uVar10;
          local_20 = uVar8;
          if (uVar8 == uVar9) goto LAB_1001ad46;
          uVar10 = uVar9 + 1;
        } while (abStack_2035[uVar9 + 1] != 10);
        local_20 = uVar9;
LAB_1001ad46:
        local_11 = uVar9 < local_1c;
      }
      src = abStack_2035 + uVar3 + 1;
      uVar10 = local_20 - uVar3;
      uVar4 = strlen("background");
      if (uVar4 != 0) {
        uVar8 = 0;
        if (uVar10 != 0) {
          do {
            if ((0x17 < src[uVar8] - 9) || ((0x800011U >> (src[uVar8] - 9 & 0x1f) & 1) == 0))
            goto LAB_1001ad98;
            uVar8 = uVar8 + 1;
          } while (uVar10 != uVar8);
          uVar8 = uVar10;
        }
LAB_1001ad98:
        if ((uVar8 + 1 < uVar10) && (src[uVar8] == 0x40)) {
          if ((uVar8 < uVar10) && (abStack_2035[uVar8 + uVar3 + 2] != 0x40)) goto LAB_1001adc4;
        }
        else if (uVar8 < uVar10) {
LAB_1001adc4:
          uVar9 = uVar8;
          do {
            if (src[uVar9] == 0x3d) {
              if (uVar8 < uVar9) goto LAB_1001adf0;
              goto LAB_1001ae09;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
      }
      goto LAB_1001ae30;
    }
  }
LAB_1001af33:
  pcVar1 = acStack_1035 + 1;
  uVar4 = strlen(pcVar1);
  if ((uVar4 != 0) && (pcVar1[uVar4 - 1] != '\n')) {
    uVar4 = strlen("\n");
    uVar6 = strlen(pcVar1);
    if ((-(uVar6 - 0x1000) < uVar4 || -uVar4 == uVar6 - 0x1000) || 0xfff < uVar6) {
      return false;
    }
    memcpy(acStack_1035 + uVar6 + 1,&(*(uint8_t *)((uintptr_t)pf_module_state+0xf84U)),uVar4);
    (acStack_1035 + uVar6 + 1)[uVar4] = '\0';
  }
  uVar7 = recovered_1001b080(acStack_1035 + 1,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)));
  if ((char)uVar7 == '\0') {
    return false;
  }
LAB_1001afbc:
  pcVar1 = acStack_1035 + 1;
  uVar4 = strlen(pcVar1);
  iVar5 = Ram00006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xd3 < uVar3)) {
    pcVar2 = (code *)UINT_000068d0;
    if (pcVar2 == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*pcVar2)(local_24,"/Tundra-config.ws",pcVar1,uVar4);
    }
  }
  else {
    iVar5 = Ram00006800;
    uVar3 = 0;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar10 = Ram00006808, 0xb < uVar10 &&
        ((uVar10 = Ram00006808, 0x3b < uVar10 &&
         (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)("/Tundra-config.ws",pcVar1,uVar4);
    }
  }
  return uVar3 != 0;
  while (uVar9 = uVar9 - 1, uVar8 < uVar9) {
LAB_1001adf0:
    if ((0x17 < abStack_2035[uVar9 + uVar3] - 9) ||
       ((0x800011U >> (abStack_2035[uVar9 + uVar3] - 9 & 0x1f) & 1) == 0)) goto LAB_1001ae09;
  }
  uVar9 = uVar8;
LAB_1001ae09:
  local_28 = uVar4;
  if ((uVar9 - uVar8 == uVar4) &&
     (iVar5 = strncmp((char *)(src + uVar8),"background",uVar4), iVar5 == 0)) {
    if ((local_18 & 1) == 0) {
      uVar7 = recovered_1001b080(acStack_1035 + 1,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)));
      local_18 = CONCAT31((int3)((uint)uVar7 >> 8),1);
      if ((char)uVar7 == '\0') {
        return false;
      }
    }
    else {
      local_18 = 1;
    }
  }
  else {
LAB_1001ae30:
    uVar4 = strlen(acStack_1035 + 1);
    if (0xfff < uVar4) {
      return false;
    }
    if (0x1000 - uVar4 <= uVar10) {
      return false;
    }
    memcpy(acStack_1035 + uVar4 + 1,src,uVar10);
    (acStack_1035 + uVar4 + 1)[uVar10] = '\0';
    if (local_11 != false) {
      uVar4 = strlen("\n");
      uVar6 = strlen(acStack_1035 + 1);
      if (0xfff < uVar6) {
        return false;
      }
      if (0x1000 - uVar6 <= uVar4) {
        return false;
      }
      memcpy(acStack_1035 + uVar6 + 1,&(*(uint8_t *)((uintptr_t)pf_module_state+0xf84U)),uVar4);
      (acStack_1035 + uVar6 + 1)[uVar4] = '\0';
    }
  }
  uVar3 = local_20 + local_11;
  if (local_1c <= uVar3) goto LAB_1001af29;
  goto LAB_1001ad10;
LAB_1001af29:
  if ((local_18 & 1) != 0) goto LAB_1001afbc;
  goto LAB_1001af33;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f36c
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_000068c8
#undef UINT_000068d0
#undef UNK_0181edb4
#undef acStack_1035
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef abStack_2035

#undef UNK_0181ee19
#define UNK_0181ee19 (*(uint8_t *)(0x181ee19U))
#undef UNK_0181ee28
#define UNK_0181ee28 (*(uint8_t *)(0x181ee28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b080
 */

undefined4 recovered_1001b080(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong n;

  uVar1 = strlen("background = \"");
  if (in_ECX != (char *)0x0) {
    uVar2 = strlen(in_ECX);
    n = 0;
    if ((-(uVar2 - 0x1000) < uVar1 || -uVar1 == uVar2 - 0x1000) || 0xfff < uVar2) {
      return 0;
    }
    memcpy(in_ECX + uVar2,&(*(uint8_t *)((uintptr_t)pf_module_state+0xfe9U)),uVar1);
    (in_ECX + uVar2)[uVar1] = '\0';
    if (in_EDX == (char *)0x0) {
      in_EDX = "";
    }
    else {
      n = strlen(in_EDX);
    }
    uVar1 = strlen(in_ECX);
    if ((n <= -(uVar1 - 0x1000) && -n != uVar1 - 0x1000) && uVar1 < 0x1000) {
      memcpy(in_ECX + uVar1,in_EDX,n);
      (in_ECX + uVar1)[n] = '\0';
      uVar1 = strlen("\"\n");
      uVar2 = strlen(in_ECX);
      if ((uVar1 <= -(uVar2 - 0x1000) && -uVar1 != uVar2 - 0x1000) && uVar2 < 0x1000) {
        memcpy(in_ECX + uVar2,&(*(uint8_t *)((uintptr_t)pf_module_state+0xff8U)),uVar1);
        (in_ECX + uVar2)[uVar1] = '\0';
        return CONCAT31((int3)(n >> 8),1);
      }
    }
  }
  return 0;
}

#undef UNK_0181ee19
#undef UNK_0181ee28

#undef UNK_0181ee2b
#define UNK_0181ee2b (*(uint8_t *)(0x181ee2bU))
#undef UNK_0181ee30
#define UNK_0181ee30 (*(uint8_t *)(0x181ee30U))
#undef UNK_0181ee35
#define UNK_0181ee35 (*(uint8_t *)(0x181ee35U))
#undef UNK_0181ee39
#define UNK_0181ee39 (*(uint8_t *)(0x181ee39U))
#undef UNK_0181ee3e
#define UNK_0181ee3e (*(uint8_t *)(0x181ee3eU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b1a0
 */

uint recovered_1001b1a0(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;

  pcVar3 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    pcVar2 = "";
  }
  else {
    cVar5 = *in_ECX;
    if (cVar5 != '\0') {
      pcVar2 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar3 = pcVar2;
        if (cVar5 != '/') {
          pcVar3 = pcVar7;
        }
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar3;
      } while (cVar5 != '\0');
    }
    pcVar2 = in_ECX;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3 + 1;
    }
  }
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)0x0;
    do {
      pcVar3 = pcVar2;
      if (cVar5 != '.') {
        pcVar3 = pcVar7;
      }
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar3;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  iVar4 = 0;
  do {
    bVar1 = pcVar2[iVar4];
    bVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xffbU)))[iVar4];
    if ((bVar1 == 0) || (bVar6 == 0)) {
      if (bVar1 == bVar6) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      break;
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar1 == bVar6);
  pcVar3 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    pcVar2 = "";
  }
  else {
    cVar5 = *in_ECX;
    if (cVar5 != '\0') {
      pcVar2 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar3 = pcVar2;
        if (cVar5 != '/') {
          pcVar3 = pcVar7;
        }
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar3;
      } while (cVar5 != '\0');
    }
    pcVar2 = in_ECX;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3 + 1;
    }
  }
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)0x0;
    do {
      pcVar3 = pcVar2;
      if (cVar5 != '.') {
        pcVar3 = pcVar7;
      }
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar3;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  iVar4 = 0;
  do {
    bVar1 = pcVar2[iVar4];
    bVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1000U)))[iVar4];
    if ((bVar1 == 0) || (bVar6 == 0)) {
      if (bVar1 == bVar6) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      break;
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar1 == bVar6);
  pcVar3 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    pcVar2 = "";
  }
  else {
    cVar5 = *in_ECX;
    if (cVar5 != '\0') {
      pcVar2 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar3 = pcVar2;
        if (cVar5 != '/') {
          pcVar3 = pcVar7;
        }
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar3;
      } while (cVar5 != '\0');
    }
    pcVar2 = in_ECX;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3 + 1;
    }
  }
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)0x0;
    do {
      pcVar3 = pcVar2;
      if (cVar5 != '.') {
        pcVar3 = pcVar7;
      }
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar3;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  iVar4 = 0;
  do {
    bVar1 = pcVar2[iVar4];
    bVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1005U)))[iVar4];
    if ((bVar1 == 0) || (bVar6 == 0)) {
      if (bVar1 == bVar6) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      break;
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar1 == bVar6);
  pcVar3 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    pcVar2 = "";
  }
  else {
    cVar5 = *in_ECX;
    if (cVar5 != '\0') {
      pcVar2 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar3 = pcVar2;
        if (cVar5 != '/') {
          pcVar3 = pcVar7;
        }
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar3;
      } while (cVar5 != '\0');
    }
    pcVar2 = in_ECX;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3 + 1;
    }
  }
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)0x0;
    do {
      pcVar3 = pcVar2;
      if (cVar5 != '.') {
        pcVar3 = pcVar7;
      }
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar3;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  iVar4 = 0;
  do {
    bVar1 = pcVar2[iVar4];
    bVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1009U)))[iVar4];
    if ((bVar1 == 0) || (bVar6 == 0)) {
      if (bVar1 == bVar6) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      break;
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar1 == bVar6);
  pcVar3 = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    in_ECX = "";
  }
  else {
    cVar5 = *in_ECX;
    if (cVar5 != '\0') {
      pcVar2 = in_ECX;
      pcVar7 = (char *)0x0;
      do {
        pcVar3 = pcVar2;
        if (cVar5 != '/') {
          pcVar3 = pcVar7;
        }
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar3;
      } while (cVar5 != '\0');
    }
  }
  if (pcVar3 != (char *)0x0) {
    in_ECX = pcVar3 + 1;
  }
  cVar5 = *in_ECX;
  if (cVar5 == '\0') {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)0x0;
    do {
      pcVar3 = in_ECX;
      if (cVar5 != '.') {
        pcVar3 = pcVar2;
      }
      cVar5 = in_ECX[1];
      in_ECX = in_ECX + 1;
      pcVar2 = pcVar3;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  iVar4 = 0;
  do {
    bVar1 = pcVar2[iVar4];
    bVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x100eU)))[iVar4];
    if ((bVar1 == 0) || (bVar6 == 0)) {
      return (uint)CONCAT11(bVar6,bVar1 == bVar6);
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar1 == bVar6);
  return 0;
}

#undef UNK_0181ee2b
#undef UNK_0181ee30
#undef UNK_0181ee35
#undef UNK_0181ee39
#undef UNK_0181ee3e

#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_0181f36d
#define DAT_0181f36d (*(uint8_t *)(0x181f36dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b5a0
 */

void recovered_1001b5a0(char *in_ECX,int in_EDX,int param_3,char param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;

  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) == '\0') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
    puVar7 = (undefined *)0x0;
    cVar6 = (*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
    do {
      puVar1 = puVar3;
      if (cVar6 != '/') {
        puVar1 = puVar7;
      }
      cVar6 = puVar3[1];
      puVar3 = puVar3 + 1;
      puVar7 = puVar1;
    } while (cVar6 != '\0');
  }
  pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
  if (puVar1 != (undefined *)0x0) {
    pcVar4 = puVar1 + 1;
  }
  if (in_ECX == (char *)0x0) {
    return;
  }
  if (in_EDX < 1) {
    return;
  }
  pcVar8 = in_ECX;
  iVar10 = in_EDX;
  do {
    if (((*pcVar8 == '\x01') && (*(int *)(pcVar8 + 0x11c) == param_3)) &&
       (iVar2 = strcmp(pcVar8 + 0x29,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU))), iVar2 == 0)) {
      return;
    }
    pcVar8 = pcVar8 + 0x124;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (in_EDX < 1) {
    return;
  }
  while (*in_ECX != '\0') {
    in_ECX = in_ECX + 0x124;
    in_EDX = in_EDX + -1;
    if (in_EDX == 0) {
      return;
    }
  }
  *in_ECX = '\x01';
  *(int *)(in_ECX + 0x11c) = param_3;
  in_ECX[0x120] = param_4;
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)) == '\0') {
    uVar5 = 0;
  }
  else {
    pcVar8 = in_ECX + 0x29;
    uVar9 = 0;
    cVar6 = (*(uint8_t *)((uintptr_t)pf_module_state+0x153cU));
    do {
      uVar5 = uVar9 + 1;
      *pcVar8 = cVar6;
      if (0xef < uVar5) break;
      cVar6 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x153dU)))[uVar9];
      pcVar8 = pcVar8 + 1;
      uVar9 = uVar5;
    } while (cVar6 != '\0');
  }
  in_ECX[uVar5 + 0x29] = '\0';
  pcVar8 = "Root";
  if (*pcVar4 != '\0') {
    pcVar8 = pcVar4;
  }
  cVar6 = *pcVar8;
  if (cVar6 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar9 = 1;
    pcVar4 = in_ECX;
    do {
      uVar5 = uVar9;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar6;
      if (0x26 < uVar5) break;
      cVar6 = pcVar8[uVar5];
      uVar9 = uVar5 + 1;
    } while (cVar6 != '\0');
  }
  in_ECX[uVar5 + 1] = '\0';
  return;
}

#undef DAT_0181f36c
#undef DAT_0181f36d

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#define local_808 (*(char (*)[2048])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b720
 */

/* WARNING: Removing unreachable block (ram,0x1001b9b2) */
/* WARNING: Removing unreachable block (ram,0x1001b9d7) */
/* WARNING: Removing unreachable block (ram,0x1001b98d) */
/* WARNING: Removing unreachable block (ram,0x1001b968) */
/* WARNING: Removing unreachable block (ram,0x1001b943) */
/* WARNING: Removing unreachable block (ram,0x1001b91e) */
/* WARNING: Removing unreachable block (ram,0x1001b8f9) */
/* WARNING: Removing unreachable block (ram,0x1001b8d4) */
/* WARNING: Removing unreachable block (ram,0x1001b8af) */
/* WARNING: Removing unreachable block (ram,0x1001b88a) */
/* WARNING: Removing unreachable block (ram,0x1001b865) */
/* WARNING: Removing unreachable block (ram,0x1001b840) */
/* WARNING: Removing unreachable block (ram,0x1001b7c9) */

void recovered_1001b720(void)

{
  unsigned char frame[2112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  ulong size;

  local_808[0] = '\0';
  size = strlen(local_808);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x3b < uVar2 && (pcVar3 = (code *)UINT_00006838, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)("Tundra.pins",local_808,size);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef local_808

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006888
#define UINT_00006888 (*(uint *)(0x6888U))
#undef UINT_000068d8
#define UINT_000068d8 (*(uint *)(0x68d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b9e0
 */

void recovered_1001b9e0(int in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) && (uVar2 = Ram00006808, 0xdb < uVar2)) {
    pcVar3 = (code *)UINT_000068d8;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(in_ECX,in_EDX,param_3);
    }
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar2 = Ram00006808, 0xb < uVar2 &&
        ((uVar2 = Ram00006808, 0x8b < uVar2 &&
         (pcVar3 = (code *)UINT_00006888, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)(in_EDX,param_3);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006888
#undef UINT_000068d8

#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef UNK_0181f550
#define UNK_0181f550 (*(uint8_t *)(0x181f550U))
#undef UNK_0181f598
#define UNK_0181f598 (*(uint8_t *)(0x181f598U))
#undef UNK_0181f5e0
#define UNK_0181f5e0 (*(uint8_t *)(0x181f5e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ba80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001ba80(undefined4 in_ECX,char *in_EDX,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;

  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = in_ECX;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = param_3;
    iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    pcVar4 = "";
    if (in_EDX != (char *)0x0) {
      pcVar4 = in_EDX;
    }
    cVar3 = *pcVar4;
    if (cVar3 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar2 = uVar5 + 1;
        (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar5 + iVar1] = cVar3;
        if (0x28 < uVar2) break;
        cVar3 = pcVar4[uVar5 + 1];
        uVar5 = uVar2;
      } while (cVar3 != '\0');
    }
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar2 + iVar1] = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
  return;
}

#undef DAT_0181f8d4
#undef UNK_0181f550
#undef UNK_0181f598
#undef UNK_0181f5e0

#undef DAT_0181f35c
#define DAT_0181f35c (*(uint8_t *)(0x181f35cU))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef DAT_01820690
#define DAT_01820690 (*(uint8_t *)(0x1820690U))
#undef DAT_018207ac
#define DAT_018207ac (*(uint8_t *)(0x18207acU))
#undef UNK_0181f550
#define UNK_0181f550 (*(uint8_t *)(0x181f550U))
#undef UNK_0181f598
#define UNK_0181f598 (*(uint8_t *)(0x181f598U))
#undef UNK_0181f5e0
#define UNK_0181f5e0 (*(uint8_t *)(0x181f5e0U))
#undef UNK_0181f5e4
#define UNK_0181f5e4 (*(uint8_t *)(0x181f5e4U))
#undef UNK_0181f5e8
#define UNK_0181f5e8 (*(uint8_t *)(0x181f5e8U))
#undef UNK_0181f5ea
#define UNK_0181f5ea (*(uint8_t *)(0x181f5eaU))
#undef UNK_0181f5eb
#define UNK_0181f5eb (*(uint8_t *)(0x181f5ebU))
#undef UNK_0181f5ec
#define UNK_0181f5ec (*(uint8_t *)(0x181f5ecU))
#undef UNK_0181f5ed
#define UNK_0181f5ed (*(uint8_t *)(0x181f5edU))
#undef UNK_0181f5ee
#define UNK_0181f5ee (*(uint8_t *)(0x181f5eeU))
#undef UNK_0181f5f0
#define UNK_0181f5f0 (*(uint8_t *)(0x181f5f0U))
#undef UNK_0181f5f2
#define UNK_0181f5f2 (*(uint8_t *)(0x181f5f2U))
#undef UNK_018206b9
#define UNK_018206b9 (*(uint8_t *)(0x18206b9U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001bb00
 */

/* WARNING: Removing unreachable block (ram,0x1001bce0) */
/* WARNING: Removing unreachable block (ram,0x1001bce8) */
/* WARNING: Removing unreachable block (ram,0x1001bc84) */
/* WARNING: Removing unreachable block (ram,0x1001bc8c) */
/* WARNING: Removing unreachable block (ram,0x1001bc28) */
/* WARNING: Removing unreachable block (ram,0x1001bc30) */
/* WARNING: Removing unreachable block (ram,0x1001bbcc) */
/* WARNING: Removing unreachable block (ram,0x1001bbd4) */
/* WARNING: Removing unreachable block (ram,0x1001bb70) */
/* WARNING: Removing unreachable block (ram,0x1001bb78) */
/* WARNING: Removing unreachable block (ram,0x1001bb14) */
/* WARNING: Removing unreachable block (ram,0x1001bb1c) */
/* WARNING: Removing unreachable block (ram,0x1001bb42) */
/* WARNING: Removing unreachable block (ram,0x1001bb4a) */
/* WARNING: Removing unreachable block (ram,0x1001bb9e) */
/* WARNING: Removing unreachable block (ram,0x1001bba6) */
/* WARNING: Removing unreachable block (ram,0x1001bbfa) */
/* WARNING: Removing unreachable block (ram,0x1001bc02) */
/* WARNING: Removing unreachable block (ram,0x1001bc56) */
/* WARNING: Removing unreachable block (ram,0x1001bc5e) */
/* WARNING: Removing unreachable block (ram,0x1001bcb2) */
/* WARNING: Removing unreachable block (ram,0x1001bcba) */
/* WARNING: Removing unreachable block (ram,0x1001bd0e) */
/* WARNING: Removing unreachable block (ram,0x1001bd16) */
/* WARNING: Removing unreachable block (ram,0x1001bd8c) */
/* WARNING: Removing unreachable block (ram,0x1001bd96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001bb00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;

  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xe;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar1) = 0x206e6950;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar1) = 0x45206f74;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar1) = 0x75626572;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)))[iVar1] = 0x73;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bdU)))[iVar1] = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
  iVar1 = (*(uint32_t *)(pf_module_state+0x152cU));
  iVar4 = 0;
  do {
    if ((((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2860U)))[iVar4] == '\x01') && (*(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x297cU)) + iVar4) == iVar1)) &&
       (iVar2 = strcmp(&(*(uint8_t *)((uintptr_t)pf_module_state+0x2889U)) + iVar4,&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU))), iVar2 == 0)) {
      if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) goto LAB_1001bf09;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x11;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
      iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar1) = 0x69706e55;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar1) = 0x7266206e;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar1) = 0x44206d6f;
      *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar1) = 0x746b7365;
      *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17c0U)) + iVar1) = 0x706f;
      puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17c2U)) + iVar1;
      goto LAB_1001bf00;
    }
    iVar4 = iVar4 + 0x124;
  } while (iVar4 != 0x1b60);
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x10;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar1) = 0x206e6950;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar1) = 0x44206f74;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar1) = 0x746b7365;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar1) = 0x706f;
    puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17beU)) + iVar1;
LAB_1001bf00:
    *puVar3 = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
LAB_1001bf09:
  iVar1 = (*(uint32_t *)(pf_module_state+0x152cU));
  iVar2 = -0x1518;
  iVar4 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if (((*(char *)(iVar4 + 0x1518 + iVar2) == '\x01') && (*(int *)(iVar4 + 0x151c + iVar2) == 5))
       && (*(int *)(iVar4 + 0x163c + iVar2) == iVar1)) {
      iVar4 = strcmp((char *)(iVar4 + 0x1548 + iVar2),&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)));
      if (iVar4 == 0) {
        if (0x11 < (*(uint32_t *)(pf_module_state+0x1aa4U))) {
          return;
        }
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x13;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
        iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar1) = 0x6f6d6552;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar1) = 0x66206576;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar1) = 0x206d6f72;
        *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17bcU)) + iVar1) = 0x6b636f44;
        puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17c0U)) + iVar1;
        goto LAB_1001bfbe;
      }
      iVar4 = (*(uint32_t *)(pf_module_state+0x1aa8U));
    }
    iVar2 = iVar2 + 300;
  } while (iVar2 != 0);
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x12;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0xffffffff;
    iVar1 = (*(uint32_t *)(pf_module_state+0x1aa4U)) * 0x2a;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)) + iVar1) = 0x20646441;
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b4U)) + iVar1) = 0x44206f74;
    *(undefined2 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b8U)) + iVar1) = 0x636f;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17baU)))[iVar1] = 0x6b;
    puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x17bbU)) + iVar1;
LAB_1001bfbe:
    *puVar3 = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
  return;
}

#undef DAT_0181f35c
#undef DAT_0181f36c
#undef DAT_0181f8d4
#undef DAT_0181f8d8
#undef DAT_01820690
#undef DAT_018207ac
#undef UNK_0181f550
#undef UNK_0181f598
#undef UNK_0181f5e0
#undef UNK_0181f5e4
#undef UNK_0181f5e8
#undef UNK_0181f5ea
#undef UNK_0181f5eb
#undef UNK_0181f5ec
#undef UNK_0181f5ed
#undef UNK_0181f5ee
#undef UNK_0181f5f0
#undef UNK_0181f5f2
#undef UNK_018206b9

#undef DAT_0181f364
#define DAT_0181f364 (*(uint8_t *)(0x181f364U))
#undef DAT_0181f8d4
#define DAT_0181f8d4 (*(uint8_t *)(0x181f8d4U))
#undef UNK_0181f550
#define UNK_0181f550 (*(uint8_t *)(0x181f550U))
#undef UNK_0181f598
#define UNK_0181f598 (*(uint8_t *)(0x181f598U))
#undef UNK_0181f5e0
#define UNK_0181f5e0 (*(uint8_t *)(0x181f5e0U))
#define local_3e (*(char (*)[46])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c030(char *in_ECX,undefined4 in_EDX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;

  iVar2 = 0;
  (*(uint32_t *)(pf_module_state+0x1534U)) = in_EDX;
LAB_1001c044:
  if (in_ECX == (char *)0x0) {
    return;
  }
  local_3e[0] = '\0';
  cVar5 = *in_ECX;
  if (cVar5 == '\0') {
    return;
  }
  iVar4 = 0;
  pcVar6 = in_ECX;
  do {
    iVar8 = 0;
    while (((cVar5 != '\0' && (cVar5 != '\n')) && (cVar5 != '|'))) {
      if (iVar8 == 0x29) {
        iVar3 = 0x29;
        goto LAB_1001c0b5;
      }
      local_3e[iVar8] = cVar5;
      iVar3 = iVar8 + 1;
      iVar8 = iVar8 + 1;
      cVar5 = pcVar6[iVar3];
    }
    iVar3 = iVar8;
LAB_1001c0b5:
    local_3e[iVar3] = '\0';
    for (pcVar6 = pcVar6 + iVar8; (cVar5 = *pcVar6, cVar5 == '|' || (cVar5 == '\n'));
        pcVar6 = pcVar6 + 1) {
    }
    if (local_3e[0] != '\0') {
      if (iVar4 == iVar2) break;
      iVar4 = iVar4 + 1;
    }
    if (cVar5 == '\0') {
      return;
    }
  } while( true );
  if ((*(uint32_t *)(pf_module_state+0x1aa4U)) < 0x12) {
    *(undefined4 *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1720U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = 0x1c;
    *(int *)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1768U)) + (*(uint32_t *)(pf_module_state+0x1aa4U)) * 4) = iVar2;
    iVar4 = (*(uint32_t *)(pf_module_state+0x1aa4U));
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar7 + iVar4 * 0x2a] = local_3e[0];
      if (0x28 < uVar1) break;
      local_3e[0] = local_3e[uVar7 + 1];
      uVar7 = uVar1;
    } while (local_3e[0] != '\0');
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x17b0U)))[uVar1 + iVar4 * 0x2a] = 0;
    (*(uint32_t *)(pf_module_state+0x1aa4U)) = (*(uint32_t *)(pf_module_state+0x1aa4U)) + 1;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 == 0x12) {
    return;
  }
  goto LAB_1001c044;
}

#undef DAT_0181f364
#undef DAT_0181f8d4
#undef UNK_0181f550
#undef UNK_0181f598
#undef UNK_0181f5e0
#undef local_3e

#undef DAT_0181f348
#define DAT_0181f348 (*(uint8_t *)(0x181f348U))
#undef DAT_0181f34c
#define DAT_0181f34c (*(uint8_t *)(0x181f34cU))
#undef DAT_0181f35c
#define DAT_0181f35c (*(uint8_t *)(0x181f35cU))
#undef DAT_0181f360
#define DAT_0181f360 (*(char *)(0x181f360U))
#undef DAT_0181f361
#define DAT_0181f361 (*(uint8_t *)(0x181f361U))
#undef DAT_0181f362
#define DAT_0181f362 (*(uint8_t *)(0x181f362U))
#undef DAT_0181f363
#define DAT_0181f363 (*(uint8_t *)(0x181f363U))
#undef DAT_0181f36c
#define DAT_0181f36c (*(uint8_t *)(0x181f36cU))
#undef UNK_0181e96f
#define UNK_0181e96f (*(uint8_t *)(0x181e96fU))
#undef UNK_0181f45d
#define UNK_0181f45d (*(uint8_t *)(0x181f45dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c160(undefined4 in_ECX,undefined4 in_EDX,char *param_3,char *param_4,
                       undefined4 param_5,char param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar8;
  uint uVar7;
  char *pcVar9;
  char *pcVar10;

  (*(uint32_t *)(pf_module_state+0x152cU)) = param_5;
  (*(uint8_t *)((uintptr_t)pf_module_state+0x1530U)) = param_6;
  pcVar9 = (char *)0x0;
  bVar1 = false;
  (*(uint32_t *)(pf_module_state+0x1518U)) = in_ECX;
  (*(uint32_t *)(pf_module_state+0x151cU)) = in_EDX;
  if (param_6 == '\0') {
    bVar1 = recovered_1000fd50(param_3);
  }
  if (param_3 == (char *)0x0) {
    pcVar2 = "";
  }
  else {
    cVar5 = *param_3;
    if (cVar5 != '\0') {
      pcVar9 = (char *)0x0;
      pcVar2 = param_3;
      do {
        pcVar10 = pcVar2;
        if (cVar5 != '/') {
          pcVar10 = pcVar9;
        }
        pcVar9 = pcVar10;
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while (cVar5 != '\0');
    }
    pcVar2 = param_3;
    if (pcVar9 != (char *)0x0) {
      pcVar2 = pcVar9 + 1;
    }
  }
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)0x0;
    do {
      pcVar9 = pcVar2;
      if (cVar5 != '.') {
        pcVar9 = pcVar10;
      }
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar9;
    } while (cVar5 != '\0');
  }
  pcVar2 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar2 = pcVar9;
  }
  iVar4 = 0;
  do {
    bVar6 = pcVar2[iVar4];
    bVar8 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0xb3fU)))[iVar4];
    if ((bVar6 == 0) || (bVar8 == 0)) {
      (*(uint8_t *)((uintptr_t)pf_module_state+0x1532U)) = bVar6 == bVar8;
      goto LAB_1001c26c;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    if ((byte)(bVar8 + 0xbf) < 0x1a) {
      bVar8 = bVar8 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (bVar6 == bVar8);
  (*(uint8_t *)((uintptr_t)pf_module_state+0x1532U)) = false;
LAB_1001c26c:
  (*(uint8_t *)((uintptr_t)pf_module_state+0x1531U)) = bVar1;
  uVar3 = recovered_1001b1a0(param_3);
  (*(uint8_t *)((uintptr_t)pf_module_state+0x1533U)) = (undefined1)uVar3;
  pcVar9 = "";
  if (param_3 != (char *)0x0) {
    pcVar9 = param_3;
  }
  cVar5 = *pcVar9;
  if (cVar5 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar3 = uVar7 + 1;
      (&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)))[uVar7] = cVar5;
      if (0xef < uVar3) break;
      cVar5 = pcVar9[uVar7 + 1];
      uVar7 = uVar3;
    } while (cVar5 != '\0');
  }
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x153cU)))[uVar3] = 0;
  if ((param_4 == (char *)0x0) || (cVar5 = *param_4, cVar5 == '\0')) {
    pcVar9 = (char *)0x0;
    if (param_3 == (char *)0x0) {
      param_3 = "";
    }
    else {
      cVar5 = *param_3;
      if (cVar5 != '\0') {
        pcVar2 = param_3;
        pcVar10 = (char *)0x0;
        do {
          pcVar9 = pcVar2;
          if (cVar5 != '/') {
            pcVar9 = pcVar10;
          }
          cVar5 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          pcVar10 = pcVar9;
        } while (cVar5 != '\0');
      }
    }
    if (pcVar9 != (char *)0x0) {
      param_3 = pcVar9 + 1;
    }
    cVar5 = *param_3;
    param_4 = param_3;
    if (cVar5 == '\0') {
      uVar3 = 0;
      goto LAB_1001c340;
    }
  }
  uVar7 = 0;
  do {
    uVar3 = uVar7 + 1;
    (&(*(uint8_t *)((uintptr_t)pf_module_state+0x162dU)))[uVar7] = cVar5;
    if (0xef < uVar3) break;
    cVar5 = param_4[uVar7 + 1];
    uVar7 = uVar3;
  } while (cVar5 != '\0');
LAB_1001c340:
  (&(*(uint8_t *)((uintptr_t)pf_module_state+0x162dU)))[uVar3] = 0;
  return;
}

#undef DAT_0181f348
#undef DAT_0181f34c
#undef DAT_0181f35c
#undef DAT_0181f360
#undef DAT_0181f361
#undef DAT_0181f362
#undef DAT_0181f363
#undef DAT_0181f36c
#undef UNK_0181e96f
#undef UNK_0181f45d

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006890
#define UINT_00006890 (*(uint *)(0x6890U))
#undef UINT_000068e8
#define UINT_000068e8 (*(uint *)(0x68e8U))
#undef UNK_0181eeab
#define UNK_0181eeab (*(uint8_t *)(0x181eeabU))
#undef UNK_0181eeaf
#define UNK_0181eeaf (*(uint8_t *)(0x181eeafU))
#undef UNK_0181eeb4
#define UNK_0181eeb4 (*(uint8_t *)(0x181eeb4U))
#define local_18 (*(int *)(frame + 104))
#define local_14 (*(char * *)(frame + 108))
#define in_stack_ffffff94 (*(undefined4 *)(frame + 20))
#define in_stack_ffffff9c (*(char * *)(frame + 28))
#define local_5c (*(char (*)[40])(frame + 36))
#define local_34 (*(undefined4 *)(frame + 76))
#define local_30 (*(int *)(frame + 80))
#define local_2c (*(char * *)(frame + 84))
#define local_28 (*(undefined4 *)(frame + 88))
#define local_24 (*(undefined4 *)(frame + 92))
#define local_20 (*(undefined4 *)(frame + 96))
#define local_1c (*(undefined4 *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c350(char *in_ECX,char *in_EDX)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar8;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar9;
  void *dst;
  int iVar10;
  byte bVar11;
  char cVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;

  uVar19 = (undefined1)((uint)in_stack_ffffff94 >> 0x18);
  if (in_ECX == (char *)0x0) {
    return;
  }
  cVar12 = *in_ECX;
  if (cVar12 == '\0') {
    return;
  }
  pcVar15 = in_ECX;
  pcVar9 = (char *)0x0;
  cVar8 = cVar12;
  do {
    pcVar13 = pcVar15;
    if (cVar8 != '/') {
      pcVar13 = pcVar9;
    }
    cVar8 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
    pcVar9 = pcVar13;
  } while (cVar8 != '\0');
  pcVar15 = in_ECX;
  if (pcVar13 != (char *)0x0) {
    pcVar15 = pcVar13 + 1;
  }
  uVar4 = (uint)CONCAT11(*pcVar15,cVar12);
  pcVar9 = (char *)0x0;
  uVar16 = 0;
  if (*pcVar15 != '\0') {
    uVar14 = 0;
    do {
      uVar16 = uVar14 + 1;
      local_5c[uVar14] = (char)(uVar4 >> 8);
      if (0x26 < uVar16) break;
      iVar17 = uVar14 + 1;
      uVar4 = (uint)CONCAT11(pcVar15[iVar17],(char)uVar4);
      uVar14 = uVar16;
    } while (pcVar15[iVar17] != '\0');
  }
  local_5c[uVar16] = '\0';
  pcVar15 = in_ECX;
  cVar12 = (char)uVar4;
  do {
    pcVar13 = pcVar15;
    if (cVar12 != '/') {
      pcVar13 = pcVar9;
    }
    pcVar9 = pcVar13;
    cVar12 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
  } while (cVar12 != '\0');
  pcVar15 = in_ECX;
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9 + 1;
  }
  uVar16 = (uint)CONCAT11(*pcVar15,(char)uVar4);
  if (*pcVar15 == '\0') {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = (char *)0x0;
    do {
      pcVar13 = pcVar15;
      if ((char)(uVar16 >> 8) != '.') {
        pcVar13 = pcVar9;
      }
      pcVar9 = pcVar13;
      pcVar13 = pcVar15 + 1;
      uVar16 = (uint)CONCAT11(*pcVar13,(char)uVar16);
      pcVar15 = pcVar15 + 1;
    } while (*pcVar13 != '\0');
  }
  pcVar15 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9;
  }
  iVar17 = 0;
  do {
    bVar3 = pcVar15[iVar17];
    uVar2 = (undefined1)uVar16;
    uVar16 = (uint)CONCAT11(bVar3,uVar2);
    bVar11 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x107bU)))[iVar17];
    if ((bVar3 == 0) || (bVar11 == 0)) {
      pcVar15 = (char *)0x80000002;
      if (bVar3 == bVar11) goto LAB_1001c5e7;
      break;
    }
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      uVar16 = (uint)(ushort)(CONCAT11(bVar3,uVar2) | 0x2000);
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    iVar17 = iVar17 + 1;
  } while ((byte)(uVar16 >> 8) == bVar11);
  pcVar9 = (char *)0x0;
  pcVar15 = in_ECX;
  cVar12 = (char)uVar16;
  do {
    pcVar13 = pcVar15;
    if (cVar12 != '/') {
      pcVar13 = pcVar9;
    }
    pcVar9 = pcVar13;
    cVar12 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
  } while (cVar12 != '\0');
  pcVar15 = in_ECX;
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9 + 1;
  }
  uVar16 = (uint)CONCAT11(*pcVar15,(char)uVar16);
  if (*pcVar15 == '\0') {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = (char *)0x0;
    do {
      pcVar13 = pcVar15;
      if ((char)(uVar16 >> 8) != '.') {
        pcVar13 = pcVar9;
      }
      pcVar9 = pcVar13;
      pcVar13 = pcVar15 + 1;
      uVar16 = (uint)CONCAT11(*pcVar13,(char)uVar16);
      pcVar15 = pcVar15 + 1;
    } while (*pcVar13 != '\0');
  }
  pcVar15 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9;
  }
  iVar17 = 0;
  do {
    bVar3 = pcVar15[iVar17];
    uVar2 = (undefined1)uVar16;
    uVar16 = (uint)CONCAT11(bVar3,uVar2);
    bVar11 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x107fU)))[iVar17];
    if ((bVar3 == 0) || (bVar11 == 0)) {
      pcVar15 = (char *)0x80000003;
      if (bVar3 == bVar11) goto LAB_1001c5e7;
      break;
    }
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      uVar16 = (uint)(ushort)(CONCAT11(bVar3,uVar2) | 0x2000);
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    iVar17 = iVar17 + 1;
  } while ((byte)(uVar16 >> 8) == bVar11);
  pcVar9 = (char *)0x0;
  pcVar15 = in_ECX;
  do {
    pcVar13 = pcVar15;
    if ((char)uVar16 != '/') {
      pcVar13 = pcVar9;
    }
    pcVar9 = pcVar13;
    pbVar1 = (byte *)(pcVar15 + 1);
    uVar16 = (uint)*pbVar1;
    pcVar15 = pcVar15 + 1;
  } while (*pbVar1 != 0);
  pcVar15 = in_ECX;
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9 + 1;
  }
  cVar12 = *pcVar15;
  if (cVar12 == '\0') {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar13 = (char *)0x0;
    do {
      pcVar9 = pcVar15;
      if (cVar12 != '.') {
        pcVar9 = pcVar13;
      }
      cVar12 = pcVar15[1];
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar9;
    } while (cVar12 != '\0');
  }
  pcVar15 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar15 = pcVar9;
  }
  iVar17 = 0;
  do {
    bVar3 = pcVar15[iVar17];
    bVar11 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1084U)))[iVar17];
    if ((bVar3 == 0) || (bVar11 == 0)) {
      pcVar15 = (char *)((uint)(bVar3 == bVar11) * 3 + -0x7fffffff);
      goto LAB_1001c5e7;
    }
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    iVar17 = iVar17 + 1;
  } while (bVar3 == bVar11);
  pcVar15 = (char *)0x80000001;
LAB_1001c5e7:
  iVar17 = Ram00006800;
  local_14 = in_ECX;
  if ((((iVar17 == 0x50414d57) && (iVar17 = Ram00006804, iVar17 != 0)) &&
      (uVar16 = Ram00006808, 0xb < uVar16)) && (uVar16 = Ram00006808, 0xeb < uVar16)) {
    pcVar5 = (code *)UINT_000068e8;
    if (pcVar5 == (code *)0x0) goto LAB_1001c681;
    pcVar9 = in_EDX;
    pcVar13 = in_ECX;
    in_stack_ffffff9c = pcVar15;
  }
  else {
    iVar17 = Ram00006800;
    if (((iVar17 != 0x50414d57) || (iVar17 = Ram00006804, iVar17 == 0)) ||
       ((uVar16 = Ram00006808, uVar16 < 0xc ||
        ((uVar16 = Ram00006808, uVar16 < 0x94 ||
         (pcVar5 = (code *)UINT_00006890, pcVar5 == (code *)0x0)))))) goto LAB_1001c681;
    pcVar9 = in_ECX;
    pcVar13 = pcVar15;
  }
  uVar16 = (*pcVar5)((int)pcVar9,pcVar13,(uint)in_stack_ffffff9c);
  uVar19 = (undefined1)((uint)pcVar9 >> 0x18);
  if (uVar16 != 0) {
    iVar17 = 0;
    local_14 = (char *)(*(uint32_t *)(pf_module_state+0x1aa8U));
    do {
      if ((*(char *)((int)local_14 + iVar17 * 300) == '\x01') &&
         (dst = (void *)(iVar17 * 300 + (int)local_14), *(char *)((int)dst + 1) == '\0')) {
        iVar10 = 0;
        iVar18 = -0x11030;
        do {
          if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11030 + iVar18) == '\x01') {
            iVar10 = iVar10 + (uint)(*(int *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11044 + iVar18) == iVar17);
          }
          iVar18 = iVar18 + 0xd9c;
        } while (iVar18 != 0);
        if (iVar10 == 0) {
          memset(dst,0,300);
          local_14 = (char *)(*(uint32_t *)(pf_module_state+0x1aa8U));
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x12);
    return;
  }
LAB_1001c681:
  local_34 = CONCAT13(PF_PART1(local_34, 3),0xb784ec);
  local_30 = recovered_10004490(4,local_5c,CONCAT13(uVar19,0xb784ec),'\0');
  local_34 = 5;
  local_28 = 0x120;
  local_24 = 0x8e;
  local_20 = 0x17c;
  local_1c = 0x96;
  local_2c = local_5c;
  local_18 = recovered_1000b630(&local_34);
  iVar17 = (*(uint32_t *)(pf_module_state+0x14a4U));
  if (-1 < local_18) {
    local_18 = local_18 * 0xd9c;
    iVar10 = (*(uint32_t *)(pf_module_state+0x14a4U)) + 0x78 + local_18;
    cVar12 = *in_ECX;
    if (cVar12 == '\0') {
      uVar16 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar16 = uVar4 + 1;
        *(char *)(iVar10 + uVar4) = cVar12;
        if (0xef < uVar16) break;
        cVar12 = local_14[uVar4 + 1];
        uVar4 = uVar16;
      } while (cVar12 != '\0');
    }
    *(undefined1 *)(iVar10 + uVar16) = 0;
    *(char **)(iVar17 + 0x25c + local_18) = in_EDX;
    pcVar15 = (char *)(iVar17 + 0x261 + local_18);
    *(undefined4 *)(iVar17 + 0x261 + local_18) = 0x6e75614c;
    *(undefined4 *)(iVar17 + 0x265 + local_18) = 0x66206863;
    *(undefined4 *)(iVar17 + 0x269 + local_18) = 0x656c6961;
    *(undefined4 *)(iVar17 + 0x26d + local_18) = 0x2f2064;
    uVar6 = strlen(pcVar15);
    if (uVar6 < 0x800) {
      cVar12 = *local_14;
      uVar7 = uVar6;
      pcVar9 = local_14;
      if (uVar6 != 0x7ff && cVar12 != '\0') {
        do {
          pcVar15[uVar7] = cVar12;
          uVar6 = uVar7 + 1;
          if (0x7fd < uVar7) break;
          cVar12 = pcVar9[1];
          uVar7 = uVar6;
          pcVar9 = pcVar9 + 1;
        } while (cVar12 != '\0');
      }
      pcVar15[uVar6] = '\0';
    }
    pcVar15 = (char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x261 + local_18);
    uVar6 = strlen(pcVar15);
    if (uVar6 < 0x800) {
      uVar16 = 0x7ff;
      if (uVar6 != 0x7ff) {
        cVar12 = '\n';
        pcVar9 = "The file could not be started.";
        do {
          pcVar15[uVar6] = cVar12;
          uVar16 = uVar6 + 1;
          if (0x7fd < uVar6) break;
          cVar12 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          uVar6 = uVar16;
        } while (cVar12 != '\0');
      }
      pcVar15[uVar16] = '\0';
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f2d4
#undef DAT_0181f8d8
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006890
#undef UINT_000068e8
#undef UNK_0181eeab
#undef UNK_0181eeaf
#undef UNK_0181eeb4
#undef local_18
#undef local_14
#undef in_stack_ffffff94
#undef in_stack_ffffff9c
#undef local_5c
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f10c
#define DAT_0181f10c (*(uint8_t *)(0x181f10cU))
#undef DAT_0181f114
#define DAT_0181f114 (*(uint8_t *)(0x181f114U))
#undef DAT_0181f2a4
#define DAT_0181f2a4 (*(uint8_t *)(0x181f2a4U))
#undef DAT_0181f2ac
#define DAT_0181f2ac (*(uint8_t *)(0x181f2acU))
#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8d8
#define DAT_0181f8d8 (*(uint8_t *)(0x181f8d8U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018223dc
#define DAT_018223dc (*(uint8_t *)(0x18223dcU))
#undef DAT_018223e0
#define DAT_018223e0 (*(uint8_t *)(0x18223e0U))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c8a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c8a0(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  char in_DL;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  if (0x13 < in_ECX) {
    return;
  }
  iVar9 = in_ECX * 0xd9c;
  if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + iVar9) != '\x01') {
    return;
  }
  if ((*(uint32_t *)(pf_module_state+0x12dcU)) == in_ECX) {
    (*(uint32_t *)(pf_module_state+0x12dcU)) = 0xffffffff;
  }
  if ((*(uint32_t *)(pf_module_state+0x12e4U)) == in_ECX) {
    (*(uint32_t *)(pf_module_state+0x12e4U)) = 0xffffffff;
  }
  if ((*(uint32_t *)(pf_module_state+0x147cU)) == in_ECX) {
    (*(uint32_t *)(pf_module_state+0x147cU)) = 0xffffffff;
  }
  if (((*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)) == '\x01') && ((*(uint32_t *)(pf_module_state+0x45b0U)) == in_ECX)) {
    memset(&(*(uint8_t *)((uintptr_t)pf_module_state+0x45acU)),0,0x1fc);
  }
  if ((in_DL != '\0') && (*(int *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x10 + iVar9) == 6)) {
    iVar8 = (*(uint32_t *)(pf_module_state+0x14a4U)) + iVar9;
    if (*(uint *)(iVar8 + 0xb1c) != 0) {
      terror_ui_window_request_close(*(uint *)(iVar8 + 0xb1c),*(int *)(iVar8 + 0x58),*(int *)(iVar8 + 0x5c));
    }
  }
  pvVar5 = *(void **)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0xaec + iVar9);
  if ((((pvVar5 != (void *)0x0) && (iVar8 = Ram00006800, iVar8 == 0x50414d57)) &&
      (iVar8 = Ram00006804, iVar8 != 0)) &&
     (((uVar1 = Ram00006808, 0xb < uVar1 && (uVar1 = Ram00006808, 0x53 < uVar1)) &&
      (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)))) {
    (*pcVar2)(pvVar5);
  }
  iVar8 = (*(uint32_t *)(pf_module_state+0x14a4U)) + 0xb04;
  pvVar5 = *(void **)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0xb04 + iVar9);
  if (((pvVar5 != (void *)0x0 && *(int *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0xb08 + iVar9) == 0) &&
      (iVar7 = Ram00006800, iVar7 == 0x50414d57)) &&
     ((iVar7 = Ram00006804, iVar7 != 0 &&
      (((uVar1 = Ram00006808, 0xb < uVar1 && (uVar1 = Ram00006808, 0x53 < uVar1)) &&
       (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)))))) {
    (*pcVar2)(pvVar5);
  }
  memset((void *)(iVar8 + iVar9),0,0x18);
  puVar4 = (*(uint32_t *)(pf_module_state+0x1aacU));
  if (0 < (*(uint32_t *)(pf_module_state+0x6274U))) {
    iVar8 = 0;
    puVar3 = (*(uint32_t *)(pf_module_state+0x1aacU));
    do {
      puVar6 = puVar3 + 1;
      if (*puVar3 == in_ECX) {
        iVar7 = (*(uint32_t *)(pf_module_state+0x6274U)) + -1;
        iVar10 = iVar7 - iVar8;
        if (iVar10 != 0 && iVar8 <= iVar7) goto LAB_1001ca70;
        (*(uint32_t *)(pf_module_state+0x1474U)) = 0xffffffff;
        if ((*(uint32_t *)(pf_module_state+0x6274U)) != 1) goto LAB_1001ca93;
        goto LAB_1001ca9a;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar6;
    } while ((*(uint32_t *)(pf_module_state+0x6274U)) != iVar8);
  }
LAB_1001caa0:
  memset((void *)(iVar9 + (*(uint32_t *)(pf_module_state+0x14a4U))),0,0xd9c);
  iVar8 = 0;
  iVar9 = (*(uint32_t *)(pf_module_state+0x1aa8U));
  do {
    if ((*(char *)(iVar9 + iVar8 * 300) == '\x01') &&
       (pvVar5 = (void *)(iVar8 * 300 + iVar9), *(char *)((int)pvVar5 + 1) == '\0')) {
      iVar7 = 0;
      iVar10 = -0x11030;
      do {
        if (*(char *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11030 + iVar10) == '\x01') {
          iVar7 = iVar7 + (uint)(*(int *)((*(uint32_t *)(pf_module_state+0x14a4U)) + 0x11044 + iVar10) == iVar8);
        }
        iVar10 = iVar10 + 0xd9c;
      } while (iVar10 != 0);
      if (iVar7 == 0) {
        memset(pvVar5,0,300);
        iVar9 = (*(uint32_t *)(pf_module_state+0x1aa8U));
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x12);
  return;
LAB_1001ca70:
  do {
    puVar6[-1] = *puVar6;
    puVar6 = puVar6 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
LAB_1001ca93:
  (*(uint32_t *)(pf_module_state+0x1474U)) = puVar4[(*(uint32_t *)(pf_module_state+0x6274U)) + -2];
LAB_1001ca9a:
  (*(uint32_t *)(pf_module_state+0x6274U)) = iVar7;
  goto LAB_1001caa0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f10c
#undef DAT_0181f114
#undef DAT_0181f2a4
#undef DAT_0181f2ac
#undef DAT_0181f2d4
#undef DAT_0181f8d8
#undef DAT_0181f8dc
#undef DAT_018223dc
#undef DAT_018223e0
#undef DAT_018240a4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850

#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
#define local_1c (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cb60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1001cb60(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (in_ECX == 0) {
    iVar4 = -0x84;
    iVar2 = -0x22;
    local_1c = 0x24;
    iVar6 = 0xbc;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x5c) + -0x92 + *(int *)(in_ECX + 100);
    iVar6 = *(int *)(in_ECX + 0x5c) + 0xe2;
    iVar2 = *(int *)(in_ECX + 0x60) + -0x46;
    local_1c = *(int *)(in_ECX + 0x58) + 0x36;
  }
  if (iVar4 <= iVar6 + 0x32) {
    iVar4 = iVar6 + 0x32;
  }
  iVar5 = 0x12;
  if (0x25 < (iVar4 - iVar6) + -0xc) {
    iVar5 = (iVar4 - iVar6) + -0x20;
  }
  iVar4 = 1;
  if (0x18 < iVar2) {
    iVar4 = iVar2 + -0x18;
  }
  if (in_ECX == 0) {
    iVar2 = -0x84;
    iVar3 = 0xbc;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x5c) + -0x92 + *(int *)(in_ECX + 100);
    iVar3 = *(int *)(in_ECX + 0x5c) + 0xe2;
  }
  if (iVar2 <= iVar3 + 0x32) {
    iVar2 = iVar3 + 0x32;
  }
  if ((((in_ECX != 0) && (local_1c <= in_EDX)) && (iVar6 = iVar6 + 0x1f, iVar6 <= param_3)) &&
     ((in_EDX < iVar4 + local_1c && (param_3 < iVar5 + iVar6)))) {
    iVar4 = *(int *)(in_ECX + 0xaf8);
    local_14 = iVar4;
    if (iVar4 <= (*(uint32_t *)(pf_module_state+0x627cU))) {
      local_14 = (*(uint32_t *)(pf_module_state+0x627cU));
    }
    iVar5 = 1;
    do {
      if (local_14 == iVar4) {
        return -1;
      }
      bVar1 = iVar6 <= param_3;
      iVar6 = iVar6 + 0x12;
      if (param_3 < iVar6 && bVar1) {
        return iVar4;
      }
      if ((iVar2 - iVar3) + -0xc < 0x26) {
        return -1;
      }
      iVar4 = iVar4 + 1;
      bVar1 = iVar5 < ((iVar2 - iVar3) + -0x20) / 0x12;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  return -1;
}

#undef DAT_018240ac
#undef local_1c
#undef local_14

#undef DAT_018240ac
#define DAT_018240ac (*(uint8_t *)(0x18240acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ccc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001ccc0(int in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  uVar1 = (*(uint32_t *)(pf_module_state+0x627cU));
  if (in_ECX == 0) {
    iVar2 = -0x84;
    iVar5 = 0xbc;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x5c) + -0x92 + *(int *)(in_ECX + 100);
    iVar5 = *(int *)(in_ECX + 0x5c) + 0xe2;
  }
  if (iVar2 <= iVar5 + 0x32) {
    iVar2 = iVar5 + 0x32;
  }
  iVar6 = ((iVar2 - iVar5) + -0x20) / 0x12;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  iVar3 = 1;
  if (0x25 < (iVar2 - iVar5) + -0xc) {
    iVar3 = iVar6;
  }
  if ((int)(*(uint32_t *)(pf_module_state+0x627cU)) <= (int)in_EDX || in_ECX == 0) {
    return;
  }
  *(uint *)(in_ECX + 0xaf4) = in_EDX;
  *(undefined1 *)(in_ECX + 0xafc) = 1;
  uVar8 = *(uint *)(in_ECX + 0xaf8);
  uVar7 = in_EDX;
  if ((int)uVar8 <= (int)in_EDX) {
    uVar7 = uVar8;
    if ((int)in_EDX < (int)(uVar8 + iVar3)) goto LAB_1001cd6c;
    uVar7 = (in_EDX - iVar3) + 1;
  }
  *(uint *)(in_ECX + 0xaf8) = uVar7;
LAB_1001cd6c:
  iVar5 = *(int *)(in_ECX + 0x5c);
  iVar2 = iVar5 + -0x92 + *(int *)(in_ECX + 100);
  if (iVar2 <= iVar5 + 0x114) {
    iVar2 = iVar5 + 0x114;
  }
  uVar8 = ((iVar2 - iVar5) + -0x102) / 0x12;
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  uVar4 = 1;
  if (0x25 < (iVar2 - iVar5) + -0xee) {
    uVar4 = uVar8;
  }
  uVar8 = uVar1 - uVar4;
  if ((uVar1 < uVar4) || ((int)uVar8 < 1)) {
    uVar8 = 0;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xaf4) = 0;
    *(undefined4 *)(in_ECX + 0xaf8) = 0;
    *(undefined1 *)(in_ECX + 0xafc) = 0;
  }
  else {
    if (uVar1 <= in_EDX) {
      *(undefined4 *)(in_ECX + 0xaf4) = 0;
      *(undefined1 *)(in_ECX + 0xafc) = 1;
    }
    if ((int)uVar7 < 0) {
      *(undefined4 *)(in_ECX + 0xaf8) = 0;
    }
    else if (uVar8 < uVar7) {
      *(uint *)(in_ECX + 0xaf8) = uVar8;
    }
  }
  return;
}

#undef DAT_018240ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ce40
 */

void recovered_1001ce40(int in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (in_ECX != 0) {
    iVar4 = *(int *)(in_ECX + 100);
    iVar2 = 0x12;
    if (0x15 < iVar4 + -0x84) {
      iVar2 = iVar4 + -0x88;
    }
    iVar3 = iVar4 + -0x6a;
    iVar1 = *(int *)(in_ECX + 0xaf0);
    iVar5 = (int)((ulonglong)((longlong)iVar3 * -0x22983759) >> 0x20) + -0x6a + iVar4;
    iVar6 = (int)((ulonglong)((longlong)(*(int *)(in_ECX + 0x60) + -0x26) * -0x2df2df2d) >> 0x20) +
            -0x26 + *(int *)(in_ECX + 0x60);
    iVar6 = (iVar6 >> 6) - (iVar6 >> 0x1f);
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    iVar5 = (iVar5 >> 6) - (iVar5 >> 0x1f);
    iVar4 = ((int)((ulonglong)((longlong)iVar3 * 0x22983759) >> 0x20) - iVar4) + 0x6a;
    iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f);
    if (iVar3 < 0x4a) {
      iVar5 = 1;
      iVar4 = -1;
    }
    iVar4 = iVar4 * iVar6 + 2 + iVar1;
    iVar3 = iVar2;
    if (((-2 < iVar1) && (iVar6 * iVar5 < iVar1 + 2)) && (0 < iVar4)) {
      iVar3 = (iVar6 * iVar5 * iVar2) / (iVar1 + 2);
      if (iVar3 < 0x13) {
        iVar3 = 0x12;
      }
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
    }
    if ((iVar4 < 1) || (iVar2 - iVar3 < 1)) {
      *(undefined4 *)(in_ECX + 0xaf8) = 0;
    }
    else {
      iVar3 = ((((in_EDX - *(int *)(in_ECX + 0x5c)) - iVar3 / 2) + -0x5e) * iVar4) / (iVar2 - iVar3)
      ;
      iVar2 = iVar3;
      if (iVar3 < 1) {
        iVar2 = 0;
      }
      if (iVar3 <= iVar4) {
        iVar4 = iVar2;
      }
      *(int *)(in_ECX + 0xaf8) = iVar4;
    }
  }
  return;
}


#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(int *)(frame + 44))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cf90
 */

void recovered_1001cf90(int in_ECX,undefined4 in_EDX,int *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;

  uVar12 = pf_app_udiv_full(CONCAT44(in_EDX,in_ECX),0x15180);
  uVar4 = (uint)uVar12;
  if (param_3 == (int *)0x0) {
    return;
  }
  uVar10 = in_ECX + uVar4 * -0x15180;
  local_18 = -0x7b1;
  local_1c = 0x7b1;
  local_14 = -0x7b2;
  uVar7 = 0x7b2;
  uVar3 = uVar12;
  do {
    uVar2 = uVar3;
    uVar9 = uVar7;
    uVar8 = (uint)(uVar2 >> 0x20);
    uVar11 = (uint)uVar2;
    uVar5 = 0x16d;
    if ((uVar9 & 3) == 0) {
      uVar5 = ((uVar9 / 400) * 400 + local_14 == 0 || (uVar9 / 100) * 100 + local_14 != 0) + 0x16d;
    }
    local_18 = local_18 + -1;
    local_1c = local_1c + 1;
    local_14 = local_14 + -1;
    uVar7 = uVar9 + 1;
    uVar3 = CONCAT44(uVar8 - (uVar11 < uVar5),uVar11 - uVar5);
  } while ((uVar11 < uVar5) <= uVar8);
  if (uVar8 < (uVar11 < 0x1f)) {
    iVar6 = 1;
  }
  else {
    uVar11 = (uint)(uVar2 - 0x1f);
    uVar8 = (uint)(uVar2 - 0x1f >> 0x20);
    uVar7 = ((uVar9 & 3) != 0 ||
            (local_1c / 400) * -400 != local_18 && (local_1c / 100) * -100 == local_18) ^ 0x1d;
    uVar5 = uVar11 - uVar7;
    uVar7 = (uint)(uVar11 < uVar7);
    uVar9 = uVar8 - uVar7;
    iVar6 = 2;
    if (uVar7 <= uVar8) {
      if (uVar9 < (uVar5 < 0x1f)) {
        iVar6 = 3;
      }
      else {
        uVar11 = uVar5 - 0x1f;
        iVar6 = 4;
        if ((uVar9 - 1) + (uint)(0x1e < uVar5) < (uint)(uVar11 < 0x1e)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0x3d;
        iVar6 = 5;
        if ((uVar9 - 1) + (uint)(0x3c < uVar5) < (uint)(uVar11 < 0x1f)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0x5c;
        iVar6 = 6;
        if ((uVar9 - 1) + (uint)(0x5b < uVar5) < (uint)(uVar11 < 0x1e)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0x7a;
        iVar6 = 7;
        if ((uVar9 - 1) + (uint)(0x79 < uVar5) < (uint)(uVar11 < 0x1f)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0x99;
        iVar6 = 8;
        if ((uVar9 - 1) + (uint)(0x98 < uVar5) < (uint)(uVar11 < 0x1f)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0xb8;
        iVar6 = 9;
        if ((uVar9 - 1) + (uint)(0xb7 < uVar5) < (uint)(uVar11 < 0x1e)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0xd6;
        iVar6 = 10;
        if ((uVar9 - 1) + (uint)(0xd5 < uVar5) < (uint)(uVar11 < 0x1f)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0xf5;
        iVar6 = 0xb;
        if ((uVar9 - 1) + (uint)(0xf4 < uVar5) < (uint)(uVar11 < 0x1e)) goto LAB_1001d1ea;
        uVar11 = uVar5 - 0x113;
        bVar1 = (uVar9 - 1) + (uint)(0x112 < uVar5) < (uint)(uVar11 < 0x1f);
        iVar6 = 0xd - (uint)bVar1;
        if (bVar1) goto LAB_1001d1ea;
        uVar5 = uVar5 - 0x132;
      }
      uVar11 = uVar5;
    }
  }
LAB_1001d1ea:
  *param_3 = -local_18;
  param_3[1] = iVar6;
  param_3[2] = uVar11 + 1;
  param_3[3] = uVar10 / 0xe10;
  param_3[4] = (uVar10 / 0x3c) % 0x3c;
  param_3[5] = uVar10 % 0x3c;
  local_24 = (int)(uVar12 >> 0x20);
  uVar12 = pf_app_umod_full(CONCAT44(local_24 + (uint)(0xfffffffb < uVar4),uVar4 + 4),7);
  param_3[6] = (int)uVar12;
  return;
}

#undef local_1c
#undef local_18
#undef local_14
#undef local_24

#undef UNK_0181e647
#define UNK_0181e647 (*(uint8_t *)(0x181e647U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d260
 */

undefined4
recovered_1001d260(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong *param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  uVar1 = 0;
  if ((((param_3 != 0) && (0xfffffff3 < in_EDX - 0xd)) && (0x7b1 < in_ECX)) &&
     (param_7 != (longlong *)0x0)) {
    if (((in_ECX & 3) != 0 || in_EDX != 2) ||
       ((uVar3 = 0x1d, (in_ECX * -0x3d70a3d7 >> 2 | in_ECX * 0x40000000) < 0x28f5c29 &&
        (in_ECX != (in_ECX / 400) * 400)))) {
      uVar3 = (uint)(byte)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x817U)))[in_EDX];
    }
    uVar1 = 0;
    if (((param_6 < 0x3c) && (param_5 < 0x3c)) && ((param_4 < 0x18 && (param_3 <= uVar3)))) {
      uVar3 = 0;
      iVar5 = 0;
      if (0x7b2 < in_ECX) {
        uVar4 = 0x7b2;
        uVar3 = 0;
        iVar5 = 0;
        do {
          uVar2 = 0x16d;
          if ((uVar4 & 3) == 0) {
            uVar2 = ((uVar4 / 400) * -400 + 0x7b2 + uVar4 == 0x7b2 ||
                    (uVar4 / 100) * -100 + 0x7b2 + uVar4 != 0x7b2) + 0x16d;
          }
          bVar6 = CARRY4(uVar3,uVar2);
          uVar3 = uVar3 + uVar2;
          iVar5 = iVar5 + (uint)bVar6;
          uVar4 = uVar4 + 1;
        } while (in_ECX != uVar4);
      }
      if (1 < in_EDX) {
        bVar6 = 0xffffffe0 < uVar3;
        uVar3 = uVar3 + 0x1f;
        iVar5 = iVar5 + (uint)bVar6;
        if (in_EDX != 2) {
          uVar4 = ((in_ECX & 3) != 0 ||
                  0xa3d70a < (in_ECX * -0x3d70a3d7 >> 4 | in_ECX * -0x70000000) &&
                  (in_ECX * -0x3d70a3d7 >> 2 | in_ECX * 0x40000000) < 0x28f5c29) ^ 0x1d;
          bVar6 = CARRY4(uVar3,uVar4);
          uVar3 = uVar3 + uVar4;
          iVar5 = iVar5 + (uint)bVar6;
          if (in_EDX != 3) {
            uVar4 = 3;
            do {
              bVar6 = CARRY4(uVar3,(uint)(byte)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x817U)))[uVar4]);
              uVar3 = uVar3 + (byte)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x817U)))[uVar4];
              iVar5 = iVar5 + (uint)bVar6;
              uVar4 = uVar4 + 1;
            } while (in_EDX != uVar4);
          }
        }
      }
      *param_7 = (ulonglong)((param_3 - 1) + uVar3) * 0x15180 +
                 CONCAT44((iVar5 + (uint)CARRY4(param_3 - 1,uVar3)) * 0x15180,
                          param_5 * 0x3c + param_4 * 0xe10 + param_6);
      uVar1 = CONCAT31((int3)((uint)param_7 >> 8),1);
    }
  }
  return uVar1;
}

#undef UNK_0181e647

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181f0b4
#define DAT_0181f0b4 (*(uint8_t *)(0x181f0b4U))
#undef DAT_0181f0d0
#define DAT_0181f0d0 (*(uint8_t *)(0x181f0d0U))
#undef DAT_01823fac
#define DAT_01823fac (*(uint8_t *)(0x1823facU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#define local_34 (*(uint *)(frame + 28))
#define acStack_1f (*(char (*)[14])(frame + 49))
#define local_30 (*(uint *)(frame + 32))
#define local_2c (*(uint *)(frame + 36))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(uint *)(frame + 44))
#define local_11 (*(char *)(frame + 63))
#define local_40 (*(int *)(frame + 16))
#define local_3c (*(int *)(frame + 20))
#define local_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001d460(char *in_ECX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_EDX;
  char cVar10;
  char *pcVar11;

  if (in_ECX == (char *)0x0) {
    return;
  }
  memset(&local_40,0,0x18);
  iVar9 = Ram00006800;
  if ((((iVar9 != 0x50414d57) || (iVar9 = Ram00006804, iVar9 == 0)) ||
      (uVar8 = Ram00006808, uVar8 < 0xc)) ||
     (((uVar8 = Ram00006808, uVar8 < 0x16c ||
       (pcVar2 = (code *)UINT_00006968, pcVar2 == (code *)0x0)) ||
      (uVar5 = (*pcVar2)(&local_40), uVar8 = local_38, uVar5 == 0)))) {
    builtin_strncpy(in_ECX,"Time unavailable",0x10);
    uVar8 = 0x10;
    goto LAB_1001d6d3;
  }
  local_24 = local_34;
  memset(&local_40,0,0x1c);
  lVar3 = (longlong)(*(uint32_t *)(pf_module_state+0x617cU)) * 0x3c + CONCAT44(local_24,uVar8);
  in_EDX = (undefined4)((ulonglong)lVar3 >> 0x20);
  iVar9 = 0;
  if (-1 < lVar3) {
    iVar9 = (int)lVar3;
  }
  if (lVar3 < 0x100000000) {
    in_EDX = 0;
  }
  recovered_1001cf90(iVar9,in_EDX,&local_40);
  uVar5 = local_34 + (local_34 / 3 & 0xfffffffc) * -3;
  uVar8 = 0xc;
  if (uVar5 != 0) {
    uVar8 = uVar5;
  }
  *in_ECX = '\0';
  if (6 < local_28) {
    local_28 = 0;
  }
  pcVar11 = *(char **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1284U)) + local_28 * 4);
  uVar5 = strlen(in_ECX);
  if (uVar5 < 0x50) {
    if (uVar5 != 0x4f) {
      cVar10 = *pcVar11;
      uVar4 = uVar5;
      while (uVar5 = uVar4, cVar10 != '\0') {
        pcVar11 = pcVar11 + 1;
        in_ECX[uVar4] = cVar10;
        uVar5 = uVar4 + 1;
        if (0x4d < uVar4) break;
        uVar4 = uVar5;
        cVar10 = *pcVar11;
      }
    }
    in_ECX[uVar5] = '\0';
  }
  uVar6 = strlen(in_ECX);
  if (uVar6 < 0x50) {
    iVar9 = 0x4f;
    if (uVar6 != 0x4f) {
      iVar9 = uVar6 + 1;
      in_ECX[uVar6] = ' ';
    }
    in_ECX[iVar9] = '\0';
  }
  uVar5 = local_3c - 1;
  if (0xb < uVar5) {
    uVar5 = 0;
  }
  pcVar11 = *(char **)(&(*(uint8_t *)((uintptr_t)pf_module_state+0x12a0U)) + uVar5 * 4);
  uVar5 = strlen(in_ECX);
  if (uVar5 < 0x50) {
    if (uVar5 != 0x4f) {
      cVar10 = *pcVar11;
      uVar4 = uVar5;
      while (uVar5 = uVar4, cVar10 != '\0') {
        pcVar11 = pcVar11 + 1;
        in_ECX[uVar4] = cVar10;
        uVar5 = uVar4 + 1;
        if (0x4d < uVar4) break;
        uVar4 = uVar5;
        cVar10 = *pcVar11;
      }
    }
    in_ECX[uVar5] = '\0';
  }
  uVar6 = strlen(in_ECX);
  if (uVar6 < 0x50) {
    iVar9 = 0x4f;
    if (uVar6 != 0x4f) {
      iVar9 = uVar6 + 1;
      in_ECX[uVar6] = ' ';
    }
    in_ECX[iVar9] = '\0';
  }
  recovered_10015400(in_ECX,0x50,local_38);
  uVar6 = strlen(in_ECX);
  if (uVar6 < 0x50) {
    iVar9 = 0x4f;
    if (uVar6 != 0x4f) {
      iVar9 = uVar6 + 1;
      in_ECX[uVar6] = ' ';
    }
    in_ECX[iVar9] = '\0';
  }
  recovered_10015400(in_ECX,0x50,uVar8);
  uVar6 = strlen(in_ECX);
  if (uVar6 < 0x50) {
    iVar9 = 0x4f;
    if (uVar6 != 0x4f) {
      iVar9 = uVar6 + 1;
      in_ECX[uVar6] = ':';
    }
    in_ECX[iVar9] = '\0';
  }
  if (local_30 == 0) {
    acStack_1f[1] = 0x30;
LAB_1001d6e3:
    acStack_1f[2] = 0x30;
    uVar5 = 2;
  }
  else {
    uVar8 = 0;
    do {
      acStack_1f[uVar8 + 1] = (char)local_30 + (char)(local_30 / 10) * -10 | 0x30;
      uVar5 = uVar8 + 1;
      if (10 < uVar8) break;
      bVar1 = 9 < local_30;
      local_30 = local_30 / 10;
      uVar8 = uVar5;
    } while (bVar1);
    if (uVar5 == 1) goto LAB_1001d6e3;
  }
  do {
    cVar10 = acStack_1f[uVar5];
    local_11 = '\0';
    uVar6 = strlen(in_ECX);
    if (uVar6 < 0x50) {
      if (uVar6 != 0x4f && cVar10 != '\0') {
        pcVar11 = &local_11;
        uVar7 = uVar6;
        do {
          in_ECX[uVar7] = cVar10;
          uVar6 = uVar7 + 1;
          if (0x4d < uVar7) break;
          cVar10 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          uVar7 = uVar6;
        } while (cVar10 != '\0');
      }
      in_ECX[uVar6] = '\0';
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  uVar6 = strlen(in_ECX);
  if (uVar6 < 0x50) {
    iVar9 = 0x4f;
    if (uVar6 != 0x4f) {
      iVar9 = uVar6 + 1;
      in_ECX[uVar6] = ':';
    }
    in_ECX[iVar9] = '\0';
  }
  if (local_2c == 0) {
    acStack_1f[1] = 0x30;
LAB_1001d797:
    acStack_1f[2] = 0x30;
    uVar5 = 2;
  }
  else {
    uVar8 = 0;
    do {
      acStack_1f[uVar8 + 1] = (char)local_2c + (char)(local_2c / 10) * -10 | 0x30;
      uVar5 = uVar8 + 1;
      if (10 < uVar8) break;
      bVar1 = 9 < local_2c;
      local_2c = local_2c / 10;
      uVar8 = uVar5;
    } while (bVar1);
    if (uVar5 == 1) goto LAB_1001d797;
  }
  do {
    cVar10 = acStack_1f[uVar5];
    local_11 = '\0';
    uVar6 = strlen(in_ECX);
    if (uVar6 < 0x50) {
      if (uVar6 != 0x4f && cVar10 != '\0') {
        pcVar11 = &local_11;
        uVar7 = uVar6;
        do {
          in_ECX[uVar7] = cVar10;
          uVar6 = uVar7 + 1;
          if (0x4d < uVar7) break;
          cVar10 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          uVar7 = uVar6;
        } while (cVar10 != '\0');
      }
      in_ECX[uVar6] = '\0';
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  pcVar11 = "am";
  if (0xb < local_34) {
    pcVar11 = "pm";
  }
  uVar8 = strlen(in_ECX);
  if (0x4f < uVar8) {
    return;
  }
  if (uVar8 != 0x4f) {
    cVar10 = *pcVar11;
    uVar5 = uVar8;
    while (uVar8 = uVar5, cVar10 != '\0') {
      pcVar11 = pcVar11 + 1;
      in_ECX[uVar5] = cVar10;
      uVar8 = uVar5 + 1;
      if (0x4d < uVar5) break;
      uVar5 = uVar8;
      cVar10 = *pcVar11;
    }
  }
LAB_1001d6d3:
  in_ECX[uVar8] = '\0';
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181f0b4
#undef DAT_0181f0d0
#undef DAT_01823fac
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006968
#undef local_34
#undef acStack_1f
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_11
#undef local_40
#undef local_3c
#undef local_38

#define local_34 (*(int *)(frame + 28))
#define local_24 (*(int *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_14 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d850
 */

void recovered_1001d850(int in_ECX,int *in_EDX,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;

  uVar6 = 0;
  uVar2 = *(int *)(in_ECX + 0x1c) - 0xf;
  if ((uVar2 < 0x12) && ((0x20203U >> (uVar2 & 0x1f) & 1) != 0)) {
    uVar6 = *(int *)(in_ECX + 0x1c) + 7U >> 3;
  }
  if ((((in_EDX[2] != 0) && (iVar11 = *in_EDX, 0 < iVar11)) && (iVar12 = in_EDX[1], 0 < iVar12)) &&
     (((iVar11 == *(int *)(in_ECX + 0x14) && (iVar12 == *(int *)(in_ECX + 0x18))) &&
      ((*(int *)(in_ECX + 0x38) != 0 && ((uVar6 != 0 && (0 < param_6 && 0 < param_5)))))))) {
    local_14 = param_3;
    if (iVar11 <= param_3) {
      local_14 = iVar11;
    }
    local_34 = 0;
    local_20 = 0;
    if (-1 < param_3) {
      local_20 = local_14;
    }
    iVar8 = param_4;
    if (iVar12 <= param_4) {
      iVar8 = iVar12;
    }
    iVar10 = param_5 + param_3;
    local_24 = 0;
    if (-1 < param_4) {
      local_24 = iVar8;
    }
    local_14 = iVar10;
    if (iVar11 <= iVar10) {
      local_14 = iVar11;
    }
    iVar8 = param_6 + param_4;
    iVar11 = 0;
    if (-1 < iVar10) {
      iVar11 = local_14;
    }
    iVar10 = iVar8;
    if (iVar12 <= iVar8) {
      iVar10 = iVar12;
    }
    if (-1 < iVar8) {
      local_34 = iVar10;
    }
    if (((local_20 < iVar11) && (local_24 < local_34)) &&
       (iVar12 = iVar11 - local_20, local_20 < iVar11)) {
      iVar11 = in_ECX + 4;
      iVar8 = local_20 * uVar6;
      do {
        iVar9 = *(int *)(in_ECX + 0x10);
        iVar1 = *(int *)(in_ECX + 0x38);
        iVar10 = in_EDX[2];
        iVar4 = *in_EDX * local_24 + local_20;
        if (uVar6 == 4) {
          iVar10 = iVar10 + 2 + iVar4 * 4;
          iVar4 = 0;
          do {
            uVar2 = recovered_10016e50(iVar11,(uint)*(byte *)(iVar10 + -2 + iVar4 * 4),
                                       *(byte *)(iVar10 + -1 + iVar4 * 4),
                                       *(byte *)(iVar10 + iVar4 * 4));
            *(uint *)(iVar9 * local_24 + iVar1 + iVar8 + iVar4 * 4) = uVar2;
            iVar4 = iVar4 + 1;
          } while (iVar12 != iVar4);
        }
        else if (uVar6 == 2) {
          iVar10 = iVar10 + 2 + iVar4 * 4;
          iVar4 = 0;
          do {
            uVar2 = recovered_10016e50(iVar11,(uint)*(byte *)(iVar10 + -2 + iVar4 * 4),
                                       *(byte *)(iVar10 + -1 + iVar4 * 4),
                                       *(byte *)(iVar10 + iVar4 * 4));
            *(short *)(iVar9 * local_24 + iVar1 + iVar8 + iVar4 * 2) = (short)uVar2;
            iVar4 = iVar4 + 1;
          } while (iVar12 != iVar4);
        }
        else {
          iVar10 = iVar10 + iVar4 * 4;
          puVar13 = (undefined1 *)(iVar9 * local_24 + iVar8 + iVar1);
          iVar9 = 0;
          do {
            uVar2 = recovered_10016e50(iVar11,(uint)*(byte *)(iVar10 + iVar9 * 4),
                                       *(byte *)(iVar10 + 1 + iVar9 * 4),
                                       *(byte *)(iVar10 + 2 + iVar9 * 4));
            if (iVar1 != 0) {
              bVar3 = 0;
              puVar5 = puVar13;
              uVar7 = uVar6;
              do {
                *puVar5 = (char)(uVar2 >> (bVar3 & 0x1f));
                puVar5 = puVar5 + 1;
                bVar3 = bVar3 + 8;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            iVar9 = iVar9 + 1;
            puVar13 = puVar13 + uVar6;
          } while (iVar9 != iVar12);
        }
        local_24 = local_24 + 1;
      } while (local_24 != local_34);
    }
  }
  return;
}

#undef local_34
#undef local_24
#undef local_20
#undef local_14

#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dad0
 */

void recovered_1001dad0(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *dst;
  int iVar5;
  int iVar6;
  void *a;
  int iVar7;
  int iVar8;
  ulong n;
  void *b;

  uVar2 = *(int *)(in_ECX + 0x1c) - 0xf;
  if (((uVar2 < 0x12) && ((0x20203U >> (uVar2 & 0x1f) & 1) != 0)) && (*(int *)(in_ECX + 0x38) != 0))
  {
    iVar3 = *(int *)(in_ECX + 0x14);
    iVar1 = *(int *)(in_ECX + 0x18);
    if ((0 < param_6 && 0 < param_5) && (0 < iVar1 && 0 < iVar3)) {
      iVar5 = param_3;
      if (iVar3 <= param_3) {
        iVar5 = iVar3;
      }
      local_24 = 0;
      iVar4 = 0;
      if (-1 < param_3) {
        iVar4 = iVar5;
      }
      iVar5 = param_4;
      if (iVar1 <= param_4) {
        iVar5 = iVar1;
      }
      iVar6 = param_5 + param_3;
      iVar7 = 0;
      if (-1 < param_4) {
        iVar7 = iVar5;
      }
      iVar5 = iVar6;
      if (iVar3 <= iVar6) {
        iVar5 = iVar3;
      }
      iVar8 = param_6 + param_4;
      iVar3 = 0;
      if (-1 < iVar6) {
        iVar3 = iVar5;
      }
      iVar5 = iVar8;
      if (iVar1 <= iVar8) {
        iVar5 = iVar1;
      }
      if (-1 < iVar8) {
        local_24 = iVar5;
      }
      if (((iVar4 < iVar3) && (iVar7 < local_24)) && (iVar3 - iVar4 != 0 && iVar4 <= iVar3)) {
        uVar2 = *(int *)(in_ECX + 0x1c) + 7U >> 3;
        n = (iVar3 - iVar4) * uVar2;
        if ((n != 0) && (iVar3 * uVar2 <= *(uint *)(in_ECX + 0x10))) {
          do {
            iVar3 = *(int *)(in_ECX + 0x10) * iVar7 + iVar4 * uVar2;
            a = (void *)(*(int *)(in_ECX + 0x38) + iVar3);
            dst = (void *)(in_EDX + iVar3);
            if (*(int *)(in_ECX + 0x3c) == 0) {
LAB_1001dc68:
              memcpy(dst,a,n);
            }
            else {
              b = (void *)(*(int *)(in_ECX + 0x3c) + iVar3);
              if (((*(char *)(in_ECX + 0x48) != '\x01') ||
                  (*(int *)(in_ECX + 0x44) != *(int *)(in_ECX + 0x40))) ||
                 (iVar3 = memcmp(a,b,n), iVar3 != 0)) {
                memcpy(dst,a,n);
                dst = b;
                goto LAB_1001dc68;
              }
            }
            iVar7 = iVar7 + 1;
          } while (local_24 != iVar7);
        }
      }
    }
  }
  return;
}

#undef local_24

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000695c
#define UINT_0000695c (*(uint *)(0x695cU))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dc90
 */

void recovered_1001dc90(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint y;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar4 = *(uint *)(in_ECX + 0x14);
  if (((uVar4 != 0) && (uVar5 = *(uint *)(in_ECX + 0x18), uVar5 != 0)) &&
     ((0 < param_5 && 0 < param_4) && (0 < (int)uVar5 && 0 < (int)uVar4))) {
    uVar6 = in_EDX;
    if ((int)uVar4 <= (int)in_EDX) {
      uVar6 = uVar4;
    }
    local_14 = 0;
    if (-1 < (int)in_EDX) {
      local_14 = uVar6;
    }
    uVar6 = param_3;
    if ((int)uVar5 <= (int)param_3) {
      uVar6 = uVar5;
    }
    uVar7 = param_4 + in_EDX;
    y = 0;
    if (-1 < (int)param_3) {
      y = uVar6;
    }
    uVar6 = uVar7;
    if ((int)uVar4 <= (int)uVar7) {
      uVar6 = uVar4;
    }
    uVar3 = param_5 + param_3;
    uVar4 = 0;
    if (-1 < (int)uVar7) {
      uVar4 = uVar6;
    }
    uVar6 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar6 = uVar5;
    }
    uVar5 = 0;
    if (-1 < (int)uVar3) {
      uVar5 = uVar6;
    }
    if ((((((int)local_14 < (int)uVar4) && (uVar6 = uVar5 - y, uVar6 != 0 && (int)y <= (int)uVar5))
         && ((uVar4 - local_14 != 0 && (int)local_14 <= (int)uVar4 &&
             ((0 < (int)uVar6 && (iVar1 = Ram00006800, iVar1 == 0x50414d57)))))) &&
        (iVar1 = Ram00006804, iVar1 != 0)) &&
       (((uVar5 = Ram00006808, 0xb < uVar5 && (uVar5 = Ram00006808, 0x15f < uVar5)) &&
        (pcVar2 = (code *)UINT_0000695c, pcVar2 != (code *)0x0)))) {
      (*pcVar2)(local_14,y,uVar4 - local_14,uVar6);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000695c
#undef local_14

#undef DAT_0181f2d4
#define DAT_0181f2d4 (*(uint8_t *)(0x181f2d4U))
#undef DAT_0181f8dc
#define DAT_0181f8dc (*(uint8_t *)(0x181f8dcU))
#undef DAT_018240a4
#define DAT_018240a4 (*(uint8_t *)(0x18240a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dda0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001dda0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  recovered_1000c310();
  recovered_1000c710();
  recovered_1000c940();
  recovered_1000ca80();
  if (0 < (*(uint32_t *)(pf_module_state+0x6274U))) {
    iVar4 = 0;
    iVar2 = (*(uint32_t *)(pf_module_state+0x6274U));
    iVar3 = (*(uint32_t *)(pf_module_state+0x1aacU));
    do {
      iVar1 = *(int *)(iVar3 + iVar4 * 4);
      if (iVar1 != in_ECX) {
        recovered_1000ce80((char *)(iVar1 * 0xd9c + (*(uint32_t *)(pf_module_state+0x14a4U))));
        iVar2 = (*(uint32_t *)(pf_module_state+0x6274U));
        iVar3 = (*(uint32_t *)(pf_module_state+0x1aacU));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  recovered_1000e0a0();
  recovered_1000e1d0();
  recovered_1000e450();
  recovered_1000e590();
  return;
}

#undef DAT_0181f2d4
#undef DAT_0181f8dc
#undef DAT_018240a4
