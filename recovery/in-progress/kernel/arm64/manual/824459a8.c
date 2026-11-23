/* Native two-double homogeneous aggregate return in D0/D1.
 * Pooka's Free Software License. */
#include "functions.h"
pf_point recovered_824459a8(double *first,double *last){
 return (pf_point){(first[0]+last[0])*0.5,(first[1]+last[1])*0.5};
}
