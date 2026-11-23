/* Native glyph cache, keyed by glyph ID and font size.
 * Pooka's Free Software License. */
#include "functions.h"
typedef struct { unsigned key;pf_glyph glyph; } pf_cached_glyph110;
static unsigned pf_glyph_hash110(unsigned value){unsigned hash=0x811c9dc5;for(unsigned i=0;i<4;i++){hash=(hash^(value&255))*0x1000193;value>>=8;}return hash;}
pf_glyph *recovered_2077d70(pf_font_handle110 *font,unsigned glyph){
 pf_font_cache110 *cache=recovered_2078720(font);
 pf_cached_glyph110 *entries=cache->entries;
 unsigned hash=pf_glyph_hash110(glyph);
 if(cache->bucket_count)for(int i=((int *)cache->buckets)[hash&(cache->bucket_count-1)];i!=-1;i=((int *)cache->next)[i])if(entries[i].key==glyph)return &entries[i].glyph;
 void *backend=font->backend;uintptr_t *vtable=*(uintptr_t **)backend;
 double scale=(double)font->size/((double (*)(void *))vtable[4])(backend);
 pf_glyph rendered={0};((pf_glyph *(*)(pf_glyph *,void *,unsigned,double))vtable[3])(&rendered,backend,glyph,scale);
 cache->pixels+=rendered.count;
 if(!cache->bucket_count || cache->bucket_count*3<cache->count*4+4)recovered_20817d0((int *)&cache->entries,cache->count*2+2);
 recovered_2078850((int *)&cache->entries,cache->count+1);
 entries=cache->entries;unsigned index=cache->count++;
 entries[index].key=glyph;entries[index].glyph=rendered;
 unsigned bucket=hash&(cache->bucket_count-1);
 ((int *)cache->next)[index]=((int *)cache->buckets)[bucket];cache->next_count=cache->count;((int *)cache->buckets)[bucket]=(int)index;
 return &entries[index].glyph;
}
