/* Share the recovered C codecs; retain the current native format set. Pooka's Free Software License. */
extern int pf_image_decode(const void *,uintptr_t,void *);
uint recovered_201e160(const void *data,uintptr_t size,void *image){ if(!recovered_201df50((void *)data,size)) return (uint)pf_image_decode(0,0,image); return (uint)pf_image_decode(data,size,image); }
