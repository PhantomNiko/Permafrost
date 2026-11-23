/* Native quadratic subdivision, bounded to ten levels.
 * Pooka's Free Software License. */
#include "functions.h"
void recovered_207e190(long *outline,double *first,double *control,double *last,int depth){
 if(depth<10){
  double dx=control[0]-(first[0]+last[0])*0.5;
  double dy=control[1]-(first[1]+last[1])*0.5;
  if(dx*dx+dy*dy>0x1.f5c28f5c28f5bp-4){
   double a[2]={(first[0]+control[0])*0.5,(first[1]+control[1])*0.5};
   double b[2]={(last[0]+control[0])*0.5,(last[1]+control[1])*0.5};
   double middle[2]={(a[0]+b[0])*0.5,(a[1]+b[1])*0.5};
   recovered_207e190(outline,first,a,middle,depth+1);
   recovered_207e190(outline,middle,b,last,depth+1);return;
  }
 }
 recovered_207ddf0(outline,last);
}
