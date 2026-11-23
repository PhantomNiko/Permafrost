/* Native contour move; Pooka's Free Software License. */
#include "functions.h"
#include "manual/outline110.h"
void recovered_824459c4(long *outline,double *point){
 double *start=(double *)(outline+4),*current=(double *)(outline+6);
 if(*(unsigned char *)(outline+3)==1 && (current[0]!=start[0] || current[1]!=start[1]))
  recovered_82445a64(outline,start);
 start[0]=point[0];start[1]=point[1];current[0]=point[0];current[1]=point[1];
 *(unsigned char *)(outline+3)=1;pf_outline_bounds110(outline,point);
}
