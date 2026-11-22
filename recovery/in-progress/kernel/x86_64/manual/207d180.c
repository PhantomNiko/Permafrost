#include "functions.h"
/* Complete Tayga root lookup; Pooka's Free Software License. */
byte recovered_207d180(int device){
 if(device<0)return 0;
 unsigned char local[16*504];unsigned char *entries=local;uint count=0,capacity=16;
 if(!recovered_20426d0(device,"/Tayga",(char *)entries,capacity,&count))return 0;
 if(count>capacity){
  if(count>65536)return 0;
  capacity=count;entries=(unsigned char *)recovered_2000620((ulong)capacity*504);
  if(!entries)return 0;
  if(!recovered_20426d0(device,"/Tayga",(char *)entries,capacity,&count)){recovered_2000bb0(entries);return 0;}
 }
 byte home=0,root=0,etc=0;
 for(uint i=0;i<count&&i<capacity;i++){
  char *name=(char *)entries+(ulong)i*504;
  if(!recovered_2002eb0(name,"home"))home=1;
  if(!recovered_2002eb0(name,"root"))root=1;
  if(!recovered_2002eb0(name,"etc"))etc=1;
 }
 if(entries!=local)recovered_2000bb0(entries);
 return home&root&etc;
}

