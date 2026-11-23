/* Recovered PFZ1 Mach-O allocation, token, checksum and output semantics.
 * Pooka's Free Software License. */
#include "functions.h"
#define PF_PFZ_MAXIMUM_SIZE UINT32_MAX
#include "pfz.c"
#undef PF_PFZ_MAXIMUM_SIZE
undefined8 recovered_20e9c10(char *input,ulong input_size,undefined8 *output,
                           ulong *output_size,char *error,ulong error_size){
 const char *message="invalid PFZ1 Mach-O output";
 if(output && output_size){
  *output=0;*output_size=0;message="invalid PFZ1 Mach-O header";
  const uint8_t *bytes=(const uint8_t *)input;
  if(bytes && input_size>=16 && bytes[0]=='P' && bytes[1]=='F' && bytes[2]=='Z' && bytes[3]=='1'){
   uint32_t size=little32(bytes+4);
   if(size && little32(bytes+8)==input_size-16){
    void *memory=recovered_20017b0(size);
    message="out of memory while decoding PFZ1 Mach-O";
    if(memory){
     size_t written=0;int status=pf_pfz_unpack(bytes,input_size,memory,size,&written);
     uint32_t magic=size>=4?little32(memory):0;
     if(status==PF_PFZ_OK && written==size &&
        (magic==0xbebafecaU || magic==0xbfbafecaU || magic==0xcefaedfeU ||
         magic==0xfeedfaceU || magic==0xfeedfacfU || magic==0xcffaedfeU)){
      *output=(uintptr_t)memory;*output_size=size;return 1;
     }
     recovered_2001810(memory);message="invalid PFZ1 Mach-O stream or checksum";
    }
   }
  }
 }
 if(error && error_size)recovered_2005f40(error,error_size,"%s",message);
 return 0;
}
