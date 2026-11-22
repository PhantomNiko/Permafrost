/* Recovered WBPT entry-name ABI; Pooka's Free Software License. */
#include "functions.h"
uchar recovered_8246949c(long entry,uchar *name){
 uchar copy[13]={0};if(!entry||!name)return 0;
 recovered_82400928(copy,(void *)(entry+16),12);
 return recovered_8243a1f0(copy,name);
}
