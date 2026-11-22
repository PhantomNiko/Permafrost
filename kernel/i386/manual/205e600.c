/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c6ace (*(uint8_t *)(0x20c6aceU))
#define DAT_020c6ad3 (*(uint8_t *)(0x20c6ad3U))
#define DAT_020c6ad8 (*(uint8_t *)(0x20c6ad8U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define local_1f9c (*(char (*)[8064])(frame + 20))
#define local_1c (*(undefined4 *)(frame + 8084))
#define local_18 (*(undefined4 *)(frame + 8088))
#define local_14 (*(uint *)(frame + 8092))

undefined4 recovered_205e600(int device){
 if(device<0)return 0;
 unsigned char local[16*504];unsigned char *entries=local;uint count=0,capacity=16;
 if(!recovered_202b3a0(device,"/Tayga",(char *)entries,capacity,&count))return 0;
 if(count>capacity){
  if(count>65536)return 0;
  capacity=count;entries=(unsigned char *)recovered_20010e0((ulong)capacity*504);
  if(!entries)return 0;
  if(!recovered_202b3a0(device,"/Tayga",(char *)entries,capacity,&count)){recovered_2001710(entries);return 0;}
 }
 byte home=0,root=0,etc=0;
 for(uint i=0;i<count&&i<capacity;i++){
  char *name=(char *)entries+(ulong)i*504;
  if(!recovered_20022a0(name,"home"))home=1;
  if(!recovered_20022a0(name,"root"))root=1;
  if(!recovered_20022a0(name,"etc"))etc=1;
 }
 if(entries!=local)recovered_2001710(entries);
 return home&root&etc;
}
#undef DAT_020c6ace
#undef DAT_020c6ad3
#undef DAT_020c6ad8
#undef str_020c6ac7
#undef local_1f9c
#undef local_1c
#undef local_18
#undef local_14
