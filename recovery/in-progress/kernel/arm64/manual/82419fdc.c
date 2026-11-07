/* Native recursive quadratic outline subdivision.
 * Pooka's Free Software License. */
#include "functions.h"
void recovered_82419fdc(long *builder,const pf_point *first,const pf_point *control,const pf_point *last,int depth) {
 pf_point chord=recovered_8241995c((double *)first,(double *)last);
 double dx=control->x-chord.x,dy=control->y-chord.y;
 if(depth<10 && *(const double *)(uintptr_t)0x82473000U < dx*dx+dy*dy) {
  pf_point left=recovered_8241995c((double *)first,(double *)control);
  pf_point right=recovered_8241995c((double *)control,(double *)last);
  pf_point center={(left.x+right.x)*0.5,(left.y+right.y)*0.5};
  recovered_82419fdc(builder,first,&left,&center,depth+1);
  recovered_82419fdc(builder,&center,&right,last,depth+1);
 } else recovered_82419a18(builder,(double *)last);
}
