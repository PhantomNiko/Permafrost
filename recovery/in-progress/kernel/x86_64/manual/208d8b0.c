/* Native contour close; Pooka's Free Software License. */
#include "functions.h"
#include "manual/outline110.h"
void recovered_208d8b0(long *outline){
 double *start=(double *)(outline+4),*current=(double *)(outline+6);
 if(*(unsigned char *)(outline+3)==1 && (current[0]!=start[0] || current[1]!=start[1]))
  pf_outline_edge110(outline,current,start);
 *(unsigned char *)(outline+3)=0;current[0]=start[0];current[1]=start[1];
}
