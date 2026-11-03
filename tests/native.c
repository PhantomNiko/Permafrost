/* Permafrost 0.3 native compatibility probe. Pooka's Free Software License. */
#include <permafrost.h>
static uint32_t digest = 2166136261U;
static unsigned char data[1024];
static uint32_t random_state = 0x5046;
static unsigned random_byte(void) { random_state=random_state*1664525U+1013904223U; return random_state>>24; }
static void hash(uint32_t value) { for(unsigned i=0;i<4;++i) { digest=(digest^(value&255))*16777619U;value>>=8; } }
static void hash_data(void) { for(unsigned i=0;i<sizeof(data);++i) digest=(digest^data[i])*16777619U; }
#define COPY ((void *(*)(void*,const void*,unsigned))0x20f42)
#define MOVE ((void *(*)(void*,const void*,unsigned))0x20f63)
#define SET ((void *(*)(void*,int,unsigned))0x20fa9)
#define COMPARE ((int (*)(const void*,const void*,unsigned))0x20fc5)
#define LENGTH ((unsigned (*)(const char*))0x20ff4)
#define STRCMP ((int (*)(const char*,const char*))0x2100f)
#define STRCPY ((char *(*)(char*,const char*))0x21040)
#define SPAN ((unsigned (*)(const char*,const char*))0x2107f)
#define FIND ((char *(*)(const char*,const char*))0x210b6)
#define SEARCH ((char *(*)(const char*,const char*))0x210e4)
#define CHAR ((char *(*)(const char*,int))0x2105a)
static uint32_t offset(const void *p) { return p ? (const unsigned char*)p-data+1 : 0; }
int main(void) {
    const unsigned counts[]={0,1,2,3,7,16,31,64,127,255};
    const unsigned values[]={0,1,128,255,0x1234,0xffffffff};
    const unsigned dest[]={0,4,0,0},src[]={4,0,0,512};
    const char *strings[]={"","a","abc","abba","abcabc","xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx","\x80\xff" "a"};
    for(unsigned c=0;c<10;++c) {
        unsigned n=counts[c];
        for(unsigned i=0;i<1024;++i)data[i]=random_byte();
        hash(offset(COPY(data,data+512,n)));hash_data();
        for(unsigned i=0;i<4;++i){hash(offset(MOVE(data+dest[i],data+src[i],n)));hash_data();}
        for(unsigned i=0;i<6;++i){hash(offset(SET(data,values[i],n)));hash_data();}
        hash(COMPARE(data,data+512,n));hash(COMPARE(data,data,n));
    }
    for(unsigned a=0;a<7;++a)for(unsigned b=0;b<7;++b) {
        SET(data,0,sizeof(data)); STRCPY((char*)data,strings[a]);STRCPY((char*)data+512,strings[b]);
        hash(LENGTH((char*)data));hash(STRCMP((char*)data,(char*)data+512));
        hash(SPAN((char*)data,(char*)data+512));hash(offset(FIND((char*)data,(char*)data+512)));
        hash(offset(SEARCH((char*)data,(char*)data+512)));
        hash(offset(STRCPY((char*)data+512,(char*)data)));hash_data();
        hash(offset(CHAR((char*)data,0)));hash(offset(CHAR((char*)data,128)));hash(offset(CHAR((char*)data,'b')));
    }
    pf_log("PF-NATIVE-DIGEST %x\n",digest);
    return 42;
}
