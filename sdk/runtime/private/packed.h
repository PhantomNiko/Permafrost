/* Packed register views used by recovered SIMD code.
 * Pooka's Free Software License. */
#pragma once
typedef unsigned _BitInt(72) pf_u72;
typedef unsigned _BitInt(80) pf_u80;
typedef unsigned _BitInt(88) pf_u88;
typedef unsigned _BitInt(96) pf_u96;
typedef unsigned _BitInt(104) pf_u104;
typedef unsigned _BitInt(112) pf_u112;
typedef unsigned _BitInt(120) pf_u120;
typedef pf_u80 unkbyte10;
typedef pf_u72 unkuint9;
typedef pf_u80 unkuint10;
typedef unsigned _BitInt(40) pf_u40;
typedef signed _BitInt(40) pf_i40;
typedef pf_i40 int5;
#define ZEXT716(value) ((uint128)((uint64_t)(value)&0xffffffffffffffULL))
#define PF_PACKED_VIEW(n,bits) struct pf_packed_##n {uint128 payload:bits;} __attribute__((packed))
PF_PACKED_VIEW(9,72);
PF_PACKED_VIEW(10,80);
PF_PACKED_VIEW(11,88);
PF_PACKED_VIEW(13,104);
PF_PACKED_VIEW(14,112);
PF_PACKED_VIEW(15,120);
#undef PF_PACKED_VIEW
#define PF_PART9(v,o) (((struct pf_packed_9 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART10(v,o) (((struct pf_packed_10 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART11(v,o) (((struct pf_packed_11 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART13(v,o) (((struct pf_packed_13 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART14(v,o) (((struct pf_packed_14 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART15(v,o) (((struct pf_packed_15 *)((uint8_t *)&(v)+(o)))->payload)
#define PF_PART16(v,o) (*(uint128 *)((uint8_t *)&(v)+(o)))
#define ZEXT116(v) ((uint128)(uint8_t)(v))
#define ZEXT216(v) ((uint128)(uint16_t)(v))
#define ZEXT416(v) ((uint128)(uint32_t)(v))
#define ZEXT411(v) ((pf_u88)(uint32_t)(v))
#define ZEXT413(v) ((pf_u104)(uint32_t)(v))
#define ZEXT415(v) ((pf_u120)(uint32_t)(v))
#define ZEXT812(v) ((pf_u96)(uint64_t)(v))
#define SUB1510(v,o) ((pf_u80)((pf_u120)(v)>>((o)*8)))
#define SUB1512(v,o) ((pf_u96)((pf_u120)(v)>>((o)*8)))
#define SUB158(v,o) ((uint64_t)((pf_u120)(v)>>((o)*8)))
#define SUB161(v,o) ((uint8_t)((uint128)(v)>>((o)*8)))
#define SUB162(v,o) ((uint16_t)((uint128)(v)>>((o)*8)))
#define SUB168(v,o) ((uint64_t)((uint128)(v)>>((o)*8)))
#define SUB1610(v,o) ((pf_u80)((uint128)(v)>>((o)*8)))
#define SUB1611(v,o) ((pf_u88)((uint128)(v)>>((o)*8)))
#define SUB1612(v,o) ((pf_u96)((uint128)(v)>>((o)*8)))
#define SUB1613(v,o) ((pf_u104)((uint128)(v)>>((o)*8)))
#define SUB1615(v,o) ((pf_u120)((uint128)(v)>>((o)*8)))
#define CONCAT18(a,b) (((pf_u72)(uint8_t)(a)<<64)|(uint64_t)(b))
#define CONCAT19(a,b) (((pf_u80)(uint8_t)(a)<<72)|(pf_u72)(b))
#define CONCAT81(a,b) (((pf_u72)(uint64_t)(a)<<8)|(uint8_t)(b))
#define CONCAT91(a,b) (((pf_u80)(pf_u72)(a)<<8)|(uint8_t)(b))
#define CONCAT23(a,b) (((uint64_t)(uint16_t)(a)<<24)|((uint32_t)(b)&0xffffffU))
#define CONCAT52(a,b) ((((uint64_t)(a)&0xffffffffffULL)<<16)|(uint16_t)(b))
#define CONCAT41(a,b) (((uint64_t)(uint32_t)(a)<<8)|(uint8_t)(b))
#define CONCAT51(a,b) ((((uint64_t)(a)&0xffffffffffULL)<<8)|(uint8_t)(b))
#define CONCAT61(a,b) ((((uint64_t)(a)&0xffffffffffffULL)<<8)|(uint8_t)(b))
#define CONCAT72(a,b) (((pf_u72)((uint64_t)(a)&0xffffffffffffffULL)<<16)|(uint16_t)(b))
static inline bool SBORROW2(int16_t a,int16_t b) {
    int32_t result=(int32_t)a-b;return result < -32768 || result > 32767;
}
static inline uint128 pshuflw(uint128 ignored,uint128 value,unsigned control) {
    (void)ignored;
    uint128 result=value&((uint128)0xffffffffffffffffULL<<64);
    for(unsigned lane=0;lane<4;lane++)
        result|=(uint128)(uint16_t)(value>>(((control>>(2*lane))&3)*16))<<(lane*16);
    return result;
}
static inline uint128 pshufhw(uint128 ignored,uint128 value,unsigned control) {
    (void)ignored;
    uint128 result=(uint64_t)value;
    for(unsigned lane=0;lane<4;lane++)
        result|=(uint128)(uint16_t)(value>>((4+((control>>(2*lane))&3))*16))<<((lane+4)*16);
    return result;
}
static inline uint128 vrev(uint128 value,unsigned lane_bytes) {
    uint128 result=0;
    for(unsigned byte=0;byte<16;byte++) {
        unsigned source=(byte&~7U)+(8-lane_bytes-(byte&7U)/lane_bytes*lane_bytes)+byte%lane_bytes;
        result|=(uint128)(uint8_t)(value>>(source*8))<<(byte*8);
    }
    return result;
}
static inline uint128 psadbw(uint128 a,uint128 b) {
    uint128 result=0;
    for(unsigned half=0;half<2;half++) {
        unsigned sum=0;
        for(unsigned lane=0;lane<8;lane++) {
            int delta=(uint8_t)(a>>((half*8+lane)*8))-(int)(uint8_t)(b>>((half*8+lane)*8));
            sum+=delta<0?-delta:delta;
        }
        result|=(uint128)sum<<(half*64);
    }
    return result;
}
static inline uint128 packssdw(uint128 a,uint128 b) {
    uint128 result=0;
    for(unsigned lane=0;lane<8;lane++) {
        int32_t value=(int32_t)((lane<4?a:b)>>((lane&3)*32));
        int16_t narrow=value < -32768?-32768:value > 32767?32767:value;
        result|=(uint128)(uint16_t)narrow<<(lane*16);
    }
    return result;
}
static inline uint128 packsswb(uint128 a,uint128 b) {
    uint128 result=0;
    for(unsigned lane=0;lane<16;lane++) {
        int16_t value=(int16_t)((lane<8?a:b)>>((lane&7)*16));
        int8_t narrow=value < -128?-128:value > 127?127:value;
        result|=(uint128)(uint8_t)narrow<<(lane*8);
    }
    return result;
}
