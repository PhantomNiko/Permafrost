#include "functions.h"
void *recovered_20015c0(void *dest,const void *src,size_t count){unsigned char *d=dest;const unsigned char *s=src;if((uintptr_t)d<(uintptr_t)s){for(size_t i=0;i<count;i++)d[i]=s[i];}else{while(count){count--;d[count]=s[count];}}return dest;}
