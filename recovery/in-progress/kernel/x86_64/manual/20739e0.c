/* Share the recovered release-matched image decoder with the kernel.
 * Pooka's Free Software License. */
#include "functions.h"
extern int pf_image_decode(const void *,uintptr_t,void *);
unsigned char recovered_20739e0(const void *data,uintptr_t size,void *image){return (unsigned char)pf_image_decode(data,size,image);}
