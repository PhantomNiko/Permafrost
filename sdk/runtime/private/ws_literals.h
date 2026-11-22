/* WinterScript scalar records and integer literals recovered from r147.
 * Pooka's Free Software License. */
#ifndef PF_WS_LITERALS_H
#define PF_WS_LITERALS_H
#include <stdint.h>
#include <stddef.h>
static inline int pf_ws_space(unsigned char c) {
    return c == ' ' || (c >= '\t' && c <= '\r');
}
static inline char *pf_ws_trim_literal(const char *text,char buffer[256]) {
    size_t length=0;
    while(length<255 && text[length]){buffer[length]=text[length];++length;}
    buffer[length]=0;
    char *p=buffer;while(pf_ws_space((unsigned char)*p))++p;
    while(length && pf_ws_space((unsigned char)buffer[length-1]))buffer[--length]=0;
    return p;
}
static inline int pf_ws_integer_literal(const char *text,int32_t *out) {
    if(!text || !out)return 0;
    char buffer[256];char *p=pf_ws_trim_literal(text,buffer);
    int negative=0;
    if(*p=='+' || *p=='-'){negative=*p=='-';++p;}
    unsigned base=10;
    if(p[0]=='0' && (p[1]=='x' || p[1]=='X')){base=16;p+=2;}
    else if(*p=='$'){base=16;++p;}
    if(!*p)return 0;
    uint64_t value=0;
    do {
        unsigned char c=(unsigned char)*p++;unsigned digit;
        if(c>='0' && c<='9')digit=c-'0';
        else if(c>='a' && c<='f')digit=c-'a'+10;
        else if(c>='A' && c<='F')digit=c-'A'+10;
        else return 0;
        if(digit>=base)return 0;
        value=value*base+digit;if(value>2147483648ULL)return 0;
    }while(*p);
    int64_t signed_value=negative?-(int64_t)value:(int64_t)value;
    if(signed_value<INT32_MIN || signed_value>INT32_MAX)return 0;
    *out=(int32_t)signed_value;return 1;
}
static inline void pf_ws_scalar_record(void *out,uint32_t tag,int32_t integer,float number) {
    unsigned char *bytes=(unsigned char *)out;
    for(size_t i=0;i<(sizeof(void *)==8?64:36);++i)bytes[i]=0;
    uint32_t *words=(uint32_t *)out;union{float f;uint32_t u;}bits={.f=number};
    words[0]=tag;words[1]=(uint32_t)integer;words[2]=bits.u;
}
#endif
