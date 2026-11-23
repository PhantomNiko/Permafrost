/* Native contour line; Pooka's Free Software License. */
#include "functions.h"
#include "manual/outline110.h"
void recovered_82445a64(long *outline,double *point){
 if(*(unsigned char *)(outline+3)!=1){recovered_824459c4(outline,point);return;}
 double *current=(double *)(outline+6);
 if(current[0]!=point[0] || current[1]!=point[1]){
  pf_outline_edge110(outline,current,point);current[0]=point[0];current[1]=point[1];
 }
 pf_outline_bounds110(outline,point);
}
