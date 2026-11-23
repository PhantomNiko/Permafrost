/* Native direct tail transfer preserves the selected-image status.
 * Pooka's Free Software License. */
#include "functions.h"
uint64_t recovered_8247bd68(uint *data,ulong length,uint cpu,uint magic,ulong header,
                          undefined8 name,undefined8 *out,ulong *out_length,
                          char *error,ulong error_capacity){
 return recovered_8247bda0(data,length,cpu,magic,header,0,(void *)name,out,out_length,error,error_capacity);
}
