/* Native compact byte units and integer decimal thresholds.
 * Pooka's Free Software License. */
#include "functions.h"
ulong recovered_8246d5e0(ulong bytes,char *out,ulong capacity){
 if(!out || !capacity)return bytes;
 unsigned long whole=bytes>>30;
 if(whole){
  unsigned long fraction=bytes&0x3fffffffUL;
  if(fraction>=0x6666667UL && (unsigned)whole<=9)
   return (unsigned)recovered_824026e8(out,capacity,"%u.%u GB",(unsigned)whole,(unsigned)(fraction*5>>29));
  return (unsigned)recovered_824026e8(out,capacity,"%u GB",(unsigned)whole);
 }
 if(bytes>=0x100000)return (unsigned)recovered_824026e8(out,capacity,"%u MB",(unsigned)(bytes>>20));
 if(bytes>=0x400)return (unsigned)recovered_824026e8(out,capacity,"%u KB",(unsigned)(bytes>>10));
 return (unsigned)recovered_824026e8(out,capacity,"%u B",(unsigned)bytes);
}
