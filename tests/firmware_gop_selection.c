/* Pooka's Free Software License. GOP selection across RAMFB and virtio outputs. */
#include <assert.h>
#include "../recovery/in-progress/firmware/loader.c"
static uint32_t words[PF_EFI_CONTEXT_BYTES/4];
static uint32_t surface[1280*800];
static VideoInfo small={.width=800,.height=600,.stride=800,.format=1};
static VideoInfo large={.width=1280,.height=800,.stride=1280,.format=3};
static VideoInfo console_info={.width=800,.height=600,.stride=800,.format=3};
static VideoMode modes[3];static Video outputs[3];static void *handles[3];
static unsigned shown;
static Status EFI_ABI list(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){
 assert(kind==2 && guid==&video_guid && !key);*count=3;*out=handles;return 0;
}
static Status EFI_ABI protocol(void *handle,Guid *guid,void **out){assert(guid==&video_guid);*out=handle;return 0;}
static Status EFI_ABI release(void *p){assert(p==handles);return 0;}
static Status EFI_ABI blit(Video *v,uint32_t *pixels,uint32_t op,uintptr_t sx,uintptr_t sy,uintptr_t dx,uintptr_t dy,uintptr_t w,uintptr_t h,uintptr_t pitch){
 assert(v==&outputs[1] && pixels==surface && op==2 && !sx && !sy && !dx && !dy && w==1280 && h==800 && pitch==5120);shown++;return 0;
}
int main(void){
 modes[0]=(VideoMode){.info=&small,.framebuffer=0x200000,.bytes=800*600*4};modes[1]=(VideoMode){.info=&large};modes[2]=(VideoMode){.info=&console_info};
 for(unsigned i=0;i<3;i++){outputs[i]=(Video){.mode=&modes[i],.blit=blit};handles[i]=&outputs[i];}
 Services boot={.handles=list,.protocol=protocol,.free_pool=release};System table={.output_handle=&outputs[2]};services=&boot;system_table=&table;context=words;
 blt_pixels=surface;blt_capacity=sizeof(surface);video_context();
 assert(blt_video==&outputs[1] && context[0x16]==1280 && context[0x17]==800 && context[0x15]==5120);
 video_present();assert(shown==1);
 large.format=4;video_context();assert(!blt_video && context[0x16]==800 && context[0x17]==600 && context[0x13]==0x200000);
 large.format=3;large.width=9000;video_context();assert(!blt_video && context[0x16]==800);
 large.width=1280;outputs[1].blit=0;video_context();assert(!blt_video && context[0x16]==800);return 0;
}
