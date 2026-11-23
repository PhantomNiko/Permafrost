/* WinterScript literal conversion recovered from native implementations.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>

static inline int pf_literal_space(unsigned char c) {
    return (unsigned)(c-9)<5 || c==32;
}

static inline size_t pf_literal_prepare(const char *text,char buffer[256]) {
    size_t length=0,first=0;
    while(length<255 && text[length]) {
        buffer[length]=text[length];
        length++;
    }
    buffer[length]=0;
    while(first<length && pf_literal_space((unsigned char)buffer[first]))first++;
    while(length>first && pf_literal_space((unsigned char)buffer[length-1]))length--;
    length-=first;
    for(size_t i=0;i<length;i++)buffer[i]=buffer[first+i];
    buffer[length]=0;
    return length;
}

static inline unsigned char pf_literal_integer(const char *text,int32_t *out) {
    char buffer[256];
    if(!text || !out || !pf_literal_prepare(text,buffer))return 0;
    const unsigned char *p=(const unsigned char *)buffer;
    int negative=0;
    if(*p=='+' || *p=='-')negative=*p++=='-';
    unsigned base=10;
    if(p[0]=='0' && (p[1]=='x' || p[1]=='X')){base=16;p+=2;}
    else if(*p=='$'){base=16;p++;}
    if(!*p)return 0;
    uint64_t value=0;
    do {
        unsigned digit=(unsigned)(*p-'0');
        if(digit>=10) {
            unsigned letter=(unsigned)((*p|32)-'a');
            if(base!=16 || letter>=6)return 0;
            digit=letter+10;
        }
        value=value*base+digit;
        if(value>(uint64_t)0x80000000u)return 0;
    }while(*++p);
    if(!negative && value>INT32_MAX)return 0;
    *out=negative?(int32_t)(-(int64_t)value):(int32_t)value;
    return 1;
}

static inline unsigned char pf_literal_unsigned(const char *text,uint32_t *out) {
    char buffer[256];
    if(!text || !out || !pf_literal_prepare(text,buffer))return 0;
    const unsigned char *p=(const unsigned char *)buffer;
    unsigned base=10;
    if(p[0]=='0' && (p[1]=='x' || p[1]=='X')){base=16;p+=2;}
    else if(*p=='$'){base=16;p++;}
    if(!*p)return 0;
    uint64_t value=0;
    do {
        unsigned digit=(unsigned)(*p-'0');
        if(digit>=10) {
            unsigned letter=(unsigned)((*p|32)-'a');
            if(base!=16 || letter>=6)return 0;
            digit=letter+10;
        }
        value=value*base+digit;
        if(value>UINT32_MAX)return 0;
    }while(*++p);
    *out=(uint32_t)value;
    return 1;
}
