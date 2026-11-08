/* Pooka's Free Software License. WFE5 kernel/firmware command ABI fixture. */
#include <assert.h>
#include "../recovery/in-progress/firmware/loader.c"
static uintptr_t waited;
static uint32_t selected;
static uint32_t context_words[PF_EFI_CONTEXT_BYTES/4];
static VideoInfo modes[2]={{.width=800,.height=600,.format=1,.stride=800},
                           {.width=1024,.height=768,.format=1,.stride=1024}};
static VideoMode mode={.maximum=2,.info=&modes[0],.framebuffer=UINT64_C(0x12345678000),.bytes=800*600*4};
static Video video;
static void *video_handles[1]={&video};
static Status EFI_ABI mock_stall(uintptr_t duration){waited=duration;return 0;}
static Status EFI_ABI mock_free(void *pool){(void)pool;return 0;}
static Status EFI_ABI mock_query(Video *v,uint32_t index,uintptr_t *size,VideoInfo **out){
    assert(v==&video&&index<2);*size=sizeof(VideoInfo);*out=&modes[index];return 0;
}
static Status EFI_ABI mock_set(Video *v,uint32_t index){
    assert(v==&video&&index<2);selected=index;mode.current=index;mode.info=&modes[index];mode.bytes=modes[index].width*modes[index].height*4;return 0;
}
static Status EFI_ABI mock_protocol(void *handle,Guid *guid,void **out){
    assert(handle==&video&&guid==&video_guid);*out=&video;return 0;
}
static Status EFI_ABI mock_handles(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){
    assert(kind==2&&guid==&video_guid&&!key);*count=1;*out=video_handles;return 0;
}
int main(void){
    Services boot={.stall=mock_stall,.free_pool=mock_free,.protocol=mock_protocol,.handles=mock_handles};
    System system={0};services=&boot;system_table=&system;context=context_words;
    video.query=mock_query;video.set=mock_set;video.mode=&mode;
    uint32_t request[32]={4,0};request[6]=7;request[7]=33000;
    assert(dispatch(request)==1&&request[1]==1&&waited==33000);
    request[0]=8;request[7]=17;request[8]=1024;request[9]=768;request[11]=0x55aa;
    assert(dispatch(request)==1&&request[1]==1&&selected==1);
    assert(request[11]==0x55aa&&request[12]==0x45678000&&request[13]==0x123);
    assert(request[14]==1024*768*4&&request[15]==4096&&request[16]==1024&&request[17]==768&&request[18]==32);
    assert(request[19]==0xff0000&&request[20]==0xff00&&request[21]==0xff);
    assert(request[22]==16&&request[23]==8&&request[24]==0);
    return 0;
}
