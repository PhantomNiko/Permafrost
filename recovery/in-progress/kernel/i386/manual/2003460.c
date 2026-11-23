/* Native 1.1 formatting semantics. Pooka's Free Software License. */
#include "functions.h"
#include "format110.h"
int recovered_2003460(char *out,ulong capacity,char *format,void *arguments){
 return pf_format110(out,capacity,format,arguments);
}
