/* Native font-backend virtual metric ABI. Pooka's Free Software License. */
#ifndef PF_FONT110_H
#define PF_FONT110_H
static double pf_font_metric110(void *backend,unsigned offset){
 uintptr_t table=*(uintptr_t *)backend;
 return ((double (*)(void *))*(uintptr_t *)(table+offset))(backend);
}
static int pf_font_mode110(void *backend){
 return ((int (*)(void *))*(uintptr_t *)(*(uintptr_t *)backend+0x40))(backend);
}
#endif
