/* Native ceiling applies one positive-fraction correction to floor.
 * Pooka's Free Software License. */
#include "functions.h"
double recovered_2003d20(double value){
 double integral=recovered_2003cf0(value);
 return integral<value?integral+1.0:integral;
}
