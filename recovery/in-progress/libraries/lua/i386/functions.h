/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#define PF_NATIVE_X87 1
#include "support.h"
#define PF_NATIVE_X87 1
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
static const int32_t pf_lua_comparison_table[15]={5108,5774,5346,4893,5519,5598,4972,5774,5774,5425,5457,3858,3858,3858,3858};
static const int32_t pf_lua_dispatch_1003ba44[]={98,1817,1455,1641,211,1924,2110,1738,2371,6385,6404,6296,6309,5197,5197,5197,5197,6613,6637,6512,6526,6470,6470,6470,6470,6861,6883,6770,6786,5347,5347,5347,5347,7094,7118,6995,7009,6953,6953,6953,6953,7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1003bae8[]={7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1003baa8[]={6861,6883,6770,6786,5347,5347,5347,5347,7094,7118,6995,7009,6953,6953,6953,6953,7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1003bac8[]={7094,7118,6995,7009,6953,6953,6953,6953,7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1003ba68[]={6385,6404,6296,6309,5197,5197,5197,5197,6613,6637,6512,6526,6470,6470,6470,6470,6861,6883,6770,6786,5347,5347,5347,5347,7094,7118,6995,7009,6953,6953,6953,6953,7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1003ba88[]={6613,6637,6512,6526,6470,6470,6470,6470,6861,6883,6770,6786,5347,5347,5347,5347,7094,7118,6995,7009,6953,6953,6953,6953,7548,4296,7819,7273,8120,8231,7384,4296,4296,7930,8024,4202,4202,4202,4202,9518,10011,10016,10036,10041,10303,10308,10061,10328,10066,10333,9924,10071,10338,9846,10091,9866,10096,10343,10492,10348,10353,10358,10517,10116,10121,10731,9809,10537,10542,10363,10141,10368,9886,9814,9731,9819,9736,10562,10582,10161,9736,10166,10587,9721,9736,9891,10373,10797,9736,9736,9741,9929,9736,9736,9934,9706,10799,9736,9736,10824,9746,9736,10736,10790,9751,10592,9954,9736,10627,9736,10186,9736,10378,10398,10206,10211,10403,9764,9911,10954,9824,9646,9769,10795,10829,10839,9774,10224,9711,10928,9651,9779,9991,9996,9586,9571,10432,10479,10479,10479,10885,9726,11008,11024,9606,10246,9716,10278,11006,9671,11057,10283,11059,11038,11038,11038,10930,9784,10952,10923,9676,9626,9789,9794,9576,9566,10756,10647,9799,9804,10669,10669,10674,10001,10684,10694,9681,10006,9581,9538};
static const int32_t pf_lua_dispatch_1000c240[]={462,268,381,389,329,536,536,586,548,570,546};
static const int32_t pf_lua_dispatch_10055eb8[]={876,699,789,801,724,3724,3606,3666,3675,3622,4321,4345,4215,4232,3890,3890,3890,3890,3804,5004,5025,5040,3755,5420,5281,5347,5359,5300,1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055ecc[]={3724,3606,3666,3675,3622,4321,4345,4215,4232,3890,3890,3890,3890,3804,5004,5025,5040,3755,5420,5281,5347,5359,5300,1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055ee0[]={4321,4345,4215,4232,3890,3890,3890,3890,3804,5004,5025,5040,3755,5420,5281,5347,5359,5300,1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f00[]={3804,5004,5025,5040,3755,5420,5281,5347,5359,5300,1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f14[]={5420,5281,5347,5359,5300,1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f28[]={1292,1174,1234,1243,1190,1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f3c[]={1881,1905,1783,1797,1458,1458,1458,1458,1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f5c[]={1372,2556,2577,2592,1323,2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_10055f70[]={2972,2833,2899,2911,2852,5705,5788,5798,5835,5840,5896,5924,5842,5926,5847,5928,5849,5854,5854,5933,5933,5773,5859,5773,5778,5938,5943,5990,5953,5958,6007,6029,5861,5886,6129,5748,5748,6051,6051,6053,5960,6053,5891,5985,5783,5753,5718,5738,5743,6125,6127};
static const int32_t pf_lua_dispatch_1004e094[]={736,1844,868,1844,1844,736,1844,1844,1844,1844,1844,1844,1844,1844,1844,905,2009,2023,2055,2057,2057,2059,2073,2075,2075,2061,2077,2063,2079,2065,2067,2101,2101,2019,2069,2101,2021,2071,2137,2154,2183,2205};
static const int32_t pf_lua_dispatch_1000d1a8[]={1735,1625,1712,1724,1647,3540,3540,3584,3594,3604,3550,3665,3667,3669,3679,3679,3681,3683,3683,3555,3557,3557,3693,3693,3559,3742,3564,3758};
static const int32_t pf_lua_dispatch_1000d180[]={1146,1026,1088,1096,1041,2778,2658,2720,2728,2673,1735,1625,1712,1724,1647,3540,3540,3584,3594,3604,3550,3665,3667,3669,3679,3679,3681,3683,3683,3555,3557,3557,3693,3693,3559,3742,3564,3758};
static const int32_t pf_lua_dispatch_1000d194[]={2778,2658,2720,2728,2673,1735,1625,1712,1724,1647,3540,3540,3584,3594,3604,3550,3665,3667,3669,3679,3679,3681,3683,3683,3555,3557,3557,3693,3693,3559,3742,3564,3758};
static const int32_t pf_lua_dispatch_100125d8[]={938,749,849,857,785,1049,1095,1095,1061,1105,1051,1109,1178,1107};
static const int32_t pf_lua_dispatch_10030a50[]={336,358,132,259,232,232,232,232,535,535,570,537};
static const int32_t pf_lua_dispatch_10053d4c[]={1404,1494,1508,1516,1356,2237,2261,2136,2150,1784,1784,1784,1784,1935,1965,1822,1842,906,906,906,906,2366,2423,2404,2428,2406,2448,2461,2478,2495,2411,2500,2413,2418,2529,2386,2551,2399,2585,2619,2645,2621,2643,2693,2695};
static const int32_t pf_lua_dispatch_10053d60[]={2237,2261,2136,2150,1784,1784,1784,1784,1935,1965,1822,1842,906,906,906,906,2366,2423,2404,2428,2406,2448,2461,2478,2495,2411,2500,2413,2418,2529,2386,2551,2399,2585,2619,2645,2621,2643,2693,2695};
static const int32_t pf_lua_dispatch_10053d80[]={1935,1965,1822,1842,906,906,906,906,2366,2423,2404,2428,2406,2448,2461,2478,2495,2411,2500,2413,2418,2529,2386,2551,2399,2585,2619,2645,2621,2643,2693,2695};
static const int32_t pf_lua_dispatch_10048a04[]={1036,910,973,982,926,1732,1787,1819,1829,1747,1865,1889,1863,1905,1760,1924,1742,1785,1887};
static const int32_t pf_lua_dispatch_1004c904[]={3452,3320,3388,3398,3338,4189,4405,4298,4443,4241,4514,4537,4486,4553,4317,4593,4246,4374,4715,4236,4376,4208,4509,4749,4814,4765,4790,4792,4877,4395,4400};
static const int32_t pf_lua_dispatch_1004c8f0[]={2844,2721,2784,2793,2737,3452,3320,3388,3398,3338,4189,4405,4298,4443,4241,4514,4537,4486,4553,4317,4593,4246,4374,4715,4236,4376,4208,4509,4749,4814,4765,4790,4792,4877,4395,4400};
static const int32_t pf_lua_dispatch_10049e88[]={430,539,612,612,430,430,430,430,612,311,430,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,430,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,612,463,612,612,430,1590,1928,1928,1928,1888,1928,1928,1928,1928,1928,1928,1928,1928,1928,2075,1928,1928,2043,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,2060,1928,1928,1928,1908,595,747,747,865,747,747,747,747,747,747,747,747,747,747,747,747,747,747,879,747,747,747,905,747,747,747,747,747,747,747,747,747,893,747,747,819,747,747,747,747,747,747,747,747,747,747,747,747,747,747,836,747,747,747,848,2489,2501,2493,2503,2495,2505,2507,2509,2519,2519,2497,2497,2521,2491,2491,2491,2491,2519,2519,2519,2501,2499,2543};
static const int32_t pf_lua_dispatch_10049f74[]={1590,1928,1928,1928,1888,1928,1928,1928,1928,1928,1928,1928,1928,1928,2075,1928,1928,2043,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,1928,2060,1928,1928,1928,1908,595,747,747,865,747,747,747,747,747,747,747,747,747,747,747,747,747,747,879,747,747,747,905,747,747,747,747,747,747,747,747,747,893,747,747,819,747,747,747,747,747,747,747,747,747,747,747,747,747,747,836,747,747,747,848,2489,2501,2493,2503,2495,2505,2507,2509,2519,2519,2497,2497,2521,2491,2491,2491,2491,2519,2519,2519,2501,2499,2543};
static const int32_t pf_lua_dispatch_1004a008[]={595,747,747,865,747,747,747,747,747,747,747,747,747,747,747,747,747,747,879,747,747,747,905,747,747,747,747,747,747,747,747,747,893,747,747,819,747,747,747,747,747,747,747,747,747,747,747,747,747,747,836,747,747,747,848,2489,2501,2493,2503,2495,2505,2507,2509,2519,2519,2497,2497,2521,2491,2491,2491,2491,2519,2519,2519,2501,2499,2543};
static const int32_t pf_lua_dispatch_1002d8dc[]={7010,7040,6908,6929,6828,6828,6828,6828,10169,10185,11399,11528,11518,11518,10210,10220,11508,10254,10252,10252,10252,11907,11912,11543,10271,10273,11917,11533,10301,11795,11800,10303,10305,11833,11523,10322,11513,11503,10372,11843,10347,10396,11459,11454,11892,10437,11897,11858,11848,11449,11501,11394,11553,11409,11902,11868,11419,10613,11419,11371,11922,12042,11588,10658,11588,11389,11630,11625,11341,11414,11838,11444,11538,11538,11538,11645,10478,11645,11730,11583,11675,11760,11760,11760,11464,10523,11464,11496,11331,11635,11548,11376,11805,11782,11755,11965,11965,10568,11890,11680,11680,11404,11346,11620,11351,11326,10703,11366,11581,11581,12037,11356,11640,11670,11670,11336,11777,11361,11361,11702,11735};
static const int32_t pf_lua_dispatch_1002d89c[]={4096,4124,3506,4008,3957,3957,3957,3957,3111,3136,3010,3026,2959,2959,2959,2959,7010,7040,6908,6929,6828,6828,6828,6828,10169,10185,11399,11528,11518,11518,10210,10220,11508,10254,10252,10252,10252,11907,11912,11543,10271,10273,11917,11533,10301,11795,11800,10303,10305,11833,11523,10322,11513,11503,10372,11843,10347,10396,11459,11454,11892,10437,11897,11858,11848,11449,11501,11394,11553,11409,11902,11868,11419,10613,11419,11371,11922,12042,11588,10658,11588,11389,11630,11625,11341,11414,11838,11444,11538,11538,11538,11645,10478,11645,11730,11583,11675,11760,11760,11760,11464,10523,11464,11496,11331,11635,11548,11376,11805,11782,11755,11965,11965,10568,11890,11680,11680,11404,11346,11620,11351,11326,10703,11366,11581,11581,12037,11356,11640,11670,11670,11336,11777,11361,11361,11702,11735};
static const int32_t pf_lua_dispatch_1002d8bc[]={3111,3136,3010,3026,2959,2959,2959,2959,7010,7040,6908,6929,6828,6828,6828,6828,10169,10185,11399,11528,11518,11518,10210,10220,11508,10254,10252,10252,10252,11907,11912,11543,10271,10273,11917,11533,10301,11795,11800,10303,10305,11833,11523,10322,11513,11503,10372,11843,10347,10396,11459,11454,11892,10437,11897,11858,11848,11449,11501,11394,11553,11409,11902,11868,11419,10613,11419,11371,11922,12042,11588,10658,11588,11389,11630,11625,11341,11414,11838,11444,11538,11538,11538,11645,10478,11645,11730,11583,11675,11760,11760,11760,11464,10523,11464,11496,11331,11635,11548,11376,11805,11782,11755,11965,11965,10568,11890,11680,11680,11404,11346,11620,11351,11326,10703,11366,11581,11581,12037,11356,11640,11670,11670,11336,11777,11361,11361,11702,11735};
static const int32_t pf_lua_dispatch_10015f0c[]={169,319,162,385,338,1464,825,1468,1486,1462,946,956,1466,1482,1542,1087,852,882,1117,838,899,1484,1484,1484};
static const int32_t pf_lua_dispatch_100245ac[]={1832,4395,2460,4395,4028,3148,6230,6381,6386,6388,6298,6393,6398,6400,6405,6407,6412,6300,6434,6439,6305,6456,6310,6461,6463,6566,6465,6467,6472,6588,6474,6476,6619,6315,6621,6472,6623,6478,6488,6510,6320,6325,6240,6242,6247,6625,6627,6327,6538,6637,6252,6332,6560,6681,6286,6337,6354,6354,6235,6691,6693,6288,6659,6661,6293,6293,6663,6359,6665,6562,6564};
typedef struct { uint32_t words[6]; } pf_lua_callback_value24;
extern uint8_t pf_module_state[];
void recovered_10001070(void);
void recovered_100010d0(void);
bool recovered_100012f0(ulong *addresses,ulong *sizes,ulong count);
bool recovered_10001360(ulong *addresses,ulong *sizes,ulong count);
bool recovered_100015a0(ulong address,ulong size);
uint recovered_10001620(void);
ulonglong recovered_100016a0(void);
uint recovered_10001720(void);
ulonglong recovered_10001790(void);
void * recovered_10001810(ulong size);
void * recovered_10001880(ulong size,ulong first,ulong last);
void * recovered_10001ab0(ulong size,ulong limit);
void * recovered_10001b20(ulong size,ulong first,ulong last);
void recovered_10001b90(void *pointer);
void recovered_10001c00(void *pointer);
void * recovered_10001d20(void *pointer,ulong size);
longlong recovered_100020c0(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002110(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002160(uint param_1,int param_2,uint param_3);
undefined8 recovered_100021a0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002290(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10002300(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002450(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10002520(void);
int recovered_10002540(int param_1);
void * recovered_10002560(ulong size);
void recovered_100025b0(void *pointer);
void * recovered_10002600(void *pointer,ulong size);
void * recovered_10002650(void *out,void *data,ulong size);
void * recovered_10002710(void *out,void *data,ulong size);
void * recovered_100028e0(void *out,int value,ulong size);
void recovered_10002990(undefined1 *param_1,int param_2);
void recovered_10002a30(undefined1 *param_1,int param_2);
void recovered_10002ad0(int param_1,char param_2,int param_3);
int recovered_10002b10(void *left,void *right,ulong size);
int recovered_10002c40(void);
bool recovered_10002c90(int param_1);
bool recovered_10002cb0(int param_1);
bool recovered_10002cd0(uint param_1);
bool recovered_10002cf0(uint param_1);
bool recovered_10002d20(int param_1);
bool recovered_10002d40(int param_1);
int recovered_10002d60(int param_1);
int recovered_10002d80(int param_1);
ulong recovered_10002da0(char *text);
int recovered_10002de0(char *left,char *right);
int recovered_10002e20(char *left,char *right);
void recovered_10002e60(int param_1,int param_2);
void * recovered_10002e90(char *param_1);
char * recovered_10002fd0(char *param_1,char param_2);
int recovered_10003010(int param_1,char *param_2);
ulong recovered_10003070(char *text,char *reject);
char * recovered_100030d0(char *param_1,char *param_2);
char * recovered_10003120(char *param_1,char *param_2);
undefined * recovered_10003170(void);
undefined ** recovered_10003190(void);
void recovered_100031b0(undefined4 *param_1);
double recovered_10003250(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_100032a0(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10003360(double left,double right);
double recovered_100033c0(double left,double right);
double recovered_10003450(double value);
double recovered_100034a0(double value);
double recovered_10003500(double value);
double recovered_10003600(double value);
void recovered_10003710(undefined4 param_1,undefined4 param_2);
double recovered_10003770(double value);
double recovered_10003800(double value);
double recovered_10003890(double value);
ulonglong recovered_100038b0(uint low,uint high);
ulonglong recovered_10003970(uint low,uint high);
uint recovered_10003a00(uint param_1,uint param_2);
double recovered_10003a70(uint low,uint high);
float recovered_10003b30(float left,float right);
float recovered_10003ba0(float param_1,int *param_2);
float recovered_10003c90(float param_1,int param_2);
float recovered_10003cf0(float left,float right);
float recovered_10003d90(float value);
float recovered_10003df0(float value);
double recovered_10003e60(double value);
float recovered_10003ed0(float value);
float recovered_10003f40(float value);
float recovered_10003f60(float value);
void recovered_10004080(undefined4 in_r0,undefined4 in_r1);
float recovered_100040d0(float value);
float recovered_10004160(float value);
float recovered_100041f0(float value);
int recovered_10004210(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10004360(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100044b0(char *text,char **end);
float recovered_10004670(char *text,char **end);
int recovered_100046a0(char *out,ulong capacity,char *format,void *arguments);
int recovered_10005400(char *out,ulong capacity,char *format,...);
void recovered_10005430(ulong address,ulong size,void *tail);
void * recovered_100055d0(void *chunk,ulong first);
bool recovered_10005630(void *chunk,ulong size);
void recovered_10005690(char *param_1,int param_2);
void recovered_10005850(void);
void recovered_100058f0(void);
void recovered_10005980(char *param_1,int param_2);
void recovered_100059e0(void);
void recovered_10005a30(void);
bool recovered_10005a80(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10005b80(void);
void recovered_10005b90(void);
undefined4 recovered_10005ba0(void);
undefined4 * recovered_10005bb0(char *param_1,int param_2);
void recovered_10005f60(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10006050(uint *param_1);
int recovered_10006130(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10006240(int *param_1);
int recovered_10006400(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10006580(int *param_1,uint param_2,int param_3);
undefined4 recovered_10006620(int param_1);
undefined4 recovered_10006650(uint *param_1);
undefined1 recovered_10006710(int param_1);
undefined1 recovered_10006730(int param_1);
void recovered_10006750(int param_1);
void recovered_10006780(uint param_1,int param_2);
undefined4 recovered_100067c0(int param_1);
undefined4 recovered_10006840(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100069c0(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10006aa0(int param_1,int param_2,int param_3);
undefined4 recovered_10006b20(void);
void recovered_10006b30(void);
undefined4 recovered_10006b40(void);
undefined4 recovered_10006b50(void);
undefined4 recovered_10006b60(void);
int recovered_10006b70(char *left,char *right,ulong size);
char * recovered_10006bc0(int param_1);
undefined4 recovered_10006c90(void);
undefined4 recovered_10006ca0(void);
ulong recovered_10006cb0(void);
void recovered_10006cd0(longdouble param_1);
uint recovered_10006cf0(char *param_1,void *param_2);
uint recovered_10006d40(char *param_1,undefined1 param_2);
__attribute__((naked,noreturn)) void recovered_10006da0(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10006db0(void *context);
__attribute__((naked,noreturn)) void recovered_10006e00(void *context,int value);
void recovered_10006e40(void);
undefined4 recovered_10006ec0(void);
void recovered_10006ed0(int param_1);
void recovered_10006ef0(int param_1);
void * recovered_10006f30(ulong size);
void * recovered_10006f60(ulong size);
void recovered_10006f90(void *data);
void recovered_10007020(void *data);
void recovered_100070b0(void *param_1);
void recovered_10007140(void *param_1);
undefined4 recovered_100071d0(void);
uint recovered_100071e0(uint *param_1);
void recovered_10007200(uint *param_1);
void recovered_10007210(void);
undefined1 * recovered_10007220(uint param_1);
void recovered_100072c0(int param_1);
void recovered_10007330(int arg_ecx);
int recovered_10007380(int arg_ecx);
void recovered_10007390(void);
void recovered_10007420(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007460(int arg_ecx);
void recovered_100074f0(void);
uint recovered_10007530(undefined4 *param_1);
uint recovered_10007560(undefined4 *param_1);
void recovered_100075a0(undefined4 *in_r0);
void recovered_100075c0(void);
void recovered_100075d0(undefined4 *param_1);
undefined4 recovered_10007630(int arg_ecx);
void recovered_100076e0(undefined4 *in_r0);
undefined4 recovered_10007700(void);
void recovered_10007710(void);
int recovered_10007720(int *param_1,undefined4 param_2,int *param_3);
void recovered_10007800(void);
undefined4 recovered_10007820(void);
bool recovered_10007830(int param_1);
bool recovered_10007850(int param_1);
bool recovered_10007890(uint param_1);
bool recovered_100078c0(undefined4 param_1,uint param_2);
bool recovered_100078e0(uint param_1);
bool recovered_10007900(undefined4 param_1,uint param_2);
bool recovered_10007940(undefined4 param_1,uint param_2);
longdouble recovered_10007960(double param_1);
longdouble recovered_10007a50(float param_1);
float10 recovered_10007b50(float10 param_1);
longdouble recovered_10007c40(int param_1,int param_2);
double recovered_10007c70(double value);
ulonglong recovered_10007cd0(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10007e10(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10007e30(int arg_ecx,byte *arg_edx,undefined2 *param_3);
byte * recovered_100081c0(uint arg_ecx,int *arg_edx);
void recovered_10008310(int *param_1);
void recovered_10008350(int param_1);
void recovered_10008390(undefined1 *param_1);
void recovered_100083b0(undefined1 *param_1);
void recovered_100083d0(undefined1 *param_1);
void recovered_100083f0(undefined1 *param_1);
void recovered_10008410(undefined1 *param_1,int param_2);
void recovered_10008440(undefined1 *param_1,int param_2);
void recovered_10008470(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100084a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100084d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100084f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008510(undefined1 *param_1,undefined1 param_2);
void recovered_10008530(undefined1 *param_1,undefined1 param_2);
void recovered_10008550(undefined1 *param_1,undefined1 *param_2);
void recovered_10008610(int *param_1,int param_2);
void recovered_10008670(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_10008730(undefined1 *param_1,int *in_r1);
undefined1 * recovered_10008790(undefined1 *param_1,int *in_r1);
undefined1 * recovered_100087f0(undefined1 *param_1,undefined4 *in_r1);
undefined1 * recovered_10008830(undefined1 *param_1,undefined4 *in_r1);
undefined1 * recovered_10008870(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4);
undefined4 * recovered_100088b0(undefined4 *param_1,int *param_2);
undefined1 * recovered_10008a70(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4);
void recovered_10008ab0(undefined1 *param_1,undefined4 *param_2);
void recovered_10008b50(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10008bf0(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4);
undefined1 * recovered_10008d00(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4);
void recovered_10008e10(undefined1 *param_1,undefined4 *param_2);
void recovered_10008ef0(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10008fd0(undefined1 *param_1,int *in_r1);
undefined1 * recovered_10009000(undefined1 *param_1,int *in_r1);
void recovered_10009030(undefined1 *param_1);
void recovered_10009180(int *param_1);
void recovered_10009270(undefined1 *param_1);
void recovered_10009470(int *param_1);
byte recovered_10009590(char *param_1);
void recovered_100095c0(int *param_1,undefined1 *param_2);
void recovered_10009fb0(int *param_1,undefined4 *param_2);
int * recovered_1000a000(int *param_1,undefined4 *param_2,int param_3);
int * recovered_1000a120(int *param_1,int param_2,undefined4 *param_3);
ulonglong recovered_1000a250(char *param_1);
void recovered_1000a3b0(undefined4 *param_1,int param_2);
void recovered_1000a430(undefined4 *param_1);
double recovered_1000a460(void *value);
char recovered_1000a5a0(char *param_1);
char * recovered_1000a6b0(char *param_1);
undefined4 recovered_1000a7b0(char *param_1);
undefined4 recovered_1000a8b0(char *param_1);
undefined4 recovered_1000a9b0(char *param_1);
undefined4 recovered_1000aab0(char *param_1);
char * recovered_1000abb0(char *param_1);
undefined4 * recovered_1000acb0(undefined4 *param_1);
undefined4 * recovered_1000ad70(undefined4 *param_1);
int * recovered_1000ae30(int *param_1);
int * recovered_1000ae60(int *param_1);
void recovered_1000ae90(undefined4 *param_1,undefined4 *param_2);
void recovered_1000aeb0(undefined4 *param_1,undefined4 *param_2);
int * recovered_1000aed0(int *param_1,int *param_2);
void recovered_1000af20(int *param_1,int *param_2,undefined4 *param_3);
void recovered_1000b000(int param_1,int *param_2,undefined4 *param_3);
void recovered_1000b570(int *param_1,int *param_2,undefined1 *param_3);
undefined1 * recovered_1000b670(undefined1 *arg_ecx,undefined1 *arg_edx);
void recovered_1000bee0(int arg_ecx);
uint recovered_1000bf80(void *runtime,void *name,void *output);
void * recovered_1000c270(void *output,void *value);
void recovered_1000d220(int param_1);
void recovered_1000d2c0(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
undefined4 * recovered_1000d5d0(int *arg_ecx,int arg_edx,undefined4 *param_3,undefined4 *param_4);
void recovered_10011250(int *arg_ecx);
undefined4
recovered_10011360(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5);
void recovered_10011900(undefined1 *param_1,int *param_2,int *param_3,int *param_4);
void * recovered_100120a0(void *output,void *runtime,void *store);
void recovered_10012610(int arg_ecx);
undefined1 *
recovered_10012730(undefined1 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4);
undefined1 * recovered_10012ae0(undefined1 *arg_ecx,void **arg_edx,undefined4 *param_3);
void recovered_10012e10(undefined1 *arg_ecx,int arg_edx);
void recovered_10012ff0(undefined1 *param_1,int *param_2,int *param_3);
void recovered_100134c0(int param_1);
void recovered_10013570(int param_1);
void recovered_10013630(undefined1 *param_1,int *param_2,int *param_3);
void recovered_10013d00(undefined1 *param_1,int *param_2,int *param_3);
void recovered_10013d30(undefined1 *param_1,int *param_2,int *param_3);
void recovered_10014620(int *in_r0,undefined1 *in_r1);
void recovered_10014650(int *param_1,int *param_2,undefined4 *param_3);
void recovered_10014730(undefined1 *in_r0,int *in_r1,int *in_r2,int *in_r3);
void recovered_10014760(undefined1 *in_r0,int *in_r1,int *in_r2);
void recovered_10014790(undefined1 *in_r0,int *in_r1,int *in_r2);
void recovered_100147c0(undefined1 *in_r0,int *in_r1,int *in_r2);
void recovered_100147f0(undefined1 *in_r0,int *in_r1,int *in_r2);
void recovered_10014820(int *param_1,int param_2,uint param_3);
void recovered_10014990(int *param_1);
int * recovered_10014a90(int *param_1,double param_2);
void recovered_100151b0(int *param_1,undefined1 param_2);
int * recovered_10015260(int *param_1,int param_2,uint param_3);
void recovered_10015400(undefined4 *param_1);
undefined1 * recovered_10015440(int param_1);
void recovered_10015470(int *param_1);
void recovered_10015530(void);
void recovered_10015540(void *param_1);
void recovered_10015560(int param_1);
void recovered_100155a0(int param_1);
void recovered_100156d0(int *arg_ecx);
void recovered_10015790(int *arg_ecx);
void recovered_10015850(undefined4 *param_1);
void recovered_10015890(undefined4 *param_1);
undefined1 *
recovered_100158e0(undefined1 *param_1,int param_2,void *param_3,void *param_4,void *param_5,
                  undefined4 param_6);
int * recovered_10015f70(int param_1);
void recovered_100161a0(int *param_1,uint param_2);
void recovered_100163c0(int arg_ecx,undefined4 *arg_edx);
void recovered_10016520(undefined4 *param_1);
void recovered_10016540(undefined4 *arg_ecx,undefined4 *arg_edx,undefined4 param_3);
void recovered_100165b0(undefined4 *param_1);
void recovered_100165e0(undefined4 *param_1);
void recovered_10016620(int arg_ecx,uint arg_edx,undefined1 *param_3);
undefined4 recovered_100167d0(int param_1,undefined4 *param_2);
void recovered_10016a20(int *arg_ecx,uint arg_edx);
void recovered_10016c40(undefined4 arg_ecx,int *arg_edx);
void recovered_10016dc0(undefined4 arg_ecx,int *arg_edx,int *param_3);
void recovered_10016e70(int *arg_ecx);
void recovered_10016f30(int *arg_ecx);
void recovered_10016ff0(int *arg_ecx);
undefined8 recovered_100170b0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10017300(int *arg_ecx,undefined1 *arg_edx);
int recovered_10017410(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10017550(int *param_1,uint param_2);
void recovered_10017740(undefined1 *arg_ecx,undefined4 *arg_edx);
void recovered_100177a0(int arg_ecx,char *arg_edx,char *param_3);
void recovered_10017dd0(undefined4 *arg_ecx);
void recovered_10017eb0(void);
void recovered_10017ec0(void *param_1);
void recovered_10017ee0(int param_1);
void recovered_10018080(char *arg_edx,int *arg_ecx);
int recovered_10018410(int *arg_ecx,char *arg_edx);
uint recovered_10018550(int arg_ecx,char *arg_edx);
void recovered_10018640(int *arg_ecx,uint arg_edx);
int recovered_100188b0(int arg_ecx);
void recovered_10018980(char *arg_ecx,int arg_edx,char *param_3);
int recovered_10018a20(int *param_1,undefined4 *param_2);
int recovered_10018d60(int *param_1,undefined4 *param_2,undefined1 *param_3);
void recovered_10018ea0(int *param_1,uint param_2);
void recovered_10019090(int *param_1,uint param_2);
void recovered_100192f0(int param_1,int *param_2);
void recovered_100193e0(int param_1,int *param_2);
void recovered_100194d0(int *arg_ecx);
void recovered_10019520(int *arg_ecx);
void recovered_10019630(undefined4 *arg_ecx);
void recovered_10019700(int *arg_ecx);
void recovered_10019760(int *arg_ecx,undefined1 *arg_edx);
int * recovered_10019890(int *arg_ecx,int *arg_edx,uint param_3,uint param_4);
void recovered_10019aa0(undefined4 *arg_ecx,uint arg_edx,uint param_3,undefined4 *param_4);
int * recovered_10019dc0(int *param_1,undefined4 *param_2,undefined1 param_3);
int * recovered_10019ec0(int *param_1,uint param_2,uint param_3);
void recovered_1001a140(int *param_1,uint param_2,undefined1 param_3);
uint recovered_1001a200(undefined4 *param_1,int param_2);
void recovered_1001a280(int arg_ecx);
void recovered_1001a480(int arg_ecx,int *arg_edx);
int * recovered_1001b610(int *arg_ecx,int *arg_edx);
void recovered_1001b740(int *param_1);
void recovered_1001b7c0(int *arg_ecx,int *arg_edx);
void recovered_1001bf90(int *arg_ecx);
void recovered_1001c050(int *arg_ecx);
void recovered_1001c110(int arg_ecx,int arg_edx);
void recovered_1001c220(int *arg_ecx);
undefined4 recovered_1001c2e0(int *arg_ecx);
void recovered_1001c540(int *arg_ecx);
void recovered_1001c600(int *arg_ecx);
void recovered_1001c6c0(int *arg_ecx);
void recovered_1001c780(int *arg_ecx);
void recovered_1001c840(int *arg_ecx);
undefined4 recovered_1001c900(int arg_ecx,undefined4 *arg_edx,int *param_3,undefined4 *param_4);
void recovered_1001ca70(int *arg_ecx);
void recovered_1001cb30(int *arg_ecx);
void recovered_1001cbf0(int *arg_ecx);
void recovered_1001ccb0(int *arg_ecx);
void recovered_1001cd70(int *arg_ecx);
void recovered_1001ce30(int *arg_ecx);
void recovered_1001cef0(int *arg_ecx);
int recovered_1001cfb0(int *param_1,undefined4 *param_2);
int recovered_1001d210(int *param_1,undefined4 *param_2,undefined4 *param_3);
char recovered_1001d350(int arg_ecx);
void recovered_1001d490(int *arg_ecx);
undefined4 * recovered_1001d550(undefined4 *arg_ecx,int *arg_edx);
undefined4 * recovered_1001fdc0(undefined4 *arg_ecx,int *arg_edx,int param_3,char param_4);
int * recovered_10020d00(int *arg_ecx,int *arg_edx);
void recovered_10020f40(int *arg_ecx);
undefined4 * recovered_10021000(undefined4 *arg_ecx,int *arg_edx,char *param_3,int param_4);
void recovered_100212e0(int *arg_ecx,undefined4 *arg_edx);
void recovered_10021450(int *arg_ecx);
void recovered_100215a0(undefined4 *param_1);
void recovered_100216f0(undefined4 *param_1);
void recovered_10021720(void);
void recovered_10021730(void *param_1);
void recovered_10021750(int param_1);
int * recovered_10021780(int *arg_ecx,int *arg_edx);
undefined4 *
recovered_100219c0(undefined4 *arg_ecx,int *arg_edx,undefined1 *param_3,undefined4 *param_4,
                  undefined4 *param_5);
int * recovered_10021b30(int *arg_ecx,int *arg_edx);
int * recovered_10021ec0(int *arg_ecx,int *arg_edx);
int * recovered_10022460(int *arg_ecx,int *arg_edx);
undefined4 * recovered_100227f0(undefined4 *arg_ecx,int *arg_edx);
void * recovered_10022a80(void *output,void *parser);
void recovered_100246d0(undefined4 *param_1);
void recovered_100247a0(undefined4 *param_1);
void recovered_10024870(void);
void recovered_10024880(void *param_1);
void recovered_100248a0(int param_1);
undefined4 * recovered_100248d0(undefined4 *arg_ecx,int *arg_edx,undefined4 *param_3,int *param_4);
undefined4 * recovered_10024b10(undefined4 *arg_ecx,int *arg_edx);
int * recovered_10024de0(int *arg_ecx,int *arg_edx);
void recovered_10024f10(int *arg_ecx);
undefined4 * recovered_10025020(undefined4 *arg_ecx,undefined1 *arg_edx,undefined4 *param_3);
longdouble recovered_10025340(byte *param_1,int param_2,int *param_3);
undefined4 * recovered_10025620(undefined4 *arg_ecx,undefined4 *arg_edx,int *param_3);
undefined4 * recovered_10025800(undefined4 *arg_ecx,int *arg_edx,undefined4 param_3);
void recovered_10025cd0(int arg_ecx,int arg_edx,undefined4 *param_3);
void recovered_10025cf0(undefined4 *param_1);
void recovered_10025d90(undefined4 *param_1);
void recovered_10025e40(void);
void recovered_10025e50(void *param_1);
void recovered_10025e70(int param_1);
undefined8 recovered_10025ea0(char *param_1,char *param_2,ulonglong *param_3,uint param_4);
void recovered_10026080(undefined4 *param_1);
void recovered_100260b0(undefined4 *param_1);
void recovered_100260f0(void);
void recovered_10026100(void *param_1);
void recovered_10026120(int param_1);
void recovered_10026150(int arg_ecx);
void recovered_10026270(undefined4 *param_1);
void recovered_100262d0(undefined4 *param_1);
void recovered_10026340(void);
void recovered_10026350(void *param_1);
void recovered_10026370(int param_1);
void recovered_100263a0(undefined4 *param_1);
void recovered_100264f0(undefined4 *param_1);
void recovered_10026520(void);
void recovered_10026530(void *param_1);
void recovered_10026550(int param_1);
int recovered_10026580(int *param_1,undefined4 *param_2);
void recovered_100266c0(undefined4 *param_1);
void recovered_100267c0(undefined4 *param_1);
void recovered_100268c0(void);
void recovered_100268d0(void *param_1);
void recovered_100268f0(int param_1);
void recovered_10026920(undefined4 *param_1);
void recovered_10026a60(undefined4 *param_1);
void recovered_10026a90(void);
void recovered_10026aa0(void *param_1);
void recovered_10026ac0(int param_1);
void recovered_10026af0(undefined4 *param_1);
void recovered_10026ca0(undefined4 *param_1);
void recovered_10026cd0(void);
void recovered_10026ce0(void *param_1);
void recovered_10026d00(int param_1);
undefined4 * recovered_10026d30(undefined4 *arg_ecx,int *arg_edx);
void recovered_10027010(undefined4 *param_1);
void recovered_10027120(undefined4 *param_1);
void recovered_10027240(void);
void recovered_10027250(void *param_1);
void recovered_10027270(int param_1);
void recovered_100272a0(undefined4 *param_1);
void recovered_100273f0(undefined4 *param_1);
void recovered_10027420(void);
void recovered_10027430(void *param_1);
void recovered_10027450(int param_1);
void recovered_10027480(undefined4 *param_1);
void recovered_10027670(undefined4 *param_1);
void recovered_100276a0(void);
void recovered_100276b0(void *param_1);
void recovered_100276d0(int param_1);
void recovered_10027700(undefined4 *param_1);
void recovered_100278e0(undefined4 *param_1);
void recovered_10027910(void);
void recovered_10027920(void *param_1);
void recovered_10027940(int param_1);
void recovered_10027970(undefined4 *param_1);
void recovered_10027a80(undefined4 *param_1);
void recovered_10027ba0(void);
void recovered_10027bb0(void *param_1);
void recovered_10027bd0(int param_1);
void recovered_10027c00(void);
void recovered_10027c10(void *param_1);
void recovered_10027c30(void);
void recovered_10027c40(void *param_1);
void recovered_10027c60(int param_1);
undefined1 * recovered_10027c90(undefined1 *arg_ecx,undefined1 *arg_edx);
void recovered_10027e50(int arg_ecx);
void * recovered_10027f70(int *param_1,int param_2,undefined4 *param_3);
void recovered_10028100(undefined4 *param_1);
void recovered_100281d0(undefined4 *param_1);
void recovered_100282b0(void);
void recovered_100282c0(void *param_1);
void recovered_100282e0(int param_1);
void recovered_10028310(int *arg_ecx,undefined1 *arg_edx);
void recovered_10028500(undefined4 *param_1);
void recovered_10028650(undefined4 *param_1);
void recovered_10028680(void);
void recovered_10028690(void *param_1);
void recovered_100286b0(int param_1);
undefined1 * recovered_100286e0(int *arg_edx,undefined1 *arg_ecx,int *param_3);
void recovered_10028c60(undefined4 *param_1);
void recovered_10028d30(undefined4 *param_1);
void recovered_10028e00(void);
void recovered_10028e10(void *param_1);
void recovered_10028e30(int param_1);
void recovered_10028e60(int arg_ecx,int *arg_edx);
void recovered_10029110(int arg_ecx,int *arg_edx);
int recovered_100293b0(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_100294d0(int param_1);
void recovered_10029590(undefined4 *param_1);
void recovered_10029640(void *param_1);
void recovered_10029700(undefined1 *arg_ecx,undefined1 *arg_edx);
void recovered_100298e0(undefined4 *arg_ecx,uint arg_edx);
void recovered_10029be0(int arg_ecx);
void recovered_10029d50(int arg_ecx);
void recovered_10029e40(int *arg_ecx);
void recovered_10029e80(void);
void recovered_10029e90(void *param_1);
void recovered_10029eb0(int param_1);
void recovered_10029ef0(int *arg_ecx);
void recovered_1002a060(int arg_ecx,int arg_edx,int *param_3);
undefined1 * recovered_1002dac0(undefined1 *arg_ecx,int arg_edx,int *param_3,int *param_4);
void recovered_1002fb40(int arg_ecx,char *arg_edx,int *param_3,int *param_4,byte param_5);
undefined1 * recovered_100300c0(int *arg_edx,undefined1 *arg_ecx,int *param_3,int *param_4);
undefined1 * recovered_100304a0(undefined1 *arg_ecx,int *arg_edx,int *param_3,int *param_4);
void recovered_100307f0(int arg_ecx);
double recovered_10030a80(char *arg_ecx);
undefined4 recovered_10030ba0(int arg_ecx,undefined1 *arg_edx);
void recovered_10031460(int param_1);
void recovered_10031580(undefined1 *arg_ecx,char *arg_edx);
undefined1 * recovered_100317b0(undefined1 *arg_ecx,char *arg_edx,char *param_3);
undefined1 * recovered_10031a90(undefined1 *arg_ecx,char *arg_edx,char *param_3);
undefined1 * recovered_10031d70(undefined1 *arg_ecx,char *arg_edx,char *param_3);
undefined1 * recovered_10032120(undefined1 *arg_ecx,char *arg_edx,char *param_3);
int * recovered_10032430(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10032550(int *arg_ecx,undefined1 *arg_edx);
bool recovered_100332b0(char *arg_ecx,char *arg_edx);
undefined1 * recovered_100334a0(undefined1 *arg_ecx,char *arg_edx,char *param_3,byte param_4);
undefined4 recovered_10033920(undefined1 *arg_ecx,undefined1 *arg_edx);
char * recovered_10033b50(char *arg_ecx,int arg_edx,char *param_3,char *param_4);
undefined4 * recovered_10034860(int *arg_edx,undefined4 *arg_ecx,int param_3,int *param_4);
void recovered_10035240(int *arg_ecx,undefined1 *arg_edx);
undefined1 * recovered_100353d0(undefined1 *arg_ecx,int *arg_edx,int *param_3);
void recovered_100355b0(void);
void recovered_100355c0(void *param_1);
undefined1 *
recovered_100355e0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5,int param_6);
void recovered_100361e0(int param_1);
void recovered_10036220(undefined1 *param_1,uint param_2,uint param_3,uint param_4);
void recovered_10036610(int *arg_ecx,int arg_edx,char *param_3,int param_4,int param_5,char param_6);
longlong recovered_10036810(int arg_ecx,uint arg_edx,int param_3,uint param_4);
void recovered_10036950(int *param_1);
longlong recovered_10036a10(char *arg_ecx);
void recovered_10036b60(void);
void recovered_10036b70(void *param_1);
undefined1 *
recovered_10036b90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  int *param_5,int param_6);
void recovered_100371c0(int param_1);
void recovered_10037200(undefined1 *arg_ecx,undefined1 *param_2,int param_3);
void recovered_100373a0(int arg_ecx);
void recovered_10037460(int arg_ecx,undefined1 *arg_edx);
void recovered_100375a0(int arg_ecx);
void recovered_100376c0(void);
void recovered_100376d0(void *param_1);
undefined1 *
recovered_100376f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5,int param_6);
void recovered_10037bf0(void);
void recovered_10037c20(void);
void recovered_10037c30(void *param_1);
undefined1 *
recovered_10037c50(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5,int param_6);
void recovered_10038650(int param_1);
void recovered_10038690(void);
void recovered_100386a0(void *param_1);
undefined1 *
recovered_100386c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5,int param_6);
void recovered_100388c0(void);
void recovered_100388f0(void);
void recovered_10038900(void *param_1);
undefined1 *
recovered_10038920(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5,int param_6);
void recovered_10038d50(void);
void recovered_10038d80(int arg_ecx,undefined1 *arg_edx);
undefined1 *
recovered_10038ed0(undefined1 *arg_ecx,int *arg_edx,undefined4 *param_3,int *param_4,char param_5);
void recovered_1003bd60(void *arg_edx,undefined4 *arg_ecx,char *param_3,int param_4,uint param_5,
                       int param_6);
void recovered_1003bf10(int arg_ecx);
void * recovered_1003c0b0(void *output,void *runtime,void *handle,void *values,uint count,uint line);
undefined4 * recovered_1003cba0(undefined4 *arg_ecx,int *arg_edx,int *param_3);
void recovered_1003cdf0(int arg_ecx,int arg_edx);
undefined1 * recovered_1003cf60(undefined1 *arg_ecx,undefined1 *arg_edx);
int * recovered_1003d210(int *arg_ecx,int *arg_edx);
void recovered_1003d3b0(void *param_1);
undefined4 recovered_1003d470(int *arg_ecx,int *arg_edx);
int * recovered_1003d5b0(int *arg_ecx,int *arg_edx,int *param_3);
void recovered_1003d710(undefined4 param_1,int *param_2,int *param_3);
void recovered_1003d7c0(void);
void recovered_1003d7d0(void *param_1);
void recovered_1003d7f0(int param_1);
void recovered_1003d900(int *param_1,int *param_2);
void recovered_1003db60(int *param_1,int *param_2);
void recovered_1003dd40(void);
void recovered_1003dd50(void *param_1);
void recovered_1003dd70(int param_1);
void recovered_1003dec0(undefined4 *param_1,undefined4 param_2);
void recovered_1003e0f0(int param_1);
void recovered_10042fd0(int arg_ecx,int *arg_edx,int *param_3);
void recovered_10043230(int arg_ecx,int *arg_edx,int *param_3);
void recovered_10043580(void);
void recovered_10043590(void *param_1);
undefined1 * recovered_100435b0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_100435e0(int param_1);
undefined1 *
recovered_10043620(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10043820(void);
void recovered_10043830(void *param_1);
undefined1 * recovered_10043850(undefined1 *param_1);
void recovered_100439b0(int param_1);
void recovered_100439f0(void);
void recovered_10043a00(void *param_1);
undefined1 * recovered_10043a20(undefined1 *param_1);
void recovered_10043b90(void);
void recovered_10043bc0(void);
void recovered_10043bd0(void *param_1);
undefined1 *
recovered_10043bf0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100440d0(int param_1);
void recovered_10044110(void);
void recovered_10044120(void *param_1);
undefined1 * recovered_10044140(undefined1 *param_1);
void recovered_100442a0(int param_1);
void recovered_100442e0(void);
void recovered_100442f0(void *param_1);
undefined1 *
recovered_10044310(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100445a0(int param_1);
void recovered_100445e0(void);
void recovered_100445f0(void *param_1);
void recovered_10044610(void);
void recovered_10044720(int param_1);
void recovered_10044760(void);
void recovered_10044770(void *param_1);
undefined1 *
recovered_10044790(undefined1 *param_1,int param_2,undefined4 param_3,char *param_4,uint param_5,
                  int param_6);
void recovered_10044fd0(int param_1);
void recovered_10045010(void);
void recovered_10045020(void *param_1);
undefined1 *
recovered_10045040(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100452f0(int param_1);
void recovered_10045330(void);
void recovered_10045340(void *param_1);
void recovered_10045360(int param_1);
void recovered_10045530(void);
void recovered_10045540(void *param_1);
undefined1 *
recovered_10045560(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10045810(int param_1);
void recovered_10045850(void);
void recovered_10045860(void *param_1);
undefined1 *
recovered_10045880(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10045fa0(int param_1);
undefined4 * recovered_10045fe0(undefined4 *arg_ecx,int arg_edx);
void recovered_100467a0(int *arg_ecx);
void recovered_100467f0(void);
void recovered_10046800(void *param_1);
undefined1 *
recovered_10046820(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10046be0(int param_1);
void recovered_10046c20(void);
void recovered_10046c30(void *param_1);
undefined1 *
recovered_10046c50(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10046ee0(int param_1);
void recovered_10046f20(int *arg_ecx,int arg_edx,int param_3,uint param_4,uint param_5);
void recovered_10047070(void);
void recovered_10047080(void *param_1);
undefined1 *
recovered_100470a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  uint param_5);
void recovered_10047380(int param_1);
void recovered_100473c0(void);
void recovered_100473d0(void *param_1);
undefined1 *
recovered_100473f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100475d0(int param_1);
void recovered_10047610(void);
void recovered_10047620(void *param_1);
undefined1 *
recovered_10047640(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100479c0(int param_1);
void recovered_10047a00(void);
void recovered_10047a10(void *param_1);
undefined1 *
recovered_10047a30(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10047db0(int param_1);
void recovered_10047df0(void);
void recovered_10047e00(void *param_1);
undefined1 *
recovered_10047e20(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100481d0(int param_1);
void recovered_10048210(void);
void recovered_10048220(void *param_1);
undefined1 *
recovered_10048240(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10048a50(int param_1);
undefined4
recovered_10048a90(undefined4 *arg_ecx,undefined4 *arg_edx,int *param_3,char param_4,
                  undefined4 *param_5);
void recovered_10049080(undefined1 *arg_ecx,undefined4 *arg_edx);
void recovered_100493f0(int arg_ecx);
int * recovered_10049450(int *arg_ecx,undefined4 *arg_edx);
void recovered_1004a140(int *arg_ecx,undefined4 arg_edx);
char recovered_1004a490(uint param_1,uint param_2,uint *param_3,undefined4 *param_4);
char recovered_1004a670(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                       ,uint param_7,uint *param_8);
undefined4
recovered_1004a920(int param_1,uint param_2,uint param_3,byte param_4,uint param_5,uint *param_6);
int recovered_1004abe0(int *param_1,undefined4 *param_2);
void recovered_1004acf0(void);
void recovered_1004ad00(void *param_1);
undefined1 *
recovered_1004ad20(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004b540(int param_1);
void recovered_1004b580(void);
void recovered_1004b590(void *param_1);
undefined1 *
recovered_1004b5b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004c980(int param_1);
void recovered_1004c9c0(int *arg_ecx);
void recovered_1004ca70(int *arg_ecx,uint arg_edx);
void recovered_1004cdb0(void);
void recovered_1004cdc0(void *param_1);
undefined1 *
recovered_1004cde0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004d760(int param_1);
void recovered_1004d7a0(void);
void recovered_1004d7b0(void *param_1);
undefined1 *
recovered_1004d7d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004e140(int param_1);
int * recovered_1004e180(int *param_1,uint param_2,uint param_3);
void recovered_1004e3a0(void);
void recovered_1004e3b0(void *param_1);
undefined4 *
recovered_1004e3d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004e7f0(int param_1);
void recovered_1004e830(void);
void recovered_1004e840(void *param_1);
undefined1 *
recovered_1004e860(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1004eba0(int param_1);
void recovered_1004ebe0(void);
void recovered_1004ebf0(void *param_1);
undefined1 *
recovered_1004ec10(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004f0c0(int param_1);
void recovered_1004f100(void);
void recovered_1004f110(void *param_1);
undefined1 *
recovered_1004f130(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004f390(void);
void recovered_1004f3c0(void);
void recovered_1004f3d0(void *param_1);
undefined1 *
recovered_1004f3f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004f710(void);
void recovered_1004f740(void);
void recovered_1004f750(void *param_1);
undefined1 *
recovered_1004f770(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004fa30(void);
void recovered_1004fa60(void);
void recovered_1004fa70(void *param_1);
undefined1 *
recovered_1004fa90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1004fd40(void);
void recovered_1004fd70(void);
void recovered_1004fd80(void *param_1);
undefined1 *
recovered_1004fda0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100500c0(void);
void recovered_100500f0(void);
void recovered_10050100(void *param_1);
undefined1 *
recovered_10050120(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100504a0(void);
void recovered_100504d0(void);
void recovered_100504e0(void *param_1);
undefined1 *
recovered_10050500(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100508c0(void);
void recovered_100508f0(void);
void recovered_10050900(void *param_1);
undefined1 *
recovered_10050920(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  undefined4 *param_5);
void recovered_100518e0(void);
void recovered_10051910(void);
void recovered_10051920(void *param_1);
undefined1 *
recovered_10051940(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_100520b0(void);
undefined8 recovered_100520e0(char *param_1,char *param_2,int *param_3,uint param_4);
void recovered_100522c0(void);
void recovered_100522d0(void *param_1);
undefined1 *
recovered_100522f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_10052ba0(int param_1);
void recovered_10052be0(void);
void recovered_10052bf0(void *param_1);
undefined4 *
recovered_10052c10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  char *param_5);
void recovered_10053230(int param_1);
void recovered_10053270(void);
void recovered_10053280(void *param_1);
undefined1 *
recovered_100532a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  undefined1 *param_5);
void recovered_10053e00(int param_1);
void recovered_10053e40(void);
void recovered_10053e50(void *param_1);
undefined1 *
recovered_10053e70(undefined1 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                  uint param_5);
void recovered_10054630(int param_1);
void recovered_10054670(void);
void recovered_10054680(void *param_1);
undefined1 *
recovered_100546a0(undefined1 *param_1,int param_2,undefined4 param_3,char *param_4,uint param_5,
                  uint param_6);
void recovered_10056040(int param_1);
void recovered_10056080(void);
void recovered_10056090(void *param_1);
undefined1 *
recovered_100560b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  int param_5);
void recovered_100564d0(int param_1);
void recovered_10056510(void);
void recovered_10056520(void *param_1);
undefined1 *
recovered_10056540(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5);
void recovered_10056a40(int param_1);
void recovered_10056a80(void);
void recovered_10056a90(void *param_1);
undefined1 *
recovered_10056ab0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5);
void recovered_10057000(void);
void recovered_10057030(void);
void recovered_10057040(void *param_1);
undefined1 *
recovered_10057060(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5);
void recovered_100574f0(void);
void recovered_10057520(void);
void recovered_10057530(void *param_1);
undefined1 *
recovered_10057550(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5);
void recovered_10057c40(void);
void recovered_10057c70(void);
void recovered_10057c80(void *param_1);
undefined1 *
recovered_10057ca0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  uint param_5);
void recovered_10057f40(void);
void recovered_10057f70(void);
void recovered_10057f80(void *param_1);
undefined1 *
recovered_10057fa0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  uint param_5);
void recovered_100584d0(void);
void recovered_10058500(void);
void recovered_10058510(void *param_1);
undefined1 *
recovered_10058530(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_100587a0(int param_1);
double recovered_100587e0(int arg_ecx,uint arg_edx,int param_3,uint param_4);
void recovered_10058930(void);
void recovered_10058940(void *param_1);
undefined1 *
recovered_10058960(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10058be0(int param_1);
void recovered_10058c20(void);
void recovered_10058c30(void *param_1);
undefined1 *
recovered_10058c50(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10058e50(int param_1);
void recovered_10058e90(void);
void recovered_10058ea0(void *param_1);
undefined1 *
recovered_10058ec0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_100590c0(int param_1);
void recovered_10059100(void);
void recovered_10059110(void *param_1);
undefined1 *
recovered_10059130(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10059330(int param_1);
void recovered_10059370(void);
void recovered_10059380(void *param_1);
undefined1 *
recovered_100593a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_100595a0(int param_1);
void recovered_100595e0(void);
void recovered_100595f0(void *param_1);
undefined1 *
recovered_10059610(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10059810(int param_1);
void recovered_10059850(void);
void recovered_10059860(void *param_1);
undefined1 *
recovered_10059880(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10059a80(int param_1);
void recovered_10059ac0(void);
void recovered_10059ad0(void *param_1);
undefined1 *
recovered_10059af0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10059cf0(int param_1);
void recovered_10059d30(void);
void recovered_10059d40(void *param_1);
undefined1 *
recovered_10059d60(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_10059f60(void);
void recovered_10059f90(void);
void recovered_10059fa0(void *param_1);
undefined1 *
recovered_10059fc0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1005a1f0(void);
void recovered_1005a220(void);
void recovered_1005a230(void *param_1);
undefined1 *
recovered_1005a250(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1005a450(void);
void recovered_1005a480(void);
void recovered_1005a490(void *param_1);
undefined1 *
recovered_1005a4b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1005a7c0(void);
void recovered_1005a7f0(void);
void recovered_1005a800(void *param_1);
undefined1 *
recovered_1005a820(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1005ac20(int param_1);
void recovered_1005ac60(void);
void recovered_1005ac70(void *param_1);
undefined4 *
recovered_1005ac90(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,uint param_5);
void recovered_1005ad90(int param_1);
void recovered_1005add0(void);
void recovered_1005ade0(void *param_1);
undefined1 *
recovered_1005ae00(undefined1 *param_1,int param_2,undefined4 param_3,int param_4,uint param_5);
void recovered_1005b170(int param_1);
undefined8 recovered_1005b1b0(int param_1);
void recovered_1005b340(void);
void recovered_1005b350(void *param_1);
undefined1 *
recovered_1005b370(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1005bd70(int param_1);
void recovered_1005bdb0(int *param_1,char *param_2,uint param_3);
void recovered_1005bf80(int param_1);
void recovered_1005c040(void *param_1);
void recovered_1005c100(int param_1);
void recovered_1005c1c0(int param_1);
void recovered_1005c280(void);
void recovered_1005c290(void *param_1);
void recovered_1005c2b0(int param_1);
void recovered_1005c2e0(void);
void recovered_1005c2f0(void *param_1);
undefined1 * recovered_1005c310(undefined1 *param_1);
void recovered_1005c4d0(int param_1);
void recovered_1005c510(void);
void recovered_1005c520(void *param_1);
void recovered_1005c540(int param_1);
void recovered_1005c630(void);
void recovered_1005c640(void *param_1);
undefined1 * recovered_1005c660(undefined1 *param_1);
void recovered_1005c780(void);
void recovered_1005c7b0(void);
void recovered_1005c7c0(void *param_1);
undefined1 * recovered_1005c7e0(undefined1 *param_1);
void recovered_1005c900(void);
void recovered_1005c930(void);
void recovered_1005c940(void *param_1);
undefined1 *
recovered_1005c960(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  uint param_5);
void recovered_1005cb00(void);
void recovered_1005cb30(void);
void recovered_1005cb40(void *param_1);
undefined1 *
recovered_1005cb60(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                  uint param_5);
void recovered_1005cd60(int param_1);
void recovered_1005cda0(void);
void recovered_1005cdb0(void *param_1);
void recovered_1005cdd0(void);
void recovered_1005cef0(int param_1);
void recovered_1005cf30(int param_1);

/* Original analysis identifiers for manual recovery units. */
